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

// Function BPW_DojoReward.BPW_DojoReward_C.GetItemText
struct UBPW_DojoReward_C_GetItemText_Params
{
	class UTextBlock*                                  text;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_DojoReward.BPW_DojoReward_C.SetItemText
struct UBPW_DojoReward_C_SetItemText_Params
{
	struct FText*                                      text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_DojoReward.BPW_DojoReward_C.SetActiveIndicatorVisibility
struct UBPW_DojoReward_C_SetActiveIndicatorVisibility_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DojoReward.BPW_DojoReward_C.HighlightItem
struct UBPW_DojoReward_C_HighlightItem_Params
{
};

// Function BPW_DojoReward.BPW_DojoReward_C.UnHighlightItem
struct UBPW_DojoReward_C_UnHighlightItem_Params
{
};

// Function BPW_DojoReward.BPW_DojoReward_C.ExecuteUbergraph_BPW_DojoReward
struct UBPW_DojoReward_C_ExecuteUbergraph_BPW_DojoReward_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
