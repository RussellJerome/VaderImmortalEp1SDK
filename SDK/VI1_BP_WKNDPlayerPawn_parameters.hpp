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

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UseDirectionalHalo
struct ABP_WKNDPlayerPawn_C_UseDirectionalHalo_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetHitAudioEvent
struct ABP_WKNDPlayerPawn_C_GetHitAudioEvent_Params
{
	class AActor*                                      weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDamageType                                        DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AudioEvent;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetPlayerFloorPosition
struct ABP_WKNDPlayerPawn_C_GetPlayerFloorPosition_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetClosestRecenteringPoint
struct ABP_WKNDPlayerPawn_C_GetClosestRecenteringPoint_Params
{
	struct FVector*                                    CheckLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  outTransform;                                             // (Parm, OutParm, IsPlainOldData)
	int                                                outIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UpdatePlayerLookAtSideFocus
struct ABP_WKNDPlayerPawn_C_UpdatePlayerLookAtSideFocus_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartButtonTutorialComponent
struct ABP_WKNDPlayerPawn_C_StartButtonTutorialComponent_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tutorial;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       TutorialText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Arrow_fades_when_closer_than_dist;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Arrow_Totally_Fade_Dist;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ForceOffTeleportUI
struct ABP_WKNDPlayerPawn_C_ForceOffTeleportUI_Params
{
	bool                                               bForceOff;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DrawLocomotionDebug
struct ABP_WKNDPlayerPawn_C_DrawLocomotionDebug_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.IsMandatedPointBlue
struct ABP_WKNDPlayerPawn_C_IsMandatedPointBlue_Params
{
	int*                                               pointIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BroadcastThrottleAsTeleport
struct ABP_WKNDPlayerPawn_C_BroadcastThrottleAsTeleport_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetClosestMandatedPoint
struct ABP_WKNDPlayerPawn_C_GetClosestMandatedPoint_Params
{
	struct FVector*                                    CheckLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  outTransform;                                             // (Parm, OutParm, IsPlainOldData)
	int                                                outIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SpawnLightsaber
struct ABP_WKNDPlayerPawn_C_SpawnLightsaber_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SpawnMultiTool
struct ABP_WKNDPlayerPawn_C_SpawnMultiTool_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetNavigationRoot
struct ABP_WKNDPlayerPawn_C_SetNavigationRoot_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetBlackoutWarningTextTransform
struct ABP_WKNDPlayerPawn_C_GetBlackoutWarningTextTransform_Params
{
	struct FTransform                                  SpawnTransform;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.GetLightsaberToolbeltSlot
struct ABP_WKNDPlayerPawn_C_GetLightsaberToolbeltSlot_Params
{
	class UWKNDToolbeltSlotComponent*                  RightToolbeltSlot;                                        // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickupDispatch
struct ABP_WKNDPlayerPawn_C_PickupDispatch_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetNavFilter
struct ABP_WKNDPlayerPawn_C_SetNavFilter_Params
{
	class UClass*                                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.CompleteButtonTutorial
struct ABP_WKNDPlayerPawn_C_CompleteButtonTutorial_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tutorial;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartButtonTutorial
struct ABP_WKNDPlayerPawn_C_StartButtonTutorial_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Tutorial;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       TutorialText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      Target_Actor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Arrow_fades_when_closer_than_dist;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Arrow_Totally_Fade_Dist;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetNewFacingRotation
struct ABP_WKNDPlayerPawn_C_SetNewFacingRotation_Params
{
	struct FRotator                                    DesiredRotation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetComboDetectionWeapon
struct ABP_WKNDPlayerPawn_C_SetComboDetectionWeapon_Params
{
	class ARPOCPickupWeapon*                           weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.SetupComboDetection
struct ABP_WKNDPlayerPawn_C_SetupComboDetection_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UserConstructionScript
struct ABP_WKNDPlayerPawn_C_UserConstructionScript_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_3__FinishedFunc
struct ABP_WKNDPlayerPawn_C_Timeline_3__FinishedFunc_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_3__UpdateFunc
struct ABP_WKNDPlayerPawn_C_Timeline_3__UpdateFunc_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_1__FinishedFunc
struct ABP_WKNDPlayerPawn_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_1__UpdateFunc
struct ABP_WKNDPlayerPawn_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_0__FinishedFunc
struct ABP_WKNDPlayerPawn_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_0__UpdateFunc
struct ABP_WKNDPlayerPawn_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_4__FinishedFunc
struct ABP_WKNDPlayerPawn_C_Timeline_4__FinishedFunc_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_4__UpdateFunc
struct ABP_WKNDPlayerPawn_C_Timeline_4__UpdateFunc_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_2__FinishedFunc
struct ABP_WKNDPlayerPawn_C_Timeline_2__FinishedFunc_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.Timeline_2__UpdateFunc
struct ABP_WKNDPlayerPawn_C_Timeline_2__UpdateFunc_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_30
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_30_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_29
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_29_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_28
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_28_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_27
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_27_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_26
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_26_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_25
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_25_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_K_K2Node_InputKeyEvent_24
struct ABP_WKNDPlayerPawn_C_InpActEvt_K_K2Node_InputKeyEvent_24_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_23
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_23_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_22
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_22_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_21
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_21_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_20
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_19
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_18
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_17
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_16
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_15
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_14
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_13
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_12
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_11
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_10
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_9
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_8
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_7
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_6
struct ABP_WKNDPlayerPawn_C_InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyEnd_402E9D8A4E83FBFB9E6B6AB21A3B3155
struct ABP_WKNDPlayerPawn_C_OnNotifyEnd_402E9D8A4E83FBFB9E6B6AB21A3B3155_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyBegin_402E9D8A4E83FBFB9E6B6AB21A3B3155
struct ABP_WKNDPlayerPawn_C_OnNotifyBegin_402E9D8A4E83FBFB9E6B6AB21A3B3155_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnInterrupted_402E9D8A4E83FBFB9E6B6AB21A3B3155
struct ABP_WKNDPlayerPawn_C_OnInterrupted_402E9D8A4E83FBFB9E6B6AB21A3B3155_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnBlendOut_402E9D8A4E83FBFB9E6B6AB21A3B3155
struct ABP_WKNDPlayerPawn_C_OnBlendOut_402E9D8A4E83FBFB9E6B6AB21A3B3155_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnCompleted_402E9D8A4E83FBFB9E6B6AB21A3B3155
struct ABP_WKNDPlayerPawn_C_OnCompleted_402E9D8A4E83FBFB9E6B6AB21A3B3155_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyEnd_10F73EF14C1DB8ADE521A89279BC3383
struct ABP_WKNDPlayerPawn_C_OnNotifyEnd_10F73EF14C1DB8ADE521A89279BC3383_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnNotifyBegin_10F73EF14C1DB8ADE521A89279BC3383
struct ABP_WKNDPlayerPawn_C_OnNotifyBegin_10F73EF14C1DB8ADE521A89279BC3383_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnInterrupted_10F73EF14C1DB8ADE521A89279BC3383
struct ABP_WKNDPlayerPawn_C_OnInterrupted_10F73EF14C1DB8ADE521A89279BC3383_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnBlendOut_10F73EF14C1DB8ADE521A89279BC3383
struct ABP_WKNDPlayerPawn_C_OnBlendOut_10F73EF14C1DB8ADE521A89279BC3383_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnCompleted_10F73EF14C1DB8ADE521A89279BC3383
struct ABP_WKNDPlayerPawn_C_OnCompleted_10F73EF14C1DB8ADE521A89279BC3383_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_C_K2Node_InputKeyEvent_5
struct ABP_WKNDPlayerPawn_C_InpActEvt_C_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_One_K2Node_InputKeyEvent_4
struct ABP_WKNDPlayerPawn_C_InpActEvt_One_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_Two_K2Node_InputKeyEvent_3
struct ABP_WKNDPlayerPawn_C_InpActEvt_Two_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_Three_K2Node_InputKeyEvent_2
struct ABP_WKNDPlayerPawn_C_InpActEvt_Three_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.InpActEvt_Four_K2Node_InputKeyEvent_1
struct ABP_WKNDPlayerPawn_C_InpActEvt_Four_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UpdateDamagePlane
struct ABP_WKNDPlayerPawn_C_UpdateDamagePlane_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveBeginPlay
struct ABP_WKNDPlayerPawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveTick
struct ABP_WKNDPlayerPawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.VisualAssistHalo
struct ABP_WKNDPlayerPawn_C_VisualAssistHalo_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveOnTeleport
struct ABP_WKNDPlayerPawn_C_ReceiveOnTeleport_Params
{
	class AWKNDMotionController**                      MotionController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StopAllDamageEffects
struct ABP_WKNDPlayerPawn_C_StopAllDamageEffects_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnHealthRestored__DelegateSignature
struct ABP_WKNDPlayerPawn_C_BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnHealthRestored__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PlayDisarmMontage
struct ABP_WKNDPlayerPawn_C_PlayDisarmMontage_Params
{
	EDisarmType*                                       DisarmedHand;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickedUpWeaponRight
struct ABP_WKNDPlayerPawn_C_PickedUpWeaponRight_Params
{
	class ARPOCPickupWeapon*                           weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DroppedWeaponRight
struct ABP_WKNDPlayerPawn_C_DroppedWeaponRight_Params
{
	class ARPOCPickupWeapon*                           weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickedUpWeaponLeft
struct ABP_WKNDPlayerPawn_C_PickedUpWeaponLeft_Params
{
	class ARPOCPickupWeapon*                           weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DroppedWeaponLeft
struct ABP_WKNDPlayerPawn_C_DroppedWeaponLeft_Params
{
	class ARPOCPickupWeapon*                           weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.UpdatePlayerDamageEffect
struct ABP_WKNDPlayerPawn_C_UpdatePlayerDamageEffect_Params
{
	float                                              Base;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BB;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     col;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ReceiveOnBurntHand
struct ABP_WKNDPlayerPawn_C_ReceiveOnBurntHand_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.QuitToMenuLevel
struct ABP_WKNDPlayerPawn_C_QuitToMenuLevel_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartBlockLag
struct ABP_WKNDPlayerPawn_C_StartBlockLag_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnHitGround_Event
struct ABP_WKNDPlayerPawn_C_OnHitGround_Event_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnFallStart_Event
struct ABP_WKNDPlayerPawn_C_OnFallStart_Event_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_0_NTSnapSignature__DelegateSignature
struct ABP_WKNDPlayerPawn_C_BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_0_NTSnapSignature__DelegateSignature_Params
{
	TEnumAsByte<ENTSnapDirection>                      Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_1_NTSnapFinishedSignature__DelegateSignature
struct ABP_WKNDPlayerPawn_C_BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_1_NTSnapFinishedSignature__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.EndLocomotion
struct ABP_WKNDPlayerPawn_C_EndLocomotion_Params
{
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature
struct ABP_WKNDPlayerPawn_C_BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature_Params
{
	int                                                DamageTaken;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.StartLocomotion
struct ABP_WKNDPlayerPawn_C_StartLocomotion_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.AbortPlayerDamage
struct ABP_WKNDPlayerPawn_C_AbortPlayerDamage_Params
{
	class ARPOCPickup_Lightsaber*                      Saber1;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      Saber2;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RewindTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSaberClashData                             Clash;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_3_BlackoutEndedDelegate__DelegateSignature
struct ABP_WKNDPlayerPawn_C_BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_3_BlackoutEndedDelegate__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_5_BlackoutStartedDelegate__DelegateSignature
struct ABP_WKNDPlayerPawn_C_BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_5_BlackoutStartedDelegate__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BroadcastMandatedSlideAsTeleport
struct ABP_WKNDPlayerPawn_C_BroadcastMandatedSlideAsTeleport_Params
{
	class AWKNDMotionController**                      teleportingController;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnGamePaused
struct ABP_WKNDPlayerPawn_C_OnGamePaused_Params
{
	bool                                               bShowPauseMenu;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.OnGameUnPaused
struct ABP_WKNDPlayerPawn_C_OnGameUnPaused_Params
{
	bool                                               bShowPauseMenu;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_4_BlackoutStateChangedDelegate__DelegateSignature
struct ABP_WKNDPlayerPawn_C_BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_4_BlackoutStateChangedDelegate__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_0_BlackoutStateChangedDelegate__DelegateSignature
struct ABP_WKNDPlayerPawn_C_BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_0_BlackoutStateChangedDelegate__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.CameraTeleport
struct ABP_WKNDPlayerPawn_C_CameraTeleport_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator*                                   Rotator;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BndEvt__VRNotificationComponent_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature
struct ABP_WKNDPlayerPawn_C_BndEvt__VRNotificationComponent_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.BeginFallHaptics
struct ABP_WKNDPlayerPawn_C_BeginFallHaptics_Params
{
	float*                                             FallDistance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DeflectProjectile
struct ABP_WKNDPlayerPawn_C_DeflectProjectile_Params
{
	class AActor**                                     Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bParried;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ExecuteUbergraph_BP_WKNDPlayerPawn
struct ABP_WKNDPlayerPawn_C_ExecuteUbergraph_BP_WKNDPlayerPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.TakeBlasterHit__DelegateSignature
struct ABP_WKNDPlayerPawn_C_TakeBlasterHit__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.TakeSaberHit__DelegateSignature
struct ABP_WKNDPlayerPawn_C_TakeSaberHit__DelegateSignature_Params
{
	class AActor*                                      Saber;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PickedUpMultiTool__DelegateSignature
struct ABP_WKNDPlayerPawn_C_PickedUpMultiTool__DelegateSignature_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PoseLost__DelegateSignature
struct ABP_WKNDPlayerPawn_C_PoseLost__DelegateSignature_Params
{
	struct FName                                       PoseName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.NewMoveSuccessful__DelegateSignature
struct ABP_WKNDPlayerPawn_C_NewMoveSuccessful__DelegateSignature_Params
{
	struct FName                                       MoveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PoseFound__DelegateSignature
struct ABP_WKNDPlayerPawn_C_PoseFound__DelegateSignature_Params
{
	struct FName                                       PoseName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.PlayerHitEvent__DelegateSignature
struct ABP_WKNDPlayerPawn_C_PlayerHitEvent__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.DebugStart__DelegateSignature
struct ABP_WKNDPlayerPawn_C_DebugStart__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbEnd_L__DelegateSignature
struct ABP_WKNDPlayerPawn_C_ClimbEnd_L__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbStart_L__DelegateSignature
struct ABP_WKNDPlayerPawn_C_ClimbStart_L__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbEnd_R__DelegateSignature
struct ABP_WKNDPlayerPawn_C_ClimbEnd_R__DelegateSignature_Params
{
};

// Function BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C.ClimbStart_R__DelegateSignature
struct ABP_WKNDPlayerPawn_C_ClimbStart_R__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
