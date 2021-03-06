#pragma once

#include "FunctionFwd.hpp"
#include "Factory.hpp"

namespace AO {

enum class LevelIds : __int16
{
    eNone = -1,
    eMenu_0 = 0,
    eRuptureFarms_1 = 1,
    eLines_2 = 2,
    eForest_3 = 3,
    eForestTemple_4 = 4,
    eStockYards_5 = 5,
    eStockYardsReturn_6 = 6,
    eRemoved_7 = 7,
    eDesert_8 = 8,
    eDesertTemple_9 = 9,
    eCredits_10 = 10,
    eRemoved_11 = 11,
    eBoardRoom_12 = 12,
    eRuptureFarmsReturn_13 = 13,
    eForestChase = 14,
    eDesertEscape = 15,
};

enum TlvTypes : __int16
{
    ContinuePoint_0 = 0,
    PathTransition_1 = 1,
    Hoist_3 = 3,
    Edge_4 = 4,

    LocalWell_11 = 11,

    DeathDrop_5 = 5,
    Door_6 = 6,

    LiftPoint_8 = 8,

    Slig_24 = 24,
    Slog_25 = 25,
    Switch_26 = 26,

    StartController_28 = 28,

    LiftMud_32 = 32,

    Pulley_35 = 35,

    ElumStart_38 = 38,

    HoneyDripTarget_42 = 42,

    WellExpress_45 = 45,

    Paramite_48 = 48,

    RingMud_50 = 50,
    MovieStone_51 = 51,

    BirdPortalExit_53 = 53,
    BellSongStone_54 = 54,
    
    eSligBoundLeft_57 = 57,
    InvisibleZone_58 = 58,

    Slig_66 = 66,

    Scrab_72 = 72,
    
    ScrabLeftBound_74 = 74,
    ScrabRightBound_75 = 75,
    eSligBoundRight_76 = 76,
    eSligPersist_77 = 77,
    EnemyStopper_79 = 79,

    Mud_82 = 82,
    ZSligCover_83 = 83,

    MovingBombStopper_87 = 87,
    MeatSaw_88 = 88,
    MudPathTrans_89 = 89,

    ScrabNoFall_93 = 93,

    DemoPlaybackStone_96 = 96,
    GrenadeMachine_97 = 97,

    ElumPathTrans_99 = 99,
    HandStone_100 = 100,

    SoftLanding_114 = 114,
    ResetPath_115 = 115,
};

struct Path_TLV;
class Map;

using TTempFn = int(CC*)();

struct PathData
{
    TTempFn field_0;
    __int16 field_4_bLeft;
    __int16 field_6_bRight;
    __int16 field_8_bTop;
    __int16 field_A_bBottom;
    __int16 field_C_grid_width;
    __int16 field_E_grid_height;
    __int16 field_10;
    __int16 field_12;
    int field_14_object_offset;
    int field_18_object_index_table_offset;
    PathFunctionTable field_1C_object_funcs;
};

struct CollisionInfo;

using TCollisionsFactory = std::add_pointer<void(const CollisionInfo* pCollisionInfo, const BYTE* pPathData)>::type;

struct CollisionInfo
{
    TCollisionsFactory field_0_fn_ptr;
    __int16 field_4_left;
    __int16 field_6_right;
    __int16 field_8_top;
    __int16 field_A_bottom;
    unsigned int field_C_collision_offset;
    unsigned int field_10_num_collision_items;
    unsigned int field_14_grid_width;
    unsigned int field_18_grid_height;
};

struct PathBlyRec
{
    const char* field_0_blyName;
    const PathData* field_4_pPathData;
    const CollisionInfo* field_8_pCollisionData;
    WORD field_C_overlay_id;
    WORD field_E;
};

struct FmvInfo
{
    const char* field_0_pName;
    unsigned __int16 field_4_id;
    __int16 field_6;
    __int16 field_8_stop_music;
    __int16 field_A;
    __int16 field_C_volume;
    __int16 field_E;
};

struct SoundBlockInfo
{
    const char* field_0_vab_header_name;
    const char* field_4_vab_body_name;
    int field_8_vab_id;
    BYTE* field_C_pVabHeader;
};

struct PathRoot
{
    const PathBlyRec* field_0_pBlyArrayPtr;
    FmvInfo* field_4_pFmvArray;
    SoundBlockInfo* field_8_pMusicInfo;
    const char* field_C_bsq_file_name;
    __int16 field_10_reverb;
    __int16 field_12_bg_music_id;
    const char* field_14_lvl_name;
    __int16 field_18_num_paths;
    __int16 field_1A_unused; // message to display to change cd ??
    int field_1C_overlay_idx;
    const char* field_20_lvl_name_cd;
    int field_24;
    const char* field_28_ovl_name_cd;
    int field_2C;
    const char* field_30_mov_name_cd;
    const char* field_34_idx_name;
    const char* field_38_bnd_name;
};

struct PathRootContainer
{
    PathRoot paths[16];
};

EXPORT const PathBlyRec* CC Path_Get_Bly_Record_434650(LevelIds level, unsigned __int16 path);

EXPORT FmvInfo* CC Path_Get_FMV_Record_434680(LevelIds levelId, unsigned __int16 fmvId);

EXPORT int CC Path_Format_CameraName_4346B0(char* pNameBuffer, LevelIds level, __int16 path, __int16 camera);

extern PathRootContainer gMapData_4CAB58;

}
