#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_EOFError
#include <openfl/errors/EOFError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace openfl{
namespace errors{

Void EOFError_obj::__construct()
{
HX_STACK_FRAME("openfl.errors.EOFError","new",0xc20c3743,"openfl.errors.EOFError.new","openfl/errors/EOFError.hx",18,0x8db2236d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(20)
	super::__construct(HX_CSTRING("End of file was encountered"),(int)2030);
	HX_STACK_LINE(22)
	this->name = HX_CSTRING("EOFError");
}
;
	return null();
}

//EOFError_obj::~EOFError_obj() { }

Dynamic EOFError_obj::__CreateEmpty() { return  new EOFError_obj; }
hx::ObjectPtr< EOFError_obj > EOFError_obj::__new()
{  hx::ObjectPtr< EOFError_obj > result = new EOFError_obj();
	result->__construct();
	return result;}

Dynamic EOFError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EOFError_obj > result = new EOFError_obj();
	result->__construct();
	return result;}


EOFError_obj::EOFError_obj()
{
}

Dynamic EOFError_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic EOFError_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void EOFError_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(EOFError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EOFError_obj::__mClass,"__mClass");
};

#endif

Class EOFError_obj::__mClass;

void EOFError_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.errors.EOFError"), hx::TCanCast< EOFError_obj> ,sStaticFields,sMemberFields,
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

void EOFError_obj::__boot()
{
}

} // end namespace openfl
} // end namespace errors
