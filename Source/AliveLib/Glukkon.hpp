#pragma once

#include "FunctionFwd.hpp"
#include "Path.hpp"
#include "BaseAliveGameObject.hpp"

enum class GlukkonTypes : __int16
{
    Normal_0 = 0,
    Aslik_1 = 1,
    Drpik_2 = 2,
    Phleg_3 = 3,
    Normal_4 = 4,
    Normal_5 = 5,
};

struct Path_Glukkon : public Path_TLV
{
    // TODO: These are wrong/shifted in some cases
    __int16 field_10_scale;
    __int16 field_12_start_direction;
    __int16 field_14_calm_motion;
    __int16 field_16_pre_alarm_delay;
    __int16 field_18_post_alarm_delay;
    __int16 field_1A_help_trigger_id;
    __int16 field_1C_spawn_id;
    __int16 field_1E_spawn_direction;
    __int16 field_20_spawn_delay;
    GlukkonTypes field_22_glukkon_type;
    __int16 field_24_start_gas_id;
    __int16 field_26_play_movie_id;
    __int16 field_28_movie_to_play_id;
    __int16 field_2A_pad;
};
ALIVE_ASSERT_SIZEOF_ALWAYS(Path_Glukkon, 0x2C);


class Glukkon;
using TGlukkonAIFn = __int16 (Glukkon::*)();
using TGlukkonMotionFn = void (Glukkon::*)();

class Glukkon : public BaseAliveGameObject
{
public:
    EXPORT Glukkon* ctor_43F030(Path_Glukkon* pTlv, int tlvInfo);

    virtual BaseGameObject* VDestructor(signed int flags) override;

    virtual void VUpdate() override;

public:
    EXPORT void M_0_442D10();
    EXPORT void M_1_442D30();
    EXPORT void M_2_442F10();
    EXPORT void M_3_442F40();
    EXPORT void M_4_443030();
    EXPORT void M_5_4434C0();
    EXPORT void M_6_4434E0();
    EXPORT void M_7_443510();
    EXPORT void M_8_443760();
    EXPORT void M_9_443790();
    EXPORT void M_10_443B50();
    EXPORT void M_11_4437D0();
    EXPORT void M_12_4438F0();
    EXPORT void M_13_443930();
    EXPORT void M_14_443950();
    EXPORT void M_15_443970();
    EXPORT void M_16_4439B0();
    EXPORT void M_17_4439D0();
    EXPORT void M_18_443A00();
    EXPORT void M_19_443A30();
    EXPORT void M_20_442FC0();
    EXPORT void M_21_443A60();
    EXPORT void M_22_443010();
    EXPORT void M_23_443910();
    EXPORT void M_24_443990();

private:
    EXPORT void Init_43F260();

    EXPORT Glukkon* vdtor_43F230(signed int flags);

    EXPORT void dtor_43F570();

    EXPORT void vUpdate_43F770();

    EXPORT void sub_440600();
private:
    __int16 field_116;
    __int16 field_118;
    __int16 field_11A;
    __int16 field_11C;
    __int16 field_11E;
    __int16 field_120;
    __int16 field_122;
    __int16 field_124;
    __int16 field_126;
    __int16 field_128;
    __int16 field_12A;
    __int16 field_12C;
    __int16 field_12E;
    __int16 field_130;
    __int16 field_132;
    __int16 field_134;
    __int16 field_136;
    __int16 field_138;
    __int16 field_13A;
    __int16 field_13C;
    __int16 field_13E;
    __int16 field_140;
    __int16 field_142;
    __int16 field_144;
    __int16 field_146;
    __int16 field_148;
    __int16 field_14A;
    __int16 field_14C;
    __int16 field_14E;
    __int16 field_150;
    __int16 field_152;
    __int16 field_154;
    __int16 field_156;
    __int16 field_158;
    __int16 field_15A;
    __int16 field_15C;
    __int16 field_15E;
    __int16 field_160;
    __int16 field_162;
    __int16 field_164;
    __int16 field_166;
    __int16 field_168;
    __int16 field_16A;
    __int16 field_16C;
    __int16 field_16E;
    __int16 field_170;
    __int16 field_172;
    __int16 field_174;
    __int16 field_176;
    __int16 field_178;
    __int16 field_17A;
    __int16 field_17C;
    __int16 field_17E;
    __int16 field_180;
    __int16 field_182;
    __int16 field_184;
    __int16 field_186;
    __int16 field_188;
    __int16 field_18A;
    __int16 field_18C;
    __int16 field_18E;
    __int16 field_190;
    __int16 field_192;
    __int16 field_194;
    __int16 field_196;
    __int16 field_198;
    __int16 field_19A;
    __int16 field_19C;
    __int16 field_19E;
    __int16 field_1A0;
    __int16 field_1A2;
    __int16 field_1A4;
    __int16 field_1A6;
    Path_Glukkon field_1A8_tlvData;
    int field_1D4_timer;
    int field_1D8;
    FP field_1DC;
    __int16 field_1E0;
    __int16 field_1E2_bUnknown;
    __int16 field_1E4_level;
    __int16 field_1E6_path;
    __int16 field_1E8_camera;
    char field_1EA_speak;
    char field_1EB_pad;
    int field_1EC;
    int field_1F0;
    int field_1F4;
    int field_1F8;
    __int16 field_1FC;
    __int16 field_1FE;
    int field_200;
    int field_204;
    int field_208_obj_id;
    TGlukkonAIFn field_20C_brain_state_fn;
    __int16 field_210;
    __int16 field_212;
    int field_214_tlv_info;
};
ALIVE_ASSERT_SIZEOF(Glukkon, 0x218);