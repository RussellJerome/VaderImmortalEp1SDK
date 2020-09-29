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

// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.GetWidgetFromConsole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMenu_C*                 OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_MainWidgetMenu_C::GetWidgetFromConsole(class UMenu_C** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.GetWidgetFromConsole");

	ABP_MainWidgetMenu_C_GetWidgetFromConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.SetConsoleButtonConfig
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonConfigID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainWidgetMenu_C::SetConsoleButtonConfig(int ButtonConfigID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.SetConsoleButtonConfig");

	ABP_MainWidgetMenu_C_SetConsoleButtonConfig_Params params;
	params.ButtonConfigID = ButtonConfigID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MainWidgetMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.UserConstructionScript");

	ABP_MainWidgetMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.Button3_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MainWidgetMenu_C::Button3_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.Button3_Press");

	ABP_MainWidgetMenu_C_Button3_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.Button4_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MainWidgetMenu_C::Button4_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.Button4_Press");

	ABP_MainWidgetMenu_C_Button4_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BackButton_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MainWidgetMenu_C::BackButton_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BackButton_Press");

	ABP_MainWidgetMenu_C_BackButton_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.Button1_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MainWidgetMenu_C::Button1_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.Button1_Press");

	ABP_MainWidgetMenu_C_Button1_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MainWidgetMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.ReceiveBeginPlay");

	ABP_MainWidgetMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.ReceiveMenuActivated
// (Event, Public, BlueprintEvent)

void ABP_MainWidgetMenu_C::ReceiveMenuActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.ReceiveMenuActivated");

	ABP_MainWidgetMenu_C_ReceiveMenuActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.OnConfirmationPromptCalled
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  WarningText                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MainWidgetMenu_C::OnConfirmationPromptCalled(struct FText* WarningText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.OnConfirmationPromptCalled");

	ABP_MainWidgetMenu_C_OnConfirmationPromptCalled_Params params;
	params.WarningText = WarningText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BndEvt__Standard_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MainWidgetMenu_C::BndEvt__Standard_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BndEvt__Standard_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_MainWidgetMenu_C_BndEvt__Standard_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BndEvt__Comfort_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MainWidgetMenu_C::BndEvt__Comfort_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BndEvt__Comfort_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature");

	ABP_MainWidgetMenu_C_BndEvt__Comfort_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.ShowFirstTimeComfortPrompt
// (BlueprintCallable, BlueprintEvent)

void ABP_MainWidgetMenu_C::ShowFirstTimeComfortPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.ShowFirstTimeComfortPrompt");

	ABP_MainWidgetMenu_C_ShowFirstTimeComfortPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.ShowMainMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_MainWidgetMenu_C::ShowMainMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.ShowMainMenu");

	ABP_MainWidgetMenu_C_ShowMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.Button2_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MainWidgetMenu_C::Button2_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.Button2_Press");

	ABP_MainWidgetMenu_C_Button2_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MainWidgetMenu_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_MainWidgetMenu_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MainWidgetMenu_C::BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_MainWidgetMenu_C_BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.SetupScreen
// (BlueprintCallable, BlueprintEvent)

void ABP_MainWidgetMenu_C::SetupScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.SetupScreen");

	ABP_MainWidgetMenu_C_SetupScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BndEvt__Custom_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_MainWidgetMenu_C::BndEvt__Custom_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.BndEvt__Custom_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_MainWidgetMenu_C_BndEvt__Custom_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.ExecuteUbergraph_BP_MainWidgetMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MainWidgetMenu_C::ExecuteUbergraph_BP_MainWidgetMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MainWidgetMenu.BP_MainWidgetMenu_C.ExecuteUbergraph_BP_MainWidgetMenu");

	ABP_MainWidgetMenu_C_ExecuteUbergraph_BP_MainWidgetMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
