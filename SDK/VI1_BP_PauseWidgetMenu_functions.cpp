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

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.GetButtonLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ButtonLocation                 (Parm, OutParm, IsPlainOldData)

void ABP_PauseWidgetMenu_C::GetButtonLocation(int ButtonIndex, struct FVector* ButtonLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.GetButtonLocation");

	ABP_PauseWidgetMenu_C_GetButtonLocation_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonLocation != nullptr)
		*ButtonLocation = params.ButtonLocation;
}


// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ResetMenuStates
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PauseWidgetMenu_C::ResetMenuStates()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ResetMenuStates");

	ABP_PauseWidgetMenu_C_ResetMenuStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.UpDownButtonsActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_PauseWidgetMenu_C::UpDownButtonsActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.UpDownButtonsActive");

	ABP_PauseWidgetMenu_C_UpDownButtonsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.GetWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMenu_C*                 MenuWidget                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_PauseWidgetMenu_C::GetWidget(class UMenu_C** MenuWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.GetWidget");

	ABP_PauseWidgetMenu_C_GetWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MenuWidget != nullptr)
		*MenuWidget = params.MenuWidget;
}


// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PauseWidgetMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.UserConstructionScript");

	ABP_PauseWidgetMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PauseWidgetMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ReceiveBeginPlay");

	ABP_PauseWidgetMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.OnOptionsMenuClosed
// (BlueprintCallable, BlueprintEvent)

void ABP_PauseWidgetMenu_C::OnOptionsMenuClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.OnOptionsMenuClosed");

	ABP_PauseWidgetMenu_C_OnOptionsMenuClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ReceiveMenuActivated
// (Event, Public, BlueprintEvent)

void ABP_PauseWidgetMenu_C::ReceiveMenuActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ReceiveMenuActivated");

	ABP_PauseWidgetMenu_C_ReceiveMenuActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ReceiveMenuDeactivated
// (Event, Public, BlueprintEvent)

void ABP_PauseWidgetMenu_C::ReceiveMenuDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ReceiveMenuDeactivated");

	ABP_PauseWidgetMenu_C_ReceiveMenuDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   InteractionName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PauseWidgetMenu_C::BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature(const struct FName& InteractionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature");

	ABP_PauseWidgetMenu_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature_Params params;
	params.InteractionName = InteractionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   InteractionName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PauseWidgetMenu_C::BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature(const struct FName& InteractionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature");

	ABP_PauseWidgetMenu_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature_Params params;
	params.InteractionName = InteractionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ExecuteUbergraph_BP_PauseWidgetMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PauseWidgetMenu_C::ExecuteUbergraph_BP_PauseWidgetMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ExecuteUbergraph_BP_PauseWidgetMenu");

	ABP_PauseWidgetMenu_C_ExecuteUbergraph_BP_PauseWidgetMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
