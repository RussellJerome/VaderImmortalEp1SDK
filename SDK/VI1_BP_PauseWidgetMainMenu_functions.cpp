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

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.SetConsoleButtonConfig
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonConfigID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PauseWidgetMainMenu_C::SetConsoleButtonConfig(int ButtonConfigID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.SetConsoleButtonConfig");

	ABP_PauseWidgetMainMenu_C_SetConsoleButtonConfig_Params params;
	params.ButtonConfigID = ButtonConfigID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.GetWidgetFromConsole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMenu_C*                 OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PauseWidgetMainMenu_C::GetWidgetFromConsole(class UMenu_C** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.GetWidgetFromConsole");

	ABP_PauseWidgetMainMenu_C_GetWidgetFromConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.SetOptionsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOptionsMenuActor*       OptionsMenu                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PauseWidgetMainMenu_C::SetOptionsMenu(class AOptionsMenuActor* OptionsMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.SetOptionsMenu");

	ABP_PauseWidgetMainMenu_C_SetOptionsMenu_Params params;
	params.OptionsMenu = OptionsMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PauseWidgetMainMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.UserConstructionScript");

	ABP_PauseWidgetMainMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ReceiveConfirmationPromptCalled
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  WarningText                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PauseWidgetMainMenu_C::ReceiveConfirmationPromptCalled(struct FText* WarningText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ReceiveConfirmationPromptCalled");

	ABP_PauseWidgetMainMenu_C_ReceiveConfirmationPromptCalled_Params params;
	params.WarningText = WarningText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ReceiveConfirmationPromptClosed
// (Event, Public, BlueprintEvent)

void ABP_PauseWidgetMainMenu_C::ReceiveConfirmationPromptClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ReceiveConfirmationPromptClosed");

	ABP_PauseWidgetMainMenu_C_ReceiveConfirmationPromptClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__Recenter_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PauseWidgetMainMenu_C::BndEvt__Recenter_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__Recenter_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_PauseWidgetMainMenu_C_BndEvt__Recenter_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__Options_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PauseWidgetMainMenu_C::BndEvt__Options_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__Options_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature");

	ABP_PauseWidgetMainMenu_C_BndEvt__Options_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button1_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PauseWidgetMainMenu_C::Button1_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button1_Press");

	ABP_PauseWidgetMainMenu_C_Button1_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button2_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PauseWidgetMainMenu_C::Button2_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button2_Press");

	ABP_PauseWidgetMainMenu_C_Button2_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button3_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PauseWidgetMainMenu_C::Button3_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button3_Press");

	ABP_PauseWidgetMainMenu_C_Button3_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button4_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PauseWidgetMainMenu_C::Button4_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button4_Press");

	ABP_PauseWidgetMainMenu_C_Button4_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BackButton_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PauseWidgetMainMenu_C::BackButton_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BackButton_Press");

	ABP_PauseWidgetMainMenu_C_BackButton_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ReceiveMenuActivated
// (Event, Public, BlueprintEvent)

void ABP_PauseWidgetMainMenu_C::ReceiveMenuActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ReceiveMenuActivated");

	ABP_PauseWidgetMainMenu_C_ReceiveMenuActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__QuitGameMenuButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PauseWidgetMainMenu_C::BndEvt__QuitGameMenuButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__QuitGameMenuButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_PauseWidgetMainMenu_C_BndEvt__QuitGameMenuButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__BackToMainMenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_PauseWidgetMainMenu_C::BndEvt__BackToMainMenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__BackToMainMenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature");

	ABP_PauseWidgetMainMenu_C_BndEvt__BackToMainMenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ExecuteUbergraph_BP_PauseWidgetMainMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PauseWidgetMainMenu_C::ExecuteUbergraph_BP_PauseWidgetMainMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ExecuteUbergraph_BP_PauseWidgetMainMenu");

	ABP_PauseWidgetMainMenu_C_ExecuteUbergraph_BP_PauseWidgetMainMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
