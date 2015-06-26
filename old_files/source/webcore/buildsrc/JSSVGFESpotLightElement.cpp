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
#include "JSSVGFESpotLightElement.h"

#include <wtf/GetPtr.h>

#include "JSSVGAnimatedNumber.h"
#include "SVGFESpotLightElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGFESpotLightElementTableEntries[] =
{
    { "pointsAtZ", JSSVGFESpotLightElement::PointsAtZAttrNum, DontDelete|ReadOnly, 0, &JSSVGFESpotLightElementTableEntries[9] },
    { "x", JSSVGFESpotLightElement::XAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "pointsAtX", JSSVGFESpotLightElement::PointsAtXAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "y", JSSVGFESpotLightElement::YAttrNum, DontDelete|ReadOnly, 0, &JSSVGFESpotLightElementTableEntries[8] },
    { "specularExponent", JSSVGFESpotLightElement::SpecularExponentAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "z", JSSVGFESpotLightElement::ZAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "pointsAtY", JSSVGFESpotLightElement::PointsAtYAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "limitingConeAngle", JSSVGFESpotLightElement::LimitingConeAngleAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFESpotLightElementTable = 
{
    2, 10, JSSVGFESpotLightElementTableEntries, 8
};

/* Hash table for prototype */

static const HashEntry JSSVGFESpotLightElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 }
};

static const HashTable JSSVGFESpotLightElementPrototypeTable = 
{
    2, 1, JSSVGFESpotLightElementPrototypeTableEntries, 1
};

const ClassInfo JSSVGFESpotLightElementPrototype::info = { "SVGFESpotLightElementPrototype", 0, &JSSVGFESpotLightElementPrototypeTable, 0 };

JSObject* JSSVGFESpotLightElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGFESpotLightElementPrototype>(exec, "[[JSSVGFESpotLightElement.prototype]]");
}

const ClassInfo JSSVGFESpotLightElement::info = { "SVGFESpotLightElement", &JSSVGElement::info, &JSSVGFESpotLightElementTable, 0 };

JSSVGFESpotLightElement::JSSVGFESpotLightElement(ExecState* exec, SVGFESpotLightElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGFESpotLightElementPrototype::self(exec));
}

bool JSSVGFESpotLightElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFESpotLightElement, JSSVGElement>(exec, &JSSVGFESpotLightElementTable, this, propertyName, slot);
}

JSValue* JSSVGFESpotLightElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case XAttrNum: {
        SVGFESpotLightElement* imp = static_cast<SVGFESpotLightElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->xAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case YAttrNum: {
        SVGFESpotLightElement* imp = static_cast<SVGFESpotLightElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->yAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ZAttrNum: {
        SVGFESpotLightElement* imp = static_cast<SVGFESpotLightElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->zAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case PointsAtXAttrNum: {
        SVGFESpotLightElement* imp = static_cast<SVGFESpotLightElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->pointsAtXAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case PointsAtYAttrNum: {
        SVGFESpotLightElement* imp = static_cast<SVGFESpotLightElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->pointsAtYAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case PointsAtZAttrNum: {
        SVGFESpotLightElement* imp = static_cast<SVGFESpotLightElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->pointsAtZAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case SpecularExponentAttrNum: {
        SVGFESpotLightElement* imp = static_cast<SVGFESpotLightElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->specularExponentAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case LimitingConeAngleAttrNum: {
        SVGFESpotLightElement* imp = static_cast<SVGFESpotLightElement*>(impl());

        RefPtr<SVGAnimatedNumber> obj = imp->limitingConeAngleAnimated();
        return toJS(exec, obj.get(), imp);
    }
    }
    return 0;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)