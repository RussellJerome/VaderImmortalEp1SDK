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

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ChangeColors
struct UBP_HolodroneJumbotronComponent_C_ChangeColors_Params
{
	TEnumAsByte<EnemyWaveType>                         NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.DoesRoundTypeDisplayTimer
struct UBP_HolodroneJumbotronComponent_C_DoesRoundTypeDisplayTimer_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.GetOpenJumbotronAnimDuration
struct UBP_HolodroneJumbotronComponent_C_GetOpenJumbotronAnimDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateKillCount
struct UBP_HolodroneJumbotronComponent_C_UpdateKillCount_Params
{
	int                                                NewKillCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.TickFinalCountdown
struct UBP_HolodroneJumbotronComponent_C_TickFinalCountdown_Params
{
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ResetRemainingTime
struct UBP_HolodroneJumbotronComponent_C_ResetRemainingTime_Params
{
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.AttemptFinalCountdown
struct UBP_HolodroneJumbotronComponent_C_AttemptFinalCountdown_Params
{
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ResetLiveRating
struct UBP_HolodroneJumbotronComponent_C_ResetLiveRating_Params
{
	ERating                                            InitialRating;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ComputeNewTimeLimit
struct UBP_HolodroneJumbotronComponent_C_ComputeNewTimeLimit_Params
{
	ERating                                            NewRating;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateTimeOnJumbotron
struct UBP_HolodroneJumbotronComponent_C_UpdateTimeOnJumbotron_Params
{
	float                                              TimeSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateLiveRatingAndTimeLimit
struct UBP_HolodroneJumbotronComponent_C_UpdateLiveRatingAndTimeLimit_Params
{
	ERating                                            NewRating;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.SetRemainingTime
struct UBP_HolodroneJumbotronComponent_C_SetRemainingTime_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnTelemetryEvent
struct UBP_HolodroneJumbotronComponent_C_OnTelemetryEvent_Params
{
	struct FTelemetryEvent                             TelemetryEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnLiveRatingChangedEvent
struct UBP_HolodroneJumbotronComponent_C_OnLiveRatingChangedEvent_Params
{
	struct FName                                       WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERating                                            Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Enable Low Health Warning
struct UBP_HolodroneJumbotronComponent_C_Enable_Low_Health_Warning_Params
{
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Disable Low Health Warning
struct UBP_HolodroneJumbotronComponent_C_Disable_Low_Health_Warning_Params
{
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Reset Low Health Warning
struct UBP_HolodroneJumbotronComponent_C_Reset_Low_Health_Warning_Params
{
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnTakeDamage
struct UBP_HolodroneJumbotronComponent_C_OnTakeDamage_Params
{
	int                                                DamageTaken;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnBeginFinalCountdown
struct UBP_HolodroneJumbotronComponent_C_OnBeginFinalCountdown_Params
{
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnEndFinalCountdown
struct UBP_HolodroneJumbotronComponent_C_OnEndFinalCountdown_Params
{
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ReceiveBeginPlay
struct UBP_HolodroneJumbotronComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ReceiveTick
struct UBP_HolodroneJumbotronComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Show HUD
struct UBP_HolodroneJumbotronComponent_C_Show_HUD_Params
{
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Hide HUD
struct UBP_HolodroneJumbotronComponent_C_Hide_HUD_Params
{
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.InitJumbotron
struct UBP_HolodroneJumbotronComponent_C_InitJumbotron_Params
{
	class USceneComponent*                             HealthBarLocator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TimerLocator;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LiveRatingLocator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BackgroundMesh;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateRound
struct UBP_HolodroneJumbotronComponent_C_UpdateRound_Params
{
	int                                                Round;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ExecuteUbergraph_BP_HolodroneJumbotronComponent
struct UBP_HolodroneJumbotronComponent_C_ExecuteUbergraph_BP_HolodroneJumbotronComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
