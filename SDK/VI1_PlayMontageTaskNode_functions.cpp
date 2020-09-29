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

// Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnNotifyEnd_F447B6B54B4E4E12115A1C9B6384A08A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageTaskNode_C::OnNotifyEnd_F447B6B54B4E4E12115A1C9B6384A08A(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnNotifyEnd_F447B6B54B4E4E12115A1C9B6384A08A");

	UPlayMontageTaskNode_C_OnNotifyEnd_F447B6B54B4E4E12115A1C9B6384A08A_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnNotifyBegin_F447B6B54B4E4E12115A1C9B6384A08A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageTaskNode_C::OnNotifyBegin_F447B6B54B4E4E12115A1C9B6384A08A(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnNotifyBegin_F447B6B54B4E4E12115A1C9B6384A08A");

	UPlayMontageTaskNode_C_OnNotifyBegin_F447B6B54B4E4E12115A1C9B6384A08A_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnInterrupted_F447B6B54B4E4E12115A1C9B6384A08A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageTaskNode_C::OnInterrupted_F447B6B54B4E4E12115A1C9B6384A08A(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnInterrupted_F447B6B54B4E4E12115A1C9B6384A08A");

	UPlayMontageTaskNode_C_OnInterrupted_F447B6B54B4E4E12115A1C9B6384A08A_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnBlendOut_F447B6B54B4E4E12115A1C9B6384A08A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageTaskNode_C::OnBlendOut_F447B6B54B4E4E12115A1C9B6384A08A(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnBlendOut_F447B6B54B4E4E12115A1C9B6384A08A");

	UPlayMontageTaskNode_C_OnBlendOut_F447B6B54B4E4E12115A1C9B6384A08A_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnCompleted_F447B6B54B4E4E12115A1C9B6384A08A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageTaskNode_C::OnCompleted_F447B6B54B4E4E12115A1C9B6384A08A(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnCompleted_F447B6B54B4E4E12115A1C9B6384A08A");

	UPlayMontageTaskNode_C_OnCompleted_F447B6B54B4E4E12115A1C9B6384A08A_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayMontageTaskNode.PlayMontageTaskNode_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageTaskNode_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayMontageTaskNode.PlayMontageTaskNode_C.ReceiveExecute");

	UPlayMontageTaskNode_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayMontageTaskNode.PlayMontageTaskNode_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageTaskNode_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayMontageTaskNode.PlayMontageTaskNode_C.ReceiveTick");

	UPlayMontageTaskNode_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayMontageTaskNode.PlayMontageTaskNode_C.ExecuteUbergraph_PlayMontageTaskNode
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayMontageTaskNode_C::ExecuteUbergraph_PlayMontageTaskNode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayMontageTaskNode.PlayMontageTaskNode_C.ExecuteUbergraph_PlayMontageTaskNode");

	UPlayMontageTaskNode_C_ExecuteUbergraph_PlayMontageTaskNode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
