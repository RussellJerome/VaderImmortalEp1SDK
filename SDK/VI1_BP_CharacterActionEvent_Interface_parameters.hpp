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

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.GetNpcChestLocation
struct UBP_CharacterActionEvent_Interface_C_GetNpcChestLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.ToggleDropShadow
struct UBP_CharacterActionEvent_Interface_C_ToggleDropShadow_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.BlueprintAnimationRateOptimization
struct UBP_CharacterActionEvent_Interface_C_BlueprintAnimationRateOptimization_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Hide Blaster
struct UBP_CharacterActionEvent_Interface_C_Hide_Blaster_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.GetAnimInstance
struct UBP_CharacterActionEvent_Interface_C_GetAnimInstance_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.BlueprintTick
struct UBP_CharacterActionEvent_Interface_C_BlueprintTick_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - SpawnSlash
struct UBP_CharacterActionEvent_Interface_C_Decals___SpawnSlash_Params
{
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - SpawnStab
struct UBP_CharacterActionEvent_Interface_C_Decals___SpawnStab_Params
{
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - SpawnHit
struct UBP_CharacterActionEvent_Interface_C_Decals___SpawnHit_Params
{
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.Decals - Delete
struct UBP_CharacterActionEvent_Interface_C_Decals___Delete_Params
{
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.AimAtActor?
struct UBP_CharacterActionEvent_Interface_C_AimAtActor__Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.ShouldAimAtPlayer?
struct UBP_CharacterActionEvent_Interface_C_ShouldAimAtPlayer__Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterActionEvent_Interface.BP_CharacterActionEvent_Interface_C.FireBlaster
struct UBP_CharacterActionEvent_Interface_C_FireBlaster_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
