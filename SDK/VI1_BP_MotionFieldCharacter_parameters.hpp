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

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.GetEnemyType
struct ABP_MotionFieldCharacter_C_GetEnemyType_Params
{
	EEnemyType                                         EnemyType;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.GetRelevantDeathAnimation
struct ABP_MotionFieldCharacter_C_GetRelevantDeathAnimation_Params
{
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UAnimMontage*                                Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.CanPlayIdle
struct ABP_MotionFieldCharacter_C_CanPlayIdle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.DrawAKComponents
struct ABP_MotionFieldCharacter_C_DrawAKComponents_Params
{
	bool                                               DrawComponents;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.SetNewOpponent
struct ABP_MotionFieldCharacter_C_SetNewOpponent_Params
{
	class AWKNDPlayerPawn*                             NewOpponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ResetSaber
struct ABP_MotionFieldCharacter_C_ResetSaber_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnValidHit
struct ABP_MotionFieldCharacter_C_OnValidHit_Params
{
	int                                                Hit_Count;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UStaticMeshComponent*                        ArmourPiece;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Two_Handed_Strike;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.SwapToDummy
struct ABP_MotionFieldCharacter_C_SwapToDummy_Params
{
	class ABP_Dummysaber_C*                            Dummy_Saber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.SwapToSaber
struct ABP_MotionFieldCharacter_C_SwapToSaber_Params
{
	class ABP_Lightsaber_Vader_C*                      Vader_Saber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.VaderLookAtTarget
struct ABP_MotionFieldCharacter_C_VaderLookAtTarget_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.UserConstructionScript
struct ABP_MotionFieldCharacter_C_UserConstructionScript_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement1__FinishedFunc
struct ABP_MotionFieldCharacter_C_IdleMovement1__FinishedFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement1__UpdateFunc
struct ABP_MotionFieldCharacter_C_IdleMovement1__UpdateFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement2__FinishedFunc
struct ABP_MotionFieldCharacter_C_IdleMovement2__FinishedFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement2__UpdateFunc
struct ABP_MotionFieldCharacter_C_IdleMovement2__UpdateFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement3__FinishedFunc
struct ABP_MotionFieldCharacter_C_IdleMovement3__FinishedFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement3__UpdateFunc
struct ABP_MotionFieldCharacter_C_IdleMovement3__UpdateFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement4__FinishedFunc
struct ABP_MotionFieldCharacter_C_IdleMovement4__FinishedFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement4__UpdateFunc
struct ABP_MotionFieldCharacter_C_IdleMovement4__UpdateFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement5__FinishedFunc
struct ABP_MotionFieldCharacter_C_IdleMovement5__FinishedFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement5__UpdateFunc
struct ABP_MotionFieldCharacter_C_IdleMovement5__UpdateFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement6__FinishedFunc
struct ABP_MotionFieldCharacter_C_IdleMovement6__FinishedFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement6__UpdateFunc
struct ABP_MotionFieldCharacter_C_IdleMovement6__UpdateFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement7__FinishedFunc
struct ABP_MotionFieldCharacter_C_IdleMovement7__FinishedFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement7__UpdateFunc
struct ABP_MotionFieldCharacter_C_IdleMovement7__UpdateFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement8__FinishedFunc
struct ABP_MotionFieldCharacter_C_IdleMovement8__FinishedFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement8__UpdateFunc
struct ABP_MotionFieldCharacter_C_IdleMovement8__UpdateFunc_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnNotifyEnd_EABA1FA349E1B983FB3E5E85EB55CE32
struct ABP_MotionFieldCharacter_C_OnNotifyEnd_EABA1FA349E1B983FB3E5E85EB55CE32_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnNotifyBegin_EABA1FA349E1B983FB3E5E85EB55CE32
struct ABP_MotionFieldCharacter_C_OnNotifyBegin_EABA1FA349E1B983FB3E5E85EB55CE32_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnInterrupted_EABA1FA349E1B983FB3E5E85EB55CE32
struct ABP_MotionFieldCharacter_C_OnInterrupted_EABA1FA349E1B983FB3E5E85EB55CE32_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnBlendOut_EABA1FA349E1B983FB3E5E85EB55CE32
struct ABP_MotionFieldCharacter_C_OnBlendOut_EABA1FA349E1B983FB3E5E85EB55CE32_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnCompleted_EABA1FA349E1B983FB3E5E85EB55CE32
struct ABP_MotionFieldCharacter_C_OnCompleted_EABA1FA349E1B983FB3E5E85EB55CE32_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Begin Idle
struct ABP_MotionFieldCharacter_C_Begin_Idle_Params
{
	int                                                AnimIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartFraction;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Backoff;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.EndIdle
struct ABP_MotionFieldCharacter_C_EndIdle_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Open_Gate
struct ABP_MotionFieldCharacter_C_Open_Gate_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Idle_Anim
struct ABP_MotionFieldCharacter_C_Idle_Anim_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Close_Gate
struct ABP_MotionFieldCharacter_C_Close_Gate_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Back_off
struct ABP_MotionFieldCharacter_C_Back_off_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_HitWhileVulnerableSig__DelegateSignature
struct ABP_MotionFieldCharacter_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_HitWhileVulnerableSig__DelegateSignature_Params
{
	int                                                HitCount;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EComboAngleCheck                                   AngleCheckHitResult;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UStaticMeshComponent*                        HitArmourPiece;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bTwoHandedStrike;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Tick_DrawDebug
struct ABP_MotionFieldCharacter_C_Tick_DrawDebug_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Begin_AllowDebugInput
struct ABP_MotionFieldCharacter_C_Begin_AllowDebugInput_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.StartLightSaber
struct ABP_MotionFieldCharacter_C_StartLightSaber_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ReceiveBeginPlay
struct ABP_MotionFieldCharacter_C_ReceiveBeginPlay_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ReceiveTick
struct ABP_MotionFieldCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ReceiveDestroyed
struct ABP_MotionFieldCharacter_C_ReceiveDestroyed_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Suspend
struct ABP_MotionFieldCharacter_C_Suspend_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnDeathWithDamageInfo__DelegateSignature
struct ABP_MotionFieldCharacter_C_BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnDeathWithDamageInfo__DelegateSignature_Params
{
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnDeathAnimEnded
struct ABP_MotionFieldCharacter_C_OnDeathAnimEnded_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnDeathAnimStarted
struct ABP_MotionFieldCharacter_C_OnDeathAnimStarted_Params
{
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.DestroySaber
struct ABP_MotionFieldCharacter_C_DestroySaber_Params
{
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnDeath
struct ABP_MotionFieldCharacter_C_OnDeath_Params
{
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ExecuteUbergraph_BP_MotionFieldCharacter
struct ABP_MotionFieldCharacter_C_ExecuteUbergraph_BP_MotionFieldCharacter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.InvalidHit__DelegateSignature
struct ABP_MotionFieldCharacter_C_InvalidHit__DelegateSignature_Params
{
	EComboAngleCheck                                   FailureReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
