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

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ToggleLSVs
struct ABP_WKNDGameMode_C_ToggleLSVs_Params
{
	bool                                               Streaming;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.SelectBlackoutArrow
struct ABP_WKNDGameMode_C_SelectBlackoutArrow_Params
{
	float                                              BlackoutAngle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    ArrowTexture;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.CalcBlackholePosition
struct ABP_WKNDGameMode_C_CalcBlackholePosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.UserConstructionScript
struct ABP_WKNDGameMode_C_UserConstructionScript_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_3__FinishedFunc
struct ABP_WKNDGameMode_C_Timeline_3__FinishedFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_3__UpdateFunc
struct ABP_WKNDGameMode_C_Timeline_3__UpdateFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_4__FinishedFunc
struct ABP_WKNDGameMode_C_Timeline_4__FinishedFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_4__UpdateFunc
struct ABP_WKNDGameMode_C_Timeline_4__UpdateFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_5__FinishedFunc
struct ABP_WKNDGameMode_C_Timeline_5__FinishedFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_5__UpdateFunc
struct ABP_WKNDGameMode_C_Timeline_5__UpdateFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__FinishedFunc
struct ABP_WKNDGameMode_C_ZapTL__FinishedFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__UpdateFunc
struct ABP_WKNDGameMode_C_ZapTL__UpdateFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__StartShake__EventFunc
struct ABP_WKNDGameMode_C_ZapTL__StartShake__EventFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__StartFade__EventFunc
struct ABP_WKNDGameMode_C_ZapTL__StartFade__EventFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_0__FinishedFunc
struct ABP_WKNDGameMode_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_0__UpdateFunc
struct ABP_WKNDGameMode_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_1__FinishedFunc
struct ABP_WKNDGameMode_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_1__UpdateFunc
struct ABP_WKNDGameMode_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.FadeToBlack__FinishedFunc
struct ABP_WKNDGameMode_C_FadeToBlack__FinishedFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.FadeToBlack__UpdateFunc
struct ABP_WKNDGameMode_C_FadeToBlack__UpdateFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.blackouttime__FinishedFunc
struct ABP_WKNDGameMode_C_blackouttime__FinishedFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.blackouttime__UpdateFunc
struct ABP_WKNDGameMode_C_blackouttime__UpdateFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_2__FinishedFunc
struct ABP_WKNDGameMode_C_Timeline_2__FinishedFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_2__UpdateFunc
struct ABP_WKNDGameMode_C_Timeline_2__UpdateFunc_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ReceiveTick
struct ABP_WKNDGameMode_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StartClash
struct ABP_WKNDGameMode_C_StartClash_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.EndClash
struct ABP_WKNDGameMode_C_EndClash_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.PlayerHit
struct ABP_WKNDGameMode_C_PlayerHit_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ForceChoke_PPEnable
struct ABP_WKNDGameMode_C_ForceChoke_PPEnable_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ForceChoke_PPDisable
struct ABP_WKNDGameMode_C_ForceChoke_PPDisable_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ForcePushed
struct ABP_WKNDGameMode_C_ForcePushed_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapOut
struct ABP_WKNDGameMode_C_ZapOut_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.PlayerHitTD
struct ABP_WKNDGameMode_C_PlayerHitTD_Params
{
	int                                                hitNum;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.InitDialogueManagerWithSpeakingActors
struct ABP_WKNDGameMode_C_InitDialogueManagerWithSpeakingActors_Params
{
	class AWKNDDialogueManager**                       DM;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StartBlackout
struct ABP_WKNDGameMode_C_StartBlackout_Params
{
	class UPlayerScreenBlackOutComponent*              BlackoutCompoent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopBlackout
struct ABP_WKNDGameMode_C_StopBlackout_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.BlackoutAutoFadeOut
struct ABP_WKNDGameMode_C_BlackoutAutoFadeOut_Params
{
	class UPlayerScreenBlackOutComponent*              BlackoutComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.BlackoutAutoFadeIn
struct ABP_WKNDGameMode_C_BlackoutAutoFadeIn_Params
{
	class UPlayerScreenBlackOutComponent*              BlackoutComponent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.TogglePause
struct ABP_WKNDGameMode_C_TogglePause_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.DestroyPauseMenu
struct ABP_WKNDGameMode_C_DestroyPauseMenu_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.EnableConsoleMenu
struct ABP_WKNDGameMode_C_EnableConsoleMenu_Params
{
	bool*                                              Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.RemovePostProcessingDamage
struct ABP_WKNDGameMode_C_RemovePostProcessingDamage_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopTimeline4
struct ABP_WKNDGameMode_C_StopTimeline4_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopTimeline0
struct ABP_WKNDGameMode_C_StopTimeline0_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopTimeline1
struct ABP_WKNDGameMode_C_StopTimeline1_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ReceiveBeginPlay
struct ABP_WKNDGameMode_C_ReceiveBeginPlay_Params
{
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.OnPlayerTakeDamage
struct ABP_WKNDGameMode_C_OnPlayerTakeDamage_Params
{
	int                                                DamageTaken;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.TogglePauseLights
struct ABP_WKNDGameMode_C_TogglePauseLights_Params
{
	bool                                               hidden;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ExecuteUbergraph_BP_WKNDGameMode
struct ABP_WKNDGameMode_C_ExecuteUbergraph_BP_WKNDGameMode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
