/*
 * Copyright (C) 1999 Lars Knoll (knoll@kde.org)
 *           (C) 1999 Antti Koivisto (koivisto@kde.org)
 * Copyright (C) 2003, 2004, 2005, 2006, 2007, 2008, 2009 Apple Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#include "config.h"
#include "Text.h"

#include "ExceptionCode.h"
#include "ExceptionCodePlaceholder.h"
#include "NodeRenderingContext.h"
#include "RenderCombineText.h"
#include "RenderText.h"
#include "ScopedEventQueue.h"
#include "ShadowRoot.h"
#include "TextNodeTraversal.h"

#if ENABLE(SVG)
#include "RenderSVGInlineText.h"
#include "SVGNames.h"
#endif

#include "StyleInheritedData.h"
#include "StyleResolver.h"
#include <wtf/CheckedArithmetic.h>
#include <wtf/text/CString.h>
#include <wtf/text/StringBuilder.h>

using namespace std;

namespace WebCore {

PassRefPtr<Text> Text::create(Document* document, const String& data)
{
    return adoptRef(new Text(document, data, CreateText));
}

PassRefPtr<Text> Text::createEditingText(Document* document, const String& data)
{
    return adoptRef(new Text(document, data, CreateEditingText));
}

Text::~Text()
{
    if (renderer())
        detachText();
}

PassRefPtr<Text> Text::splitText(unsigned offset, ExceptionCode& ec)
{
    ec = 0;

    // INDEX_SIZE_ERR: Raised if the specified offset is negative or greater than
    // the number of 16-bit units in data.
    if (offset > length()) {
        ec = INDEX_SIZE_ERR;
        return 0;
    }

    EventQueueScope scope;
    String oldStr = data();
    RefPtr<Text> newText = virtualCreate(oldStr.substring(offset));
    setDataWithoutUpdate(oldStr.substring(0, offset));

    dispatchModifiedEvent(oldStr);

    if (parentNode())
        parentNode()->insertBefore(newText.get(), nextSibling(), ec);
    if (ec)
        return 0;

    if (parentNode())
        document()->textNodeSplit(this);

    if (renderer())
        toRenderText(renderer())->setTextWithOffset(dataImpl(), 0, oldStr.length());

    return newText.release();
}

static const Text* earliestLogicallyAdjacentTextNode(const Text* text)
{
    const Node* node = text;
    while ((node = node->previousSibling())) {
        if (!node->isTextNode())
            break;
        text = toText(node);
    }
    return text;
}

static const Text* latestLogicallyAdjacentTextNode(const Text* text)
{
    const Node* node = text;
    while ((node = node->nextSibling())) {
        if (!node->isTextNode())
            break;
        text = toText(node);
    }
    return text;
}

String Text::wholeText() const
{
    const Text* startText = earliestLogicallyAdjacentTextNode(this);
    const Text* endText = latestLogicallyAdjacentTextNode(this);
    const Node* onePastEndText = TextNodeTraversal::nextSibling(endText);

    StringBuilder result;
    for (const Text* text = startText; text != onePastEndText; text = TextNodeTraversal::nextSibling(text))
        result.append(text->data());
    return result.toString();
}

PassRefPtr<Text> Text::replaceWholeText(const String& newText, ExceptionCode&)
{
    // Remove all adjacent text nodes, and replace the contents of this one.

    // Protect startText and endText against mutation event handlers removing the last ref
    RefPtr<Text> startText = const_cast<Text*>(earliestLogicallyAdjacentTextNode(this));
    RefPtr<Text> endText = const_cast<Text*>(latestLogicallyAdjacentTextNode(this));

    RefPtr<Text> protectedThis(this); // Mutation event handlers could cause our last ref to go away
    RefPtr<ContainerNode> parent = parentNode(); // Protect against mutation handlers moving this node during traversal
    for (RefPtr<Node> n = startText; n && n != this && n->isTextNode() && n->parentNode() == parent;) {
        RefPtr<Node> nodeToRemove(n.release());
        n = nodeToRemove->nextSibling();
        parent->removeChild(nodeToRemove.get(), IGNORE_EXCEPTION);
    }

    if (this != endText) {
        Node* onePastEndText = endText->nextSibling();
        for (RefPtr<Node> n = nextSibling(); n && n != onePastEndText && n->isTextNode() && n->parentNode() == parent;) {
            RefPtr<Node> nodeToRemove(n.release());
            n = nodeToRemove->nextSibling();
            parent->removeChild(nodeToRemove.get(), IGNORE_EXCEPTION);
        }
    }

    if (newText.isEmpty()) {
        if (parent && parentNode() == parent)
            parent->removeChild(this, IGNORE_EXCEPTION);
        return 0;
    }

    setData(newText, IGNORE_EXCEPTION);
    return protectedThis.release();
}

String Text::nodeName() const
{
    return textAtom.string();
}

Node::NodeType Text::nodeType() const
{
    return TEXT_NODE;
}

PassRefPtr<Node> Text::cloneNode(bool /*deep*/)
{
    return create(document(), data());
}

bool Text::textRendererIsNeeded(const NodeRenderingContext& context)
{
    if (isEditingText())
        return true;

    if (!length())
        return false;

    if (context.style()->display() == NONE)
        return false;

    bool onlyWS = containsOnlyWhitespace();
    if (!onlyWS)
        return true;

    RenderObject* parent = context.parentRenderer();
    if (parent->isTable() || parent->isTableRow() || parent->isTableSection() || parent->isRenderTableCol() || parent->isFrameSet())
        return false;
    
    if (context.style()->preserveNewline()) // pre/pre-wrap/pre-line always make renderers.
        return true;
    
    RenderObject* prev = context.previousRenderer();
    if (prev && prev->isBR()) // <span><br/> <br/></span>
        return false;
        
    if (parent->isRenderInline()) {
        // <span><div/> <div/></span>
        if (prev && !prev->isInline())
            return false;
    } else {
        if (parent->isRenderBlock() && !parent->childrenInline() && (!prev || !prev->isInline()))
            return false;
        
        RenderObject* first = parent->firstChild();
        while (first && first->isFloatingOrOutOfFlowPositioned())
            first = first->nextSibling();
        if (!first || context.nextRenderer() == first) {
            // Whitespace at the start of a block just goes away.  Don't even
            // make a render object for this text.
            return false;
        }
    }
    
    return true;
}

#if ENABLE(SVG)
static bool isSVGShadowText(Text* text)
{
    Node* parentNode = text->parentNode();
    return parentNode->isShadowRoot() && toShadowRoot(parentNode)->hostElement()->hasTagName(SVGNames::trefTag);
}

static bool isSVGText(Text* text)
{
    Node* parentOrShadowHostNode = text->parentOrShadowHostNode();
    return parentOrShadowHostNode->isSVGElement() && !parentOrShadowHostNode->hasTagName(SVGNames::foreignObjectTag);
}
#endif

void Text::createTextRendererIfNeeded()
{
    NodeRenderingContext(this).createRendererForTextIfNeeded();
}

RenderText* Text::createTextRenderer(RenderArena* arena, RenderStyle* style)
{
#if ENABLE(SVG)
    if (isSVGText(this) || isSVGShadowText(this))
        return new (arena) RenderSVGInlineText(this, dataImpl());
#endif
    if (style->hasTextCombine())
        return new (arena) RenderCombineText(this, dataImpl());

    return new (arena) RenderText(this, dataImpl());
}

void Text::createTextRenderersForSiblingsAfterAttachIfNeeded(Node* sibling)
{
    ASSERT(sibling->previousSibling());
    ASSERT(sibling->previousSibling()->renderer());
    ASSERT(!sibling->renderer());
    ASSERT(sibling->attached());
    // If this node got a renderer it may be the previousRenderer() of sibling text nodes and thus affect the
    // result of Text::textRendererIsNeeded() for those nodes.
    for (; sibling; sibling = sibling->nextSibling()) {
        if (sibling->renderer())
            break;
        if (!sibling->attached())
            break; // Assume this means none of the following siblings are attached.
        if (!sibling->isTextNode())
            continue;
        ASSERT(!sibling->renderer());
        toText(sibling)->createTextRendererIfNeeded();
        // If we again decided not to create a renderer for next, we can bail out the loop,
        // because it won't affect the result of Text::textRendererIsNeeded() for the rest
        // of sibling nodes.
        if (!sibling->renderer())
            break;
    }
}

void Text::attachText()
{
    createTextRendererIfNeeded();

    Node* sibling = nextSibling();
    if (renderer() && sibling && !sibling->renderer() && sibling->attached())
        createTextRenderersForSiblingsAfterAttachIfNeeded(sibling);

    setAttached(true);
    clearNeedsStyleRecalc();
}

void Text::detachText()
{
    if (renderer())
        renderer()->destroyAndCleanupAnonymousWrappers();
    setRenderer(0);
    setAttached(false);
}

void Text::updateTextRenderer(unsigned offsetOfReplacedData, unsigned lengthOfReplacedData)
{
    if (!attached())
        return;
    RenderText* textRenderer = toRenderText(renderer());
    if (!textRenderer) {
        attachText();
        return;
    }
    NodeRenderingContext renderingContext(this, textRenderer->style());
    if (!textRendererIsNeeded(renderingContext)) {
        if (attached())
            detachText();
        attachText();
        return;
    }
    textRenderer->setTextWithOffset(dataImpl(), offsetOfReplacedData, lengthOfReplacedData);
}

bool Text::childTypeAllowed(NodeType) const
{
    return false;
}

PassRefPtr<Text> Text::virtualCreate(const String& data)
{
    return create(document(), data);
}

PassRefPtr<Text> Text::createWithLengthLimit(Document* document, const String& data, unsigned start, unsigned lengthLimit)
{
    unsigned dataLength = data.length();

    if (!start && dataLength <= lengthLimit)
        return create(document, data);

    RefPtr<Text> result = Text::create(document, String());
    result->parserAppendData(data, start, lengthLimit);

    return result;
}

#ifndef NDEBUG
void Text::formatForDebugger(char *buffer, unsigned length) const
{
    StringBuilder result;
    String s;

    result.append(nodeName());

    s = data();
    if (s.length() > 0) {
        if (result.length())
            result.appendLiteral("; ");
        result.appendLiteral("value=");
        result.append(s);
    }

    strncpy(buffer, result.toString().utf8().data(), length - 1);
}
#endif

} // namespace WebCore