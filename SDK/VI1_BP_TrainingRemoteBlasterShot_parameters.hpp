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

// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.PlayDeflectionVFX
struct ABP_TrainingRemoteBlasterShot_C_PlayDeflectionVFX_Params
{
	class AActor*                                      DeflectingActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.UserConstructionScript
struct ABP_TrainingRemoteBlasterShot_C_UserConstructionScript_Params
{
};

// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileDeflectedSignature__DelegateSignature
struct ABP_TrainingRemoteBlasterShot_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileDeflectedSignature__DelegateSignature_Params
{
	class AActor*                                      ProjActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DeflectingActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bParried;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ReceiveBeginPlay
struct ABP_TrainingRemoteBlasterShot_C_ReceiveBeginPlay_Params
{
};

// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ReceiveTick
struct ABP_TrainingRemoteBlasterShot_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ReceiveDestroyed
struct ABP_TrainingRemoteBlasterShot_C_ReceiveDestroyed_Params
{
};

// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_6_ProjectilePassedTargetSignature__DelegateSignature
struct ABP_TrainingRemoteBlasterShot_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_6_ProjectilePassedTargetSignature__DelegateSignature_Params
{
	class AActor*                                      ProjActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileCollidingHitSignature__DelegateSignature
struct ABP_TrainingRemoteBlasterShot_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileCollidingHitSignature__DelegateSignature_Params
{
	class AActor*                                      ProjActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ExecuteUbergraph_BP_TrainingRemoteBlasterShot
struct ABP_TrainingRemoteBlasterShot_C_ExecuteUbergraph_BP_TrainingRemoteBlasterShot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
