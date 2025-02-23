#ifndef INCLUDED_flixel_group_FlxTypedGroup
#define INCLUDED_flixel_group_FlxTypedGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxBasic.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroupIterator)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
namespace flixel{
namespace group{


class HXCPP_CLASS_ATTRIBUTES  FlxTypedGroup_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef FlxTypedGroup_obj OBJ_;
		FlxTypedGroup_obj();
		Void __construct(hx::Null< int >  __o_MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxTypedGroup_obj > __new(hx::Null< int >  __o_MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTypedGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTypedGroup"); }

		Dynamic members;
		int maxSize;
		int length;
		int _marker;
		virtual Void destroy( );

		virtual Void update( );

		virtual Void draw( );

		virtual Dynamic add( Dynamic Object);
		Dynamic add_dyn();

		virtual Dynamic recycle( ::Class ObjectClass,Dynamic ContructorArgs,hx::Null< bool >  Force,hx::Null< bool >  Revive);
		Dynamic recycle_dyn();

		virtual Dynamic remove( Dynamic Object,hx::Null< bool >  Splice);
		Dynamic remove_dyn();

		virtual Dynamic replace( Dynamic OldObject,Dynamic NewObject);
		Dynamic replace_dyn();

		virtual Void sort( Dynamic Function,hx::Null< int >  Order);
		Dynamic sort_dyn();

		virtual Void setAll( ::String VariableName,Dynamic Value,hx::Null< bool >  Recurse);
		Dynamic setAll_dyn();

		virtual Void callAll( ::String FunctionName,Dynamic Args,hx::Null< bool >  Recurse);
		Dynamic callAll_dyn();

		virtual Dynamic getFirstAvailable( ::Class ObjectClass,hx::Null< bool >  Force);
		Dynamic getFirstAvailable_dyn();

		virtual int getFirstNull( );
		Dynamic getFirstNull_dyn();

		virtual Dynamic getFirstExisting( );
		Dynamic getFirstExisting_dyn();

		virtual Dynamic getFirstAlive( );
		Dynamic getFirstAlive_dyn();

		virtual Dynamic getFirstDead( );
		Dynamic getFirstDead_dyn();

		virtual int countLiving( );
		Dynamic countLiving_dyn();

		virtual int countDead( );
		Dynamic countDead_dyn();

		virtual Dynamic getRandom( hx::Null< int >  StartIndex,hx::Null< int >  Length);
		Dynamic getRandom_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void kill( );

		virtual ::flixel::group::FlxTypedGroupIterator iterator( Dynamic filter);
		Dynamic iterator_dyn();

		virtual Void forEach( Dynamic Function);
		Dynamic forEach_dyn();

		virtual Void forEachAlive( Dynamic Function);
		Dynamic forEachAlive_dyn();

		virtual Void forEachDead( Dynamic Function);
		Dynamic forEachDead_dyn();

		virtual Void forEachExists( Dynamic Function);
		Dynamic forEachExists_dyn();

		virtual Void forEachOfType( ::Class ObjectClass,Dynamic Function);
		Dynamic forEachOfType_dyn();

		virtual int set_maxSize( int Size);
		Dynamic set_maxSize_dyn();

};

} // end namespace flixel
} // end namespace group

#endif /* INCLUDED_flixel_group_FlxTypedGroup */ 
