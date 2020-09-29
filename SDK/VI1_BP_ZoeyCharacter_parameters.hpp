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

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ShouldAimAtPlayer?
struct ABP_ZoeyCharacter_C_ShouldAimAtPlayer__Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AimAtActor?
struct ABP_ZoeyCharacter_C_AimAtActor__Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.GetAnimInstance
struct ABP_ZoeyCharacter_C_GetAnimInstance_Params
{
	class UAnimInstance*                               AnimInstance;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.GetNpcChestLocation
struct ABP_ZoeyCharacter_C_GetNpcChestLocation_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.GetComponent
struct ABP_ZoeyCharacter_C_GetComponent_Params
{
	struct FName                                       AttachPointName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AutoOptimizeCollisionSettingsByPlayerDistance
struct ABP_ZoeyCharacter_C_AutoOptimizeCollisionSettingsByPlayerDistance_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.DebugDrawPredictedStoppingLocation
struct ABP_ZoeyCharacter_C_DebugDrawPredictedStoppingLocation_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.OnEndCut
struct ABP_ZoeyCharacter_C_OnEndCut_Params
{
	class AActor**                                     CuttingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        CutComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    BladeDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.OnStartCut
struct ABP_ZoeyCharacter_C_OnStartCut_Params
{
	class AActor**                                     CuttingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        CutComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    CutEntryLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.OnUpdateCut
struct ABP_ZoeyCharacter_C_OnUpdateCut_Params
{
	class AActor**                                     CuttingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        CutComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    CutEntryLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    CutEntryNormal;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D*                                  CollisionUV;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    CutExitLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.UsesCuttingFX
struct ABP_ZoeyCharacter_C_UsesCuttingFX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.DrawAKComponents
struct ABP_ZoeyCharacter_C_DrawAKComponents_Params
{
	bool                                               DrawComponents;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.SetSequenceBlendWeight
struct ABP_ZoeyCharacter_C_SetSequenceBlendWeight_Params
{
	float                                              Interp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.UserConstructionScript
struct ABP_ZoeyCharacter_C_UserConstructionScript_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.FireBlaster
struct ABP_ZoeyCharacter_C_FireBlaster_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - Delete
struct ABP_ZoeyCharacter_C_Decals___Delete_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - SpawnHit
struct ABP_ZoeyCharacter_C_Decals___SpawnHit_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - SpawnStab
struct ABP_ZoeyCharacter_C_Decals___SpawnStab_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Decals - SpawnSlash
struct ABP_ZoeyCharacter_C_Decals___SpawnSlash_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.BlueprintTick
struct ABP_ZoeyCharacter_C_BlueprintTick_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Hide Blaster
struct ABP_ZoeyCharacter_C_Hide_Blaster_Params
{
	bool                                               Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.BlueprintAnimationRateOptimization
struct ABP_ZoeyCharacter_C_BlueprintAnimationRateOptimization_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ToggleDropShadow
struct ABP_ZoeyCharacter_C_ToggleDropShadow_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.SetAnimationReferences
struct ABP_ZoeyCharacter_C_SetAnimationReferences_Params
{
	struct FCharacterPerformanceLookAtStruct           Settings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.RequestSetSequencerBlendWeight
struct ABP_ZoeyCharacter_C_RequestSetSequencerBlendWeight_Params
{
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectThrow
struct ABP_ZoeyCharacter_C_AnimProxy_ObjectThrow_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             throwDistance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectPickup
struct ABP_ZoeyCharacter_C_AnimProxy_ObjectPickup_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectHandOver
struct ABP_ZoeyCharacter_C_AnimProxy_ObjectHandOver_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectCatchSuccess
struct ABP_ZoeyCharacter_C_AnimProxy_ObjectCatchSuccess_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             catchAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectCatchReady
struct ABP_ZoeyCharacter_C_AnimProxy_ObjectCatchReady_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             catchAngle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectCatchFail
struct ABP_ZoeyCharacter_C_AnimProxy_ObjectCatchFail_Params
{
	bool*                                              oneHand;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.AnimProxy_ObjectLetGo
struct ABP_ZoeyCharacter_C_AnimProxy_ObjectLetGo_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ReceiveTick
struct ABP_ZoeyCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.TickInstrumentFoleyUpdate
struct ABP_ZoeyCharacter_C_TickInstrumentFoleyUpdate_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Disable LookAt
struct ABP_ZoeyCharacter_C_Disable_LookAt_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionDuration;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DistanceLimits;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              HeadLookAtStrength;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EyeLookAtStrength;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BodyLookAtStrength;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ReceiveBeginPlay
struct ABP_ZoeyCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Set_Zoe_indirect_lighting
struct ABP_ZoeyCharacter_C_Set_Zoe_indirect_lighting_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Event PhysicalAnimation
struct ABP_ZoeyCharacter_C_Event_PhysicalAnimation_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.Fortress_TurnOffUnneededComps
struct ABP_ZoeyCharacter_C_Fortress_TurnOffUnneededComps_Params
{
};

// Function BP_ZoeyCharacter.BP_ZoeyCharacter_C.ExecuteUbergraph_BP_ZoeyCharacter
struct ABP_ZoeyCharacter_C_ExecuteUbergraph_BP_ZoeyCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
