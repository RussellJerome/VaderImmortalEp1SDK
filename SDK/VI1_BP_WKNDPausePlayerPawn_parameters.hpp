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

// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetHandlerForHand
struct ABP_WKNDPausePlayerPawn_C_GetHandlerForHand_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetForcePowerComponent
struct ABP_WKNDPausePlayerPawn_C_GetForcePowerComponent_Params
{
	class UForcePowerComponentBase*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetMotionControllerForHand
struct ABP_WKNDPausePlayerPawn_C_GetMotionControllerForHand_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.SetComponentTicksAndVisible
struct ABP_WKNDPausePlayerPawn_C_SetComponentTicksAndVisible_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.GetInputData
struct ABP_WKNDPausePlayerPawn_C_GetInputData_Params
{
	class AWKNDPlayerController*                       PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOculusTouchData                            TouchData;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.IsCloseToButton
struct ABP_WKNDPausePlayerPawn_C_IsCloseToButton_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.UserConstructionScript
struct ABP_WKNDPausePlayerPawn_C_UserConstructionScript_Params
{
};

// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.ReceiveBeginPlay
struct ABP_WKNDPausePlayerPawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.ReceiveTick
struct ABP_WKNDPausePlayerPawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C.ExecuteUbergraph_BP_WKNDPausePlayerPawn
struct ABP_WKNDPausePlayerPawn_C_ExecuteUbergraph_BP_WKNDPausePlayerPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
