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

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsReleasingTrigger
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsReleasingGrip                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerHandAudioComponent_C::IsReleasingTrigger(bool* IsReleasingGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsReleasingTrigger");

	UBP_PlayerHandAudioComponent_C_IsReleasingTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReleasingGrip != nullptr)
		*IsReleasingGrip = params.IsReleasingGrip;
}


// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsPressingTrigger
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPressingTrigger              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerHandAudioComponent_C::IsPressingTrigger(bool* IsPressingTrigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsPressingTrigger");

	UBP_PlayerHandAudioComponent_C_IsPressingTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPressingTrigger != nullptr)
		*IsPressingTrigger = params.IsPressingTrigger;
}


// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.UpdateTrigger
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerHandAudioComponent_C::UpdateTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.UpdateTrigger");

	UBP_PlayerHandAudioComponent_C_UpdateTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsReleasingGrip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsReleasingGrip                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerHandAudioComponent_C::IsReleasingGrip(bool* IsReleasingGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsReleasingGrip");

	UBP_PlayerHandAudioComponent_C_IsReleasingGrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsReleasingGrip != nullptr)
		*IsReleasingGrip = params.IsReleasingGrip;
}


// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsPressingGrip
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPressingGrip                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerHandAudioComponent_C::IsPressingGrip(bool* IsPressingGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsPressingGrip");

	UBP_PlayerHandAudioComponent_C_IsPressingGrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPressingGrip != nullptr)
		*IsPressingGrip = params.IsPressingGrip;
}


// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.UpdateGrip
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerHandAudioComponent_C::UpdateGrip()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.UpdateGrip");

	UBP_PlayerHandAudioComponent_C_UpdateGrip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerHandAudioComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.ReceiveTick");

	UBP_PlayerHandAudioComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PlayerHandAudioComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.ReceiveBeginPlay");

	UBP_PlayerHandAudioComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.OnBoneStartedMoving
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   fing2CDEF                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerHandAudioComponent_C::OnBoneStartedMoving(const struct FName& fing2CDEF)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.OnBoneStartedMoving");

	UBP_PlayerHandAudioComponent_C_OnBoneStartedMoving_Params params;
	params.fing2CDEF = fing2CDEF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.OnBoneStoppedMoving
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   fing2CDEF                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerHandAudioComponent_C::OnBoneStoppedMoving(const struct FName& fing2CDEF)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.OnBoneStoppedMoving");

	UBP_PlayerHandAudioComponent_C_OnBoneStoppedMoving_Params params;
	params.fing2CDEF = fing2CDEF;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.ExecuteUbergraph_BP_PlayerHandAudioComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerHandAudioComponent_C::ExecuteUbergraph_BP_PlayerHandAudioComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.ExecuteUbergraph_BP_PlayerHandAudioComponent");

	UBP_PlayerHandAudioComponent_C_ExecuteUbergraph_BP_PlayerHandAudioComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
