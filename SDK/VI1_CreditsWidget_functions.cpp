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

// Function CreditsWidget.CreditsWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreditsWidget_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsWidget.CreditsWidget_C.PreConstruct");

	UCreditsWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreditsWidget.CreditsWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCreditsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsWidget.CreditsWidget_C.Construct");

	UCreditsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreditsWidget.CreditsWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreditsWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsWidget.CreditsWidget_C.Tick");

	UCreditsWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreditsWidget.CreditsWidget_C.StartCredits
// (BlueprintCallable, BlueprintEvent)

void UCreditsWidget_C::StartCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsWidget.CreditsWidget_C.StartCredits");

	UCreditsWidget_C_StartCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreditsWidget.CreditsWidget_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UCreditsWidget_C::CustomEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsWidget.CreditsWidget_C.CustomEvent_2");

	UCreditsWidget_C_CustomEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreditsWidget.CreditsWidget_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)

void UCreditsWidget_C::CustomEvent_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsWidget.CreditsWidget_C.CustomEvent_3");

	UCreditsWidget_C_CustomEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CreditsWidget.CreditsWidget_C.ExecuteUbergraph_CreditsWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCreditsWidget_C::ExecuteUbergraph_CreditsWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsWidget.CreditsWidget_C.ExecuteUbergraph_CreditsWidget");

	UCreditsWidget_C_ExecuteUbergraph_CreditsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
