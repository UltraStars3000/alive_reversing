#pragma once
#include "FunctionFwd.hpp"

enum class AnimId
{
    Abe_Head_Gib,
    Abe_Arm_Gib,
    Abe_Body_Gib,

    BlindMud_Head_Gib,
    BlindMud_Arm_Gib,
    BlindMud_Body_Gib,

    Glukkon_Head_Gib,
    Glukkon_Arm_Gib,
    Glukkon_Body_Gib,

    Aslik_Head_Gib,
    Aslik_Arm_Gib,
    Aslik_Body_Gib,

    Dripik_Head_Gib,
    Dripik_Arm_Gib,
    Dripik_Body_Gib,

    Phleg_Head_Gib,
    Phleg_Arm_Gib,
    Phleg_Body_Gib,

    Fleech_Head_Gib,
    Fleech_Body_Gib,

    Metal_Gib,

    Slig_Head_Gib,
    Slig_Arm_Gib,
    Slig_Body_Gib,

    Slog_Head_Gib,
    Slog_Body_Gib,

    Abe_Crouch_Start,
    Abe_Crouch_Talk_A,
    Abe_Crouch_Talk_B,
    Abe_Death_Fall,
    Abe_Death_Gas,
    Abe_Death_Z_A,
    Abe_Death_Z_B,
    Abe_Door_Enter,
    Abe_Door_Exit,
    Abe_Fall_A,
    Abe_Fall_B,
    Abe_Fall_C,
    Abe_Handstone_End,
    Abe_Handstone_Short,
    Abe_Handstone_Start,
    Abe_Hoist,
    Abe_Hoist_Down,
    Abe_Hoist_High,
    Abe_Hoist_Swing,
    Abe_Hoist_Up,
    Abe_Hop,
    Abe_Hop_End,
    Abe_Hop_Start,
    Abe_Item_Grab,
    Abe_Knock_Back,
    Abe_Knock_Forward,
    Abe_Lift,
    Abe_Lift_Down,
    Abe_Lift_End,
    Abe_Lift_Start,
    Abe_Lift_Up,
    Abe_Mine_Car_Enter,
    Abe_Mine_Car_Exit,
    Abe_Push,
    Abe_Rock,
    Abe_Rock_Cancel,
    Abe_Rock_Crouch,
    Abe_Rock_Crouch_Throw,
    Abe_Rock_Throw,
    Abe_Roll,
    Abe_Roll_End,
    Abe_Roll_Start,
    Abe_Shrug_End,
    Abe_Shrykull_End,
    Abe_Shrykull_Start,
    Abe_Slap_Bomb,
    Abe_Sorry_Start,
    Abe_Sorry_End,
    Abe_Unknown_A,
    Abe_Unknown_B,
    Abe_Unknown_C,
    Abe_Unknown_D,
    Abe_Unknown_E,
    Abe_Unknown_F,
    Abe_Unknown_G,
    Abe_Unknown_H,
    Abe_Unknown_I,
    Abe_Unknown_J,
    Abe_Well,
    Abe_Well_Enter,
    Abe_Well_Enter_Start,
    
    Fleech_Climb_A,
    Fleech_Climb_B,
    Fleech_Eat,
    Fleech_Falling,
    Fleech_Idle_A,
    Fleech_Idle_B,
    Fleech_Idle_C,
    Fleech_Idle_D,
    Fleech_Landing,
    Fleech_Sleep,
    Fleech_Speak,
    Fleech_Tongue,
    Fleech_Unknown_A,
    Fleech_Unknown_B,
    Fleech_Unknown_C,
    Fleech_Unknown_D,
    Fleech_Unknown_E,
    Fleech_Unknown_F,
    Fleech_Walk,

    Flying_Slig_Idle,
    Flying_Slig_Move_Horizontal,
    Flying_Slig_Idle_Turn_Around,
    Flying_Slig_Move_Down,
    Flying_Slig_Move_Down_Turn_Around,
    Flying_Slig_Move_Up,
    Flying_Slig_Move_Up_Turn_Around,
    Flying_Slig_Pull_Lever,
    Flying_Slig_Speak,
    Flying_Slig_Possession,
    Flying_Slig_Move_Horizontal_End,
    Flying_Slig_Move_Up_Start,
    Flying_Slig_Move_Horizontal_To_Down,
    Flying_Slig_Move_Up_To_Horizontal,
    Flying_Slig_Move_Down_To_Horizontal,
    Flying_Slig_Turn_Quick,
    Flying_Slig_Idle_To_Horizontal,
    Flying_Slig_Move_Down_Start,
    Flying_Slig_Move_Down_End,
    Flying_Slig_Knockback_Down,
    Flying_Slig_Knockback_Up,
    Flying_Slig_Move_Up_End,
    Flying_Slig_Up_Turn_Instant,
    Flying_Slig_Down_Turn_Instant,
    Flying_Slig_Move_Horizontal_To_Up,
    Flying_Slig_Turn_Horizontal,
    
    Glukkon_Aslik_Fall_Over,
    Glukkon_Aslik_Idle,
    Glukkon_Aslik_Jump,
    Glukkon_Aslik_Landing,
    Glukkon_Aslik_Laugh,
    Glukkon_Aslik_Possessed_A,
    Glukkon_Aslik_Possessed_B,
    Glukkon_Aslik_Speak_A,
    Glukkon_Aslik_Speak_B,
    Glukkon_Aslik_Speak_C,
    Glukkon_Aslik_Stand_Up_A,
    Glukkon_Aslik_Stand_Up_B,
    Glukkon_Aslik_Turn_Around,
    Glukkon_Aslik_Unknown_A,
    Glukkon_Aslik_Unknown_B,
    Glukkon_Aslik_Unknown_C,
    Glukkon_Aslik_Unknown_D,
    Glukkon_Aslik_Unknown_E,
    Glukkon_Aslik_Unknown_F,
    Glukkon_Aslik_Unknown_G,
    Glukkon_Aslik_Unknown_H,
    Glukkon_Aslik_Unknown_I,
    Glukkon_Aslik_Unknown_J,
    Glukkon_Aslik_Unknown_K,
    Glukkon_Aslik_Walk,

    Glukkon_Dripik_Fall_Over,
    Glukkon_Dripik_Idle,
    Glukkon_Dripik_Jump,
    Glukkon_Dripik_Landing,
    Glukkon_Dripik_Laugh,
    Glukkon_Dripik_Possessed_A,
    Glukkon_Dripik_Possessed_B,
    Glukkon_Dripik_Speak_A,
    Glukkon_Dripik_Speak_B,
    Glukkon_Dripik_Speak_C,
    Glukkon_Dripik_Stand_Up_A,
    Glukkon_Dripik_Stand_Up_B,
    Glukkon_Dripik_Turn_Around,
    Glukkon_Dripik_Unknown_A,
    Glukkon_Dripik_Unknown_B,
    Glukkon_Dripik_Unknown_C,
    Glukkon_Dripik_Unknown_D,
    Glukkon_Dripik_Unknown_E,
    Glukkon_Dripik_Unknown_F,
    Glukkon_Dripik_Unknown_G,
    Glukkon_Dripik_Unknown_H,
    Glukkon_Dripik_Unknown_I,
    Glukkon_Dripik_Unknown_J,
    Glukkon_Dripik_Unknown_K,
    Glukkon_Dripik_Walk,

    Glukkon_Normal_Fall_Over,
    Glukkon_Normal_Idle,
    Glukkon_Normal_Jump,
    Glukkon_Normal_Landing,
    Glukkon_Normal_Laugh,
    Glukkon_Normal_Possessed_A,
    Glukkon_Normal_Possessed_B,
    Glukkon_Normal_Speak_A,
    Glukkon_Normal_Speak_B,
    Glukkon_Normal_Speak_C,
    Glukkon_Normal_Stand_Up_A,
    Glukkon_Normal_Stand_Up_B,
    Glukkon_Normal_Turn_Around,
    Glukkon_Normal_Unknown_A,
    Glukkon_Normal_Unknown_B,
    Glukkon_Normal_Unknown_C,
    Glukkon_Normal_Unknown_D,
    Glukkon_Normal_Unknown_E,
    Glukkon_Normal_Unknown_F,
    Glukkon_Normal_Unknown_G,
    Glukkon_Normal_Unknown_H,
    Glukkon_Normal_Unknown_I,
    Glukkon_Normal_Unknown_J,
    Glukkon_Normal_Unknown_K,
    Glukkon_Normal_Walk,

    Glukkon_Phleg_Fall_Over,
    Glukkon_Phleg_Idle,
    Glukkon_Phleg_Jump,
    Glukkon_Phleg_Landing,
    Glukkon_Phleg_Laugh,
    Glukkon_Phleg_Possessed_A,
    Glukkon_Phleg_Possessed_B,
    Glukkon_Phleg_Speak_A,
    Glukkon_Phleg_Speak_B,
    Glukkon_Phleg_Speak_C,
    Glukkon_Phleg_Stand_Up_A,
    Glukkon_Phleg_Stand_Up_B,
    Glukkon_Phleg_Turn_Around,
    Glukkon_Phleg_Unknown_A,
    Glukkon_Phleg_Unknown_B,
    Glukkon_Phleg_Unknown_C,
    Glukkon_Phleg_Unknown_D,
    Glukkon_Phleg_Unknown_E,
    Glukkon_Phleg_Unknown_F,
    Glukkon_Phleg_Unknown_G,
    Glukkon_Phleg_Unknown_H,
    Glukkon_Phleg_Unknown_I,
    Glukkon_Phleg_Unknown_J,
    Glukkon_Phleg_Unknown_K,
    Glukkon_Phleg_Walk,

    Greeter_Chase,
    Greeter_Falling,
    Greeter_Hit,
    Greeter_Idle,
    Greeter_Speak,
    Greeter_Turn_Around,

    Mine_Car_Closed,
    Mine_Car_Open,
    Mine_Car_Shake_A,
    Mine_Car_Shake_B,
    Mine_Car_Tread_Idle,
    Mine_Car_Tread_Move_A,
    Mine_Car_Tread_Move_B,

    Mudokon_Chant,
    Mudokon_Chant_End,
    Mudokon_Chisel_Mining,
    Mudokon_Crouch,
    Mudokon_Crouch_To_Duck,
    Mudokon_Crouch_To_Stand,
    Mudokon_Crouch_Turn_Around,
    Mudokon_Duck,
    Mudokon_Duck_To_Crouch,
    Mudokon_Fall,
    Mudokon_Get_Up,
    Mudokon_Hit_Self,
    Mudokon_Hoist,
    Mudokon_Hoist_End,
    Mudokon_Hoist_Start,
    Mudokon_Idle,
    Mudokon_Knocked_Back_Face_Down,
    Mudokon_Knocked_Back_Face_Up,
    Mudokon_Lever_Pull,
    Mudokon_Run,
    Mudokon_Run_End_A,
    Mudokon_Run_End_B,
    Mudokon_Run_End_C,
    Mudokon_Run_Jump,
    Mudokon_Run_Jump_Start,
    Mudokon_Scrub_Cleaning,
    Mudokon_Shrug_Start,
    Mudokon_Shrug_End,
    Mudokon_Slap,
    Mudokon_Sneak,
    Mudokon_Sneak_End,
    Mudokon_Sneak_Start,
    Mudokon_Stand_To_Crouch,
    Mudokon_Talk_A,
    Mudokon_Talk_B,
    Mudokon_Talk_C,
    Mudokon_Talk_D,
    Mudokon_Turn_Around,
    Mudokon_Unknown_A,
    Mudokon_Unknown_B,
    Mudokon_Unknown_C,
    Mudokon_Unknown_E,
    Mudokon_Unknown_F,
    Mudokon_Unknown_G,
    Mudokon_Unknown_H,
    Mudokon_Unknown_I,
    Mudokon_Unknown_J,
    Mudokon_Unknown_K,
    Mudokon_Unknown_L,
    Mudokon_Unknown_M,
    Mudokon_Unknown_N,
    Mudokon_Unknown_O,
    Mudokon_Unknown_P,
    Mudokon_Unknown_Q,
    Mudokon_Unknown_R,
    Mudokon_Unknown_S,
    Mudokon_Unknown_T,
    Mudokon_Walk,
    Mudokon_Wheel,
    Mudokon_Wheel_End,
    Mudokon_Wheel_Start,
    
    Paramite_Attack,
    Paramite_Climb_Down,
    Paramite_Climb_End_Down,
    Paramite_Climb_End_Up,
    Paramite_Climb_Idle,
    Paramite_Climb_Start_Down,
    Paramite_Climb_Up,
    Paramite_Eat,
    Paramite_Fall_Death,
    Paramite_Idle,
    Paramite_Idle_To_Move,
    Paramite_Jump_Up,
    Paramite_Jump_Up_End,
    Paramite_Jump_Up_Start,
    Paramite_Move,
    Paramite_Pounce,
    Paramite_Run_A,
    Paramite_Run_B,
    Paramite_Scared,
    Paramite_Wasps,
    Paramite_Talk,
    Paramite_Talk_End,
    Paramite_Talk_Start,
    Paramite_Turn_Around,
    Paramite_Unknown_A,
    Paramite_Unknown_B,
    Paramite_Unknown_C,
    Paramite_Unknown_D,
    Paramite_Unknown_E,
    Paramite_Unknown_F,
    Paramite_Unknown_G,
    Paramite_Unknown_H,
    Paramite_Unknown_I,
    Paramite_Unknown_J,
    Paramite_Unknown_K,
    Paramite_Web_Sling,
    Paramite_Yell_A,
    Paramite_Yell_B,

    Scrab_Chew,
    Scrab_Dance,
    Scrab_Dead,
    Scrab_Eat,
    Scrab_Eat_Start,
    Scrab_Idle,
    Scrab_Jump,
    Scrab_Kick,
    Scrab_Landing_A,
    Scrab_Landing_B,
    Scrab_Landing_C,
    Scrab_Roar,
    Scrab_Run,
    Scrab_Run_Stop,
    Scrab_Showl,
    Scrab_Showl_Start,
    Scrab_Turn_Around,
    Scrab_Unknown_A,
    Scrab_Unknown_B,
    Scrab_Unknown_C,
    Scrab_Unknown_D,
    Scrab_Unknown_E,
    Scrab_Unknown_F,
    Scrab_Unknown_G,
    Scrab_Unknown_H,
    Scrab_Unknown_I,
    Scrab_Unknown_J,
    Scrab_Unknown_K,
    Scrab_Unknown_L,
    Scrab_Walk,
    Scrab_Whirl,
    Scrab_Whirl_Fight,

    Slig_Beat,
    Slig_Fall,
    Slig_Fall_Death_A,
    Slig_Fall_Death_B,
    Slig_Fall_End,
    Slig_Fall_Start,
    Slig_Get_Up,
    Slig_Idle,
    Slig_Idle_To_Shoot,
    Slig_Knocked_Down,
    Slig_Lever,
    Slig_Lift_Idle,
    Slig_Lift_Move_A,
    Slig_Lift_Move_B,
    Slig_Lift_Start_A,
    Slig_Lift_Start_B,
    Slig_Possessed,
    Slig_Reload,
    Slig_Run,
    Slig_Run_Start,
    Slig_Run_Stop,
    Slig_Run_Turn_Around,
    Slig_Shoot,
    Slig_Shoot_Step,
    Slig_Shoot_Z,
    Slig_Shoot_Z_End,
    Slig_Shuffle,
    Slig_Sleep,
    Slig_Talk_A,
    Slig_Talk_B,
    Slig_Talk_C,
    Slig_Talk_D,
    Slig_Turn_Around,
    Slig_Walk,
    Slig_Walk_Start,
    Slig_Unknown_A,
    Slig_Unknown_B,
    Slig_Unknown_C,
    Slig_Unknown_D,
    Slig_Unknown_E,
    Slig_Unknown_F,
    Slig_Wake_Up,

    Slog_Bark,
    Slog_Bark_Short_A,
    Slog_Bark_Short_B,
    Slog_BROKEN_J,
    Slog_Die,
    Slog_Eat,
    Slog_Falling,
    Slog_Idle_A,
    Slog_Idle_B,
    Slog_Jump_Up,
    Slog_Lunge,
    Slog_Run,
    Slog_Run_Stop,
    Slog_Run_Turn_Around,
    Slog_Scratch,
    Slog_Sleep_A,
    Slog_Sleep_B,
    Slog_Sleep_C,
    Slog_Turn_Around,
    Slog_Unknown_A,
    Slog_Unknown_B,
    Slog_Unknown_C,
    Slog_Unknown_D,
    Slog_Unknown_E,
    Slog_Walk,

    Slurg_Burst,
    Slurg_Move,
    Slurg_Turn_Around,

    BG_Brewery_Barrel_Anim,
    BG_Mine_Fan,
    BG_Feeco_Small_Fan,
    BG_Heat_Extractor_Fan,
    Bone,
    Bone_Bag_A,
    Bone_Bag_B,
    Bone_Bag_C,
    Bone_Saw_Horizontal_Off,
    Bone_Saw_Horizontal_On,
    Bone_Saw_Vertical_Off,
    Bone_Saw_Vertical_On,
    Bullet_Casing,
    Door_Barracks_Closed,
    Door_Barracks_Closing,
    Door_Bonewerkz_Closed,
    Door_Bonewerkz_Closing,
    Door_Brewery_Closed,
    Door_Brewery_Closing,
    Door_Feeco_Closed,
    Door_Feeco_Closing,
    Door_Flame,
    Door_Flame_Glow,
    Door_Flame_Spark,
    Door_Lock_Idle,
    Door_Lock_Open,
    Door_Mines_Closed,
    Door_Mines_Closing,
    Door_Temple_Closed,
    Door_Temple_Closing,
    Door_Train_Closed,
    Door_Train_Closing,
    Dove_Idle,
    Dove_Flying,
    Electric_Wall,
    Explosion,
    Explosion_Mine,
    Explosion_Small,
    Falling_Crate_A,
    Falling_Crate_B,
    Falling_Rock_A,
    Falling_Rock_B,
    Fart,
    Foot_Switch_Bonewerkz_Idle,
    Foot_Switch_Bonewerkz_Pressed,
    Foot_Switch_Industrial_Idle,
    Foot_Switch_Industrial_Pressed,
    Foot_Switch_Vault_Idle,
    Foot_Switch_Vault_Pressed,
    Grenade,
    Grenade_Machine_Button_Off,
    Grenade_Machine_Button_On,
    Grenade_Machine_Nozzle,
    Grenade_Machine_Nozzle_Drop_Grenade,
    Lift_Rope,
    Mine,
    Motion_Detector_Flare,
    Motion_Detector_Laser,
    Moving_Bomb,
    Rock,
    Rock_Sack_A,
    Rock_Sack_B,
    Rock_Sack_Hit,
    Security_Door_Idle,
	Security_Door_Speak,
    Security_Orb,
    Slam_Door_Industrial_Closed,
    Slam_Door_Industrial_Closing,
    Slam_Door_Industrial_Opening,
    Slam_Door_Vault_Closed,
    Slam_Door_Vault_Closing,
    Slam_Door_Vault_Opening,
    Slap_Lock_Idle_A,
	Slap_Lock_Idle_B,
    Slap_Lock_Shake,
    Sparks,
    Status_Light_Green,
    Status_Light_Red,
    Switch_Idle,
    Switch_Pull_Left_A,
    Switch_Pull_Left_B,
    Switch_Pull_Right_A,
    Switch_Pull_Right_B,
    Timed_Mine_Armed,
    Timed_Mine_Idle,
    Tortured_Modukon,
    Tortured_Modukon_Released,
    Tortured_Modukon_Zap,
    Trap_Door_Closed,
    Trap_Door_Closing,
    Trap_Door_Open,
    Trap_Door_Opening,
    Trap_Door_Tribal_Closed,
    Trap_Door_Tribal_Closing,
    Trap_Door_Tribal_Open,
    Trap_Door_Tribal_Opening,
    UXB_Active,
    UXB_Disabled,
    UXB_Toggle,
    Well_Leaf,
    Work_Wheel_Idle,
    Work_Wheel_Turning,
    Zap_Line_Blue,
    Zap_Line_Red,
    
    Anim_Tester, // For animation testing with the TestAnimation.cpp, ignore this.
};

enum class PalId
{
    Default, // Don't override the anims default pal
    BlindMud,
};

struct PalRecord
{
    PalId mId;
    const char* mBanName;
    int mResourceId;
};

struct AnimRecord
{
    AnimId mId;
    const char* mBanName;
    int mFrameTableOffset;
    short mMaxW;
    short mMaxH;
    int mResourceId;
    PalId mPalOverride;
};

const PalRecord& PalRec(PalId toFind);
const AnimRecord& AnimRec(AnimId toFind);

// AE and AO resource ids
enum ResourceID
{
    kUnknownResID_0 = 0,
    kDemoResID = 1,
    kLcdfontResID = 2,
    kAbebasicResID = 10,
    kAbepullResID = 11,
    kAbepickResID = 12,
    kAbebombResID = 13,
    kAbethrowResID = 14,
    kAbewaspResID = 16,
    kAberingResID = 17,
    kAbesmashResID = 19,
    kAbefallResID = 20,
    kAbestoneResID = 21,
    kAbecrushResID = 22,
    kAbeblowResID = 25,
    kAbeknbkResID = 26,
    kAbeknfdResID = 27,
    kAbeknokzResID = 28,
    kAbeyawnResID = 31,
    kAberubResID = 32,
    kAbesizeResID = 33,
    kAbebordResID = 34,
    kAbeeyesResID = 35,
    kAbebuttResID = 36,
    kAbenutsResID = 37,
    kAbepnlkResID = 38,
    kAbewizzResID = 39,
    kAbetalkResID = 40,
    kAbehoistResID = 42,
    kAbeedgeResID = 43,
    kAbeswingResID = 44,
    kAbedoorResID = 45,
    kAbewellResID = 47,
    kAbeommResID = 48,
    kAbeliftResID = 53,
    kAbebsic1ResID = 55,
    kDovbasicResID = 60,
    kWaspResID = 61,
    kHintflyResID = 62,
    kBatBasicResID = 63,
    kFireFlyResID = 64,
    kDovshootResID = 66,
    kElumUnknownResID_100 = 100, // AO only
    kAneknbkResID = 106, // AO only
    kAneedgeResID = 108, // AO only
    kElumUnknownResID_110 = 110, // AO only
    kElumUnknownResID_112 = 112, // AO only
    kAbeCarResId = 113,
    kAneprmntResID = 115,
    kAbemorphResID = 117,
    kAbegasResID = 118,
    kShrmorphResID = 121,
    kUnknownResID_125 = 125,
    kAbespeakResID = 130,
    kAbeintroResID = 131,
    kAbespek2ResID = 132,
    kSligSpeakResID = 140,
    kGlukkonSpeakResID = 150,
    kParamiteSpeakResID = 160,
    kScrabSpeakResID = 170,
    kElmbasicResID_200 = 200, // AO only
    kHappyiconResID = 201,
    kAngryiconResID = 202,
    kNormaliconResID = 203,
    kUnknownResID_204 = 204,
    kElmnknbkResID = 215, // AO only
    kElmfallResID_216 = 216, // AO only
    kElmblowResID_217 = 217,
    kElumUnknownResID_220 = 220, // AO only
    kElumUnknownResID_221 = 221, // AO only
    kElmprmntResID__222 = 222, // AO only
    kElumUnknownResID_223 = 223, // AO only
    kElumUnknownResID_224 = 224, // AO only
    kElmaloneResID_230 = 230, // AO only
    kBgexpldResID = 300,
    kExplo2ResID = 301,
    kAlrmFlarResID = 302,
    kDustResID = 303,
    kHubFireResID = 304,
    kVaporResID = 305,
    kSlurgResID = 306,
    kGreeterResID = 307,
    kOmmflareResID = 312,
    kPortalTerminatorID = 313,
    kSparksResID = 314,
    kSpotliteResID = 316,
    kSkiddustResID = 317,
    kSmokeResID = 318,
    kBigflashResID = 319,
    kWorkwhelResID = 320,
    kHoneyResID = 337,
    kWellLeafResID = 341,
    kSquibResID = 343,
    kZflashResID = 344,
    kFxflareResID = 348,
    kDeathFlareResID = 349,
    kAberockResID = 350,
    kPortliteResID = 351,
    kPortlitResID = 353,
    kSquibSmokeResID = 354,
    kSplineResID = 355,
    kDrpRockResID = 357,
    kStickResID = 358,
    kShellResID = 360,
    kGlowResID = 361,
    kDoaexploResID = 363,
    kMetalResID = 365,
    kBloodropResID = 366,
    kOptflareResID = 367,
    kWdropResID = 368,
    kSplashResID = 369,
    kAntResID = 370,
    kDanliteResID = 371,
    kSmallExplo2ResID = 372,
    kStatusLightResID = 373,
    kUnknownResID_374 = 374,
    kTorturedMudTearsResID = 375,
    kSlgbasicResID = 412,
    kSlgsleepResID = 413,
    kSlgknbkResID = 414,
    kSlgedgeResID = 415,
    kSlgsmashResID = 416,
    kSlgzshotResID = 417,
    kSlgknfdResID = 418,
    kSlgleverResID = 419,
    kSlgliftResID = 420,
    kSligBlowResID = 423,
    kSlgbeatResID = 426,
    kUnknownResID_448 = 448,
    bUnknownResID_449 = 449,
    kFlySligResID = 450,
    kSlingmudResID_508 = 508,
    kMudscrubResID = 510,
    kMudchslResID = 511,
    kMudidleResID = 512,
    kMudoduckResID = 514,
    kAbeworkResID = 515,
    kMudltusResID = 516,
    kMudbtlnkResID = 517,
    kTorturedMud = 518,
    kMudangryResID = 530,
    kMudsadResID = 531,
    kMudwiredResID = 532,
    kMudblindResID = 533,
    kMudsickResID = 534,
    kMudombieResID = 550,
    kDogbasicResID = 570,
    kDogrstnResID = 571,
    kDogattkResID = 572,
    kDogknfdResID = 573,
    kDogidleResID = 574,
    kSlogBlowResID = 576,
    kUnknownResID_580 = 580,
    kUnknownResID_590 = 590,
    kBoneResID = 591,
    kArjbasicResID = 600,
    kArjeatResID = 601,
    kArjclimbResID = 604,
    kArjpumpResID = 605,
    kArjscrchResID = 609,
    kArjwaspResID = 610,
    kArjjumpResID = 611,
    kArjponceResID = 614,
    kArjfalrkResID = 615,
    kArsbasicResID = 700,
    kArseatResID = 701,
    kArsprceResID = 702,
    kArsskwrResID = 703,
    kArswhirlResID = 704,
    kArshowlResID = 705,
    kArsdanceResID = 706,
    kArssackResID = 707,
    kArsdeadResID = 708,
    kArsroarResID = 709,
    kArsgrwlResID = 710,
    kArschewResID = 711,
    kArscrshResID = 713,
    kGlkbasicResID = 800,
    kUnknownResID_801 = 801,
    kGlukAslikResID = 802,
    kUnknownResID_803 = 803,
    kGlukDripikResID = 804,
    kUnknownResID_805 = 805,
    kGlukPhlegResID = 806,
    kUnknownResID_807 = 807,
    kGlukredResID = 825,
    kGlukgrenResID = 826,
    kGlukblueResID = 827,
    kGlukaquaResID = 828,
    kFleechResID = 900,
    kRopesResID = 1000,
    kPulleyResID = 1001,
    kP2c2bagResID = 1002,
    kP5c1wlkResID = 1003,
    kP6c1trapResID = 1004,
    kBombResID = 1005,
    kGrenflshResID = 1006,
    kP4c5hiveResID = 1008,
    kSwitchResID = 1009,
    kBombflshResID = 1011,
    kP2c3HiveResID = 1013,
    kPullringResID = 1014,
    kP6c4tubeResID = 1017,
    kP7c1spikResID = 1018,
    kHammerResID = 1019,
    kCrystalResID = 1030,
    kLiftResID = 1032,
    kLandmineResID = 1036,
    kTbombResID = 1037,
    kBGStarResID = 1039,
    kMineflshResID = 1040,
    kP1c3tubeResID = 1050,
    kUnknownResID_1053 = 1053,
    kUnknwonResID_1057 = 1057,
    kDebrisID00 = 1105,
    kTubeResID = 1200,

    kTestanimResID = 2000,

    kF2zballResID = 2001,
    kF2stnbalResID = 2002,
    kF2stnsckResID = 2003,
    kChimeResID = 2005,
    kMaimGameResID = 2006,
    kF2rockResID = 2007,
    kF2eyeorbResID = 2008,
    kPupilResID = 2009,
    kTriggerResID = 2010,
    kF2p3dorResID = 2012,
    kUnknownResID_2013 = 2013,
    kFlintLockResID = 2017,
    kRockdoorResID = 2018,
    kHubdoorResID = 2019,
    kSlamResID = 2020,
    kMeatResID = 2023,
    kF2ChimeBallResID = 2024,
    kF2ChimeRackResID = 2025,
    kGourdResID = 2028,
    kWebResID = 2034,
    kRockShadowResID = 2035,
    kMovebombResID = 3006,
    kD2elumResID = 4002,
    kElecwallResID = 6000,
    kMotionResID = 6001,
    kMflareResID = 6002,
    kMeatsawResID = 6003,
    kDrillResID = 6004,
    kGrenadeResID = 6005,
    kR1sdoorResID = 6006,
    kR1buttonResID = 6008,
    kR1bpipeResID = 6009,
    kGreenGlowResID_6010 = 6010, // AO only
    kRedGlowResID_6011 = 6011, // AO only
    kUnknownResID_6013 = 6013,
    kUnknownResID_6014 = 6014, // AO only
    kUnknownResID_6016 = 6016,
    kEvilFartResID = 6017,
    kR1sdosResID_6027 = 6027,
    kFlintGlowResID_6028 = 6028, // AO only
    kGreenDoorLightResID_6031 = 6031, // AO only
    kRedDoorLightResID_6032 = 6032, // AO only
    kTwnkleResID = 7012,
    kControlsResID = 8000,
    kDoorResID = 8001,
    kHighliteResID = 8002,
    kHighlitePalResID = 8003,
    kLoadingResID = 8010,
};

namespace AO {

enum AOResourceID
{


};

}
