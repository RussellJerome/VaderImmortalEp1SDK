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

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.DisableActiveLanguageIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LocalizationMenu_C::DisableActiveLanguageIndicator(int WaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.DisableActiveLanguageIndicator");

	UBPW_LocalizationMenu_C_DisableActiveLanguageIndicator_Params params;
	params.WaveIndex = WaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.EnableActiveLanguageIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewActiveWaveIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LocalizationMenu_C::EnableActiveLanguageIndicator(int NewActiveWaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.EnableActiveLanguageIndicator");

	UBPW_LocalizationMenu_C_EnableActiveLanguageIndicator_Params params;
	params.NewActiveWaveIndex = NewActiveWaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.HideConfirmButton
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_LocalizationMenu_C::HideConfirmButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.HideConfirmButton");

	UBPW_LocalizationMenu_C_HideConfirmButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.ShowConfirmButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsButtonEnabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LocalizationMenu_C::ShowConfirmButton(bool IsButtonEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.ShowConfirmButton");

	UBPW_LocalizationMenu_C_ShowConfirmButton_Params params;
	params.IsButtonEnabled = IsButtonEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.CreateLanguageWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   LanguageName                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_LocalizationMenu_C::CreateLanguageWidget(const struct FText& LanguageName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.CreateLanguageWidget");

	UBPW_LocalizationMenu_C_CreateLanguageWidget_Params params;
	params.LanguageName = LanguageName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.InitScrollBox
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*              ScrollBox                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UBPW_SelectableItem_C*> SelectableRewards              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBPW_LocalizationMenu_C::InitScrollBox(class UScrollBox* ScrollBox, TArray<class UBPW_SelectableItem_C*>* SelectableRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.InitScrollBox");

	UBPW_LocalizationMenu_C_InitScrollBox_Params params;
	params.ScrollBox = ScrollBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectableRewards != nullptr)
		*SelectableRewards = params.SelectableRewards;
}


// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.SelectLanguage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LanguageIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDescendantScrollDestination   ScrollDestination              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LocalizationMenu_C::SelectLanguage(int LanguageIndex, EDescendantScrollDestination ScrollDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.SelectLanguage");

	UBPW_LocalizationMenu_C_SelectLanguage_Params params;
	params.LanguageIndex = LanguageIndex;
	params.ScrollDestination = ScrollDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.SelectScrollBoxItem
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBPW_SelectableItem_C*   LastSelectedItem               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UScrollBox*              ScrollBox                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EDescendantScrollDestination   ScrollDestination              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class UBPW_SelectableItem_C*   CurrentSelectedItem            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

bool UBPW_LocalizationMenu_C::SelectScrollBoxItem(int Index, class UBPW_SelectableItem_C* LastSelectedItem, class UScrollBox* ScrollBox, EDescendantScrollDestination ScrollDestination, class UBPW_SelectableItem_C** CurrentSelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.SelectScrollBoxItem");

	UBPW_LocalizationMenu_C_SelectScrollBoxItem_Params params;
	params.Index = Index;
	params.LastSelectedItem = LastSelectedItem;
	params.ScrollBox = ScrollBox;
	params.ScrollDestination = ScrollDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSelectedItem != nullptr)
		*CurrentSelectedItem = params.CurrentSelectedItem;

	return params.ReturnValue;
}


// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LocalizationMenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.PreConstruct");

	UBPW_LocalizationMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_LocalizationMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.Construct");

	UBPW_LocalizationMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.ToggleLocalizationMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LocalizationMenu_C::ToggleLocalizationMenu(bool bShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.ToggleLocalizationMenu");

	UBPW_LocalizationMenu_C_ToggleLocalizationMenu_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.ExecuteUbergraph_BPW_LocalizationMenu
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LocalizationMenu_C::ExecuteUbergraph_BPW_LocalizationMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.ExecuteUbergraph_BPW_LocalizationMenu");

	UBPW_LocalizationMenu_C_ExecuteUbergraph_BPW_LocalizationMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
