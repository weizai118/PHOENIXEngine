// PX2ObjCast.cpp

#include "PX2ObjCast.hpp"
using namespace PX2;

//----------------------------------------------------------------------------
Controller *Cast::ToController(Object *obj)
{
	return DynamicCast<Controller>(obj);
}
//----------------------------------------------------------------------------
Controlledable *Cast::ToControlledable(Object *obj)
{
	return DynamicCast<Controlledable>(obj);
}
//----------------------------------------------------------------------------
Movable *Cast::ToMovable(Object *obj)
{
	return DynamicCast<Movable>(obj);
}
//----------------------------------------------------------------------------
Node *Cast::ToNode(Object *obj)
{
	return DynamicCast<Node>(obj);
}
//----------------------------------------------------------------------------
EffectableController *Cast::ToEffectController(Object *obj)
{
	return DynamicCast<EffectableController>(obj);
}
//----------------------------------------------------------------------------
Object *Cast::ToO(void *obj)
{
	return (Object*)obj;
}
//----------------------------------------------------------------------------
ScriptController *Cast::ToSC(void *obj)
{
	return (ScriptController*)obj;
}
//----------------------------------------------------------------------------