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


#if ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGFilterElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedInteger.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "PlatformString.h"
#include "SVGFilterElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGFilterElementTableEntries[] =
{
    { "xmlspace", JSSVGFilterElement::XmlspaceAttrNum, DontDelete, 0, 0 },
    { "width", JSSVGFilterElement::WidthAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "style", JSSVGFilterElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "filterResY", JSSVGFilterElement::FilterResYAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "filterUnits", JSSVGFilterElement::FilterUnitsAttrNum, DontDelete|ReadOnly, 0, &JSSVGFilterElementTableEntries[15] },
    { 0, 0, 0, 0, 0 },
    { "className", JSSVGFilterElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "x", JSSVGFilterElement::XAttrNum, DontDelete|ReadOnly, 0, &JSSVGFilterElementTableEntries[14] },
    { 0, 0, 0, 0, 0 },
    { "primitiveUnits", JSSVGFilterElement::PrimitiveUnitsAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "y", JSSVGFilterElement::YAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "filterResX", JSSVGFilterElement::FilterResXAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "height", JSSVGFilterElement::HeightAttrNum, DontDelete|ReadOnly, 0, &JSSVGFilterElementTableEntries[17] },
    { "href", JSSVGFilterElement::HrefAttrNum, DontDelete|ReadOnly, 0, &JSSVGFilterElementTableEntries[16] },
    { "xmllang", JSSVGFilterElement::XmllangAttrNum, DontDelete, 0, 0 },
    { "externalResourcesRequired", JSSVGFilterElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFilterElementTable = 
{
    2, 18, JSSVGFilterElementTableEntries, 14
};

/* Hash table for prototype */

static const HashEntry JSSVGFilterElementPrototypeTableEntries[] =
{
    { "setFilterRes", JSSVGFilterElement::SetFilterResFuncNum, DontDelete|Function, 2, &JSSVGFilterElementPrototypeTableEntries[2] },
    { 0, 0, 0, 0, 0 },
    { "getPresentationAttribute", JSSVGFilterElement::GetPresentationAttributeFuncNum, DontDelete|Function, 1, 0 }
};

static const HashTable JSSVGFilterElementPrototypeTable = 
{
    2, 3, JSSVGFilterElementPrototypeTableEntries, 2
};

const ClassInfo JSSVGFilterElementPrototype::info = { "SVGFilterElementPrototype", 0, &JSSVGFilterElementPrototypeTable, 0 };

JSObject* JSSVGFilterElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGFilterElementPrototype>(exec, "[[JSSVGFilterElement.prototype]]");
}

bool JSSVGFilterElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSSVGFilterElementPrototypeFunction, JSObject>(exec, &JSSVGFilterElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGFilterElement::info = { "SVGFilterElement", &JSSVGElement::info, &JSSVGFilterElementTable, 0 };

JSSVGFilterElement::JSSVGFilterElement(ExecState* exec, SVGFilterElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGFilterElementPrototype::self(exec));
}

bool JSSVGFilterElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFilterElement, JSSVGElement>(exec, &JSSVGFilterElementTable, this, propertyName, slot);
}

JSValue* JSSVGFilterElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case FilterUnitsAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        RefPtr<SVGAnimatedEnumeration> obj = imp->filterUnitsAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case PrimitiveUnitsAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        RefPtr<SVGAnimatedEnumeration> obj = imp->primitiveUnitsAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case XAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case WidthAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case HeightAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case FilterResXAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        RefPtr<SVGAnimatedInteger> obj = imp->filterResXAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case FilterResYAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        RefPtr<SVGAnimatedInteger> obj = imp->filterResYAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case HrefAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->hrefAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case XmllangAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        return jsString(imp->xmllang());
    }
    case XmlspaceAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        return jsString(imp->xmlspace());
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}

void JSSVGFilterElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, int attr)
{
    lookupPut<JSSVGFilterElement, JSSVGElement>(exec, propertyName, value, attr, &JSSVGFilterElementTable, this);
}

void JSSVGFilterElement::putValueProperty(ExecState* exec, int token, JSValue* value, int /*attr*/)
{
    switch (token) {
    case XmllangAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        imp->setXmllang(value->toString(exec));
        break;
    }
    case XmlspaceAttrNum: {
        SVGFilterElement* imp = static_cast<SVGFilterElement*>(impl());

        imp->setXmlspace(value->toString(exec));
        break;
    }
    }
}

JSValue* JSSVGFilterElementPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSSVGFilterElement::info))
      return throwError(exec, TypeError);

    JSSVGFilterElement* castedThisObj = static_cast<JSSVGFilterElement*>(thisObj);
    SVGFilterElement* imp = static_cast<SVGFilterElement*>(castedThisObj->impl());

    switch (id) {
    case JSSVGFilterElement::SetFilterResFuncNum: {
        bool filterResXOk;
        unsigned filterResX = args[0]->toInt32(exec, filterResXOk);
        if (!filterResXOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }
        bool filterResYOk;
        unsigned filterResY = args[1]->toInt32(exec, filterResYOk);
        if (!filterResYOk) {
            setDOMException(exec, TYPE_MISMATCH_ERR);
            return jsUndefined();
        }

        imp->setFilterRes(filterResX, filterResY);
        return jsUndefined();
    }
    case JSSVGFilterElement::GetPresentationAttributeFuncNum: {
        String name = args[0]->toString(exec);


        KJS::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
        return result;
    }
    }
    return 0;
}

}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)