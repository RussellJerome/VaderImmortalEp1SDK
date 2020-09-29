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

// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.CanOccupyCombatPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKFCircleCombatPoint    CombatPoint                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::CanOccupyCombatPoint(const struct FKFCircleCombatPoint& CombatPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.CanOccupyCombatPoint");

	ABP_TrainingRemote_Extended_C_CanOccupyCombatPoint_Params params;
	params.CombatPoint = CombatPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.GetPreferredCombatPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FKFCircleCombatPoint> AvailableCombatPoints          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ABP_TrainingRemote_Extended_C::GetPreferredCombatPoint(TArray<struct FKFCircleCombatPoint> AvailableCombatPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.GetPreferredCombatPoint");

	ABP_TrainingRemote_Extended_C_GetPreferredCombatPoint_Params params;
	params.AvailableCombatPoints = AvailableCombatPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnAssignedToCombatPoint
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKFCircleCombatPoint    CombatPoint                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::OnAssignedToCombatPoint(const struct FKFCircleCombatPoint& CombatPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnAssignedToCombatPoint");

	ABP_TrainingRemote_Extended_C_OnAssignedToCombatPoint_Params params;
	params.CombatPoint = CombatPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnRemovedFromCombatSquad
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACombatSquad*            Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::OnRemovedFromCombatSquad(class ACombatSquad* Squad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnRemovedFromCombatSquad");

	ABP_TrainingRemote_Extended_C_OnRemovedFromCombatSquad_Params params;
	params.Squad = Squad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnAddedToCombatSquad
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACombatSquad*            Squad                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::OnAddedToCombatSquad(class ACombatSquad* Squad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnAddedToCombatSquad");

	ABP_TrainingRemote_Extended_C_OnAddedToCombatSquad_Params params;
	params.Squad = Squad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.GetHealthComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWKNDHealthComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWKNDHealthComponent* ABP_TrainingRemote_Extended_C::GetHealthComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.GetHealthComponent");

	ABP_TrainingRemote_Extended_C_GetHealthComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.Despawn
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::Despawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.Despawn");

	ABP_TrainingRemote_Extended_C_Despawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.Kill
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::Kill()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.Kill");

	ABP_TrainingRemote_Extended_C_Kill_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BindHandleAttackComplete
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         HandleAttackCompleteDelegate   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::BindHandleAttackComplete(const struct FScriptDelegate& HandleAttackCompleteDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BindHandleAttackComplete");

	ABP_TrainingRemote_Extended_C_BindHandleAttackComplete_Params params;
	params.HandleAttackCompleteDelegate = HandleAttackCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.CanAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::CanAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.CanAttack");

	ABP_TrainingRemote_Extended_C_CanAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SetOpponent
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACombatPointManager*     Opponent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::SetOpponent(class ACombatPointManager* Opponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SetOpponent");

	ABP_TrainingRemote_Extended_C_SetOpponent_Params params;
	params.Opponent = Opponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.GetNPCCombatType
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ENPCCombatType                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ENPCCombatType ABP_TrainingRemote_Extended_C::GetNPCCombatType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.GetNPCCombatType");

	ABP_TrainingRemote_Extended_C_GetNPCCombatType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.IsAttacking
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::IsAttacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.IsAttacking");

	ABP_TrainingRemote_Extended_C_IsAttacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StartAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Opponent                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DelayBeforeAttack              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::StartAttack(class AActor* Opponent, float DelayBeforeAttack)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StartAttack");

	ABP_TrainingRemote_Extended_C_StartAttack_Params params;
	params.Opponent = Opponent;
	params.DelayBeforeAttack = DelayBeforeAttack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StopAttack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_TrainingRemote_Extended_C::StopAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StopAttack");

	ABP_TrainingRemote_Extended_C_StopAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SelectAttackType
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::SelectAttackType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SelectAttackType");

	ABP_TrainingRemote_Extended_C_SelectAttackType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.EnqueueSpawnAnimationPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::EnqueueSpawnAnimationPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.EnqueueSpawnAnimationPoints");

	ABP_TrainingRemote_Extended_C_EnqueueSpawnAnimationPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SplitBallInTwo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARPOCPickup_Lightsaber*  Lightsaber                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::SplitBallInTwo(class ARPOCPickup_Lightsaber* Lightsaber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SplitBallInTwo");

	ABP_TrainingRemote_Extended_C_SplitBallInTwo_Params params;
	params.Lightsaber = Lightsaber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.UserConstructionScript");

	ABP_TrainingRemote_Extended_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ShieldOnOff__FinishedFunc
// (BlueprintEvent)

void ABP_TrainingRemote_Extended_C::ShieldOnOff__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ShieldOnOff__FinishedFunc");

	ABP_TrainingRemote_Extended_C_ShieldOnOff__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ShieldOnOff__UpdateFunc
// (BlueprintEvent)

void ABP_TrainingRemote_Extended_C::ShieldOnOff__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ShieldOnOff__UpdateFunc");

	ABP_TrainingRemote_Extended_C_ShieldOnOff__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BladeHeatUp__FinishedFunc
// (BlueprintEvent)

void ABP_TrainingRemote_Extended_C::BladeHeatUp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BladeHeatUp__FinishedFunc");

	ABP_TrainingRemote_Extended_C_BladeHeatUp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BladeHeatUp__UpdateFunc
// (BlueprintEvent)

void ABP_TrainingRemote_Extended_C::BladeHeatUp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BladeHeatUp__UpdateFunc");

	ABP_TrainingRemote_Extended_C_BladeHeatUp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnNotifyEnd_6FBF44DB478B9F3E761D76A7D9AC2CD0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::OnNotifyEnd_6FBF44DB478B9F3E761D76A7D9AC2CD0(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnNotifyEnd_6FBF44DB478B9F3E761D76A7D9AC2CD0");

	ABP_TrainingRemote_Extended_C_OnNotifyEnd_6FBF44DB478B9F3E761D76A7D9AC2CD0_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnNotifyBegin_6FBF44DB478B9F3E761D76A7D9AC2CD0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::OnNotifyBegin_6FBF44DB478B9F3E761D76A7D9AC2CD0(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnNotifyBegin_6FBF44DB478B9F3E761D76A7D9AC2CD0");

	ABP_TrainingRemote_Extended_C_OnNotifyBegin_6FBF44DB478B9F3E761D76A7D9AC2CD0_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnInterrupted_6FBF44DB478B9F3E761D76A7D9AC2CD0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::OnInterrupted_6FBF44DB478B9F3E761D76A7D9AC2CD0(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnInterrupted_6FBF44DB478B9F3E761D76A7D9AC2CD0");

	ABP_TrainingRemote_Extended_C_OnInterrupted_6FBF44DB478B9F3E761D76A7D9AC2CD0_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnBlendOut_6FBF44DB478B9F3E761D76A7D9AC2CD0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::OnBlendOut_6FBF44DB478B9F3E761D76A7D9AC2CD0(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnBlendOut_6FBF44DB478B9F3E761D76A7D9AC2CD0");

	ABP_TrainingRemote_Extended_C_OnBlendOut_6FBF44DB478B9F3E761D76A7D9AC2CD0_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnCompleted_6FBF44DB478B9F3E761D76A7D9AC2CD0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::OnCompleted_6FBF44DB478B9F3E761D76A7D9AC2CD0(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnCompleted_6FBF44DB478B9F3E761D76A7D9AC2CD0");

	ABP_TrainingRemote_Extended_C_OnCompleted_6FBF44DB478B9F3E761D76A7D9AC2CD0_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SquadBehaviour_Move
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::SquadBehaviour_Move(const struct FVector& Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.SquadBehaviour_Move");

	ABP_TrainingRemote_Extended_C_SquadBehaviour_Move_Params params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ReceiveTick");

	ABP_TrainingRemote_Extended_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.TurnOnShield
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::TurnOnShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.TurnOnShield");

	ABP_TrainingRemote_Extended_C_TurnOnShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.TurnOffShield
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::TurnOffShield()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.TurnOffShield");

	ABP_TrainingRemote_Extended_C_TurnOffShield_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnShieldTimerEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::OnShieldTimerEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnShieldTimerEnd");

	ABP_TrainingRemote_Extended_C_OnShieldTimerEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BndEvt__BladeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::BndEvt__BladeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BndEvt__BladeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_TrainingRemote_Extended_C_BndEvt__BladeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ApplyBlasterDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Hit_Actor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::ApplyBlasterDamage(class AActor** Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ApplyBlasterDamage");

	ABP_TrainingRemote_Extended_C_ApplyBlasterDamage_Params params;
	params.Hit_Actor = Hit_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.PlayBackToIdle
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::PlayBackToIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.PlayBackToIdle");

	ABP_TrainingRemote_Extended_C_PlayBackToIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StartMeleeAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::StartMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StartMeleeAttack");

	ABP_TrainingRemote_Extended_C_StartMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StartRangedAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::StartRangedAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.StartRangedAttack");

	ABP_TrainingRemote_Extended_C_StartRangedAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.PlayTelegraph
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::PlayTelegraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.PlayTelegraph");

	ABP_TrainingRemote_Extended_C_PlayTelegraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.DoAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ENPCCombatType                 AttackType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumAttacks                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::DoAttack(ENPCCombatType AttackType, int NumAttacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.DoAttack");

	ABP_TrainingRemote_Extended_C_DoAttack_Params params;
	params.AttackType = AttackType;
	params.NumAttacks = NumAttacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.VisualAssist
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::VisualAssist()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.VisualAssist");

	ABP_TrainingRemote_Extended_C_VisualAssist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ReceiveBeginPlay");

	ABP_TrainingRemote_Extended_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BndEvt__LightsaberCollider_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::BndEvt__LightsaberCollider_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.BndEvt__LightsaberCollider_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_TrainingRemote_Extended_C_BndEvt__LightsaberCollider_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.PlaySpawnAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_Extended_C::PlaySpawnAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.PlaySpawnAnimation");

	ABP_TrainingRemote_Extended_C_PlaySpawnAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ExecuteUbergraph_BP_TrainingRemote_Extended
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::ExecuteUbergraph_BP_TrainingRemote_Extended(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.ExecuteUbergraph_BP_TrainingRemote_Extended");

	ABP_TrainingRemote_Extended_C_ExecuteUbergraph_BP_TrainingRemote_Extended_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnSpawnComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TrainingRemote_C*    TrainingRemote                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::OnSpawnComplete__DelegateSignature(class ABP_TrainingRemote_C* TrainingRemote)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnSpawnComplete__DelegateSignature");

	ABP_TrainingRemote_Extended_C_OnSpawnComplete__DelegateSignature_Params params;
	params.TrainingRemote = TrainingRemote;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnAttackComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCombatSquadBehaviourInterface> Attacker                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_Extended_C::OnAttackComplete__DelegateSignature(const TScriptInterface<class UCombatSquadBehaviourInterface>& Attacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C.OnAttackComplete__DelegateSignature");

	ABP_TrainingRemote_Extended_C_OnAttackComplete__DelegateSignature_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
