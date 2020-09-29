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

// Function NTLibsEngine.NTAnimationSet.GetListFromName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  AnimSetClass                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ListName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ListClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UNTAnimationList*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNTAnimationList* UNTAnimationSet::STATIC_GetListFromName(class UClass* AnimSetClass, const struct FName& ListName, class UClass* ListClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibsEngine.NTAnimationSet.GetListFromName");

	UNTAnimationSet_GetListFromName_Params params;
	params.AnimSetClass = AnimSetClass;
	params.ListName = ListName;
	params.ListClass = ListClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Vector
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 MetricName                     (Parm, ZeroConstructor)
// struct FVector                 Value                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UNTTestBlueprint::SubmitMetric_Vector(const struct FString& MetricName, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Vector");

	UNTTestBlueprint_SubmitMetric_Vector_Params params;
	params.MetricName = MetricName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTLibsEngine.NTTestBlueprint.SubmitMetric_String
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MetricName                     (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UNTTestBlueprint::SubmitMetric_String(const struct FString& MetricName, const struct FString& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibsEngine.NTTestBlueprint.SubmitMetric_String");

	UNTTestBlueprint_SubmitMetric_String_Params params;
	params.MetricName = MetricName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Int32
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MetricName                     (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNTTestBlueprint::SubmitMetric_Int32(const struct FString& MetricName, int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Int32");

	UNTTestBlueprint_SubmitMetric_Int32_Params params;
	params.MetricName = MetricName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Float
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MetricName                     (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UNTTestBlueprint::SubmitMetric_Float(const struct FString& MetricName, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Float");

	UNTTestBlueprint_SubmitMetric_Float_Params params;
	params.MetricName = MetricName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Bool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 MetricName                     (Parm, ZeroConstructor)
// bool                           bValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UNTTestBlueprint::SubmitMetric_Bool(const struct FString& MetricName, bool bValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Bool");

	UNTTestBlueprint_SubmitMetric_Bool_Params params;
	params.MetricName = MetricName;
	params.bValue = bValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTLibsEngine.NTTestBlueprint.SetTestState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bInTestState                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 LogMessage                     (Parm, ZeroConstructor)

void UNTTestBlueprint::SetTestState(bool bInTestState, const struct FString& LogMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibsEngine.NTTestBlueprint.SetTestState");

	UNTTestBlueprint_SetTestState_Params params;
	params.bInTestState = bInTestState;
	params.LogMessage = LogMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTLibsEngine.NTTestBlueprint.SetTestAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Command                        (Parm, ZeroConstructor)

void UNTTestBlueprint::SetTestAction(const struct FScriptDelegate& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibsEngine.NTTestBlueprint.SetTestAction");

	UNTTestBlueprint_SetTestAction_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTLibsEngine.NTTestBlueprint.OnRunTest
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 Parameters                     (Parm, ZeroConstructor)

void UNTTestBlueprint::OnRunTest(const struct FString& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibsEngine.NTTestBlueprint.OnRunTest");

	UNTTestBlueprint_OnRunTest_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTLibsEngine.NTTestBlueprint.LoadMap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTTestBlueprint::LoadMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibsEngine.NTTestBlueprint.LoadMap");

	UNTTestBlueprint_LoadMap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
