// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.CanOccupyCombatPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKFCircleCombatPoint    CombatPoint                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::CanOccupyCombatPoint(const struct FKFCircleCombatPoint& CombatPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.CanOccupyCombatPoint");

	ABP_CorvaxDroid_Extended_C_CanOccupyCombatPoint_Params params;
	params.CombatPoint = CombatPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.GetPreferredCombatPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FKFCircleCombatPoint> AvailableCombatPoints          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_CorvaxDroid_Extended_C::GetPreferredCombatPoint(TArray<struct FKFCircleCombatPoint> AvailableCombatPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.GetPreferredCombatPoint");

	ABP_CorvaxDroid_Extended_C_GetPreferredCombatPoint_Params params;
	params.AvailableCombatPoints = AvailableCombatPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnAssignedToCombatPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKFCircleCombatPoint    CombatPoint                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::OnAssignedToCombatPoint(const struct FKFCircleCombatPoint& CombatPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnAssignedToCombatPoint");

	ABP_CorvaxDroid_Extended_C_OnAssignedToCombatPoint_Params params;
	params.CombatPoint = CombatPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnAddedToCombatSquad
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACombatSquad*            Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::OnAddedToCombatSquad(class ACombatSquad* Squad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnAddedToCombatSquad");

	ABP_CorvaxDroid_Extended_C_OnAddedToCombatSquad_Params params;
	params.Squad = Squad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnRemovedFromCombatSquad
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACombatSquad*            Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::OnRemovedFromCombatSquad(class ACombatSquad* Squad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnRemovedFromCombatSquad");

	ABP_CorvaxDroid_Extended_C_OnRemovedFromCombatSquad_Params params;
	params.Squad = Squad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.GetHealthComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWKNDHealthComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWKNDHealthComponent* ABP_CorvaxDroid_Extended_C::GetHealthComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.GetHealthComponent");

	ABP_CorvaxDroid_Extended_C_GetHealthComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.Despawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::Despawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.Despawn");

	ABP_CorvaxDroid_Extended_C_Despawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.Kill
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.Kill");

	ABP_CorvaxDroid_Extended_C_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BindHandleAttackComplete
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         HandleAttackCompleteDelegate   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::BindHandleAttackComplete(const struct FScriptDelegate& HandleAttackCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BindHandleAttackComplete");

	ABP_CorvaxDroid_Extended_C_BindHandleAttackComplete_Params params;
	params.HandleAttackCompleteDelegate = HandleAttackCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.CanAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::CanAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.CanAttack");

	ABP_CorvaxDroid_Extended_C_CanAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.GetNPCCombatType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ENPCCombatType                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ENPCCombatType ABP_CorvaxDroid_Extended_C::GetNPCCombatType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.GetNPCCombatType");

	ABP_CorvaxDroid_Extended_C_GetNPCCombatType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.IsAttacking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::IsAttacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.IsAttacking");

	ABP_CorvaxDroid_Extended_C_IsAttacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.SetOpponent
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACombatPointManager*     Opponent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::SetOpponent(class ACombatPointManager* Opponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.SetOpponent");

	ABP_CorvaxDroid_Extended_C_SetOpponent_Params params;
	params.Opponent = Opponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StartAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Opponent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DelayBeforeAttack              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::StartAttack(class AActor* Opponent, float DelayBeforeAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StartAttack");

	ABP_CorvaxDroid_Extended_C_StartAttack_Params params;
	params.Opponent = Opponent;
	params.DelayBeforeAttack = DelayBeforeAttack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StopAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CorvaxDroid_Extended_C::StopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StopAttack");

	ABP_CorvaxDroid_Extended_C_StopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.PlayIdleAnim
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_Extended_C::PlayIdleAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.PlayIdleAnim");

	ABP_CorvaxDroid_Extended_C_PlayIdleAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_Extended_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.UserConstructionScript");

	ABP_CorvaxDroid_Extended_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnDied_F86FFCB247931082EEAD6DB5ABC626BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  AttackingActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::OnDied_F86FFCB247931082EEAD6DB5ABC626BA(class AActor* AttackingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnDied_F86FFCB247931082EEAD6DB5ABC626BA");

	ABP_CorvaxDroid_Extended_C_OnDied_F86FFCB247931082EEAD6DB5ABC626BA_Params params;
	params.AttackingActor = AttackingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnStaggered_F86FFCB247931082EEAD6DB5ABC626BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  AttackingActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::OnStaggered_F86FFCB247931082EEAD6DB5ABC626BA(class AActor* AttackingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnStaggered_F86FFCB247931082EEAD6DB5ABC626BA");

	ABP_CorvaxDroid_Extended_C_OnStaggered_F86FFCB247931082EEAD6DB5ABC626BA_Params params;
	params.AttackingActor = AttackingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnFinished_F86FFCB247931082EEAD6DB5ABC626BA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  AttackingActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::OnFinished_F86FFCB247931082EEAD6DB5ABC626BA(class AActor* AttackingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnFinished_F86FFCB247931082EEAD6DB5ABC626BA");

	ABP_CorvaxDroid_Extended_C_OnFinished_F86FFCB247931082EEAD6DB5ABC626BA_Params params;
	params.AttackingActor = AttackingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnReachedLocationAndYaw_6A6F9E1842D129099C955292FE9B2F7B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MovedActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::OnReachedLocationAndYaw_6A6F9E1842D129099C955292FE9B2F7B(class AActor* MovedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnReachedLocationAndYaw_6A6F9E1842D129099C955292FE9B2F7B");

	ABP_CorvaxDroid_Extended_C_OnReachedLocationAndYaw_6A6F9E1842D129099C955292FE9B2F7B_Params params;
	params.MovedActor = MovedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnReachedLocation_6A6F9E1842D129099C955292FE9B2F7B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  MovedActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::OnReachedLocation_6A6F9E1842D129099C955292FE9B2F7B(class AActor* MovedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnReachedLocation_6A6F9E1842D129099C955292FE9B2F7B");

	ABP_CorvaxDroid_Extended_C_OnReachedLocation_6A6F9E1842D129099C955292FE9B2F7B_Params params;
	params.MovedActor = MovedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StartRangedAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_Extended_C::StartRangedAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StartRangedAttack");

	ABP_CorvaxDroid_Extended_C_StartRangedAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.SquadBehaviour_MoveTowardsDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::SquadBehaviour_MoveTowardsDirection(float Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.SquadBehaviour_MoveTowardsDirection");

	ABP_CorvaxDroid_Extended_C_SquadBehaviour_MoveTowardsDirection_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageAbortedSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ECombatStageType               AbortedStage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageAbortedSig__DelegateSignature(ECombatStageType AbortedStage, const struct FName& Token)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageAbortedSig__DelegateSignature");

	ABP_CorvaxDroid_Extended_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageAbortedSig__DelegateSignature_Params params;
	params.AbortedStage = AbortedStage;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ECombatStageType               CompletedStage                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Token                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RemainingStageCount            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature(ECombatStageType CompletedStage, const struct FName& Token, int RemainingStageCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature");

	ABP_CorvaxDroid_Extended_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature_Params params;
	params.CompletedStage = CompletedStage;
	params.Token = Token;
	params.RemainingStageCount = RemainingStageCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnStageEnds
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECombatStageType               StageType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::OnStageEnds(ECombatStageType StageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnStageEnds");

	ABP_CorvaxDroid_Extended_C_OnStageEnds_Params params;
	params.StageType = StageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.EndAttack
// (BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_Extended_C::EndAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.EndAttack");

	ABP_CorvaxDroid_Extended_C_EndAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StartMeleeAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_Extended_C::StartMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.StartMeleeAttack");

	ABP_CorvaxDroid_Extended_C_StartMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnDeathAnimStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWKNDDamageInfo*        DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_CorvaxDroid_Extended_C::OnDeathAnimStarted(struct FWKNDDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnDeathAnimStarted");

	ABP_CorvaxDroid_Extended_C_OnDeathAnimStarted_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyAttackStartedSig__DelegateSignature
// (BlueprintEvent)

void ABP_CorvaxDroid_Extended_C::BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyAttackStartedSig__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyAttackStartedSig__DelegateSignature");

	ABP_CorvaxDroid_Extended_C_BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyAttackStartedSig__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnDeathAnimEnded
// (BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_Extended_C::OnDeathAnimEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnDeathAnimEnded");

	ABP_CorvaxDroid_Extended_C_OnDeathAnimEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CorvaxDroid_Extended_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.ReceiveBeginPlay");

	ABP_CorvaxDroid_Extended_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.UpdateVulnerabilityCollision
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CorvaxDroid_Extended_C::UpdateVulnerabilityCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.UpdateVulnerabilityCollision");

	ABP_CorvaxDroid_Extended_C_UpdateVulnerabilityCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.ExecuteUbergraph_BP_CorvaxDroid_Extended
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::ExecuteUbergraph_BP_CorvaxDroid_Extended(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.ExecuteUbergraph_BP_CorvaxDroid_Extended");

	ABP_CorvaxDroid_Extended_C_ExecuteUbergraph_BP_CorvaxDroid_Extended_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnMoveCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::OnMoveCompleted__DelegateSignature(class AActor* NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnMoveCompleted__DelegateSignature");

	ABP_CorvaxDroid_Extended_C_OnMoveCompleted__DelegateSignature_Params params;
	params.NPC = NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnAttackCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCombatSquadBehaviourInterface> CorvaxDroid                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CorvaxDroid_Extended_C::OnAttackCompleted__DelegateSignature(const TScriptInterface<class UCombatSquadBehaviourInterface>& CorvaxDroid)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C.OnAttackCompleted__DelegateSignature");

	ABP_CorvaxDroid_Extended_C_OnAttackCompleted__DelegateSignature_Params params;
	params.CorvaxDroid = CorvaxDroid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
