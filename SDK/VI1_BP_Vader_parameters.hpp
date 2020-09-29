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

// Function BP_Vader.BP_Vader_C.SetSequenceBlendWeight
struct ABP_Vader_C_SetSequenceBlendWeight_Params
{
	float                                              Interp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Vader.BP_Vader_C.MoveAndFaceCharacter
struct ABP_Vader_C_MoveAndFaceCharacter_Params
{
	class AActor*                                      NewTargetFaceActor;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Vader.BP_Vader_C.UserConstructionScript
struct ABP_Vader_C_UserConstructionScript_Params
{
};

// Function BP_Vader.BP_Vader_C.VerbSend__FinishedFunc
struct ABP_Vader_C_VerbSend__FinishedFunc_Params
{
};

// Function BP_Vader.BP_Vader_C.VerbSend__UpdateFunc
struct ABP_Vader_C_VerbSend__UpdateFunc_Params
{
};

// Function BP_Vader.BP_Vader_C.Tick_UpdateVFX
struct ABP_Vader_C_Tick_UpdateVFX_Params
{
};

// Function BP_Vader.BP_Vader_C.LookAtStatus
struct ABP_Vader_C_LookAtStatus_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Vader.BP_Vader_C.OnThrowItem
struct ABP_Vader_C_OnThrowItem_Params
{
	class ARPOCForceThrowLocation**                    ThrowLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ASliceableActor**                            Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Vader.BP_Vader_C.ForceCombatStage
struct ABP_Vader_C_ForceCombatStage_Params
{
	ECombatStageType                                   StartStage;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Vader.BP_Vader_C.OnValidHit
struct ABP_Vader_C_OnValidHit_Params
{
	int*                                               Hit_Count;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UStaticMeshComponent**                       ArmourPiece;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              Two_Handed_Strike;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Vader.BP_Vader_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature
struct ABP_Vader_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature_Params
{
	struct FMotionFieldTarget                          MotionFieldTarget;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_Vader.BP_Vader_C.PoseVerbSends_Vader_ON
struct ABP_Vader_C_PoseVerbSends_Vader_ON_Params
{
};

// Function BP_Vader.BP_Vader_C.PoseVerbSends_Vader_OFF
struct ABP_Vader_C_PoseVerbSends_Vader_OFF_Params
{
};

// Function BP_Vader.BP_Vader_C.ReceiveTick
struct ABP_Vader_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Vader.BP_Vader_C.ReceiveBeginPlay
struct ABP_Vader_C_ReceiveBeginPlay_Params
{
};

// Function BP_Vader.BP_Vader_C.BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyComboCompletedSig__DelegateSignature
struct ABP_Vader_C_BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyComboCompletedSig__DelegateSignature_Params
{
	ECombat_ComboAttackResult                          bFinalMoveBlocked;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BlocksThisCombo;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Vader.BP_Vader_C.ExecuteUbergraph_BP_Vader
struct ABP_Vader_C_ExecuteUbergraph_BP_Vader_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
