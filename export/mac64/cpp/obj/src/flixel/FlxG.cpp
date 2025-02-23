#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
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
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_system_FlxQuadTree
#include <flixel/system/FlxQuadTree.h>
#endif
#ifndef INCLUDED_flixel_system_FlxVersion
#include <flixel/system/FlxVersion.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_InputFrontEnd
#include <flixel/system/frontEnds/InputFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_PluginFrontEnd
#include <flixel/system/frontEnds/PluginFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_WatchFrontEnd
#include <flixel/system/frontEnds/WatchFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_RatioScaleMode
#include <flixel/system/scaleModes/RatioScaleMode.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_util_FlxCollision
#include <flixel/util/FlxCollision.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
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
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_display_StageDisplayState
#include <openfl/display/StageDisplayState.h>
#endif
namespace flixel{

Void FlxG_obj::__construct()
{
	return null();
}

//FlxG_obj::~FlxG_obj() { }

Dynamic FlxG_obj::__CreateEmpty() { return  new FlxG_obj; }
hx::ObjectPtr< FlxG_obj > FlxG_obj::__new()
{  hx::ObjectPtr< FlxG_obj > result = new FlxG_obj();
	result->__construct();
	return result;}

Dynamic FlxG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxG_obj > result = new FlxG_obj();
	result->__construct();
	return result;}

bool FlxG_obj::autoPause;

bool FlxG_obj::fixedTimestep;

Float FlxG_obj::timeScale;

int FlxG_obj::worldDivisions;

::flixel::FlxCamera FlxG_obj::camera;

::flixel::system::FlxVersion FlxG_obj::VERSION;

::flixel::FlxGame FlxG_obj::game;

int FlxG_obj::drawFramerate;

Float FlxG_obj::elapsed;

Float FlxG_obj::maxElapsed;

int FlxG_obj::width;

int FlxG_obj::height;

::flixel::system::scaleModes::BaseScaleMode FlxG_obj::scaleMode;

bool FlxG_obj::fullscreen;

::flixel::util::FlxRect FlxG_obj::worldBounds;

::flixel::util::FlxSave FlxG_obj::save;

::flixel::input::mouse::FlxMouse FlxG_obj::mouse;

::flixel::input::touch::FlxTouchManager FlxG_obj::touches;

Array< ::Dynamic > FlxG_obj::swipes;

::flixel::input::keyboard::FlxKeyboard FlxG_obj::keys;

::flixel::input::gamepad::FlxGamepadManager FlxG_obj::gamepads;

::flixel::system::frontEnds::InputFrontEnd FlxG_obj::inputs;

::flixel::system::frontEnds::ConsoleFrontEnd FlxG_obj::console;

::flixel::system::frontEnds::LogFrontEnd FlxG_obj::log;

::flixel::system::frontEnds::BitmapLogFrontEnd FlxG_obj::bitmapLog;

::flixel::system::frontEnds::WatchFrontEnd FlxG_obj::watch;

::flixel::system::frontEnds::DebuggerFrontEnd FlxG_obj::debugger;

::flixel::system::frontEnds::VCRFrontEnd FlxG_obj::vcr;

::flixel::system::frontEnds::BitmapFrontEnd FlxG_obj::bitmap;

::flixel::system::frontEnds::CameraFrontEnd FlxG_obj::cameras;

::flixel::system::frontEnds::PluginFrontEnd FlxG_obj::plugins;

::flixel::system::frontEnds::SoundFrontEnd FlxG_obj::sound;

::flixel::system::frontEnds::SignalFrontEnd FlxG_obj::signals;

::flixel::system::scaleModes::BaseScaleMode FlxG_obj::_scaleMode;

Void FlxG_obj::resizeGame( int Width,int Height){
{
		HX_STACK_FRAME("flixel.FlxG","resizeGame",0x80aafe0d,"flixel.FlxG.resizeGame","flixel/FlxG.hx",286,0x8e176836)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(286)
		::flixel::FlxG_obj::_scaleMode->onMeasure(Width,Height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,resizeGame,(void))

Void FlxG_obj::resetGame( ){
{
		HX_STACK_FRAME("flixel.FlxG","resetGame",0x7560e13a,"flixel.FlxG.resetGame","flixel/FlxG.hx",294,0x8e176836)
		HX_STACK_LINE(294)
		::flixel::FlxG_obj::game->_resetGame = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetGame,(void))

Void FlxG_obj::switchState( ::flixel::FlxState State){
{
		HX_STACK_FRAME("flixel.FlxG","switchState",0xbec45396,"flixel.FlxG.switchState","flixel/FlxG.hx",302,0x8e176836)
		HX_STACK_ARG(State,"State")
		HX_STACK_LINE(302)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,switchState,(void))

Void FlxG_obj::resetState( ){
{
		HX_STACK_FRAME("flixel.FlxG","resetState",0x34b927c9,"flixel.FlxG.resetState","flixel/FlxG.hx",310,0x8e176836)
		HX_STACK_LINE(310)
		::Class _g = ::Type_obj::getClass(::flixel::FlxG_obj::game->_state);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(310)
		::flixel::FlxState State = ::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(310)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,resetState,(void))

bool FlxG_obj::overlap( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback,Dynamic ProcessCallback){
	HX_STACK_FRAME("flixel.FlxG","overlap",0x37194f20,"flixel.FlxG.overlap","flixel/FlxG.hx",327,0x8e176836)
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1")
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2")
	HX_STACK_ARG(NotifyCallback,"NotifyCallback")
	HX_STACK_ARG(ProcessCallback,"ProcessCallback")
	HX_STACK_LINE(328)
	if (((ObjectOrGroup1 == null()))){
		HX_STACK_LINE(330)
		ObjectOrGroup1 = ::flixel::FlxG_obj::game->_state;
	}
	HX_STACK_LINE(332)
	if (((ObjectOrGroup2 == ObjectOrGroup1))){
		HX_STACK_LINE(334)
		ObjectOrGroup2 = null();
	}
	HX_STACK_LINE(336)
	::flixel::system::FlxQuadTree_obj::divisions = ::flixel::FlxG_obj::worldDivisions;
	HX_STACK_LINE(337)
	::flixel::system::FlxQuadTree quadTree = ::flixel::system::FlxQuadTree_obj::recycle(::flixel::FlxG_obj::worldBounds->x,::flixel::FlxG_obj::worldBounds->y,::flixel::FlxG_obj::worldBounds->width,::flixel::FlxG_obj::worldBounds->height,null());		HX_STACK_VAR(quadTree,"quadTree");
	HX_STACK_LINE(338)
	quadTree->load(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,ProcessCallback);
	HX_STACK_LINE(339)
	bool result = quadTree->execute();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(340)
	quadTree->destroy();
	HX_STACK_LINE(341)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,overlap,return )

bool FlxG_obj::pixelPerfectOverlap( ::flixel::FlxSprite Sprite1,::flixel::FlxSprite Sprite2,hx::Null< int >  __o_AlphaTolerance,::flixel::FlxCamera Camera){
int AlphaTolerance = __o_AlphaTolerance.Default(255);
	HX_STACK_FRAME("flixel.FlxG","pixelPerfectOverlap",0x4d139839,"flixel.FlxG.pixelPerfectOverlap","flixel/FlxG.hx",356,0x8e176836)
	HX_STACK_ARG(Sprite1,"Sprite1")
	HX_STACK_ARG(Sprite2,"Sprite2")
	HX_STACK_ARG(AlphaTolerance,"AlphaTolerance")
	HX_STACK_ARG(Camera,"Camera")
{
		HX_STACK_LINE(356)
		return ::flixel::util::FlxCollision_obj::pixelPerfectCheck(Sprite1,Sprite2,AlphaTolerance,Camera);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,pixelPerfectOverlap,return )

bool FlxG_obj::collide( ::flixel::FlxBasic ObjectOrGroup1,::flixel::FlxBasic ObjectOrGroup2,Dynamic NotifyCallback){
	HX_STACK_FRAME("flixel.FlxG","collide",0x7b6cbb17,"flixel.FlxG.collide","flixel/FlxG.hx",375,0x8e176836)
	HX_STACK_ARG(ObjectOrGroup1,"ObjectOrGroup1")
	HX_STACK_ARG(ObjectOrGroup2,"ObjectOrGroup2")
	HX_STACK_ARG(NotifyCallback,"NotifyCallback")
	HX_STACK_LINE(375)
	return ::flixel::FlxG_obj::overlap(ObjectOrGroup1,ObjectOrGroup2,NotifyCallback,::flixel::FlxObject_obj::separate_dyn());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxG_obj,collide,return )

Void FlxG_obj::openURL( ::String URL,::String __o_Target){
::String Target = __o_Target.Default(HX_CSTRING("_blank"));
	HX_STACK_FRAME("flixel.FlxG","openURL",0xce3ec95e,"flixel.FlxG.openURL","flixel/FlxG.hx",421,0x8e176836)
	HX_STACK_ARG(URL,"URL")
	HX_STACK_ARG(Target,"Target")
{
		HX_STACK_LINE(422)
		::String prefix = HX_CSTRING("");		HX_STACK_VAR(prefix,"prefix");
		HX_STACK_LINE(424)
		if ((!(::EReg_obj::__new(HX_CSTRING("^https?://"),HX_CSTRING(""))->match(URL)))){
			HX_STACK_LINE(425)
			prefix = HX_CSTRING("http://");
		}
		HX_STACK_LINE(426)
		::openfl::_legacy::net::URLRequest _g = ::openfl::_legacy::net::URLRequest_obj::__new((prefix + URL));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(426)
		::openfl::_legacy::Lib_obj::getURL(_g,Target);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxG_obj,openURL,(void))

Void FlxG_obj::init( ::flixel::FlxGame Game,int Width,int Height,Float Zoom){
{
		HX_STACK_FRAME("flixel.FlxG","init",0x1141e5d7,"flixel.FlxG.init","flixel/FlxG.hx",433,0x8e176836)
		HX_STACK_ARG(Game,"Game")
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_ARG(Zoom,"Zoom")
		HX_STACK_LINE(434)
		::flixel::FlxG_obj::game = Game;
		HX_STACK_LINE(435)
		Float _g = ::Math_obj::abs(Width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(435)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(435)
		::flixel::FlxG_obj::width = _g1;
		HX_STACK_LINE(436)
		Float _g2 = ::Math_obj::abs(Height);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(436)
		int _g3 = ::Std_obj::_int(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(436)
		::flixel::FlxG_obj::height = _g3;
		HX_STACK_LINE(437)
		::flixel::FlxCamera_obj::defaultZoom = Zoom;
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(439)
			int Width1 = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(Width1,"Width1");
			HX_STACK_LINE(439)
			int Height1 = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(Height1,"Height1");
			HX_STACK_LINE(439)
			::flixel::FlxG_obj::_scaleMode->onMeasure(Width1,Height1);
		}
		HX_STACK_LINE(443)
		::flixel::input::keyboard::FlxKeyboard _g4 = ::flixel::input::keyboard::FlxKeyboard_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(443)
		::flixel::input::keyboard::FlxKeyboard _g5 = ::flixel::FlxG_obj::inputs->add_flixel_input_keyboard_FlxKeyboard(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(443)
		::flixel::FlxG_obj::keys = _g5;
		HX_STACK_LINE(447)
		::flixel::input::mouse::FlxMouse _g6 = ::flixel::input::mouse::FlxMouse_obj::__new(::flixel::FlxG_obj::game->_inputContainer);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(447)
		::flixel::input::mouse::FlxMouse _g7 = ::flixel::FlxG_obj::inputs->add_flixel_input_mouse_FlxMouse(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(447)
		::flixel::FlxG_obj::set_mouse(_g7);
		HX_STACK_LINE(451)
		::flixel::input::touch::FlxTouchManager _g8 = ::flixel::input::touch::FlxTouchManager_obj::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(451)
		::flixel::input::touch::FlxTouchManager _g9 = ::flixel::FlxG_obj::inputs->add_flixel_input_touch_FlxTouchManager(_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(451)
		::flixel::FlxG_obj::touches = _g9;
		HX_STACK_LINE(455)
		::flixel::input::gamepad::FlxGamepadManager _g10 = ::flixel::input::gamepad::FlxGamepadManager_obj::__new();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(455)
		::flixel::input::gamepad::FlxGamepadManager _g11 = ::flixel::FlxG_obj::inputs->add_flixel_input_gamepad_FlxGamepadManager(_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(455)
		::flixel::FlxG_obj::gamepads = _g11;
		HX_STACK_LINE(465)
		::flixel::FlxG_obj::save->bind(HX_CSTRING("flixel"));
		HX_STACK_LINE(468)
		::flixel::FlxG_obj::sound->loadSavedPrefs();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxG_obj,init,(void))

Void FlxG_obj::reset( ){
{
		HX_STACK_FRAME("flixel.FlxG","reset",0x31170d28,"flixel.FlxG.reset","flixel/FlxG.hx",476,0x8e176836)
		HX_STACK_LINE(477)
		::flixel::text::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(478)
		Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(478)
		Float _g1 = (_g * (int)2147483647);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(478)
		int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(478)
		::flixel::util::FlxRandom_obj::set_globalSeed(_g2);
		HX_STACK_LINE(480)
		::flixel::FlxG_obj::bitmap->clearCache();
		HX_STACK_LINE(481)
		::flixel::FlxG_obj::inputs->reset();
		HX_STACK_LINE(483)
		::flixel::FlxG_obj::sound->destroy(true);
		HX_STACK_LINE(485)
		::flixel::FlxG_obj::autoPause = true;
		HX_STACK_LINE(486)
		::flixel::FlxG_obj::fixedTimestep = true;
		HX_STACK_LINE(487)
		::flixel::FlxG_obj::timeScale = 1.0;
		HX_STACK_LINE(488)
		::flixel::FlxG_obj::elapsed = (int)0;
		HX_STACK_LINE(489)
		::flixel::FlxG_obj::maxElapsed = 0.1;
		HX_STACK_LINE(490)
		{
			HX_STACK_LINE(490)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(490)
			_this->x = (int)-10;
			HX_STACK_LINE(490)
			_this->y = (int)-10;
			HX_STACK_LINE(490)
			_this->width = (::flixel::FlxG_obj::width + (int)20);
			HX_STACK_LINE(490)
			_this->height = (::flixel::FlxG_obj::height + (int)20);
			HX_STACK_LINE(490)
			_this;
		}
		HX_STACK_LINE(491)
		::flixel::FlxG_obj::worldDivisions = (int)6;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,reset,(void))

::flixel::system::scaleModes::BaseScaleMode FlxG_obj::set_scaleMode( ::flixel::system::scaleModes::BaseScaleMode ScaleMode){
	HX_STACK_FRAME("flixel.FlxG","set_scaleMode",0xb374d549,"flixel.FlxG.set_scaleMode","flixel/FlxG.hx",495,0x8e176836)
	HX_STACK_ARG(ScaleMode,"ScaleMode")
	HX_STACK_LINE(496)
	::flixel::FlxG_obj::_scaleMode = ScaleMode;
	HX_STACK_LINE(497)
	::flixel::FlxG_obj::game->onResize(null());
	HX_STACK_LINE(498)
	return ScaleMode;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_scaleMode,return )

::flixel::input::mouse::FlxMouse FlxG_obj::set_mouse( ::flixel::input::mouse::FlxMouse NewMouse){
	HX_STACK_FRAME("flixel.FlxG","set_mouse",0x1e754261,"flixel.FlxG.set_mouse","flixel/FlxG.hx",503,0x8e176836)
	HX_STACK_ARG(NewMouse,"NewMouse")
	HX_STACK_LINE(504)
	if (((::flixel::FlxG_obj::mouse == null()))){
		HX_STACK_LINE(506)
		::flixel::input::mouse::FlxMouse _g = ::flixel::FlxG_obj::inputs->add_flixel_input_mouse_FlxMouse(NewMouse);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(506)
		::flixel::FlxG_obj::mouse = _g;
		HX_STACK_LINE(507)
		return ::flixel::FlxG_obj::mouse;
	}
	HX_STACK_LINE(509)
	::flixel::input::mouse::FlxMouse oldMouse = ::flixel::FlxG_obj::mouse;		HX_STACK_VAR(oldMouse,"oldMouse");
	HX_STACK_LINE(510)
	::flixel::input::mouse::FlxMouse result = ::flixel::FlxG_obj::inputs->replace_flixel_input_mouse_FlxMouse(oldMouse,NewMouse);		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(511)
	if (((result != null()))){
		HX_STACK_LINE(513)
		::flixel::FlxG_obj::mouse = result;
		HX_STACK_LINE(514)
		oldMouse->destroy();
		HX_STACK_LINE(515)
		return NewMouse;
	}
	HX_STACK_LINE(517)
	return oldMouse;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_mouse,return )

int FlxG_obj::get_updateFramerate( ){
	HX_STACK_FRAME("flixel.FlxG","get_updateFramerate",0x15da1274,"flixel.FlxG.get_updateFramerate","flixel/FlxG.hx",523,0x8e176836)
	HX_STACK_LINE(523)
	return ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_updateFramerate,return )

int FlxG_obj::set_updateFramerate( int Framerate){
	HX_STACK_FRAME("flixel.FlxG","set_updateFramerate",0x52770580,"flixel.FlxG.set_updateFramerate","flixel/FlxG.hx",527,0x8e176836)
	HX_STACK_ARG(Framerate,"Framerate")
	HX_STACK_LINE(528)
	if (((Framerate < ::flixel::FlxG_obj::drawFramerate))){
		HX_STACK_LINE(530)
		::flixel::FlxG_obj::log->advanced(HX_CSTRING("FlxG.framerate: The game's framerate shouldn't be smaller than the flash framerate, since it can stop your game from updating."),::flixel::system::debug::LogStyle_obj::WARNING,true);
	}
	HX_STACK_LINE(533)
	Float _g = ::Math_obj::abs((Float((int)1000) / Float(Framerate)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(533)
	int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(533)
	::flixel::FlxG_obj::game->_stepMS = _g1;
	HX_STACK_LINE(534)
	::flixel::FlxG_obj::game->_stepSeconds = (Float(::flixel::FlxG_obj::game->_stepMS) / Float((int)1000));
	HX_STACK_LINE(536)
	if (((::flixel::FlxG_obj::game->_maxAccumulation < ::flixel::FlxG_obj::game->_stepMS))){
		HX_STACK_LINE(538)
		::flixel::FlxG_obj::game->_maxAccumulation = ::flixel::FlxG_obj::game->_stepMS;
	}
	HX_STACK_LINE(541)
	return Framerate;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_updateFramerate,return )

int FlxG_obj::set_drawFramerate( int Framerate){
	HX_STACK_FRAME("flixel.FlxG","set_drawFramerate",0x3e23c125,"flixel.FlxG.set_drawFramerate","flixel/FlxG.hx",545,0x8e176836)
	HX_STACK_ARG(Framerate,"Framerate")
	HX_STACK_LINE(546)
	int _g = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(546)
	if (((Framerate > _g))){
		HX_STACK_LINE(548)
		::flixel::FlxG_obj::log->advanced(HX_CSTRING("FlxG.drawFramerate: The update framerate shouldn't be smaller than the draw framerate, since it can stop your game from updating."),::flixel::system::debug::LogStyle_obj::WARNING,true);
	}
	HX_STACK_LINE(551)
	Float _g1 = ::Math_obj::abs(Framerate);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(551)
	int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(551)
	::flixel::FlxG_obj::drawFramerate = _g2;
	HX_STACK_LINE(553)
	::openfl::_legacy::display::Stage _g3 = ::flixel::FlxG_obj::game->get_stage();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(553)
	if (((_g3 != null()))){
		HX_STACK_LINE(555)
		::flixel::FlxG_obj::game->get_stage()->set_frameRate(::flixel::FlxG_obj::drawFramerate);
	}
	HX_STACK_LINE(558)
	int _g4 = ::Std_obj::_int((Float((int)2000) / Float(::flixel::FlxG_obj::drawFramerate)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(558)
	int _g5 = (_g4 - (int)1);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(558)
	::flixel::FlxG_obj::game->_maxAccumulation = _g5;
	HX_STACK_LINE(560)
	if (((::flixel::FlxG_obj::game->_maxAccumulation < ::flixel::FlxG_obj::game->_stepMS))){
		HX_STACK_LINE(562)
		::flixel::FlxG_obj::game->_maxAccumulation = ::flixel::FlxG_obj::game->_stepMS;
	}
	HX_STACK_LINE(565)
	return Framerate;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_drawFramerate,return )

bool FlxG_obj::set_fullscreen( bool Value){
	HX_STACK_FRAME("flixel.FlxG","set_fullscreen",0x1eee347f,"flixel.FlxG.set_fullscreen","flixel/FlxG.hx",569,0x8e176836)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(570)
	if ((Value)){
		HX_STACK_LINE(572)
		::openfl::_legacy::Lib_obj::get_current()->get_stage()->set_displayState(::openfl::display::StageDisplayState_obj::FULL_SCREEN);
	}
	else{
		HX_STACK_LINE(576)
		::openfl::_legacy::Lib_obj::get_current()->get_stage()->set_displayState(::openfl::display::StageDisplayState_obj::NORMAL);
	}
	HX_STACK_LINE(579)
	return ::flixel::FlxG_obj::fullscreen = Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxG_obj,set_fullscreen,return )

::openfl::_legacy::display::Stage FlxG_obj::get_stage( ){
	HX_STACK_FRAME("flixel.FlxG","get_stage",0xb2caaaee,"flixel.FlxG.get_stage","flixel/FlxG.hx",584,0x8e176836)
	HX_STACK_LINE(584)
	return ::openfl::_legacy::Lib_obj::get_current()->get_stage();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_stage,return )

::flixel::FlxState FlxG_obj::get_state( ){
	HX_STACK_FRAME("flixel.FlxG","get_state",0xb2cab641,"flixel.FlxG.get_state","flixel/FlxG.hx",589,0x8e176836)
	HX_STACK_LINE(589)
	return ::flixel::FlxG_obj::game->_state;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxG_obj,get_state,return )


FlxG_obj::FlxG_obj()
{
}

Dynamic FlxG_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"vcr") ) { return vcr; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return game; }
		if (HX_FIELD_EQ(inName,"save") ) { return save; }
		if (HX_FIELD_EQ(inName,"keys") ) { return keys; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { return get_stage(); }
		if (HX_FIELD_EQ(inName,"state") ) { return get_state(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"mouse") ) { return mouse; }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		if (HX_FIELD_EQ(inName,"sound") ) { return sound; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"swipes") ) { return swipes; }
		if (HX_FIELD_EQ(inName,"inputs") ) { return inputs; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"touches") ) { return touches; }
		if (HX_FIELD_EQ(inName,"console") ) { return console; }
		if (HX_FIELD_EQ(inName,"cameras") ) { return cameras; }
		if (HX_FIELD_EQ(inName,"plugins") ) { return plugins; }
		if (HX_FIELD_EQ(inName,"signals") ) { return signals; }
		if (HX_FIELD_EQ(inName,"overlap") ) { return overlap_dyn(); }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"openURL") ) { return openURL_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamepads") ) { return gamepads; }
		if (HX_FIELD_EQ(inName,"debugger") ) { return debugger; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { return autoPause; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { return timeScale; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { return scaleMode; }
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { return bitmapLog; }
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"set_mouse") ) { return set_mouse_dyn(); }
		if (HX_FIELD_EQ(inName,"get_stage") ) { return get_stage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_state") ) { return get_state_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { return maxElapsed; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { return fullscreen; }
		if (HX_FIELD_EQ(inName,"_scaleMode") ) { return _scaleMode; }
		if (HX_FIELD_EQ(inName,"resizeGame") ) { return resizeGame_dyn(); }
		if (HX_FIELD_EQ(inName,"resetState") ) { return resetState_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { return worldBounds; }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedTimestep") ) { return fixedTimestep; }
		if (HX_FIELD_EQ(inName,"drawFramerate") ) { return drawFramerate; }
		if (HX_FIELD_EQ(inName,"set_scaleMode") ) { return set_scaleMode_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"worldDivisions") ) { return worldDivisions; }
		if (HX_FIELD_EQ(inName,"set_fullscreen") ) { return set_fullscreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFramerate") ) { return get_updateFramerate(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_drawFramerate") ) { return set_drawFramerate_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"pixelPerfectOverlap") ) { return pixelPerfectOverlap_dyn(); }
		if (HX_FIELD_EQ(inName,"get_updateFramerate") ) { return get_updateFramerate_dyn(); }
		if (HX_FIELD_EQ(inName,"set_updateFramerate") ) { return set_updateFramerate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxG_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< ::flixel::system::frontEnds::LogFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vcr") ) { vcr=inValue.Cast< ::flixel::system::frontEnds::VCRFrontEnd >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast< ::flixel::FlxGame >(); return inValue; }
		if (HX_FIELD_EQ(inName,"save") ) { save=inValue.Cast< ::flixel::util::FlxSave >(); return inValue; }
		if (HX_FIELD_EQ(inName,"keys") ) { keys=inValue.Cast< ::flixel::input::keyboard::FlxKeyboard >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouse") ) { if (inCallProp) return set_mouse(inValue);mouse=inValue.Cast< ::flixel::input::mouse::FlxMouse >(); return inValue; }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< ::flixel::system::frontEnds::WatchFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::flixel::system::frontEnds::SoundFrontEnd >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::flixel::FlxCamera >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swipes") ) { swipes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inputs") ) { inputs=inValue.Cast< ::flixel::system::frontEnds::InputFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::flixel::system::frontEnds::BitmapFrontEnd >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< ::flixel::system::FlxVersion >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"touches") ) { touches=inValue.Cast< ::flixel::input::touch::FlxTouchManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::flixel::system::frontEnds::ConsoleFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cameras") ) { cameras=inValue.Cast< ::flixel::system::frontEnds::CameraFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"plugins") ) { plugins=inValue.Cast< ::flixel::system::frontEnds::PluginFrontEnd >(); return inValue; }
		if (HX_FIELD_EQ(inName,"signals") ) { signals=inValue.Cast< ::flixel::system::frontEnds::SignalFrontEnd >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gamepads") ) { gamepads=inValue.Cast< ::flixel::input::gamepad::FlxGamepadManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugger") ) { debugger=inValue.Cast< ::flixel::system::frontEnds::DebuggerFrontEnd >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoPause") ) { autoPause=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { timeScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleMode") ) { if (inCallProp) return set_scaleMode(inValue);scaleMode=inValue.Cast< ::flixel::system::scaleModes::BaseScaleMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bitmapLog") ) { bitmapLog=inValue.Cast< ::flixel::system::frontEnds::BitmapLogFrontEnd >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { maxElapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullscreen") ) { if (inCallProp) return set_fullscreen(inValue);fullscreen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaleMode") ) { _scaleMode=inValue.Cast< ::flixel::system::scaleModes::BaseScaleMode >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"worldBounds") ) { worldBounds=inValue.Cast< ::flixel::util::FlxRect >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fixedTimestep") ) { fixedTimestep=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"drawFramerate") ) { if (inCallProp) return set_drawFramerate(inValue);drawFramerate=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"worldDivisions") ) { worldDivisions=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"updateFramerate") ) { return set_updateFramerate(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxG_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("autoPause"),
	HX_CSTRING("fixedTimestep"),
	HX_CSTRING("timeScale"),
	HX_CSTRING("worldDivisions"),
	HX_CSTRING("camera"),
	HX_CSTRING("VERSION"),
	HX_CSTRING("game"),
	HX_CSTRING("drawFramerate"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("maxElapsed"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("scaleMode"),
	HX_CSTRING("fullscreen"),
	HX_CSTRING("worldBounds"),
	HX_CSTRING("save"),
	HX_CSTRING("mouse"),
	HX_CSTRING("touches"),
	HX_CSTRING("swipes"),
	HX_CSTRING("keys"),
	HX_CSTRING("gamepads"),
	HX_CSTRING("inputs"),
	HX_CSTRING("console"),
	HX_CSTRING("log"),
	HX_CSTRING("bitmapLog"),
	HX_CSTRING("watch"),
	HX_CSTRING("debugger"),
	HX_CSTRING("vcr"),
	HX_CSTRING("bitmap"),
	HX_CSTRING("cameras"),
	HX_CSTRING("plugins"),
	HX_CSTRING("sound"),
	HX_CSTRING("signals"),
	HX_CSTRING("_scaleMode"),
	HX_CSTRING("resizeGame"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("switchState"),
	HX_CSTRING("resetState"),
	HX_CSTRING("overlap"),
	HX_CSTRING("pixelPerfectOverlap"),
	HX_CSTRING("collide"),
	HX_CSTRING("openURL"),
	HX_CSTRING("init"),
	HX_CSTRING("reset"),
	HX_CSTRING("set_scaleMode"),
	HX_CSTRING("set_mouse"),
	HX_CSTRING("get_updateFramerate"),
	HX_CSTRING("set_updateFramerate"),
	HX_CSTRING("set_drawFramerate"),
	HX_CSTRING("set_fullscreen"),
	HX_CSTRING("get_stage"),
	HX_CSTRING("get_state"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_MARK_MEMBER_NAME(FlxG_obj::fixedTimestep,"fixedTimestep");
	HX_MARK_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_MARK_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(FlxG_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(FlxG_obj::game,"game");
	HX_MARK_MEMBER_NAME(FlxG_obj::drawFramerate,"drawFramerate");
	HX_MARK_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(FlxG_obj::maxElapsed,"maxElapsed");
	HX_MARK_MEMBER_NAME(FlxG_obj::width,"width");
	HX_MARK_MEMBER_NAME(FlxG_obj::height,"height");
	HX_MARK_MEMBER_NAME(FlxG_obj::scaleMode,"scaleMode");
	HX_MARK_MEMBER_NAME(FlxG_obj::fullscreen,"fullscreen");
	HX_MARK_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_MARK_MEMBER_NAME(FlxG_obj::save,"save");
	HX_MARK_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_MARK_MEMBER_NAME(FlxG_obj::touches,"touches");
	HX_MARK_MEMBER_NAME(FlxG_obj::swipes,"swipes");
	HX_MARK_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_MARK_MEMBER_NAME(FlxG_obj::gamepads,"gamepads");
	HX_MARK_MEMBER_NAME(FlxG_obj::inputs,"inputs");
	HX_MARK_MEMBER_NAME(FlxG_obj::console,"console");
	HX_MARK_MEMBER_NAME(FlxG_obj::log,"log");
	HX_MARK_MEMBER_NAME(FlxG_obj::bitmapLog,"bitmapLog");
	HX_MARK_MEMBER_NAME(FlxG_obj::watch,"watch");
	HX_MARK_MEMBER_NAME(FlxG_obj::debugger,"debugger");
	HX_MARK_MEMBER_NAME(FlxG_obj::vcr,"vcr");
	HX_MARK_MEMBER_NAME(FlxG_obj::bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_MARK_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_MARK_MEMBER_NAME(FlxG_obj::sound,"sound");
	HX_MARK_MEMBER_NAME(FlxG_obj::signals,"signals");
	HX_MARK_MEMBER_NAME(FlxG_obj::_scaleMode,"_scaleMode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxG_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxG_obj::autoPause,"autoPause");
	HX_VISIT_MEMBER_NAME(FlxG_obj::fixedTimestep,"fixedTimestep");
	HX_VISIT_MEMBER_NAME(FlxG_obj::timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldDivisions,"worldDivisions");
	HX_VISIT_MEMBER_NAME(FlxG_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(FlxG_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(FlxG_obj::game,"game");
	HX_VISIT_MEMBER_NAME(FlxG_obj::drawFramerate,"drawFramerate");
	HX_VISIT_MEMBER_NAME(FlxG_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(FlxG_obj::maxElapsed,"maxElapsed");
	HX_VISIT_MEMBER_NAME(FlxG_obj::width,"width");
	HX_VISIT_MEMBER_NAME(FlxG_obj::height,"height");
	HX_VISIT_MEMBER_NAME(FlxG_obj::scaleMode,"scaleMode");
	HX_VISIT_MEMBER_NAME(FlxG_obj::fullscreen,"fullscreen");
	HX_VISIT_MEMBER_NAME(FlxG_obj::worldBounds,"worldBounds");
	HX_VISIT_MEMBER_NAME(FlxG_obj::save,"save");
	HX_VISIT_MEMBER_NAME(FlxG_obj::mouse,"mouse");
	HX_VISIT_MEMBER_NAME(FlxG_obj::touches,"touches");
	HX_VISIT_MEMBER_NAME(FlxG_obj::swipes,"swipes");
	HX_VISIT_MEMBER_NAME(FlxG_obj::keys,"keys");
	HX_VISIT_MEMBER_NAME(FlxG_obj::gamepads,"gamepads");
	HX_VISIT_MEMBER_NAME(FlxG_obj::inputs,"inputs");
	HX_VISIT_MEMBER_NAME(FlxG_obj::console,"console");
	HX_VISIT_MEMBER_NAME(FlxG_obj::log,"log");
	HX_VISIT_MEMBER_NAME(FlxG_obj::bitmapLog,"bitmapLog");
	HX_VISIT_MEMBER_NAME(FlxG_obj::watch,"watch");
	HX_VISIT_MEMBER_NAME(FlxG_obj::debugger,"debugger");
	HX_VISIT_MEMBER_NAME(FlxG_obj::vcr,"vcr");
	HX_VISIT_MEMBER_NAME(FlxG_obj::bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(FlxG_obj::cameras,"cameras");
	HX_VISIT_MEMBER_NAME(FlxG_obj::plugins,"plugins");
	HX_VISIT_MEMBER_NAME(FlxG_obj::sound,"sound");
	HX_VISIT_MEMBER_NAME(FlxG_obj::signals,"signals");
	HX_VISIT_MEMBER_NAME(FlxG_obj::_scaleMode,"_scaleMode");
};

#endif

Class FlxG_obj::__mClass;

void FlxG_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxG"), hx::TCanCast< FlxG_obj> ,sStaticFields,sMemberFields,
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

void FlxG_obj::__boot()
{
	autoPause= true;
	fixedTimestep= true;
	timeScale= (int)1;
	worldDivisions= (int)6;
	VERSION= ::flixel::system::FlxVersion_obj::__new((int)3,(int)3,(int)11,null());
	elapsed= (int)0;
	maxElapsed= 0.1;
	fullscreen= false;
struct _Function_0_1{
	inline static ::flixel::util::FlxRect Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/FlxG.hx",156,0x8e176836)
		{
			HX_STACK_LINE(156)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(156)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(156)
			Float Width = (int)0;		HX_STACK_VAR(Width,"Width");
			HX_STACK_LINE(156)
			Float Height = (int)0;		HX_STACK_VAR(Height,"Height");
			HX_STACK_LINE(156)
			::flixel::util::FlxRect rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(156)
			{
				HX_STACK_LINE(156)
				::flixel::util::FlxRect _this = ::flixel::util::FlxRect_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(156)
				_this->x = X;
				HX_STACK_LINE(156)
				_this->y = Y;
				HX_STACK_LINE(156)
				_this->width = Width;
				HX_STACK_LINE(156)
				_this->height = Height;
				HX_STACK_LINE(156)
				rect = _this;
			}
			HX_STACK_LINE(156)
			rect->_inPool = false;
			HX_STACK_LINE(156)
			return rect;
		}
		return null();
	}
};
	worldBounds= _Function_0_1::Block();
	save= ::flixel::util::FlxSave_obj::__new();
	swipes= Array_obj< ::Dynamic >::__new();
	inputs= ::flixel::system::frontEnds::InputFrontEnd_obj::__new();
	console= ::flixel::system::frontEnds::ConsoleFrontEnd_obj::__new();
	log= ::flixel::system::frontEnds::LogFrontEnd_obj::__new();
	bitmapLog= ::flixel::system::frontEnds::BitmapLogFrontEnd_obj::__new();
	watch= ::flixel::system::frontEnds::WatchFrontEnd_obj::__new();
	debugger= ::flixel::system::frontEnds::DebuggerFrontEnd_obj::__new();
	vcr= ::flixel::system::frontEnds::VCRFrontEnd_obj::__new();
	bitmap= ::flixel::system::frontEnds::BitmapFrontEnd_obj::__new();
	cameras= ::flixel::system::frontEnds::CameraFrontEnd_obj::__new();
	plugins= ::flixel::system::frontEnds::PluginFrontEnd_obj::__new();
	sound= ::flixel::system::frontEnds::SoundFrontEnd_obj::__new();
	signals= ::flixel::system::frontEnds::SignalFrontEnd_obj::__new();
	_scaleMode= ::flixel::system::scaleModes::RatioScaleMode_obj::__new();
}

} // end namespace flixel
