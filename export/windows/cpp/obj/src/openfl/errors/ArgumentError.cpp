#include <hxcpp.h>

#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace openfl{
namespace errors{

Void ArgumentError_obj::__construct(::String __o_message)
{
HX_STACK_FRAME("openfl.errors.ArgumentError","new",0x72c6c578,"openfl.errors.ArgumentError.new","openfl/errors/ArgumentError.hx",7,0xb16d4318)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_message,"message")
::String message = __o_message.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(9)
	super::__construct(message,null());
	HX_STACK_LINE(11)
	this->name = HX_CSTRING("ArgumentError");
}
;
	return null();
}

//ArgumentError_obj::~ArgumentError_obj() { }

Dynamic ArgumentError_obj::__CreateEmpty() { return  new ArgumentError_obj; }
hx::ObjectPtr< ArgumentError_obj > ArgumentError_obj::__new(::String __o_message)
{  hx::ObjectPtr< ArgumentError_obj > result = new ArgumentError_obj();
	result->__construct(__o_message);
	return result;}

Dynamic ArgumentError_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArgumentError_obj > result = new ArgumentError_obj();
	result->__construct(inArgs[0]);
	return result;}


ArgumentError_obj::ArgumentError_obj()
{
}

Dynamic ArgumentError_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic ArgumentError_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ArgumentError_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(ArgumentError_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArgumentError_obj::__mClass,"__mClass");
};

#endif

Class ArgumentError_obj::__mClass;

void ArgumentError_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.errors.ArgumentError"), hx::TCanCast< ArgumentError_obj> ,sStaticFields,sMemberFields,
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

void ArgumentError_obj::__boot()
{
}

} // end namespace openfl
} // end namespace errors
