#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::LineScaleMode LineScaleMode_obj::HORIZONTAL;

::openfl::_legacy::display::LineScaleMode LineScaleMode_obj::NONE;

::openfl::_legacy::display::LineScaleMode LineScaleMode_obj::NORMAL;

::openfl::_legacy::display::LineScaleMode LineScaleMode_obj::OPENGL;

::openfl::_legacy::display::LineScaleMode LineScaleMode_obj::VERTICAL;

HX_DEFINE_CREATE_ENUM(LineScaleMode_obj)

int LineScaleMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("HORIZONTAL")) return 3;
	if (inName==HX_CSTRING("NONE")) return 1;
	if (inName==HX_CSTRING("NORMAL")) return 0;
	if (inName==HX_CSTRING("OPENGL")) return 4;
	if (inName==HX_CSTRING("VERTICAL")) return 2;
	return super::__FindIndex(inName);
}

int LineScaleMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("HORIZONTAL")) return 0;
	if (inName==HX_CSTRING("NONE")) return 0;
	if (inName==HX_CSTRING("NORMAL")) return 0;
	if (inName==HX_CSTRING("OPENGL")) return 0;
	if (inName==HX_CSTRING("VERTICAL")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic LineScaleMode_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("HORIZONTAL")) return HORIZONTAL;
	if (inName==HX_CSTRING("NONE")) return NONE;
	if (inName==HX_CSTRING("NORMAL")) return NORMAL;
	if (inName==HX_CSTRING("OPENGL")) return OPENGL;
	if (inName==HX_CSTRING("VERTICAL")) return VERTICAL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("NORMAL"),
	HX_CSTRING("NONE"),
	HX_CSTRING("VERTICAL"),
	HX_CSTRING("HORIZONTAL"),
	HX_CSTRING("OPENGL"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::HORIZONTAL,"HORIZONTAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::NORMAL,"NORMAL");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::OPENGL,"OPENGL");
	HX_MARK_MEMBER_NAME(LineScaleMode_obj::VERTICAL,"VERTICAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::HORIZONTAL,"HORIZONTAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::NORMAL,"NORMAL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::OPENGL,"OPENGL");
	HX_VISIT_MEMBER_NAME(LineScaleMode_obj::VERTICAL,"VERTICAL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class LineScaleMode_obj::__mClass;

Dynamic __Create_LineScaleMode_obj() { return new LineScaleMode_obj; }

void LineScaleMode_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl._legacy.display.LineScaleMode"), hx::TCanCast< LineScaleMode_obj >,sStaticFields,sMemberFields,
	&__Create_LineScaleMode_obj, &__Create,
	&super::__SGetClass(), &CreateLineScaleMode_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void LineScaleMode_obj::__boot()
{
hx::Static(HORIZONTAL) = hx::CreateEnum< LineScaleMode_obj >(HX_CSTRING("HORIZONTAL"),3);
hx::Static(NONE) = hx::CreateEnum< LineScaleMode_obj >(HX_CSTRING("NONE"),1);
hx::Static(NORMAL) = hx::CreateEnum< LineScaleMode_obj >(HX_CSTRING("NORMAL"),0);
hx::Static(OPENGL) = hx::CreateEnum< LineScaleMode_obj >(HX_CSTRING("OPENGL"),4);
hx::Static(VERTICAL) = hx::CreateEnum< LineScaleMode_obj >(HX_CSTRING("VERTICAL"),2);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
