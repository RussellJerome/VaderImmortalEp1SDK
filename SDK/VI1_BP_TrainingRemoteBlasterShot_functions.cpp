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

// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.PlayDeflectionVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DeflectingActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemoteBlasterShot_C::PlayDeflectionVFX(class AActor* DeflectingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.PlayDeflectionVFX");

	ABP_TrainingRemoteBlasterShot_C_PlayDeflectionVFX_Params params;
	params.DeflectingActor = DeflectingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemoteBlasterShot_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.UserConstructionScript");

	ABP_TrainingRemoteBlasterShot_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileDeflectedSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  ProjActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DeflectingActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bParried                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemoteBlasterShot_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileDeflectedSignature__DelegateSignature(class AActor* ProjActor, class AActor* DeflectingActor, bool bParried)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileDeflectedSignature__DelegateSignature");

	ABP_TrainingRemoteBlasterShot_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileDeflectedSignature__DelegateSignature_Params params;
	params.ProjActor = ProjActor;
	params.DeflectingActor = DeflectingActor;
	params.bParried = bParried;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TrainingRemoteBlasterShot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ReceiveBeginPlay");

	ABP_TrainingRemoteBlasterShot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemoteBlasterShot_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ReceiveTick");

	ABP_TrainingRemoteBlasterShot_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_TrainingRemoteBlasterShot_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ReceiveDestroyed");

	ABP_TrainingRemoteBlasterShot_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_6_ProjectilePassedTargetSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  ProjActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemoteBlasterShot_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_6_ProjectilePassedTargetSignature__DelegateSignature(class AActor* ProjActor, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_6_ProjectilePassedTargetSignature__DelegateSignature");

	ABP_TrainingRemoteBlasterShot_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_6_ProjectilePassedTargetSignature__DelegateSignature_Params params;
	params.ProjActor = ProjActor;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileCollidingHitSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  ProjActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_TrainingRemoteBlasterShot_C::BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileCollidingHitSignature__DelegateSignature(class AActor* ProjActor, const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileCollidingHitSignature__DelegateSignature");

	ABP_TrainingRemoteBlasterShot_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_0_ProjectileCollidingHitSignature__DelegateSignature_Params params;
	params.ProjActor = ProjActor;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ExecuteUbergraph_BP_TrainingRemoteBlasterShot
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemoteBlasterShot_C::ExecuteUbergraph_BP_TrainingRemoteBlasterShot(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemoteBlasterShot.BP_TrainingRemoteBlasterShot_C.ExecuteUbergraph_BP_TrainingRemoteBlasterShot");

	ABP_TrainingRemoteBlasterShot_C_ExecuteUbergraph_BP_TrainingRemoteBlasterShot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
