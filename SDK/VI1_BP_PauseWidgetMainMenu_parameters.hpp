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

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.SetConsoleButtonConfig
struct ABP_PauseWidgetMainMenu_C_SetConsoleButtonConfig_Params
{
	int                                                ButtonConfigID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.GetWidgetFromConsole
struct ABP_PauseWidgetMainMenu_C_GetWidgetFromConsole_Params
{
	class UMenu_C*                                     OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.SetOptionsMenu
struct ABP_PauseWidgetMainMenu_C_SetOptionsMenu_Params
{
	class AOptionsMenuActor*                           OptionsMenu;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.UserConstructionScript
struct ABP_PauseWidgetMainMenu_C_UserConstructionScript_Params
{
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ReceiveConfirmationPromptCalled
struct ABP_PauseWidgetMainMenu_C_ReceiveConfirmationPromptCalled_Params
{
	struct FText*                                      WarningText;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ReceiveConfirmationPromptClosed
struct ABP_PauseWidgetMainMenu_C_ReceiveConfirmationPromptClosed_Params
{
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__Recenter_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_PauseWidgetMainMenu_C_BndEvt__Recenter_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__Options_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
struct ABP_PauseWidgetMainMenu_C_BndEvt__Options_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button1_Press
struct ABP_PauseWidgetMainMenu_C_Button1_Press_Params
{
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button2_Press
struct ABP_PauseWidgetMainMenu_C_Button2_Press_Params
{
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button3_Press
struct ABP_PauseWidgetMainMenu_C_Button3_Press_Params
{
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.Button4_Press
struct ABP_PauseWidgetMainMenu_C_Button4_Press_Params
{
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BackButton_Press
struct ABP_PauseWidgetMainMenu_C_BackButton_Press_Params
{
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ReceiveMenuActivated
struct ABP_PauseWidgetMainMenu_C_ReceiveMenuActivated_Params
{
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__QuitGameMenuButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_PauseWidgetMainMenu_C_BndEvt__QuitGameMenuButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.BndEvt__BackToMainMenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
struct ABP_PauseWidgetMainMenu_C_BndEvt__BackToMainMenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C.ExecuteUbergraph_BP_PauseWidgetMainMenu
struct ABP_PauseWidgetMainMenu_C_ExecuteUbergraph_BP_PauseWidgetMainMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
