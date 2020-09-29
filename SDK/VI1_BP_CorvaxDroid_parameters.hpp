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

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.GetComponent
struct ABP_CorvaxDroid_C_GetComponent_Params
{
	struct FName                                       AttachPointName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.PlayDockingMontage (Yaw only)
struct ABP_CorvaxDroid_C_PlayDockingMontage__Yaw_only__Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               SplitDockingComp__Yaw_;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimationDuration;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.CombatStanceLocationAdjustment
struct ABP_CorvaxDroid_C_CombatStanceLocationAdjustment_Params
{
	bool                                               ShouldResolveDockedLocation;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.FindStrafeVectorToCombatOpponent
struct ABP_CorvaxDroid_C_FindStrafeVectorToCombatOpponent_Params
{
	bool                                               UseStrafing;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InRot;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               RightSide;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.GetCombatOpponentLocation
struct ABP_CorvaxDroid_C_GetCombatOpponentLocation_Params
{
	struct FVector                                     ClippedLocation;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.FindMovementForwardTowardsCombatComponent
struct ABP_CorvaxDroid_C_FindMovementForwardTowardsCombatComponent_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.FindLookAtRotationToCombatOpponent (Yaw)
struct ABP_CorvaxDroid_C_FindLookAtRotationToCombatOpponent__Yaw__Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.IsCombatOpponentTooClose?
struct ABP_CorvaxDroid_C_IsCombatOpponentTooClose__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.IsCombatOpponentTooWide?
struct ABP_CorvaxDroid_C_IsCombatOpponentTooWide__Params
{
	bool                                               WideRight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               WideLeft;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Strafing;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.IsCombatOpponentTooFar?
struct ABP_CorvaxDroid_C_IsCombatOpponentTooFar__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.PlayDockingMontage
struct ABP_CorvaxDroid_C_PlayDockingMontage_Params
{
	class UAnimMontage*                                MontageToPlay;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               SplitDockingComp__Yaw_;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              AnimationDuration;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.UpdateVulnerabilityCollision
struct ABP_CorvaxDroid_C_UpdateVulnerabilityCollision_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.RagdollActivate
struct ABP_CorvaxDroid_C_RagdollActivate_Params
{
	struct FVector                                     InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTimelineComponent*                          Timeline;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ImpulseRadius;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ImpulseStrength;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.UpdateVulnerabilitySFX
struct ABP_CorvaxDroid_C_UpdateVulnerabilitySFX_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.SetupStandardAK
struct ABP_CorvaxDroid_C_SetupStandardAK_Params
{
	class UAkComponent*                                AK_Component;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.HandleArmourHit
struct ABP_CorvaxDroid_C_HandleArmourHit_Params
{
	int                                                HitCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UStaticMeshComponent*                        Armour_Piece;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.SetSequenceBlendWeight
struct ABP_CorvaxDroid_C_SetSequenceBlendWeight_Params
{
	float                                              Interp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.MoveAndFaceCharacter
struct ABP_CorvaxDroid_C_MoveAndFaceCharacter_Params
{
	class AActor*                                      NewTargetFaceActor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.UserConstructionScript
struct ABP_CorvaxDroid_C_UserConstructionScript_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_UpperBodyRagdoll__FinishedFunc
struct ABP_CorvaxDroid_C_Timeline_UpperBodyRagdoll__FinishedFunc_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_UpperBodyRagdoll__UpdateFunc
struct ABP_CorvaxDroid_C_Timeline_UpperBodyRagdoll__UpdateFunc_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_FullBodyRagdoll__FinishedFunc
struct ABP_CorvaxDroid_C_Timeline_FullBodyRagdoll__FinishedFunc_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Timeline_FullBodyRagdoll__UpdateFunc
struct ABP_CorvaxDroid_C_Timeline_FullBodyRagdoll__UpdateFunc_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnNotifyEnd_60968CF544682BE721930C9FB97EC81D
struct ABP_CorvaxDroid_C_OnNotifyEnd_60968CF544682BE721930C9FB97EC81D_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnNotifyBegin_60968CF544682BE721930C9FB97EC81D
struct ABP_CorvaxDroid_C_OnNotifyBegin_60968CF544682BE721930C9FB97EC81D_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnInterrupted_60968CF544682BE721930C9FB97EC81D
struct ABP_CorvaxDroid_C_OnInterrupted_60968CF544682BE721930C9FB97EC81D_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnBlendOut_60968CF544682BE721930C9FB97EC81D
struct ABP_CorvaxDroid_C_OnBlendOut_60968CF544682BE721930C9FB97EC81D_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnCompleted_60968CF544682BE721930C9FB97EC81D
struct ABP_CorvaxDroid_C_OnCompleted_60968CF544682BE721930C9FB97EC81D_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.VaderForceKill
struct ABP_CorvaxDroid_C_VaderForceKill_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnDeath
struct ABP_CorvaxDroid_C_OnDeath_Params
{
	struct FWKNDDamageInfo*                            DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Ragdoll_CVD
struct ABP_CorvaxDroid_C_Ragdoll_CVD_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnComponentHit_Event_1
struct ABP_CorvaxDroid_C_OnComponentHit_Event_1_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnDeathAnimStarted
struct ABP_CorvaxDroid_C_OnDeathAnimStarted_Params
{
	struct FWKNDDamageInfo*                            DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.DestroySaber
struct ABP_CorvaxDroid_C_DestroySaber_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnDeathAnimEnded
struct ABP_CorvaxDroid_C_OnDeathAnimEnded_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ForceDestroy
struct ABP_CorvaxDroid_C_ForceDestroy_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ReceiveBeginPlay
struct ABP_CorvaxDroid_C_ReceiveBeginPlay_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ReceiveTick
struct ABP_CorvaxDroid_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature
struct ABP_CorvaxDroid_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature_Params
{
	struct FMotionFieldTarget                          MotionFieldTarget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.FTH_UpdateCharIndirectLighting
struct ABP_CorvaxDroid_C_FTH_UpdateCharIndirectLighting_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Landed_Event_1
struct ABP_CorvaxDroid_C_Landed_Event_1_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Footsteps
struct ABP_CorvaxDroid_C_Footsteps_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Droid_Destroyed
struct ABP_CorvaxDroid_C_Droid_Destroyed_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OnComponentAttached_Event_1
struct ABP_CorvaxDroid_C_OnComponentAttached_Event_1_Params
{
	class USceneComponent*                             NewlyAttachedComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.footsteps_gentle
struct ABP_CorvaxDroid_C_footsteps_gentle_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.OrientHitVel
struct ABP_CorvaxDroid_C_OrientHitVel_Params
{
	class UParticleSystemComponent*                    PFX;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event UpperBodyRagdoll
struct ABP_CorvaxDroid_C_Event_UpperBodyRagdoll_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event FullBodyRagdoll
struct ABP_CorvaxDroid_C_Event_FullBodyRagdoll_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event RepositionCombatStance
struct ABP_CorvaxDroid_C_Event_RepositionCombatStance_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               SplitDockingComp__Yaw_;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Event UpdateActiveDocking
struct ABP_CorvaxDroid_C_Event_UpdateActiveDocking_Params
{
	struct FTransform                                  destTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature
struct ABP_CorvaxDroid_C_BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature_Params
{
	int                                                DamageTaken;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.UpdateHitEffectFlags
struct ABP_CorvaxDroid_C_UpdateHitEffectFlags_Params
{
	EDamageStrength                                    DamageStrength;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ExecuteUbergraph_BP_CorvaxDroid
struct ABP_CorvaxDroid_C_ExecuteUbergraph_BP_CorvaxDroid_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Footstep_gentle__DelegateSignature
struct ABP_CorvaxDroid_C_Footstep_gentle__DelegateSignature_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Destroyed__DelegateSignature
struct ABP_CorvaxDroid_C_Destroyed__DelegateSignature_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Footstep__DelegateSignature
struct ABP_CorvaxDroid_C_Footstep__DelegateSignature_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.Landed__DelegateSignature
struct ABP_CorvaxDroid_C_Landed__DelegateSignature_Params
{
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ArmourHit__DelegateSignature
struct ABP_CorvaxDroid_C_ArmourHit__DelegateSignature_Params
{
	float                                              TotalArmour;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Armour_Pieces_Remaining;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.ValidHit__DelegateSignature
struct ABP_CorvaxDroid_C_ValidHit__DelegateSignature_Params
{
	int                                                HitPointsRemaining;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid.BP_CorvaxDroid_C.HasRagdolled__DelegateSignature
struct ABP_CorvaxDroid_C_HasRagdolled__DelegateSignature_Params
{
	class ABP_CorvaxDroid_C*                           DroidHandle;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
