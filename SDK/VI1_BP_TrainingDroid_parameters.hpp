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

// Function BP_TrainingDroid.BP_TrainingDroid_C.GetComponent
struct ABP_TrainingDroid_C_GetComponent_Params
{
	struct FName                                       AttachPointName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateHitFXTimestamps
struct ABP_TrainingDroid_C_UpdateHitFXTimestamps_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.PlayValidHitFX
struct ABP_TrainingDroid_C_PlayValidHitFX_Params
{
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                HitCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.PlayHitFX
struct ABP_TrainingDroid_C_PlayHitFX_Params
{
	class UAkAudioEvent*                               SFX;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsTwoHanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    TwoHandedVFX;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             OneHandedVFX;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isWeak;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               TwoHandedSFX;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               WeakSFX;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateVulnerabilitySFX
struct ABP_TrainingDroid_C_UpdateVulnerabilitySFX_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnEndCut
struct ABP_TrainingDroid_C_OnEndCut_Params
{
	class AActor**                                     CuttingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        CutComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    BladeDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnStartCut
struct ABP_TrainingDroid_C_OnStartCut_Params
{
	class AActor**                                     CuttingActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        CutComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    CutEntryLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnUpdateCut
struct ABP_TrainingDroid_C_OnUpdateCut_Params
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

// Function BP_TrainingDroid.BP_TrainingDroid_C.UsesCuttingFX
struct ABP_TrainingDroid_C_UsesCuttingFX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateHeadSpinRate
struct ABP_TrainingDroid_C_UpdateHeadSpinRate_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.UpdateMiddleSpinRate
struct ABP_TrainingDroid_C_UpdateMiddleSpinRate_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.DroidCleanUp
struct ABP_TrainingDroid_C_DroidCleanUp_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.CheckHealth
struct ABP_TrainingDroid_C_CheckHealth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.SetAsDeflectionTarget
struct ABP_TrainingDroid_C_SetAsDeflectionTarget_Params
{
	bool                                               Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnBurnt
struct ABP_TrainingDroid_C_OnBurnt_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     DirectionX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               SparksOnly;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.UserConstructionScript
struct ABP_TrainingDroid_C_UserConstructionScript_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Projection__FinishedFunc
struct ABP_TrainingDroid_C_Projection__FinishedFunc_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Projection__UpdateFunc
struct ABP_TrainingDroid_C_Projection__UpdateFunc_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_0__FinishedFunc
struct ABP_TrainingDroid_C_Timeline_0__FinishedFunc_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_0__UpdateFunc
struct ABP_TrainingDroid_C_Timeline_0__UpdateFunc_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_1__FinishedFunc
struct ABP_TrainingDroid_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_1__UpdateFunc
struct ABP_TrainingDroid_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_2__FinishedFunc
struct ABP_TrainingDroid_C_Timeline_2__FinishedFunc_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_2__UpdateFunc
struct ABP_TrainingDroid_C_Timeline_2__UpdateFunc_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_3__FinishedFunc
struct ABP_TrainingDroid_C_Timeline_3__FinishedFunc_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Timeline_3__UpdateFunc
struct ABP_TrainingDroid_C_Timeline_3__UpdateFunc_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocationAndYaw_3A3A6E494A53F1904798658209DD81B7
struct ABP_TrainingDroid_C_OnReachedLocationAndYaw_3A3A6E494A53F1904798658209DD81B7_Params
{
	class AActor*                                      MovedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocation_3A3A6E494A53F1904798658209DD81B7
struct ABP_TrainingDroid_C_OnReachedLocation_3A3A6E494A53F1904798658209DD81B7_Params
{
	class AActor*                                      MovedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocationAndYaw_4883F11F4CFBFB700901E29EE6FBD497
struct ABP_TrainingDroid_C_OnReachedLocationAndYaw_4883F11F4CFBFB700901E29EE6FBD497_Params
{
	class AActor*                                      MovedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnReachedLocation_4883F11F4CFBFB700901E29EE6FBD497
struct ABP_TrainingDroid_C_OnReachedLocation_4883F11F4CFBFB700901E29EE6FBD497_Params
{
	class AActor*                                      MovedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnDeathAnimStarted
struct ABP_TrainingDroid_C_OnDeathAnimStarted_Params
{
	struct FWKNDDamageInfo*                            DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnDeathAnimEnded
struct ABP_TrainingDroid_C_OnDeathAnimEnded_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.DoRagdoll
struct ABP_TrainingDroid_C_DoRagdoll_Params
{
	TArray<struct FRagdollInfo>                        BonesToRagdoll;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.RagdollBones
struct ABP_TrainingDroid_C_RagdollBones_Params
{
	TArray<struct FRagdollInfo>                        Array;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnRagdollComponentHit
struct ABP_TrainingDroid_C_OnRagdollComponentHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Explode
struct ABP_TrainingDroid_C_Explode_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Ragdoll_TD
struct ABP_TrainingDroid_C_Ragdoll_TD_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.ReceiveBeginPlay
struct ABP_TrainingDroid_C_ReceiveBeginPlay_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.ReceiveTick
struct ABP_TrainingDroid_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature
struct ABP_TrainingDroid_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature_Params
{
	struct FMotionFieldTarget                          MotionFieldTarget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature
struct ABP_TrainingDroid_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature_Params
{
	ECombatStageType                                   CompletedStage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingStageCount;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.StartProjection
struct ABP_TrainingDroid_C_StartProjection_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.StopProjection
struct ABP_TrainingDroid_C_StopProjection_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.audio_ActivateDroidHover
struct ABP_TrainingDroid_C_audio_ActivateDroidHover_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.audio_DroidVoice_Activated
struct ABP_TrainingDroid_C_audio_DroidVoice_Activated_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.ChargeStatus
struct ABP_TrainingDroid_C_ChargeStatus_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.WeaponMalfunction
struct ABP_TrainingDroid_C_WeaponMalfunction_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.DetachSaber
struct ABP_TrainingDroid_C_DetachSaber_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.CombatStageStarted_Event_1
struct ABP_TrainingDroid_C_CombatStageStarted_Event_1_Params
{
	ECombatStageType                                   StartingStage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_TrainingDroid_C_BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.BreakArm
struct ABP_TrainingDroid_C_BreakArm_Params
{
	struct FVector                                     DirectionStrike;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.PowerAttackGlow
struct ABP_TrainingDroid_C_PowerAttackGlow_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.DamagedGlow
struct ABP_TrainingDroid_C_DamagedGlow_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.RestowDroid
struct ABP_TrainingDroid_C_RestowDroid_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyTwoHandedBlockFailedSig__DelegateSignature
struct ABP_TrainingDroid_C_BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyTwoHandedBlockFailedSig__DelegateSignature_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.ReceiveBlasterHit
struct ABP_TrainingDroid_C_ReceiveBlasterHit_Params
{
	class AActor**                                     StrikingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.RestowFinished
struct ABP_TrainingDroid_C_RestowFinished_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.Droid_Dissolve
struct ABP_TrainingDroid_C_Droid_Dissolve_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.DamageState
struct ABP_TrainingDroid_C_DamageState_Params
{
	int                                                State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.SpawnHitDecal
struct ABP_TrainingDroid_C_SpawnHitDecal_Params
{
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OrientHitVel
struct ABP_TrainingDroid_C_OrientHitVel_Params
{
	class UParticleSystemComponent*                    PFX;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.EyeFlickerTicker
struct ABP_TrainingDroid_C_EyeFlickerTicker_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.OnComponentAttached_Event_1
struct ABP_TrainingDroid_C_OnComponentAttached_Event_1_Params
{
	class USceneComponent*                             NewlyAttachedComponent;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.GoToRestowPosition
struct ABP_TrainingDroid_C_GoToRestowPosition_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature
struct ABP_TrainingDroid_C_BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature_Params
{
	int                                                DamageTaken;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.PlayEffectsForStrength
struct ABP_TrainingDroid_C_PlayEffectsForStrength_Params
{
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                HitCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.ExecuteUbergraph_BP_TrainingDroid
struct ABP_TrainingDroid_C_ExecuteUbergraph_BP_TrainingDroid_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.DeathSequenceFinished__DelegateSignature
struct ABP_TrainingDroid_C_DeathSequenceFinished__DelegateSignature_Params
{
	class ABP_TrainingDroid_C*                         TrainingDroid;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.DeathSequenceStarted__DelegateSignature
struct ABP_TrainingDroid_C_DeathSequenceStarted__DelegateSignature_Params
{
	class ABP_TrainingDroid_C*                         Droid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.HasRestowed__DelegateSignature
struct ABP_TrainingDroid_C_HasRestowed__DelegateSignature_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.HitByDeflectedBlaster__DelegateSignature
struct ABP_TrainingDroid_C_HitByDeflectedBlaster__DelegateSignature_Params
{
	class ABP_TrainingDroid_C*                         Droid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.TwoHandedBlockFail__DelegateSignature
struct ABP_TrainingDroid_C_TwoHandedBlockFail__DelegateSignature_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.InRestowPosition__DelegateSignature
struct ABP_TrainingDroid_C_InRestowPosition__DelegateSignature_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.TakenAHit__DelegateSignature
struct ABP_TrainingDroid_C_TakenAHit__DelegateSignature_Params
{
	class ABP_TrainingDroid_C*                         Droid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.DamageStateCounter__DelegateSignature
struct ABP_TrainingDroid_C_DamageStateCounter__DelegateSignature_Params
{
	int                                                Hits;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.HasRagdolled__DelegateSignature
struct ABP_TrainingDroid_C_HasRagdolled__DelegateSignature_Params
{
};

// Function BP_TrainingDroid.BP_TrainingDroid_C.CompletedCombatSequenceLoop__DelegateSignature
struct ABP_TrainingDroid_C_CompletedCombatSequenceLoop__DelegateSignature_Params
{
	ECombatStageType                                   NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
