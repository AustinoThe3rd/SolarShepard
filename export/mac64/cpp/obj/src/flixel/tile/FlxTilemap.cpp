#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxSpriteGroup
#include <flixel/group/FlxSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_layer_DrawStackItem
#include <flixel/system/layer/DrawStackItem.h>
#endif
#ifndef INCLUDED_flixel_system_layer_Region
#include <flixel/system/layer/Region.h>
#endif
#ifndef INCLUDED_flixel_system_layer_TileSheetData
#include <flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxFrame
#include <flixel/system/layer/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_system_layer_frames_FlxSpriteFrames
#include <flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTile
#include <flixel/tile/FlxTile.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemapBuffer
#include <flixel/tile/FlxTilemapBuffer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCallbackPoint
#include <flixel/util/FlxCallbackPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_CachedGraphics
#include <flixel/util/loaders/CachedGraphics.h>
#endif
#ifndef INCLUDED_flixel_util_loaders_TextureRegion
#include <flixel/util/loaders/TextureRegion.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_CapsStyle
#include <openfl/_legacy/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_JointStyle
#include <openfl/_legacy/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_LineScaleMode
#include <openfl/_legacy/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif
namespace flixel{
namespace tile{

Void FlxTilemap_obj::__construct()
{
HX_STACK_FRAME("flixel.tile.FlxTilemap","new",0xbe02531c,"flixel.tile.FlxTilemap.new","flixel/tile/FlxTilemap.hx",39,0x448feb74)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(191)
	this->_startingIndex = (int)0;
	HX_STACK_LINE(162)
	this->_scaledTileHeight = (int)0;
	HX_STACK_LINE(161)
	this->_scaledTileWidth = (int)0;
	HX_STACK_LINE(159)
	this->_tileHeight = (int)0;
	HX_STACK_LINE(155)
	this->_tileWidth = (int)0;
	HX_STACK_LINE(80)
	this->tileScaleHack = 1.01;
	HX_STACK_LINE(76)
	this->totalTiles = (int)0;
	HX_STACK_LINE(72)
	this->heightInTiles = (int)0;
	HX_STACK_LINE(68)
	this->widthInTiles = (int)0;
	HX_STACK_LINE(64)
	this->_auto = (int)0;
	HX_STACK_LINE(210)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(212)
	this->collisionType = (int)3;
	HX_STACK_LINE(214)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(214)
	this->_buffers = _g;
	HX_STACK_LINE(215)
	::openfl::_legacy::geom::Point _g1 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(215)
	this->_flashPoint = _g1;
	HX_STACK_LINE(217)
	this->set_immovable(true);
	HX_STACK_LINE(218)
	this->set_moves(false);
	HX_STACK_LINE(221)
	::openfl::_legacy::geom::Point _g2 = ::openfl::_legacy::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(221)
	this->_helperPoint = _g2;
	HX_STACK_LINE(224)
	::flixel::util::FlxCallbackPoint _g3 = ::flixel::util::FlxCallbackPoint_obj::__new(this->setScaleXCallback_dyn(),this->setScaleYCallback_dyn(),this->setScaleXYCallback_dyn());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(224)
	this->scale = _g3;
	HX_STACK_LINE(225)
	this->scale->set((int)1,(int)1);
	HX_STACK_LINE(227)
	::flixel::FlxG_obj::signals->gameResized->add(this->onGameResize_dyn());
}
;
	return null();
}

//FlxTilemap_obj::~FlxTilemap_obj() { }

Dynamic FlxTilemap_obj::__CreateEmpty() { return  new FlxTilemap_obj; }
hx::ObjectPtr< FlxTilemap_obj > FlxTilemap_obj::__new()
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Dynamic FlxTilemap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTilemap_obj > result = new FlxTilemap_obj();
	result->__construct();
	return result;}

Void FlxTilemap_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","destroy",0xa7f2bdb6,"flixel.tile.FlxTilemap.destroy","flixel/tile/FlxTilemap.hx",234,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(235)
		this->_flashPoint = null();
		HX_STACK_LINE(236)
		this->_flashRect = null();
		HX_STACK_LINE(237)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(238)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(240)
		if (((this->_tileObjects != null()))){
			HX_STACK_LINE(242)
			l = this->_tileObjects->length;
			HX_STACK_LINE(244)
			{
				HX_STACK_LINE(244)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(244)
				while((true)){
					HX_STACK_LINE(244)
					if ((!(((_g < l))))){
						HX_STACK_LINE(244)
						break;
					}
					HX_STACK_LINE(244)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(246)
					this->_tileObjects->__get(i1).StaticCast< ::flixel::tile::FlxTile >()->destroy();
				}
			}
			HX_STACK_LINE(249)
			this->_tileObjects = null();
		}
		HX_STACK_LINE(252)
		if (((this->_buffers != null()))){
			HX_STACK_LINE(254)
			i = (int)0;
			HX_STACK_LINE(255)
			l = this->_buffers->length;
			HX_STACK_LINE(257)
			{
				HX_STACK_LINE(257)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(257)
				while((true)){
					HX_STACK_LINE(257)
					if ((!(((_g < l))))){
						HX_STACK_LINE(257)
						break;
					}
					HX_STACK_LINE(257)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(259)
					this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->destroy();
				}
			}
			HX_STACK_LINE(262)
			this->_buffers = null();
		}
		HX_STACK_LINE(265)
		this->_data = null();
		HX_STACK_LINE(276)
		this->_helperPoint = null();
		HX_STACK_LINE(277)
		this->_rectIDs = null();
		HX_STACK_LINE(280)
		this->framesData = null();
		HX_STACK_LINE(281)
		this->set_cachedGraphics(null());
		HX_STACK_LINE(282)
		this->region = null();
		HX_STACK_LINE(285)
		::flixel::util::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->scale);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(285)
		this->scale = _g;
		HX_STACK_LINE(287)
		::flixel::FlxG_obj::signals->gameResized->remove(this->onGameResize_dyn());
		HX_STACK_LINE(289)
		this->super::destroy();
	}
return null();
}


::flixel::tile::FlxTilemap FlxTilemap_obj::loadMap( Dynamic MapData,Dynamic TileGraphic,hx::Null< int >  __o_TileWidth,hx::Null< int >  __o_TileHeight,hx::Null< int >  __o_AutoTile,hx::Null< int >  __o_StartingIndex,hx::Null< int >  __o_DrawIndex,hx::Null< int >  __o_CollideIndex){
int TileWidth = __o_TileWidth.Default(0);
int TileHeight = __o_TileHeight.Default(0);
int AutoTile = __o_AutoTile.Default(0);
int StartingIndex = __o_StartingIndex.Default(0);
int DrawIndex = __o_DrawIndex.Default(1);
int CollideIndex = __o_CollideIndex.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","loadMap",0x8c4a14d2,"flixel.tile.FlxTilemap.loadMap","flixel/tile/FlxTilemap.hx",306,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(MapData,"MapData")
	HX_STACK_ARG(TileGraphic,"TileGraphic")
	HX_STACK_ARG(TileWidth,"TileWidth")
	HX_STACK_ARG(TileHeight,"TileHeight")
	HX_STACK_ARG(AutoTile,"AutoTile")
	HX_STACK_ARG(StartingIndex,"StartingIndex")
	HX_STACK_ARG(DrawIndex,"DrawIndex")
	HX_STACK_ARG(CollideIndex,"CollideIndex")
{
		HX_STACK_LINE(307)
		this->_auto = AutoTile;
		HX_STACK_LINE(308)
		if (((StartingIndex <= (int)0))){
			HX_STACK_LINE(308)
			this->_startingIndex = (int)0;
		}
		else{
			HX_STACK_LINE(308)
			this->_startingIndex = StartingIndex;
		}
		HX_STACK_LINE(311)
		if ((::Std_obj::is(MapData,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(313)
			::String _g = ::StringTools_obj::rtrim(MapData);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(313)
			MapData = _g;
			HX_STACK_LINE(316)
			Array< int > _g1 = Array_obj< int >::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(316)
			this->_data = _g1;
			HX_STACK_LINE(317)
			Array< ::String > columns;		HX_STACK_VAR(columns,"columns");
			HX_STACK_LINE(318)
			Array< ::String > rows = MapData->__Field(HX_CSTRING("split"),true)(HX_CSTRING("\n"));		HX_STACK_VAR(rows,"rows");
			HX_STACK_LINE(319)
			this->heightInTiles = rows->length;
			HX_STACK_LINE(320)
			this->widthInTiles = (int)0;
			HX_STACK_LINE(321)
			int row = (int)0;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(322)
			int column;		HX_STACK_VAR(column,"column");
			HX_STACK_LINE(324)
			while((true)){
				HX_STACK_LINE(324)
				if ((!(((row < this->heightInTiles))))){
					HX_STACK_LINE(324)
					break;
				}
				HX_STACK_LINE(326)
				int _g2 = (row)++;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(326)
				Array< ::String > _g3 = rows->__get(_g2).split(HX_CSTRING(","));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(326)
				columns = _g3;
				HX_STACK_LINE(328)
				if (((columns->length < (int)1))){
					HX_STACK_LINE(330)
					this->heightInTiles = (this->heightInTiles - (int)1);
					HX_STACK_LINE(331)
					continue;
				}
				HX_STACK_LINE(333)
				if (((this->widthInTiles == (int)0))){
					HX_STACK_LINE(335)
					this->widthInTiles = columns->length;
				}
				HX_STACK_LINE(337)
				column = (int)0;
				HX_STACK_LINE(339)
				while((true)){
					HX_STACK_LINE(339)
					if ((!(((column < this->widthInTiles))))){
						HX_STACK_LINE(339)
						break;
					}
					HX_STACK_LINE(342)
					int curTile = ::Std_obj::parseInt(columns->__get(column));		HX_STACK_VAR(curTile,"curTile");
					HX_STACK_LINE(364)
					this->_data->push(curTile);
					HX_STACK_LINE(365)
					(column)++;
				}
			}
		}
		else{
			HX_STACK_LINE(373)
			if ((::Std_obj::is(MapData,hx::ClassOf< Array<int> >()))){
				HX_STACK_LINE(375)
				this->_data = MapData;
				HX_STACK_LINE(376)
				Array< int > _g4 = this->_data->copy();		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(376)
				this->_data = _g4;
			}
			else{
				HX_STACK_LINE(380)
				::ValueType _g5 = ::Type_obj::_typeof(MapData);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(380)
				::String _g6 = ::Std_obj::string(_g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(380)
				::String _g7 = (HX_CSTRING("Unexpected MapData format '") + _g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(380)
				HX_STACK_DO_THROW((_g7 + HX_CSTRING("' passed into loadMap. Map data must be CSV string or Array<Int>.")));
			}
		}
		HX_STACK_LINE(384)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(385)
		this->totalTiles = this->_data->length;
		HX_STACK_LINE(387)
		if (((this->_auto > (int)0))){
			HX_STACK_LINE(389)
			this->_startingIndex = (int)1;
			HX_STACK_LINE(390)
			DrawIndex = (int)1;
			HX_STACK_LINE(391)
			CollideIndex = (int)1;
			HX_STACK_LINE(392)
			i = (int)0;
			HX_STACK_LINE(394)
			while((true)){
				HX_STACK_LINE(394)
				if ((!(((i < this->totalTiles))))){
					HX_STACK_LINE(394)
					break;
				}
				HX_STACK_LINE(396)
				int _g8 = (i)++;		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(396)
				this->autoTile(_g8);
			}
		}
		HX_STACK_LINE(400)
		if (((this->customTileRemap != null()))){
			HX_STACK_LINE(402)
			i = (int)0;
			HX_STACK_LINE(403)
			while((true)){
				HX_STACK_LINE(403)
				if ((!(((i < this->totalTiles))))){
					HX_STACK_LINE(403)
					break;
				}
				HX_STACK_LINE(405)
				int old_index = this->_data->__get(i);		HX_STACK_VAR(old_index,"old_index");
				HX_STACK_LINE(406)
				int new_index = old_index;		HX_STACK_VAR(new_index,"new_index");
				HX_STACK_LINE(407)
				if (((old_index < this->customTileRemap->length))){
					HX_STACK_LINE(409)
					new_index = this->customTileRemap->__get(old_index);
				}
				HX_STACK_LINE(411)
				this->_data[i] = new_index;
				HX_STACK_LINE(412)
				(i)++;
			}
		}
		HX_STACK_LINE(416)
		if (((this->_randomIndices != null()))){
			HX_STACK_LINE(418)
			Dynamic randLambda;		HX_STACK_VAR(randLambda,"randLambda");
			HX_STACK_LINE(418)
			if (((this->_randomLambda_dyn() != null()))){
				HX_STACK_LINE(418)
				randLambda = this->_randomLambda_dyn();
			}
			else{
				HX_STACK_LINE(418)
				randLambda = ::flixel::util::FlxRandom_obj::_float_dyn();
			}
			HX_STACK_LINE(420)
			i = (int)0;
			HX_STACK_LINE(421)
			while((true)){
				HX_STACK_LINE(421)
				if ((!(((i < this->totalTiles))))){
					HX_STACK_LINE(421)
					break;
				}
				HX_STACK_LINE(423)
				int old_index = this->_data->__get(i);		HX_STACK_VAR(old_index,"old_index");
				HX_STACK_LINE(424)
				int j = (int)0;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(425)
				int new_index = old_index;		HX_STACK_VAR(new_index,"new_index");
				HX_STACK_LINE(426)
				{
					HX_STACK_LINE(426)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(426)
					Array< int > _g1 = this->_randomIndices;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(426)
					while((true)){
						HX_STACK_LINE(426)
						if ((!(((_g < _g1->length))))){
							HX_STACK_LINE(426)
							break;
						}
						HX_STACK_LINE(426)
						int rand = _g1->__get(_g);		HX_STACK_VAR(rand,"rand");
						HX_STACK_LINE(426)
						++(_g);
						HX_STACK_LINE(428)
						if (((old_index == rand))){
							HX_STACK_LINE(430)
							Float _g9 = randLambda().Cast< Float >();		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(430)
							Float _g10 = (_g9 * this->_randomChoices->__get(j).StaticCast< Array< int > >()->length);		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(430)
							int k = ::Std_obj::_int(_g10);		HX_STACK_VAR(k,"k");
							HX_STACK_LINE(431)
							new_index = this->_randomChoices->__get(j).StaticCast< Array< int > >()->__get(k);
						}
						HX_STACK_LINE(433)
						(j)++;
					}
				}
				HX_STACK_LINE(435)
				this->_data[i] = new_index;
				HX_STACK_LINE(436)
				(i)++;
			}
		}
		HX_STACK_LINE(441)
		::flixel::util::loaders::CachedGraphics _g11;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			bool Unique = false;		HX_STACK_VAR(Unique,"Unique");
			HX_STACK_LINE(441)
			_g11 = ::flixel::FlxG_obj::bitmap->addWithSpaces(TileGraphic,(int)0,(int)0,(int)1,(int)1,Unique,null());
		}
		HX_STACK_LINE(441)
		this->set_cachedGraphics(_g11);
		HX_STACK_LINE(442)
		this->_tileWidth = TileWidth;
		HX_STACK_LINE(444)
		if (((this->_tileWidth <= (int)0))){
			HX_STACK_LINE(446)
			int _g12 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(446)
			this->_tileWidth = _g12;
		}
		HX_STACK_LINE(449)
		this->_tileHeight = TileHeight;
		HX_STACK_LINE(451)
		if (((this->_tileHeight <= (int)0))){
			HX_STACK_LINE(453)
			this->_tileHeight = this->_tileWidth;
		}
		HX_STACK_LINE(456)
		if ((!(::Std_obj::is(TileGraphic,hx::ClassOf< ::flixel::util::loaders::TextureRegion >())))){
			HX_STACK_LINE(458)
			::flixel::system::layer::Region _g13 = ::flixel::system::layer::Region_obj::__new((int)0,(int)0,this->_tileWidth,this->_tileHeight,null(),null(),null(),null());		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(458)
			this->region = _g13;
			HX_STACK_LINE(459)
			int _g14 = this->cachedGraphics->bitmap->get_width();		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(459)
			Float _g15 = (Float(_g14) / Float(this->_tileWidth));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(459)
			int _g16 = ::Std_obj::_int(_g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(459)
			int _g17 = (_g16 * this->_tileWidth);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(459)
			this->region->width = _g17;
			HX_STACK_LINE(460)
			int _g18 = this->cachedGraphics->bitmap->get_height();		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(460)
			Float _g19 = (Float(_g18) / Float(this->_tileHeight));		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(460)
			int _g20 = ::Std_obj::_int(_g19);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(460)
			int _g21 = (_g20 * this->_tileHeight);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(460)
			this->region->height = _g21;
		}
		else{
			HX_STACK_LINE(464)
			::flixel::util::loaders::TextureRegion spriteRegion = TileGraphic;		HX_STACK_VAR(spriteRegion,"spriteRegion");
			HX_STACK_LINE(465)
			::flixel::system::layer::Region _g22 = spriteRegion->region->clone();		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(465)
			this->region = _g22;
			HX_STACK_LINE(466)
			if (((this->region->tileWidth > (int)0))){
				HX_STACK_LINE(468)
				this->_tileWidth = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(472)
				this->region->tileWidth = this->_tileWidth;
			}
			HX_STACK_LINE(475)
			if (((this->region->tileHeight > (int)0))){
				HX_STACK_LINE(477)
				this->_tileHeight = this->region->tileWidth;
			}
			else{
				HX_STACK_LINE(481)
				this->region->tileHeight = this->_tileHeight;
			}
		}
		HX_STACK_LINE(486)
		Array< ::Dynamic > _g23 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(486)
		this->_tileObjects = _g23;
		HX_STACK_LINE(488)
		int length = this->region->get_numTiles();		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(489)
		hx::AddEq(length,this->_startingIndex);
		HX_STACK_LINE(491)
		{
			HX_STACK_LINE(491)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(491)
			while((true)){
				HX_STACK_LINE(491)
				if ((!(((_g < length))))){
					HX_STACK_LINE(491)
					break;
				}
				HX_STACK_LINE(491)
				int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
				HX_STACK_LINE(493)
				this->_tileObjects[i1] = ::flixel::tile::FlxTile_obj::__new(hx::ObjectPtr<OBJ_>(this),i1,this->_tileWidth,this->_tileHeight,(i1 >= DrawIndex),(  (((i1 >= CollideIndex))) ? int(this->allowCollisions) : int((int)0) ));
			}
		}
		HX_STACK_LINE(503)
		this->_scaledTileWidth = (this->_tileWidth * this->scale->x);
		HX_STACK_LINE(504)
		this->_scaledTileHeight = (this->_tileHeight * this->scale->y);
		HX_STACK_LINE(507)
		this->set_width((this->widthInTiles * this->_scaledTileWidth));
		HX_STACK_LINE(508)
		this->set_height((this->heightInTiles * this->_scaledTileHeight));
		HX_STACK_LINE(524)
		this->updateFrameData();
		HX_STACK_LINE(527)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC8(FlxTilemap_obj,loadMap,return )

Void FlxTilemap_obj::setCustomTileMappings( Array< int > mappings,Array< int > randomIndices,Array< ::Dynamic > randomChoices,Dynamic randomLambda){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setCustomTileMappings",0x2422e242,"flixel.tile.FlxTilemap.setCustomTileMappings","flixel/tile/FlxTilemap.hx",540,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mappings,"mappings")
		HX_STACK_ARG(randomIndices,"randomIndices")
		HX_STACK_ARG(randomChoices,"randomChoices")
		HX_STACK_ARG(randomLambda,"randomLambda")
		HX_STACK_LINE(541)
		this->customTileRemap = mappings;
		HX_STACK_LINE(542)
		this->_randomIndices = randomIndices;
		HX_STACK_LINE(543)
		this->_randomChoices = randomChoices;
		HX_STACK_LINE(544)
		this->_randomLambda = randomLambda;
		HX_STACK_LINE(547)
		if (((bool((this->_randomIndices != null())) && bool(((bool((this->_randomChoices == null())) || bool((this->_randomChoices->length == (int)0)))))))){
			HX_STACK_LINE(549)
			HX_STACK_DO_THROW(HX_CSTRING("You must provide valid 'randomChoices' if you wish to randomize tilemap indicies, please read documentation of 'setCustomTileMappings' function."));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setCustomTileMappings,(void))

Void FlxTilemap_obj::drawDebugOnCamera( ::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","drawDebugOnCamera",0x0d929baf,"flixel.tile.FlxTilemap.drawDebugOnCamera","flixel/tile/FlxTilemap.hx",555,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(557)
		::flixel::tile::FlxTilemapBuffer buffer = null();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(558)
		int l = ::flixel::FlxG_obj::cameras->list->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(560)
		{
			HX_STACK_LINE(560)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(560)
			while((true)){
				HX_STACK_LINE(560)
				if ((!(((_g < l))))){
					HX_STACK_LINE(560)
					break;
				}
				HX_STACK_LINE(560)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(562)
				if (((::flixel::FlxG_obj::cameras->list->__get(i).StaticCast< ::flixel::FlxCamera >() == Camera))){
					HX_STACK_LINE(564)
					buffer = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();
					HX_STACK_LINE(565)
					break;
				}
			}
		}
		HX_STACK_LINE(569)
		if (((buffer == null()))){
			HX_STACK_LINE(571)
			return null();
		}
		HX_STACK_LINE(575)
		int _g = ::Math_obj::floor(Camera->scroll->x);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(575)
		Float _g1 = (_g * this->scrollFactor->x);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(575)
		Float _g2 = (this->x - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(575)
		Float _g3 = (_g2 * (int)5);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(575)
		int _g4 = ::Math_obj::floor(_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(575)
		Float _g5 = (Float(_g4) / Float((int)5));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(575)
		Float _g6 = (_g5 + 0.1);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(575)
		this->_helperPoint->x = _g6;
		HX_STACK_LINE(576)
		int _g7 = ::Math_obj::floor(Camera->scroll->y);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(576)
		Float _g8 = (_g7 * this->scrollFactor->y);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(576)
		Float _g9 = (this->y - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(576)
		Float _g10 = (_g9 * (int)5);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(576)
		int _g11 = ::Math_obj::floor(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(576)
		Float _g12 = (Float(_g11) / Float((int)5));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(576)
		Float _g13 = (_g12 + 0.1);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(576)
		this->_helperPoint->y = _g13;
		HX_STACK_LINE(578)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(579)
		int debugColor;		HX_STACK_VAR(debugColor,"debugColor");
		HX_STACK_LINE(580)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(581)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(585)
		this->_point->set_x(((Camera->scroll->x * this->scrollFactor->x) - this->x));
		HX_STACK_LINE(586)
		this->_point->set_y(((Camera->scroll->y * this->scrollFactor->y) - this->y));
		HX_STACK_LINE(587)
		int screenXInTiles = ::Math_obj::floor((Float(this->_point->x) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(588)
		int screenYInTiles = ::Math_obj::floor((Float(this->_point->y) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(589)
		int screenRows = buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(590)
		int screenColumns = buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(593)
		if (((screenXInTiles < (int)0))){
			HX_STACK_LINE(595)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(597)
		if (((screenXInTiles > (this->widthInTiles - screenColumns)))){
			HX_STACK_LINE(599)
			screenXInTiles = (this->widthInTiles - screenColumns);
		}
		HX_STACK_LINE(601)
		if (((screenYInTiles < (int)0))){
			HX_STACK_LINE(603)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(605)
		if (((screenYInTiles > (this->heightInTiles - screenRows)))){
			HX_STACK_LINE(607)
			screenYInTiles = (this->heightInTiles - screenRows);
		}
		HX_STACK_LINE(610)
		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(611)
		this->_flashPoint->y = (int)0;
		HX_STACK_LINE(612)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(613)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(614)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(615)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(616)
		::openfl::_legacy::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
		HX_STACK_LINE(618)
		while((true)){
			HX_STACK_LINE(618)
			if ((!(((row < screenRows))))){
				HX_STACK_LINE(618)
				break;
			}
			HX_STACK_LINE(620)
			columnIndex = rowIndex;
			HX_STACK_LINE(621)
			column = (int)0;
			HX_STACK_LINE(622)
			this->_flashPoint->x = (int)0;
			HX_STACK_LINE(624)
			while((true)){
				HX_STACK_LINE(624)
				if ((!(((column < screenColumns))))){
					HX_STACK_LINE(624)
					break;
				}
				HX_STACK_LINE(626)
				tileID = this->_rectIDs->__get(columnIndex);
				HX_STACK_LINE(628)
				if (((tileID != (int)-1))){
					HX_STACK_LINE(630)
					drawX = (this->_helperPoint->x + (hx::Mod(columnIndex,this->widthInTiles) * this->_scaledTileWidth));
					HX_STACK_LINE(631)
					int _g14 = ::Math_obj::floor((Float(columnIndex) / Float(this->widthInTiles)));		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(631)
					Float _g15 = (_g14 * this->_scaledTileHeight);		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(631)
					Float _g16 = (this->_helperPoint->y + _g15);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(631)
					drawY = _g16;
					HX_STACK_LINE(633)
					tile = this->_tileObjects->__get(this->_data->__get(columnIndex)).StaticCast< ::flixel::tile::FlxTile >();
					HX_STACK_LINE(635)
					if (((tile != null()))){
						HX_STACK_LINE(637)
						if (((tile->allowCollisions <= (int)0))){
							HX_STACK_LINE(639)
							debugColor = (int)-16776961;
						}
						else{
							HX_STACK_LINE(641)
							if (((tile->allowCollisions != (int)4369))){
								HX_STACK_LINE(643)
								debugColor = (int)-16181;
							}
							else{
								HX_STACK_LINE(647)
								debugColor = (int)-16744448;
							}
						}
						HX_STACK_LINE(651)
						::openfl::_legacy::display::Graphics gfx = Camera->debugLayer->get_graphics();		HX_STACK_VAR(gfx,"gfx");
						HX_STACK_LINE(652)
						gfx->lineStyle((int)1,debugColor,0.5,null(),null(),null(),null(),null());
						HX_STACK_LINE(653)
						gfx->drawRect(drawX,drawY,this->_scaledTileWidth,this->_scaledTileHeight);
					}
				}
				HX_STACK_LINE(657)
				hx::AddEq(this->_flashPoint->x,this->_scaledTileWidth);
				HX_STACK_LINE(658)
				(column)++;
				HX_STACK_LINE(659)
				(columnIndex)++;
			}
			HX_STACK_LINE(662)
			hx::AddEq(rowIndex,this->widthInTiles);
			HX_STACK_LINE(663)
			hx::AddEq(this->_flashPoint->y,this->_scaledTileHeight);
			HX_STACK_LINE(664)
			(row)++;
		}
	}
return null();
}


Void FlxTilemap_obj::draw( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","draw",0x7d740dc8,"flixel.tile.FlxTilemap.draw","flixel/tile/FlxTilemap.hx",674,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(675)
		Array< ::Dynamic > cameras = this->get_cameras();		HX_STACK_VAR(cameras,"cameras");
		HX_STACK_LINE(676)
		::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
		HX_STACK_LINE(677)
		::flixel::tile::FlxTilemapBuffer buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(678)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(679)
		int l = cameras->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(681)
		while((true)){
			HX_STACK_LINE(681)
			if ((!(((i < l))))){
				HX_STACK_LINE(681)
				break;
			}
			HX_STACK_LINE(683)
			camera = cameras->__get(i).StaticCast< ::flixel::FlxCamera >();
			HX_STACK_LINE(685)
			if (((bool(!(camera->visible)) || bool(!(camera->exists))))){
				HX_STACK_LINE(687)
				continue;
			}
			HX_STACK_LINE(690)
			if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() == null()))){
				HX_STACK_LINE(692)
				::flixel::tile::FlxTilemapBuffer buffer1 = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);		HX_STACK_VAR(buffer1,"buffer1");
				HX_STACK_LINE(692)
				buffer1->pixelPerfectRender = this->pixelPerfectRender;
				HX_STACK_LINE(692)
				this->_buffers[i] = buffer1;
			}
			HX_STACK_LINE(695)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(695)
			::flixel::tile::FlxTilemapBuffer _g1 = this->_buffers->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(695)
			buffer = _g1;
			HX_STACK_LINE(696)
			buffer->dirty = true;
			HX_STACK_LINE(717)
			this->drawTilemap(buffer,camera);
			HX_STACK_LINE(721)
			(::flixel::FlxBasic_obj::_VISIBLECOUNT)++;
		}
		HX_STACK_LINE(726)
		if ((::flixel::FlxG_obj::debugger->drawDebug)){
			HX_STACK_LINE(727)
			this->drawDebug();
		}
	}
return null();
}


Array< int > FlxTilemap_obj::getData( hx::Null< bool >  __o_Simple){
bool Simple = __o_Simple.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getData",0x9852969c,"flixel.tile.FlxTilemap.getData","flixel/tile/FlxTilemap.hx",738,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Simple,"Simple")
{
		HX_STACK_LINE(739)
		if ((!(Simple))){
			HX_STACK_LINE(741)
			return this->_data;
		}
		HX_STACK_LINE(744)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(745)
		int l = this->_data->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(746)
		Array< int > data = Array_obj< int >::__new();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(747)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(data,l);
		HX_STACK_LINE(749)
		while((true)){
			HX_STACK_LINE(749)
			if ((!(((i < l))))){
				HX_STACK_LINE(749)
				break;
			}
			HX_STACK_LINE(751)
			if (((this->_tileObjects->__get(this->_data->__get(i)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0))){
				HX_STACK_LINE(751)
				data[i] = (int)1;
			}
			else{
				HX_STACK_LINE(751)
				data[i] = (int)0;
			}
			HX_STACK_LINE(752)
			(i)++;
		}
		HX_STACK_LINE(755)
		return data;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getData,return )

Void FlxTilemap_obj::setDirty( hx::Null< bool >  __o_Dirty){
bool Dirty = __o_Dirty.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setDirty",0x6396ccd4,"flixel.tile.FlxTilemap.setDirty","flixel/tile/FlxTilemap.hx",766,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Dirty,"Dirty")
{
		HX_STACK_LINE(766)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(766)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(766)
		while((true)){
			HX_STACK_LINE(766)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(766)
				break;
			}
			HX_STACK_LINE(766)
			::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(766)
			++(_g);
			HX_STACK_LINE(768)
			buffer->dirty = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setDirty,(void))

Array< ::Dynamic > FlxTilemap_obj::findPath( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,hx::Null< bool >  __o_Simplify,hx::Null< bool >  __o_RaySimplify,hx::Null< bool >  __o_WideDiagonal){
bool Simplify = __o_Simplify.Default(true);
bool RaySimplify = __o_RaySimplify.Default(false);
bool WideDiagonal = __o_WideDiagonal.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","findPath",0x18780642,"flixel.tile.FlxTilemap.findPath","flixel/tile/FlxTilemap.hx",784,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Simplify,"Simplify")
	HX_STACK_ARG(RaySimplify,"RaySimplify")
	HX_STACK_ARG(WideDiagonal,"WideDiagonal")
{
		HX_STACK_LINE(786)
		int _g = ::Std_obj::_int((Float(((Start->y - this->y))) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(786)
		int _g1 = (_g * this->widthInTiles);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(786)
		int _g2 = ::Std_obj::_int((Float(((Start->x - this->x))) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(786)
		int startIndex = (_g1 + _g2);		HX_STACK_VAR(startIndex,"startIndex");
		HX_STACK_LINE(787)
		int _g3 = ::Std_obj::_int((Float(((End->y - this->y))) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(787)
		int _g4 = (_g3 * this->widthInTiles);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(787)
		int _g5 = ::Std_obj::_int((Float(((End->x - this->x))) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(787)
		int endIndex = (_g4 + _g5);		HX_STACK_VAR(endIndex,"endIndex");
		HX_STACK_LINE(790)
		if (((bool((this->_tileObjects->__get(this->_data->__get(startIndex)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0)) || bool((this->_tileObjects->__get(this->_data->__get(endIndex)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0))))){
			HX_STACK_LINE(792)
			return null();
		}
		HX_STACK_LINE(796)
		Array< int > distances = this->computePathDistance(startIndex,endIndex,WideDiagonal,null());		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(798)
		if (((distances == null()))){
			HX_STACK_LINE(800)
			return null();
		}
		HX_STACK_LINE(804)
		Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(805)
		this->walkPath(distances,endIndex,points);
		HX_STACK_LINE(808)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(809)
		node = points->__get((points->length - (int)1)).StaticCast< ::flixel::util::FlxPoint >();
		HX_STACK_LINE(810)
		node->set_x(Start->x);
		HX_STACK_LINE(811)
		node->set_y(Start->y);
		HX_STACK_LINE(812)
		node = points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();
		HX_STACK_LINE(813)
		node->set_x(End->x);
		HX_STACK_LINE(814)
		node->set_y(End->y);
		HX_STACK_LINE(817)
		if ((Simplify)){
			HX_STACK_LINE(819)
			this->simplifyPath(points);
		}
		HX_STACK_LINE(821)
		if ((RaySimplify)){
			HX_STACK_LINE(823)
			this->raySimplifyPath(points);
		}
		HX_STACK_LINE(827)
		Array< ::Dynamic > path = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(path,"path");
		HX_STACK_LINE(828)
		int i = (points->length - (int)1);		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(830)
		while((true)){
			HX_STACK_LINE(830)
			if ((!(((i >= (int)0))))){
				HX_STACK_LINE(830)
				break;
			}
			HX_STACK_LINE(832)
			int _g6 = (i)--;		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(832)
			::flixel::util::FlxPoint _g7 = points->__get(_g6).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(832)
			node = _g7;
			HX_STACK_LINE(834)
			if (((node != null()))){
				HX_STACK_LINE(836)
				path->push(node);
			}
		}
		HX_STACK_LINE(840)
		return path;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,findPath,return )

bool FlxTilemap_obj::overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlaps",0xc0bce6d0,"flixel.tile.FlxTilemap.overlaps","flixel/tile/FlxTilemap.hx",854,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(855)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(855)
		{
			HX_STACK_LINE(855)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(855)
			if (((bool((ObjectOrGroup->collisionType == (int)4)) || bool((ObjectOrGroup->collisionType == (int)2))))){
				HX_STACK_LINE(855)
				if (((ObjectOrGroup->collisionType == (int)2))){
					HX_STACK_LINE(855)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(855)
					if (((ObjectOrGroup->collisionType == (int)4))){
						HX_STACK_LINE(855)
						group1 = (hx::TCast< flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(855)
			group = group1;
		}
		HX_STACK_LINE(856)
		if (((group != null()))){
			HX_STACK_LINE(858)
			Dynamic Callback = this->tilemapOverlapsCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(858)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(858)
			if (((group != null()))){
				HX_STACK_LINE(858)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(858)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(858)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(858)
				while((true)){
					HX_STACK_LINE(858)
					if ((!(((i < l))))){
						HX_STACK_LINE(858)
						break;
					}
					HX_STACK_LINE(858)
					int _g = (i)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(858)
					::flixel::FlxBasic _g1 = group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(858)
					basic = _g1;
					HX_STACK_LINE(858)
					if (((  (((basic != null()))) ? bool(Callback(basic,(int)0,(int)0,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(858)
						result = true;
						HX_STACK_LINE(858)
						break;
					}
				}
			}
			HX_STACK_LINE(858)
			return result;
		}
		else{
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,::flixel::FlxBasic &ObjectOrGroup){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",860,0x448feb74)
					{
						HX_STACK_LINE(860)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(860)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(860)
						bool InScreenSpace1 = false;		HX_STACK_VAR(InScreenSpace1,"InScreenSpace1");
						struct _Function_3_1{
							inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,::flixel::FlxBasic &ObjectOrGroup){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",860,0x448feb74)
								{
									HX_STACK_LINE(860)
									::flixel::FlxObject _g2;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(860)
									_g2 = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
									HX_STACK_LINE(860)
									return __this->overlapsWithCallback(_g2,null(),null(),null());
								}
								return null();
							}
						};
						HX_STACK_LINE(860)
						return (  (((bool((ObjectOrGroup->collisionType == (int)1)) || bool((ObjectOrGroup->collisionType == (int)3))))) ? bool(_Function_3_1::Block(__this,ObjectOrGroup)) : bool(__this->overlaps(ObjectOrGroup,InScreenSpace1,null())) );
					}
					return null();
				}
			};
			HX_STACK_LINE(860)
			if ((_Function_2_1::Block(this,ObjectOrGroup))){
				HX_STACK_LINE(862)
				return true;
			}
		}
		HX_STACK_LINE(864)
		return false;
	}
}


bool FlxTilemap_obj::tilemapOverlapsCallback( ::flixel::FlxBasic ObjectOrGroup,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tilemapOverlapsCallback",0x199365fb,"flixel.tile.FlxTilemap.tilemapOverlapsCallback","flixel/tile/FlxTilemap.hx",869,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(869)
		if (((bool((ObjectOrGroup->collisionType == (int)1)) || bool((ObjectOrGroup->collisionType == (int)3))))){
			HX_STACK_LINE(872)
			::flixel::FlxObject _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(872)
			_g = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
			HX_STACK_LINE(872)
			return this->overlapsWithCallback(_g,null(),null(),null());
		}
		else{
			HX_STACK_LINE(876)
			return this->overlaps(ObjectOrGroup,InScreenSpace,Camera);
		}
		HX_STACK_LINE(869)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,tilemapOverlapsCallback,return )

bool FlxTilemap_obj::overlapsAt( Float X,Float Y,::flixel::FlxBasic ObjectOrGroup,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsAt",0x16e073e3,"flixel.tile.FlxTilemap.overlapsAt","flixel/tile/FlxTilemap.hx",893,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(894)
		::flixel::group::FlxTypedGroup group;		HX_STACK_VAR(group,"group");
		HX_STACK_LINE(894)
		{
			HX_STACK_LINE(894)
			::flixel::group::FlxTypedGroup group1 = null();		HX_STACK_VAR(group1,"group1");
			HX_STACK_LINE(894)
			if (((bool((ObjectOrGroup->collisionType == (int)4)) || bool((ObjectOrGroup->collisionType == (int)2))))){
				HX_STACK_LINE(894)
				if (((ObjectOrGroup->collisionType == (int)2))){
					HX_STACK_LINE(894)
					group1 = ObjectOrGroup;
				}
				else{
					HX_STACK_LINE(894)
					if (((ObjectOrGroup->collisionType == (int)4))){
						HX_STACK_LINE(894)
						group1 = (hx::TCast< flixel::group::FlxSpriteGroup >::cast(ObjectOrGroup))->group;
					}
				}
			}
			HX_STACK_LINE(894)
			group = group1;
		}
		HX_STACK_LINE(895)
		if (((group != null()))){
			HX_STACK_LINE(897)
			Dynamic Callback = this->tilemapOverlapsAtCallback_dyn();		HX_STACK_VAR(Callback,"Callback");
			HX_STACK_LINE(897)
			bool result = false;		HX_STACK_VAR(result,"result");
			HX_STACK_LINE(897)
			if (((group != null()))){
				HX_STACK_LINE(897)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(897)
				int l = group->length;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(897)
				::flixel::FlxBasic basic;		HX_STACK_VAR(basic,"basic");
				HX_STACK_LINE(897)
				while((true)){
					HX_STACK_LINE(897)
					if ((!(((i < l))))){
						HX_STACK_LINE(897)
						break;
					}
					HX_STACK_LINE(897)
					int _g = (i)++;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(897)
					::flixel::FlxBasic _g1 = group->members->__GetItem(_g);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(897)
					basic = _g1;
					HX_STACK_LINE(897)
					if (((  (((basic != null()))) ? bool(Callback(basic,X,Y,InScreenSpace,Camera).Cast< bool >()) : bool(false) ))){
						HX_STACK_LINE(897)
						result = true;
						HX_STACK_LINE(897)
						break;
					}
				}
			}
			HX_STACK_LINE(897)
			return result;
		}
		else{
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,Float &Y,::flixel::FlxBasic &ObjectOrGroup,Float &X){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",899,0x448feb74)
					{
						HX_STACK_LINE(899)
						::flixel::FlxObject _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(899)
						_g2 = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
						HX_STACK_LINE(899)
						::flixel::util::FlxPoint _g3 = __this->_point->set(X,Y);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(899)
						return __this->overlapsWithCallback(_g2,null(),false,_g3);
					}
					return null();
				}
			};
			HX_STACK_LINE(899)
			if (((  (((bool((ObjectOrGroup->collisionType == (int)1)) || bool((ObjectOrGroup->collisionType == (int)3))))) ? bool(_Function_2_1::Block(this,Y,ObjectOrGroup,X)) : bool(this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera)) ))){
				HX_STACK_LINE(901)
				return true;
			}
		}
		HX_STACK_LINE(904)
		return false;
	}
}


bool FlxTilemap_obj::tilemapOverlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,bool InScreenSpace,::flixel::FlxCamera Camera){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tilemapOverlapsAtCallback",0xbad41b8e,"flixel.tile.FlxTilemap.tilemapOverlapsAtCallback","flixel/tile/FlxTilemap.hx",909,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectOrGroup,"ObjectOrGroup")
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_LINE(909)
	if (((bool((ObjectOrGroup->collisionType == (int)1)) || bool((ObjectOrGroup->collisionType == (int)3))))){
		HX_STACK_LINE(912)
		::flixel::FlxObject _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(912)
		_g = hx::TCast< flixel::FlxObject >::cast(ObjectOrGroup);
		HX_STACK_LINE(912)
		::flixel::util::FlxPoint _g1 = this->_point->set(X,Y);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(912)
		return this->overlapsWithCallback(_g,null(),false,_g1);
	}
	else{
		HX_STACK_LINE(916)
		return this->overlapsAt(X,Y,ObjectOrGroup,InScreenSpace,Camera);
	}
	HX_STACK_LINE(909)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,tilemapOverlapsAtCallback,return )

bool FlxTilemap_obj::overlapsWithCallback( ::flixel::FlxObject Object,Dynamic Callback,hx::Null< bool >  __o_FlipCallbackParams,::flixel::util::FlxPoint Position){
bool FlipCallbackParams = __o_FlipCallbackParams.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsWithCallback",0xe7b56cdb,"flixel.tile.FlxTilemap.overlapsWithCallback","flixel/tile/FlxTilemap.hx",932,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(FlipCallbackParams,"FlipCallbackParams")
	HX_STACK_ARG(Position,"Position")
{
		HX_STACK_LINE(933)
		bool results = false;		HX_STACK_VAR(results,"results");
		HX_STACK_LINE(935)
		Float X = this->x;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(936)
		Float Y = this->y;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(938)
		if (((Position != null()))){
			HX_STACK_LINE(940)
			X = Position->x;
			HX_STACK_LINE(941)
			Y = Position->y;
		}
		HX_STACK_LINE(945)
		int selectionX = ::Math_obj::floor((Float(((Object->x - X))) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(selectionX,"selectionX");
		HX_STACK_LINE(946)
		int selectionY = ::Math_obj::floor((Float(((Object->y - Y))) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(selectionY,"selectionY");
		HX_STACK_LINE(947)
		Float _g = Object->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(947)
		Float _g1 = (Float(_g) / Float(this->_scaledTileWidth));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(947)
		int _g2 = ::Math_obj::ceil(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(947)
		int _g3 = (selectionX + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(947)
		int selectionWidth = (_g3 + (int)1);		HX_STACK_VAR(selectionWidth,"selectionWidth");
		HX_STACK_LINE(948)
		Float _g4 = Object->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(948)
		Float _g5 = (Float(_g4) / Float(this->_scaledTileHeight));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(948)
		int _g6 = ::Math_obj::ceil(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(948)
		int _g7 = (selectionY + _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(948)
		int selectionHeight = (_g7 + (int)1);		HX_STACK_VAR(selectionHeight,"selectionHeight");
		struct _Function_1_1{
			inline static Float Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,int &selectionX){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",951,0x448feb74)
				{
					HX_STACK_LINE(951)
					Float Max = __this->widthInTiles;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(951)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(951)
					if (((selectionX < (int)0))){
						HX_STACK_LINE(951)
						lowerBound = (int)0;
					}
					else{
						HX_STACK_LINE(951)
						lowerBound = selectionX;
					}
					HX_STACK_LINE(951)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(951)
		int _g8 = ::Std_obj::_int(_Function_1_1::Block(this,selectionX));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(951)
		selectionX = _g8;
		struct _Function_1_2{
			inline static Float Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,int &selectionY){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",952,0x448feb74)
				{
					HX_STACK_LINE(952)
					Float Max = __this->heightInTiles;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(952)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(952)
					if (((selectionY < (int)0))){
						HX_STACK_LINE(952)
						lowerBound = (int)0;
					}
					else{
						HX_STACK_LINE(952)
						lowerBound = selectionY;
					}
					HX_STACK_LINE(952)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(952)
		int _g9 = ::Std_obj::_int(_Function_1_2::Block(this,selectionY));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(952)
		selectionY = _g9;
		struct _Function_1_3{
			inline static Float Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,int &selectionWidth){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",953,0x448feb74)
				{
					HX_STACK_LINE(953)
					Float Max = __this->widthInTiles;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(953)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(953)
					if (((selectionWidth < (int)0))){
						HX_STACK_LINE(953)
						lowerBound = (int)0;
					}
					else{
						HX_STACK_LINE(953)
						lowerBound = selectionWidth;
					}
					HX_STACK_LINE(953)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(953)
		int _g10 = ::Std_obj::_int(_Function_1_3::Block(this,selectionWidth));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(953)
		selectionWidth = _g10;
		struct _Function_1_4{
			inline static Float Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,int &selectionHeight){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",954,0x448feb74)
				{
					HX_STACK_LINE(954)
					Float Max = __this->heightInTiles;		HX_STACK_VAR(Max,"Max");
					HX_STACK_LINE(954)
					Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
					HX_STACK_LINE(954)
					if (((selectionHeight < (int)0))){
						HX_STACK_LINE(954)
						lowerBound = (int)0;
					}
					else{
						HX_STACK_LINE(954)
						lowerBound = selectionHeight;
					}
					HX_STACK_LINE(954)
					return (  (((lowerBound > Max))) ? Float(Max) : Float(lowerBound) );
				}
				return null();
			}
		};
		HX_STACK_LINE(954)
		int _g11 = ::Std_obj::_int(_Function_1_4::Block(this,selectionHeight));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(954)
		selectionHeight = _g11;
		HX_STACK_LINE(957)
		int rowStart = (selectionY * this->widthInTiles);		HX_STACK_VAR(rowStart,"rowStart");
		HX_STACK_LINE(958)
		int row = selectionY;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(959)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(960)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(961)
		bool overlapFound;		HX_STACK_VAR(overlapFound,"overlapFound");
		HX_STACK_LINE(962)
		Float deltaX = (X - this->last->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(963)
		Float deltaY = (Y - this->last->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(965)
		while((true)){
			HX_STACK_LINE(965)
			if ((!(((row < selectionHeight))))){
				HX_STACK_LINE(965)
				break;
			}
			HX_STACK_LINE(967)
			column = selectionX;
			HX_STACK_LINE(969)
			while((true)){
				HX_STACK_LINE(969)
				if ((!(((column < selectionWidth))))){
					HX_STACK_LINE(969)
					break;
				}
				HX_STACK_LINE(971)
				int index = (rowStart + column);		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(972)
				if (((bool((index < (int)0)) || bool((index > (this->_data->length - (int)1)))))){
					HX_STACK_LINE(974)
					(column)++;
					HX_STACK_LINE(975)
					continue;
				}
				HX_STACK_LINE(978)
				int dataIndex = this->_data->__get(index);		HX_STACK_VAR(dataIndex,"dataIndex");
				HX_STACK_LINE(979)
				if (((dataIndex < (int)0))){
					HX_STACK_LINE(981)
					(column)++;
					HX_STACK_LINE(982)
					continue;
				}
				HX_STACK_LINE(985)
				tile = this->_tileObjects->__get(dataIndex).StaticCast< ::flixel::tile::FlxTile >();
				HX_STACK_LINE(986)
				tile->set_width(this->_scaledTileWidth);
				HX_STACK_LINE(987)
				tile->set_height(this->_scaledTileHeight);
				HX_STACK_LINE(988)
				Float _g12 = tile->get_width();		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(988)
				Float _g13 = (column * _g12);		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(988)
				Float _g14 = (X + _g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(988)
				tile->set_x(_g14);
				HX_STACK_LINE(989)
				Float _g15 = tile->get_height();		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(989)
				Float _g16 = (row * _g15);		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(989)
				Float _g17 = (Y + _g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(989)
				tile->set_y(_g17);
				HX_STACK_LINE(990)
				tile->last->set_x((tile->x - deltaX));
				HX_STACK_LINE(991)
				tile->last->set_y((tile->y - deltaY));
				HX_STACK_LINE(993)
				Float _g18 = Object->get_width();		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(993)
				Float _g19 = (Object->x + _g18);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(993)
				bool _g26;		HX_STACK_VAR(_g26,"_g26");
				struct _Function_3_1{
					inline static bool Block( ::flixel::tile::FlxTile &tile,::flixel::FlxObject &Object){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",993,0x448feb74)
						{
							HX_STACK_LINE(993)
							Float _g20 = tile->get_width();		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(993)
							Float _g21 = (tile->x + _g20);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(993)
							return (Object->x < _g21);
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static bool Block( ::flixel::tile::FlxTile &tile,::flixel::FlxObject &Object){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",994,0x448feb74)
						{
							HX_STACK_LINE(994)
							Float _g22 = Object->get_height();		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(994)
							Float _g23 = (Object->y + _g22);		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(994)
							return (_g23 > tile->y);
						}
						return null();
					}
				};
				HX_STACK_LINE(993)
				if (((  (((  (((_g19 > tile->x))) ? bool(_Function_3_1::Block(tile,Object)) : bool(false) ))) ? bool(_Function_3_2::Block(tile,Object)) : bool(false) ))){
					HX_STACK_LINE(994)
					Float _g24 = tile->get_height();		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(994)
					Float _g25 = (tile->y + _g24);		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(994)
					_g26 = (Object->y < _g25);
				}
				else{
					HX_STACK_LINE(993)
					_g26 = false;
				}
				HX_STACK_LINE(993)
				overlapFound = _g26;
				HX_STACK_LINE(996)
				if (((tile->allowCollisions != (int)0))){
					HX_STACK_LINE(998)
					if (((Callback != null()))){
						HX_STACK_LINE(1000)
						if ((FlipCallbackParams)){
							HX_STACK_LINE(1002)
							bool _g27 = Callback(Object,tile).Cast< bool >();		HX_STACK_VAR(_g27,"_g27");
							HX_STACK_LINE(1002)
							overlapFound = _g27;
						}
						else{
							HX_STACK_LINE(1006)
							bool _g28 = Callback(tile,Object).Cast< bool >();		HX_STACK_VAR(_g28,"_g28");
							HX_STACK_LINE(1006)
							overlapFound = _g28;
						}
					}
				}
				HX_STACK_LINE(1011)
				if ((overlapFound)){
					struct _Function_4_1{
						inline static bool Block( ::flixel::tile::FlxTile &tile,::flixel::FlxObject &Object){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",1013,0x448feb74)
							{
								HX_STACK_LINE(1013)
								return (  ((!(((tile->filter == null()))))) ? bool(::Std_obj::is(Object,tile->filter)) : bool(true) );
							}
							return null();
						}
					};
					HX_STACK_LINE(1013)
					if (((  (((tile->callbackFunction != null()))) ? bool(_Function_4_1::Block(tile,Object)) : bool(false) ))){
						HX_STACK_LINE(1015)
						tile->mapIndex = (rowStart + column);
						HX_STACK_LINE(1016)
						tile->callbackFunction(tile,Object);
					}
					HX_STACK_LINE(1019)
					if (((tile->allowCollisions != (int)0))){
						HX_STACK_LINE(1021)
						results = true;
					}
				}
				HX_STACK_LINE(1025)
				(column)++;
			}
			HX_STACK_LINE(1028)
			hx::AddEq(rowStart,this->widthInTiles);
			HX_STACK_LINE(1029)
			(row)++;
		}
		HX_STACK_LINE(1032)
		return results;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,overlapsWithCallback,return )

bool FlxTilemap_obj::overlapsPoint( ::flixel::util::FlxPoint WorldPoint,hx::Null< bool >  __o_InScreenSpace,::flixel::FlxCamera Camera){
bool InScreenSpace = __o_InScreenSpace.Default(false);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","overlapsPoint",0xaeb98b60,"flixel.tile.FlxTilemap.overlapsPoint","flixel/tile/FlxTilemap.hx",1044,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(WorldPoint,"WorldPoint")
	HX_STACK_ARG(InScreenSpace,"InScreenSpace")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(1045)
		if ((!(InScreenSpace))){
			HX_STACK_LINE(1047)
			return (this->_tileObjects->__get(this->_data->__get(::Math_obj::floor(((::Math_obj::floor((Float(((WorldPoint->y - this->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + (Float(((WorldPoint->x - this->x))) / Float(this->_scaledTileWidth)))))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0);
		}
		HX_STACK_LINE(1050)
		if (((Camera == null()))){
			HX_STACK_LINE(1052)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1055)
		WorldPoint->set_x((WorldPoint->x - Camera->scroll->x));
		HX_STACK_LINE(1056)
		WorldPoint->set_y((WorldPoint->y - Camera->scroll->y));
		HX_STACK_LINE(1057)
		this->getScreenXY(this->_point,Camera);
		HX_STACK_LINE(1059)
		bool result = (this->_tileObjects->__get(this->_data->__get(::Std_obj::_int(((::Std_obj::_int((Float(((WorldPoint->y - WorldPoint->y))) / Float(this->_scaledTileHeight))) * this->widthInTiles) + (Float(((WorldPoint->x - WorldPoint->x))) / Float(this->_scaledTileWidth)))))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions > (int)0);		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1060)
		if ((WorldPoint->_weak)){
			HX_STACK_LINE(1060)
			WorldPoint->put();
		}
		HX_STACK_LINE(1061)
		return result;
	}
}


int FlxTilemap_obj::getTile( int X,int Y){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTile",0xa2ec0ba0,"flixel.tile.FlxTilemap.getTile","flixel/tile/FlxTilemap.hx",1073,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(1073)
	return this->_data->__get(((Y * this->widthInTiles) + X));
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTile,return )

int FlxTilemap_obj::getTileByIndex( int Index){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileByIndex",0x27fbf9fb,"flixel.tile.FlxTilemap.getTileByIndex","flixel/tile/FlxTilemap.hx",1084,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(1084)
	return this->_data->__get(Index);
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileByIndex,return )

int FlxTilemap_obj::getTileCollisions( int Index){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCollisions",0x0a549381,"flixel.tile.FlxTilemap.getTileCollisions","flixel/tile/FlxTilemap.hx",1095,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(1095)
	return this->_tileObjects->__get(Index).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileCollisions,return )

Array< int > FlxTilemap_obj::getTileInstances( int Index){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileInstances",0xee32e37e,"flixel.tile.FlxTilemap.getTileInstances","flixel/tile/FlxTilemap.hx",1105,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(1106)
	Array< int > array = null();		HX_STACK_VAR(array,"array");
	HX_STACK_LINE(1107)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1108)
	int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(1110)
	while((true)){
		HX_STACK_LINE(1110)
		if ((!(((i < l))))){
			HX_STACK_LINE(1110)
			break;
		}
		HX_STACK_LINE(1112)
		if (((this->_data->__get(i) == Index))){
			HX_STACK_LINE(1114)
			if (((array == null()))){
				HX_STACK_LINE(1116)
				array = Array_obj< int >::__new();
			}
			HX_STACK_LINE(1118)
			array->push(i);
		}
		HX_STACK_LINE(1121)
		(i)++;
	}
	HX_STACK_LINE(1124)
	return array;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getTileInstances,return )

Array< ::Dynamic > FlxTilemap_obj::getTileCoords( int Index,hx::Null< bool >  __o_Midpoint){
bool Midpoint = __o_Midpoint.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getTileCoords",0x02899bde,"flixel.tile.FlxTilemap.getTileCoords","flixel/tile/FlxTilemap.hx",1135,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Midpoint,"Midpoint")
{
		HX_STACK_LINE(1136)
		Array< ::Dynamic > array = null();		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(1138)
		::flixel::util::FlxPoint point;		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(1139)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1140)
		int l = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1142)
		while((true)){
			HX_STACK_LINE(1142)
			if ((!(((i < l))))){
				HX_STACK_LINE(1142)
				break;
			}
			HX_STACK_LINE(1144)
			if (((this->_data->__get(i) == Index))){
				HX_STACK_LINE(1146)
				::flixel::util::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1146)
				{
					HX_STACK_LINE(1146)
					int _g = ::Std_obj::_int(hx::Mod(i,this->widthInTiles));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1146)
					Float _g1 = (_g * this->_scaledTileWidth);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1146)
					Float X = (this->x + _g1);		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(1146)
					int _g2 = ::Std_obj::_int((Float(i) / Float(this->widthInTiles)));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1146)
					Float _g3 = (_g2 * this->_scaledTileHeight);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1146)
					Float Y = (this->y + _g3);		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(1146)
					::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->__Field(HX_CSTRING("set"),true)(X,Y);		HX_STACK_VAR(point1,"point1");
					HX_STACK_LINE(1146)
					point1->_inPool = false;
					HX_STACK_LINE(1146)
					_g4 = point1;
				}
				HX_STACK_LINE(1146)
				point = _g4;
				HX_STACK_LINE(1148)
				if ((Midpoint)){
					HX_STACK_LINE(1150)
					{
						HX_STACK_LINE(1150)
						::flixel::util::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1150)
						_g->set_x((_g->x + (this->_scaledTileWidth * 0.5)));
					}
					HX_STACK_LINE(1151)
					{
						HX_STACK_LINE(1151)
						::flixel::util::FlxPoint _g = point;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1151)
						_g->set_y((_g->y + (this->_scaledTileHeight * 0.5)));
					}
				}
				HX_STACK_LINE(1154)
				if (((array == null()))){
					HX_STACK_LINE(1156)
					Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1156)
					array = _g5;
				}
				HX_STACK_LINE(1158)
				array->push(point);
			}
			HX_STACK_LINE(1161)
			(i)++;
		}
		HX_STACK_LINE(1164)
		return array;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,getTileCoords,return )

bool FlxTilemap_obj::setTile( int X,int Y,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setTile",0x95ed9cac,"flixel.tile.FlxTilemap.setTile","flixel/tile/FlxTilemap.hx",1177,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(1178)
		if (((bool((X >= this->widthInTiles)) || bool((Y >= this->heightInTiles))))){
			HX_STACK_LINE(1180)
			return false;
		}
		HX_STACK_LINE(1183)
		return this->setTileByIndex(((Y * this->widthInTiles) + X),Tile,UpdateGraphics);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,setTile,return )

bool FlxTilemap_obj::setTileByIndex( int Index,int Tile,hx::Null< bool >  __o_UpdateGraphics){
bool UpdateGraphics = __o_UpdateGraphics.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setTileByIndex",0x481be26f,"flixel.tile.FlxTilemap.setTileByIndex","flixel/tile/FlxTilemap.hx",1195,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(UpdateGraphics,"UpdateGraphics")
{
		HX_STACK_LINE(1196)
		if (((Index >= this->_data->length))){
			HX_STACK_LINE(1198)
			return false;
		}
		HX_STACK_LINE(1201)
		bool ok = true;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(1202)
		this->_data[Index] = Tile;
		HX_STACK_LINE(1204)
		if ((!(UpdateGraphics))){
			HX_STACK_LINE(1206)
			return ok;
		}
		HX_STACK_LINE(1209)
		this->setDirty(null());
		HX_STACK_LINE(1211)
		if (((this->_auto == (int)0))){
			HX_STACK_LINE(1213)
			this->updateTile(Index);
			HX_STACK_LINE(1214)
			return ok;
		}
		HX_STACK_LINE(1218)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1219)
		int _g = ::Std_obj::_int((Float(Index) / Float(this->widthInTiles)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1219)
		int row = (_g - (int)1);		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1220)
		int rowLength = (row + (int)3);		HX_STACK_VAR(rowLength,"rowLength");
		HX_STACK_LINE(1221)
		int column = (hx::Mod(Index,this->widthInTiles) - (int)1);		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1222)
		int columnHeight = (column + (int)3);		HX_STACK_VAR(columnHeight,"columnHeight");
		HX_STACK_LINE(1224)
		while((true)){
			HX_STACK_LINE(1224)
			if ((!(((row < rowLength))))){
				HX_STACK_LINE(1224)
				break;
			}
			HX_STACK_LINE(1226)
			column = (columnHeight - (int)3);
			HX_STACK_LINE(1228)
			while((true)){
				HX_STACK_LINE(1228)
				if ((!(((column < columnHeight))))){
					HX_STACK_LINE(1228)
					break;
				}
				HX_STACK_LINE(1230)
				if (((bool((bool((bool((row >= (int)0)) && bool((row < this->heightInTiles)))) && bool((column >= (int)0)))) && bool((column < this->widthInTiles))))){
					HX_STACK_LINE(1232)
					i = ((row * this->widthInTiles) + column);
					HX_STACK_LINE(1233)
					this->autoTile(i);
					HX_STACK_LINE(1234)
					this->updateTile(i);
				}
				HX_STACK_LINE(1236)
				(column)++;
			}
			HX_STACK_LINE(1239)
			(row)++;
		}
		HX_STACK_LINE(1242)
		return ok;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,setTileByIndex,return )

Void FlxTilemap_obj::setTileProperties( int Tile,hx::Null< int >  __o_AllowCollisions,Dynamic Callback,::Class CallbackFilter,hx::Null< int >  __o_Range){
int AllowCollisions = __o_AllowCollisions.Default(4369);
int Range = __o_Range.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","setTileProperties",0x96b8abbf,"flixel.tile.FlxTilemap.setTileProperties","flixel/tile/FlxTilemap.hx",1256,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Tile,"Tile")
	HX_STACK_ARG(AllowCollisions,"AllowCollisions")
	HX_STACK_ARG(Callback,"Callback")
	HX_STACK_ARG(CallbackFilter,"CallbackFilter")
	HX_STACK_ARG(Range,"Range")
{
		HX_STACK_LINE(1257)
		if (((Range <= (int)0))){
			HX_STACK_LINE(1259)
			Range = (int)1;
		}
		HX_STACK_LINE(1262)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1263)
		int i = Tile;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1264)
		int l = (Tile + Range);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1266)
		while((true)){
			HX_STACK_LINE(1266)
			if ((!(((i < l))))){
				HX_STACK_LINE(1266)
				break;
			}
			HX_STACK_LINE(1268)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1268)
			::flixel::tile::FlxTile _g1 = this->_tileObjects->__get(_g).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1268)
			tile = _g1;
			HX_STACK_LINE(1269)
			tile->allowCollisions = AllowCollisions;
			HX_STACK_LINE(1270)
			tile->callbackFunction = Callback;
			HX_STACK_LINE(1271)
			tile->filter = CallbackFilter;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTilemap_obj,setTileProperties,(void))

Void FlxTilemap_obj::follow( ::flixel::FlxCamera Camera,hx::Null< int >  __o_Border,hx::Null< bool >  __o_UpdateWorld){
int Border = __o_Border.Default(0);
bool UpdateWorld = __o_UpdateWorld.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","follow",0xe6a96c35,"flixel.tile.FlxTilemap.follow","flixel/tile/FlxTilemap.hx",1283,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Camera,"Camera")
	HX_STACK_ARG(Border,"Border")
	HX_STACK_ARG(UpdateWorld,"UpdateWorld")
{
		HX_STACK_LINE(1284)
		if (((Camera == null()))){
			HX_STACK_LINE(1286)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(1289)
		Float _g = this->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1289)
		Float _g1 = (_g - ((Border * this->_scaledTileWidth) * (int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(1289)
		Float _g2 = this->get_height();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(1289)
		Float _g3 = (_g2 - ((Border * this->_scaledTileHeight) * (int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(1289)
		Camera->setBounds((this->x + (Border * this->_scaledTileWidth)),(this->y + (Border * this->_scaledTileHeight)),_g1,_g3,UpdateWorld);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,follow,(void))

::flixel::util::FlxRect FlxTilemap_obj::getBounds( ::flixel::util::FlxRect Bounds){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","getBounds",0x86b34767,"flixel.tile.FlxTilemap.getBounds","flixel/tile/FlxTilemap.hx",1299,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Bounds,"Bounds")
	HX_STACK_LINE(1300)
	if (((Bounds == null()))){
		HX_STACK_LINE(1302)
		::flixel::util::FlxRect _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1302)
		{
			HX_STACK_LINE(1302)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1302)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1302)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(1302)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(1302)
			::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(1302)
			{
				HX_STACK_LINE(1302)
				::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(1302)
				_this->x = X;
				HX_STACK_LINE(1302)
				_this->y = Y;
				HX_STACK_LINE(1302)
				_this->width = Width;
				HX_STACK_LINE(1302)
				_this->height = Height;
				HX_STACK_LINE(1302)
				rect = _this;
			}
			HX_STACK_LINE(1302)
			rect->_inPool = false;
			HX_STACK_LINE(1302)
			_g = rect;
		}
		HX_STACK_LINE(1302)
		Bounds = _g;
	}
	HX_STACK_LINE(1305)
	Float Width = this->get_width();		HX_STACK_VAR(Width,"Width");
	HX_STACK_LINE(1305)
	Float Height = this->get_height();		HX_STACK_VAR(Height,"Height");
	HX_STACK_LINE(1305)
	Bounds->x = this->x;
	HX_STACK_LINE(1305)
	Bounds->y = this->y;
	HX_STACK_LINE(1305)
	Bounds->width = Width;
	HX_STACK_LINE(1305)
	Bounds->height = Height;
	HX_STACK_LINE(1305)
	return Bounds;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,getBounds,return )

bool FlxTilemap_obj::ray( ::flixel::util::FlxPoint Start,::flixel::util::FlxPoint End,::flixel::util::FlxPoint Result,hx::Null< Float >  __o_Resolution){
Float Resolution = __o_Resolution.Default(1);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","ray",0xbe0558a6,"flixel.tile.FlxTilemap.ray","flixel/tile/FlxTilemap.hx",1319,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Start,"Start")
	HX_STACK_ARG(End,"End")
	HX_STACK_ARG(Result,"Result")
	HX_STACK_ARG(Resolution,"Resolution")
{
		HX_STACK_LINE(1320)
		Float step = this->_scaledTileWidth;		HX_STACK_VAR(step,"step");
		HX_STACK_LINE(1322)
		if (((this->_scaledTileHeight < this->_scaledTileWidth))){
			HX_STACK_LINE(1324)
			step = this->_scaledTileHeight;
		}
		HX_STACK_LINE(1327)
		hx::DivEq(step,Resolution);
		HX_STACK_LINE(1328)
		Float deltaX = (End->x - Start->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(1329)
		Float deltaY = (End->y - Start->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(1330)
		Float distance = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1331)
		int steps = ::Math_obj::ceil((Float(distance) / Float(step)));		HX_STACK_VAR(steps,"steps");
		HX_STACK_LINE(1332)
		Float stepX = (Float(deltaX) / Float(steps));		HX_STACK_VAR(stepX,"stepX");
		HX_STACK_LINE(1333)
		Float stepY = (Float(deltaY) / Float(steps));		HX_STACK_VAR(stepY,"stepY");
		HX_STACK_LINE(1334)
		Float curX = ((Start->x - stepX) - this->x);		HX_STACK_VAR(curX,"curX");
		HX_STACK_LINE(1335)
		Float curY = ((Start->y - stepY) - this->y);		HX_STACK_VAR(curY,"curY");
		HX_STACK_LINE(1336)
		int tileX;		HX_STACK_VAR(tileX,"tileX");
		HX_STACK_LINE(1337)
		int tileY;		HX_STACK_VAR(tileY,"tileY");
		HX_STACK_LINE(1338)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1340)
		if ((Start->_weak)){
			HX_STACK_LINE(1340)
			Start->put();
		}
		HX_STACK_LINE(1341)
		if ((End->_weak)){
			HX_STACK_LINE(1341)
			End->put();
		}
		HX_STACK_LINE(1343)
		while((true)){
			HX_STACK_LINE(1343)
			if ((!(((i < steps))))){
				HX_STACK_LINE(1343)
				break;
			}
			HX_STACK_LINE(1345)
			hx::AddEq(curX,stepX);
			HX_STACK_LINE(1346)
			hx::AddEq(curY,stepY);
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,Float &curX){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",1348,0x448feb74)
					{
						HX_STACK_LINE(1348)
						Float _g = __this->get_width();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1348)
						return (curX > _g);
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,Float &curY){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",1348,0x448feb74)
					{
						HX_STACK_LINE(1348)
						Float _g1 = __this->get_height();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1348)
						return (curY > _g1);
					}
					return null();
				}
			};
			HX_STACK_LINE(1348)
			if (((  ((!(((  ((!(((  ((!(((curX < (int)0))))) ? bool(_Function_2_1::Block(this,curX)) : bool(true) ))))) ? bool((curY < (int)0)) : bool(true) ))))) ? bool(_Function_2_2::Block(this,curY)) : bool(true) ))){
				HX_STACK_LINE(1350)
				(i)++;
				HX_STACK_LINE(1351)
				continue;
			}
			HX_STACK_LINE(1354)
			int _g2 = ::Math_obj::floor((Float(curX) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1354)
			tileX = _g2;
			HX_STACK_LINE(1355)
			int _g3 = ::Math_obj::floor((Float(curY) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1355)
			tileY = _g3;
			HX_STACK_LINE(1357)
			if (((this->_tileObjects->__get(this->_data->__get(((tileY * this->widthInTiles) + tileX))).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions != (int)0))){
				HX_STACK_LINE(1360)
				int _g4 = ::Std_obj::_int(this->_scaledTileWidth);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(1360)
				hx::MultEq(tileX,_g4);
				HX_STACK_LINE(1361)
				int _g5 = ::Std_obj::_int(this->_scaledTileHeight);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(1361)
				hx::MultEq(tileY,_g5);
				HX_STACK_LINE(1362)
				Float rx = (int)0;		HX_STACK_VAR(rx,"rx");
				HX_STACK_LINE(1363)
				Float ry = (int)0;		HX_STACK_VAR(ry,"ry");
				HX_STACK_LINE(1364)
				Float q;		HX_STACK_VAR(q,"q");
				HX_STACK_LINE(1365)
				Float lx = (curX - stepX);		HX_STACK_VAR(lx,"lx");
				HX_STACK_LINE(1366)
				Float ly = (curY - stepY);		HX_STACK_VAR(ly,"ly");
				HX_STACK_LINE(1369)
				q = tileX;
				HX_STACK_LINE(1371)
				if (((deltaX < (int)0))){
					HX_STACK_LINE(1373)
					hx::AddEq(q,this->_scaledTileWidth);
				}
				HX_STACK_LINE(1376)
				rx = q;
				HX_STACK_LINE(1377)
				ry = (ly + (stepY * ((Float(((q - lx))) / Float(stepX)))));
				HX_STACK_LINE(1379)
				if (((bool((ry > tileY)) && bool((ry < (tileY + this->_scaledTileHeight)))))){
					HX_STACK_LINE(1381)
					if (((Result == null()))){
						HX_STACK_LINE(1383)
						::flixel::util::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(1383)
						{
							HX_STACK_LINE(1383)
							Float X = (int)0;		HX_STACK_VAR(X,"X");
							HX_STACK_LINE(1383)
							Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
							HX_STACK_LINE(1383)
							::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->__Field(HX_CSTRING("set"),true)(X,Y);		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(1383)
							point->_inPool = false;
							HX_STACK_LINE(1383)
							_g6 = point;
						}
						HX_STACK_LINE(1383)
						Result = _g6;
					}
					HX_STACK_LINE(1386)
					Result->set_x(rx);
					HX_STACK_LINE(1387)
					Result->set_y(ry);
					HX_STACK_LINE(1389)
					return false;
				}
				HX_STACK_LINE(1393)
				q = tileY;
				HX_STACK_LINE(1395)
				if (((deltaY < (int)0))){
					HX_STACK_LINE(1397)
					hx::AddEq(q,this->_scaledTileHeight);
				}
				HX_STACK_LINE(1400)
				rx = (lx + (stepX * ((Float(((q - ly))) / Float(stepY)))));
				HX_STACK_LINE(1401)
				ry = q;
				HX_STACK_LINE(1403)
				if (((bool((rx > tileX)) && bool((rx < (tileX + this->_scaledTileWidth)))))){
					HX_STACK_LINE(1405)
					if (((Result == null()))){
						HX_STACK_LINE(1407)
						::flixel::util::FlxPoint _g7;		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(1407)
						{
							HX_STACK_LINE(1407)
							Float X = (int)0;		HX_STACK_VAR(X,"X");
							HX_STACK_LINE(1407)
							Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
							HX_STACK_LINE(1407)
							::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->__Field(HX_CSTRING("set"),true)(X,Y);		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(1407)
							point->_inPool = false;
							HX_STACK_LINE(1407)
							_g7 = point;
						}
						HX_STACK_LINE(1407)
						Result = _g7;
					}
					HX_STACK_LINE(1410)
					Result->set_x(rx);
					HX_STACK_LINE(1411)
					Result->set_y(ry);
					HX_STACK_LINE(1413)
					return false;
				}
				HX_STACK_LINE(1416)
				return true;
			}
			HX_STACK_LINE(1419)
			(i)++;
		}
		HX_STACK_LINE(1422)
		return true;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,ray,return )

Void FlxTilemap_obj::updateFrameData( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateFrameData",0x0334926a,"flixel.tile.FlxTilemap.updateFrameData","flixel/tile/FlxTilemap.hx",1431,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1431)
		if (((bool((bool((this->cachedGraphics != null())) && bool((this->_tileWidth >= (int)1)))) && bool((this->_tileHeight >= (int)1))))){
			HX_STACK_LINE(1433)
			::openfl::_legacy::geom::Point _g = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1433)
			::flixel::system::layer::frames::FlxSpriteFrames _g1 = this->cachedGraphics->get_tilesheet()->getSpriteSheetFrames(this->region,_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1433)
			this->framesData = _g1;
			HX_STACK_LINE(1435)
			Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1435)
			this->_rectIDs = _g2;
			HX_STACK_LINE(1436)
			::flixel::util::FlxArrayUtil_obj::setLength_Int(this->_rectIDs,this->totalTiles);
			HX_STACK_LINE(1438)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1440)
			while((true)){
				HX_STACK_LINE(1440)
				if ((!(((i < this->totalTiles))))){
					HX_STACK_LINE(1440)
					break;
				}
				HX_STACK_LINE(1442)
				int _g3 = (i)++;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1442)
				this->updateTile(_g3);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateFrameData,(void))

::flixel::FlxSprite FlxTilemap_obj::tileToFlxSprite( int X,int Y,hx::Null< int >  __o_NewTile){
int NewTile = __o_NewTile.Default(0);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","tileToFlxSprite",0x2b66754a,"flixel.tile.FlxTilemap.tileToFlxSprite","flixel/tile/FlxTilemap.hx",1457,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(NewTile,"NewTile")
{
		HX_STACK_LINE(1458)
		int rowIndex = (X + (Y * this->widthInTiles));		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(1460)
		::openfl::_legacy::geom::Rectangle rect = null();		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(1466)
		::flixel::tile::FlxTile tile = this->_tileObjects->__get(this->_data->__get(rowIndex)).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1468)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
		}
		else{
			HX_STACK_LINE(1474)
			int rx = (((this->_data->__get(rowIndex) - this->_startingIndex)) * ((this->_tileWidth + this->region->spacingX)));		HX_STACK_VAR(rx,"rx");
			HX_STACK_LINE(1475)
			int ry = (int)0;		HX_STACK_VAR(ry,"ry");
			HX_STACK_LINE(1477)
			if (((rx >= this->region->width))){
				HX_STACK_LINE(1479)
				int _g = ::Std_obj::_int((Float(rx) / Float(this->region->width)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1479)
				int _g1 = (_g * ((this->_tileHeight + this->region->spacingY)));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1479)
				ry = _g1;
				HX_STACK_LINE(1480)
				hx::ModEq(rx,this->region->width);
			}
			HX_STACK_LINE(1483)
			::openfl::_legacy::geom::Rectangle _g2 = ::openfl::_legacy::geom::Rectangle_obj::__new((rx + this->region->startX),(ry + this->region->startY),this->_tileWidth,this->_tileHeight);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1483)
			rect = _g2;
		}
		HX_STACK_LINE(1488)
		::openfl::_legacy::geom::Point pt = ::openfl::_legacy::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(pt,"pt");
		HX_STACK_LINE(1489)
		::flixel::FlxSprite tileSprite = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(tileSprite,"tileSprite");
		HX_STACK_LINE(1490)
		tileSprite->makeGraphic(this->_tileWidth,this->_tileHeight,(int)0,true,null());
		HX_STACK_LINE(1491)
		tileSprite->set_x(((X * this->_tileWidth) + this->x));
		HX_STACK_LINE(1492)
		tileSprite->set_y(((Y * this->_tileHeight) + this->y));
		HX_STACK_LINE(1493)
		tileSprite->scale->set_x(this->scale->x);
		HX_STACK_LINE(1494)
		tileSprite->scale->set_y(this->scale->y);
		HX_STACK_LINE(1496)
		if (((rect != null()))){
			HX_STACK_LINE(1498)
			tileSprite->get_pixels()->copyPixels(this->cachedGraphics->bitmap,rect,pt,null(),null(),null());
		}
		HX_STACK_LINE(1501)
		tileSprite->dirty = true;
		HX_STACK_LINE(1502)
		tileSprite->updateFrameData();
		HX_STACK_LINE(1504)
		if (((NewTile >= (int)0))){
			HX_STACK_LINE(1506)
			this->setTile(X,Y,NewTile,null());
		}
		HX_STACK_LINE(1509)
		return tileSprite;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,tileToFlxSprite,return )

Void FlxTilemap_obj::updateBuffers( ){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateBuffers",0xf5face26,"flixel.tile.FlxTilemap.updateBuffers","flixel/tile/FlxTilemap.hx",1516,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_LINE(1517)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1518)
		int l;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1520)
		if (((this->_buffers != null()))){
			HX_STACK_LINE(1522)
			i = (int)0;
			HX_STACK_LINE(1523)
			l = this->_buffers->length;
			HX_STACK_LINE(1525)
			{
				HX_STACK_LINE(1525)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1525)
				while((true)){
					HX_STACK_LINE(1525)
					if ((!(((_g < l))))){
						HX_STACK_LINE(1525)
						break;
					}
					HX_STACK_LINE(1525)
					int i1 = (_g)++;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1527)
					this->_buffers->__get(i1).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->destroy();
				}
			}
			HX_STACK_LINE(1530)
			this->_buffers = null();
		}
		HX_STACK_LINE(1533)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1533)
		this->_buffers = _g;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTilemap_obj,updateBuffers,(void))

Void FlxTilemap_obj::drawTilemap( ::flixel::tile::FlxTilemapBuffer Buffer,::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","drawTilemap",0x2b20d346,"flixel.tile.FlxTilemap.drawTilemap","flixel/tile/FlxTilemap.hx",1543,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Buffer,"Buffer")
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(1547)
		this->_helperPoint->x = (this->x - (Camera->scroll->x * this->scrollFactor->x));
		HX_STACK_LINE(1548)
		this->_helperPoint->y = (this->y - (Camera->scroll->y * this->scrollFactor->y));
		HX_STACK_LINE(1550)
		int tileID;		HX_STACK_VAR(tileID,"tileID");
		HX_STACK_LINE(1551)
		Float drawX;		HX_STACK_VAR(drawX,"drawX");
		HX_STACK_LINE(1552)
		Float drawY;		HX_STACK_VAR(drawY,"drawY");
		HX_STACK_LINE(1554)
		Float hackScaleX = (this->tileScaleHack * this->scale->x);		HX_STACK_VAR(hackScaleX,"hackScaleX");
		HX_STACK_LINE(1555)
		Float hackScaleY = (this->tileScaleHack * this->scale->y);		HX_STACK_VAR(hackScaleY,"hackScaleY");
		HX_STACK_LINE(1557)
		::flixel::system::layer::DrawStackItem drawItem = Camera->getDrawStackItem(this->cachedGraphics,false,(int)0,null());		HX_STACK_VAR(drawItem,"drawItem");
		HX_STACK_LINE(1558)
		Array< Float > currDrawData = drawItem->drawData;		HX_STACK_VAR(currDrawData,"currDrawData");
		HX_STACK_LINE(1559)
		int currIndex = drawItem->position;		HX_STACK_VAR(currIndex,"currIndex");
		HX_STACK_LINE(1563)
		this->_point->set_x(((Camera->scroll->x * this->scrollFactor->x) - this->x));
		HX_STACK_LINE(1564)
		this->_point->set_y(((Camera->scroll->y * this->scrollFactor->y) - this->y));
		HX_STACK_LINE(1566)
		int screenXInTiles = ::Math_obj::floor((Float(this->_point->x) / Float(this->_scaledTileWidth)));		HX_STACK_VAR(screenXInTiles,"screenXInTiles");
		HX_STACK_LINE(1567)
		int screenYInTiles = ::Math_obj::floor((Float(this->_point->y) / Float(this->_scaledTileHeight)));		HX_STACK_VAR(screenYInTiles,"screenYInTiles");
		HX_STACK_LINE(1568)
		int screenRows = Buffer->rows;		HX_STACK_VAR(screenRows,"screenRows");
		HX_STACK_LINE(1569)
		int screenColumns = Buffer->columns;		HX_STACK_VAR(screenColumns,"screenColumns");
		HX_STACK_LINE(1572)
		if (((screenXInTiles < (int)0))){
			HX_STACK_LINE(1574)
			screenXInTiles = (int)0;
		}
		HX_STACK_LINE(1576)
		if (((screenXInTiles > (this->widthInTiles - screenColumns)))){
			HX_STACK_LINE(1578)
			screenXInTiles = (this->widthInTiles - screenColumns);
		}
		HX_STACK_LINE(1580)
		if (((screenYInTiles < (int)0))){
			HX_STACK_LINE(1582)
			screenYInTiles = (int)0;
		}
		HX_STACK_LINE(1584)
		if (((screenYInTiles > (this->heightInTiles - screenRows)))){
			HX_STACK_LINE(1586)
			screenYInTiles = (this->heightInTiles - screenRows);
		}
		HX_STACK_LINE(1589)
		int rowIndex = ((screenYInTiles * this->widthInTiles) + screenXInTiles);		HX_STACK_VAR(rowIndex,"rowIndex");
		HX_STACK_LINE(1590)
		this->_flashPoint->y = (int)0;
		HX_STACK_LINE(1591)
		int row = (int)0;		HX_STACK_VAR(row,"row");
		HX_STACK_LINE(1592)
		int column;		HX_STACK_VAR(column,"column");
		HX_STACK_LINE(1593)
		int columnIndex;		HX_STACK_VAR(columnIndex,"columnIndex");
		HX_STACK_LINE(1594)
		::flixel::tile::FlxTile tile;		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(1597)
		::openfl::_legacy::display::BitmapData debugTile;		HX_STACK_VAR(debugTile,"debugTile");
		HX_STACK_LINE(1600)
		while((true)){
			HX_STACK_LINE(1600)
			if ((!(((row < screenRows))))){
				HX_STACK_LINE(1600)
				break;
			}
			HX_STACK_LINE(1602)
			columnIndex = rowIndex;
			HX_STACK_LINE(1603)
			column = (int)0;
			HX_STACK_LINE(1604)
			this->_flashPoint->x = (int)0;
			HX_STACK_LINE(1606)
			while((true)){
				HX_STACK_LINE(1606)
				if ((!(((column < screenColumns))))){
					HX_STACK_LINE(1606)
					break;
				}
				HX_STACK_LINE(1644)
				tileID = this->_rectIDs->__get(columnIndex);
				HX_STACK_LINE(1646)
				if (((tileID != (int)-1))){
					HX_STACK_LINE(1648)
					drawX = (this->_helperPoint->x + (hx::Mod(columnIndex,this->widthInTiles) * this->_scaledTileWidth));
					HX_STACK_LINE(1649)
					int _g = ::Math_obj::floor((Float(columnIndex) / Float(this->widthInTiles)));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(1649)
					Float _g1 = (_g * this->_scaledTileHeight);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(1649)
					Float _g2 = (this->_helperPoint->y + _g1);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(1649)
					drawY = _g2;
					HX_STACK_LINE(1651)
					int _g3 = (currIndex)++;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(1651)
					if ((this->pixelPerfectRender)){
						HX_STACK_LINE(1651)
						currDrawData[_g3] = ::Math_obj::floor(drawX);
					}
					else{
						HX_STACK_LINE(1651)
						currDrawData[_g3] = drawX;
					}
					HX_STACK_LINE(1652)
					int _g4 = (currIndex)++;		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(1652)
					if ((this->pixelPerfectRender)){
						HX_STACK_LINE(1652)
						currDrawData[_g4] = ::Math_obj::floor(drawY);
					}
					else{
						HX_STACK_LINE(1652)
						currDrawData[_g4] = drawY;
					}
					HX_STACK_LINE(1653)
					int _g5 = (currIndex)++;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(1653)
					currDrawData[_g5] = tileID;
					HX_STACK_LINE(1656)
					int _g6 = (currIndex)++;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(1656)
					currDrawData[_g6] = hackScaleX;
					HX_STACK_LINE(1657)
					int _g7 = (currIndex)++;		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(1657)
					currDrawData[_g7] = (int)0;
					HX_STACK_LINE(1658)
					int _g8 = (currIndex)++;		HX_STACK_VAR(_g8,"_g8");
					HX_STACK_LINE(1658)
					currDrawData[_g8] = (int)0;
					HX_STACK_LINE(1660)
					int _g9 = (currIndex)++;		HX_STACK_VAR(_g9,"_g9");
					HX_STACK_LINE(1660)
					currDrawData[_g9] = hackScaleY;
					HX_STACK_LINE(1663)
					int _g10 = (currIndex)++;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(1663)
					currDrawData[_g10] = 1.0;
				}
				HX_STACK_LINE(1670)
				(column)++;
				HX_STACK_LINE(1671)
				(columnIndex)++;
			}
			HX_STACK_LINE(1677)
			hx::AddEq(rowIndex,this->widthInTiles);
			HX_STACK_LINE(1678)
			(row)++;
		}
		HX_STACK_LINE(1682)
		drawItem->position = currIndex;
		HX_STACK_LINE(1685)
		Buffer->x = (screenXInTiles * this->_scaledTileWidth);
		HX_STACK_LINE(1686)
		Buffer->y = (screenYInTiles * this->_scaledTileHeight);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,drawTilemap,(void))

Void FlxTilemap_obj::simplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","simplifyPath",0x8a506712,"flixel.tile.FlxTilemap.simplifyPath","flixel/tile/FlxTilemap.hx",1720,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1721)
		Float deltaPrevious;		HX_STACK_VAR(deltaPrevious,"deltaPrevious");
		HX_STACK_LINE(1722)
		Float deltaNext;		HX_STACK_VAR(deltaNext,"deltaNext");
		HX_STACK_LINE(1723)
		::flixel::util::FlxPoint last = Points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(last,"last");
		HX_STACK_LINE(1724)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1725)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1726)
		int l = (Points->length - (int)1);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1728)
		while((true)){
			HX_STACK_LINE(1728)
			if ((!(((i < l))))){
				HX_STACK_LINE(1728)
				break;
			}
			HX_STACK_LINE(1730)
			node = Points->__get(i).StaticCast< ::flixel::util::FlxPoint >();
			HX_STACK_LINE(1731)
			deltaPrevious = (Float(((node->x - last->x))) / Float(((node->y - last->y))));
			HX_STACK_LINE(1732)
			deltaNext = (Float(((node->x - Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->x))) / Float(((node->y - Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->y))));
			HX_STACK_LINE(1734)
			if (((bool((bool((last->x == Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->x)) || bool((last->y == Points->__get((i + (int)1)).StaticCast< ::flixel::util::FlxPoint >()->y)))) || bool((deltaPrevious == deltaNext))))){
				HX_STACK_LINE(1736)
				Points[i] = null();
			}
			else{
				HX_STACK_LINE(1740)
				last = node;
			}
			HX_STACK_LINE(1743)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,simplifyPath,(void))

Void FlxTilemap_obj::raySimplifyPath( Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","raySimplifyPath",0xc5bc2714,"flixel.tile.FlxTilemap.raySimplifyPath","flixel/tile/FlxTilemap.hx",1753,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1754)
		::flixel::util::FlxPoint source = Points->__get((int)0).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(1755)
		int lastIndex = (int)-1;		HX_STACK_VAR(lastIndex,"lastIndex");
		HX_STACK_LINE(1756)
		::flixel::util::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(1757)
		int i = (int)1;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1758)
		int l = Points->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(1760)
		while((true)){
			HX_STACK_LINE(1760)
			if ((!(((i < l))))){
				HX_STACK_LINE(1760)
				break;
			}
			HX_STACK_LINE(1762)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1762)
			::flixel::util::FlxPoint _g1 = Points->__get(_g).StaticCast< ::flixel::util::FlxPoint >();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1762)
			node = _g1;
			HX_STACK_LINE(1764)
			if (((node == null()))){
				HX_STACK_LINE(1766)
				continue;
			}
			HX_STACK_LINE(1769)
			if ((this->ray(source,node,this->_point,null()))){
				HX_STACK_LINE(1771)
				if (((lastIndex >= (int)0))){
					HX_STACK_LINE(1773)
					Points[lastIndex] = null();
				}
			}
			else{
				HX_STACK_LINE(1778)
				source = Points->__get(lastIndex).StaticCast< ::flixel::util::FlxPoint >();
			}
			HX_STACK_LINE(1781)
			lastIndex = (i - (int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,raySimplifyPath,(void))

Array< int > FlxTilemap_obj::computePathDistance( int StartIndex,int EndIndex,bool WideDiagonal,hx::Null< bool >  __o_StopOnEnd){
bool StopOnEnd = __o_StopOnEnd.Default(true);
	HX_STACK_FRAME("flixel.tile.FlxTilemap","computePathDistance",0x95b706cd,"flixel.tile.FlxTilemap.computePathDistance","flixel/tile/FlxTilemap.hx",1796,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(StartIndex,"StartIndex")
	HX_STACK_ARG(EndIndex,"EndIndex")
	HX_STACK_ARG(WideDiagonal,"WideDiagonal")
	HX_STACK_ARG(StopOnEnd,"StopOnEnd")
{
		HX_STACK_LINE(1799)
		int mapSize = (this->widthInTiles * this->heightInTiles);		HX_STACK_VAR(mapSize,"mapSize");
		HX_STACK_LINE(1800)
		Array< int > distances = Array_obj< int >::__new();		HX_STACK_VAR(distances,"distances");
		HX_STACK_LINE(1801)
		::flixel::util::FlxArrayUtil_obj::setLength_Int(distances,mapSize);
		HX_STACK_LINE(1802)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1804)
		while((true)){
			HX_STACK_LINE(1804)
			if ((!(((i < mapSize))))){
				HX_STACK_LINE(1804)
				break;
			}
			HX_STACK_LINE(1806)
			if (((this->_tileObjects->__get(this->_data->__get(i)).StaticCast< ::flixel::tile::FlxTile >()->allowCollisions != (int)0))){
				HX_STACK_LINE(1808)
				distances[i] = (int)-2;
			}
			else{
				HX_STACK_LINE(1812)
				distances[i] = (int)-1;
			}
			HX_STACK_LINE(1814)
			(i)++;
		}
		HX_STACK_LINE(1817)
		distances[StartIndex] = (int)0;
		HX_STACK_LINE(1818)
		int distance = (int)1;		HX_STACK_VAR(distance,"distance");
		HX_STACK_LINE(1819)
		Array< int > neighbors = Array_obj< int >::__new().Add(StartIndex);		HX_STACK_VAR(neighbors,"neighbors");
		HX_STACK_LINE(1820)
		Array< int > current;		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1821)
		int currentIndex;		HX_STACK_VAR(currentIndex,"currentIndex");
		HX_STACK_LINE(1822)
		bool left;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(1823)
		bool right;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(1824)
		bool up;		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(1825)
		bool down;		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(1826)
		int currentLength;		HX_STACK_VAR(currentLength,"currentLength");
		HX_STACK_LINE(1827)
		bool foundEnd = false;		HX_STACK_VAR(foundEnd,"foundEnd");
		HX_STACK_LINE(1829)
		while((true)){
			HX_STACK_LINE(1829)
			if ((!(((neighbors->length > (int)0))))){
				HX_STACK_LINE(1829)
				break;
			}
			HX_STACK_LINE(1831)
			current = neighbors;
			HX_STACK_LINE(1832)
			Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1832)
			neighbors = _g;
			HX_STACK_LINE(1834)
			i = (int)0;
			HX_STACK_LINE(1835)
			currentLength = current->length;
			HX_STACK_LINE(1836)
			while((true)){
				HX_STACK_LINE(1836)
				if ((!(((i < currentLength))))){
					HX_STACK_LINE(1836)
					break;
				}
				HX_STACK_LINE(1838)
				int _g1 = (i)++;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1838)
				int _g2 = current->__get(_g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(1838)
				currentIndex = _g2;
				HX_STACK_LINE(1840)
				int _g3 = ::Std_obj::_int(EndIndex);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(1840)
				if (((currentIndex == _g3))){
					HX_STACK_LINE(1842)
					foundEnd = true;
					HX_STACK_LINE(1843)
					if ((StopOnEnd)){
						HX_STACK_LINE(1845)
						neighbors = Array_obj< int >::__new();
						HX_STACK_LINE(1846)
						break;
					}
				}
				HX_STACK_LINE(1851)
				left = (hx::Mod(currentIndex,this->widthInTiles) > (int)0);
				HX_STACK_LINE(1852)
				right = (hx::Mod(currentIndex,this->widthInTiles) < (this->widthInTiles - (int)1));
				HX_STACK_LINE(1853)
				up = ((Float(currentIndex) / Float(this->widthInTiles)) > (int)0);
				HX_STACK_LINE(1854)
				down = ((Float(currentIndex) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));
				HX_STACK_LINE(1856)
				int index;		HX_STACK_VAR(index,"index");
				HX_STACK_LINE(1858)
				if ((up)){
					HX_STACK_LINE(1860)
					index = (currentIndex - this->widthInTiles);
					HX_STACK_LINE(1862)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(1864)
						distances[index] = distance;
						HX_STACK_LINE(1865)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(1868)
				if ((right)){
					HX_STACK_LINE(1870)
					index = (currentIndex + (int)1);
					HX_STACK_LINE(1872)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(1874)
						distances[index] = distance;
						HX_STACK_LINE(1875)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(1878)
				if ((down)){
					HX_STACK_LINE(1880)
					index = (currentIndex + this->widthInTiles);
					HX_STACK_LINE(1882)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(1884)
						distances[index] = distance;
						HX_STACK_LINE(1885)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(1888)
				if ((left)){
					HX_STACK_LINE(1890)
					index = (currentIndex - (int)1);
					HX_STACK_LINE(1892)
					if (((distances->__get(index) == (int)-1))){
						HX_STACK_LINE(1894)
						distances[index] = distance;
						HX_STACK_LINE(1895)
						neighbors->push(index);
					}
				}
				HX_STACK_LINE(1898)
				if (((bool(up) && bool(right)))){
					HX_STACK_LINE(1900)
					index = ((currentIndex - this->widthInTiles) + (int)1);
					HX_STACK_LINE(1902)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
						HX_STACK_LINE(1904)
						distances[index] = distance;
						HX_STACK_LINE(1905)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(1907)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(1909)
							distances[index] = distance;
							HX_STACK_LINE(1910)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(1913)
				if (((bool(right) && bool(down)))){
					HX_STACK_LINE(1915)
					index = ((currentIndex + this->widthInTiles) + (int)1);
					HX_STACK_LINE(1917)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex + (int)1)) >= (int)-1))))){
						HX_STACK_LINE(1919)
						distances[index] = distance;
						HX_STACK_LINE(1920)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(1922)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(1924)
							distances[index] = distance;
							HX_STACK_LINE(1925)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(1928)
				if (((bool(left) && bool(down)))){
					HX_STACK_LINE(1930)
					index = ((currentIndex + this->widthInTiles) - (int)1);
					HX_STACK_LINE(1932)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex + this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
						HX_STACK_LINE(1934)
						distances[index] = distance;
						HX_STACK_LINE(1935)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(1937)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(1939)
							distances[index] = distance;
							HX_STACK_LINE(1940)
							neighbors->push(index);
						}
					}
				}
				HX_STACK_LINE(1943)
				if (((bool(up) && bool(left)))){
					HX_STACK_LINE(1945)
					index = ((currentIndex - this->widthInTiles) - (int)1);
					HX_STACK_LINE(1947)
					if (((bool((bool((bool(WideDiagonal) && bool((distances->__get(index) == (int)-1)))) && bool((distances->__get((currentIndex - this->widthInTiles)) >= (int)-1)))) && bool((distances->__get((currentIndex - (int)1)) >= (int)-1))))){
						HX_STACK_LINE(1949)
						distances[index] = distance;
						HX_STACK_LINE(1950)
						neighbors->push(index);
					}
					else{
						HX_STACK_LINE(1952)
						if (((bool(!(WideDiagonal)) && bool((distances->__get(index) == (int)-1))))){
							HX_STACK_LINE(1954)
							distances[index] = distance;
							HX_STACK_LINE(1955)
							neighbors->push(index);
						}
					}
				}
			}
			HX_STACK_LINE(1960)
			(distance)++;
		}
		HX_STACK_LINE(1962)
		if ((!(foundEnd))){
			HX_STACK_LINE(1964)
			distances = null();
		}
		HX_STACK_LINE(1967)
		return distances;
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTilemap_obj,computePathDistance,return )

Void FlxTilemap_obj::walkPath( Array< int > Data,int Start,Array< ::Dynamic > Points){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","walkPath",0xd33d3b12,"flixel.tile.FlxTilemap.walkPath","flixel/tile/FlxTilemap.hx",1978,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Data,"Data")
		HX_STACK_ARG(Start,"Start")
		HX_STACK_ARG(Points,"Points")
		HX_STACK_LINE(1979)
		::flixel::util::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(1979)
		{
			HX_STACK_LINE(1979)
			int _g = ::Math_obj::floor(hx::Mod(Start,this->widthInTiles));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1979)
			Float _g1 = (_g * this->_scaledTileWidth);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(1979)
			Float _g2 = (this->x + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(1979)
			Float X = (_g2 + (this->_scaledTileWidth * 0.5));		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(1979)
			int _g3 = ::Math_obj::floor((Float(Start) / Float(this->widthInTiles)));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(1979)
			Float _g4 = (_g3 * this->_scaledTileHeight);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(1979)
			Float _g5 = (this->y + _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(1979)
			Float Y = (_g5 + (this->_scaledTileHeight * 0.5));		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(1979)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->__Field(HX_CSTRING("set"),true)(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(1979)
			point->_inPool = false;
			HX_STACK_LINE(1979)
			_g6 = point;
		}
		HX_STACK_LINE(1979)
		Points->push(_g6);
		HX_STACK_LINE(1981)
		if (((Data->__get(Start) == (int)0))){
			HX_STACK_LINE(1983)
			return null();
		}
		HX_STACK_LINE(1987)
		bool left = (hx::Mod(Start,this->widthInTiles) > (int)0);		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(1988)
		bool right = (hx::Mod(Start,this->widthInTiles) < (this->widthInTiles - (int)1));		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(1989)
		bool up = ((Float(Start) / Float(this->widthInTiles)) > (int)0);		HX_STACK_VAR(up,"up");
		HX_STACK_LINE(1990)
		bool down = ((Float(Start) / Float(this->widthInTiles)) < (this->heightInTiles - (int)1));		HX_STACK_VAR(down,"down");
		HX_STACK_LINE(1992)
		int current = Data->__get(Start);		HX_STACK_VAR(current,"current");
		HX_STACK_LINE(1993)
		int i;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(1995)
		if ((up)){
			HX_STACK_LINE(1997)
			i = (Start - this->widthInTiles);
			HX_STACK_LINE(1999)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2001)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2004)
		if ((right)){
			HX_STACK_LINE(2006)
			i = (Start + (int)1);
			HX_STACK_LINE(2008)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2010)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2013)
		if ((down)){
			HX_STACK_LINE(2015)
			i = (Start + this->widthInTiles);
			HX_STACK_LINE(2017)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2019)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2022)
		if ((left)){
			HX_STACK_LINE(2024)
			i = (Start - (int)1);
			HX_STACK_LINE(2026)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2028)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2031)
		if (((bool(up) && bool(right)))){
			HX_STACK_LINE(2033)
			i = ((Start - this->widthInTiles) + (int)1);
			HX_STACK_LINE(2035)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2037)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2040)
		if (((bool(right) && bool(down)))){
			HX_STACK_LINE(2042)
			i = ((Start + this->widthInTiles) + (int)1);
			HX_STACK_LINE(2044)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2046)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2049)
		if (((bool(left) && bool(down)))){
			HX_STACK_LINE(2051)
			i = ((Start + this->widthInTiles) - (int)1);
			HX_STACK_LINE(2053)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2055)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2058)
		if (((bool(up) && bool(left)))){
			HX_STACK_LINE(2060)
			i = ((Start - this->widthInTiles) - (int)1);
			HX_STACK_LINE(2062)
			if (((bool((bool((i >= (int)0)) && bool((Data->__get(i) >= (int)0)))) && bool((Data->__get(i) < current))))){
				HX_STACK_LINE(2064)
				return null(this->walkPath(Data,i,Points));
			}
		}
		HX_STACK_LINE(2068)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTilemap_obj,walkPath,(void))

Void FlxTilemap_obj::updateTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","updateTile",0x18c3429b,"flixel.tile.FlxTilemap.updateTile","flixel/tile/FlxTilemap.hx",2077,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(2078)
		::flixel::tile::FlxTile tile = this->_tileObjects->__get(this->_data->__get(Index)).StaticCast< ::flixel::tile::FlxTile >();		HX_STACK_VAR(tile,"tile");
		HX_STACK_LINE(2080)
		if (((bool((tile == null())) || bool(!(tile->visible))))){
			HX_STACK_LINE(2085)
			this->_rectIDs[Index] = (int)-1;
			HX_STACK_LINE(2088)
			return null();
		}
		HX_STACK_LINE(2102)
		this->_rectIDs[Index] = this->framesData->frames->__get((this->_data->__get(Index) - this->_startingIndex)).StaticCast< ::flixel::system::layer::frames::FlxFrame >()->tileID;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,updateTile,(void))

Void FlxTilemap_obj::autoTile( int Index){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","autoTile",0xabb4ce01,"flixel.tile.FlxTilemap.autoTile","flixel/tile/FlxTilemap.hx",2112,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Index,"Index")
		HX_STACK_LINE(2113)
		if (((this->_data->__get(Index) == (int)0))){
			HX_STACK_LINE(2115)
			return null();
		}
		HX_STACK_LINE(2118)
		this->_data[Index] = (int)0;
		HX_STACK_LINE(2121)
		if (((bool(((Index - this->widthInTiles) < (int)0)) || bool((this->_data->__get((Index - this->widthInTiles)) > (int)0))))){
			HX_STACK_LINE(2123)
			hx::AddEq(this->_data[Index],(int)1);
		}
		HX_STACK_LINE(2126)
		if (((bool((hx::Mod(Index,this->widthInTiles) >= (this->widthInTiles - (int)1))) || bool((this->_data->__get((Index + (int)1)) > (int)0))))){
			HX_STACK_LINE(2128)
			hx::AddEq(this->_data[Index],(int)2);
		}
		HX_STACK_LINE(2131)
		int _g = ::Std_obj::_int((Index + this->widthInTiles));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2131)
		if (((  ((!(((_g >= this->totalTiles))))) ? bool((this->_data->__get((Index + this->widthInTiles)) > (int)0)) : bool(true) ))){
			HX_STACK_LINE(2133)
			hx::AddEq(this->_data[Index],(int)4);
		}
		HX_STACK_LINE(2136)
		if (((bool((hx::Mod(Index,this->widthInTiles) <= (int)0)) || bool((this->_data->__get((Index - (int)1)) > (int)0))))){
			HX_STACK_LINE(2138)
			hx::AddEq(this->_data[Index],(int)8);
		}
		HX_STACK_LINE(2142)
		if (((bool((this->_auto == (int)2)) && bool((this->_data->__get(Index) == (int)15))))){
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,int &Index){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",2145,0x448feb74)
					{
						HX_STACK_LINE(2145)
						int _g1 = ::Std_obj::_int((Index + __this->widthInTiles));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(2145)
						return (_g1 < __this->totalTiles);
					}
					return null();
				}
			};
			HX_STACK_LINE(2145)
			if (((  (((  (((hx::Mod(Index,this->widthInTiles) > (int)0))) ? bool(_Function_2_1::Block(this,Index)) : bool(false) ))) ? bool((this->_data->__get(((Index + this->widthInTiles) - (int)1)) <= (int)0)) : bool(false) ))){
				HX_STACK_LINE(2147)
				this->_data[Index] = (int)1;
			}
			HX_STACK_LINE(2150)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) > (int)0)) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) - (int)1)) <= (int)0))))){
				HX_STACK_LINE(2152)
				this->_data[Index] = (int)2;
			}
			HX_STACK_LINE(2155)
			if (((bool((bool((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1))) && bool(((Index - this->widthInTiles) >= (int)0)))) && bool((this->_data->__get(((Index - this->widthInTiles) + (int)1)) <= (int)0))))){
				HX_STACK_LINE(2157)
				this->_data[Index] = (int)4;
			}
			struct _Function_2_2{
				inline static bool Block( hx::ObjectPtr< ::flixel::tile::FlxTilemap_obj > __this,int &Index){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/tile/FlxTilemap.hx",2160,0x448feb74)
					{
						HX_STACK_LINE(2160)
						int _g2 = ::Std_obj::_int((Index + __this->widthInTiles));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(2160)
						return (_g2 < __this->totalTiles);
					}
					return null();
				}
			};
			HX_STACK_LINE(2160)
			if (((  (((  (((hx::Mod(Index,this->widthInTiles) < (this->widthInTiles - (int)1)))) ? bool(_Function_2_2::Block(this,Index)) : bool(false) ))) ? bool((this->_data->__get(((Index + this->widthInTiles) + (int)1)) <= (int)0)) : bool(false) ))){
				HX_STACK_LINE(2162)
				this->_data[Index] = (int)8;
			}
		}
		HX_STACK_LINE(2166)
		hx::AddEq(this->_data[Index],(int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,autoTile,(void))

::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::createBuffer( ::flixel::FlxCamera camera){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","createBuffer",0x170b42e0,"flixel.tile.FlxTilemap.createBuffer","flixel/tile/FlxTilemap.hx",2170,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(camera,"camera")
	HX_STACK_LINE(2171)
	::flixel::tile::FlxTilemapBuffer buffer = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(2172)
	buffer->pixelPerfectRender = this->pixelPerfectRender;
	HX_STACK_LINE(2173)
	return buffer;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,createBuffer,return )

Void FlxTilemap_obj::onGameResize( int _,int _1){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","onGameResize",0x47562b49,"flixel.tile.FlxTilemap.onGameResize","flixel/tile/FlxTilemap.hx",2181,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_ARG(_1,"_1")
		HX_STACK_LINE(2181)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2181)
		int _g = this->get_cameras()->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2181)
		while((true)){
			HX_STACK_LINE(2181)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(2181)
				break;
			}
			HX_STACK_LINE(2181)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(2183)
			Array< ::Dynamic > _g2 = this->get_cameras();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2183)
			::flixel::FlxCamera camera = _g2->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(2184)
			::flixel::tile::FlxTilemapBuffer buffer = this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(2187)
			::flixel::tile::FlxTilemap_obj::_helperBuffer->updateColumns(this->_tileWidth,this->widthInTiles,this->scale->x,camera);
			HX_STACK_LINE(2188)
			::flixel::tile::FlxTilemap_obj::_helperBuffer->updateRows(this->_tileHeight,this->heightInTiles,this->scale->y,camera);
			HX_STACK_LINE(2191)
			if (((bool((bool((buffer == null())) || bool((::flixel::tile::FlxTilemap_obj::_helperBuffer->columns != buffer->columns)))) || bool((::flixel::tile::FlxTilemap_obj::_helperBuffer->rows != buffer->rows))))){
				HX_STACK_LINE(2193)
				if (((buffer != null()))){
					HX_STACK_LINE(2194)
					buffer->destroy();
				}
				HX_STACK_LINE(2196)
				{
					HX_STACK_LINE(2196)
					::flixel::tile::FlxTilemapBuffer buffer1 = ::flixel::tile::FlxTilemapBuffer_obj::__new(this->_tileWidth,this->_tileHeight,this->widthInTiles,this->heightInTiles,camera,this->scale->x,this->scale->y);		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(2196)
					buffer1->pixelPerfectRender = this->pixelPerfectRender;
					HX_STACK_LINE(2196)
					this->_buffers[i] = buffer1;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTilemap_obj,onGameResize,(void))

::flixel::util::loaders::CachedGraphics FlxTilemap_obj::set_cachedGraphics( ::flixel::util::loaders::CachedGraphics Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_cachedGraphics",0xb8bccace,"flixel.tile.FlxTilemap.set_cachedGraphics","flixel/tile/FlxTilemap.hx",2206,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(2207)
	::flixel::util::loaders::CachedGraphics oldCached = this->cachedGraphics;		HX_STACK_VAR(oldCached,"oldCached");
	HX_STACK_LINE(2209)
	if (((bool((this->cachedGraphics != Value)) && bool((Value != null()))))){
		HX_STACK_LINE(2211)
		::flixel::util::loaders::CachedGraphics _g = Value;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2211)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2211)
		_g->set_useCount((_g1 + (int)1));
		HX_STACK_LINE(2211)
		_g1;
	}
	HX_STACK_LINE(2214)
	if (((bool((oldCached != null())) && bool((oldCached != Value))))){
		HX_STACK_LINE(2216)
		::flixel::util::loaders::CachedGraphics _g = oldCached;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2216)
		int _g1 = _g->useCount;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2216)
		_g->set_useCount((_g1 - (int)1));
		HX_STACK_LINE(2216)
		_g1;
	}
	HX_STACK_LINE(2219)
	return this->cachedGraphics = Value;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,set_cachedGraphics,return )

bool FlxTilemap_obj::set_pixelPerfectRender( bool Value){
	HX_STACK_FRAME("flixel.tile.FlxTilemap","set_pixelPerfectRender",0x5122f25e,"flixel.tile.FlxTilemap.set_pixelPerfectRender","flixel/tile/FlxTilemap.hx",2223,0x448feb74)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(2224)
	if (((this->_buffers != null()))){
		HX_STACK_LINE(2226)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2226)
		Array< ::Dynamic > _g1 = this->_buffers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(2226)
		while((true)){
			HX_STACK_LINE(2226)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(2226)
				break;
			}
			HX_STACK_LINE(2226)
			::flixel::tile::FlxTilemapBuffer buffer = _g1->__get(_g).StaticCast< ::flixel::tile::FlxTilemapBuffer >();		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(2226)
			++(_g);
			HX_STACK_LINE(2228)
			buffer->pixelPerfectRender = Value;
		}
	}
	HX_STACK_LINE(2232)
	return this->pixelPerfectRender = Value;
}


Void FlxTilemap_obj::setScaleXYCallback( ::flixel::util::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXYCallback",0x2287ee32,"flixel.tile.FlxTilemap.setScaleXYCallback","flixel/tile/FlxTilemap.hx",2236,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(2237)
		this->setScaleXCallback(Scale);
		HX_STACK_LINE(2238)
		this->setScaleYCallback(Scale);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXYCallback,(void))

Void FlxTilemap_obj::setScaleXCallback( ::flixel::util::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleXCallback",0x45b95971,"flixel.tile.FlxTilemap.setScaleXCallback","flixel/tile/FlxTilemap.hx",2242,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(2243)
		this->_scaledTileWidth = (this->_tileWidth * this->scale->x);
		HX_STACK_LINE(2244)
		this->set_width((this->widthInTiles * this->_scaledTileWidth));
		HX_STACK_LINE(2246)
		Array< ::Dynamic > _g = this->get_cameras();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2246)
		if (((_g != null()))){
			HX_STACK_LINE(2248)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2248)
			int _g2 = this->get_cameras()->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2248)
			while((true)){
				HX_STACK_LINE(2248)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(2248)
					break;
				}
				HX_STACK_LINE(2248)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2250)
				if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() != null()))){
					HX_STACK_LINE(2252)
					Array< ::Dynamic > _g11 = this->get_cameras();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(2252)
					::flixel::FlxCamera _g21 = _g11->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(2252)
					this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->updateColumns(this->_tileWidth,this->widthInTiles,this->scale->x,_g21);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleXCallback,(void))

Void FlxTilemap_obj::setScaleYCallback( ::flixel::util::FlxPoint Scale){
{
		HX_STACK_FRAME("flixel.tile.FlxTilemap","setScaleYCallback",0x18aac272,"flixel.tile.FlxTilemap.setScaleYCallback","flixel/tile/FlxTilemap.hx",2259,0x448feb74)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Scale,"Scale")
		HX_STACK_LINE(2260)
		this->_scaledTileHeight = (this->_tileHeight * this->scale->y);
		HX_STACK_LINE(2261)
		this->set_height((this->heightInTiles * this->_scaledTileHeight));
		HX_STACK_LINE(2263)
		Array< ::Dynamic > _g = this->get_cameras();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(2263)
		if (((_g != null()))){
			HX_STACK_LINE(2265)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(2265)
			int _g2 = this->get_cameras()->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(2265)
			while((true)){
				HX_STACK_LINE(2265)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(2265)
					break;
				}
				HX_STACK_LINE(2265)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(2267)
				if (((this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >() != null()))){
					HX_STACK_LINE(2269)
					Array< ::Dynamic > _g11 = this->get_cameras();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(2269)
					::flixel::FlxCamera _g21 = _g11->__get(i).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(2269)
					this->_buffers->__get(i).StaticCast< ::flixel::tile::FlxTilemapBuffer >()->updateRows(this->_tileHeight,this->heightInTiles,this->scale->y,_g21);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTilemap_obj,setScaleYCallback,(void))

int FlxTilemap_obj::OFF;

int FlxTilemap_obj::AUTO;

int FlxTilemap_obj::ALT;

::flixel::tile::FlxTilemapBuffer FlxTilemap_obj::_helperBuffer;


FlxTilemap_obj::FlxTilemap_obj()
{
}

void FlxTilemap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTilemap);
	HX_MARK_MEMBER_NAME(_auto,"auto");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(totalTiles,"totalTiles");
	HX_MARK_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_MARK_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(region,"region");
	HX_MARK_MEMBER_NAME(framesData,"framesData");
	HX_MARK_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_MARK_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_MARK_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_MARK_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_buffers,"_buffers");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_MARK_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_MARK_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_MARK_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_MARK_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_MARK_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_MARK_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_MARK_MEMBER_NAME(_rectIDs,"_rectIDs");
	::flixel::FlxObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTilemap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_auto,"auto");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(totalTiles,"totalTiles");
	HX_VISIT_MEMBER_NAME(tileScaleHack,"tileScaleHack");
	HX_VISIT_MEMBER_NAME(customTileRemap,"customTileRemap");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(region,"region");
	HX_VISIT_MEMBER_NAME(framesData,"framesData");
	HX_VISIT_MEMBER_NAME(cachedGraphics,"cachedGraphics");
	HX_VISIT_MEMBER_NAME(_randomIndices,"_randomIndices");
	HX_VISIT_MEMBER_NAME(_randomChoices,"_randomChoices");
	HX_VISIT_MEMBER_NAME(_randomLambda,"_randomLambda");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_buffers,"_buffers");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(_tileWidth,"_tileWidth");
	HX_VISIT_MEMBER_NAME(_tileHeight,"_tileHeight");
	HX_VISIT_MEMBER_NAME(_scaledTileWidth,"_scaledTileWidth");
	HX_VISIT_MEMBER_NAME(_scaledTileHeight,"_scaledTileHeight");
	HX_VISIT_MEMBER_NAME(_tileObjects,"_tileObjects");
	HX_VISIT_MEMBER_NAME(_startingIndex,"_startingIndex");
	HX_VISIT_MEMBER_NAME(_helperPoint,"_helperPoint");
	HX_VISIT_MEMBER_NAME(_rectIDs,"_rectIDs");
	::flixel::FlxObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTilemap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ray") ) { return ray_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { return _auto; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { return region; }
		if (HX_FIELD_EQ(inName,"follow") ) { return follow_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"loadMap") ) { return loadMap_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return getTile_dyn(); }
		if (HX_FIELD_EQ(inName,"setTile") ) { return setTile_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { return _buffers; }
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { return _rectIDs; }
		if (HX_FIELD_EQ(inName,"setDirty") ) { return setDirty_dyn(); }
		if (HX_FIELD_EQ(inName,"findPath") ) { return findPath_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		if (HX_FIELD_EQ(inName,"walkPath") ) { return walkPath_dyn(); }
		if (HX_FIELD_EQ(inName,"autoTile") ) { return autoTile_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return getBounds_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { return totalTiles; }
		if (HX_FIELD_EQ(inName,"framesData") ) { return framesData; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return _flashRect; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { return _tileWidth; }
		if (HX_FIELD_EQ(inName,"overlapsAt") ) { return overlapsAt_dyn(); }
		if (HX_FIELD_EQ(inName,"updateTile") ) { return updateTile_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return _flashPoint; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { return _tileHeight; }
		if (HX_FIELD_EQ(inName,"drawTilemap") ) { return drawTilemap_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return widthInTiles; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { return _tileObjects; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { return _helperPoint; }
		if (HX_FIELD_EQ(inName,"simplifyPath") ) { return simplifyPath_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"onGameResize") ) { return onGameResize_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { return _helperBuffer; }
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return heightInTiles; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { return tileScaleHack; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { return _randomLambda; }
		if (HX_FIELD_EQ(inName,"overlapsPoint") ) { return overlapsPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCoords") ) { return getTileCoords_dyn(); }
		if (HX_FIELD_EQ(inName,"updateBuffers") ) { return updateBuffers_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { return cachedGraphics; }
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { return _randomIndices; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { return _randomChoices; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { return _startingIndex; }
		if (HX_FIELD_EQ(inName,"getTileByIndex") ) { return getTileByIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileByIndex") ) { return setTileByIndex_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { return customTileRemap; }
		if (HX_FIELD_EQ(inName,"updateFrameData") ) { return updateFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"tileToFlxSprite") ) { return tileToFlxSprite_dyn(); }
		if (HX_FIELD_EQ(inName,"raySimplifyPath") ) { return raySimplifyPath_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { return _scaledTileWidth; }
		if (HX_FIELD_EQ(inName,"getTileInstances") ) { return getTileInstances_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { return _scaledTileHeight; }
		if (HX_FIELD_EQ(inName,"drawDebugOnCamera") ) { return drawDebugOnCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"getTileCollisions") ) { return getTileCollisions_dyn(); }
		if (HX_FIELD_EQ(inName,"setTileProperties") ) { return setTileProperties_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleXCallback") ) { return setScaleXCallback_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleYCallback") ) { return setScaleYCallback_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"set_cachedGraphics") ) { return set_cachedGraphics_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleXYCallback") ) { return setScaleXYCallback_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"computePathDistance") ) { return computePathDistance_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"overlapsWithCallback") ) { return overlapsWithCallback_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"setCustomTileMappings") ) { return setCustomTileMappings_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"set_pixelPerfectRender") ) { return set_pixelPerfectRender_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsCallback") ) { return tilemapOverlapsCallback_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"tilemapOverlapsAtCallback") ) { return tilemapOverlapsAtCallback_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTilemap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"auto") ) { _auto=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"region") ) { region=inValue.Cast< ::flixel::system::layer::Region >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_buffers") ) { _buffers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rectIDs") ) { _rectIDs=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalTiles") ) { totalTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"framesData") ) { framesData=inValue.Cast< ::flixel::system::layer::frames::FlxSpriteFrames >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast< ::openfl::_legacy::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileWidth") ) { _tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileHeight") ) { _tileHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileObjects") ) { _tileObjects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_helperPoint") ) { _helperPoint=inValue.Cast< ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_helperBuffer") ) { _helperBuffer=inValue.Cast< ::flixel::tile::FlxTilemapBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileScaleHack") ) { tileScaleHack=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomLambda") ) { _randomLambda=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"cachedGraphics") ) { if (inCallProp) return set_cachedGraphics(inValue);cachedGraphics=inValue.Cast< ::flixel::util::loaders::CachedGraphics >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomIndices") ) { _randomIndices=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_randomChoices") ) { _randomChoices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startingIndex") ) { _startingIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"customTileRemap") ) { customTileRemap=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_scaledTileWidth") ) { _scaledTileWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_scaledTileHeight") ) { _scaledTileHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTilemap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("auto"));
	outFields->push(HX_CSTRING("widthInTiles"));
	outFields->push(HX_CSTRING("heightInTiles"));
	outFields->push(HX_CSTRING("totalTiles"));
	outFields->push(HX_CSTRING("tileScaleHack"));
	outFields->push(HX_CSTRING("customTileRemap"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("region"));
	outFields->push(HX_CSTRING("framesData"));
	outFields->push(HX_CSTRING("cachedGraphics"));
	outFields->push(HX_CSTRING("_randomIndices"));
	outFields->push(HX_CSTRING("_randomChoices"));
	outFields->push(HX_CSTRING("_flashPoint"));
	outFields->push(HX_CSTRING("_flashRect"));
	outFields->push(HX_CSTRING("_buffers"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("_tileWidth"));
	outFields->push(HX_CSTRING("_tileHeight"));
	outFields->push(HX_CSTRING("_scaledTileWidth"));
	outFields->push(HX_CSTRING("_scaledTileHeight"));
	outFields->push(HX_CSTRING("_tileObjects"));
	outFields->push(HX_CSTRING("_startingIndex"));
	outFields->push(HX_CSTRING("_helperPoint"));
	outFields->push(HX_CSTRING("_rectIDs"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("OFF"),
	HX_CSTRING("AUTO"),
	HX_CSTRING("ALT"),
	HX_CSTRING("_helperBuffer"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_auto),HX_CSTRING("auto")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,widthInTiles),HX_CSTRING("widthInTiles")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,heightInTiles),HX_CSTRING("heightInTiles")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,totalTiles),HX_CSTRING("totalTiles")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,tileScaleHack),HX_CSTRING("tileScaleHack")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,customTileRemap),HX_CSTRING("customTileRemap")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(FlxTilemap_obj,scale),HX_CSTRING("scale")},
	{hx::fsObject /*::flixel::system::layer::Region*/ ,(int)offsetof(FlxTilemap_obj,region),HX_CSTRING("region")},
	{hx::fsObject /*::flixel::system::layer::frames::FlxSpriteFrames*/ ,(int)offsetof(FlxTilemap_obj,framesData),HX_CSTRING("framesData")},
	{hx::fsObject /*::flixel::util::loaders::CachedGraphics*/ ,(int)offsetof(FlxTilemap_obj,cachedGraphics),HX_CSTRING("cachedGraphics")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,_randomIndices),HX_CSTRING("_randomIndices")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_randomChoices),HX_CSTRING("_randomChoices")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTilemap_obj,_randomLambda),HX_CSTRING("_randomLambda")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_flashPoint),HX_CSTRING("_flashPoint")},
	{hx::fsObject /*::openfl::_legacy::geom::Rectangle*/ ,(int)offsetof(FlxTilemap_obj,_flashRect),HX_CSTRING("_flashRect")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_buffers),HX_CSTRING("_buffers")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,_data),HX_CSTRING("_data")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileWidth),HX_CSTRING("_tileWidth")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_tileHeight),HX_CSTRING("_tileHeight")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileWidth),HX_CSTRING("_scaledTileWidth")},
	{hx::fsFloat,(int)offsetof(FlxTilemap_obj,_scaledTileHeight),HX_CSTRING("_scaledTileHeight")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTilemap_obj,_tileObjects),HX_CSTRING("_tileObjects")},
	{hx::fsInt,(int)offsetof(FlxTilemap_obj,_startingIndex),HX_CSTRING("_startingIndex")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(FlxTilemap_obj,_helperPoint),HX_CSTRING("_helperPoint")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(FlxTilemap_obj,_rectIDs),HX_CSTRING("_rectIDs")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("auto"),
	HX_CSTRING("widthInTiles"),
	HX_CSTRING("heightInTiles"),
	HX_CSTRING("totalTiles"),
	HX_CSTRING("tileScaleHack"),
	HX_CSTRING("customTileRemap"),
	HX_CSTRING("scale"),
	HX_CSTRING("region"),
	HX_CSTRING("framesData"),
	HX_CSTRING("cachedGraphics"),
	HX_CSTRING("_randomIndices"),
	HX_CSTRING("_randomChoices"),
	HX_CSTRING("_randomLambda"),
	HX_CSTRING("_flashPoint"),
	HX_CSTRING("_flashRect"),
	HX_CSTRING("_buffers"),
	HX_CSTRING("_data"),
	HX_CSTRING("_tileWidth"),
	HX_CSTRING("_tileHeight"),
	HX_CSTRING("_scaledTileWidth"),
	HX_CSTRING("_scaledTileHeight"),
	HX_CSTRING("_tileObjects"),
	HX_CSTRING("_startingIndex"),
	HX_CSTRING("_helperPoint"),
	HX_CSTRING("_rectIDs"),
	HX_CSTRING("destroy"),
	HX_CSTRING("loadMap"),
	HX_CSTRING("setCustomTileMappings"),
	HX_CSTRING("drawDebugOnCamera"),
	HX_CSTRING("draw"),
	HX_CSTRING("getData"),
	HX_CSTRING("setDirty"),
	HX_CSTRING("findPath"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("tilemapOverlapsCallback"),
	HX_CSTRING("overlapsAt"),
	HX_CSTRING("tilemapOverlapsAtCallback"),
	HX_CSTRING("overlapsWithCallback"),
	HX_CSTRING("overlapsPoint"),
	HX_CSTRING("getTile"),
	HX_CSTRING("getTileByIndex"),
	HX_CSTRING("getTileCollisions"),
	HX_CSTRING("getTileInstances"),
	HX_CSTRING("getTileCoords"),
	HX_CSTRING("setTile"),
	HX_CSTRING("setTileByIndex"),
	HX_CSTRING("setTileProperties"),
	HX_CSTRING("follow"),
	HX_CSTRING("getBounds"),
	HX_CSTRING("ray"),
	HX_CSTRING("updateFrameData"),
	HX_CSTRING("tileToFlxSprite"),
	HX_CSTRING("updateBuffers"),
	HX_CSTRING("drawTilemap"),
	HX_CSTRING("simplifyPath"),
	HX_CSTRING("raySimplifyPath"),
	HX_CSTRING("computePathDistance"),
	HX_CSTRING("walkPath"),
	HX_CSTRING("updateTile"),
	HX_CSTRING("autoTile"),
	HX_CSTRING("createBuffer"),
	HX_CSTRING("onGameResize"),
	HX_CSTRING("set_cachedGraphics"),
	HX_CSTRING("set_pixelPerfectRender"),
	HX_CSTRING("setScaleXYCallback"),
	HX_CSTRING("setScaleXCallback"),
	HX_CSTRING("setScaleYCallback"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::OFF,"OFF");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::AUTO,"AUTO");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::OFF,"OFF");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::AUTO,"AUTO");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(FlxTilemap_obj::_helperBuffer,"_helperBuffer");
};

#endif

Class FlxTilemap_obj::__mClass;

void FlxTilemap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.tile.FlxTilemap"), hx::TCanCast< FlxTilemap_obj> ,sStaticFields,sMemberFields,
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

void FlxTilemap_obj::__boot()
{
	OFF= (int)0;
	AUTO= (int)1;
	ALT= (int)2;
	_helperBuffer= ::Type_obj::createEmptyInstance(hx::ClassOf< ::flixel::tile::FlxTilemapBuffer >());
}

} // end namespace flixel
} // end namespace tile
