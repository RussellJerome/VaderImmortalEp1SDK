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

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.UpDownButtonsActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WidgetConsoleMenu_C::UpDownButtonsActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.UpDownButtonsActive");

	ABP_WidgetConsoleMenu_C_UpDownButtonsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.PlayHapticFeedback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontendInteractionController* InteractionController          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WidgetConsoleMenu_C::PlayHapticFeedback(class UFrontendInteractionController* InteractionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.PlayHapticFeedback");

	ABP_WidgetConsoleMenu_C_PlayHapticFeedback_Params params;
	params.InteractionController = InteractionController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.GetWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenu_C*                 MenuWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WidgetConsoleMenu_C::GetWidget(class UMenu_C** MenuWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.GetWidget");

	ABP_WidgetConsoleMenu_C_GetWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuWidget != nullptr)
		*MenuWidget = params.MenuWidget;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.PassDownConsoleButtonHoverEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   HoveredComponent               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           bHoverBegin                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WidgetConsoleMenu_C::PassDownConsoleButtonHoverEvent(const struct FChangedMenuComponent& HoveredComponent, bool bHoverBegin)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.PassDownConsoleButtonHoverEvent");

	ABP_WidgetConsoleMenu_C_PassDownConsoleButtonHoverEvent_Params params;
	params.HoveredComponent = HoveredComponent;
	params.bHoverBegin = bHoverBegin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WidgetConsoleMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.UserConstructionScript");

	ABP_WidgetConsoleMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WidgetConsoleMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.ReceiveBeginPlay");

	ABP_WidgetConsoleMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.AdjustConsoleHeight
// (BlueprintCallable, BlueprintEvent)

void ABP_WidgetConsoleMenu_C::AdjustConsoleHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.AdjustConsoleHeight");

	ABP_WidgetConsoleMenu_C_AdjustConsoleHeight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.AdjustRotation
// (BlueprintCallable, BlueprintEvent)

void ABP_WidgetConsoleMenu_C::AdjustRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.AdjustRotation");

	ABP_WidgetConsoleMenu_C_AdjustRotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__Button1_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WidgetConsoleMenu_C::BndEvt__Button1_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__Button1_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_WidgetConsoleMenu_C_BndEvt__Button1_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__Button3_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WidgetConsoleMenu_C::BndEvt__Button3_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__Button3_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_WidgetConsoleMenu_C_BndEvt__Button3_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__Button4_Console_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WidgetConsoleMenu_C::BndEvt__Button4_Console_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__Button4_Console_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature");

	ABP_WidgetConsoleMenu_C_BndEvt__Button4_Console_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__BackButton_Console_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WidgetConsoleMenu_C::BndEvt__BackButton_Console_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__BackButton_Console_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature");

	ABP_WidgetConsoleMenu_C_BndEvt__BackButton_Console_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__UpButton_Console_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WidgetConsoleMenu_C::BndEvt__UpButton_Console_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__UpButton_Console_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature");

	ABP_WidgetConsoleMenu_C_BndEvt__UpButton_Console_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__DownButton_Console_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_WidgetConsoleMenu_C::BndEvt__DownButton_Console_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__DownButton_Console_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature");

	ABP_WidgetConsoleMenu_C_BndEvt__DownButton_Console_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.AdjustConsoleLocation
// (BlueprintCallable, BlueprintEvent)

void ABP_WidgetConsoleMenu_C::AdjustConsoleLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.AdjustConsoleLocation");

	ABP_WidgetConsoleMenu_C_AdjustConsoleLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   InteractionName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WidgetConsoleMenu_C::BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature(const struct FName& InteractionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature");

	ABP_WidgetConsoleMenu_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature_Params params;
	params.InteractionName = InteractionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   InteractionName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WidgetConsoleMenu_C::BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature(const struct FName& InteractionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature");

	ABP_WidgetConsoleMenu_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature_Params params;
	params.InteractionName = InteractionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.ExecuteUbergraph_BP_WidgetConsoleMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WidgetConsoleMenu_C::ExecuteUbergraph_BP_WidgetConsoleMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.ExecuteUbergraph_BP_WidgetConsoleMenu");

	ABP_WidgetConsoleMenu_C_ExecuteUbergraph_BP_WidgetConsoleMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.StartLevel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WidgetConsoleMenu_C::StartLevel__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.StartLevel__DelegateSignature");

	ABP_WidgetConsoleMenu_C_StartLevel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
