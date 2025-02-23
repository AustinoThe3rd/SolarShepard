#ifndef INCLUDED_openfl_errors_Error
#define INCLUDED_openfl_errors_Error

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,errors,Error)
namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  Error_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Error_obj OBJ_;
		Error_obj();
		Void __construct(::String __o_message,hx::Null< int >  __o_id);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Error_obj > __new(::String __o_message,hx::Null< int >  __o_id);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Error_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Error"); }

		int errorID;
		::String message;
		::String name;
		virtual ::String getStackTrace( );
		Dynamic getStackTrace_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		static ::String DEFAULT_TO_STRING;
};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_Error */ 
