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

// Function BP_SubtitleManager.BP_SubtitleManager_C.GetApproximateLocalizedDuration
struct ABP_SubtitleManager_C_GetApproximateLocalizedDuration_Params
{
	struct FText                                       InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitleManager.BP_SubtitleManager_C.DebugCycleSubtitle
struct ABP_SubtitleManager_C_DebugCycleSubtitle_Params
{
};

// Function BP_SubtitleManager.BP_SubtitleManager_C.GetLocalizedLanguage
struct ABP_SubtitleManager_C_GetLocalizedLanguage_Params
{
	TEnumAsByte<ESupportedLanguages>                   CurrentLanguage;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitleManager.BP_SubtitleManager_C.SetLocalizedLanguage
struct ABP_SubtitleManager_C_SetLocalizedLanguage_Params
{
	TEnumAsByte<ESupportedLanguages>                   NewLanuage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SubtitleManager.BP_SubtitleManager_C.UserConstructionScript
struct ABP_SubtitleManager_C_UserConstructionScript_Params
{
};

// Function BP_SubtitleManager.BP_SubtitleManager_C.ReceiveBeginPlay
struct ABP_SubtitleManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_SubtitleManager.BP_SubtitleManager_C.ExecuteUbergraph_BP_SubtitleManager
struct ABP_SubtitleManager_C_ExecuteUbergraph_BP_SubtitleManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
