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

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.SetConsoleButtonConfig
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonConfigID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExtrasWidgetMenu_C::SetConsoleButtonConfig(int ButtonConfigID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.SetConsoleButtonConfig");

	ABP_ExtrasWidgetMenu_C_SetConsoleButtonConfig_Params params;
	params.ButtonConfigID = ButtonConfigID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.GetWidgetFromConsole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMenu_C*                 OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ExtrasWidgetMenu_C::GetWidgetFromConsole(class UMenu_C** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.GetWidgetFromConsole");

	ABP_ExtrasWidgetMenu_C_GetWidgetFromConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.UserConstructionScript");

	ABP_ExtrasWidgetMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BackButton_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::BackButton_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BackButton_Press");

	ABP_ExtrasWidgetMenu_C_BackButton_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   ChangedMenuComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ExtrasWidgetMenu_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature");

	ABP_ExtrasWidgetMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature_Params params;
	params.ChangedMenuComponent = ChangedMenuComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.DownButton_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::DownButton_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.DownButton_Press");

	ABP_ExtrasWidgetMenu_C_DownButton_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button1_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::Button1_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button1_Press");

	ABP_ExtrasWidgetMenu_C_Button1_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__DojoButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ExtrasWidgetMenu_C::BndEvt__DojoButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__DojoButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_ExtrasWidgetMenu_C_BndEvt__DojoButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.UpButton_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::UpButton_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.UpButton_Press");

	ABP_ExtrasWidgetMenu_C_UpButton_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__PlayWaveButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ExtrasWidgetMenu_C::BndEvt__PlayWaveButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__PlayWaveButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_ExtrasWidgetMenu_C_BndEvt__PlayWaveButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button4_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::Button4_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button4_Press");

	ABP_ExtrasWidgetMenu_C_Button4_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__JumpToDojoButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ExtrasWidgetMenu_C::BndEvt__JumpToDojoButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__JumpToDojoButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature");

	ABP_ExtrasWidgetMenu_C_BndEvt__JumpToDojoButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button2_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::Button2_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button2_Press");

	ABP_ExtrasWidgetMenu_C_Button2_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button3_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::Button3_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button3_Press");

	ABP_ExtrasWidgetMenu_C_Button3_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   ChangedMenuComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ExtrasWidgetMenu_C::BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature");

	ABP_ExtrasWidgetMenu_C_BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature_Params params;
	params.ChangedMenuComponent = ChangedMenuComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__ExtrasTab_K2Node_ComponentBoundEvent_2_MenuComponentValueChangedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   ChangedMenuComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ExtrasWidgetMenu_C::BndEvt__ExtrasTab_K2Node_ComponentBoundEvent_2_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__ExtrasTab_K2Node_ComponentBoundEvent_2_MenuComponentValueChangedDelegate__DelegateSignature");

	ABP_ExtrasWidgetMenu_C_BndEvt__ExtrasTab_K2Node_ComponentBoundEvent_2_MenuComponentValueChangedDelegate__DelegateSignature_Params params;
	params.ChangedMenuComponent = ChangedMenuComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ReceiveMenuActivated
// (Event, Public, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::ReceiveMenuActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ReceiveMenuActivated");

	ABP_ExtrasWidgetMenu_C_ReceiveMenuActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.SpawnVisualWaveItems
// (Event, Protected, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::SpawnVisualWaveItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.SpawnVisualWaveItems");

	ABP_ExtrasWidgetMenu_C_SpawnVisualWaveItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.UpButton_Release
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::UpButton_Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.UpButton_Release");

	ABP_ExtrasWidgetMenu_C_UpButton_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.DownButton_Release
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::DownButton_Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.DownButton_Release");

	ABP_ExtrasWidgetMenu_C_DownButton_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   ChangedMenuComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ExtrasWidgetMenu_C::BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature");

	ABP_ExtrasWidgetMenu_C_BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params params;
	params.ChangedMenuComponent = ChangedMenuComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ReceiveAllWavesUnlocked
// (Event, Public, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::ReceiveAllWavesUnlocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ReceiveAllWavesUnlocked");

	ABP_ExtrasWidgetMenu_C_ReceiveAllWavesUnlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentVisibilityChangedDelegate__DelegateSignature
// (BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentVisibilityChangedDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentVisibilityChangedDelegate__DelegateSignature");

	ABP_ExtrasWidgetMenu_C_BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentVisibilityChangedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button1Surrogate
// (BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::Button1Surrogate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button1Surrogate");

	ABP_ExtrasWidgetMenu_C_Button1Surrogate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.DojoWaveSubMenuSurrogate
// (BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::DojoWaveSubMenuSurrogate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.DojoWaveSubMenuSurrogate");

	ABP_ExtrasWidgetMenu_C_DojoWaveSubMenuSurrogate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ForcePlayCredits
// (BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::ForcePlayCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ForcePlayCredits");

	ABP_ExtrasWidgetMenu_C_ForcePlayCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.PlaySelectedWaveSurrogate
// (Event, Public, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::PlaySelectedWaveSurrogate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.PlaySelectedWaveSurrogate");

	ABP_ExtrasWidgetMenu_C_PlaySelectedWaveSurrogate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ExecuteUbergraph_BP_ExtrasWidgetMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExtrasWidgetMenu_C::ExecuteUbergraph_BP_ExtrasWidgetMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ExecuteUbergraph_BP_ExtrasWidgetMenu");

	ABP_ExtrasWidgetMenu_C_ExecuteUbergraph_BP_ExtrasWidgetMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ExtrasMenu_PlayCredits__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ExtrasWidgetMenu_C::ExtrasMenu_PlayCredits__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ExtrasMenu_PlayCredits__DelegateSignature");

	ABP_ExtrasWidgetMenu_C_ExtrasMenu_PlayCredits__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
