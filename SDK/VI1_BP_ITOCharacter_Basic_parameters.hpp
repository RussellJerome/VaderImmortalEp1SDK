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

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ShouldAimAtPlayer?
struct ABP_ITOCharacter_Basic_C_ShouldAimAtPlayer__Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.AimAtActor?
struct ABP_ITOCharacter_Basic_C_AimAtActor__Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.GetAnimInstance
struct ABP_ITOCharacter_Basic_C_GetAnimInstance_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.GetNpcChestLocation
struct ABP_ITOCharacter_Basic_C_GetNpcChestLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.SetSequenceBlendWeight
struct ABP_ITOCharacter_Basic_C_SetSequenceBlendWeight_Params
{
	float                                              Interp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.UserConstructionScript
struct ABP_ITOCharacter_Basic_C_UserConstructionScript_Params
{
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.FireBlaster
struct ABP_ITOCharacter_Basic_C_FireBlaster_Params
{
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - Delete
struct ABP_ITOCharacter_Basic_C_Decals___Delete_Params
{
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - SpawnHit
struct ABP_ITOCharacter_Basic_C_Decals___SpawnHit_Params
{
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - SpawnStab
struct ABP_ITOCharacter_Basic_C_Decals___SpawnStab_Params
{
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Decals - SpawnSlash
struct ABP_ITOCharacter_Basic_C_Decals___SpawnSlash_Params
{
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.BlueprintTick
struct ABP_ITOCharacter_Basic_C_BlueprintTick_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.Hide Blaster
struct ABP_ITOCharacter_Basic_C_Hide_Blaster_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.BlueprintAnimationRateOptimization
struct ABP_ITOCharacter_Basic_C_BlueprintAnimationRateOptimization_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ToggleDropShadow
struct ABP_ITOCharacter_Basic_C_ToggleDropShadow_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ReceiveTick
struct ABP_ITOCharacter_Basic_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ReceiveBeginPlay
struct ABP_ITOCharacter_Basic_C_ReceiveBeginPlay_Params
{
};

// Function BP_ITOCharacter_Basic.BP_ITOCharacter_Basic_C.ExecuteUbergraph_BP_ITOCharacter_Basic
struct ABP_ITOCharacter_Basic_C_ExecuteUbergraph_BP_ITOCharacter_Basic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
