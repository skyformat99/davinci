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

#include "JSHTMLInputElement.h"

#include <wtf/GetPtr.h>

#include "HTMLFormElement.h"
#include "HTMLInputElement.h"
#include "JSHTMLFormElement.h"
#include "PlatformString.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSHTMLInputElementTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "defaultChecked", JSHTMLInputElement::DefaultCheckedAttrNum, DontDelete, 0, &JSHTMLInputElementTableEntries[26] },
    { "indeterminate", JSHTMLInputElement::IndeterminateAttrNum, DontDelete, 0, 0 },
    { "defaultValue", JSHTMLInputElement::DefaultValueAttrNum, DontDelete, 0, &JSHTMLInputElementTableEntries[20] },
    { 0, 0, 0, 0, 0 },
    { "value", JSHTMLInputElement::ValueAttrNum, DontDelete, 0, 0 },
    { "size", JSHTMLInputElement::SizeAttrNum, DontDelete, 0, 0 },
    { "accept", JSHTMLInputElement::AcceptAttrNum, DontDelete, 0, 0 },
    { "accessKey", JSHTMLInputElement::AccessKeyAttrNum, DontDelete, 0, 0 },
    { "maxLength", JSHTMLInputElement::MaxLengthAttrNum, DontDelete, 0, 0 },
    { "readOnly", JSHTMLInputElement::ReadOnlyAttrNum, DontDelete, 0, 0 },
    { "alt", JSHTMLInputElement::AltAttrNum, DontDelete, 0, &JSHTMLInputElementTableEntries[22] },
    { 0, 0, 0, 0, 0 },
    { "checked", JSHTMLInputElement::CheckedAttrNum, DontDelete, 0, &JSHTMLInputElementTableEntries[24] },
    { 0, 0, 0, 0, 0 },
    { "constructor", JSHTMLInputElement::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "form", JSHTMLInputElement::FormAttrNum, DontDelete|ReadOnly, 0, &JSHTMLInputElementTableEntries[21] },
    { "align", JSHTMLInputElement::AlignAttrNum, DontDelete, 0, &JSHTMLInputElementTableEntries[23] },
    { "disabled", JSHTMLInputElement::DisabledAttrNum, DontDelete, 0, &JSHTMLInputElementTableEntries[25] },
    { "name", JSHTMLInputElement::NameAttrNum, DontDelete, 0, &JSHTMLInputElementTableEntries[27] },
    { "src", JSHTMLInputElement::SrcAttrNum, DontDelete, 0, 0 },
    { "tabIndex", JSHTMLInputElement::TabIndexAttrNum, DontDelete, 0, 0 },
    { "type", JSHTMLInputElement::TypeAttrNum, DontDelete, 0, 0 },
    { "useMap", JSHTMLInputElement::UseMapAttrNum, DontDelete, 0, 0 }
};

static const HashTable JSHTMLInputElementTable = 
{
    2, 28, JSHTMLInputElementTableEntries, 20
};

/* Hash table for constructor */

static const HashEntry JSHTMLInputElementConstructorTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSHTMLInputElementConstructorTable = 
{
    2, 1, JSHTMLInputElementConstructorTableEntries, 1
};

class JSHTMLInputElementConstructor : public DOMObject {
public:
    JSHTMLInputElementConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSHTMLInputElementPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSHTMLInputElementConstructor::info = { "HTMLInputElementConstructor", 0, &JSHTMLInputElementConstructorTable, 0 };

bool JSHTMLInputElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLInputElementConstructor, DOMObject>(exec, &JSHTMLInputElementConstructorTable, this, propertyName, slot);
}

JSValue* JSHTMLInputElementConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSHTMLInputElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { "click", JSHTMLInputElement::ClickFuncNum, DontDelete|Function, 0, 0 },
    { "focus", JSHTMLInputElement::FocusFuncNum, DontDelete|Function, 0, 0 },
    { "blur", JSHTMLInputElement::BlurFuncNum, DontDelete|Function, 0, &JSHTMLInputElementPrototypeTableEntries[4] },
    { "select", JSHTMLInputElement::SelectFuncNum, DontDelete|Function, 0, 0 }
};

static const HashTable JSHTMLInputElementPrototypeTable = 
{
    2, 5, JSHTMLInputElementPrototypeTableEntries, 4
};

const ClassInfo JSHTMLInputElementPrototype::info = { "HTMLInputElementPrototype", 0, &JSHTMLInputElementPrototypeTable, 0 };

JSObject* JSHTMLInputElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLInputElementPrototype>(exec, "[[JSHTMLInputElement.prototype]]");
}

bool JSHTMLInputElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSHTMLInputElementPrototypeFunction, JSObject>(exec, &JSHTMLInputElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSHTMLInputElement::info = { "HTMLInputElement", &JSHTMLInputElementBase::info, &JSHTMLInputElementTable, 0 };

JSHTMLInputElement::JSHTMLInputElement(ExecState* exec, HTMLInputElement* impl)
    : JSHTMLInputElementBase(exec, impl)
{
    setPrototype(JSHTMLInputElementPrototype::self(exec));
}

bool JSHTMLInputElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLInputElement, JSHTMLInputElementBase>(exec, &JSHTMLInputElementTable, this, propertyName, slot);
}

JSValue* JSHTMLInputElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case DefaultValueAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsString(imp->defaultValue());
    }
    case DefaultCheckedAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsBoolean(imp->defaultChecked());
    }
    case FormAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->form()));
    }
    case AcceptAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsString(imp->accept());
    }
    case AccessKeyAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsString(imp->accessKey());
    }
    case AlignAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsString(imp->align());
    }
    case AltAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsString(imp->alt());
    }
    case CheckedAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsBoolean(imp->checked());
    }
    case DisabledAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsBoolean(imp->disabled());
    }
    case MaxLengthAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsNumber(imp->maxLength());
    }
    case NameAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsString(imp->name());
    }
    case ReadOnlyAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsBoolean(imp->readOnly());
    }
    case SizeAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsNumber(imp->size());
    }
    case SrcAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsString(imp->src());
    }
    case TabIndexAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsNumber(imp->tabIndex());
    }
    case TypeAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsString(imp->type());
    }
    case UseMapAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsString(imp->useMap());
    }
    case ValueAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsString(imp->value());
    }
    case IndeterminateAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        return jsBoolean(imp->indeterminate());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSHTMLInputElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSHTMLInputElement, JSHTMLInputElementBase>(exec, propertyName, value, attr, &JSHTMLInputElementTable, this);
}

void JSHTMLInputElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case DefaultValueAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setDefaultValue(valueToStringWithNullCheck(exec, value));
        break;
    }
    case DefaultCheckedAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setDefaultChecked(value->toBoolean(exec));
        break;
    }
    case AcceptAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setAccept(valueToStringWithNullCheck(exec, value));
        break;
    }
    case AccessKeyAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setAccessKey(valueToStringWithNullCheck(exec, value));
        break;
    }
    case AlignAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setAlign(valueToStringWithNullCheck(exec, value));
        break;
    }
    case AltAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setAlt(valueToStringWithNullCheck(exec, value));
        break;
    }
    case CheckedAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setChecked(value->toBoolean(exec));
        break;
    }
    case DisabledAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setDisabled(value->toBoolean(exec));
        break;
    }
    case MaxLengthAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setMaxLength(value->toInt32(exec));
        break;
    }
    case NameAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setName(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ReadOnlyAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setReadOnly(value->toBoolean(exec));
        break;
    }
    case SizeAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setSize(value->toInt32(exec));
        break;
    }
    case SrcAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setSrc(valueToStringWithNullCheck(exec, value));
        break;
    }
    case TabIndexAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setTabIndex(value->toInt32(exec));
        break;
    }
    case TypeAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setType(valueToStringWithNullCheck(exec, value));
        break;
    }
    case UseMapAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setUseMap(valueToStringWithNullCheck(exec, value));
        break;
    }
    case ValueAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setValue(valueToStringWithNullCheck(exec, value));
        break;
    }
    case IndeterminateAttrNum: {
        HTMLInputElement* imp = static_cast<HTMLInputElement*>(impl());

        imp->setIndeterminate(value->toBoolean(exec));
        break;
    }
    }
}

JSValue* JSHTMLInputElement::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSHTMLInputElementConstructor>(exec, "[[HTMLInputElement.constructor]]");
}
JSValue* JSHTMLInputElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSHTMLInputElement::info))
      return throwError(exec, TypeError);

    JSHTMLInputElement* castedThisObj = static_cast<JSHTMLInputElement*>(thisObj);
    HTMLInputElement* imp = static_cast<HTMLInputElement*>(castedThisObj->impl());

    switch (id) {
    case JSHTMLInputElement::BlurFuncNum: {

        imp->blur();
        return jsUndefined();
    }
    case JSHTMLInputElement::FocusFuncNum: {

        imp->focus();
        return jsUndefined();
    }
    case JSHTMLInputElement::SelectFuncNum: {

        imp->select();
        return jsUndefined();
    }
    case JSHTMLInputElement::ClickFuncNum: {

        imp->click();
        return jsUndefined();
    }
    }
    return 0;
}

}