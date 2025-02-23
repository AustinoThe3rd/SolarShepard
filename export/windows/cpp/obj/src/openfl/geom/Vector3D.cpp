#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_geom_Vector3D
#include <openfl/geom/Vector3D.h>
#endif
namespace openfl{
namespace geom{

Void Vector3D_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{
HX_STACK_FRAME("openfl.geom.Vector3D","new",0x722c67da,"openfl.geom.Vector3D.new","openfl/geom/Vector3D.hx",19,0xc7821076)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_x,"x")
HX_STACK_ARG(__o_y,"y")
HX_STACK_ARG(__o_z,"z")
HX_STACK_ARG(__o_w,"w")
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
Float z = __o_z.Default(0);
Float w = __o_w.Default(0);
{
	HX_STACK_LINE(21)
	this->w = w;
	HX_STACK_LINE(22)
	this->x = x;
	HX_STACK_LINE(23)
	this->y = y;
	HX_STACK_LINE(24)
	this->z = z;
}
;
	return null();
}

//Vector3D_obj::~Vector3D_obj() { }

Dynamic Vector3D_obj::__CreateEmpty() { return  new Vector3D_obj; }
hx::ObjectPtr< Vector3D_obj > Vector3D_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,hx::Null< Float >  __o_z,hx::Null< Float >  __o_w)
{  hx::ObjectPtr< Vector3D_obj > result = new Vector3D_obj();
	result->__construct(__o_x,__o_y,__o_z,__o_w);
	return result;}

Dynamic Vector3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Vector3D_obj > result = new Vector3D_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::openfl::geom::Vector3D Vector3D_obj::add( ::openfl::geom::Vector3D a){
	HX_STACK_FRAME("openfl.geom.Vector3D","add",0x7222899b,"openfl.geom.Vector3D.add","openfl/geom/Vector3D.hx",31,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(31)
	return ::openfl::geom::Vector3D_obj::__new((this->x + a->x),(this->y + a->y),(this->z + a->z),null());
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,add,return )

::openfl::geom::Vector3D Vector3D_obj::clone( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","clone",0x532bfd57,"openfl.geom.Vector3D.clone","openfl/geom/Vector3D.hx",60,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	return ::openfl::geom::Vector3D_obj::__new(this->x,this->y,this->z,this->w);
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,clone,return )

Void Vector3D_obj::copyFrom( ::openfl::geom::Vector3D sourceVector3D){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","copyFrom",0x528f1a05,"openfl.geom.Vector3D.copyFrom","openfl/geom/Vector3D.hx",65,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceVector3D,"sourceVector3D")
		HX_STACK_LINE(67)
		this->x = sourceVector3D->x;
		HX_STACK_LINE(68)
		this->y = sourceVector3D->y;
		HX_STACK_LINE(69)
		this->z = sourceVector3D->z;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,copyFrom,(void))

::openfl::geom::Vector3D Vector3D_obj::crossProduct( ::openfl::geom::Vector3D a){
	HX_STACK_FRAME("openfl.geom.Vector3D","crossProduct",0x872350d5,"openfl.geom.Vector3D.crossProduct","openfl/geom/Vector3D.hx",76,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(76)
	return ::openfl::geom::Vector3D_obj::__new(((this->y * a->z) - (this->z * a->y)),((this->z * a->x) - (this->x * a->z)),((this->x * a->y) - (this->y * a->x)),(int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,crossProduct,return )

Void Vector3D_obj::decrementBy( ::openfl::geom::Vector3D a){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","decrementBy",0xa34dbc44,"openfl.geom.Vector3D.decrementBy","openfl/geom/Vector3D.hx",81,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(83)
		hx::SubEq(this->x,a->x);
		HX_STACK_LINE(84)
		hx::SubEq(this->y,a->y);
		HX_STACK_LINE(85)
		hx::SubEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,decrementBy,(void))

Float Vector3D_obj::dotProduct( ::openfl::geom::Vector3D a){
	HX_STACK_FRAME("openfl.geom.Vector3D","dotProduct",0x3a72d36c,"openfl.geom.Vector3D.dotProduct","openfl/geom/Vector3D.hx",103,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(103)
	return (((this->x * a->x) + (this->y * a->y)) + (this->z * a->z));
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,dotProduct,return )

bool Vector3D_obj::equals( ::openfl::geom::Vector3D toCompare,hx::Null< bool >  __o_allFour){
bool allFour = __o_allFour.Default(false);
	HX_STACK_FRAME("openfl.geom.Vector3D","equals",0x24f6bf05,"openfl.geom.Vector3D.equals","openfl/geom/Vector3D.hx",110,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_ARG(allFour,"allFour")
{
		HX_STACK_LINE(110)
		return (bool((bool((bool((this->x == toCompare->x)) && bool((this->y == toCompare->y)))) && bool((this->z == toCompare->z)))) && bool(((bool(!(allFour)) || bool((this->w == toCompare->w))))));
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,equals,return )

Void Vector3D_obj::incrementBy( ::openfl::geom::Vector3D a){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","incrementBy",0xea440b60,"openfl.geom.Vector3D.incrementBy","openfl/geom/Vector3D.hx",115,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_ARG(a,"a")
		HX_STACK_LINE(117)
		hx::AddEq(this->x,a->x);
		HX_STACK_LINE(118)
		hx::AddEq(this->y,a->y);
		HX_STACK_LINE(119)
		hx::AddEq(this->z,a->z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,incrementBy,(void))

bool Vector3D_obj::nearEquals( ::openfl::geom::Vector3D toCompare,Float tolerance,Dynamic __o_allFour){
Dynamic allFour = __o_allFour.Default(false);
	HX_STACK_FRAME("openfl.geom.Vector3D","nearEquals",0xfaf41d0d,"openfl.geom.Vector3D.nearEquals","openfl/geom/Vector3D.hx",124,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(toCompare,"toCompare")
	HX_STACK_ARG(tolerance,"tolerance")
	HX_STACK_ARG(allFour,"allFour")
{
		HX_STACK_LINE(126)
		Float _g = ::Math_obj::abs((this->x - toCompare->x));		HX_STACK_VAR(_g,"_g");
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::openfl::geom::Vector3D_obj > __this,::openfl::geom::Vector3D &toCompare,Float &tolerance){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/geom/Vector3D.hx",126,0xc7821076)
				{
					HX_STACK_LINE(126)
					Float _g1 = ::Math_obj::abs((__this->y - toCompare->y));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(126)
					return (_g1 < tolerance);
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( hx::ObjectPtr< ::openfl::geom::Vector3D_obj > __this,::openfl::geom::Vector3D &toCompare,Float &tolerance){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/geom/Vector3D.hx",126,0xc7821076)
				{
					HX_STACK_LINE(126)
					Float _g2 = ::Math_obj::abs((__this->z - toCompare->z));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(126)
					return (_g2 < tolerance);
				}
				return null();
			}
		};
		HX_STACK_LINE(126)
		if (((  (((  (((_g < tolerance))) ? bool(_Function_1_1::Block(this,toCompare,tolerance)) : bool(false) ))) ? bool(_Function_1_2::Block(this,toCompare,tolerance)) : bool(false) ))){
			HX_STACK_LINE(126)
			if ((!((!(allFour))))){
				HX_STACK_LINE(126)
				Float _g3 = ::Math_obj::abs((this->w - toCompare->w));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(126)
				return (_g3 < tolerance);
			}
			else{
				HX_STACK_LINE(126)
				return true;
			}
		}
		else{
			HX_STACK_LINE(126)
			return false;
		}
		HX_STACK_LINE(126)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3D_obj,nearEquals,return )

Void Vector3D_obj::negate( ){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","negate",0xcc1d1288,"openfl.geom.Vector3D.negate","openfl/geom/Vector3D.hx",131,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		hx::MultEq(this->x,(int)-1);
		HX_STACK_LINE(134)
		hx::MultEq(this->y,(int)-1);
		HX_STACK_LINE(135)
		hx::MultEq(this->z,(int)-1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,negate,(void))

Float Vector3D_obj::normalize( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","normalize",0x09bfa687,"openfl.geom.Vector3D.normalize","openfl/geom/Vector3D.hx",140,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(142)
	Float l = ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(144)
	if (((l != (int)0))){
		HX_STACK_LINE(146)
		hx::DivEq(this->x,l);
		HX_STACK_LINE(147)
		hx::DivEq(this->y,l);
		HX_STACK_LINE(148)
		hx::DivEq(this->z,l);
	}
	HX_STACK_LINE(152)
	return l;
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,normalize,return )

Void Vector3D_obj::project( ){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","project",0xf43def53,"openfl.geom.Vector3D.project","openfl/geom/Vector3D.hx",157,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_LINE(159)
		hx::DivEq(this->x,this->w);
		HX_STACK_LINE(160)
		hx::DivEq(this->y,this->w);
		HX_STACK_LINE(161)
		hx::DivEq(this->z,this->w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,project,(void))

Void Vector3D_obj::scaleBy( Float s){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","scaleBy",0x635a1b7b,"openfl.geom.Vector3D.scaleBy","openfl/geom/Vector3D.hx",166,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(168)
		hx::MultEq(this->x,s);
		HX_STACK_LINE(169)
		hx::MultEq(this->y,s);
		HX_STACK_LINE(170)
		hx::MultEq(this->z,s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,scaleBy,(void))

Void Vector3D_obj::setTo( Float xa,Float ya,Float za){
{
		HX_STACK_FRAME("openfl.geom.Vector3D","setTo",0x84f87bb7,"openfl.geom.Vector3D.setTo","openfl/geom/Vector3D.hx",175,0xc7821076)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xa,"xa")
		HX_STACK_ARG(ya,"ya")
		HX_STACK_ARG(za,"za")
		HX_STACK_LINE(177)
		this->x = xa;
		HX_STACK_LINE(178)
		this->y = ya;
		HX_STACK_LINE(179)
		this->z = za;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Vector3D_obj,setTo,(void))

::openfl::geom::Vector3D Vector3D_obj::subtract( ::openfl::geom::Vector3D a){
	HX_STACK_FRAME("openfl.geom.Vector3D","subtract",0x823f835a,"openfl.geom.Vector3D.subtract","openfl/geom/Vector3D.hx",186,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_ARG(a,"a")
	HX_STACK_LINE(186)
	return ::openfl::geom::Vector3D_obj::__new((this->x - a->x),(this->y - a->y),(this->z - a->z),null());
}


HX_DEFINE_DYNAMIC_FUNC1(Vector3D_obj,subtract,return )

::String Vector3D_obj::toString( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","toString",0xc29cdef2,"openfl.geom.Vector3D.toString","openfl/geom/Vector3D.hx",193,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(193)
	return ((((((HX_CSTRING("Vector3D(") + this->x) + HX_CSTRING(", ")) + this->y) + HX_CSTRING(", ")) + this->z) + HX_CSTRING(")"));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,toString,return )

Float Vector3D_obj::get_length( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","get_length",0x8c11b075,"openfl.geom.Vector3D.get_length","openfl/geom/Vector3D.hx",207,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(207)
	return ::Math_obj::sqrt((((this->x * this->x) + (this->y * this->y)) + (this->z * this->z)));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_length,return )

Float Vector3D_obj::get_lengthSquared( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","get_lengthSquared",0xa2b22932,"openfl.geom.Vector3D.get_lengthSquared","openfl/geom/Vector3D.hx",214,0xc7821076)
	HX_STACK_THIS(this)
	HX_STACK_LINE(214)
	return (((this->x * this->x) + (this->y * this->y)) + (this->z * this->z));
}


HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_lengthSquared,return )

::openfl::geom::Vector3D Vector3D_obj::X_AXIS;

::openfl::geom::Vector3D Vector3D_obj::Y_AXIS;

::openfl::geom::Vector3D Vector3D_obj::Z_AXIS;

Float Vector3D_obj::angleBetween( ::openfl::geom::Vector3D a,::openfl::geom::Vector3D b){
	HX_STACK_FRAME("openfl.geom.Vector3D","angleBetween",0x8d2e8f7b,"openfl.geom.Vector3D.angleBetween","openfl/geom/Vector3D.hx",36,0xc7821076)
	HX_STACK_ARG(a,"a")
	HX_STACK_ARG(b,"b")
	HX_STACK_LINE(38)
	Float la = ::Math_obj::sqrt((((a->x * a->x) + (a->y * a->y)) + (a->z * a->z)));		HX_STACK_VAR(la,"la");
	HX_STACK_LINE(39)
	Float lb = ::Math_obj::sqrt((((b->x * b->x) + (b->y * b->y)) + (b->z * b->z)));		HX_STACK_VAR(lb,"lb");
	HX_STACK_LINE(40)
	Float dot = (((a->x * b->x) + (a->y * b->y)) + (a->z * b->z));		HX_STACK_VAR(dot,"dot");
	HX_STACK_LINE(42)
	if (((la != (int)0))){
		HX_STACK_LINE(44)
		hx::DivEq(dot,la);
	}
	HX_STACK_LINE(48)
	if (((lb != (int)0))){
		HX_STACK_LINE(50)
		hx::DivEq(dot,lb);
	}
	HX_STACK_LINE(54)
	return ::Math_obj::acos(dot);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,angleBetween,return )

Float Vector3D_obj::distance( ::openfl::geom::Vector3D pt1,::openfl::geom::Vector3D pt2){
	HX_STACK_FRAME("openfl.geom.Vector3D","distance",0xf627a17b,"openfl.geom.Vector3D.distance","openfl/geom/Vector3D.hx",90,0xc7821076)
	HX_STACK_ARG(pt1,"pt1")
	HX_STACK_ARG(pt2,"pt2")
	HX_STACK_LINE(92)
	Float x = (pt2->x - pt1->x);		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(93)
	Float y = (pt2->y - pt1->y);		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(94)
	Float z = (pt2->z - pt1->z);		HX_STACK_VAR(z,"z");
	HX_STACK_LINE(96)
	return ::Math_obj::sqrt((((x * x) + (y * y)) + (z * z)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Vector3D_obj,distance,return )

::openfl::geom::Vector3D Vector3D_obj::get_X_AXIS( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","get_X_AXIS",0xfabcdcb7,"openfl.geom.Vector3D.get_X_AXIS","openfl/geom/Vector3D.hx",221,0xc7821076)
	HX_STACK_LINE(221)
	return ::openfl::geom::Vector3D_obj::__new((int)1,(int)0,(int)0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_X_AXIS,return )

::openfl::geom::Vector3D Vector3D_obj::get_Y_AXIS( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","get_Y_AXIS",0x61183916,"openfl.geom.Vector3D.get_Y_AXIS","openfl/geom/Vector3D.hx",228,0xc7821076)
	HX_STACK_LINE(228)
	return ::openfl::geom::Vector3D_obj::__new((int)0,(int)1,(int)0,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_Y_AXIS,return )

::openfl::geom::Vector3D Vector3D_obj::get_Z_AXIS( ){
	HX_STACK_FRAME("openfl.geom.Vector3D","get_Z_AXIS",0xc7739575,"openfl.geom.Vector3D.get_Z_AXIS","openfl/geom/Vector3D.hx",235,0xc7821076)
	HX_STACK_LINE(235)
	return ::openfl::geom::Vector3D_obj::__new((int)0,(int)0,(int)1,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Vector3D_obj,get_Z_AXIS,return )


Vector3D_obj::Vector3D_obj()
{
}

Dynamic Vector3D_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"z") ) { return z; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"setTo") ) { return setTo_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { return inCallProp ? get_X_AXIS() : X_AXIS; }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { return inCallProp ? get_Y_AXIS() : Y_AXIS; }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { return inCallProp ? get_Z_AXIS() : Z_AXIS; }
		if (HX_FIELD_EQ(inName,"length") ) { return inCallProp ? get_length() : length; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		if (HX_FIELD_EQ(inName,"negate") ) { return negate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		if (HX_FIELD_EQ(inName,"scaleBy") ) { return scaleBy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"copyFrom") ) { return copyFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_X_AXIS") ) { return get_X_AXIS_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Y_AXIS") ) { return get_Y_AXIS_dyn(); }
		if (HX_FIELD_EQ(inName,"get_Z_AXIS") ) { return get_Z_AXIS_dyn(); }
		if (HX_FIELD_EQ(inName,"dotProduct") ) { return dotProduct_dyn(); }
		if (HX_FIELD_EQ(inName,"nearEquals") ) { return nearEquals_dyn(); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return get_length_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"decrementBy") ) { return decrementBy_dyn(); }
		if (HX_FIELD_EQ(inName,"incrementBy") ) { return incrementBy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return angleBetween_dyn(); }
		if (HX_FIELD_EQ(inName,"crossProduct") ) { return crossProduct_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { return inCallProp ? get_lengthSquared() : lengthSquared; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_lengthSquared") ) { return get_lengthSquared_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Vector3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"z") ) { z=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"X_AXIS") ) { X_AXIS=inValue.Cast< ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Y_AXIS") ) { Y_AXIS=inValue.Cast< ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Z_AXIS") ) { Z_AXIS=inValue.Cast< ::openfl::geom::Vector3D >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"lengthSquared") ) { lengthSquared=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Vector3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("lengthSquared"));
	outFields->push(HX_CSTRING("w"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("z"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("X_AXIS"),
	HX_CSTRING("Y_AXIS"),
	HX_CSTRING("Z_AXIS"),
	HX_CSTRING("angleBetween"),
	HX_CSTRING("distance"),
	HX_CSTRING("get_X_AXIS"),
	HX_CSTRING("get_Y_AXIS"),
	HX_CSTRING("get_Z_AXIS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Vector3D_obj,length),HX_CSTRING("length")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,lengthSquared),HX_CSTRING("lengthSquared")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,w),HX_CSTRING("w")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(Vector3D_obj,z),HX_CSTRING("z")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("lengthSquared"),
	HX_CSTRING("w"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("z"),
	HX_CSTRING("add"),
	HX_CSTRING("clone"),
	HX_CSTRING("copyFrom"),
	HX_CSTRING("crossProduct"),
	HX_CSTRING("decrementBy"),
	HX_CSTRING("dotProduct"),
	HX_CSTRING("equals"),
	HX_CSTRING("incrementBy"),
	HX_CSTRING("nearEquals"),
	HX_CSTRING("negate"),
	HX_CSTRING("normalize"),
	HX_CSTRING("project"),
	HX_CSTRING("scaleBy"),
	HX_CSTRING("setTo"),
	HX_CSTRING("subtract"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_length"),
	HX_CSTRING("get_lengthSquared"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Vector3D_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Vector3D_obj::X_AXIS,"X_AXIS");
	HX_MARK_MEMBER_NAME(Vector3D_obj::Y_AXIS,"Y_AXIS");
	HX_MARK_MEMBER_NAME(Vector3D_obj::Z_AXIS,"Z_AXIS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Vector3D_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Vector3D_obj::X_AXIS,"X_AXIS");
	HX_VISIT_MEMBER_NAME(Vector3D_obj::Y_AXIS,"Y_AXIS");
	HX_VISIT_MEMBER_NAME(Vector3D_obj::Z_AXIS,"Z_AXIS");
};

#endif

Class Vector3D_obj::__mClass;

void Vector3D_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.geom.Vector3D"), hx::TCanCast< Vector3D_obj> ,sStaticFields,sMemberFields,
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

void Vector3D_obj::__boot()
{
}

} // end namespace openfl
} // end namespace geom
