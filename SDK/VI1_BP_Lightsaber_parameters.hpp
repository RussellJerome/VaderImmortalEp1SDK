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

// Function BP_Lightsaber.BP_Lightsaber_C.SetDeflectionScale
struct ABP_Lightsaber_C_SetDeflectionScale_Params
{
	float                                              NewScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.UpdateInstigator
struct ABP_Lightsaber_C_UpdateInstigator_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.AK_LoadBank
struct ABP_Lightsaber_C_AK_LoadBank_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.AK_Throw
struct ABP_Lightsaber_C_AK_Throw_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.AK_ShortOut
struct ABP_Lightsaber_C_AK_ShortOut_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.RTPC_HumAggressive_Velocity
struct ABP_Lightsaber_C_RTPC_HumAggressive_Velocity_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.RTPC_HumNormal_Velocity
struct ABP_Lightsaber_C_RTPC_HumNormal_Velocity_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.Ak_Hum_ManualOff
struct ABP_Lightsaber_C_Ak_Hum_ManualOff_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.Ak_Hum_ManualOn
struct ABP_Lightsaber_C_Ak_Hum_ManualOn_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.DoLightLerps
struct ABP_Lightsaber_C_DoLightLerps_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.RTPC_HumDistanceVolume
struct ABP_Lightsaber_C_RTPC_HumDistanceVolume_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.FX_SaberDistort
struct ABP_Lightsaber_C_FX_SaberDistort_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.BlinkStart
struct ABP_Lightsaber_C_BlinkStart_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.SetSaberTrailParameters
struct ABP_Lightsaber_C_SetSaberTrailParameters_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Velocity;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.SetBladeWobble
struct ABP_Lightsaber_C_SetBladeWobble_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.CalculateRumbleOverload
struct ABP_Lightsaber_C_CalculateRumbleOverload_Params
{
	float                                              Overload_Min;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Overload_Scale;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RumbleLoopOverload;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.CalculateSwoosh
struct ABP_Lightsaber_C_CalculateSwoosh_Params
{
	float                                              SwooshValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.CalculateHaptics_Swoosh
struct ABP_Lightsaber_C_CalculateHaptics_Swoosh_Params
{
	float                                              Frequency;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.CalculateHaptics
struct ABP_Lightsaber_C_CalculateHaptics_Params
{
	float                                              Frequency;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.FX_SaberTrail
struct ABP_Lightsaber_C_FX_SaberTrail_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.GetCutting
struct ABP_Lightsaber_C_GetCutting_Params
{
	bool                                               Cutting;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.OutputText
struct ABP_Lightsaber_C_OutputText_Params
{
	struct FString                                     text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.UserConstructionScript
struct ABP_Lightsaber_C_UserConstructionScript_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ScaleBladeDownQuick__FinishedFunc
struct ABP_Lightsaber_C_ScaleBladeDownQuick__FinishedFunc_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ScaleBladeDownQuick__UpdateFunc
struct ABP_Lightsaber_C_ScaleBladeDownQuick__UpdateFunc_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.BladeScale__FinishedFunc
struct ABP_Lightsaber_C_BladeScale__FinishedFunc_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.BladeScale__UpdateFunc
struct ABP_Lightsaber_C_BladeScale__UpdateFunc_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ProtoScale__FinishedFunc
struct ABP_Lightsaber_C_ProtoScale__FinishedFunc_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ProtoScale__UpdateFunc
struct ABP_Lightsaber_C_ProtoScale__UpdateFunc_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.FastTurnOff_Timeline__FinishedFunc
struct ABP_Lightsaber_C_FastTurnOff_Timeline__FinishedFunc_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.FastTurnOff_Timeline__UpdateFunc
struct ABP_Lightsaber_C_FastTurnOff_Timeline__UpdateFunc_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.Timeline_0__FinishedFunc
struct ABP_Lightsaber_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.Timeline_0__UpdateFunc
struct ABP_Lightsaber_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_Period_K2Node_InputKeyEvent_4
struct ABP_Lightsaber_C_InpActEvt_Period_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_Comma_K2Node_InputKeyEvent_3
struct ABP_Lightsaber_C_InpActEvt_Comma_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_C_K2Node_InputKeyEvent_2
struct ABP_Lightsaber_C_InpActEvt_C_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_T_K2Node_InputKeyEvent_1
struct ABP_Lightsaber_C_InpActEvt_T_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveTick
struct ABP_Lightsaber_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveBeginPlay
struct ABP_Lightsaber_C_ReceiveBeginPlay_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOn
struct ABP_Lightsaber_C_SaberIsOn_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.FlickerTicker
struct ABP_Lightsaber_C_FlickerTicker_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOff
struct ABP_Lightsaber_C_SaberIsOff_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnPickedUp
struct ABP_Lightsaber_C_ReceiveOnPickedUp_Params
{
	class AActor**                                     CurrentInstigator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnReleased
struct ABP_Lightsaber_C_ReceiveOnReleased_Params
{
	class AActor**                                     PreviousInstigator;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnUsed
struct ABP_Lightsaber_C_ReceiveOnUsed_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnInHand
struct ABP_Lightsaber_C_ReceiveOnInHand_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.CallTestDoorBasic
struct ABP_Lightsaber_C_CallTestDoorBasic_Params
{
	class ATestDoorBasic_C*                            TestDoorBasic;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.DoorHit
struct ABP_Lightsaber_C_DoorHit_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Lightsaber_C_BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.DEBUG_ToggleLightsaber
struct ABP_Lightsaber_C_DEBUG_ToggleLightsaber_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.FlickerOveride
struct ABP_Lightsaber_C_FlickerOveride_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.Teleport_BlinkStart
struct ABP_Lightsaber_C_Teleport_BlinkStart_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.Teleport_BlinkStop
struct ABP_Lightsaber_C_Teleport_BlinkStop_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveHit
struct ABP_Lightsaber_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOn_3
struct ABP_Lightsaber_C_SaberIsOn_3_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOff_3
struct ABP_Lightsaber_C_SaberIsOff_3_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnOverload
struct ABP_Lightsaber_C_ReceiveOnOverload_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnBeenDisarmed
struct ABP_Lightsaber_C_ReceiveOnBeenDisarmed_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.inComboMode
struct ABP_Lightsaber_C_inComboMode_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.outComboMode
struct ABP_Lightsaber_C_outComboMode_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike1Audio
struct ABP_Lightsaber_C_ConfigureStrike1Audio_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike2Audio
struct ABP_Lightsaber_C_ConfigureStrike2Audio_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike3Audio
struct ABP_Lightsaber_C_ConfigureStrike3Audio_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike4Audio
struct ABP_Lightsaber_C_ConfigureStrike4Audio_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ComboStrikeStarted
struct ABP_Lightsaber_C_ComboStrikeStarted_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.PoseSFX_On
struct ABP_Lightsaber_C_PoseSFX_On_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.PoseSFX_Off
struct ABP_Lightsaber_C_PoseSFX_Off_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.audio_SaberIsOff
struct ABP_Lightsaber_C_audio_SaberIsOff_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.audio_SaberReleased
struct ABP_Lightsaber_C_audio_SaberReleased_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.SetNewLightIntensityMax
struct ABP_Lightsaber_C_SetNewLightIntensityMax_Params
{
	float                                              Intensity_Max;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius_Max;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.TrainingDroidUpdate
struct ABP_Lightsaber_C_TrainingDroidUpdate_Params
{
	float                                              BladeProgress;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.TD_FXOff
struct ABP_Lightsaber_C_TD_FXOff_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.TD_FXOn
struct ABP_Lightsaber_C_TD_FXOn_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.Snap_Start
struct ABP_Lightsaber_C_Snap_Start_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.Snap_Stop
struct ABP_Lightsaber_C_Snap_Stop_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnFastTurnOff
struct ABP_Lightsaber_C_ReceiveOnFastTurnOff_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.GameUnPaused
struct ABP_Lightsaber_C_GameUnPaused_Params
{
	bool                                               bShowPauseMenu;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.GamePaused
struct ABP_Lightsaber_C_GamePaused_Params
{
	bool                                               bShowPauseMenu;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.BeginSwoosh
struct ABP_Lightsaber_C_BeginSwoosh_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.ExecuteUbergraph_BP_Lightsaber
struct ABP_Lightsaber_C_ExecuteUbergraph_BP_Lightsaber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber.BP_Lightsaber_C.TurnedOff__DelegateSignature
struct ABP_Lightsaber_C_TurnedOff__DelegateSignature_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.TurnedOn__DelegateSignature
struct ABP_Lightsaber_C_TurnedOn__DelegateSignature_Params
{
};

// Function BP_Lightsaber.BP_Lightsaber_C.PickedUp__DelegateSignature
struct ABP_Lightsaber_C_PickedUp__DelegateSignature_Params
{
	EControllerHand                                    HoldingHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
