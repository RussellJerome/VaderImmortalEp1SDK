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

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.OnChapterChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuScrollContainerComponent* ChangedContainerComponent      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bIssuedFromConsole             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChapterWidgetMenu_C::OnChapterChanged(class UMenuScrollContainerComponent* ChangedContainerComponent, bool bIssuedFromConsole)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.OnChapterChanged");

	ABP_ChapterWidgetMenu_C_OnChapterChanged_Params params;
	params.ChangedContainerComponent = ChangedContainerComponent;
	params.bIssuedFromConsole = bIssuedFromConsole;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ScrollDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuScrollContainerComponent* ScrollContainer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ChapterWidgetMenu_C::ScrollDown(class UMenuScrollContainerComponent* ScrollContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ScrollDown");

	ABP_ChapterWidgetMenu_C_ScrollDown_Params params;
	params.ScrollContainer = ScrollContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ScrollUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenuScrollContainerComponent* ScrollContainer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ChapterWidgetMenu_C::ScrollUp(class UMenuScrollContainerComponent* ScrollContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ScrollUp");

	ABP_ChapterWidgetMenu_C_ScrollUp_Params params;
	params.ScrollContainer = ScrollContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UpdateCheckpointDisplayText
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::UpdateCheckpointDisplayText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UpdateCheckpointDisplayText");

	ABP_ChapterWidgetMenu_C_UpdateCheckpointDisplayText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.GetWidgetFromConsole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMenu_C*                 OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_ChapterWidgetMenu_C::GetWidgetFromConsole(class UMenu_C** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.GetWidgetFromConsole");

	ABP_ChapterWidgetMenu_C_GetWidgetFromConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.SetConsoleButtonConfig
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonConfigID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChapterWidgetMenu_C::SetConsoleButtonConfig(int ButtonConfigID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.SetConsoleButtonConfig");

	ABP_ChapterWidgetMenu_C_SetConsoleButtonConfig_Params params;
	params.ButtonConfigID = ButtonConfigID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UserConstructionScript");

	ABP_ChapterWidgetMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__ChangeEpisodeButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ChapterWidgetMenu_C::BndEvt__ChangeEpisodeButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__ChangeEpisodeButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature");

	ABP_ChapterWidgetMenu_C_BndEvt__ChangeEpisodeButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ReceiveMenuActivated
// (Event, Public, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::ReceiveMenuActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ReceiveMenuActivated");

	ABP_ChapterWidgetMenu_C_ReceiveMenuActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EpisodesTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   ChangedMenuComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ChapterWidgetMenu_C::BndEvt__EpisodesTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EpisodesTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature");

	ABP_ChapterWidgetMenu_C_BndEvt__EpisodesTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params params;
	params.ChangedMenuComponent = ChangedMenuComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button1_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::Button1_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button1_Press");

	ABP_ChapterWidgetMenu_C_Button1_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button2_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::Button2_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button2_Press");

	ABP_ChapterWidgetMenu_C_Button2_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button3_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::Button3_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button3_Press");

	ABP_ChapterWidgetMenu_C_Button3_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button4_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::Button4_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button4_Press");

	ABP_ChapterWidgetMenu_C_Button4_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BackButton_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::BackButton_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BackButton_Press");

	ABP_ChapterWidgetMenu_C_BackButton_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UpButton_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::UpButton_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UpButton_Press");

	ABP_ChapterWidgetMenu_C_UpButton_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.DownButton_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::DownButton_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.DownButton_Press");

	ABP_ChapterWidgetMenu_C_DownButton_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ShowConfirmPrompt
// (BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::ShowConfirmPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ShowConfirmPrompt");

	ABP_ChapterWidgetMenu_C_ShowConfirmPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.CloseConfirmPrompt
// (BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::CloseConfirmPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.CloseConfirmPrompt");

	ABP_ChapterWidgetMenu_C_CloseConfirmPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.LoadChapter
// (BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::LoadChapter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.LoadChapter");

	ABP_ChapterWidgetMenu_C_LoadChapter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__Yes_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ChapterWidgetMenu_C::BndEvt__Yes_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__Yes_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_ChapterWidgetMenu_C_BndEvt__Yes_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__No_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ChapterWidgetMenu_C::BndEvt__No_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__No_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature");

	ABP_ChapterWidgetMenu_C_BndEvt__No_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__PlayChapterButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ChapterWidgetMenu_C::BndEvt__PlayChapterButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__PlayChapterButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_ChapterWidgetMenu_C_BndEvt__PlayChapterButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EP1ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   ChangedMenuComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ChapterWidgetMenu_C::BndEvt__EP1ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EP1ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature");

	ABP_ChapterWidgetMenu_C_BndEvt__EP1ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params params;
	params.ChangedMenuComponent = ChangedMenuComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EP2ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   ChangedMenuComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ChapterWidgetMenu_C::BndEvt__EP2ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EP2ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature");

	ABP_ChapterWidgetMenu_C_BndEvt__EP2ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params params;
	params.ChangedMenuComponent = ChangedMenuComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EP3ScrollContainer_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   ChangedMenuComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_ChapterWidgetMenu_C::BndEvt__EP3ScrollContainer_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EP3ScrollContainer_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature");

	ABP_ChapterWidgetMenu_C_BndEvt__EP3ScrollContainer_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature_Params params;
	params.ChangedMenuComponent = ChangedMenuComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ReceiveBeginPlay");

	ABP_ChapterWidgetMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UpButton_Release
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::UpButton_Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UpButton_Release");

	ABP_ChapterWidgetMenu_C_UpButton_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.DownButton_Release
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ChapterWidgetMenu_C::DownButton_Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.DownButton_Release");

	ABP_ChapterWidgetMenu_C_DownButton_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ExecuteUbergraph_BP_ChapterWidgetMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ChapterWidgetMenu_C::ExecuteUbergraph_BP_ChapterWidgetMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ExecuteUbergraph_BP_ChapterWidgetMenu");

	ABP_ChapterWidgetMenu_C_ExecuteUbergraph_BP_ChapterWidgetMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
