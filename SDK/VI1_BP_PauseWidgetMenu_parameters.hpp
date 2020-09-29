#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.GetButtonLocation
struct ABP_PauseWidgetMenu_C_GetButtonLocation_Params
{
	int                                                ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ButtonLocation;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ResetMenuStates
struct ABP_PauseWidgetMenu_C_ResetMenuStates_Params
{
};

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.UpDownButtonsActive
struct ABP_PauseWidgetMenu_C_UpDownButtonsActive_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.GetWidget
struct ABP_PauseWidgetMenu_C_GetWidget_Params
{
	class UMenu_C*                                     MenuWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.UserConstructionScript
struct ABP_PauseWidgetMenu_C_UserConstructionScript_Params
{
};

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ReceiveBeginPlay
struct ABP_PauseWidgetMenu_C_ReceiveBeginPlay_Params
{
};

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.OnOptionsMenuClosed
struct ABP_PauseWidgetMenu_C_OnOptionsMenuClosed_Params
{
};

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ReceiveMenuActivated
struct ABP_PauseWidgetMenu_C_ReceiveMenuActivated_Params
{
};

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ReceiveMenuDeactivated
struct ABP_PauseWidgetMenu_C_ReceiveMenuDeactivated_Params
{
};

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature
struct ABP_PauseWidgetMenu_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature_Params
{
	struct FName                                       InteractionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature
struct ABP_PauseWidgetMenu_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature_Params
{
	struct FName                                       InteractionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PauseWidgetMenu.BP_PauseWidgetMenu_C.ExecuteUbergraph_BP_PauseWidgetMenu
struct ABP_PauseWidgetMenu_C_ExecuteUbergraph_BP_PauseWidgetMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
