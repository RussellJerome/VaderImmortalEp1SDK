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

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.UpDownButtonsActive
struct ABP_WidgetConsoleMenu_C_UpDownButtonsActive_Params
{
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.PlayHapticFeedback
struct ABP_WidgetConsoleMenu_C_PlayHapticFeedback_Params
{
	class UFrontendInteractionController*              InteractionController;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.GetWidget
struct ABP_WidgetConsoleMenu_C_GetWidget_Params
{
	class UMenu_C*                                     MenuWidget;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.PassDownConsoleButtonHoverEvent
struct ABP_WidgetConsoleMenu_C_PassDownConsoleButtonHoverEvent_Params
{
	struct FChangedMenuComponent                       HoveredComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bHoverBegin;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.UserConstructionScript
struct ABP_WidgetConsoleMenu_C_UserConstructionScript_Params
{
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.ReceiveBeginPlay
struct ABP_WidgetConsoleMenu_C_ReceiveBeginPlay_Params
{
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.AdjustConsoleHeight
struct ABP_WidgetConsoleMenu_C_AdjustConsoleHeight_Params
{
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.AdjustRotation
struct ABP_WidgetConsoleMenu_C_AdjustRotation_Params
{
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__Button1_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_WidgetConsoleMenu_C_BndEvt__Button1_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__Button3_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_WidgetConsoleMenu_C_BndEvt__Button3_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__Button4_Console_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
struct ABP_WidgetConsoleMenu_C_BndEvt__Button4_Console_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__BackButton_Console_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature
struct ABP_WidgetConsoleMenu_C_BndEvt__BackButton_Console_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__UpButton_Console_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature
struct ABP_WidgetConsoleMenu_C_BndEvt__UpButton_Console_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__DownButton_Console_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature
struct ABP_WidgetConsoleMenu_C_BndEvt__DownButton_Console_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.AdjustConsoleLocation
struct ABP_WidgetConsoleMenu_C_AdjustConsoleLocation_Params
{
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature
struct ABP_WidgetConsoleMenu_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature_Params
{
	struct FName                                       InteractionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature
struct ABP_WidgetConsoleMenu_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature_Params
{
	struct FName                                       InteractionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.ExecuteUbergraph_BP_WidgetConsoleMenu
struct ABP_WidgetConsoleMenu_C_ExecuteUbergraph_BP_WidgetConsoleMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C.StartLevel__DelegateSignature
struct ABP_WidgetConsoleMenu_C_StartLevel__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
