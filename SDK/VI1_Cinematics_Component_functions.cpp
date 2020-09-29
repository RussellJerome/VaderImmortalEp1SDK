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

// Function Cinematics_Component.Cinematics_Component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UCinematics_Component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematics_Component.Cinematics_Component_C.ReceiveBeginPlay");

	UCinematics_Component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematics_Component.Cinematics_Component_C.Event QueueLodChangeWhenUnrendered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ForcedLOD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCinematics_Component_C::Event_QueueLodChangeWhenUnrendered(int ForcedLOD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematics_Component.Cinematics_Component_C.Event QueueLodChangeWhenUnrendered");

	UCinematics_Component_C_Event_QueueLodChangeWhenUnrendered_Params params;
	params.ForcedLOD = ForcedLOD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematics_Component.Cinematics_Component_C.Event CheckingLodChangeQueue
// (BlueprintCallable, BlueprintEvent)

void UCinematics_Component_C::Event_CheckingLodChangeQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematics_Component.Cinematics_Component_C.Event CheckingLodChangeQueue");

	UCinematics_Component_C_Event_CheckingLodChangeQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematics_Component.Cinematics_Component_C.Event ForceLod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ForcedLOD                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCinematics_Component_C::Event_ForceLod(int ForcedLOD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematics_Component.Cinematics_Component_C.Event ForceLod");

	UCinematics_Component_C_Event_ForceLod_Params params;
	params.ForcedLOD = ForcedLOD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematics_Component.Cinematics_Component_C.ExecuteUbergraph_Cinematics_Component
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCinematics_Component_C::ExecuteUbergraph_Cinematics_Component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematics_Component.Cinematics_Component_C.ExecuteUbergraph_Cinematics_Component");

	UCinematics_Component_C_ExecuteUbergraph_Cinematics_Component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cinematics_Component.Cinematics_Component_C.DispatchLodChangeWhenUnrendered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCinematics_Component_C::DispatchLodChangeWhenUnrendered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cinematics_Component.Cinematics_Component_C.DispatchLodChangeWhenUnrendered__DelegateSignature");

	UCinematics_Component_C_DispatchLodChangeWhenUnrendered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
