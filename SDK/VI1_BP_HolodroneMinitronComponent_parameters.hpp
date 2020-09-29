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

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ChangeColors
struct UBP_HolodroneMinitronComponent_C_ChangeColors_Params
{
	TEnumAsByte<EnemyWaveType>                         NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.CanShowFinalMessage
struct UBP_HolodroneMinitronComponent_C_CanShowFinalMessage_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetFinalMessageAnimDuration
struct UBP_HolodroneMinitronComponent_C_GetFinalMessageAnimDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetHealthLevelRequiredForGold
struct UBP_HolodroneMinitronComponent_C_GetHealthLevelRequiredForGold_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetKillsRequiredForGold
struct UBP_HolodroneMinitronComponent_C_GetKillsRequiredForGold_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetTimeRequiredForGold
struct UBP_HolodroneMinitronComponent_C_GetTimeRequiredForGold_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetUnleashedAnimDuration
struct UBP_HolodroneMinitronComponent_C_GetUnleashedAnimDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetRatingsAnimDuration
struct UBP_HolodroneMinitronComponent_C_GetRatingsAnimDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.Close UI Anim Duration
struct UBP_HolodroneMinitronComponent_C_Close_UI_Anim_Duration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetRoundAnimDuration
struct UBP_HolodroneMinitronComponent_C_GetRoundAnimDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetScoresAnimDuration
struct UBP_HolodroneMinitronComponent_C_GetScoresAnimDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.HideRewards
struct UBP_HolodroneMinitronComponent_C_HideRewards_Params
{
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowNewReward
struct UBP_HolodroneMinitronComponent_C_ShowNewReward_Params
{
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowRatings
struct UBP_HolodroneMinitronComponent_C_ShowRatings_Params
{
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.HideRatings
struct UBP_HolodroneMinitronComponent_C_HideRatings_Params
{
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowRewards
struct UBP_HolodroneMinitronComponent_C_ShowRewards_Params
{
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowBestAndLatestScore
struct UBP_HolodroneMinitronComponent_C_ShowBestAndLatestScore_Params
{
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowFinalMessage
struct UBP_HolodroneMinitronComponent_C_ShowFinalMessage_Params
{
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ReceiveBeginPlay
struct UBP_HolodroneMinitronComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.InitMinitron
struct UBP_HolodroneMinitronComponent_C_InitMinitron_Params
{
	class USceneComponent*                             LeftMedalLocator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CenterMedalLocator;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RightMedalLocator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RewardLocator;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BackgroundMesh;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.HideMinitron
struct UBP_HolodroneMinitronComponent_C_HideMinitron_Params
{
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowMinitron
struct UBP_HolodroneMinitronComponent_C_ShowMinitron_Params
{
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowRoundNumber
struct UBP_HolodroneMinitronComponent_C_ShowRoundNumber_Params
{
	int                                                CurrentRoundNumber;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EnemyWaveType>                         WaveType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.Show Unleashed
struct UBP_HolodroneMinitronComponent_C_Show_Unleashed_Params
{
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ExecuteUbergraph_BP_HolodroneMinitronComponent
struct UBP_HolodroneMinitronComponent_C_ExecuteUbergraph_BP_HolodroneMinitronComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.OnAllRewardsDisplayed__DelegateSignature
struct UBP_HolodroneMinitronComponent_C_OnAllRewardsDisplayed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
