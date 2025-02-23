#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DirectRenderer
#include <openfl/_legacy/display/DirectRenderer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
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
namespace openfl{
namespace _legacy{
namespace display{

Void DirectRenderer_obj::__construct(::String __o_type)
{
HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","new",0x7a9bf82e,"openfl._legacy.display.DirectRenderer.new","openfl/_legacy/display/DirectRenderer.hx",13,0x206ed89f)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_type,"type")
::String type = __o_type.Default(HX_CSTRING("DirectRenderer"));
{
	HX_STACK_LINE(15)
	Dynamic _g = ::openfl::_legacy::display::DirectRenderer_obj::lime_direct_renderer_create();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	super::__construct(_g,type);
	HX_STACK_LINE(17)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->__stage_onAddedToStage_dyn(),null(),null(),null());
	HX_STACK_LINE(18)
	this->addEventListener(::openfl::_legacy::events::Event_obj::REMOVED_FROM_STAGE,this->__stage_onRemovedFromStage_dyn(),null(),null(),null());
}
;
	return null();
}

//DirectRenderer_obj::~DirectRenderer_obj() { }

Dynamic DirectRenderer_obj::__CreateEmpty() { return  new DirectRenderer_obj; }
hx::ObjectPtr< DirectRenderer_obj > DirectRenderer_obj::__new(::String __o_type)
{  hx::ObjectPtr< DirectRenderer_obj > result = new DirectRenderer_obj();
	result->__construct(__o_type);
	return result;}

Dynamic DirectRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DirectRenderer_obj > result = new DirectRenderer_obj();
	result->__construct(inArgs[0]);
	return result;}

Void DirectRenderer_obj::dispose( ){
{
		HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","dispose",0x36bfa76d,"openfl._legacy.display.DirectRenderer.dispose","openfl/_legacy/display/DirectRenderer.hx",23,0x206ed89f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->__stage_onAddedToStage_dyn(),null());
		HX_STACK_LINE(26)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::REMOVED_FROM_STAGE,this->__stage_onRemovedFromStage_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DirectRenderer_obj,dispose,(void))

HX_BEGIN_DEFAULT_FUNC(__default_render,DirectRenderer_obj)
Void run(::openfl::_legacy::geom::Rectangle rect){
{
		HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","render",0x775d9848,"openfl._legacy.display.DirectRenderer.render","openfl/_legacy/display/DirectRenderer.hx",31,0x206ed89f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
	}
return null();
}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

Void DirectRenderer_obj::__onRender( Dynamic rect){
{
		HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","__onRender",0x1cc162e7,"openfl._legacy.display.DirectRenderer.__onRender","openfl/_legacy/display/DirectRenderer.hx",40,0x206ed89f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_LINE(40)
		if (((this->render_dyn() != null()))){
			HX_STACK_LINE(40)
			::openfl::_legacy::geom::Rectangle _g = ::openfl::_legacy::geom::Rectangle_obj::__new(rect->__Field(HX_CSTRING("x"),true),rect->__Field(HX_CSTRING("y"),true),rect->__Field(HX_CSTRING("width"),true),rect->__Field(HX_CSTRING("height"),true));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			this->render(_g);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectRenderer_obj,__onRender,(void))

Void DirectRenderer_obj::__stage_onAddedToStage( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","__stage_onAddedToStage",0x9b3079d5,"openfl._legacy.display.DirectRenderer.__stage_onAddedToStage","openfl/_legacy/display/DirectRenderer.hx",54,0x206ed89f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(54)
		::openfl::_legacy::display::DirectRenderer_obj::lime_direct_renderer_set(this->__handle,this->__onRender_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectRenderer_obj,__stage_onAddedToStage,(void))

Void DirectRenderer_obj::__stage_onRemovedFromStage( ::openfl::_legacy::events::Event event){
{
		HX_STACK_FRAME("openfl._legacy.display.DirectRenderer","__stage_onRemovedFromStage",0xd2f719a6,"openfl._legacy.display.DirectRenderer.__stage_onRemovedFromStage","openfl/_legacy/display/DirectRenderer.hx",61,0x206ed89f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(61)
		::openfl::_legacy::display::DirectRenderer_obj::lime_direct_renderer_set(this->__handle,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DirectRenderer_obj,__stage_onRemovedFromStage,(void))

Dynamic DirectRenderer_obj::lime_direct_renderer_create;

Dynamic DirectRenderer_obj::lime_direct_renderer_set;


DirectRenderer_obj::DirectRenderer_obj()
{
	render = new __default_render(this);
}

void DirectRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DirectRenderer);
	HX_MARK_MEMBER_NAME(render,"render");
	::openfl::_legacy::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DirectRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(render,"render");
	::openfl::_legacy::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DirectRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { return render; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__onRender") ) { return __onRender_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__stage_onAddedToStage") ) { return __stage_onAddedToStage_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_direct_renderer_set") ) { return lime_direct_renderer_set; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"__stage_onRemovedFromStage") ) { return __stage_onRemovedFromStage_dyn(); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_direct_renderer_create") ) { return lime_direct_renderer_create; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DirectRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { render=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"lime_direct_renderer_set") ) { lime_direct_renderer_set=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_direct_renderer_create") ) { lime_direct_renderer_create=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DirectRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("lime_direct_renderer_create"),
	HX_CSTRING("lime_direct_renderer_set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DirectRenderer_obj,render),HX_CSTRING("render")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("dispose"),
	HX_CSTRING("render"),
	HX_CSTRING("__onRender"),
	HX_CSTRING("__stage_onAddedToStage"),
	HX_CSTRING("__stage_onRemovedFromStage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DirectRenderer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(DirectRenderer_obj::lime_direct_renderer_create,"lime_direct_renderer_create");
	HX_MARK_MEMBER_NAME(DirectRenderer_obj::lime_direct_renderer_set,"lime_direct_renderer_set");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DirectRenderer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(DirectRenderer_obj::lime_direct_renderer_create,"lime_direct_renderer_create");
	HX_VISIT_MEMBER_NAME(DirectRenderer_obj::lime_direct_renderer_set,"lime_direct_renderer_set");
};

#endif

Class DirectRenderer_obj::__mClass;

void DirectRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.display.DirectRenderer"), hx::TCanCast< DirectRenderer_obj> ,sStaticFields,sMemberFields,
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

void DirectRenderer_obj::__boot()
{
	lime_direct_renderer_create= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_direct_renderer_create"),(int)0);
	lime_direct_renderer_set= ::openfl::_legacy::Lib_obj::load(HX_CSTRING("lime-legacy"),HX_CSTRING("lime_legacy_direct_renderer_set"),(int)2);
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace display
