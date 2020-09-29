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

// Function BP_SubtitleManager.BP_SubtitleManager_C.GetApproximateLocalizedDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitleManager_C::GetApproximateLocalizedDuration(const struct FText& InText, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitleManager.BP_SubtitleManager_C.GetApproximateLocalizedDuration");

	ABP_SubtitleManager_C_GetApproximateLocalizedDuration_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function BP_SubtitleManager.BP_SubtitleManager_C.DebugCycleSubtitle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SubtitleManager_C::DebugCycleSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitleManager.BP_SubtitleManager_C.DebugCycleSubtitle");

	ABP_SubtitleManager_C_DebugCycleSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitleManager.BP_SubtitleManager_C.GetLocalizedLanguage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<ESupportedLanguages> CurrentLanguage                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitleManager_C::GetLocalizedLanguage(TEnumAsByte<ESupportedLanguages>* CurrentLanguage)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitleManager.BP_SubtitleManager_C.GetLocalizedLanguage");

	ABP_SubtitleManager_C_GetLocalizedLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentLanguage != nullptr)
		*CurrentLanguage = params.CurrentLanguage;
}


// Function BP_SubtitleManager.BP_SubtitleManager_C.SetLocalizedLanguage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESupportedLanguages> NewLanuage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitleManager_C::SetLocalizedLanguage(TEnumAsByte<ESupportedLanguages> NewLanuage, bool Force)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitleManager.BP_SubtitleManager_C.SetLocalizedLanguage");

	ABP_SubtitleManager_C_SetLocalizedLanguage_Params params;
	params.NewLanuage = NewLanuage;
	params.Force = Force;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitleManager.BP_SubtitleManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SubtitleManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitleManager.BP_SubtitleManager_C.UserConstructionScript");

	ABP_SubtitleManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitleManager.BP_SubtitleManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SubtitleManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitleManager.BP_SubtitleManager_C.ReceiveBeginPlay");

	ABP_SubtitleManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SubtitleManager.BP_SubtitleManager_C.ExecuteUbergraph_BP_SubtitleManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SubtitleManager_C::ExecuteUbergraph_BP_SubtitleManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SubtitleManager.BP_SubtitleManager_C.ExecuteUbergraph_BP_SubtitleManager");

	ABP_SubtitleManager_C_ExecuteUbergraph_BP_SubtitleManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
