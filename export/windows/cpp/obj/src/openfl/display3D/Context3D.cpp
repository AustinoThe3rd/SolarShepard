#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DirectRenderer
#include <openfl/_legacy/display/DirectRenderer.h>
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
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_OpenGLView
#include <openfl/_legacy/display/OpenGLView.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
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
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLBuffer
#include <openfl/_legacy/gl/GLBuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLFramebuffer
#include <openfl/_legacy/gl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLObject
#include <openfl/_legacy/gl/GLObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLProgram
#include <openfl/_legacy/gl/GLProgram.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLRenderbuffer
#include <openfl/_legacy/gl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_openfl__legacy_gl_GLTexture
#include <openfl/_legacy/gl/GLTexture.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_Float32Array
#include <openfl/_legacy/utils/Float32Array.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DMipFilter
#include <openfl/display3D/Context3DMipFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DProgramType
#include <openfl/display3D/Context3DProgramType.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DTextureFilter
#include <openfl/display3D/Context3DTextureFilter.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DTextureFormat
#include <openfl/display3D/Context3DTextureFormat.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DVertexBufferFormat
#include <openfl/display3D/Context3DVertexBufferFormat.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3DWrapMode
#include <openfl/display3D/Context3DWrapMode.h>
#endif
#ifndef INCLUDED_openfl_display3D_IndexBuffer3D
#include <openfl/display3D/IndexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#include <openfl/display3D/VertexBuffer3D.h>
#endif
#ifndef INCLUDED_openfl_display3D__Context3D_SamplerState
#include <openfl/display3D/_Context3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#include <openfl/display3D/textures/CubeTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_Texture
#include <openfl/display3D/textures/Texture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix3D
#include <openfl/geom/Matrix3D.h>
#endif
namespace openfl{
namespace display3D{

Void Context3D_obj::__construct()
{
HX_STACK_FRAME("openfl.display3D.Context3D","new",0x4f12c019,"openfl.display3D.Context3D.new","openfl/display3D/Context3D.hx",59,0xc899cbb9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(61)
	this->disposed = false;
	HX_STACK_LINE(63)
	this->_yFlip = (int)1;
	HX_STACK_LINE(65)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(65)
	this->vertexBuffersCreated = _g;
	HX_STACK_LINE(66)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(66)
	this->indexBuffersCreated = _g1;
	HX_STACK_LINE(67)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(67)
	this->programsCreated = _g2;
	HX_STACK_LINE(68)
	Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(68)
	this->texturesCreated = _g3;
	HX_STACK_LINE(69)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(69)
	this->samplerParameters = _g4;
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(71)
		int _g5 = ::openfl::display3D::Context3D_obj::MAX_SAMPLERS;		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			if ((!(((_g11 < _g5))))){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(71)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(73)
			this->samplerParameters[i] = ::openfl::display3D::_Context3D::SamplerState_obj::__new();
			HX_STACK_LINE(74)
			this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >()->wrap = ::openfl::display3D::Context3DWrapMode_obj::CLAMP;
			HX_STACK_LINE(75)
			this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >()->filter = ::openfl::display3D::Context3DTextureFilter_obj::LINEAR;
			HX_STACK_LINE(76)
			this->samplerParameters->__get(i).StaticCast< ::openfl::display3D::_Context3D::SamplerState >()->mipfilter = ::openfl::display3D::Context3DMipFilter_obj::MIPNONE;
		}
	}
	HX_STACK_LINE(80)
	::openfl::_legacy::display::Stage stage = ::openfl::_legacy::Lib_obj::get_current()->get_stage();		HX_STACK_VAR(stage,"stage");
	HX_STACK_LINE(82)
	::openfl::_legacy::display::OpenGLView _g5 = ::openfl::_legacy::display::OpenGLView_obj::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(82)
	this->ogl = _g5;
	HX_STACK_LINE(83)
	int _g6 = stage->get_stageWidth();		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(83)
	int _g7 = stage->get_stageHeight();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(83)
	::openfl::_legacy::geom::Rectangle _g8 = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,_g6,_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(83)
	this->ogl->set_scrollRect(_g8);
	HX_STACK_LINE(84)
	::openfl::_legacy::geom::Rectangle _g9 = this->ogl->get_scrollRect()->clone();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(84)
	this->scrollRect = _g9;
	HX_STACK_LINE(85)
	int _g10 = stage->get_stageWidth();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(85)
	this->ogl->set_width(_g10);
	HX_STACK_LINE(86)
	int _g11 = stage->get_stageHeight();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(86)
	this->ogl->set_height(_g11);
	HX_STACK_LINE(88)
	stage->addChildAt(this->ogl,(int)0);
}
;
	return null();
}

//Context3D_obj::~Context3D_obj() { }

Dynamic Context3D_obj::__CreateEmpty() { return  new Context3D_obj; }
hx::ObjectPtr< Context3D_obj > Context3D_obj::__new()
{  hx::ObjectPtr< Context3D_obj > result = new Context3D_obj();
	result->__construct();
	return result;}

Dynamic Context3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3D_obj > result = new Context3D_obj();
	result->__construct();
	return result;}

Void Context3D_obj::clear( hx::Null< Float >  __o_red,hx::Null< Float >  __o_green,hx::Null< Float >  __o_blue,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_depth,hx::Null< int >  __o_stencil,hx::Null< int >  __o_mask){
Float red = __o_red.Default(0);
Float green = __o_green.Default(0);
Float blue = __o_blue.Default(0);
Float alpha = __o_alpha.Default(1);
Float depth = __o_depth.Default(1);
int stencil = __o_stencil.Default(0);
int mask = __o_mask.Default(17664);
	HX_STACK_FRAME("openfl.display3D.Context3D","clear",0xf8808186,"openfl.display3D.Context3D.clear","openfl/display3D/Context3D.hx",93,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(red,"red")
	HX_STACK_ARG(green,"green")
	HX_STACK_ARG(blue,"blue")
	HX_STACK_ARG(alpha,"alpha")
	HX_STACK_ARG(depth,"depth")
	HX_STACK_ARG(stencil,"stencil")
	HX_STACK_ARG(mask,"mask")
{
		HX_STACK_LINE(95)
		if ((!(this->drawing))){
			HX_STACK_LINE(97)
			this->__updateBlendStatus();
			HX_STACK_LINE(98)
			this->drawing = true;
		}
		HX_STACK_LINE(103)
		::openfl::_legacy::gl::GL_obj::lime_gl_depth_mask(true);
		HX_STACK_LINE(105)
		::openfl::_legacy::gl::GL_obj::lime_gl_clear_color(red,green,blue,alpha);
		HX_STACK_LINE(106)
		::openfl::_legacy::gl::GL_obj::lime_gl_clear_depth(depth);
		HX_STACK_LINE(107)
		::openfl::_legacy::gl::GL_obj::lime_gl_clear_stencil(stencil);
		HX_STACK_LINE(109)
		::openfl::_legacy::gl::GL_obj::lime_gl_clear(mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Context3D_obj,clear,(void))

Void Context3D_obj::configureBackBuffer( int width,int height,int antiAlias,hx::Null< bool >  __o_enableDepthAndStencil){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(true);
	HX_STACK_FRAME("openfl.display3D.Context3D","configureBackBuffer",0x7210edc6,"openfl.display3D.Context3D.configureBackBuffer","openfl/display3D/Context3D.hx",114,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(antiAlias,"antiAlias")
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil")
{
		HX_STACK_LINE(116)
		if ((enableDepthAndStencil)){
			HX_STACK_LINE(119)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2929);
			HX_STACK_LINE(120)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2960);
		}
		HX_STACK_LINE(125)
		::openfl::_legacy::geom::Rectangle _g = ::openfl::_legacy::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(125)
		this->ogl->set_scrollRect(_g);
		HX_STACK_LINE(126)
		this->ogl->set_width(width);
		HX_STACK_LINE(127)
		this->ogl->set_height(height);
		HX_STACK_LINE(128)
		::openfl::_legacy::geom::Rectangle _g1 = this->ogl->get_scrollRect()->clone();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(128)
		this->scrollRect = _g1;
		HX_STACK_LINE(129)
		{
			HX_STACK_LINE(129)
			int x = ::Std_obj::_int(this->scrollRect->x);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(129)
			int y = ::Std_obj::_int(this->scrollRect->y);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(129)
			int width1 = ::Std_obj::_int(this->scrollRect->width);		HX_STACK_VAR(width1,"width1");
			HX_STACK_LINE(129)
			int height1 = ::Std_obj::_int(this->scrollRect->height);		HX_STACK_VAR(height1,"height1");
			HX_STACK_LINE(129)
			::openfl::_legacy::gl::GL_obj::lime_gl_viewport(x,y,width1,height1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,configureBackBuffer,(void))

::openfl::display3D::textures::CubeTexture Context3D_obj::createCubeTexture( int size,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","createCubeTexture",0xbb69e843,"openfl.display3D.Context3D.createCubeTexture","openfl/display3D/Context3D.hx",134,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(size,"size")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_ARG(streamingLevels,"streamingLevels")
{
		HX_STACK_LINE(136)
		int _g = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		Dynamic _g1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(136)
		::openfl::_legacy::gl::GLTexture _g2 = ::openfl::_legacy::gl::GLTexture_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(136)
		::openfl::display3D::textures::CubeTexture texture = ::openfl::display3D::textures::CubeTexture_obj::__new(hx::ObjectPtr<OBJ_>(this),_g2,size);		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(137)
		this->texturesCreated->push(texture);
		HX_STACK_LINE(138)
		return texture;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createCubeTexture,return )

::openfl::display3D::IndexBuffer3D Context3D_obj::createIndexBuffer( int numIndices){
	HX_STACK_FRAME("openfl.display3D.Context3D","createIndexBuffer",0x3b80e18f,"openfl.display3D.Context3D.createIndexBuffer","openfl/display3D/Context3D.hx",143,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numIndices,"numIndices")
	HX_STACK_LINE(145)
	int _g = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(145)
	Dynamic _g1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(145)
	::openfl::_legacy::gl::GLBuffer _g2 = ::openfl::_legacy::gl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(145)
	::openfl::display3D::IndexBuffer3D indexBuffer = ::openfl::display3D::IndexBuffer3D_obj::__new(hx::ObjectPtr<OBJ_>(this),_g2,numIndices);		HX_STACK_VAR(indexBuffer,"indexBuffer");
	HX_STACK_LINE(146)
	this->indexBuffersCreated->push(indexBuffer);
	HX_STACK_LINE(147)
	return indexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,createIndexBuffer,return )

::openfl::display3D::Program3D Context3D_obj::createProgram( ){
	HX_STACK_FRAME("openfl.display3D.Context3D","createProgram",0x0b5753e1,"openfl.display3D.Context3D.createProgram","openfl/display3D/Context3D.hx",152,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(154)
	int _g = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(154)
	Dynamic _g1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_program();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(154)
	::openfl::_legacy::gl::GLProgram _g2 = ::openfl::_legacy::gl::GLProgram_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(154)
	::openfl::display3D::Program3D program = ::openfl::display3D::Program3D_obj::__new(hx::ObjectPtr<OBJ_>(this),_g2);		HX_STACK_VAR(program,"program");
	HX_STACK_LINE(155)
	this->programsCreated->push(program);
	HX_STACK_LINE(156)
	return program;
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,createProgram,return )

::openfl::display3D::textures::RectangleTexture Context3D_obj::createRectangleTexture( int width,int height,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture){
	HX_STACK_FRAME("openfl.display3D.Context3D","createRectangleTexture",0x8720f36f,"openfl.display3D.Context3D.createRectangleTexture","openfl/display3D/Context3D.hx",161,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_LINE(163)
	int _g = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(163)
	Dynamic _g1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(163)
	::openfl::_legacy::gl::GLTexture _g2 = ::openfl::_legacy::gl::GLTexture_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(163)
	::openfl::display3D::textures::RectangleTexture texture = ::openfl::display3D::textures::RectangleTexture_obj::__new(hx::ObjectPtr<OBJ_>(this),_g2,optimizeForRenderToTexture,width,height);		HX_STACK_VAR(texture,"texture");
	HX_STACK_LINE(164)
	this->texturesCreated->push(texture);
	HX_STACK_LINE(165)
	return texture;
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,createRectangleTexture,return )

::openfl::display3D::textures::Texture Context3D_obj::createTexture( int width,int height,::openfl::display3D::Context3DTextureFormat format,bool optimizeForRenderToTexture,hx::Null< int >  __o_streamingLevels){
int streamingLevels = __o_streamingLevels.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","createTexture",0xb63ed238,"openfl.display3D.Context3D.createTexture","openfl/display3D/Context3D.hx",170,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(optimizeForRenderToTexture,"optimizeForRenderToTexture")
	HX_STACK_ARG(streamingLevels,"streamingLevels")
{
		HX_STACK_LINE(172)
		int _g = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		Dynamic _g1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_texture();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		::openfl::_legacy::gl::GLTexture _g2 = ::openfl::_legacy::gl::GLTexture_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(172)
		::openfl::display3D::textures::Texture texture = ::openfl::display3D::textures::Texture_obj::__new(hx::ObjectPtr<OBJ_>(this),_g2,optimizeForRenderToTexture,width,height);		HX_STACK_VAR(texture,"texture");
		HX_STACK_LINE(173)
		this->texturesCreated->push(texture);
		HX_STACK_LINE(174)
		return texture;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,createTexture,return )

::openfl::display3D::VertexBuffer3D Context3D_obj::createVertexBuffer( int numVertices,int data32PerVertex){
	HX_STACK_FRAME("openfl.display3D.Context3D","createVertexBuffer",0x49fb9507,"openfl.display3D.Context3D.createVertexBuffer","openfl/display3D/Context3D.hx",179,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(numVertices,"numVertices")
	HX_STACK_ARG(data32PerVertex,"data32PerVertex")
	HX_STACK_LINE(181)
	int _g = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(181)
	Dynamic _g1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_buffer();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(181)
	::openfl::_legacy::gl::GLBuffer _g2 = ::openfl::_legacy::gl::GLBuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(181)
	::openfl::display3D::VertexBuffer3D vertexBuffer = ::openfl::display3D::VertexBuffer3D_obj::__new(hx::ObjectPtr<OBJ_>(this),_g2,numVertices,data32PerVertex);		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
	HX_STACK_LINE(182)
	this->vertexBuffersCreated->push(vertexBuffer);
	HX_STACK_LINE(183)
	return vertexBuffer;
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,createVertexBuffer,return )

Void Context3D_obj::__deleteTexture( ::openfl::display3D::textures::TextureBase texture){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteTexture",0x1620b609,"openfl.display3D.Context3D.__deleteTexture","openfl/display3D/Context3D.hx",189,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(191)
		if (((texture->glTexture == null()))){
			HX_STACK_LINE(192)
			return null();
		}
		HX_STACK_LINE(193)
		this->texturesCreated->remove(texture);
		HX_STACK_LINE(194)
		{
			HX_STACK_LINE(194)
			::openfl::_legacy::gl::GLTexture texture1 = texture->glTexture;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(194)
			::openfl::_legacy::gl::GL_obj::lime_gl_delete_texture(texture1->id);
			HX_STACK_LINE(194)
			texture1->invalidate();
		}
		HX_STACK_LINE(195)
		texture->glTexture = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteTexture,(void))

Void Context3D_obj::__deleteVertexBuffer( ::openfl::display3D::VertexBuffer3D buffer){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteVertexBuffer",0x4df93b96,"openfl.display3D.Context3D.__deleteVertexBuffer","openfl/display3D/Context3D.hx",201,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(203)
		if (((buffer->glBuffer == null()))){
			HX_STACK_LINE(204)
			return null();
		}
		HX_STACK_LINE(205)
		this->vertexBuffersCreated->remove(buffer);
		HX_STACK_LINE(206)
		{
			HX_STACK_LINE(206)
			::openfl::_legacy::gl::GLBuffer buffer1 = buffer->glBuffer;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(206)
			::openfl::_legacy::gl::GL_obj::lime_gl_delete_buffer(buffer1->id);
			HX_STACK_LINE(206)
			buffer1->invalidate();
		}
		HX_STACK_LINE(207)
		buffer->glBuffer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteVertexBuffer,(void))

Void Context3D_obj::__deleteIndexBuffer( ::openfl::display3D::IndexBuffer3D buffer){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteIndexBuffer",0xec4f81e0,"openfl.display3D.Context3D.__deleteIndexBuffer","openfl/display3D/Context3D.hx",213,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(215)
		if (((buffer->glBuffer == null()))){
			HX_STACK_LINE(216)
			return null();
		}
		HX_STACK_LINE(217)
		this->indexBuffersCreated->remove(buffer);
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			::openfl::_legacy::gl::GLBuffer buffer1 = buffer->glBuffer;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(218)
			::openfl::_legacy::gl::GL_obj::lime_gl_delete_buffer(buffer1->id);
			HX_STACK_LINE(218)
			buffer1->invalidate();
		}
		HX_STACK_LINE(219)
		buffer->glBuffer = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteIndexBuffer,(void))

Void Context3D_obj::__deleteProgram( ::openfl::display3D::Program3D program){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__deleteProgram",0x6b3937b2,"openfl.display3D.Context3D.__deleteProgram","openfl/display3D/Context3D.hx",225,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(227)
		if (((program->glProgram == null()))){
			HX_STACK_LINE(228)
			return null();
		}
		HX_STACK_LINE(229)
		this->programsCreated->remove(program);
		HX_STACK_LINE(230)
		{
			HX_STACK_LINE(230)
			::openfl::_legacy::gl::GLProgram program1 = program->glProgram;		HX_STACK_VAR(program1,"program1");
			HX_STACK_LINE(230)
			::openfl::_legacy::gl::GL_obj::lime_gl_delete_program(program1->id);
			HX_STACK_LINE(230)
			program1->invalidate();
		}
		HX_STACK_LINE(231)
		program->glProgram = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,__deleteProgram,(void))

Void Context3D_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","dispose",0x8ad040d8,"openfl.display3D.Context3D.dispose","openfl/display3D/Context3D.hx",236,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(241)
		{
			HX_STACK_LINE(241)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(241)
			Array< ::Dynamic > _g1 = this->vertexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(241)
			while((true)){
				HX_STACK_LINE(241)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(241)
					break;
				}
				HX_STACK_LINE(241)
				::openfl::display3D::VertexBuffer3D vertexBuffer = _g1->__get(_g).StaticCast< ::openfl::display3D::VertexBuffer3D >();		HX_STACK_VAR(vertexBuffer,"vertexBuffer");
				HX_STACK_LINE(241)
				++(_g);
				HX_STACK_LINE(243)
				vertexBuffer->dispose();
			}
		}
		HX_STACK_LINE(247)
		this->vertexBuffersCreated = null();
		HX_STACK_LINE(249)
		{
			HX_STACK_LINE(249)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(249)
			Array< ::Dynamic > _g1 = this->indexBuffersCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(249)
			while((true)){
				HX_STACK_LINE(249)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(249)
					break;
				}
				HX_STACK_LINE(249)
				::openfl::display3D::IndexBuffer3D indexBuffer = _g1->__get(_g).StaticCast< ::openfl::display3D::IndexBuffer3D >();		HX_STACK_VAR(indexBuffer,"indexBuffer");
				HX_STACK_LINE(249)
				++(_g);
				HX_STACK_LINE(251)
				indexBuffer->dispose();
			}
		}
		HX_STACK_LINE(255)
		this->indexBuffersCreated = null();
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(257)
			Array< ::Dynamic > _g1 = this->programsCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(257)
			while((true)){
				HX_STACK_LINE(257)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(257)
					break;
				}
				HX_STACK_LINE(257)
				::openfl::display3D::Program3D program = _g1->__get(_g).StaticCast< ::openfl::display3D::Program3D >();		HX_STACK_VAR(program,"program");
				HX_STACK_LINE(257)
				++(_g);
				HX_STACK_LINE(259)
				program->dispose();
			}
		}
		HX_STACK_LINE(263)
		this->programsCreated = null();
		HX_STACK_LINE(265)
		this->samplerParameters = null();
		HX_STACK_LINE(267)
		{
			HX_STACK_LINE(267)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(267)
			Array< ::Dynamic > _g1 = this->texturesCreated;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(267)
			while((true)){
				HX_STACK_LINE(267)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(267)
					break;
				}
				HX_STACK_LINE(267)
				::openfl::display3D::textures::TextureBase texture = _g1->__get(_g).StaticCast< ::openfl::display3D::textures::TextureBase >();		HX_STACK_VAR(texture,"texture");
				HX_STACK_LINE(267)
				++(_g);
				HX_STACK_LINE(269)
				texture->dispose();
			}
		}
		HX_STACK_LINE(273)
		this->texturesCreated = null();
		HX_STACK_LINE(275)
		if (((this->framebuffer != null()))){
			HX_STACK_LINE(277)
			{
				HX_STACK_LINE(277)
				::openfl::_legacy::gl::GLFramebuffer framebuffer = this->framebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
				HX_STACK_LINE(277)
				::openfl::_legacy::gl::GL_obj::lime_gl_delete_framebuffer(framebuffer->id);
				HX_STACK_LINE(277)
				framebuffer->invalidate();
			}
			HX_STACK_LINE(278)
			this->framebuffer = null();
		}
		HX_STACK_LINE(282)
		if (((this->renderbuffer != null()))){
			HX_STACK_LINE(284)
			::openfl::_legacy::gl::GL_obj::deleteRenderbuffer(this->renderbuffer);
			HX_STACK_LINE(285)
			this->renderbuffer = null();
		}
		HX_STACK_LINE(289)
		this->disposed = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,dispose,(void))

Void Context3D_obj::drawToBitmapData( ::openfl::_legacy::display::BitmapData destination){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","drawToBitmapData",0x474f45df,"openfl.display3D.Context3D.drawToBitmapData","openfl/display3D/Context3D.hx",294,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(destination,"destination")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,drawToBitmapData,(void))

Void Context3D_obj::drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,hx::Null< int >  __o_firstIndex,hx::Null< int >  __o_numTriangles){
int firstIndex = __o_firstIndex.Default(0);
int numTriangles = __o_numTriangles.Default(-1);
	HX_STACK_FRAME("openfl.display3D.Context3D","drawTriangles",0x0d837500,"openfl.display3D.Context3D.drawTriangles","openfl/display3D/Context3D.hx",301,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(indexBuffer,"indexBuffer")
	HX_STACK_ARG(firstIndex,"firstIndex")
	HX_STACK_ARG(numTriangles,"numTriangles")
{
		HX_STACK_LINE(303)
		Dynamic location = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(this->currentProgram->glProgram->id,HX_CSTRING("yflip"));		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(304)
		{
			HX_STACK_LINE(304)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(304)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform1f(location1,this->_yFlip);
		}
		HX_STACK_LINE(306)
		if ((!(this->drawing))){
			HX_STACK_LINE(308)
			HX_STACK_DO_THROW(::openfl::errors::Error_obj::__new(HX_CSTRING("Need to clear before drawing if the buffer has not been cleared since the last present() call."),null()));
		}
		HX_STACK_LINE(312)
		int numIndices;		HX_STACK_VAR(numIndices,"numIndices");
		HX_STACK_LINE(314)
		if (((numTriangles == (int)-1))){
			HX_STACK_LINE(316)
			numIndices = indexBuffer->numIndices;
		}
		else{
			HX_STACK_LINE(320)
			numIndices = (numTriangles * (int)3);
		}
		HX_STACK_LINE(324)
		int byteOffset = (firstIndex * (int)2);		HX_STACK_VAR(byteOffset,"byteOffset");
		HX_STACK_LINE(326)
		{
			HX_STACK_LINE(326)
			::openfl::_legacy::gl::GLBuffer buffer = indexBuffer->glBuffer;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(326)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34963,(  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) ));
		}
		HX_STACK_LINE(327)
		::openfl::_legacy::gl::GL_obj::lime_gl_draw_elements((int)4,numIndices,(int)5123,byteOffset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,drawTriangles,(void))

Void Context3D_obj::present( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","present",0x095ffb34,"openfl.display3D.Context3D.present","openfl/display3D/Context3D.hx",332,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(334)
		this->drawing = false;
		HX_STACK_LINE(335)
		::openfl::_legacy::gl::GL_obj::lime_gl_use_program(null());
		HX_STACK_LINE(337)
		::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
		HX_STACK_LINE(338)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2884);
		HX_STACK_LINE(340)
		if (((this->framebuffer != null()))){
			HX_STACK_LINE(342)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,null());
		}
		HX_STACK_LINE(346)
		if (((this->renderbuffer != null()))){
			HX_STACK_LINE(348)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,present,(void))

Void Context3D_obj::removeRenderMethod( Dynamic func){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","removeRenderMethod",0xa41ae1a2,"openfl.display3D.Context3D.removeRenderMethod","openfl/display3D/Context3D.hx",357,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(357)
		this->ogl->render = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,removeRenderMethod,(void))

Void Context3D_obj::setBlendFactors( int sourceFactor,int destinationFactor){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setBlendFactors",0x86d16c6e,"openfl.display3D.Context3D.setBlendFactors","openfl/display3D/Context3D.hx",362,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceFactor,"sourceFactor")
		HX_STACK_ARG(destinationFactor,"destinationFactor")
		HX_STACK_LINE(366)
		this->blendEnabled = true;
		HX_STACK_LINE(367)
		this->blendSourceFactor = sourceFactor;
		HX_STACK_LINE(368)
		this->blendDestinationFactor = destinationFactor;
		HX_STACK_LINE(370)
		this->__updateBlendStatus();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setBlendFactors,(void))

Void Context3D_obj::setColorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setColorMask",0xad4f5d14,"openfl.display3D.Context3D.setColorMask","openfl/display3D/Context3D.hx",377,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(377)
		::openfl::_legacy::gl::GL_obj::lime_gl_color_mask(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setColorMask,(void))

Void Context3D_obj::setCulling( int triangleFaceToCull){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setCulling",0x39687055,"openfl.display3D.Context3D.setCulling","openfl/display3D/Context3D.hx",383,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(triangleFaceToCull,"triangleFaceToCull")
		HX_STACK_LINE(387)
		if (((triangleFaceToCull == (int)0))){
			HX_STACK_LINE(389)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2884);
		}
		else{
			HX_STACK_LINE(393)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2884);
			HX_STACK_LINE(395)
			switch( (int)(triangleFaceToCull)){
				case (int)1029: {
					HX_STACK_LINE(397)
					::openfl::_legacy::gl::GL_obj::lime_gl_cull_face((int)1029);
				}
				;break;
				case (int)1028: {
					HX_STACK_LINE(398)
					::openfl::_legacy::gl::GL_obj::lime_gl_cull_face((int)1028);
				}
				;break;
				case (int)1032: {
					HX_STACK_LINE(399)
					::openfl::_legacy::gl::GL_obj::lime_gl_cull_face((int)1032);
				}
				;break;
				default: {
					HX_STACK_LINE(400)
					HX_STACK_DO_THROW(HX_CSTRING("Unknown Context3DTriangleFace type."));
				}
			}
		}
		HX_STACK_LINE(406)
		switch( (int)(triangleFaceToCull)){
			case (int)1029: {
				HX_STACK_LINE(410)
				this->_yFlip = (int)-1;
			}
			;break;
			case (int)1028: {
				HX_STACK_LINE(414)
				this->_yFlip = (int)1;
			}
			;break;
			case (int)1032: {
				HX_STACK_LINE(418)
				this->_yFlip = (int)1;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(422)
				this->_yFlip = (int)1;
			}
			;break;
			default: {
				HX_STACK_LINE(426)
				HX_STACK_DO_THROW(((HX_CSTRING("Unknown culling mode ") + triangleFaceToCull) + HX_CSTRING(".")));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setCulling,(void))

Void Context3D_obj::setDepthTest( bool depthMask,int passCompareMode){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setDepthTest",0x2d08b41a,"openfl.display3D.Context3D.setDepthTest","openfl/display3D/Context3D.hx",432,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(depthMask,"depthMask")
		HX_STACK_ARG(passCompareMode,"passCompareMode")
		HX_STACK_LINE(436)
		::openfl::_legacy::gl::GL_obj::lime_gl_depth_func(passCompareMode);
		HX_STACK_LINE(437)
		::openfl::_legacy::gl::GL_obj::lime_gl_depth_mask(depthMask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setDepthTest,(void))

Void Context3D_obj::setGLSLProgramConstantsFromByteArray( ::String locationName,::openfl::_legacy::utils::ByteArray data,hx::Null< int >  __o_byteArrayOffset){
int byteArrayOffset = __o_byteArrayOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromByteArray",0xf444f7a3,"openfl.display3D.Context3D.setGLSLProgramConstantsFromByteArray","openfl/display3D/Context3D.hx",442,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
{
		HX_STACK_LINE(444)
		data->position = byteArrayOffset;
		HX_STACK_LINE(445)
		Dynamic location = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(this->currentProgram->glProgram->id,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(446)
		{
			HX_STACK_LINE(446)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(446)
			Float x = data->readFloat();		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(446)
			Float y = data->readFloat();		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(446)
			Float z = data->readFloat();		HX_STACK_VAR(z,"z");
			HX_STACK_LINE(446)
			Float w = data->readFloat();		HX_STACK_VAR(w,"w");
			HX_STACK_LINE(446)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform4f(location1,x,y,z,w);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromByteArray,(void))

Void Context3D_obj::setGLSLProgramConstantsFromMatrix( ::String locationName,::openfl::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromMatrix",0x2c9d8ccf,"openfl.display3D.Context3D.setGLSLProgramConstantsFromMatrix","openfl/display3D/Context3D.hx",451,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transposedMatrix,"transposedMatrix")
{
		HX_STACK_LINE(453)
		Dynamic location = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(this->currentProgram->glProgram->id,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(454)
		{
			HX_STACK_LINE(454)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(454)
			::openfl::_legacy::utils::Float32Array v = ::openfl::_legacy::utils::Float32Array_obj::__new(matrix->rawData,null(),null());		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(454)
			::openfl::_legacy::utils::ByteArray _g = v->getByteBuffer();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(454)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform_matrix(location1,!(transposedMatrix),_g,(int)4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromMatrix,(void))

Void Context3D_obj::setGLSLProgramConstantsFromVector4( ::String locationName,Array< Float > data,hx::Null< int >  __o_startIndex){
int startIndex = __o_startIndex.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLProgramConstantsFromVector4",0x24735fc3,"openfl.display3D.Context3D.setGLSLProgramConstantsFromVector4","openfl/display3D/Context3D.hx",459,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(startIndex,"startIndex")
{
		HX_STACK_LINE(461)
		Dynamic location = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(this->currentProgram->glProgram->id,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
			HX_STACK_LINE(462)
			::openfl::_legacy::gl::GL_obj::lime_gl_uniform4f(location1,data->__get(startIndex),data->__get((startIndex + (int)1)),data->__get((startIndex + (int)2)),data->__get((startIndex + (int)3)));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLProgramConstantsFromVector4,(void))

Void Context3D_obj::setGLSLTextureAt( ::String locationName,::openfl::display3D::textures::TextureBase texture,int textureIndex){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLTextureAt",0xd796fc95,"openfl.display3D.Context3D.setGLSLTextureAt","openfl/display3D/Context3D.hx",467,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(locationName,"locationName")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(textureIndex,"textureIndex")
		HX_STACK_LINE(469)
		switch( (int)(textureIndex)){
			case (int)0: {
				HX_STACK_LINE(471)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33984);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(472)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33985);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(473)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33986);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(474)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33987);
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(475)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33988);
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(476)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33989);
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(477)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33990);
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(478)
				::openfl::_legacy::gl::GL_obj::lime_gl_active_texture((int)33991);
			}
			;break;
			default: {
				HX_STACK_LINE(480)
				HX_STACK_DO_THROW(HX_CSTRING("Does not support texture8 or more"));
			}
		}
		HX_STACK_LINE(484)
		if (((texture == null()))){
			HX_STACK_LINE(486)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,null());
			HX_STACK_LINE(487)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,null());
			HX_STACK_LINE(488)
			return null();
		}
		HX_STACK_LINE(492)
		Dynamic location = ::openfl::_legacy::gl::GL_obj::lime_gl_get_uniform_location(this->currentProgram->glProgram->id,locationName);		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(494)
		if ((::Std_obj::is(texture,hx::ClassOf< ::openfl::display3D::textures::Texture >()))){
			HX_STACK_LINE(496)
			{
				HX_STACK_LINE(496)
				::openfl::_legacy::gl::GLTexture texture1 = (hx::TCast< openfl::display3D::textures::Texture >::cast(texture))->glTexture;		HX_STACK_VAR(texture1,"texture1");
				HX_STACK_LINE(496)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
			}
			HX_STACK_LINE(497)
			{
				HX_STACK_LINE(497)
				Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
				HX_STACK_LINE(497)
				::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(location1,textureIndex);
			}
		}
		else{
			HX_STACK_LINE(499)
			if ((::Std_obj::is(texture,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >()))){
				HX_STACK_LINE(501)
				{
					HX_STACK_LINE(501)
					::openfl::_legacy::gl::GLTexture texture1 = (hx::TCast< openfl::display3D::textures::RectangleTexture >::cast(texture))->glTexture;		HX_STACK_VAR(texture1,"texture1");
					HX_STACK_LINE(501)
					::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
				}
				HX_STACK_LINE(502)
				{
					HX_STACK_LINE(502)
					Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
					HX_STACK_LINE(502)
					::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(location1,textureIndex);
				}
			}
			else{
				HX_STACK_LINE(504)
				if ((::Std_obj::is(texture,hx::ClassOf< ::openfl::display3D::textures::CubeTexture >()))){
					HX_STACK_LINE(506)
					{
						HX_STACK_LINE(506)
						::openfl::_legacy::gl::GLTexture texture1 = (hx::TCast< openfl::display3D::textures::CubeTexture >::cast(texture))->glTexture;		HX_STACK_VAR(texture1,"texture1");
						HX_STACK_LINE(506)
						::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)34067,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
					}
					HX_STACK_LINE(507)
					{
						HX_STACK_LINE(507)
						Dynamic location1 = location;		HX_STACK_VAR(location1,"location1");
						HX_STACK_LINE(507)
						::openfl::_legacy::gl::GL_obj::lime_gl_uniform1i(location1,textureIndex);
					}
				}
				else{
					HX_STACK_LINE(511)
					::Class _g = ::Type_obj::getClass(texture);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(511)
					::String _g1 = ::Type_obj::getClassName(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(511)
					::String _g2 = (HX_CSTRING("Texture of type ") + _g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(511)
					HX_STACK_DO_THROW((_g2 + HX_CSTRING(" not supported yet")));
				}
			}
		}
		HX_STACK_LINE(515)
		::openfl::display3D::_Context3D::SamplerState parameters = this->samplerParameters->__get(textureIndex).StaticCast< ::openfl::display3D::_Context3D::SamplerState >();		HX_STACK_VAR(parameters,"parameters");
		HX_STACK_LINE(517)
		if (((parameters != null()))){
			HX_STACK_LINE(519)
			this->setTextureParameters(texture,parameters->wrap,parameters->filter,parameters->mipfilter);
		}
		else{
			HX_STACK_LINE(523)
			this->setTextureParameters(texture,::openfl::display3D::Context3DWrapMode_obj::CLAMP,::openfl::display3D::Context3DTextureFilter_obj::NEAREST,::openfl::display3D::Context3DMipFilter_obj::MIPNONE);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setGLSLTextureAt,(void))

Void Context3D_obj::setGLSLVertexBufferAt( ::String locationName,::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::openfl::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setGLSLVertexBufferAt",0x58133e50,"openfl.display3D.Context3D.setGLSLVertexBufferAt","openfl/display3D/Context3D.hx",530,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(locationName,"locationName")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(bufferOffset,"bufferOffset")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(532)
		int location;		HX_STACK_VAR(location,"location");
		HX_STACK_LINE(532)
		if (((bool((this->currentProgram != null())) && bool((this->currentProgram->glProgram != null()))))){
			HX_STACK_LINE(532)
			location = ::openfl::_legacy::gl::GL_obj::lime_gl_get_attrib_location(this->currentProgram->glProgram->id,locationName);
		}
		else{
			HX_STACK_LINE(532)
			location = (int)-1;
		}
		HX_STACK_LINE(534)
		if (((buffer == null()))){
			HX_STACK_LINE(536)
			if (((location > (int)-1))){
				HX_STACK_LINE(538)
				::openfl::_legacy::gl::GL_obj::lime_gl_disable_vertex_attrib_array(location);
				HX_STACK_LINE(541)
				::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,null());
			}
			HX_STACK_LINE(546)
			return null();
		}
		HX_STACK_LINE(550)
		{
			HX_STACK_LINE(550)
			::openfl::_legacy::gl::GLBuffer buffer1 = buffer->glBuffer;		HX_STACK_VAR(buffer1,"buffer1");
			HX_STACK_LINE(550)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_buffer((int)34962,(  (((buffer1 == null()))) ? Dynamic(null()) : Dynamic(buffer1->id) ));
		}
		HX_STACK_LINE(552)
		int dimension = (int)4;		HX_STACK_VAR(dimension,"dimension");
		HX_STACK_LINE(553)
		int type = (int)5126;		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(554)
		int numBytes = (int)4;		HX_STACK_VAR(numBytes,"numBytes");
		HX_STACK_LINE(556)
		if (((format == ::openfl::display3D::Context3DVertexBufferFormat_obj::BYTES_4))){
			HX_STACK_LINE(558)
			dimension = (int)4;
			HX_STACK_LINE(559)
			type = (int)5126;
			HX_STACK_LINE(560)
			numBytes = (int)4;
		}
		else{
			HX_STACK_LINE(562)
			if (((format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_1))){
				HX_STACK_LINE(564)
				dimension = (int)1;
				HX_STACK_LINE(565)
				type = (int)5126;
				HX_STACK_LINE(566)
				numBytes = (int)4;
			}
			else{
				HX_STACK_LINE(568)
				if (((format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_2))){
					HX_STACK_LINE(570)
					dimension = (int)2;
					HX_STACK_LINE(571)
					type = (int)5126;
					HX_STACK_LINE(572)
					numBytes = (int)4;
				}
				else{
					HX_STACK_LINE(574)
					if (((format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_3))){
						HX_STACK_LINE(576)
						dimension = (int)3;
						HX_STACK_LINE(577)
						type = (int)5126;
						HX_STACK_LINE(578)
						numBytes = (int)4;
					}
					else{
						HX_STACK_LINE(580)
						if (((format == ::openfl::display3D::Context3DVertexBufferFormat_obj::FLOAT_4))){
							HX_STACK_LINE(582)
							dimension = (int)4;
							HX_STACK_LINE(583)
							type = (int)5126;
							HX_STACK_LINE(584)
							numBytes = (int)4;
						}
						else{
							HX_STACK_LINE(588)
							::String _g = ::Std_obj::string(format);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(588)
							::String _g1 = (HX_CSTRING("Buffer format ") + _g);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(588)
							HX_STACK_DO_THROW((_g1 + HX_CSTRING(" is not supported")));
						}
					}
				}
			}
		}
		HX_STACK_LINE(592)
		::openfl::_legacy::gl::GL_obj::lime_gl_enable_vertex_attrib_array(location);
		HX_STACK_LINE(593)
		::openfl::_legacy::gl::GL_obj::lime_gl_vertex_attrib_pointer(location,dimension,type,false,(buffer->data32PerVertex * numBytes),(bufferOffset * numBytes));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setGLSLVertexBufferAt,(void))

Void Context3D_obj::setProgram( ::openfl::display3D::Program3D program3D){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setProgram",0xd9d9d869,"openfl.display3D.Context3D.setProgram","openfl/display3D/Context3D.hx",598,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program3D,"program3D")
		HX_STACK_LINE(600)
		::openfl::_legacy::gl::GLProgram glProgram = null();		HX_STACK_VAR(glProgram,"glProgram");
		HX_STACK_LINE(602)
		if (((program3D != null()))){
			HX_STACK_LINE(604)
			glProgram = program3D->glProgram;
		}
		HX_STACK_LINE(608)
		::openfl::_legacy::gl::GL_obj::lime_gl_use_program((  (((glProgram == null()))) ? Dynamic(null()) : Dynamic(glProgram->id) ));
		HX_STACK_LINE(609)
		this->currentProgram = program3D;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setProgram,(void))

Void Context3D_obj::setProgramConstantsFromByteArray( ::openfl::display3D::Context3DProgramType programType,int firstRegister,int numRegisters,::openfl::_legacy::utils::ByteArray data,int byteArrayOffset){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromByteArray",0xd8990de1,"openfl.display3D.Context3D.setProgramConstantsFromByteArray","openfl/display3D/Context3D.hx",616,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(programType,"programType")
		HX_STACK_ARG(firstRegister,"firstRegister")
		HX_STACK_ARG(numRegisters,"numRegisters")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(byteArrayOffset,"byteArrayOffset")
		HX_STACK_LINE(618)
		data->position = byteArrayOffset;
		HX_STACK_LINE(620)
		{
			HX_STACK_LINE(620)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(620)
			while((true)){
				HX_STACK_LINE(620)
				if ((!(((_g < numRegisters))))){
					HX_STACK_LINE(620)
					break;
				}
				HX_STACK_LINE(620)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(622)
				::String locationName = this->__getUniformLocationNameFromAgalRegisterIndex(programType,(firstRegister + i));		HX_STACK_VAR(locationName,"locationName");
				HX_STACK_LINE(623)
				this->setGLSLProgramConstantsFromByteArray(locationName,data,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setProgramConstantsFromByteArray,(void))

Void Context3D_obj::setProgramConstantsFromMatrix( ::openfl::display3D::Context3DProgramType programType,int firstRegister,::openfl::geom::Matrix3D matrix,hx::Null< bool >  __o_transposedMatrix){
bool transposedMatrix = __o_transposedMatrix.Default(false);
	HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromMatrix",0x29e843d1,"openfl.display3D.Context3D.setProgramConstantsFromMatrix","openfl/display3D/Context3D.hx",630,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(transposedMatrix,"transposedMatrix")
{
		HX_STACK_LINE(635)
		Array< Float > d = matrix->rawData;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(636)
		if ((transposedMatrix)){
			HX_STACK_LINE(637)
			this->setProgramConstantsFromVector(programType,firstRegister,Array_obj< Float >::__new().Add(d->__get((int)0)).Add(d->__get((int)4)).Add(d->__get((int)8)).Add(d->__get((int)12)),(int)1);
			HX_STACK_LINE(638)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)1),Array_obj< Float >::__new().Add(d->__get((int)1)).Add(d->__get((int)5)).Add(d->__get((int)9)).Add(d->__get((int)13)),(int)1);
			HX_STACK_LINE(639)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)2),Array_obj< Float >::__new().Add(d->__get((int)2)).Add(d->__get((int)6)).Add(d->__get((int)10)).Add(d->__get((int)14)),(int)1);
			HX_STACK_LINE(640)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)3),Array_obj< Float >::__new().Add(d->__get((int)3)).Add(d->__get((int)7)).Add(d->__get((int)11)).Add(d->__get((int)15)),(int)1);
		}
		else{
			HX_STACK_LINE(642)
			this->setProgramConstantsFromVector(programType,firstRegister,Array_obj< Float >::__new().Add(d->__get((int)0)).Add(d->__get((int)1)).Add(d->__get((int)2)).Add(d->__get((int)3)),(int)1);
			HX_STACK_LINE(643)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)1),Array_obj< Float >::__new().Add(d->__get((int)4)).Add(d->__get((int)5)).Add(d->__get((int)6)).Add(d->__get((int)7)),(int)1);
			HX_STACK_LINE(644)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)2),Array_obj< Float >::__new().Add(d->__get((int)8)).Add(d->__get((int)9)).Add(d->__get((int)10)).Add(d->__get((int)11)),(int)1);
			HX_STACK_LINE(645)
			this->setProgramConstantsFromVector(programType,(firstRegister + (int)3),Array_obj< Float >::__new().Add(d->__get((int)12)).Add(d->__get((int)13)).Add(d->__get((int)14)).Add(d->__get((int)15)),(int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromMatrix,(void))

Void Context3D_obj::setProgramConstantsFromVector( ::openfl::display3D::Context3DProgramType programType,int firstRegister,Array< Float > data,hx::Null< int >  __o_numRegisters){
int numRegisters = __o_numRegisters.Default(1);
	HX_STACK_FRAME("openfl.display3D.Context3D","setProgramConstantsFromVector",0x057dbe53,"openfl.display3D.Context3D.setProgramConstantsFromVector","openfl/display3D/Context3D.hx",653,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_ARG(data,"data")
	HX_STACK_ARG(numRegisters,"numRegisters")
{
		HX_STACK_LINE(653)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(653)
		while((true)){
			HX_STACK_LINE(653)
			if ((!(((_g < numRegisters))))){
				HX_STACK_LINE(653)
				break;
			}
			HX_STACK_LINE(653)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(655)
			int currentIndex = (i * (int)4);		HX_STACK_VAR(currentIndex,"currentIndex");
			HX_STACK_LINE(656)
			::String locationName = this->__getUniformLocationNameFromAgalRegisterIndex(programType,(firstRegister + i));		HX_STACK_VAR(locationName,"locationName");
			HX_STACK_LINE(657)
			this->setGLSLProgramConstantsFromVector4(locationName,data,currentIndex);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setProgramConstantsFromVector,(void))

Void Context3D_obj::setRenderMethod( Dynamic func){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setRenderMethod",0x286aeed2,"openfl.display3D.Context3D.setRenderMethod","openfl/display3D/Context3D.hx",664,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(664)
		Dynamic func1 = Dynamic( Array_obj<Dynamic>::__new().Add(func));		HX_STACK_VAR(func1,"func1");

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Dynamic,func1)
		Void run(::openfl::_legacy::geom::Rectangle rect){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display3D/Context3D.hx",668,0xc899cbb9)
			HX_STACK_ARG(rect,"rect")
			{
				HX_STACK_LINE(668)
				func1->__GetItem((int)0)(null()).Cast< Void >();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(668)
		this->ogl->render =  Dynamic(new _Function_1_1(func1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setRenderMethod,(void))

Void Context3D_obj::setRenderToBackBuffer( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setRenderToBackBuffer",0x6095d693,"openfl.display3D.Context3D.setRenderToBackBuffer","openfl/display3D/Context3D.hx",673,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(675)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2929);
		HX_STACK_LINE(676)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)2960);
		HX_STACK_LINE(677)
		::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)3089);
		HX_STACK_LINE(679)
		if (((this->framebuffer != null()))){
			HX_STACK_LINE(681)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,null());
		}
		HX_STACK_LINE(685)
		if (((this->renderbuffer != null()))){
			HX_STACK_LINE(687)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,null());
		}
		HX_STACK_LINE(691)
		{
			HX_STACK_LINE(691)
			int x = ::Std_obj::_int(this->scrollRect->x);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(691)
			int y = ::Std_obj::_int(this->scrollRect->y);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(691)
			int width = ::Std_obj::_int(this->scrollRect->width);		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(691)
			int height = ::Std_obj::_int(this->scrollRect->height);		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(691)
			::openfl::_legacy::gl::GL_obj::lime_gl_viewport(x,y,width,height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,setRenderToBackBuffer,(void))

Void Context3D_obj::setRenderToTexture( ::openfl::display3D::textures::TextureBase texture,hx::Null< bool >  __o_enableDepthAndStencil,hx::Null< int >  __o_antiAlias,hx::Null< int >  __o_surfaceSelector){
bool enableDepthAndStencil = __o_enableDepthAndStencil.Default(false);
int antiAlias = __o_antiAlias.Default(0);
int surfaceSelector = __o_surfaceSelector.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setRenderToTexture",0x25c5d54f,"openfl.display3D.Context3D.setRenderToTexture","openfl/display3D/Context3D.hx",696,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_ARG(enableDepthAndStencil,"enableDepthAndStencil")
	HX_STACK_ARG(antiAlias,"antiAlias")
	HX_STACK_ARG(surfaceSelector,"surfaceSelector")
{
		HX_STACK_LINE(700)
		if (((this->framebuffer == null()))){
			HX_STACK_LINE(702)
			int _g = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(702)
			Dynamic _g1 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_framebuffer();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(702)
			::openfl::_legacy::gl::GLFramebuffer _g2 = ::openfl::_legacy::gl::GLFramebuffer_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(702)
			this->framebuffer = _g2;
		}
		HX_STACK_LINE(706)
		{
			HX_STACK_LINE(706)
			::openfl::_legacy::gl::GLFramebuffer framebuffer = this->framebuffer;		HX_STACK_VAR(framebuffer,"framebuffer");
			HX_STACK_LINE(706)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_framebuffer((int)36160,(  (((framebuffer == null()))) ? Dynamic(null()) : Dynamic(framebuffer->id) ));
		}
		HX_STACK_LINE(708)
		if (((this->renderbuffer == null()))){
			HX_STACK_LINE(710)
			int _g3 = ::openfl::_legacy::gl::GL_obj::get_version();		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(710)
			Dynamic _g4 = ::openfl::_legacy::gl::GL_obj::lime_gl_create_render_buffer();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(710)
			::openfl::_legacy::gl::GLRenderbuffer _g5 = ::openfl::_legacy::gl::GLRenderbuffer_obj::__new(_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(710)
			this->renderbuffer = _g5;
		}
		HX_STACK_LINE(714)
		{
			HX_STACK_LINE(714)
			::openfl::_legacy::gl::GLRenderbuffer renderbuffer = this->renderbuffer;		HX_STACK_VAR(renderbuffer,"renderbuffer");
			HX_STACK_LINE(714)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_renderbuffer((int)36161,(  (((renderbuffer == null()))) ? Dynamic(null()) : Dynamic(renderbuffer->id) ));
		}
		HX_STACK_LINE(718)
		::openfl::_legacy::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)6408,texture->width,texture->height);
		HX_STACK_LINE(720)
		::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_texture2D((int)36160,(int)36064,(int)3553,texture->glTexture->id,(int)0);
		HX_STACK_LINE(722)
		::openfl::_legacy::gl::GL_obj::lime_gl_renderbuffer_storage((int)36161,(int)34041,texture->width,texture->height);
		HX_STACK_LINE(723)
		::openfl::_legacy::gl::GL_obj::lime_gl_framebuffer_renderbuffer((int)36160,(int)33306,(int)36161,this->renderbuffer->id);
		HX_STACK_LINE(725)
		if ((enableDepthAndStencil)){
			HX_STACK_LINE(727)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2929);
			HX_STACK_LINE(728)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)2960);
		}
		HX_STACK_LINE(731)
		{
			HX_STACK_LINE(731)
			::openfl::_legacy::gl::GLTexture texture1 = texture->glTexture;		HX_STACK_VAR(texture1,"texture1");
			HX_STACK_LINE(731)
			::openfl::_legacy::gl::GL_obj::lime_gl_bind_texture((int)3553,(  (((texture1 == null()))) ? Dynamic(null()) : Dynamic(texture1->id) ));
		}
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			::openfl::_legacy::utils::ByteArray _g6 = null();		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(732)
			Dynamic _g7 = null();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(732)
			::openfl::_legacy::gl::GL_obj::lime_gl_tex_image_2d((int)3553,(int)0,(int)6408,texture->width,texture->height,(int)0,(int)6408,(int)5121,_g6,_g7);
		}
		HX_STACK_LINE(733)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
		HX_STACK_LINE(734)
		::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9985);
		HX_STACK_LINE(736)
		::openfl::_legacy::gl::GL_obj::lime_gl_viewport((int)0,(int)0,texture->width,texture->height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setRenderToTexture,(void))

Void Context3D_obj::setSamplerStateAt( int sampler,::openfl::display3D::Context3DWrapMode wrap,::openfl::display3D::Context3DTextureFilter filter,::openfl::display3D::Context3DMipFilter mipfilter){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setSamplerStateAt",0x9f8ad1f7,"openfl.display3D.Context3D.setSamplerStateAt","openfl/display3D/Context3D.hx",744,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(wrap,"wrap")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(mipfilter,"mipfilter")
		HX_STACK_LINE(744)
		if (((bool(((int)0 <= sampler)) && bool((sampler < ::openfl::display3D::Context3D_obj::MAX_SAMPLERS))))){
			HX_STACK_LINE(746)
			this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >()->wrap = wrap;
			HX_STACK_LINE(747)
			this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >()->filter = filter;
			HX_STACK_LINE(748)
			this->samplerParameters->__get(sampler).StaticCast< ::openfl::display3D::_Context3D::SamplerState >()->mipfilter = mipfilter;
		}
		else{
			HX_STACK_LINE(752)
			HX_STACK_DO_THROW(HX_CSTRING("Sampler is out of bounds."));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setSamplerStateAt,(void))

Void Context3D_obj::setScissorRectangle( ::openfl::_legacy::geom::Rectangle rectangle){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setScissorRectangle",0x712bb5ee,"openfl.display3D.Context3D.setScissorRectangle","openfl/display3D/Context3D.hx",759,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rectangle,"rectangle")
		HX_STACK_LINE(763)
		if (((rectangle == null()))){
			HX_STACK_LINE(765)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)3089);
			HX_STACK_LINE(766)
			return null();
		}
		HX_STACK_LINE(770)
		::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)3089);
		HX_STACK_LINE(771)
		{
			HX_STACK_LINE(771)
			int x = ::Std_obj::_int(rectangle->x);		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(771)
			int y = ::Std_obj::_int(rectangle->y);		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(771)
			int width = ::Std_obj::_int(rectangle->width);		HX_STACK_VAR(width,"width");
			HX_STACK_LINE(771)
			int height = ::Std_obj::_int(rectangle->height);		HX_STACK_VAR(height,"height");
			HX_STACK_LINE(771)
			::openfl::_legacy::gl::GL_obj::lime_gl_scissor(x,y,width,height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Context3D_obj,setScissorRectangle,(void))

Void Context3D_obj::setStencilActions( Dynamic triangleFace,Dynamic compareMode,Dynamic actionOnBothPass,Dynamic actionOnDepthFail,Dynamic actionOnDepthPassStencilFail){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setStencilActions",0x1fe08e1c,"openfl.display3D.Context3D.setStencilActions","openfl/display3D/Context3D.hx",776,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(triangleFace,"triangleFace")
		HX_STACK_ARG(compareMode,"compareMode")
		HX_STACK_ARG(actionOnBothPass,"actionOnBothPass")
		HX_STACK_ARG(actionOnDepthFail,"actionOnDepthFail")
		HX_STACK_ARG(actionOnDepthPassStencilFail,"actionOnDepthPassStencilFail")
		HX_STACK_LINE(778)
		this->stencilCompareMode = compareMode;
		HX_STACK_LINE(779)
		{
			HX_STACK_LINE(779)
			int fail = actionOnBothPass;		HX_STACK_VAR(fail,"fail");
			HX_STACK_LINE(779)
			int zfail = actionOnDepthFail;		HX_STACK_VAR(zfail,"zfail");
			HX_STACK_LINE(779)
			int zpass = actionOnDepthPassStencilFail;		HX_STACK_VAR(zpass,"zpass");
			HX_STACK_LINE(779)
			::openfl::_legacy::gl::GL_obj::lime_gl_stencil_op(fail,zfail,zpass);
		}
		HX_STACK_LINE(780)
		::openfl::_legacy::gl::GL_obj::lime_gl_stencil_func(this->stencilCompareMode,this->stencilRef,this->stencilReadMask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Context3D_obj,setStencilActions,(void))

Void Context3D_obj::setStencilReferenceValue( int referenceValue,hx::Null< int >  __o_readMask,hx::Null< int >  __o_writeMask){
int readMask = __o_readMask.Default(255);
int writeMask = __o_writeMask.Default(255);
	HX_STACK_FRAME("openfl.display3D.Context3D","setStencilReferenceValue",0xaa284f67,"openfl.display3D.Context3D.setStencilReferenceValue","openfl/display3D/Context3D.hx",785,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(referenceValue,"referenceValue")
	HX_STACK_ARG(readMask,"readMask")
	HX_STACK_ARG(writeMask,"writeMask")
{
		HX_STACK_LINE(787)
		this->stencilReadMask = readMask;
		HX_STACK_LINE(788)
		this->stencilRef = referenceValue;
		HX_STACK_LINE(790)
		::openfl::_legacy::gl::GL_obj::lime_gl_stencil_func(this->stencilCompareMode,this->stencilRef,this->stencilReadMask);
		HX_STACK_LINE(791)
		::openfl::_legacy::gl::GL_obj::lime_gl_stencil_mask(writeMask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Context3D_obj,setStencilReferenceValue,(void))

Void Context3D_obj::setTextureAt( int sampler,::openfl::display3D::textures::TextureBase texture){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setTextureAt",0x38d4bfd3,"openfl.display3D.Context3D.setTextureAt","openfl/display3D/Context3D.hx",796,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sampler,"sampler")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(798)
		::String locationName = (HX_CSTRING("fs") + sampler);		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(799)
		this->setGLSLTextureAt(locationName,texture,sampler);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,setTextureAt,(void))

Void Context3D_obj::setTextureParameters( ::openfl::display3D::textures::TextureBase texture,::openfl::display3D::Context3DWrapMode wrap,::openfl::display3D::Context3DTextureFilter filter,::openfl::display3D::Context3DMipFilter mipfilter){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","setTextureParameters",0x0709098a,"openfl.display3D.Context3D.setTextureParameters","openfl/display3D/Context3D.hx",804,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(wrap,"wrap")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_ARG(mipfilter,"mipfilter")
		HX_STACK_LINE(806)
		if ((!(::openfl::display3D::Context3D_obj::anisotropySupportTested))){
			struct _Function_2_1{
				inline static Array< ::String > Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",810,0xc899cbb9)
					{
						HX_STACK_LINE(810)
						Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(810)
						::openfl::_legacy::gl::GL_obj::lime_gl_get_supported_extensions(result);
						HX_STACK_LINE(810)
						return result;
					}
					return null();
				}
			};
			HX_STACK_LINE(810)
			int _g = (_Function_2_1::Block())->indexOf(HX_CSTRING("GL_EXT_texture_filter_anisotropic"),null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(810)
			bool _g1 = (_g != (int)-1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(810)
			::openfl::display3D::Context3D_obj::supportsAnisotropy = _g1;
			HX_STACK_LINE(812)
			if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
				HX_STACK_LINE(816)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,::openfl::display3D::Context3D_obj::maxSupportedAnisotropy);
			}
			HX_STACK_LINE(833)
			::openfl::display3D::Context3D_obj::anisotropySupportTested = true;
		}
		HX_STACK_LINE(837)
		if ((::Std_obj::is(texture,hx::ClassOf< ::openfl::display3D::textures::Texture >()))){
			HX_STACK_LINE(839)
			switch( (int)(wrap->__Index())){
				case (int)0: {
					HX_STACK_LINE(843)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
					HX_STACK_LINE(844)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(848)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)10497);
					HX_STACK_LINE(849)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)10497);
				}
				;break;
			}
			HX_STACK_LINE(856)
			switch( (int)(filter->__Index())){
				case (int)4: {
					HX_STACK_LINE(860)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
					HX_STACK_LINE(861)
					if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
						HX_STACK_LINE(862)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(866)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
					HX_STACK_LINE(867)
					if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
						HX_STACK_LINE(868)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(872)
					if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
						struct _Function_4_1{
							inline static bool Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",873,0xc899cbb9)
								{
									HX_STACK_LINE(873)
									int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
									struct _Function_5_1{
										inline static bool Block( int &a){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",873,0xc899cbb9)
											{
												HX_STACK_LINE(873)
												bool aNeg = ((int)2 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
												HX_STACK_LINE(873)
												bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
												HX_STACK_LINE(873)
												return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)2 > a)) );
											}
											return null();
										}
									};
									HX_STACK_LINE(873)
									return _Function_5_1::Block(a);
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",873,0xc899cbb9)
								{
									HX_STACK_LINE(873)
									int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(873)
									return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(873)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_4_1::Block())) ? Float(_Function_4_2::Block()) : Float((int)2) ));
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(877)
					if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
						struct _Function_4_1{
							inline static bool Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",878,0xc899cbb9)
								{
									HX_STACK_LINE(878)
									int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
									struct _Function_5_1{
										inline static bool Block( int &a){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",878,0xc899cbb9)
											{
												HX_STACK_LINE(878)
												bool aNeg = ((int)4 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
												HX_STACK_LINE(878)
												bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
												HX_STACK_LINE(878)
												return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)4 > a)) );
											}
											return null();
										}
									};
									HX_STACK_LINE(878)
									return _Function_5_1::Block(a);
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",878,0xc899cbb9)
								{
									HX_STACK_LINE(878)
									int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(878)
									return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(878)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_4_1::Block())) ? Float(_Function_4_2::Block()) : Float((int)4) ));
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(882)
					if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
						struct _Function_4_1{
							inline static bool Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",883,0xc899cbb9)
								{
									HX_STACK_LINE(883)
									int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
									struct _Function_5_1{
										inline static bool Block( int &a){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",883,0xc899cbb9)
											{
												HX_STACK_LINE(883)
												bool aNeg = ((int)8 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
												HX_STACK_LINE(883)
												bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
												HX_STACK_LINE(883)
												return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)8 > a)) );
											}
											return null();
										}
									};
									HX_STACK_LINE(883)
									return _Function_5_1::Block(a);
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",883,0xc899cbb9)
								{
									HX_STACK_LINE(883)
									int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(883)
									return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(883)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_4_1::Block())) ? Float(_Function_4_2::Block()) : Float((int)8) ));
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(887)
					if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
						struct _Function_4_1{
							inline static bool Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",888,0xc899cbb9)
								{
									HX_STACK_LINE(888)
									int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
									struct _Function_5_1{
										inline static bool Block( int &a){
											HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",888,0xc899cbb9)
											{
												HX_STACK_LINE(888)
												bool aNeg = ((int)16 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
												HX_STACK_LINE(888)
												bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
												HX_STACK_LINE(888)
												return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)16 > a)) );
											}
											return null();
										}
									};
									HX_STACK_LINE(888)
									return _Function_5_1::Block(a);
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Float Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",888,0xc899cbb9)
								{
									HX_STACK_LINE(888)
									int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
									HX_STACK_LINE(888)
									return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
								}
								return null();
							}
						};
						HX_STACK_LINE(888)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_4_1::Block())) ? Float(_Function_4_2::Block()) : Float((int)16) ));
					}
				}
				;break;
			}
			HX_STACK_LINE(892)
			switch( (int)(mipfilter->__Index())){
				case (int)0: {
					HX_STACK_LINE(896)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9987);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(900)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(int)9984);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(904)
					::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(  (((filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST))) ? int((int)9728) : int((int)9729) ));
				}
				;break;
			}
			HX_STACK_LINE(908)
			::openfl::display3D::textures::Texture tex = texture;		HX_STACK_VAR(tex,"tex");
			HX_STACK_LINE(909)
			if (((bool((mipfilter != ::openfl::display3D::Context3DMipFilter_obj::MIPNONE)) && bool(!(tex->mipmapsGenerated))))){
				HX_STACK_LINE(910)
				::openfl::_legacy::gl::GL_obj::lime_gl_generate_mipmap((int)3553);
				HX_STACK_LINE(911)
				tex->mipmapsGenerated = true;
			}
		}
		else{
			HX_STACK_LINE(915)
			if ((::Std_obj::is(texture,hx::ClassOf< ::openfl::display3D::textures::RectangleTexture >()))){
				HX_STACK_LINE(917)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10242,(int)33071);
				HX_STACK_LINE(918)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10243,(int)33071);
				HX_STACK_LINE(920)
				switch( (int)(filter->__Index())){
					case (int)4: {
						HX_STACK_LINE(924)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9729);
						HX_STACK_LINE(925)
						if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
							HX_STACK_LINE(926)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(930)
						::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10240,(int)9728);
						HX_STACK_LINE(931)
						if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
							HX_STACK_LINE(932)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
						}
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(936)
						if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
							struct _Function_5_1{
								inline static bool Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",937,0xc899cbb9)
									{
										HX_STACK_LINE(937)
										int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
										struct _Function_6_1{
											inline static bool Block( int &a){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",937,0xc899cbb9)
												{
													HX_STACK_LINE(937)
													bool aNeg = ((int)2 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
													HX_STACK_LINE(937)
													bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
													HX_STACK_LINE(937)
													return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)2 > a)) );
												}
												return null();
											}
										};
										HX_STACK_LINE(937)
										return _Function_6_1::Block(a);
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",937,0xc899cbb9)
									{
										HX_STACK_LINE(937)
										int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(937)
										return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(937)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_5_1::Block())) ? Float(_Function_5_2::Block()) : Float((int)2) ));
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(941)
						if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
							struct _Function_5_1{
								inline static bool Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",942,0xc899cbb9)
									{
										HX_STACK_LINE(942)
										int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
										struct _Function_6_1{
											inline static bool Block( int &a){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",942,0xc899cbb9)
												{
													HX_STACK_LINE(942)
													bool aNeg = ((int)4 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
													HX_STACK_LINE(942)
													bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
													HX_STACK_LINE(942)
													return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)4 > a)) );
												}
												return null();
											}
										};
										HX_STACK_LINE(942)
										return _Function_6_1::Block(a);
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",942,0xc899cbb9)
									{
										HX_STACK_LINE(942)
										int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(942)
										return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(942)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_5_1::Block())) ? Float(_Function_5_2::Block()) : Float((int)4) ));
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(946)
						if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
							struct _Function_5_1{
								inline static bool Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",947,0xc899cbb9)
									{
										HX_STACK_LINE(947)
										int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
										struct _Function_6_1{
											inline static bool Block( int &a){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",947,0xc899cbb9)
												{
													HX_STACK_LINE(947)
													bool aNeg = ((int)8 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
													HX_STACK_LINE(947)
													bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
													HX_STACK_LINE(947)
													return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)8 > a)) );
												}
												return null();
											}
										};
										HX_STACK_LINE(947)
										return _Function_6_1::Block(a);
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",947,0xc899cbb9)
									{
										HX_STACK_LINE(947)
										int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(947)
										return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(947)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_5_1::Block())) ? Float(_Function_5_2::Block()) : Float((int)8) ));
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(951)
						if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
							struct _Function_5_1{
								inline static bool Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",952,0xc899cbb9)
									{
										HX_STACK_LINE(952)
										int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
										struct _Function_6_1{
											inline static bool Block( int &a){
												HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",952,0xc899cbb9)
												{
													HX_STACK_LINE(952)
													bool aNeg = ((int)16 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
													HX_STACK_LINE(952)
													bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
													HX_STACK_LINE(952)
													return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)16 > a)) );
												}
												return null();
											}
										};
										HX_STACK_LINE(952)
										return _Function_6_1::Block(a);
									}
									return null();
								}
							};
							struct _Function_5_2{
								inline static Float Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",952,0xc899cbb9)
									{
										HX_STACK_LINE(952)
										int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(952)
										return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
									}
									return null();
								}
							};
							HX_STACK_LINE(952)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)3553,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_5_1::Block())) ? Float(_Function_5_2::Block()) : Float((int)16) ));
						}
					}
					;break;
				}
				HX_STACK_LINE(956)
				::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)3553,(int)10241,(  (((filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST))) ? int((int)9728) : int((int)9729) ));
			}
			else{
				HX_STACK_LINE(958)
				if ((::Std_obj::is(texture,hx::ClassOf< ::openfl::display3D::textures::CubeTexture >()))){
					HX_STACK_LINE(960)
					switch( (int)(wrap->__Index())){
						case (int)0: {
							HX_STACK_LINE(964)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10242,(int)33071);
							HX_STACK_LINE(965)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10243,(int)33071);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(969)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10242,(int)10497);
							HX_STACK_LINE(970)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10243,(int)10497);
						}
						;break;
					}
					HX_STACK_LINE(974)
					switch( (int)(filter->__Index())){
						case (int)4: {
							HX_STACK_LINE(978)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10240,(int)9729);
							HX_STACK_LINE(979)
							if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
								HX_STACK_LINE(980)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
							}
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(984)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10240,(int)9728);
							HX_STACK_LINE(985)
							if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
								HX_STACK_LINE(986)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(int)1);
							}
						}
						;break;
						case (int)0: {
							HX_STACK_LINE(990)
							if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
								struct _Function_6_1{
									inline static bool Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",991,0xc899cbb9)
										{
											HX_STACK_LINE(991)
											int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
											struct _Function_7_1{
												inline static bool Block( int &a){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",991,0xc899cbb9)
													{
														HX_STACK_LINE(991)
														bool aNeg = ((int)2 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
														HX_STACK_LINE(991)
														bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
														HX_STACK_LINE(991)
														return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)2 > a)) );
													}
													return null();
												}
											};
											HX_STACK_LINE(991)
											return _Function_7_1::Block(a);
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static Float Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",991,0xc899cbb9)
										{
											HX_STACK_LINE(991)
											int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
											HX_STACK_LINE(991)
											return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(991)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_6_1::Block())) ? Float(_Function_6_2::Block()) : Float((int)2) ));
							}
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(995)
							if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
								struct _Function_6_1{
									inline static bool Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",996,0xc899cbb9)
										{
											HX_STACK_LINE(996)
											int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
											struct _Function_7_1{
												inline static bool Block( int &a){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",996,0xc899cbb9)
													{
														HX_STACK_LINE(996)
														bool aNeg = ((int)4 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
														HX_STACK_LINE(996)
														bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
														HX_STACK_LINE(996)
														return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)4 > a)) );
													}
													return null();
												}
											};
											HX_STACK_LINE(996)
											return _Function_7_1::Block(a);
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static Float Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",996,0xc899cbb9)
										{
											HX_STACK_LINE(996)
											int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
											HX_STACK_LINE(996)
											return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(996)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_6_1::Block())) ? Float(_Function_6_2::Block()) : Float((int)4) ));
							}
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(1000)
							if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
								struct _Function_6_1{
									inline static bool Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1001,0xc899cbb9)
										{
											HX_STACK_LINE(1001)
											int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
											struct _Function_7_1{
												inline static bool Block( int &a){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1001,0xc899cbb9)
													{
														HX_STACK_LINE(1001)
														bool aNeg = ((int)8 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
														HX_STACK_LINE(1001)
														bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
														HX_STACK_LINE(1001)
														return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)8 > a)) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1001)
											return _Function_7_1::Block(a);
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static Float Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1001,0xc899cbb9)
										{
											HX_STACK_LINE(1001)
											int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
											HX_STACK_LINE(1001)
											return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1001)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_6_1::Block())) ? Float(_Function_6_2::Block()) : Float((int)8) ));
							}
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(1005)
							if ((::openfl::display3D::Context3D_obj::supportsAnisotropy)){
								struct _Function_6_1{
									inline static bool Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1006,0xc899cbb9)
										{
											HX_STACK_LINE(1006)
											int a = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(a,"a");
											struct _Function_7_1{
												inline static bool Block( int &a){
													HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1006,0xc899cbb9)
													{
														HX_STACK_LINE(1006)
														bool aNeg = ((int)16 < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
														HX_STACK_LINE(1006)
														bool bNeg = (a < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
														HX_STACK_LINE(1006)
														return (  (((aNeg != bNeg))) ? bool(aNeg) : bool(((int)16 > a)) );
													}
													return null();
												}
											};
											HX_STACK_LINE(1006)
											return _Function_7_1::Block(a);
										}
										return null();
									}
								};
								struct _Function_6_2{
									inline static Float Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display3D/Context3D.hx",1006,0xc899cbb9)
										{
											HX_STACK_LINE(1006)
											int _int = ::openfl::display3D::Context3D_obj::maxSupportedAnisotropy;		HX_STACK_VAR(_int,"int");
											HX_STACK_LINE(1006)
											return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
										}
										return null();
									}
								};
								HX_STACK_LINE(1006)
								::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameterf((int)34067,::openfl::display3D::Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,(  ((_Function_6_1::Block())) ? Float(_Function_6_2::Block()) : Float((int)16) ));
							}
						}
						;break;
					}
					HX_STACK_LINE(1010)
					switch( (int)(mipfilter->__Index())){
						case (int)0: {
							HX_STACK_LINE(1014)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10241,(int)9987);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(1018)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10241,(int)9984);
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(1022)
							::openfl::_legacy::gl::GL_obj::lime_gl_tex_parameteri((int)34067,(int)10241,(  (((filter == ::openfl::display3D::Context3DTextureFilter_obj::NEAREST))) ? int((int)9728) : int((int)9729) ));
						}
						;break;
					}
					HX_STACK_LINE(1026)
					::openfl::display3D::textures::CubeTexture cubetex = texture;		HX_STACK_VAR(cubetex,"cubetex");
					HX_STACK_LINE(1027)
					if (((bool((mipfilter != ::openfl::display3D::Context3DMipFilter_obj::MIPNONE)) && bool(!(cubetex->mipmapsGenerated))))){
						HX_STACK_LINE(1028)
						::openfl::_legacy::gl::GL_obj::lime_gl_generate_mipmap((int)34067);
						HX_STACK_LINE(1029)
						cubetex->mipmapsGenerated = true;
					}
				}
				else{
					HX_STACK_LINE(1034)
					::Class _g2 = ::Type_obj::getClass(texture);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1034)
					::String _g3 = ::Type_obj::getClassName(_g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1034)
					::String _g4 = (HX_CSTRING("Texture of type ") + _g3);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1034)
					HX_STACK_DO_THROW((_g4 + HX_CSTRING(" not supported yet")));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setTextureParameters,(void))

Void Context3D_obj::setVertexBufferAt( int index,::openfl::display3D::VertexBuffer3D buffer,hx::Null< int >  __o_bufferOffset,::openfl::display3D::Context3DVertexBufferFormat format){
int bufferOffset = __o_bufferOffset.Default(0);
	HX_STACK_FRAME("openfl.display3D.Context3D","setVertexBufferAt",0xbb32fa52,"openfl.display3D.Context3D.setVertexBufferAt","openfl/display3D/Context3D.hx",1041,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(bufferOffset,"bufferOffset")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(1043)
		::String locationName = (HX_CSTRING("va") + index);		HX_STACK_VAR(locationName,"locationName");
		HX_STACK_LINE(1044)
		this->setGLSLVertexBufferAt(locationName,buffer,bufferOffset,format);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Context3D_obj,setVertexBufferAt,(void))

::String Context3D_obj::__getUniformLocationNameFromAgalRegisterIndex( ::openfl::display3D::Context3DProgramType programType,int firstRegister){
	HX_STACK_FRAME("openfl.display3D.Context3D","__getUniformLocationNameFromAgalRegisterIndex",0x072a804f,"openfl.display3D.Context3D.__getUniformLocationNameFromAgalRegisterIndex","openfl/display3D/Context3D.hx",1049,0xc899cbb9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(firstRegister,"firstRegister")
	HX_STACK_LINE(1051)
	if (((programType == ::openfl::display3D::Context3DProgramType_obj::VERTEX))){
		HX_STACK_LINE(1053)
		return (HX_CSTRING("vc") + firstRegister);
	}
	else{
		HX_STACK_LINE(1055)
		if (((programType == ::openfl::display3D::Context3DProgramType_obj::FRAGMENT))){
			HX_STACK_LINE(1057)
			return (HX_CSTRING("fc") + firstRegister);
		}
	}
	HX_STACK_LINE(1061)
	::String _g = ::Std_obj::string(programType);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1061)
	::String _g1 = (HX_CSTRING("Program Type ") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(1061)
	HX_STACK_DO_THROW((_g1 + HX_CSTRING(" not supported")));
	HX_STACK_LINE(1061)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Context3D_obj,__getUniformLocationNameFromAgalRegisterIndex,return )

Void Context3D_obj::__updateBlendStatus( ){
{
		HX_STACK_FRAME("openfl.display3D.Context3D","__updateBlendStatus",0x3fc75d73,"openfl.display3D.Context3D.__updateBlendStatus","openfl/display3D/Context3D.hx",1070,0xc899cbb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1070)
		if ((this->blendEnabled)){
			HX_STACK_LINE(1072)
			::openfl::_legacy::gl::GL_obj::lime_gl_enable((int)3042);
			HX_STACK_LINE(1073)
			::openfl::_legacy::gl::GL_obj::lime_gl_blend_equation((int)32774);
			HX_STACK_LINE(1074)
			::openfl::_legacy::gl::GL_obj::lime_gl_blend_func(this->blendSourceFactor,this->blendDestinationFactor);
		}
		else{
			HX_STACK_LINE(1078)
			::openfl::_legacy::gl::GL_obj::lime_gl_disable((int)3042);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3D_obj,__updateBlendStatus,(void))

int Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT;

int Context3D_obj::MAX_SAMPLERS;

int Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT;

bool Context3D_obj::anisotropySupportTested;

bool Context3D_obj::supportsAnisotropy;

int Context3D_obj::maxSupportedAnisotropy;


Context3D_obj::Context3D_obj()
{
}

void Context3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3D);
	HX_MARK_MEMBER_NAME(driverInfo,"driverInfo");
	HX_MARK_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_MARK_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_MARK_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_MARK_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_MARK_MEMBER_NAME(currentProgram,"currentProgram");
	HX_MARK_MEMBER_NAME(disposed,"disposed");
	HX_MARK_MEMBER_NAME(drawing,"drawing");
	HX_MARK_MEMBER_NAME(framebuffer,"framebuffer");
	HX_MARK_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_MARK_MEMBER_NAME(ogl,"ogl");
	HX_MARK_MEMBER_NAME(programsCreated,"programsCreated");
	HX_MARK_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_MARK_MEMBER_NAME(samplerParameters,"samplerParameters");
	HX_MARK_MEMBER_NAME(scrollRect,"scrollRect");
	HX_MARK_MEMBER_NAME(stencilbuffer,"stencilbuffer");
	HX_MARK_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_MARK_MEMBER_NAME(stencilRef,"stencilRef");
	HX_MARK_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_MARK_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_MARK_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_MARK_MEMBER_NAME(_yFlip,"_yFlip");
	HX_MARK_END_CLASS();
}

void Context3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(driverInfo,"driverInfo");
	HX_VISIT_MEMBER_NAME(enableErrorChecking,"enableErrorChecking");
	HX_VISIT_MEMBER_NAME(blendDestinationFactor,"blendDestinationFactor");
	HX_VISIT_MEMBER_NAME(blendEnabled,"blendEnabled");
	HX_VISIT_MEMBER_NAME(blendSourceFactor,"blendSourceFactor");
	HX_VISIT_MEMBER_NAME(currentProgram,"currentProgram");
	HX_VISIT_MEMBER_NAME(disposed,"disposed");
	HX_VISIT_MEMBER_NAME(drawing,"drawing");
	HX_VISIT_MEMBER_NAME(framebuffer,"framebuffer");
	HX_VISIT_MEMBER_NAME(indexBuffersCreated,"indexBuffersCreated");
	HX_VISIT_MEMBER_NAME(ogl,"ogl");
	HX_VISIT_MEMBER_NAME(programsCreated,"programsCreated");
	HX_VISIT_MEMBER_NAME(renderbuffer,"renderbuffer");
	HX_VISIT_MEMBER_NAME(samplerParameters,"samplerParameters");
	HX_VISIT_MEMBER_NAME(scrollRect,"scrollRect");
	HX_VISIT_MEMBER_NAME(stencilbuffer,"stencilbuffer");
	HX_VISIT_MEMBER_NAME(stencilCompareMode,"stencilCompareMode");
	HX_VISIT_MEMBER_NAME(stencilRef,"stencilRef");
	HX_VISIT_MEMBER_NAME(stencilReadMask,"stencilReadMask");
	HX_VISIT_MEMBER_NAME(texturesCreated,"texturesCreated");
	HX_VISIT_MEMBER_NAME(vertexBuffersCreated,"vertexBuffersCreated");
	HX_VISIT_MEMBER_NAME(_yFlip,"_yFlip");
}

Dynamic Context3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { return ogl; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_yFlip") ) { return _yFlip; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { return drawing; }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"present") ) { return present_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { return disposed; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { return driverInfo; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { return scrollRect; }
		if (HX_FIELD_EQ(inName,"stencilRef") ) { return stencilRef; }
		if (HX_FIELD_EQ(inName,"setCulling") ) { return setCulling_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgram") ) { return setProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { return framebuffer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLERS") ) { return MAX_SAMPLERS; }
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { return blendEnabled; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { return renderbuffer; }
		if (HX_FIELD_EQ(inName,"setColorMask") ) { return setColorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"setDepthTest") ) { return setDepthTest_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureAt") ) { return setTextureAt_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stencilbuffer") ) { return stencilbuffer; }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"drawTriangles") ) { return drawTriangles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { return currentProgram; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"programsCreated") ) { return programsCreated; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { return stencilReadMask; }
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { return texturesCreated; }
		if (HX_FIELD_EQ(inName,"__deleteTexture") ) { return __deleteTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"__deleteProgram") ) { return __deleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"setBlendFactors") ) { return setBlendFactors_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderMethod") ) { return setRenderMethod_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawToBitmapData") ) { return drawToBitmapData_dyn(); }
		if (HX_FIELD_EQ(inName,"setGLSLTextureAt") ) { return setGLSLTextureAt_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { return blendSourceFactor; }
		if (HX_FIELD_EQ(inName,"samplerParameters") ) { return samplerParameters; }
		if (HX_FIELD_EQ(inName,"createCubeTexture") ) { return createCubeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"createIndexBuffer") ) { return createIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setSamplerStateAt") ) { return setSamplerStateAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setStencilActions") ) { return setStencilActions_dyn(); }
		if (HX_FIELD_EQ(inName,"setVertexBufferAt") ) { return setVertexBufferAt_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"supportsAnisotropy") ) { return supportsAnisotropy; }
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { return stencilCompareMode; }
		if (HX_FIELD_EQ(inName,"createVertexBuffer") ) { return createVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"removeRenderMethod") ) { return removeRenderMethod_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToTexture") ) { return setRenderToTexture_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { return enableErrorChecking; }
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { return indexBuffersCreated; }
		if (HX_FIELD_EQ(inName,"configureBackBuffer") ) { return configureBackBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"__deleteIndexBuffer") ) { return __deleteIndexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setScissorRectangle") ) { return setScissorRectangle_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateBlendStatus") ) { return __updateBlendStatus_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { return vertexBuffersCreated; }
		if (HX_FIELD_EQ(inName,"__deleteVertexBuffer") ) { return __deleteVertexBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"setTextureParameters") ) { return setTextureParameters_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setGLSLVertexBufferAt") ) { return setGLSLVertexBufferAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setRenderToBackBuffer") ) { return setRenderToBackBuffer_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"maxSupportedAnisotropy") ) { return maxSupportedAnisotropy; }
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { return blendDestinationFactor; }
		if (HX_FIELD_EQ(inName,"createRectangleTexture") ) { return createRectangleTexture_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"anisotropySupportTested") ) { return anisotropySupportTested; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"setStencilReferenceValue") ) { return setStencilReferenceValue_dyn(); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { return TEXTURE_MAX_ANISOTROPY_EXT; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromMatrix") ) { return setProgramConstantsFromMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromVector") ) { return setProgramConstantsFromVector_dyn(); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { return MAX_TEXTURE_MAX_ANISOTROPY_EXT; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"setProgramConstantsFromByteArray") ) { return setProgramConstantsFromByteArray_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromMatrix") ) { return setGLSLProgramConstantsFromMatrix_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromVector4") ) { return setGLSLProgramConstantsFromVector4_dyn(); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"setGLSLProgramConstantsFromByteArray") ) { return setGLSLProgramConstantsFromByteArray_dyn(); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"__getUniformLocationNameFromAgalRegisterIndex") ) { return __getUniformLocationNameFromAgalRegisterIndex_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ogl") ) { ogl=inValue.Cast< ::openfl::_legacy::display::OpenGLView >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_yFlip") ) { _yFlip=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"drawing") ) { drawing=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"disposed") ) { disposed=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"driverInfo") ) { driverInfo=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollRect") ) { scrollRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilRef") ) { stencilRef=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framebuffer") ) { framebuffer=inValue.Cast< ::openfl::_legacy::gl::GLFramebuffer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"MAX_SAMPLERS") ) { MAX_SAMPLERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendEnabled") ) { blendEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderbuffer") ) { renderbuffer=inValue.Cast< ::openfl::_legacy::gl::GLRenderbuffer >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stencilbuffer") ) { stencilbuffer=inValue.Cast< ::openfl::_legacy::gl::GLRenderbuffer >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"currentProgram") ) { currentProgram=inValue.Cast< ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"programsCreated") ) { programsCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilReadMask") ) { stencilReadMask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texturesCreated") ) { texturesCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"blendSourceFactor") ) { blendSourceFactor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"samplerParameters") ) { samplerParameters=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"supportsAnisotropy") ) { supportsAnisotropy=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stencilCompareMode") ) { stencilCompareMode=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"enableErrorChecking") ) { enableErrorChecking=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexBuffersCreated") ) { indexBuffersCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"vertexBuffersCreated") ) { vertexBuffersCreated=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"maxSupportedAnisotropy") ) { maxSupportedAnisotropy=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blendDestinationFactor") ) { blendDestinationFactor=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"anisotropySupportTested") ) { anisotropySupportTested=inValue.Cast< bool >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"TEXTURE_MAX_ANISOTROPY_EXT") ) { TEXTURE_MAX_ANISOTROPY_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_MAX_ANISOTROPY_EXT") ) { MAX_TEXTURE_MAX_ANISOTROPY_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("driverInfo"));
	outFields->push(HX_CSTRING("enableErrorChecking"));
	outFields->push(HX_CSTRING("blendDestinationFactor"));
	outFields->push(HX_CSTRING("blendEnabled"));
	outFields->push(HX_CSTRING("blendSourceFactor"));
	outFields->push(HX_CSTRING("currentProgram"));
	outFields->push(HX_CSTRING("disposed"));
	outFields->push(HX_CSTRING("drawing"));
	outFields->push(HX_CSTRING("framebuffer"));
	outFields->push(HX_CSTRING("indexBuffersCreated"));
	outFields->push(HX_CSTRING("ogl"));
	outFields->push(HX_CSTRING("programsCreated"));
	outFields->push(HX_CSTRING("renderbuffer"));
	outFields->push(HX_CSTRING("samplerParameters"));
	outFields->push(HX_CSTRING("scrollRect"));
	outFields->push(HX_CSTRING("stencilbuffer"));
	outFields->push(HX_CSTRING("stencilCompareMode"));
	outFields->push(HX_CSTRING("stencilRef"));
	outFields->push(HX_CSTRING("stencilReadMask"));
	outFields->push(HX_CSTRING("texturesCreated"));
	outFields->push(HX_CSTRING("vertexBuffersCreated"));
	outFields->push(HX_CSTRING("_yFlip"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TEXTURE_MAX_ANISOTROPY_EXT"),
	HX_CSTRING("MAX_SAMPLERS"),
	HX_CSTRING("MAX_TEXTURE_MAX_ANISOTROPY_EXT"),
	HX_CSTRING("anisotropySupportTested"),
	HX_CSTRING("supportsAnisotropy"),
	HX_CSTRING("maxSupportedAnisotropy"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Context3D_obj,driverInfo),HX_CSTRING("driverInfo")},
	{hx::fsBool,(int)offsetof(Context3D_obj,enableErrorChecking),HX_CSTRING("enableErrorChecking")},
	{hx::fsInt,(int)offsetof(Context3D_obj,blendDestinationFactor),HX_CSTRING("blendDestinationFactor")},
	{hx::fsBool,(int)offsetof(Context3D_obj,blendEnabled),HX_CSTRING("blendEnabled")},
	{hx::fsInt,(int)offsetof(Context3D_obj,blendSourceFactor),HX_CSTRING("blendSourceFactor")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Context3D_obj,currentProgram),HX_CSTRING("currentProgram")},
	{hx::fsBool,(int)offsetof(Context3D_obj,disposed),HX_CSTRING("disposed")},
	{hx::fsBool,(int)offsetof(Context3D_obj,drawing),HX_CSTRING("drawing")},
	{hx::fsObject /*::openfl::_legacy::gl::GLFramebuffer*/ ,(int)offsetof(Context3D_obj,framebuffer),HX_CSTRING("framebuffer")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,indexBuffersCreated),HX_CSTRING("indexBuffersCreated")},
	{hx::fsObject /*::openfl::_legacy::display::OpenGLView*/ ,(int)offsetof(Context3D_obj,ogl),HX_CSTRING("ogl")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,programsCreated),HX_CSTRING("programsCreated")},
	{hx::fsObject /*::openfl::_legacy::gl::GLRenderbuffer*/ ,(int)offsetof(Context3D_obj,renderbuffer),HX_CSTRING("renderbuffer")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,samplerParameters),HX_CSTRING("samplerParameters")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(Context3D_obj,scrollRect),HX_CSTRING("scrollRect")},
	{hx::fsObject /*::openfl::_legacy::gl::GLRenderbuffer*/ ,(int)offsetof(Context3D_obj,stencilbuffer),HX_CSTRING("stencilbuffer")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilCompareMode),HX_CSTRING("stencilCompareMode")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilRef),HX_CSTRING("stencilRef")},
	{hx::fsInt,(int)offsetof(Context3D_obj,stencilReadMask),HX_CSTRING("stencilReadMask")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,texturesCreated),HX_CSTRING("texturesCreated")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Context3D_obj,vertexBuffersCreated),HX_CSTRING("vertexBuffersCreated")},
	{hx::fsFloat,(int)offsetof(Context3D_obj,_yFlip),HX_CSTRING("_yFlip")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("driverInfo"),
	HX_CSTRING("enableErrorChecking"),
	HX_CSTRING("blendDestinationFactor"),
	HX_CSTRING("blendEnabled"),
	HX_CSTRING("blendSourceFactor"),
	HX_CSTRING("currentProgram"),
	HX_CSTRING("disposed"),
	HX_CSTRING("drawing"),
	HX_CSTRING("framebuffer"),
	HX_CSTRING("indexBuffersCreated"),
	HX_CSTRING("ogl"),
	HX_CSTRING("programsCreated"),
	HX_CSTRING("renderbuffer"),
	HX_CSTRING("samplerParameters"),
	HX_CSTRING("scrollRect"),
	HX_CSTRING("stencilbuffer"),
	HX_CSTRING("stencilCompareMode"),
	HX_CSTRING("stencilRef"),
	HX_CSTRING("stencilReadMask"),
	HX_CSTRING("texturesCreated"),
	HX_CSTRING("vertexBuffersCreated"),
	HX_CSTRING("_yFlip"),
	HX_CSTRING("clear"),
	HX_CSTRING("configureBackBuffer"),
	HX_CSTRING("createCubeTexture"),
	HX_CSTRING("createIndexBuffer"),
	HX_CSTRING("createProgram"),
	HX_CSTRING("createRectangleTexture"),
	HX_CSTRING("createTexture"),
	HX_CSTRING("createVertexBuffer"),
	HX_CSTRING("__deleteTexture"),
	HX_CSTRING("__deleteVertexBuffer"),
	HX_CSTRING("__deleteIndexBuffer"),
	HX_CSTRING("__deleteProgram"),
	HX_CSTRING("dispose"),
	HX_CSTRING("drawToBitmapData"),
	HX_CSTRING("drawTriangles"),
	HX_CSTRING("present"),
	HX_CSTRING("removeRenderMethod"),
	HX_CSTRING("setBlendFactors"),
	HX_CSTRING("setColorMask"),
	HX_CSTRING("setCulling"),
	HX_CSTRING("setDepthTest"),
	HX_CSTRING("setGLSLProgramConstantsFromByteArray"),
	HX_CSTRING("setGLSLProgramConstantsFromMatrix"),
	HX_CSTRING("setGLSLProgramConstantsFromVector4"),
	HX_CSTRING("setGLSLTextureAt"),
	HX_CSTRING("setGLSLVertexBufferAt"),
	HX_CSTRING("setProgram"),
	HX_CSTRING("setProgramConstantsFromByteArray"),
	HX_CSTRING("setProgramConstantsFromMatrix"),
	HX_CSTRING("setProgramConstantsFromVector"),
	HX_CSTRING("setRenderMethod"),
	HX_CSTRING("setRenderToBackBuffer"),
	HX_CSTRING("setRenderToTexture"),
	HX_CSTRING("setSamplerStateAt"),
	HX_CSTRING("setScissorRectangle"),
	HX_CSTRING("setStencilActions"),
	HX_CSTRING("setStencilReferenceValue"),
	HX_CSTRING("setTextureAt"),
	HX_CSTRING("setTextureParameters"),
	HX_CSTRING("setVertexBufferAt"),
	HX_CSTRING("__getUniformLocationNameFromAgalRegisterIndex"),
	HX_CSTRING("__updateBlendStatus"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,"TEXTURE_MAX_ANISOTROPY_EXT");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_MARK_MEMBER_NAME(Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT,"MAX_TEXTURE_MAX_ANISOTROPY_EXT");
	HX_MARK_MEMBER_NAME(Context3D_obj::anisotropySupportTested,"anisotropySupportTested");
	HX_MARK_MEMBER_NAME(Context3D_obj::supportsAnisotropy,"supportsAnisotropy");
	HX_MARK_MEMBER_NAME(Context3D_obj::maxSupportedAnisotropy,"maxSupportedAnisotropy");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3D_obj::TEXTURE_MAX_ANISOTROPY_EXT,"TEXTURE_MAX_ANISOTROPY_EXT");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_SAMPLERS,"MAX_SAMPLERS");
	HX_VISIT_MEMBER_NAME(Context3D_obj::MAX_TEXTURE_MAX_ANISOTROPY_EXT,"MAX_TEXTURE_MAX_ANISOTROPY_EXT");
	HX_VISIT_MEMBER_NAME(Context3D_obj::anisotropySupportTested,"anisotropySupportTested");
	HX_VISIT_MEMBER_NAME(Context3D_obj::supportsAnisotropy,"supportsAnisotropy");
	HX_VISIT_MEMBER_NAME(Context3D_obj::maxSupportedAnisotropy,"maxSupportedAnisotropy");
};

#endif

Class Context3D_obj::__mClass;

void Context3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.display3D.Context3D"), hx::TCanCast< Context3D_obj> ,sStaticFields,sMemberFields,
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

void Context3D_obj::__boot()
{
	TEXTURE_MAX_ANISOTROPY_EXT= (int)34046;
	MAX_SAMPLERS= (int)8;
	MAX_TEXTURE_MAX_ANISOTROPY_EXT= (int)34047;
	anisotropySupportTested= false;
	supportsAnisotropy= false;
	maxSupportedAnisotropy= (int)256;
}

} // end namespace openfl
} // end namespace display3D
