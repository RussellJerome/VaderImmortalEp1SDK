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

// Function BP_MenuItemIterator.BP_MenuItemIterator_C.GetNextIteration
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_MenuItemIterator_C::GetNextIteration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuItemIterator.BP_MenuItemIterator_C.GetNextIteration");

	UBP_MenuItemIterator_C_GetNextIteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MenuItemIterator.BP_MenuItemIterator_C.SetInitialIteration
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InitialIteration               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuItemIterator_C::SetInitialIteration(int InitialIteration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuItemIterator.BP_MenuItemIterator_C.SetInitialIteration");

	UBP_MenuItemIterator_C_SetInitialIteration_Params params;
	params.InitialIteration = InitialIteration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuItemIterator.BP_MenuItemIterator_C.OverrideMinMax
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuItemIterator_C::OverrideMinMax(int Min, int Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuItemIterator.BP_MenuItemIterator_C.OverrideMinMax");

	UBP_MenuItemIterator_C_OverrideMinMax_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuItemIterator.BP_MenuItemIterator_C.Iterate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuItemIterator_C::Iterate(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuItemIterator.BP_MenuItemIterator_C.Iterate");

	UBP_MenuItemIterator_C_Iterate_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuItemIterator.BP_MenuItemIterator_C.StopIterating
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_MenuItemIterator_C::StopIterating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuItemIterator.BP_MenuItemIterator_C.StopIterating");

	UBP_MenuItemIterator_C_StopIterating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuItemIterator.BP_MenuItemIterator_C.StartIterating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldIncrease                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuItemIterator_C::StartIterating(bool ShouldIncrease)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuItemIterator.BP_MenuItemIterator_C.StartIterating");

	UBP_MenuItemIterator_C_StartIterating_Params params;
	params.ShouldIncrease = ShouldIncrease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MenuItemIterator.BP_MenuItemIterator_C.GetCurrentIteration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            CurrentIteration               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_MenuItemIterator_C::GetCurrentIteration(int* CurrentIteration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuItemIterator.BP_MenuItemIterator_C.GetCurrentIteration");

	UBP_MenuItemIterator_C_GetCurrentIteration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentIteration != nullptr)
		*CurrentIteration = params.CurrentIteration;
}


// Function BP_MenuItemIterator.BP_MenuItemIterator_C.OnSelectionUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewSelection                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_MenuItemIterator_C::OnSelectionUpdated__DelegateSignature(int NewSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MenuItemIterator.BP_MenuItemIterator_C.OnSelectionUpdated__DelegateSignature");

	UBP_MenuItemIterator_C_OnSelectionUpdated__DelegateSignature_Params params;
	params.NewSelection = NewSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
