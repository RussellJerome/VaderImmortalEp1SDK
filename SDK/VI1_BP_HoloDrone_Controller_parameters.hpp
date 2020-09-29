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

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SetJumbotronPathCheckpoint
struct ABP_HoloDrone_Controller_C_SetJumbotronPathCheckpoint_Params
{
	float                                              Path_Ratio;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SetDisplayPoints
struct ABP_HoloDrone_Controller_C_SetDisplayPoints_Params
{
	struct FHolodroneDisplayPoints                     DisplayPoints;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.HasReachedJumbotronPathCheckpoint
struct ABP_HoloDrone_Controller_C_HasReachedJumbotronPathCheckpoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SelectDisplayLocation
struct ABP_HoloDrone_Controller_C_SelectDisplayLocation_Params
{
	struct FVector                                     DisplayLoc;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.CheckFOV
struct ABP_HoloDrone_Controller_C_CheckFOV_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.EndState
struct ABP_HoloDrone_Controller_C_EndState_Params
{
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.DoManualPositionUpdate
struct ABP_HoloDrone_Controller_C_DoManualPositionUpdate_Params
{
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.GetManualPositionUpdateLocation
struct ABP_HoloDrone_Controller_C_GetManualPositionUpdateLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.StartManualPositionUpdate
struct ABP_HoloDrone_Controller_C_StartManualPositionUpdate_Params
{
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.SetState
struct ABP_HoloDrone_Controller_C_SetState_Params
{
	TEnumAsByte<EHoloDroneState>                       NewHoloDroneState;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.HandleRotation
struct ABP_HoloDrone_Controller_C_HandleRotation_Params
{
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.HandlePositioning
struct ABP_HoloDrone_Controller_C_HandlePositioning_Params
{
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.UserConstructionScript
struct ABP_HoloDrone_Controller_C_UserConstructionScript_Params
{
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.ReceiveTick
struct ABP_HoloDrone_Controller_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.OnPossess
struct ABP_HoloDrone_Controller_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.OnAIMoveCompleted
struct ABP_HoloDrone_Controller_C_OnAIMoveCompleted_Params
{
	struct FAIRequestID                                RequestID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<EPathFollowingResult>                  Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.RequestDisplayNextRound
struct ABP_HoloDrone_Controller_C_RequestDisplayNextRound_Params
{
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.ResetJumbotronCheckpoint
struct ABP_HoloDrone_Controller_C_ResetJumbotronCheckpoint_Params
{
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.CheckPositionFromJumbotronCheckpoint
struct ABP_HoloDrone_Controller_C_CheckPositionFromJumbotronCheckpoint_Params
{
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.CloseJumbotronPathCheckpoint
struct ABP_HoloDrone_Controller_C_CloseJumbotronPathCheckpoint_Params
{
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.ExecuteUbergraph_BP_HoloDrone_Controller
struct ABP_HoloDrone_Controller_C_ExecuteUbergraph_BP_HoloDrone_Controller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoloDrone_Controller.BP_HoloDrone_Controller_C.OnReachedJumbotronPathCheckpoint__DelegateSignature
struct ABP_HoloDrone_Controller_C_OnReachedJumbotronPathCheckpoint__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
