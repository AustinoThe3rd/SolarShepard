#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_Tracker
#include <flixel/system/debug/Tracker.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace system{
namespace debug{

Void Tracker_obj::__construct(::String Title,::openfl::_legacy::display::BitmapData Icon,Dynamic Width,Dynamic Height,Dynamic Resizable,::openfl::_legacy::geom::Rectangle Bounds,Dynamic Closable)
{
HX_STACK_FRAME("flixel.system.debug.Tracker","new",0xabada902,"flixel.system.debug.Tracker.new","flixel/system/debug/Tracker.hx",40,0x59950a0f)
HX_STACK_THIS(this)
HX_STACK_ARG(Title,"Title")
HX_STACK_ARG(Icon,"Icon")
HX_STACK_ARG(Width,"Width")
HX_STACK_ARG(Height,"Height")
HX_STACK_ARG(Resizable,"Resizable")
HX_STACK_ARG(Bounds,"Bounds")
HX_STACK_ARG(Closable,"Closable")
{
	HX_STACK_LINE(40)
	super::__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable);
}
;
	return null();
}

//Tracker_obj::~Tracker_obj() { }

Dynamic Tracker_obj::__CreateEmpty() { return  new Tracker_obj; }
hx::ObjectPtr< Tracker_obj > Tracker_obj::__new(::String Title,::openfl::_legacy::display::BitmapData Icon,Dynamic Width,Dynamic Height,Dynamic Resizable,::openfl::_legacy::geom::Rectangle Bounds,Dynamic Closable)
{  hx::ObjectPtr< Tracker_obj > result = new Tracker_obj();
	result->__construct(Title,Icon,Width,Height,Resizable,Bounds,Closable);
	return result;}

Dynamic Tracker_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tracker_obj > result = new Tracker_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}


Tracker_obj::Tracker_obj()
{
}

Dynamic Tracker_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Tracker_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Tracker_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tracker_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tracker_obj::__mClass,"__mClass");
};

#endif

Class Tracker_obj::__mClass;

void Tracker_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.Tracker"), hx::TCanCast< Tracker_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Tracker_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
