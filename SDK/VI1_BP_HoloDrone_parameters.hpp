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

// Function BP_HoloDrone.BP_HoloDrone_C.OnEndCut
struct ABP_HoloDrone_C_OnEndCut_Params
{
	class AActor*                                      CuttingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         CutComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     BladeDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.OnStartCut
struct ABP_HoloDrone_C_OnStartCut_Params
{
	class AActor*                                      CuttingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         CutComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutEntryLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.OnUpdateCut
struct ABP_HoloDrone_C_OnUpdateCut_Params
{
	class AActor*                                      CuttingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         CutComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CutEntryLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     CutEntryNormal;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   CollisionUV;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutExitLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.UsesCuttingFX
struct ABP_HoloDrone_C_UsesCuttingFX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.ChangeHolographicButtonColors
struct ABP_HoloDrone_C_ChangeHolographicButtonColors_Params
{
	TEnumAsByte<EnemyWaveType>                         WaveType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.ChangeHologramBeamColor
struct ABP_HoloDrone_C_ChangeHologramBeamColor_Params
{
	TEnumAsByte<EnemyWaveType>                         WaveType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.GetFastFillValue
struct ABP_HoloDrone_C_GetFastFillValue_Params
{
	class UTimelineComponent*                          Timeline;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.DoesCutExceedsMinimumCutSpeed
struct ABP_HoloDrone_C_DoesCutExceedsMinimumCutSpeed_Params
{
	class ULightsaberBladeComponent*                   LightsaberBladeComponent;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.SetJumbotronDisplayPointAndCheckpoint
struct ABP_HoloDrone_C_SetJumbotronDisplayPointAndCheckpoint_Params
{
	struct FHolodroneDisplayPoints                     DisplayPoints;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              PathRatio;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.HandleJumbotronCheckpointReached
struct ABP_HoloDrone_C_HandleJumbotronCheckpointReached_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.GetCurrentWaveParameter
struct ABP_HoloDrone_C_GetCurrentWaveParameter_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.StopWaving
struct ABP_HoloDrone_C_StopWaving_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.StartWaving
struct ABP_HoloDrone_C_StartWaving_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.UserConstructionScript
struct ABP_HoloDrone_C_UserConstructionScript_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleJumbotron__FinishedFunc
struct ABP_HoloDrone_C_Timeline_ScaleJumbotron__FinishedFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleJumbotron__UpdateFunc
struct ABP_HoloDrone_C_Timeline_ScaleJumbotron__UpdateFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleMinitron__FinishedFunc
struct ABP_HoloDrone_C_Timeline_ScaleMinitron__FinishedFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleMinitron__UpdateFunc
struct ABP_HoloDrone_C_Timeline_ScaleMinitron__UpdateFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_NextButtonMeter__FinishedFunc
struct ABP_HoloDrone_C_Timeline_NextButtonMeter__FinishedFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_NextButtonMeter__UpdateFunc
struct ABP_HoloDrone_C_Timeline_NextButtonMeter__UpdateFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ReplayButtonMeter__FinishedFunc
struct ABP_HoloDrone_C_Timeline_ReplayButtonMeter__FinishedFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ReplayButtonMeter__UpdateFunc
struct ABP_HoloDrone_C_Timeline_ReplayButtonMeter__UpdateFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ReplayButtonMeter__myeventrack__EventFunc
struct ABP_HoloDrone_C_Timeline_ReplayButtonMeter__myeventrack__EventFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleButtons__FinishedFunc
struct ABP_HoloDrone_C_Timeline_ScaleButtons__FinishedFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_ScaleButtons__UpdateFunc
struct ABP_HoloDrone_C_Timeline_ScaleButtons__UpdateFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_HologramProjection__FinishedFunc
struct ABP_HoloDrone_C_Timeline_HologramProjection__FinishedFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.Timeline_HologramProjection__UpdateFunc
struct ABP_HoloDrone_C_Timeline_HologramProjection__UpdateFunc_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.OnNotifyEnd_75BFFA3F40D715D72C24AB8E495AADC5
struct ABP_HoloDrone_C_OnNotifyEnd_75BFFA3F40D715D72C24AB8E495AADC5_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.OnNotifyBegin_75BFFA3F40D715D72C24AB8E495AADC5
struct ABP_HoloDrone_C_OnNotifyBegin_75BFFA3F40D715D72C24AB8E495AADC5_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.OnInterrupted_75BFFA3F40D715D72C24AB8E495AADC5
struct ABP_HoloDrone_C_OnInterrupted_75BFFA3F40D715D72C24AB8E495AADC5_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.OnBlendOut_75BFFA3F40D715D72C24AB8E495AADC5
struct ABP_HoloDrone_C_OnBlendOut_75BFFA3F40D715D72C24AB8E495AADC5_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.OnCompleted_75BFFA3F40D715D72C24AB8E495AADC5
struct ABP_HoloDrone_C_OnCompleted_75BFFA3F40D715D72C24AB8E495AADC5_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.PlayJumbotronAnim
struct ABP_HoloDrone_C_PlayJumbotronAnim_Params
{
	bool                                               Forward_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.PlayMinitronAnim
struct ABP_HoloDrone_C_PlayMinitronAnim_Params
{
	bool                                               Forward_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.SetVoiceToneFromPerformance
struct ABP_HoloDrone_C_SetVoiceToneFromPerformance_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_HoloDrone_C_BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.HandleButtonFillCompleted
struct ABP_HoloDrone_C_HandleButtonFillCompleted_Params
{
	bool                                               HasSelectedNext;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.ReverseNextButton
struct ABP_HoloDrone_C_ReverseNextButton_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.ReverseReplayButton
struct ABP_HoloDrone_C_ReverseReplayButton_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.ResetButtonProgress
struct ABP_HoloDrone_C_ResetButtonProgress_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.SetButtonsEnabled
struct ABP_HoloDrone_C_SetButtonsEnabled_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.PlayButtonEnableAnimation
struct ABP_HoloDrone_C_PlayButtonEnableAnimation_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.BeginReplayButtonProgress
struct ABP_HoloDrone_C_BeginReplayButtonProgress_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.EndReplayButtonProgress
struct ABP_HoloDrone_C_EndReplayButtonProgress_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.BeginNextButtonProgress
struct ABP_HoloDrone_C_BeginNextButtonProgress_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.EndNextButtonProgress
struct ABP_HoloDrone_C_EndNextButtonProgress_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.FastforwardNextButton
struct ABP_HoloDrone_C_FastforwardNextButton_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.FastforwardReplayButton
struct ABP_HoloDrone_C_FastforwardReplayButton_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.InitHologramBeam
struct ABP_HoloDrone_C_InitHologramBeam_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.ShowHologramBeam
struct ABP_HoloDrone_C_ShowHologramBeam_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.HideHologramBeam
struct ABP_HoloDrone_C_HideHologramBeam_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.ReceiveBeginPlay
struct ABP_HoloDrone_C_ReceiveBeginPlay_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.ReceiveTick
struct ABP_HoloDrone_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.OnStateChanged
struct ABP_HoloDrone_C_OnStateChanged_Params
{
	TEnumAsByte<EHoloDroneState>                       NewState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.RequestRoundDisplay
struct ABP_HoloDrone_C_RequestRoundDisplay_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.HandleBeginSpawn
struct ABP_HoloDrone_C_HandleBeginSpawn_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.HandleBeginDespawn
struct ABP_HoloDrone_C_HandleBeginDespawn_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.ForceDestroy
struct ABP_HoloDrone_C_ForceDestroy_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.BndEvt__Widget_Minitron_K2Node_ComponentBoundEvent_1_OnAllRewardsDisplayed__DelegateSignature
struct ABP_HoloDrone_C_BndEvt__Widget_Minitron_K2Node_ComponentBoundEvent_1_OnAllRewardsDisplayed__DelegateSignature_Params
{
};

// Function BP_HoloDrone.BP_HoloDrone_C.ExecuteUbergraph_BP_HoloDrone
struct ABP_HoloDrone_C_ExecuteUbergraph_BP_HoloDrone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone.BP_HoloDrone_C.OnBeginDisplayRound__DelegateSignature
struct ABP_HoloDrone_C_OnBeginDisplayRound__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
