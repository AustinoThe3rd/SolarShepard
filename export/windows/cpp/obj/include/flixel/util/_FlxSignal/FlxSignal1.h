#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#define INCLUDED_flixel_util__FlxSignal_FlxSignal1

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/util/_FlxSignal/FlxSignalBase.h>
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxSignal)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignal1)
HX_DECLARE_CLASS3(flixel,util,_FlxSignal,FlxSignalBase)
namespace flixel{
namespace util{
namespace _FlxSignal{


class HXCPP_CLASS_ATTRIBUTES  FlxSignal1_obj : public ::flixel::util::_FlxSignal::FlxSignalBase_obj{
	public:
		typedef ::flixel::util::_FlxSignal::FlxSignalBase_obj super;
		typedef FlxSignal1_obj OBJ_;
		FlxSignal1_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxSignal1_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSignal1_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxSignal1"); }

		virtual Void dispatch1( Dynamic value1);
		Dynamic dispatch1_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal

#endif /* INCLUDED_flixel_util__FlxSignal_FlxSignal1 */ 
