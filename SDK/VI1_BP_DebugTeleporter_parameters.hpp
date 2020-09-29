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

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.TransformDestinationToActor
struct ABP_DebugTeleporter_C_TransformDestinationToActor_Params
{
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ActorLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    ActorRotation;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.SanitiseIndex
struct ABP_DebugTeleporter_C_SanitiseIndex_Params
{
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.UpdateActiveCheckpoint
struct ABP_DebugTeleporter_C_UpdateActiveCheckpoint_Params
{
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.TeleportToLocation
struct ABP_DebugTeleporter_C_TeleportToLocation_Params
{
	struct FString                                     LocationName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.TriggerAmbientAudio
struct ABP_DebugTeleporter_C_TriggerAmbientAudio_Params
{
	class ATargetPoint*                                TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.DoTeleport
struct ABP_DebugTeleporter_C_DoTeleport_Params
{
	class ATargetPoint*                                TeleportTargetPlayer;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ATargetPoint*                                TeleportTargetZoe;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresLightsaber;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresZoe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequiresMultiTool;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.UserConstructionScript
struct ABP_DebugTeleporter_C_UserConstructionScript_Params
{
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Down_K2Node_InputKeyEvent_10
struct ABP_DebugTeleporter_C_InpActEvt_Down_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Down_K2Node_InputKeyEvent_9
struct ABP_DebugTeleporter_C_InpActEvt_Down_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Left_K2Node_InputKeyEvent_8
struct ABP_DebugTeleporter_C_InpActEvt_Left_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Left_K2Node_InputKeyEvent_7
struct ABP_DebugTeleporter_C_InpActEvt_Left_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Right_K2Node_InputKeyEvent_6
struct ABP_DebugTeleporter_C_InpActEvt_Right_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_Right_K2Node_InputKeyEvent_5
struct ABP_DebugTeleporter_C_InpActEvt_Right_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_4
struct ABP_DebugTeleporter_C_InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_3
struct ABP_DebugTeleporter_C_InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_2
struct ABP_DebugTeleporter_C_InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_1
struct ABP_DebugTeleporter_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.ReceiveBeginPlay
struct ABP_DebugTeleporter_C_ReceiveBeginPlay_Params
{
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.InpAxisKeyEvt_MotionController_Right_Thumbstick_Y_K2Node_InputAxisKeyEvent_12
struct ABP_DebugTeleporter_C_InpAxisKeyEvt_MotionController_Right_Thumbstick_Y_K2Node_InputAxisKeyEvent_12_Params
{
	float                                              AxisValue;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.ToggleMenu
struct ABP_DebugTeleporter_C_ToggleMenu_Params
{
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.DoCheckpointTeleport
struct ABP_DebugTeleporter_C_DoCheckpointTeleport_Params
{
	class UWKNDProgressionCheckpointData**             DesiredCheckpoint;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.PerformTeleport
struct ABP_DebugTeleporter_C_PerformTeleport_Params
{
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.OnTeleportFinished
struct ABP_DebugTeleporter_C_OnTeleportFinished_Params
{
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.ExecuteUbergraph_BP_DebugTeleporter
struct ABP_DebugTeleporter_C_ExecuteUbergraph_BP_DebugTeleporter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.OnFadeUpStart__DelegateSignature
struct ABP_DebugTeleporter_C_OnFadeUpStart__DelegateSignature_Params
{
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.OnFadeUpFinished__DelegateSignature
struct ABP_DebugTeleporter_C_OnFadeUpFinished__DelegateSignature_Params
{
};

// Function BP_DebugTeleporter.BP_DebugTeleporter_C.TeleportComplete__DelegateSignature
struct ABP_DebugTeleporter_C_TeleportComplete__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
