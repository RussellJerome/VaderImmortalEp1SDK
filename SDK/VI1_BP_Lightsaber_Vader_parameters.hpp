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

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ShouldAimAtPlayer?
struct ABP_Lightsaber_Vader_C_ShouldAimAtPlayer__Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.AimAtActor?
struct ABP_Lightsaber_Vader_C_AimAtActor__Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.GetAnimInstance
struct ABP_Lightsaber_Vader_C_GetAnimInstance_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.GetNpcChestLocation
struct ABP_Lightsaber_Vader_C_GetNpcChestLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.GetEnemyType
struct ABP_Lightsaber_Vader_C_GetEnemyType_Params
{
	EEnemyType                                         EnemyType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.UserConstructionScript
struct ABP_Lightsaber_Vader_C_UserConstructionScript_Params
{
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - SpawnHit
struct ABP_Lightsaber_Vader_C_Decals___SpawnHit_Params
{
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - SpawnStab
struct ABP_Lightsaber_Vader_C_Decals___SpawnStab_Params
{
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - SpawnSlash
struct ABP_Lightsaber_Vader_C_Decals___SpawnSlash_Params
{
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.BlueprintTick
struct ABP_Lightsaber_Vader_C_BlueprintTick_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Hide Blaster
struct ABP_Lightsaber_Vader_C_Hide_Blaster_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.BlueprintAnimationRateOptimization
struct ABP_Lightsaber_Vader_C_BlueprintAnimationRateOptimization_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ToggleDropShadow
struct ABP_Lightsaber_Vader_C_ToggleDropShadow_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ReceiveBeginPlay
struct ABP_Lightsaber_Vader_C_ReceiveBeginPlay_Params
{
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.Decals - Delete
struct ABP_Lightsaber_Vader_C_Decals___Delete_Params
{
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.FireBlaster
struct ABP_Lightsaber_Vader_C_FireBlaster_Params
{
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.RTPC_HumDistanceVolume
struct ABP_Lightsaber_Vader_C_RTPC_HumDistanceVolume_Params
{
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.SetBlueprintCollisions
struct ABP_Lightsaber_Vader_C_SetBlueprintCollisions_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.SetBlueprintLiteCollisions
struct ABP_Lightsaber_Vader_C_SetBlueprintLiteCollisions_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Vader.BP_Lightsaber_Vader_C.ExecuteUbergraph_BP_Lightsaber_Vader
struct ABP_Lightsaber_Vader_C_ExecuteUbergraph_BP_Lightsaber_Vader_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
