#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#define INCLUDED_flixel_tweens_misc_ColorTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tweens/FlxTween.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,ColorTween)
namespace flixel{
namespace tweens{
namespace misc{


class HXCPP_CLASS_ATTRIBUTES  ColorTween_obj : public ::flixel::tweens::FlxTween_obj{
	public:
		typedef ::flixel::tweens::FlxTween_obj super;
		typedef ColorTween_obj OBJ_;
		ColorTween_obj();
		Void __construct(Dynamic Options);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ColorTween_obj > __new(Dynamic Options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ColorTween_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ColorTween"); }

		int color;
		Float alpha;
		::flixel::FlxSprite sprite;
		int red;
		int green;
		int blue;
		Float _startA;
		Float _startR;
		Float _startG;
		Float _startB;
		Float _rangeA;
		Float _rangeR;
		Float _rangeG;
		Float _rangeB;
		virtual Void destroy( );

		virtual ::flixel::tweens::misc::ColorTween tween( Float Duration,int FromColor,int ToColor,hx::Null< Float >  FromAlpha,hx::Null< Float >  ToAlpha,::flixel::FlxSprite Sprite);
		Dynamic tween_dyn();

		virtual Void update( );

};

} // end namespace flixel
} // end namespace tweens
} // end namespace misc

#endif /* INCLUDED_flixel_tweens_misc_ColorTween */ 
