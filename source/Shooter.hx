package;

 import flixel.FlxSprite;
 import flixel.FlxG;
 import flixel.FlxObject;
 import flixel.util.FlxMath;
 import flixel.util.FlxColor;
 import openfl.Assets;
 import flixel.effects.FlxFlicker;
 using flixel.util.FlxSpriteUtil;
/**
* This Class contains the functions for the Player on land.
**/
 class Shooter extends FlxSprite
 {
    //Player attributes
    private var MAX_HEALTH:Int = 10;
    private var ACCELERATION:Int = 400;
    private var RUN_SPEED:Int = 50;
    private var SPRINT_SPEED:Int = 130;
    private var JUMP_SPEED:Int = 120;
    private var GRAVITY:Int = 500;
    private var MAX_KNOCKEDOUT = 5;
    private var DISTANCE_SEEN = 120;

   	// Mechanics
   	public var _enemyGun:EnemyGun;
   	public var _targetDistance:Float;
    public var _targetY:Float;
    
    //Animation helper variables
    public var _hurtCounter:Float = 0;
    public var _target:FlxSprite;
    public var _flickering:Bool;
    public var _knockedOut:Bool;

    /**
    * Handles the creation of a player creation.
    **/
     public function new(X, Y, Target:FlxSprite)
     {

         super(X, Y);

         //Set movement variables.
         drag.set(RUN_SPEED*4,JUMP_SPEED*5);
         maxVelocity.set(RUN_SPEED,GRAVITY);
         acceleration.y = GRAVITY;


         //Set the target
         _target = Target;
         //Set the player health
         health = MAX_HEALTH;
            
         //  Load the player.png into this sprite.
         //  The 2nd parameter tells Flixel it's animated, then the third and fourth say it is a sprite sheet and it should chop it up into 16x16 sized frames.
         //loadGraphic(Reg.LANDPLAYER, true, 16, 16);
         makeGraphic(12,16,FlxColor.RED);

         //  We also shave 2 pixels off each side to make it slip through gaps easier. Changing the width/height does NOT change the visual sprite, just the bounding box used for physics.
         width = 10;
         height = 16;
            
         //  Because we've shaved a few pixels off, we need to offset the sprite to compensate
         offset.x = 2;
            
         //  The Animation sequences we need
         animation.add("idle", [0, 1], 5, true);
         animation.add("walk", [7, 8, 9, 10, 11], 10, true);
         animation.add("run", [2, 3, 4, 5, 6], 10, true);
         animation.add("jump", [3, 4], 4, false);
         animation.add("fall", [5], 0, false);
         animation.add("melee", [12, 13, 14], 5, false);
         animation.add("hurt", [3], 0, false);
         animation.add("dead", [5], 0, false);

         //  Add the Stun Gun
         _enemyGun = new EnemyGun("Enemy Gun",this);
         Reg.enemyBullets.add(_enemyGun.group);
     }
    /**
    * Updates the player, mostly for movement and eventually abilities. 
    **/
     override public function update():Void
     {
        acceleration.x = 0;
        if(_knockedOut)
        {
        	knockedOut();
        } 
        else
        {
        	_targetDistance = FlxMath.distanceBetween(_target,this); 
            _targetY = _target.y - y;   
        	fireCheck();
        	controls(); 
        } 
		super.update();
     }
     private function fireCheck()
     {
     	if  (_targetDistance < 80)
     	{
     		_enemyGun.fire();
     	}
     }
     private function animationCheck()
     {
        if (isTouching(FlxObject.FLOOR))
        {
            if (velocity.x > 0 || velocity.x < 0)
            {
                animation.play("walk");
            }
            else
            {
                animation.play("idle");
            }
        }
        
        else if (velocity.y < 0)
        {
            animation.play("jump");
        }
        else
        {
            animation.play("fall");
        }
    }
    private function controls()
    {
    	if (_targetDistance < 180 && _targetDistance > 50 && _targetY < 50 && _targetY > -50 && !_flickering)
    	{
        	if (_target.x < x)
        	{
            	acceleration.x = -ACCELERATION;
            	flipX = true;
            	_enemyGun.setBulletDirection(180,300);
        	}
        	else
        	{
            	acceleration.x = ACCELERATION;
            	flipX = false;
            	_enemyGun.setBulletDirection(360,300);
        	}
        }
     }
     public function stun(Damage:Float)
        {
        	_hurtCounter += Damage;
        	if (knockedOutCheck())
        	{
        		_knockedOut = true;
        		flicker(MAX_KNOCKEDOUT);
        	}
        	else 
        	{
            	flicker(0.2);
            }
        } 
     private function flicker(Duration:Float):Void
     {
         FlxSpriteUtil.flicker(this, Duration, 0.02, true, true, function(_) 
         {
            _flickering = false;
         });
         _flickering = true;
     }
     private function knockedOut()
     {
		if(_hurtCounter > 0)
        	{
        		_hurtCounter -= FlxG.elapsed;
        	}
        else
        	{
        		_knockedOut = false;
        	}
     }
     private function knockedOutCheck()
     {
        if(_hurtCounter > MAX_KNOCKEDOUT)
        {
            FlxG.camera.shake(0.01, 0.2);
            return true;
        }
        else
        {
        	return false;
        }
     }
 }