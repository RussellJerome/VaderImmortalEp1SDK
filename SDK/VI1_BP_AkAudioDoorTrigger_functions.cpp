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

// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AkAudioDoorTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.UserConstructionScript");

	ABP_AkAudioDoorTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.QueueRedside
// (BlueprintCallable, BlueprintEvent)

void ABP_AkAudioDoorTrigger_C::QueueRedside()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.QueueRedside");

	ABP_AkAudioDoorTrigger_C_QueueRedside_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.QueueBlueside
// (BlueprintCallable, BlueprintEvent)

void ABP_AkAudioDoorTrigger_C::QueueBlueside()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.QueueBlueside");

	ABP_AkAudioDoorTrigger_C_QueueBlueside_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AkAudioDoorTrigger_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ABP_AkAudioDoorTrigger_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_AkAudioDoorTrigger_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.ReceiveBeginPlay");

	ABP_AkAudioDoorTrigger_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.ManualTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Redside_                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AkAudioDoorTrigger_C::ManualTrigger(bool Redside_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.ManualTrigger");

	ABP_AkAudioDoorTrigger_C_ManualTrigger_Params params;
	params.Redside_ = Redside_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.ExecuteUbergraph_BP_AkAudioDoorTrigger
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_AkAudioDoorTrigger_C::ExecuteUbergraph_BP_AkAudioDoorTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.ExecuteUbergraph_BP_AkAudioDoorTrigger");

	ABP_AkAudioDoorTrigger_C_ExecuteUbergraph_BP_AkAudioDoorTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
