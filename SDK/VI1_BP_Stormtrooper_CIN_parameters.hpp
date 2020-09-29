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

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.GetNpcChestLocation
struct ABP_Stormtrooper_CIN_C_GetNpcChestLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.GetAnimInstance
struct ABP_Stormtrooper_CIN_C_GetAnimInstance_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.AimAtActor?
struct ABP_Stormtrooper_CIN_C_AimAtActor__Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ShouldAimAtPlayer?
struct ABP_Stormtrooper_CIN_C_ShouldAimAtPlayer__Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Temp_OffsetBlaster
struct ABP_Stormtrooper_CIN_C_Temp_OffsetBlaster_Params
{
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.OffsetBlaster
struct ABP_Stormtrooper_CIN_C_OffsetBlaster_Params
{
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ShowBlaster
struct ABP_Stormtrooper_CIN_C_ShowBlaster_Params
{
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.HideBlaster
struct ABP_Stormtrooper_CIN_C_HideBlaster_Params
{
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.SetSequenceBlendWeight
struct ABP_Stormtrooper_CIN_C_SetSequenceBlendWeight_Params
{
	float                                              Interp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.UserConstructionScript
struct ABP_Stormtrooper_CIN_C_UserConstructionScript_Params
{
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.BlueprintAnimationRateOptimization
struct ABP_Stormtrooper_CIN_C_BlueprintAnimationRateOptimization_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.SetAnimationReferences
struct ABP_Stormtrooper_CIN_C_SetAnimationReferences_Params
{
	struct FCharacterPerformanceLookAtStruct           Settings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.RequestSetSequencerBlendWeight
struct ABP_Stormtrooper_CIN_C_RequestSetSequencerBlendWeight_Params
{
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ReceiveBeginPlay
struct ABP_Stormtrooper_CIN_C_ReceiveBeginPlay_Params
{
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ReceiveTick
struct ABP_Stormtrooper_CIN_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Disable LookAt
struct ABP_Stormtrooper_CIN_C_Disable_LookAt_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionDuration;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DistanceLimits;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              HeadLookAtStrength;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EyeLookAtStrength;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BodyLookAtStrength;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.FireBlaster
struct ABP_Stormtrooper_CIN_C_FireBlaster_Params
{
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.BlueprintTick
struct ABP_Stormtrooper_CIN_C_BlueprintTick_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Hide Blaster
struct ABP_Stormtrooper_CIN_C_Hide_Blaster_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ToggleDropShadow
struct ABP_Stormtrooper_CIN_C_ToggleDropShadow_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - SpawnStab
struct ABP_Stormtrooper_CIN_C_Decals___SpawnStab_Params
{
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - SpawnSlash
struct ABP_Stormtrooper_CIN_C_Decals___SpawnSlash_Params
{
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - SpawnHit
struct ABP_Stormtrooper_CIN_C_Decals___SpawnHit_Params
{
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.Decals - Delete
struct ABP_Stormtrooper_CIN_C_Decals___Delete_Params
{
};

// Function BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C.ExecuteUbergraph_BP_Stormtrooper_CIN
struct ABP_Stormtrooper_CIN_C_ExecuteUbergraph_BP_Stormtrooper_CIN_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
