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

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.SetSequenceBlendWeight
struct ABP_ZoeyPawn_C_SetSequenceBlendWeight_Params
{
	float                                              Interp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.UserConstructionScript
struct ABP_ZoeyPawn_C_UserConstructionScript_Params
{
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectCatchReady
struct ABP_ZoeyPawn_C_AnimProxy_ObjectCatchReady_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             catchAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectCatchSuccess
struct ABP_ZoeyPawn_C_AnimProxy_ObjectCatchSuccess_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             catchAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectHandOver
struct ABP_ZoeyPawn_C_AnimProxy_ObjectHandOver_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectPickup
struct ABP_ZoeyPawn_C_AnimProxy_ObjectPickup_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.ReceiveBeginPlay
struct ABP_ZoeyPawn_C_ReceiveBeginPlay_Params
{
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectThrow
struct ABP_ZoeyPawn_C_AnimProxy_ObjectThrow_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             throwDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.OnThrowCatchComplete
struct ABP_ZoeyPawn_C_OnThrowCatchComplete_Params
{
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.OnPickupTakenFromMe
struct ABP_ZoeyPawn_C_OnPickupTakenFromMe_Params
{
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectLetGo
struct ABP_ZoeyPawn_C_AnimProxy_ObjectLetGo_Params
{
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.ReceiveTick
struct ABP_ZoeyPawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectCatchFail
struct ABP_ZoeyPawn_C_AnimProxy_ObjectCatchFail_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.ExecuteUbergraph_BP_ZoeyPawn
struct ABP_ZoeyPawn_C_ExecuteUbergraph_BP_ZoeyPawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
