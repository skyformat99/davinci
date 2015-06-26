/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"


#if ENABLE(SVG)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGAElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "PlatformString.h"
#include "SVGAElement.h"
#include "SVGElement.h"
#include "SVGStringList.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGAElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "transform", JSSVGAElement::TransformAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "xmlspace", JSSVGAElement::XmlspaceAttrNum, DontDelete, 0, 0 },
    { "requiredFeatures", JSSVGAElement::RequiredFeaturesAttrNum, DontDelete|ReadOnly, 0, &JSSVGAElementTableEntries[13] },
    { "farthestViewportElement", JSSVGAElement::FarthestViewportElementAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "target", JSSVGAElement::TargetAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "style", JSSVGAElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "systemLanguage", JSSVGAElement::SystemLanguageAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "href", JSSVGAElement::HrefAttrNum, DontDelete|ReadOnly, 0, &JSSVGAElementTableEntries[14] },
    { "externalResourcesRequired", JSSVGAElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "requiredExtensions", JSSVGAElement::RequiredExtensionsAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "xmllang", JSSVGAElement::XmllangAttrNum, DontDelete, 0, &JSSVGAElementTableEntries[15] },
    { "className", JSSVGAElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "nearestViewportElement", JSSVGAElement::NearestViewportElementAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGAElementTable = 
{
    2, 16, JSSVGAElementTableEntries, 13
};

/* Hash table for prototype */

static const HashEntry JSSVGAElementPrototypeTableEntries[] =
{
    { "getPresentationAttribute", JSSVGAElement::GetPresentationAttributeFuncNum, DontDelete|Function, 1, 0 },
    { "hasExtension", JSSVGAElement::HasExtensionFuncNum, DontDelete|Function, 1, 0 },
    { "getCTM", JSSVGAElement::GetCTMFuncNum, DontDelete|Function, 0, 0 },
    { "getScreenCTM", JSSVGAElement::GetScreenCTMFuncNum, DontDelete|Function, 0, 0 },
    { "getTransformToElement", JSSVGAElement::GetTransformToElementFuncNum, DontDelete|Function, 1, 0 },
    { "getBBox", JSSVGAElement::GetBBoxFuncNum, DontDelete|Function, 0, 0 }
};

static const HashTable JSSVGAElementPrototypeTable = 
{
    2, 6, JSSVGAElementPrototypeTableEntries, 6
};

const ClassInfo JSSVGAElementPrototype::info = { "SVGAElementPrototype", 0, &JSSVGAElementPrototypeTable, 0 };

JSObject* JSSVGAElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGAElementPrototype>(exec, "[[JSSVGAElement.prototype]]");
}

bool JSSVGAElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSSVGAElementPrototypeFunction, JSObject>(exec, &JSSVGAElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGAElement::info = { "SVGAElement", &JSSVGElement::info, &JSSVGAElementTable, 0 };

JSSVGAElement::JSSVGAElement(ExecState* exec, SVGAElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGAElementPrototype::self(exec));
}

bool JSSVGAElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGAElement, JSSVGElement>(exec, &JSSVGAElementTable, this, propertyName, slot);
}

JSValue* JSSVGAElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case TargetAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->targetAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case HrefAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case RequiredFeaturesAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
    }
    case RequiredExtensionsAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
    }
    case SystemLanguageAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
    }
    case XmllangAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        return jsString(imp->xmllang());
    }
    case XmlspaceAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        return jsString(imp->xmlspace());
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case TransformAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case NearestViewportElementAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->nearestViewportElement()));
    }
    case FarthestViewportElementAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->farthestViewportElement()));
    }
    }
    return 0;
}

void JSSVGAElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGAElement, JSSVGElement>(exec, propertyName, value, attr, &JSSVGAElementTable, this);
}

void JSSVGAElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case XmllangAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        imp->setXmllang(value->toString(exec));
        break;
    }
    case XmlspaceAttrNum: {
        SVGAElement* imp = static_cast<SVGAElement*>(impl());

        imp->setXmlspace(value->toString(exec));
        break;
    }
    }
}

JSValue* JSSVGAElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGAElement::info))
      return throwError(exec, TypeError);

    JSSVGAElement* castedThisObj = static_cast<JSSVGAElement*>(thisObj);
    SVGAElement* imp = static_cast<SVGAElement*>(castedThisObj->impl());

    switch (id) {
    case JSSVGAElement::HasExtensionFuncNum: {
        String extension = args[0]->toString(exec);


        KJS::JSValue* result = jsBoolean(imp->hasExtension(extension));
        return result;
    }
    case JSSVGAElement::GetPresentationAttributeFuncNum: {
        String name = args[0]->toString(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
        return result;
    }
    case JSSVGAElement::GetBBoxFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapperCreatorReadOnly<FloatRect>(imp->getBBox()), imp);
        return result;
    }
    case JSSVGAElement::GetCTMFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapperCreatorReadOnly<AffineTransform>(imp->getCTM()), imp);
        return result;
    }
    case JSSVGAElement::GetScreenCTMFuncNum: {


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapperCreatorReadOnly<AffineTransform>(imp->getScreenCTM()), imp);
        return result;
    }
    case JSSVGAElement::GetTransformToElementFuncNum: {
        ExceptionCode ec = 0;
        SVGElement* element = toSVGElement(args[0]);


        KJS::JSValue* result = toJS(exec, new JSSVGPODTypeWrapperCreatorReadOnly<AffineTransform>(imp->getTransformToElement(element, ec)), imp);
        setDOMException(exec, ec);
        return result;
    }
    }
    return 0;
}

}

#endif // ENABLE(SVG)