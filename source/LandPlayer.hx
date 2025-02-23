package;

 import flixel.FlxSprite;
 import flixel.FlxG;
 import flixel.util.FlxColor;
 import flixel.FlxObject;
 import openfl.Assets;
 import flixel.util.FlxSpriteUtil;


/**
* This Class contains the functions for the Player on land.
**/
 class LandPlayer extends PolarSprite
 {
    //Player attributes
    private var MAX_HEALTH:Int = 5;
    private var ACCELERATION:Int = 400;
    private var RUN_SPEED:Int = 100;
    private var SPRINT_SPEED:Int = 130;
    private var JUMP_SPEED:Int = 200;
    private var GRAVITY:Int = 500;

    //Abilities
    public var _stunGun:StunGun;
    public var _crateGun:CrateGun;
    
    //Animation helper variables
    public var _flickering:Bool;

    //checkpoints
    public var _resetX:Float;
    public var _resetY:Float;

    /**
    * Handles the creation of a player creation.
    **/
     public function new(X, Y, resetX, resetY)
     {

         super(X, Y);

         //Set movement variables.
         drag.set(RUN_SPEED*6,JUMP_SPEED*2);
         maxVelocity.set(RUN_SPEED,JUMP_SPEED);
         acceleration.y = GRAVITY;

         //Set respawn area
         _resetX = resetX;
         _resetY = resetY;

          //Set the player health
         health = MAX_HEALTH;
            
        //  Load the player.png into this sprite.
        //  The 2nd parameter tells Flixel it's animated, then the third and fourth say it is a sprite sheet and it should chop it up into 16x16 sized frames.
        loadGraphic(Reg.LANDPLAYER, true, 16, 16);
        //makeGraphic(16,16)
            

        //  We also shave 2 pixels off each side to make it slip through gaps easier. Changing the width/height does NOT change the visual sprite, just the bounding box used for physics.
        width = 12;
        height = 16;
            
        //  Because we've shaved a few pixels off, we need to offset the sprite to compensate
        offset.x = 2;
            
        //  The Animation sequences we need
        animation.add("idle", [0, 1], 5, true);
        animation.add("walk", [2, 3], 10, true);
        animation.add("run", [2, 3], 10, true);
        animation.add("jump", [2], 4, false);
        animation.add("fall", [3], 0, false);
        animation.add("hurt", [2], 0, false);
        animation.add("dead", [3], 0, false);

        //  Add the Stun Gun
        _stunGun = new StunGun("Stun Gun",this);
        FlxG.state.add(_stunGun.group);
        // Add the Crate Gun
         _crateGun = new CrateGun("Crate Gun",this);
        FlxG.state.add(_crateGun.group);
     }
    /**
    * Updates the player, mostly for movement and eventually abilities. 
    **/
     override public function update():Void
     {
        acceleration.x = 0; 
        animationCheck();
        controls(); 

        super.update();  

     }

     private function animationCheck()
     {

        if (isTouching(FlxObject.FLOOR))
        {
            if (velocity.x > 100 || velocity.x < -100)
            {
                animation.play("run");
            }
            else if (velocity.x > 0 || velocity.x < 0)
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
        if (FlxG.keys.pressed.LEFT)
        {
            acceleration.x = -ACCELERATION;
            flipX = true;
            _stunGun.setBulletDirection(180,300);
            _stunGun.setBulletOffset(-5,7);
            _crateGun.setBulletDirection(195,180);
            _crateGun.setBulletOffset(-5,7);
        }
        else if (FlxG.keys.pressed.RIGHT)
        {
            acceleration.x = ACCELERATION;
            flipX = false;
            _stunGun.setBulletDirection(360,300);
            _stunGun.setBulletOffset(5,7);
            _crateGun.setBulletDirection(345,180); 
            _crateGun.setBulletOffset(5,7);
        }
        // Mario Style jump
        if(FlxG.keys.justPressed.UP && isTouching(FlxObject.FLOOR))
        {
            velocity.y = -JUMP_SPEED;

        }
        if (FlxG.keys.justReleased.UP && velocity.y < 0)
        {
            velocity.y = velocity.y / 2;
        }
        // Polarity
        /*if (FlxG.keys.justPressed.C)
        {
            switchPolarity();           
        }*/
        // Stun Gun
        if (FlxG.keys.justPressed.C)
        {   
            _stunGun.soundFire();
        }
        // Crate gun
        if (FlxG.keys.pressed.X)
        {   
            _crateGun.fire();
        }
     }
     override function hurt(Damage:Float)
     {
            flicker(2);
            FlxG.camera.shake(0.01, 0.2);
            return super.hurt(Damage);
     } 
     override function kill()
     {
        exists = false;
        FlxG.camera.flash(0xffFFFFFF, .30);
        FlxG.camera.fade(FlxColor.BLACK, 3, false, doneFadeOut);
     }
     private function flicker(Duration:Float):Void
     {
         FlxSpriteUtil.flicker(this, Duration, 0.02, true, true, function(_) 
         {
            _flickering = false;
         });
         _flickering = true;
     } 
     private function doneFadeOut():Void 
    {
        reset(_resetX, _resetY);
        health = MAX_HEALTH;
        FlxG.camera.stopFX();
        FlxG.camera.fade(FlxColor.TRANSPARENT,2,true);
    }     
 }