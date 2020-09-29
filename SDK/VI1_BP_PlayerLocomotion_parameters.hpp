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

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetSafeNavigationGround
struct UBP_PlayerLocomotion_C_GetSafeNavigationGround_Params
{
	struct FVector                                     lastNavigableGround;                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               groundInit;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.RecoverFromFading
struct UBP_PlayerLocomotion_C_RecoverFromFading_Params
{
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TickThrottleFootstepAudio
struct UBP_PlayerLocomotion_C_TickThrottleFootstepAudio_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TriggerTeleportFootsteps
struct UBP_PlayerLocomotion_C_TriggerTeleportFootsteps_Params
{
	struct FVector                                     TravelVector;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TickTeleportFootstepAudio
struct UBP_PlayerLocomotion_C_TickTeleportFootstepAudio_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetPlayerFeet
struct UBP_PlayerLocomotion_C_GetPlayerFeet_Params
{
	struct FTransform                                  NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.SetTeleportTransform
struct UBP_PlayerLocomotion_C_SetTeleportTransform_Params
{
	struct FVector                                     TeleportLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    TeleportRotation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetFadeTime
struct UBP_PlayerLocomotion_C_GetFadeTime_Params
{
	bool                                               IsFadeStart;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              CameraFadeTime;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetFadeColor
struct UBP_PlayerLocomotion_C_GetFadeColor_Params
{
	struct FLinearColor                                TeleportFadeColor;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.LerpBetweenPoints
struct UBP_PlayerLocomotion_C_LerpBetweenPoints_Params
{
	struct FVector                                     LocationStart;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     LocationEnd;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              TimeToLerp;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Complete;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTraveledThisFrame;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.BuildNavPathPoints
struct UBP_PlayerLocomotion_C_BuildNavPathPoints_Params
{
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.DoStepAudio
struct UBP_PlayerLocomotion_C_DoStepAudio_Params
{
	float                                              TotalDistanceMoved;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StrideLength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.MovePlayerOverTime
struct UBP_PlayerLocomotion_C_MovePlayerOverTime_Params
{
	float                                              ProjectedMoveTime;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StrideLength;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Destination;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Origin;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Complete;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TryTeleport
struct UBP_PlayerLocomotion_C_TryTeleport_Params
{
	class AWKNDMotionController*                       Motion_Controller;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  In_Left_Controller;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  In_Right_Controller;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReceiveTick
struct UBP_PlayerLocomotion_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.CompleteLocomote
struct UBP_PlayerLocomotion_C_CompleteLocomote_Params
{
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.VignetteOn
struct UBP_PlayerLocomotion_C_VignetteOn_Params
{
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.VignetteOff
struct UBP_PlayerLocomotion_C_VignetteOff_Params
{
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReceiveBeginPlay
struct UBP_PlayerLocomotion_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.StartLocomote
struct UBP_PlayerLocomotion_C_StartLocomote_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              SnapToMandated;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ExecuteUbergraph_BP_PlayerLocomotion
struct UBP_PlayerLocomotion_C_ExecuteUbergraph_BP_PlayerLocomotion_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReportStartLocomote__DelegateSignature
struct UBP_PlayerLocomotion_C_ReportStartLocomote__DelegateSignature_Params
{
};

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReportLastLocomote__DelegateSignature
struct UBP_PlayerLocomotion_C_ReportLastLocomote__DelegateSignature_Params
{
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
