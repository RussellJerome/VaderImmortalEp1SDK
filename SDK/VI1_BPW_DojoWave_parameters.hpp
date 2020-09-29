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

// Function BPW_DojoWave.BPW_DojoWave_C.SetRatingImage
struct UBPW_DojoWave_C_SetRatingImage_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Unlocked_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DojoWave.BPW_DojoWave_C.SetRating
struct UBPW_DojoWave_C_SetRating_Params
{
	ERating                                            NewRating;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DojoWave.BPW_DojoWave_C.GetItemText
struct UBPW_DojoWave_C_GetItemText_Params
{
	class UTextBlock*                                  text;                                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_DojoWave.BPW_DojoWave_C.SetItemText
struct UBPW_DojoWave_C_SetItemText_Params
{
	struct FText*                                      text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_DojoWave.BPW_DojoWave_C.SetActiveIndicatorVisibility
struct UBPW_DojoWave_C_SetActiveIndicatorVisibility_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DojoWave.BPW_DojoWave_C.HighlightItem
struct UBPW_DojoWave_C_HighlightItem_Params
{
};

// Function BPW_DojoWave.BPW_DojoWave_C.UnHighlightItem
struct UBPW_DojoWave_C_UnHighlightItem_Params
{
};

// Function BPW_DojoWave.BPW_DojoWave_C.ExecuteUbergraph_BPW_DojoWave
struct UBPW_DojoWave_C_ExecuteUbergraph_BPW_DojoWave_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
