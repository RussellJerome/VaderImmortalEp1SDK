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

// Function BPW_SelectableItem.BPW_SelectableItem_C.SetActiveIndicatorVisibility
struct UBPW_SelectableItem_C_SetActiveIndicatorVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_SelectableItem.BPW_SelectableItem_C.GetItemText
struct UBPW_SelectableItem_C_GetItemText_Params
{
	class UTextBlock*                                  text;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_SelectableItem.BPW_SelectableItem_C.SetItemText
struct UBPW_SelectableItem_C_SetItemText_Params
{
	struct FText                                       text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_SelectableItem.BPW_SelectableItem_C.SetHighlight
struct UBPW_SelectableItem_C_SetHighlight_Params
{
	bool                                               ShouldHighlight;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      HighlightBackground;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_SelectableItem.BPW_SelectableItem_C.HighlightItem
struct UBPW_SelectableItem_C_HighlightItem_Params
{
};

// Function BPW_SelectableItem.BPW_SelectableItem_C.UnHighlightItem
struct UBPW_SelectableItem_C_UnHighlightItem_Params
{
};

// Function BPW_SelectableItem.BPW_SelectableItem_C.ExecuteUbergraph_BPW_SelectableItem
struct UBPW_SelectableItem_C_ExecuteUbergraph_BPW_SelectableItem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
