#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxSignal
#include <flixel/interfaces/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_plugin_FlxPlugin
#include <flixel/plugin/FlxPlugin.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Console
#include <flixel/system/debug/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Stats
#include <flixel/system/debug/Stats.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
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
#ifndef INCLUDED_flixel_system_layer_TileSheetExt
#include <flixel/system/layer/TileSheetExt.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#include <flixel/system/ui/FlxFocusLostScreen.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxSoundTray
#include <flixel/system/ui/FlxSoundTray.h>
#endif
#ifndef INCLUDED_flixel_text_pxText_PxBitmapFont
#include <flixel/text/pxText/PxBitmapFont.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal2
#include <flixel/util/_FlxSignal/FlxSignal2.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalBase
#include <flixel/util/_FlxSignal/FlxSignalBase.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
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
#ifndef INCLUDED_openfl__legacy_display_Tilesheet
#include <openfl/_legacy/display/Tilesheet.h>
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
#ifndef INCLUDED_openfl_display_StageAlign
#include <openfl/display/StageAlign.h>
#endif
#ifndef INCLUDED_openfl_display_StageScaleMode
#include <openfl/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif
namespace flixel{

Void FlxGame_obj::__construct(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{
HX_STACK_FRAME("flixel.FlxGame","new",0xde7d5f44,"flixel.FlxGame.new","flixel/FlxGame.hx",44,0x34f39fed)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_GameSizeX,"GameSizeX")
HX_STACK_ARG(__o_GameSizeY,"GameSizeY")
HX_STACK_ARG(InitialState,"InitialState")
HX_STACK_ARG(__o_Zoom,"Zoom")
HX_STACK_ARG(__o_UpdateFramerate,"UpdateFramerate")
HX_STACK_ARG(__o_DrawFramerate,"DrawFramerate")
HX_STACK_ARG(__o_SkipSplash,"SkipSplash")
HX_STACK_ARG(__o_StartFullscreen,"StartFullscreen")
int GameSizeX = __o_GameSizeX.Default(640);
int GameSizeY = __o_GameSizeY.Default(480);
Float Zoom = __o_Zoom.Default(1);
int UpdateFramerate = __o_UpdateFramerate.Default(60);
int DrawFramerate = __o_DrawFramerate.Default(60);
bool SkipSplash = __o_SkipSplash.Default(false);
bool StartFullscreen = __o_StartFullscreen.Default(false);
{
	HX_STACK_LINE(182)
	this->_resetGame = false;
	HX_STACK_LINE(172)
	this->_startFullscreen = false;
	HX_STACK_LINE(166)
	this->_skipSplash = false;
	HX_STACK_LINE(160)
	this->_customFocusLostScreen = hx::ClassOf< ::flixel::system::ui::FlxFocusLostScreen >();
	HX_STACK_LINE(153)
	this->_customSoundTray = hx::ClassOf< ::flixel::system::ui::FlxSoundTray >();
	HX_STACK_LINE(132)
	this->_onFocusFiredOnce = false;
	HX_STACK_LINE(125)
	this->_lostFocus = false;
	HX_STACK_LINE(98)
	this->_total = (int)0;
	HX_STACK_LINE(85)
	this->_gameJustStarted = false;
	HX_STACK_LINE(79)
	this->ticks = (int)0;
	HX_STACK_LINE(49)
	this->focusLostFramerate = (int)10;
	HX_STACK_LINE(222)
	super::__construct();
	HX_STACK_LINE(225)
	this->_startFullscreen = StartFullscreen;
	HX_STACK_LINE(229)
	::openfl::_legacy::display::Sprite _g = ::openfl::_legacy::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(229)
	this->_inputContainer = _g;
	HX_STACK_LINE(232)
	::flixel::FlxG_obj::init(hx::ObjectPtr<OBJ_>(this),GameSizeX,GameSizeY,Zoom);
	HX_STACK_LINE(234)
	::flixel::FlxG_obj::set_updateFramerate(UpdateFramerate);
	HX_STACK_LINE(235)
	::flixel::FlxG_obj::set_drawFramerate(DrawFramerate);
	HX_STACK_LINE(236)
	this->_accumulator = this->_stepMS;
	HX_STACK_LINE(237)
	this->_skipSplash = SkipSplash;
	HX_STACK_LINE(244)
	if (((InitialState == null()))){
		HX_STACK_LINE(244)
		this->_initialState = hx::ClassOf< ::flixel::FlxState >();
	}
	else{
		HX_STACK_LINE(244)
		this->_initialState = InitialState;
	}
	HX_STACK_LINE(246)
	this->addEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null(),null(),null());
}
;
	return null();
}

//FlxGame_obj::~FlxGame_obj() { }

Dynamic FlxGame_obj::__CreateEmpty() { return  new FlxGame_obj; }
hx::ObjectPtr< FlxGame_obj > FlxGame_obj::__new(hx::Null< int >  __o_GameSizeX,hx::Null< int >  __o_GameSizeY,::Class InitialState,hx::Null< Float >  __o_Zoom,hx::Null< int >  __o_UpdateFramerate,hx::Null< int >  __o_DrawFramerate,hx::Null< bool >  __o_SkipSplash,hx::Null< bool >  __o_StartFullscreen)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(__o_GameSizeX,__o_GameSizeY,InitialState,__o_Zoom,__o_UpdateFramerate,__o_DrawFramerate,__o_SkipSplash,__o_StartFullscreen);
	return result;}

Dynamic FlxGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxGame_obj > result = new FlxGame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

Void FlxGame_obj::create( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","create",0x90873e98,"flixel.FlxGame.create","flixel/FlxGame.hx",253,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(254)
		::openfl::_legacy::display::Stage _g = this->get_stage();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(254)
		if (((_g == null()))){
			HX_STACK_LINE(256)
			return null();
		}
		HX_STACK_LINE(258)
		this->removeEventListener(::openfl::_legacy::events::Event_obj::ADDED_TO_STAGE,this->create_dyn(),null());
		HX_STACK_LINE(260)
		int _g1 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(260)
		this->_total = _g1;
		HX_STACK_LINE(263)
		::flixel::FlxG_obj::set_fullscreen(this->_startFullscreen);
		HX_STACK_LINE(267)
		this->get_stage()->set_scaleMode(::openfl::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(268)
		this->get_stage()->set_align(::openfl::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(269)
		this->get_stage()->set_frameRate(::flixel::FlxG_obj::drawFramerate);
		HX_STACK_LINE(278)
		this->addChild(this->_inputContainer);
		HX_STACK_LINE(282)
		int _g2 = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(282)
		int _g3 = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(282)
		::flixel::system::debug::FlxDebugger _g4 = ::flixel::system::debug::FlxDebugger_obj::__new(_g2,_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(282)
		this->debugger = _g4;
		HX_STACK_LINE(283)
		this->addChild(this->debugger);
		HX_STACK_LINE(290)
		::flixel::system::ui::FlxSoundTray _g5 = ::Type_obj::createInstance(this->_customSoundTray,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(290)
		this->soundTray = _g5;
		HX_STACK_LINE(291)
		this->addChild(this->soundTray);
		HX_STACK_LINE(295)
		::flixel::system::ui::FlxFocusLostScreen _g6 = ::Type_obj::createInstance(this->_customFocusLostScreen,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(295)
		this->_focusLostScreen = _g6;
		HX_STACK_LINE(296)
		this->addChild(this->_focusLostScreen);
		HX_STACK_LINE(302)
		this->get_stage()->addEventListener(::openfl::events::FocusEvent_obj::FOCUS_OUT,this->onFocusLost_dyn(),null(),null(),null());
		HX_STACK_LINE(303)
		this->get_stage()->addEventListener(::openfl::events::FocusEvent_obj::FOCUS_IN,this->onFocus_dyn(),null(),null(),null());
		HX_STACK_LINE(310)
		{
			HX_STACK_LINE(310)
			::flixel::FlxG_obj::signals->gameReset->dispatch();
			HX_STACK_LINE(310)
			this->_skipSplash = true;
			HX_STACK_LINE(310)
			if (((bool(this->_skipSplash) || bool((::flixel::system::FlxSplash_obj::nextState != null()))))){
				HX_STACK_LINE(310)
				::flixel::FlxState _g7 = ::Type_obj::createInstance(this->_initialState,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(310)
				this->_requestedState = _g7;
				HX_STACK_LINE(310)
				if (((::flixel::system::FlxSplash_obj::nextState == null()))){
					HX_STACK_LINE(310)
					this->_gameJustStarted = true;
				}
			}
			else{
				HX_STACK_LINE(310)
				::flixel::system::FlxSplash_obj::nextState = this->_initialState;
				HX_STACK_LINE(310)
				::flixel::system::FlxSplash _g8 = ::flixel::system::FlxSplash_obj::__new(null());		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(310)
				this->_requestedState = _g8;
				HX_STACK_LINE(310)
				this->_skipSplash = true;
			}
			HX_STACK_LINE(310)
			if ((::Std_obj::is(this->_requestedState,hx::ClassOf< ::flixel::FlxSubState >()))){
				HX_STACK_LINE(310)
				HX_STACK_DO_THROW(HX_CSTRING("You can't set FlxSubState class instance as the state for you game"));
			}
			HX_STACK_LINE(310)
			::flixel::FlxG_obj::reset();
		}
		HX_STACK_LINE(311)
		this->switchState();
		HX_STACK_LINE(313)
		int _g9 = ::Std_obj::_int((Float((int)1000) / Float(::flixel::FlxG_obj::game->_stepMS)));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(313)
		if (((_g9 < ::flixel::FlxG_obj::drawFramerate))){
			HX_STACK_LINE(315)
			::flixel::FlxG_obj::log->advanced(HX_CSTRING("FlxG.updateFramerate: The update framerate shouldn't be smaller than the draw framerate, since it can slow down your game."),::flixel::system::debug::LogStyle_obj::WARNING,true);
		}
		HX_STACK_LINE(319)
		this->get_stage()->addEventListener(::openfl::_legacy::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
		HX_STACK_LINE(323)
		this->get_stage()->addEventListener(::openfl::_legacy::events::Event_obj::RESIZE,this->onResize_dyn(),null(),null(),null());
		HX_STACK_LINE(326)
		int _g10 = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(326)
		int _g11 = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(326)
		this->resizeGame(_g10,_g11);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,create,(void))

Void FlxGame_obj::onFocus( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onFocus",0x6f2bcf1d,"flixel.FlxGame.onFocus","flixel/FlxGame.hx",330,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(340)
		if ((!(this->_onFocusFiredOnce))){
			HX_STACK_LINE(342)
			this->_onFocusFiredOnce = true;
			HX_STACK_LINE(343)
			return null();
		}
		HX_STACK_LINE(347)
		this->_lostFocus = false;
		HX_STACK_LINE(348)
		::flixel::FlxG_obj::signals->focusGained->dispatch();
		HX_STACK_LINE(350)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(352)
			this->_state->onFocus();
			HX_STACK_LINE(353)
			return null();
		}
		HX_STACK_LINE(357)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(359)
			this->_focusLostScreen->set_visible(false);
		}
		HX_STACK_LINE(364)
		this->debugger->stats->onFocus();
		HX_STACK_LINE(367)
		this->get_stage()->set_frameRate(::flixel::FlxG_obj::drawFramerate);
		HX_STACK_LINE(369)
		::flixel::FlxG_obj::sound->onFocus();
		HX_STACK_LINE(371)
		{
			HX_STACK_LINE(371)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(371)
			Array< ::flixel::interfaces::IFlxInput > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(371)
			while((true)){
				HX_STACK_LINE(371)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(371)
					break;
				}
				HX_STACK_LINE(371)
				::flixel::interfaces::IFlxInput input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(371)
				++(_g);
				HX_STACK_LINE(371)
				input->onFocus();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocus,(void))

Void FlxGame_obj::onFocusLost( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onFocusLost",0xb7eef7a1,"flixel.FlxGame.onFocusLost","flixel/FlxGame.hx",375,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(383)
		this->_lostFocus = true;
		HX_STACK_LINE(384)
		::flixel::FlxG_obj::signals->focusLost->dispatch();
		HX_STACK_LINE(386)
		if ((!(::flixel::FlxG_obj::autoPause))){
			HX_STACK_LINE(388)
			this->_state->onFocusLost();
			HX_STACK_LINE(389)
			return null();
		}
		HX_STACK_LINE(393)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(395)
			this->_focusLostScreen->set_visible(true);
		}
		HX_STACK_LINE(400)
		this->debugger->stats->onFocusLost();
		HX_STACK_LINE(403)
		this->get_stage()->set_frameRate(this->focusLostFramerate);
		HX_STACK_LINE(405)
		::flixel::FlxG_obj::sound->onFocusLost();
		HX_STACK_LINE(407)
		{
			HX_STACK_LINE(407)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(407)
			Array< ::flixel::interfaces::IFlxInput > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(407)
			while((true)){
				HX_STACK_LINE(407)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(407)
					break;
				}
				HX_STACK_LINE(407)
				::flixel::interfaces::IFlxInput input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
				HX_STACK_LINE(407)
				++(_g);
				HX_STACK_LINE(407)
				input->onFocusLost();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onFocusLost,(void))

Void FlxGame_obj::onResize( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onResize",0xebfa470f,"flixel.FlxGame.onResize","flixel/FlxGame.hx",412,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(413)
		int width = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(width,"width");
		HX_STACK_LINE(414)
		int height = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(height,"height");
		HX_STACK_LINE(417)
		::flixel::FlxG_obj::bitmap->onContext();
		HX_STACK_LINE(420)
		this->_state->onResize(width,height);
		HX_STACK_LINE(421)
		{
			HX_STACK_LINE(421)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(421)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(421)
			while((true)){
				HX_STACK_LINE(421)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(421)
					break;
				}
				HX_STACK_LINE(421)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(421)
				++(_g);
				HX_STACK_LINE(421)
				if ((plugin->exists)){
					HX_STACK_LINE(421)
					plugin->onResize(width,height);
				}
			}
		}
		HX_STACK_LINE(422)
		::flixel::FlxG_obj::signals->gameResized->dispatch(width,height);
		HX_STACK_LINE(424)
		this->resizeGame(width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onResize,(void))

Void FlxGame_obj::resizeGame( int width,int height){
{
		HX_STACK_FRAME("flixel.FlxGame","resizeGame",0xcdcb59a2,"flixel.FlxGame.resizeGame","flixel/FlxGame.hx",428,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(429)
		::flixel::FlxG_obj::_scaleMode->onMeasure(width,height);
		HX_STACK_LINE(432)
		this->debugger->onResize(width,height);
		HX_STACK_LINE(436)
		if (((this->_focusLostScreen != null()))){
			HX_STACK_LINE(438)
			this->_focusLostScreen->draw();
		}
		HX_STACK_LINE(443)
		if (((this->soundTray != null()))){
			HX_STACK_LINE(445)
			this->soundTray->screenCenter();
		}
		HX_STACK_LINE(449)
		Float _g = ::flixel::FlxG_obj::game->get_scaleX();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(449)
		Float _g1 = (Float((int)1) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(449)
		this->_inputContainer->set_scaleX(_g1);
		HX_STACK_LINE(450)
		Float _g2 = ::flixel::FlxG_obj::game->get_scaleY();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(450)
		Float _g3 = (Float((int)1) / Float(_g2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(450)
		this->_inputContainer->set_scaleY(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxGame_obj,resizeGame,(void))

Void FlxGame_obj::onEnterFrame( Dynamic _){
{
		HX_STACK_FRAME("flixel.FlxGame","onEnterFrame",0x001b1a90,"flixel.FlxGame.onEnterFrame","flixel/FlxGame.hx",457,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(458)
		int _g = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(458)
		this->ticks = _g;
		HX_STACK_LINE(459)
		this->_elapsedMS = (this->ticks - this->_total);
		HX_STACK_LINE(460)
		this->_total = this->ticks;
		HX_STACK_LINE(463)
		if (((bool((this->soundTray != null())) && bool(this->soundTray->active)))){
			HX_STACK_LINE(465)
			this->soundTray->update(this->_elapsedMS);
		}
		HX_STACK_LINE(469)
		if (((bool(!(this->_lostFocus)) || bool(!(::flixel::FlxG_obj::autoPause))))){
			HX_STACK_LINE(471)
			if ((::flixel::FlxG_obj::vcr->paused)){
				HX_STACK_LINE(473)
				if ((::flixel::FlxG_obj::vcr->stepRequested)){
					HX_STACK_LINE(475)
					::flixel::FlxG_obj::vcr->stepRequested = false;
				}
				else{
					HX_STACK_LINE(477)
					if (((this->_state == this->_requestedState))){
						HX_STACK_LINE(479)
						return null();
					}
				}
			}
			HX_STACK_LINE(483)
			if ((::flixel::FlxG_obj::fixedTimestep)){
				HX_STACK_LINE(485)
				hx::AddEq(this->_accumulator,this->_elapsedMS);
				HX_STACK_LINE(486)
				if (((this->_accumulator > this->_maxAccumulation))){
					HX_STACK_LINE(488)
					this->_accumulator = this->_maxAccumulation;
				}
				HX_STACK_LINE(491)
				while((true)){
					HX_STACK_LINE(491)
					if ((!(((this->_accumulator > this->_stepMS))))){
						HX_STACK_LINE(491)
						break;
					}
					HX_STACK_LINE(493)
					this->step();
					HX_STACK_LINE(494)
					this->_accumulator = (this->_accumulator - this->_stepMS);
				}
			}
			else{
				HX_STACK_LINE(499)
				this->step();
			}
			HX_STACK_LINE(503)
			::flixel::FlxBasic_obj::_VISIBLECOUNT = (int)0;
			HX_STACK_LINE(506)
			this->draw();
			HX_STACK_LINE(509)
			this->debugger->stats->visibleObjects(::flixel::FlxBasic_obj::_VISIBLECOUNT);
			HX_STACK_LINE(510)
			this->debugger->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxGame_obj,onEnterFrame,(void))

Void FlxGame_obj::resetGame( ){
{
		HX_STACK_FRAME("flixel.FlxGame","resetGame",0xde30cf45,"flixel.FlxGame.resetGame","flixel/FlxGame.hx",520,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(521)
		::flixel::FlxG_obj::signals->gameReset->dispatch();
		HX_STACK_LINE(524)
		this->_skipSplash = true;
		HX_STACK_LINE(527)
		if (((bool(this->_skipSplash) || bool((::flixel::system::FlxSplash_obj::nextState != null()))))){
			HX_STACK_LINE(529)
			::flixel::FlxState _g = ::Type_obj::createInstance(this->_initialState,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(529)
			this->_requestedState = _g;
			HX_STACK_LINE(530)
			if (((::flixel::system::FlxSplash_obj::nextState == null()))){
				HX_STACK_LINE(532)
				this->_gameJustStarted = true;
			}
		}
		else{
			HX_STACK_LINE(537)
			::flixel::system::FlxSplash_obj::nextState = this->_initialState;
			HX_STACK_LINE(538)
			::flixel::system::FlxSplash _g1 = ::flixel::system::FlxSplash_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(538)
			this->_requestedState = _g1;
			HX_STACK_LINE(539)
			this->_skipSplash = true;
		}
		HX_STACK_LINE(543)
		if ((::Std_obj::is(this->_requestedState,hx::ClassOf< ::flixel::FlxSubState >()))){
			HX_STACK_LINE(545)
			HX_STACK_DO_THROW(HX_CSTRING("You can't set FlxSubState class instance as the state for you game"));
		}
		HX_STACK_LINE(549)
		::flixel::FlxG_obj::reset();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,resetGame,(void))

Void FlxGame_obj::switchState( ){
{
		HX_STACK_FRAME("flixel.FlxGame","switchState",0xedf41a61,"flixel.FlxGame.switchState","flixel/FlxGame.hx",558,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(560)
		::flixel::text::pxText::PxBitmapFont_obj::clearStorage();
		HX_STACK_LINE(561)
		::flixel::FlxG_obj::bitmap->clearCache();
		HX_STACK_LINE(562)
		::flixel::FlxG_obj::cameras->reset(null());
		HX_STACK_LINE(563)
		::flixel::FlxG_obj::inputs->reset();
		HX_STACK_LINE(565)
		::flixel::FlxG_obj::sound->destroy(null());
		HX_STACK_LINE(567)
		{
			HX_STACK_LINE(567)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(567)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(567)
			while((true)){
				HX_STACK_LINE(567)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(567)
					break;
				}
				HX_STACK_LINE(567)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(567)
				++(_g);
				HX_STACK_LINE(567)
				if ((plugin->exists)){
					HX_STACK_LINE(567)
					plugin->onStateSwitch();
				}
			}
		}
		HX_STACK_LINE(568)
		::flixel::FlxG_obj::signals->stateSwitched->dispatch();
		HX_STACK_LINE(575)
		if (((this->_state != null()))){
			HX_STACK_LINE(577)
			this->_state->destroy();
		}
		HX_STACK_LINE(581)
		this->_state = this->_requestedState;
		HX_STACK_LINE(583)
		this->_state->create();
		HX_STACK_LINE(585)
		if ((this->_gameJustStarted)){
			HX_STACK_LINE(587)
			this->gameStart();
		}
		HX_STACK_LINE(591)
		{
			HX_STACK_LINE(591)
			Dynamic value = this->_state;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(591)
			this->debugger->console->registeredObjects->set(HX_CSTRING("state"),value);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,switchState,(void))

Void FlxGame_obj::gameStart( ){
{
		HX_STACK_FRAME("flixel.FlxGame","gameStart",0x0d0c34f4,"flixel.FlxGame.gameStart","flixel/FlxGame.hx",596,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(597)
		::flixel::FlxG_obj::signals->gameStarted->dispatch();
		HX_STACK_LINE(598)
		this->_gameJustStarted = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,gameStart,(void))

Void FlxGame_obj::step( ){
{
		HX_STACK_FRAME("flixel.FlxGame","step",0xd28f5fe8,"flixel.FlxGame.step","flixel/FlxGame.hx",608,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(610)
		if ((this->_resetGame)){
			HX_STACK_LINE(612)
			{
				HX_STACK_LINE(612)
				::flixel::FlxG_obj::signals->gameReset->dispatch();
				HX_STACK_LINE(612)
				this->_skipSplash = true;
				HX_STACK_LINE(612)
				if (((bool(this->_skipSplash) || bool((::flixel::system::FlxSplash_obj::nextState != null()))))){
					HX_STACK_LINE(612)
					::flixel::FlxState _g = ::Type_obj::createInstance(this->_initialState,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(612)
					this->_requestedState = _g;
					HX_STACK_LINE(612)
					if (((::flixel::system::FlxSplash_obj::nextState == null()))){
						HX_STACK_LINE(612)
						this->_gameJustStarted = true;
					}
				}
				else{
					HX_STACK_LINE(612)
					::flixel::system::FlxSplash_obj::nextState = this->_initialState;
					HX_STACK_LINE(612)
					::flixel::system::FlxSplash _g1 = ::flixel::system::FlxSplash_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(612)
					this->_requestedState = _g1;
					HX_STACK_LINE(612)
					this->_skipSplash = true;
				}
				HX_STACK_LINE(612)
				if ((::Std_obj::is(this->_requestedState,hx::ClassOf< ::flixel::FlxSubState >()))){
					HX_STACK_LINE(612)
					HX_STACK_DO_THROW(HX_CSTRING("You can't set FlxSubState class instance as the state for you game"));
				}
				HX_STACK_LINE(612)
				::flixel::FlxG_obj::reset();
			}
			HX_STACK_LINE(613)
			this->_resetGame = false;
		}
		HX_STACK_LINE(645)
		::flixel::FlxBasic_obj::_ACTIVECOUNT = (int)0;
		HX_STACK_LINE(648)
		this->update();
		HX_STACK_LINE(651)
		this->debugger->stats->activeObjects(::flixel::FlxBasic_obj::_ACTIVECOUNT);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,step,(void))

Void FlxGame_obj::update( ){
{
		HX_STACK_FRAME("flixel.FlxGame","update",0x9b7d5da5,"flixel.FlxGame.update","flixel/FlxGame.hx",660,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(661)
		if (((bool(!(this->_state->active)) || bool(!(this->_state->exists))))){
			HX_STACK_LINE(663)
			return null();
		}
		HX_STACK_LINE(666)
		if (((this->_state != this->_requestedState))){
			HX_STACK_LINE(668)
			this->switchState();
		}
		HX_STACK_LINE(672)
		if ((::flixel::FlxG_obj::debugger->visible)){
			HX_STACK_LINE(674)
			int _g = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(674)
			this->ticks = _g;
		}
		HX_STACK_LINE(678)
		::flixel::FlxG_obj::signals->preUpdate->dispatch();
		HX_STACK_LINE(680)
		if ((::flixel::FlxG_obj::fixedTimestep)){
			HX_STACK_LINE(682)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * this->_stepSeconds);
		}
		else{
			HX_STACK_LINE(686)
			::flixel::FlxG_obj::elapsed = (::flixel::FlxG_obj::timeScale * ((Float(this->_elapsedMS) / Float((int)1000))));
			HX_STACK_LINE(688)
			Float max = (::flixel::FlxG_obj::maxElapsed * ::flixel::FlxG_obj::timeScale);		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(689)
			if (((::flixel::FlxG_obj::elapsed > max))){
				HX_STACK_LINE(690)
				::flixel::FlxG_obj::elapsed = max;
			}
		}
		HX_STACK_LINE(693)
		this->updateInput();
		HX_STACK_LINE(696)
		::flixel::FlxG_obj::sound->update();
		HX_STACK_LINE(698)
		{
			HX_STACK_LINE(698)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(698)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(698)
			while((true)){
				HX_STACK_LINE(698)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(698)
					break;
				}
				HX_STACK_LINE(698)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(698)
				++(_g);
				HX_STACK_LINE(698)
				if (((bool(plugin->exists) && bool(plugin->active)))){
					HX_STACK_LINE(698)
					plugin->update();
				}
			}
		}
		HX_STACK_LINE(700)
		this->_state->tryUpdate();
		HX_STACK_LINE(702)
		{
			HX_STACK_LINE(702)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(702)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(702)
			while((true)){
				HX_STACK_LINE(702)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(702)
					break;
				}
				HX_STACK_LINE(702)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(702)
				++(_g);
				HX_STACK_LINE(702)
				if (((bool((camera != null())) && bool(camera->exists)))){
					HX_STACK_LINE(702)
					if ((camera->active)){
						HX_STACK_LINE(702)
						camera->update();
					}
					HX_STACK_LINE(702)
					camera->flashSprite->set_x((camera->x + camera->_flashOffset->x));
					HX_STACK_LINE(702)
					camera->flashSprite->set_y((camera->y + camera->_flashOffset->y));
					HX_STACK_LINE(702)
					camera->flashSprite->set_visible(camera->visible);
				}
			}
		}
		HX_STACK_LINE(703)
		::flixel::FlxG_obj::signals->postUpdate->dispatch();
		HX_STACK_LINE(706)
		int _g1 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(706)
		int _g2 = (_g1 - this->ticks);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(706)
		this->debugger->stats->flixelUpdate(_g2);
		HX_STACK_LINE(710)
		{
			HX_STACK_LINE(710)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(710)
			Array< ::Dynamic > _g11 = ::flixel::FlxG_obj::swipes;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(710)
			while((true)){
				HX_STACK_LINE(710)
				if ((!(((_g < _g11->length))))){
					HX_STACK_LINE(710)
					break;
				}
				HX_STACK_LINE(710)
				::flixel::input::FlxSwipe swipe = _g11->__get(_g).StaticCast< ::flixel::input::FlxSwipe >();		HX_STACK_VAR(swipe,"swipe");
				HX_STACK_LINE(710)
				++(_g);
				HX_STACK_LINE(712)
				swipe = null();
			}
		}
		HX_STACK_LINE(714)
		::flixel::util::FlxArrayUtil_obj::clearArray(::flixel::FlxG_obj::swipes,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,update,(void))

Void FlxGame_obj::updateInput( ){
{
		HX_STACK_FRAME("flixel.FlxGame","updateInput",0x1a1f4025,"flixel.FlxGame.updateInput","flixel/FlxGame.hx",762,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(762)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(762)
		Array< ::flixel::interfaces::IFlxInput > _g1 = ::flixel::FlxG_obj::inputs->list;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(762)
		while((true)){
			HX_STACK_LINE(762)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(762)
				break;
			}
			HX_STACK_LINE(762)
			::flixel::interfaces::IFlxInput input = _g1->__get(_g);		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(762)
			++(_g);
			HX_STACK_LINE(762)
			input->update();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,updateInput,(void))

Void FlxGame_obj::draw( ){
{
		HX_STACK_FRAME("flixel.FlxGame","draw",0xc8a3a4a0,"flixel.FlxGame.draw","flixel/FlxGame.hx",781,0x34f39fed)
		HX_STACK_THIS(this)
		HX_STACK_LINE(782)
		if (((bool(!(this->_state->visible)) || bool(!(this->_state->exists))))){
			HX_STACK_LINE(784)
			return null();
		}
		HX_STACK_LINE(788)
		if ((::flixel::FlxG_obj::debugger->visible)){
			HX_STACK_LINE(791)
			int _g = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(791)
			this->ticks = _g;
		}
		HX_STACK_LINE(795)
		::flixel::FlxG_obj::signals->preDraw->dispatch();
		HX_STACK_LINE(798)
		::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS = (int)0;
		HX_STACK_LINE(801)
		{
			HX_STACK_LINE(801)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(801)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(801)
			while((true)){
				HX_STACK_LINE(801)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(801)
					break;
				}
				HX_STACK_LINE(801)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(801)
				++(_g);
				HX_STACK_LINE(801)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(801)
					continue;
				}
				HX_STACK_LINE(801)
				camera->clearDrawStack();
				HX_STACK_LINE(801)
				camera->canvas->get_graphics()->clear();
				HX_STACK_LINE(801)
				camera->debugLayer->get_graphics()->clear();
				HX_STACK_LINE(801)
				camera->fill((int(camera->bgColor) & int((int)16777215)),camera->useBgAlphaBlending,(Float(((int((int(camera->bgColor) >> int((int)24))) & int((int)255)))) / Float((int)255)),null());
			}
		}
		HX_STACK_LINE(803)
		{
			HX_STACK_LINE(803)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(803)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::plugins->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(803)
			while((true)){
				HX_STACK_LINE(803)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(803)
					break;
				}
				HX_STACK_LINE(803)
				::flixel::plugin::FlxPlugin plugin = _g1->__get(_g).StaticCast< ::flixel::plugin::FlxPlugin >();		HX_STACK_VAR(plugin,"plugin");
				HX_STACK_LINE(803)
				++(_g);
				HX_STACK_LINE(803)
				if (((bool(plugin->exists) && bool(plugin->visible)))){
					HX_STACK_LINE(803)
					plugin->draw();
				}
			}
		}
		HX_STACK_LINE(805)
		this->_state->draw();
		HX_STACK_LINE(808)
		{
			HX_STACK_LINE(808)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(808)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(808)
			while((true)){
				HX_STACK_LINE(808)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(808)
					break;
				}
				HX_STACK_LINE(808)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(808)
				++(_g);
				HX_STACK_LINE(808)
				if (((bool((bool((camera != null())) && bool(camera->exists))) && bool(camera->visible)))){
					HX_STACK_LINE(808)
					camera->render();
				}
			}
		}
		HX_STACK_LINE(811)
		this->debugger->stats->drawCalls(::flixel::system::layer::TileSheetExt_obj::_DRAWCALLS);
		HX_STACK_LINE(837)
		{
			HX_STACK_LINE(837)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(837)
			Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::cameras->list;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(837)
			while((true)){
				HX_STACK_LINE(837)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(837)
					break;
				}
				HX_STACK_LINE(837)
				::flixel::FlxCamera camera = _g1->__get(_g).StaticCast< ::flixel::FlxCamera >();		HX_STACK_VAR(camera,"camera");
				HX_STACK_LINE(837)
				++(_g);
				HX_STACK_LINE(837)
				if (((bool((bool((camera == null())) || bool(!(camera->exists)))) || bool(!(camera->visible))))){
					HX_STACK_LINE(837)
					continue;
				}
				HX_STACK_LINE(837)
				camera->drawFX();
			}
		}
		HX_STACK_LINE(839)
		::flixel::FlxG_obj::signals->postDraw->dispatch();
		HX_STACK_LINE(842)
		int _g1 = ::openfl::_legacy::Lib_obj::getTimer();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(842)
		int _g2 = (_g1 - this->ticks);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(842)
		this->debugger->stats->flixelDraw(_g2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxGame_obj,draw,(void))


FlxGame_obj::FlxGame_obj()
{
}

void FlxGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGame);
	HX_MARK_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_MARK_MEMBER_NAME(soundTray,"soundTray");
	HX_MARK_MEMBER_NAME(debugger,"debugger");
	HX_MARK_MEMBER_NAME(ticks,"ticks");
	HX_MARK_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_MARK_MEMBER_NAME(_initialState,"_initialState");
	HX_MARK_MEMBER_NAME(_state,"_state");
	HX_MARK_MEMBER_NAME(_total,"_total");
	HX_MARK_MEMBER_NAME(_accumulator,"_accumulator");
	HX_MARK_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_MARK_MEMBER_NAME(_stepMS,"_stepMS");
	HX_MARK_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_MARK_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_MARK_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_MARK_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_MARK_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_MARK_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_MARK_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_MARK_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_MARK_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_MARK_MEMBER_NAME(_startFullscreen,"_startFullscreen");
	HX_MARK_MEMBER_NAME(_requestedState,"_requestedState");
	HX_MARK_MEMBER_NAME(_resetGame,"_resetGame");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(focusLostFramerate,"focusLostFramerate");
	HX_VISIT_MEMBER_NAME(soundTray,"soundTray");
	HX_VISIT_MEMBER_NAME(debugger,"debugger");
	HX_VISIT_MEMBER_NAME(ticks,"ticks");
	HX_VISIT_MEMBER_NAME(_gameJustStarted,"_gameJustStarted");
	HX_VISIT_MEMBER_NAME(_initialState,"_initialState");
	HX_VISIT_MEMBER_NAME(_state,"_state");
	HX_VISIT_MEMBER_NAME(_total,"_total");
	HX_VISIT_MEMBER_NAME(_accumulator,"_accumulator");
	HX_VISIT_MEMBER_NAME(_elapsedMS,"_elapsedMS");
	HX_VISIT_MEMBER_NAME(_stepMS,"_stepMS");
	HX_VISIT_MEMBER_NAME(_stepSeconds,"_stepSeconds");
	HX_VISIT_MEMBER_NAME(_maxAccumulation,"_maxAccumulation");
	HX_VISIT_MEMBER_NAME(_lostFocus,"_lostFocus");
	HX_VISIT_MEMBER_NAME(_onFocusFiredOnce,"_onFocusFiredOnce");
	HX_VISIT_MEMBER_NAME(_focusLostScreen,"_focusLostScreen");
	HX_VISIT_MEMBER_NAME(_inputContainer,"_inputContainer");
	HX_VISIT_MEMBER_NAME(_customSoundTray,"_customSoundTray");
	HX_VISIT_MEMBER_NAME(_customFocusLostScreen,"_customFocusLostScreen");
	HX_VISIT_MEMBER_NAME(_skipSplash,"_skipSplash");
	HX_VISIT_MEMBER_NAME(_startFullscreen,"_startFullscreen");
	HX_VISIT_MEMBER_NAME(_requestedState,"_requestedState");
	HX_VISIT_MEMBER_NAME(_resetGame,"_resetGame");
	::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxGame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"step") ) { return step_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ticks") ) { return ticks; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { return _state; }
		if (HX_FIELD_EQ(inName,"_total") ) { return _total; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stepMS") ) { return _stepMS; }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return onFocus_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugger") ) { return debugger; }
		if (HX_FIELD_EQ(inName,"onResize") ) { return onResize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { return soundTray; }
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		if (HX_FIELD_EQ(inName,"gameStart") ) { return gameStart_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { return _elapsedMS; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { return _lostFocus; }
		if (HX_FIELD_EQ(inName,"_resetGame") ) { return _resetGame; }
		if (HX_FIELD_EQ(inName,"resizeGame") ) { return resizeGame_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { return _skipSplash; }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return onFocusLost_dyn(); }
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"updateInput") ) { return updateInput_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { return _accumulator; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { return _stepSeconds; }
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { return _initialState; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { return _inputContainer; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { return _requestedState; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { return _gameJustStarted; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { return _maxAccumulation; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { return _focusLostScreen; }
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { return _customSoundTray; }
		if (HX_FIELD_EQ(inName,"_startFullscreen") ) { return _startFullscreen; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { return _onFocusFiredOnce; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { return focusLostFramerate; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { return _customFocusLostScreen; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ticks") ) { ticks=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_state") ) { _state=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_total") ) { _total=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_stepMS") ) { _stepMS=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"debugger") ) { debugger=inValue.Cast< ::flixel::system::debug::FlxDebugger >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundTray") ) { soundTray=inValue.Cast< ::flixel::system::ui::FlxSoundTray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_elapsedMS") ) { _elapsedMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lostFocus") ) { _lostFocus=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_resetGame") ) { _resetGame=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_skipSplash") ) { _skipSplash=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_accumulator") ) { _accumulator=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stepSeconds") ) { _stepSeconds=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_initialState") ) { _initialState=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_inputContainer") ) { _inputContainer=inValue.Cast< ::openfl::_legacy::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_requestedState") ) { _requestedState=inValue.Cast< ::flixel::FlxState >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_gameJustStarted") ) { _gameJustStarted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_maxAccumulation") ) { _maxAccumulation=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_focusLostScreen") ) { _focusLostScreen=inValue.Cast< ::flixel::system::ui::FlxFocusLostScreen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_customSoundTray") ) { _customSoundTray=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_startFullscreen") ) { _startFullscreen=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_onFocusFiredOnce") ) { _onFocusFiredOnce=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"focusLostFramerate") ) { focusLostFramerate=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_customFocusLostScreen") ) { _customFocusLostScreen=inValue.Cast< ::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("focusLostFramerate"));
	outFields->push(HX_CSTRING("soundTray"));
	outFields->push(HX_CSTRING("debugger"));
	outFields->push(HX_CSTRING("ticks"));
	outFields->push(HX_CSTRING("_gameJustStarted"));
	outFields->push(HX_CSTRING("_initialState"));
	outFields->push(HX_CSTRING("_state"));
	outFields->push(HX_CSTRING("_total"));
	outFields->push(HX_CSTRING("_accumulator"));
	outFields->push(HX_CSTRING("_elapsedMS"));
	outFields->push(HX_CSTRING("_stepMS"));
	outFields->push(HX_CSTRING("_stepSeconds"));
	outFields->push(HX_CSTRING("_maxAccumulation"));
	outFields->push(HX_CSTRING("_lostFocus"));
	outFields->push(HX_CSTRING("_onFocusFiredOnce"));
	outFields->push(HX_CSTRING("_focusLostScreen"));
	outFields->push(HX_CSTRING("_inputContainer"));
	outFields->push(HX_CSTRING("_customSoundTray"));
	outFields->push(HX_CSTRING("_customFocusLostScreen"));
	outFields->push(HX_CSTRING("_skipSplash"));
	outFields->push(HX_CSTRING("_startFullscreen"));
	outFields->push(HX_CSTRING("_requestedState"));
	outFields->push(HX_CSTRING("_resetGame"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxGame_obj,focusLostFramerate),HX_CSTRING("focusLostFramerate")},
	{hx::fsObject /*::flixel::system::ui::FlxSoundTray*/ ,(int)offsetof(FlxGame_obj,soundTray),HX_CSTRING("soundTray")},
	{hx::fsObject /*::flixel::system::debug::FlxDebugger*/ ,(int)offsetof(FlxGame_obj,debugger),HX_CSTRING("debugger")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,ticks),HX_CSTRING("ticks")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_gameJustStarted),HX_CSTRING("_gameJustStarted")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxGame_obj,_initialState),HX_CSTRING("_initialState")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(FlxGame_obj,_state),HX_CSTRING("_state")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_total),HX_CSTRING("_total")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_accumulator),HX_CSTRING("_accumulator")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_elapsedMS),HX_CSTRING("_elapsedMS")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_stepMS),HX_CSTRING("_stepMS")},
	{hx::fsFloat,(int)offsetof(FlxGame_obj,_stepSeconds),HX_CSTRING("_stepSeconds")},
	{hx::fsInt,(int)offsetof(FlxGame_obj,_maxAccumulation),HX_CSTRING("_maxAccumulation")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_lostFocus),HX_CSTRING("_lostFocus")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_onFocusFiredOnce),HX_CSTRING("_onFocusFiredOnce")},
	{hx::fsObject /*::flixel::system::ui::FlxFocusLostScreen*/ ,(int)offsetof(FlxGame_obj,_focusLostScreen),HX_CSTRING("_focusLostScreen")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(FlxGame_obj,_inputContainer),HX_CSTRING("_inputContainer")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxGame_obj,_customSoundTray),HX_CSTRING("_customSoundTray")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxGame_obj,_customFocusLostScreen),HX_CSTRING("_customFocusLostScreen")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_skipSplash),HX_CSTRING("_skipSplash")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_startFullscreen),HX_CSTRING("_startFullscreen")},
	{hx::fsObject /*::flixel::FlxState*/ ,(int)offsetof(FlxGame_obj,_requestedState),HX_CSTRING("_requestedState")},
	{hx::fsBool,(int)offsetof(FlxGame_obj,_resetGame),HX_CSTRING("_resetGame")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("focusLostFramerate"),
	HX_CSTRING("soundTray"),
	HX_CSTRING("debugger"),
	HX_CSTRING("ticks"),
	HX_CSTRING("_gameJustStarted"),
	HX_CSTRING("_initialState"),
	HX_CSTRING("_state"),
	HX_CSTRING("_total"),
	HX_CSTRING("_accumulator"),
	HX_CSTRING("_elapsedMS"),
	HX_CSTRING("_stepMS"),
	HX_CSTRING("_stepSeconds"),
	HX_CSTRING("_maxAccumulation"),
	HX_CSTRING("_lostFocus"),
	HX_CSTRING("_onFocusFiredOnce"),
	HX_CSTRING("_focusLostScreen"),
	HX_CSTRING("_inputContainer"),
	HX_CSTRING("_customSoundTray"),
	HX_CSTRING("_customFocusLostScreen"),
	HX_CSTRING("_skipSplash"),
	HX_CSTRING("_startFullscreen"),
	HX_CSTRING("_requestedState"),
	HX_CSTRING("_resetGame"),
	HX_CSTRING("create"),
	HX_CSTRING("onFocus"),
	HX_CSTRING("onFocusLost"),
	HX_CSTRING("onResize"),
	HX_CSTRING("resizeGame"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("switchState"),
	HX_CSTRING("gameStart"),
	HX_CSTRING("step"),
	HX_CSTRING("update"),
	HX_CSTRING("updateInput"),
	HX_CSTRING("draw"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGame_obj::__mClass,"__mClass");
};

#endif

Class FlxGame_obj::__mClass;

void FlxGame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.FlxGame"), hx::TCanCast< FlxGame_obj> ,sStaticFields,sMemberFields,
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

void FlxGame_obj::__boot()
{
}

} // end namespace flixel
