#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeInWarningText
struct UBPW_OutsidePlayArea_C_FadeInWarningText_Params
{
};

// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeInAngleIndicatorImage
struct UBPW_OutsidePlayArea_C_FadeInAngleIndicatorImage_Params
{
};

// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.Init
struct UBPW_OutsidePlayArea_C_Init_Params
{
};

// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.SetAngleIndicatorRotation
struct UBPW_OutsidePlayArea_C_SetAngleIndicatorRotation_Params
{
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.OnAnimationFinished
struct UBPW_OutsidePlayArea_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeOutAngleIndicatorImage
struct UBPW_OutsidePlayArea_C_FadeOutAngleIndicatorImage_Params
{
};

// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeOutWarningText
struct UBPW_OutsidePlayArea_C_FadeOutWarningText_Params
{
};

// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.ExecuteUbergraph_BPW_OutsidePlayArea
struct UBPW_OutsidePlayArea_C_ExecuteUbergraph_BPW_OutsidePlayArea_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
