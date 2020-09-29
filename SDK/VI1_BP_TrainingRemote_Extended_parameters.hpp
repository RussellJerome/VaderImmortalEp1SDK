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

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.CanOccupyCombatPoint
struct ABP_TrainingRemote_Extended_C_CanOccupyCombatPoint_Params
{
	struct FKFCircleCombatPoint                        CombatPoint;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.GetPreferredCombatPoint
struct ABP_TrainingRemote_Extended_C_GetPreferredCombatPoint_Params
{
	TArray<struct FKFCircleCombatPoint>                AvailableCombatPoints;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnAssignedToCombatPoint
struct ABP_TrainingRemote_Extended_C_OnAssignedToCombatPoint_Params
{
	struct FKFCircleCombatPoint                        CombatPoint;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnRemovedFromCombatSquad
struct ABP_TrainingRemote_Extended_C_OnRemovedFromCombatSquad_Params
{
	class ACombatSquad*                                Squad;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnAddedToCombatSquad
struct ABP_TrainingRemote_Extended_C_OnAddedToCombatSquad_Params
{
	class ACombatSquad*                                Squad;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.GetHealthComponent
struct ABP_TrainingRemote_Extended_C_GetHealthComponent_Params
{
	class UWKNDHealthComponent*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.Despawn
struct ABP_TrainingRemote_Extended_C_Despawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.Kill
struct ABP_TrainingRemote_Extended_C_Kill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BindHandleAttackComplete
struct ABP_TrainingRemote_Extended_C_BindHandleAttackComplete_Params
{
	struct FScriptDelegate                             HandleAttackCompleteDelegate;                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.CanAttack
struct ABP_TrainingRemote_Extended_C_CanAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SetOpponent
struct ABP_TrainingRemote_Extended_C_SetOpponent_Params
{
	class ACombatPointManager*                         Opponent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.GetNPCCombatType
struct ABP_TrainingRemote_Extended_C_GetNPCCombatType_Params
{
	ENPCCombatType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.IsAttacking
struct ABP_TrainingRemote_Extended_C_IsAttacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StartAttack
struct ABP_TrainingRemote_Extended_C_StartAttack_Params
{
	class AActor*                                      Opponent;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayBeforeAttack;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StopAttack
struct ABP_TrainingRemote_Extended_C_StopAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SelectAttackType
struct ABP_TrainingRemote_Extended_C_SelectAttackType_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.EnqueueSpawnAnimationPoints
struct ABP_TrainingRemote_Extended_C_EnqueueSpawnAnimationPoints_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SplitBallInTwo
struct ABP_TrainingRemote_Extended_C_SplitBallInTwo_Params
{
	class ARPOCPickup_Lightsaber*                      Lightsaber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.UserConstructionScript
struct ABP_TrainingRemote_Extended_C_UserConstructionScript_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ShieldOnOff__FinishedFunc
struct ABP_TrainingRemote_Extended_C_ShieldOnOff__FinishedFunc_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ShieldOnOff__UpdateFunc
struct ABP_TrainingRemote_Extended_C_ShieldOnOff__UpdateFunc_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BladeHeatUp__FinishedFunc
struct ABP_TrainingRemote_Extended_C_BladeHeatUp__FinishedFunc_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BladeHeatUp__UpdateFunc
struct ABP_TrainingRemote_Extended_C_BladeHeatUp__UpdateFunc_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnNotifyEnd_6FBF44DB478B9F3E761D76A7D9AC2CD0
struct ABP_TrainingRemote_Extended_C_OnNotifyEnd_6FBF44DB478B9F3E761D76A7D9AC2CD0_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnNotifyBegin_6FBF44DB478B9F3E761D76A7D9AC2CD0
struct ABP_TrainingRemote_Extended_C_OnNotifyBegin_6FBF44DB478B9F3E761D76A7D9AC2CD0_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnInterrupted_6FBF44DB478B9F3E761D76A7D9AC2CD0
struct ABP_TrainingRemote_Extended_C_OnInterrupted_6FBF44DB478B9F3E761D76A7D9AC2CD0_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnBlendOut_6FBF44DB478B9F3E761D76A7D9AC2CD0
struct ABP_TrainingRemote_Extended_C_OnBlendOut_6FBF44DB478B9F3E761D76A7D9AC2CD0_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnCompleted_6FBF44DB478B9F3E761D76A7D9AC2CD0
struct ABP_TrainingRemote_Extended_C_OnCompleted_6FBF44DB478B9F3E761D76A7D9AC2CD0_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SquadBehaviour_Move
struct ABP_TrainingRemote_Extended_C_SquadBehaviour_Move_Params
{
	struct FVector                                     Destination;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ReceiveTick
struct ABP_TrainingRemote_Extended_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.TurnOnShield
struct ABP_TrainingRemote_Extended_C_TurnOnShield_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.TurnOffShield
struct ABP_TrainingRemote_Extended_C_TurnOffShield_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnShieldTimerEnd
struct ABP_TrainingRemote_Extended_C_OnShieldTimerEnd_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BndEvt__BladeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_TrainingRemote_Extended_C_BndEvt__BladeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ApplyBlasterDamage
struct ABP_TrainingRemote_Extended_C_ApplyBlasterDamage_Params
{
	class AActor**                                     Hit_Actor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.PlayBackToIdle
struct ABP_TrainingRemote_Extended_C_PlayBackToIdle_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StartMeleeAttack
struct ABP_TrainingRemote_Extended_C_StartMeleeAttack_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StartRangedAttack
struct ABP_TrainingRemote_Extended_C_StartRangedAttack_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.PlayTelegraph
struct ABP_TrainingRemote_Extended_C_PlayTelegraph_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.DoAttack
struct ABP_TrainingRemote_Extended_C_DoAttack_Params
{
	ENPCCombatType                                     AttackType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumAttacks;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.VisualAssist
struct ABP_TrainingRemote_Extended_C_VisualAssist_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ReceiveBeginPlay
struct ABP_TrainingRemote_Extended_C_ReceiveBeginPlay_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BndEvt__LightsaberCollider_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_TrainingRemote_Extended_C_BndEvt__LightsaberCollider_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.PlaySpawnAnimation
struct ABP_TrainingRemote_Extended_C_PlaySpawnAnimation_Params
{
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ExecuteUbergraph_BP_TrainingRemote_Extended
struct ABP_TrainingRemote_Extended_C_ExecuteUbergraph_BP_TrainingRemote_Extended_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnSpawnComplete__DelegateSignature
struct ABP_TrainingRemote_Extended_C_OnSpawnComplete__DelegateSignature_Params
{
	class ABP_TrainingRemote_C*                        TrainingRemote;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnAttackComplete__DelegateSignature
struct ABP_TrainingRemote_Extended_C_OnAttackComplete__DelegateSignature_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> Attacker;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
