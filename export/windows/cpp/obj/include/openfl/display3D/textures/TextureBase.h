#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#define INCLUDED_openfl_display3D_textures_TextureBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_legacy/events/EventDispatcher.h>
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLFramebuffer)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLTexture)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  TextureBase_obj : public ::openfl::_legacy::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_legacy::events::EventDispatcher_obj super;
		typedef TextureBase_obj OBJ_;
		TextureBase_obj();
		Void __construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,hx::Null< int >  __o_width,hx::Null< int >  __o_height);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextureBase_obj > __new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLTexture glTexture,hx::Null< int >  __o_width,hx::Null< int >  __o_height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextureBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextureBase"); }

		::openfl::display3D::Context3D context;
		int height;
		::openfl::_legacy::gl::GLFramebuffer frameBuffer;
		::openfl::_legacy::gl::GLTexture glTexture;
		int width;
		virtual Void dispose( );
		Dynamic dispose_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_TextureBase */ 
