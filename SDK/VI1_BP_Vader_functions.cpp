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

// Function BP_Vader.BP_Vader_C.SetSequenceBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Interp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vader_C::SetSequenceBlendWeight(float Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.SetSequenceBlendWeight");

	ABP_Vader_C_SetSequenceBlendWeight_Params params;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.MoveAndFaceCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewTargetFaceActor             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vader_C::MoveAndFaceCharacter(class AActor* NewTargetFaceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.MoveAndFaceCharacter");

	ABP_Vader_C_MoveAndFaceCharacter_Params params;
	params.NewTargetFaceActor = NewTargetFaceActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Vader_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.UserConstructionScript");

	ABP_Vader_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.VerbSend__FinishedFunc
// (BlueprintEvent)

void ABP_Vader_C::VerbSend__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.VerbSend__FinishedFunc");

	ABP_Vader_C_VerbSend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.VerbSend__UpdateFunc
// (BlueprintEvent)

void ABP_Vader_C::VerbSend__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.VerbSend__UpdateFunc");

	ABP_Vader_C_VerbSend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.Tick_UpdateVFX
// (BlueprintCallable, BlueprintEvent)

void ABP_Vader_C::Tick_UpdateVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.Tick_UpdateVFX");

	ABP_Vader_C_Tick_UpdateVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.LookAtStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vader_C::LookAtStatus(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.LookAtStatus");

	ABP_Vader_C_LookAtStatus_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.OnThrowItem
// (Event, Public, BlueprintEvent)
// Parameters:
// class ARPOCForceThrowLocation** ThrowLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASliceableActor**        Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vader_C::OnThrowItem(class ARPOCForceThrowLocation** ThrowLocation, class ASliceableActor** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.OnThrowItem");

	ABP_Vader_C_OnThrowItem_Params params;
	params.ThrowLocation = ThrowLocation;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.ForceCombatStage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECombatStageType               StartStage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vader_C::ForceCombatStage(ECombatStageType StartStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.ForceCombatStage");

	ABP_Vader_C_ForceCombatStage_Params params;
	params.StartStage = StartStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.OnValidHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Hit_Count                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UStaticMeshComponent**   ArmourPiece                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          Two_Handed_Strike              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vader_C::OnValidHit(int* Hit_Count, struct FVector* Location, struct FVector* Direction, class UStaticMeshComponent** ArmourPiece, bool* Two_Handed_Strike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.OnValidHit");

	ABP_Vader_C_OnValidHit_Params params;
	params.Hit_Count = Hit_Count;
	params.Location = Location;
	params.Direction = Direction;
	params.ArmourPiece = ArmourPiece;
	params.Two_Handed_Strike = Two_Handed_Strike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FMotionFieldTarget      MotionFieldTarget              (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Vader_C::BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature(const struct FMotionFieldTarget& MotionFieldTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature");

	ABP_Vader_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature_Params params;
	params.MotionFieldTarget = MotionFieldTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.PoseVerbSends_Vader_ON
// (BlueprintCallable, BlueprintEvent)

void ABP_Vader_C::PoseVerbSends_Vader_ON()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.PoseVerbSends_Vader_ON");

	ABP_Vader_C_PoseVerbSends_Vader_ON_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.PoseVerbSends_Vader_OFF
// (BlueprintCallable, BlueprintEvent)

void ABP_Vader_C::PoseVerbSends_Vader_OFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.PoseVerbSends_Vader_OFF");

	ABP_Vader_C_PoseVerbSends_Vader_OFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vader_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.ReceiveTick");

	ABP_Vader_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Vader_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.ReceiveBeginPlay");

	ABP_Vader_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyComboCompletedSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ECombat_ComboAttackResult      bFinalMoveBlocked              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BlocksThisCombo                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vader_C::BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyComboCompletedSig__DelegateSignature(ECombat_ComboAttackResult bFinalMoveBlocked, int BlocksThisCombo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyComboCompletedSig__DelegateSignature");

	ABP_Vader_C_BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyComboCompletedSig__DelegateSignature_Params params;
	params.bFinalMoveBlocked = bFinalMoveBlocked;
	params.BlocksThisCombo = BlocksThisCombo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Vader.BP_Vader_C.ExecuteUbergraph_BP_Vader
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Vader_C::ExecuteUbergraph_BP_Vader(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Vader.BP_Vader_C.ExecuteUbergraph_BP_Vader");

	ABP_Vader_C_ExecuteUbergraph_BP_Vader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
