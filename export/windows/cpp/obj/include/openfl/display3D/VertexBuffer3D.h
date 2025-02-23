#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#define INCLUDED_openfl_display3D_VertexBuffer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLBuffer)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ArrayBufferView)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,Float32Array)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  VertexBuffer3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexBuffer3D_obj OBJ_;
		VertexBuffer3D_obj();
		Void __construct(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLBuffer glBuffer,int numVertices,int data32PerVertex);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VertexBuffer3D_obj > __new(::openfl::display3D::Context3D context,::openfl::_legacy::gl::GLBuffer glBuffer,int numVertices,int data32PerVertex);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexBuffer3D_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("VertexBuffer3D"); }

		::openfl::display3D::Context3D context;
		int data32PerVertex;
		::openfl::_legacy::gl::GLBuffer glBuffer;
		int numVertices;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void uploadFromByteArray( ::openfl::_legacy::utils::ByteArray byteArray,int byteArrayOffset,int startOffset,int count);
		Dynamic uploadFromByteArray_dyn();

		virtual Void uploadFromFloat32Array( ::openfl::_legacy::utils::Float32Array data,int startVertex,int numVertices);
		Dynamic uploadFromFloat32Array_dyn();

		virtual Void uploadFromVector( Array< Float > data,int startVertex,int numVertices);
		Dynamic uploadFromVector_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_VertexBuffer3D */ 
