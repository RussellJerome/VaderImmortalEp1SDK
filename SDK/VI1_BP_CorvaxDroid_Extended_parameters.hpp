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

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.CanOccupyCombatPoint
struct ABP_CorvaxDroid_Extended_C_CanOccupyCombatPoint_Params
{
	struct FKFCircleCombatPoint                        CombatPoint;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.GetPreferredCombatPoint
struct ABP_CorvaxDroid_Extended_C_GetPreferredCombatPoint_Params
{
	TArray<struct FKFCircleCombatPoint>                AvailableCombatPoints;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnAssignedToCombatPoint
struct ABP_CorvaxDroid_Extended_C_OnAssignedToCombatPoint_Params
{
	struct FKFCircleCombatPoint                        CombatPoint;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnAddedToCombatSquad
struct ABP_CorvaxDroid_Extended_C_OnAddedToCombatSquad_Params
{
	class ACombatSquad*                                Squad;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnRemovedFromCombatSquad
struct ABP_CorvaxDroid_Extended_C_OnRemovedFromCombatSquad_Params
{
	class ACombatSquad*                                Squad;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.GetHealthComponent
struct ABP_CorvaxDroid_Extended_C_GetHealthComponent_Params
{
	class UWKNDHealthComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.Despawn
struct ABP_CorvaxDroid_Extended_C_Despawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.Kill
struct ABP_CorvaxDroid_Extended_C_Kill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BindHandleAttackComplete
struct ABP_CorvaxDroid_Extended_C_BindHandleAttackComplete_Params
{
	struct FScriptDelegate                             HandleAttackCompleteDelegate;                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.CanAttack
struct ABP_CorvaxDroid_Extended_C_CanAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.GetNPCCombatType
struct ABP_CorvaxDroid_Extended_C_GetNPCCombatType_Params
{
	ENPCCombatType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.IsAttacking
struct ABP_CorvaxDroid_Extended_C_IsAttacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.SetOpponent
struct ABP_CorvaxDroid_Extended_C_SetOpponent_Params
{
	class ACombatPointManager*                         Opponent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StartAttack
struct ABP_CorvaxDroid_Extended_C_StartAttack_Params
{
	class AActor*                                      Opponent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayBeforeAttack;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StopAttack
struct ABP_CorvaxDroid_Extended_C_StopAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.PlayIdleAnim
struct ABP_CorvaxDroid_Extended_C_PlayIdleAnim_Params
{
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.UserConstructionScript
struct ABP_CorvaxDroid_Extended_C_UserConstructionScript_Params
{
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnDied_F86FFCB247931082EEAD6DB5ABC626BA
struct ABP_CorvaxDroid_Extended_C_OnDied_F86FFCB247931082EEAD6DB5ABC626BA_Params
{
	class AActor*                                      AttackingActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnStaggered_F86FFCB247931082EEAD6DB5ABC626BA
struct ABP_CorvaxDroid_Extended_C_OnStaggered_F86FFCB247931082EEAD6DB5ABC626BA_Params
{
	class AActor*                                      AttackingActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnFinished_F86FFCB247931082EEAD6DB5ABC626BA
struct ABP_CorvaxDroid_Extended_C_OnFinished_F86FFCB247931082EEAD6DB5ABC626BA_Params
{
	class AActor*                                      AttackingActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnReachedLocationAndYaw_6A6F9E1842D129099C955292FE9B2F7B
struct ABP_CorvaxDroid_Extended_C_OnReachedLocationAndYaw_6A6F9E1842D129099C955292FE9B2F7B_Params
{
	class AActor*                                      MovedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnReachedLocation_6A6F9E1842D129099C955292FE9B2F7B
struct ABP_CorvaxDroid_Extended_C_OnReachedLocation_6A6F9E1842D129099C955292FE9B2F7B_Params
{
	class AActor*                                      MovedActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StartRangedAttack
struct ABP_CorvaxDroid_Extended_C_StartRangedAttack_Params
{
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.SquadBehaviour_MoveTowardsDirection
struct ABP_CorvaxDroid_Extended_C_SquadBehaviour_MoveTowardsDirection_Params
{
	float                                              Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageAbortedSig__DelegateSignature
struct ABP_CorvaxDroid_Extended_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageAbortedSig__DelegateSignature_Params
{
	ECombatStageType                                   AbortedStage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature
struct ABP_CorvaxDroid_Extended_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature_Params
{
	ECombatStageType                                   CompletedStage;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Token;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingStageCount;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnStageEnds
struct ABP_CorvaxDroid_Extended_C_OnStageEnds_Params
{
	ECombatStageType                                   StageType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.EndAttack
struct ABP_CorvaxDroid_Extended_C_EndAttack_Params
{
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StartMeleeAttack
struct ABP_CorvaxDroid_Extended_C_StartMeleeAttack_Params
{
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnDeathAnimStarted
struct ABP_CorvaxDroid_Extended_C_OnDeathAnimStarted_Params
{
	struct FWKNDDamageInfo*                            DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyAttackStartedSig__DelegateSignature
struct ABP_CorvaxDroid_Extended_C_BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyAttackStartedSig__DelegateSignature_Params
{
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnDeathAnimEnded
struct ABP_CorvaxDroid_Extended_C_OnDeathAnimEnded_Params
{
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.ReceiveBeginPlay
struct ABP_CorvaxDroid_Extended_C_ReceiveBeginPlay_Params
{
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.UpdateVulnerabilityCollision
struct ABP_CorvaxDroid_Extended_C_UpdateVulnerabilityCollision_Params
{
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.ExecuteUbergraph_BP_CorvaxDroid_Extended
struct ABP_CorvaxDroid_Extended_C_ExecuteUbergraph_BP_CorvaxDroid_Extended_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnMoveCompleted__DelegateSignature
struct ABP_CorvaxDroid_Extended_C_OnMoveCompleted__DelegateSignature_Params
{
	class AActor*                                      NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnAttackCompleted__DelegateSignature
struct ABP_CorvaxDroid_Extended_C_OnAttackCompleted__DelegateSignature_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> CorvaxDroid;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
