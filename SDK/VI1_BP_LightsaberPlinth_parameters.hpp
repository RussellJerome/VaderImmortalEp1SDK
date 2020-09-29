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

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SetPositions
struct ABP_LightsaberPlinth_C_SetPositions_Params
{
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.GetSaberSpawnTransform
struct ABP_LightsaberPlinth_C_GetSaberSpawnTransform_Params
{
	struct FTransform                                  Spawn_Transform;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.UserConstructionScript
struct ABP_LightsaberPlinth_C_UserConstructionScript_Params
{
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.Timeline_0__FinishedFunc
struct ABP_LightsaberPlinth_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.Timeline_0__UpdateFunc
struct ABP_LightsaberPlinth_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.ReceiveBeginPlay
struct ABP_LightsaberPlinth_C_ReceiveBeginPlay_Params
{
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.LightsaberPickedUp
struct ABP_LightsaberPlinth_C_LightsaberPickedUp_Params
{
	EControllerHand                                    HoldingHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.DescendPlinth
struct ABP_LightsaberPlinth_C_DescendPlinth_Params
{
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SetDown
struct ABP_LightsaberPlinth_C_SetDown_Params
{
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SetUp
struct ABP_LightsaberPlinth_C_SetUp_Params
{
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.RespawnSaber
struct ABP_LightsaberPlinth_C_RespawnSaber_Params
{
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.ExecuteUbergraph_BP_LightsaberPlinth
struct ABP_LightsaberPlinth_C_ExecuteUbergraph_BP_LightsaberPlinth_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SaberPickedUp__DelegateSignature
struct ABP_LightsaberPlinth_C_SaberPickedUp__DelegateSignature_Params
{
	EControllerHand                                    HoldingHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.PodInitialSmoke__DelegateSignature
struct ABP_LightsaberPlinth_C_PodInitialSmoke__DelegateSignature_Params
{
};

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.PlinthLowered__DelegateSignature
struct ABP_LightsaberPlinth_C_PlinthLowered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
