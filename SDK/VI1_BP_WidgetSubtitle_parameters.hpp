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

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.SetSubtitleText
struct ABP_WidgetSubtitle_C_SetSubtitleText_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       DisplayedText;                                            // (Parm, OutParm)
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.GetVerticalSize
struct ABP_WidgetSubtitle_C_GetVerticalSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.UserConstructionScript
struct ABP_WidgetSubtitle_C_UserConstructionScript_Params
{
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeOut__FinishedFunc
struct ABP_WidgetSubtitle_C_OpFadeOut__FinishedFunc_Params
{
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeOut__UpdateFunc
struct ABP_WidgetSubtitle_C_OpFadeOut__UpdateFunc_Params
{
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeIn__FinishedFunc
struct ABP_WidgetSubtitle_C_OpFadeIn__FinishedFunc_Params
{
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeIn__UpdateFunc
struct ABP_WidgetSubtitle_C_OpFadeIn__UpdateFunc_Params
{
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ShiftLerp__FinishedFunc
struct ABP_WidgetSubtitle_C_ShiftLerp__FinishedFunc_Params
{
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ShiftLerp__UpdateFunc
struct ABP_WidgetSubtitle_C_ShiftLerp__UpdateFunc_Params
{
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OnShowSubtitle
struct ABP_WidgetSubtitle_C_OnShowSubtitle_Params
{
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ShiftText
struct ABP_WidgetSubtitle_C_ShiftText_Params
{
	float*                                             Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ReceiveBeginPlay
struct ABP_WidgetSubtitle_C_ReceiveBeginPlay_Params
{
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OnHidden
struct ABP_WidgetSubtitle_C_OnHidden_Params
{
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.SetScreenPositionOffset
struct ABP_WidgetSubtitle_C_SetScreenPositionOffset_Params
{
	int*                                               Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ExecuteUbergraph_BP_WidgetSubtitle
struct ABP_WidgetSubtitle_C_ExecuteUbergraph_BP_WidgetSubtitle_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
