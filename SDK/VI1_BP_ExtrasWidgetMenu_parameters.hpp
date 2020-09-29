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

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.SetConsoleButtonConfig
struct ABP_ExtrasWidgetMenu_C_SetConsoleButtonConfig_Params
{
	int                                                ButtonConfigID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.GetWidgetFromConsole
struct ABP_ExtrasWidgetMenu_C_GetWidgetFromConsole_Params
{
	class UMenu_C*                                     OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.UserConstructionScript
struct ABP_ExtrasWidgetMenu_C_UserConstructionScript_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BackButton_Press
struct ABP_ExtrasWidgetMenu_C_BackButton_Press_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature
struct ABP_ExtrasWidgetMenu_C_BndEvt__CreditsButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.DownButton_Press
struct ABP_ExtrasWidgetMenu_C_DownButton_Press_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button1_Press
struct ABP_ExtrasWidgetMenu_C_Button1_Press_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__DojoButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_ExtrasWidgetMenu_C_BndEvt__DojoButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.UpButton_Press
struct ABP_ExtrasWidgetMenu_C_UpButton_Press_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__PlayWaveButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_ExtrasWidgetMenu_C_BndEvt__PlayWaveButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button4_Press
struct ABP_ExtrasWidgetMenu_C_Button4_Press_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__JumpToDojoButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
struct ABP_ExtrasWidgetMenu_C_BndEvt__JumpToDojoButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button2_Press
struct ABP_ExtrasWidgetMenu_C_Button2_Press_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button3_Press
struct ABP_ExtrasWidgetMenu_C_Button3_Press_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature
struct ABP_ExtrasWidgetMenu_C_BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__ExtrasTab_K2Node_ComponentBoundEvent_2_MenuComponentValueChangedDelegate__DelegateSignature
struct ABP_ExtrasWidgetMenu_C_BndEvt__ExtrasTab_K2Node_ComponentBoundEvent_2_MenuComponentValueChangedDelegate__DelegateSignature_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ReceiveMenuActivated
struct ABP_ExtrasWidgetMenu_C_ReceiveMenuActivated_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.SpawnVisualWaveItems
struct ABP_ExtrasWidgetMenu_C_SpawnVisualWaveItems_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.UpButton_Release
struct ABP_ExtrasWidgetMenu_C_UpButton_Release_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.DownButton_Release
struct ABP_ExtrasWidgetMenu_C_DownButton_Release_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
struct ABP_ExtrasWidgetMenu_C_BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ReceiveAllWavesUnlocked
struct ABP_ExtrasWidgetMenu_C_ReceiveAllWavesUnlocked_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentVisibilityChangedDelegate__DelegateSignature
struct ABP_ExtrasWidgetMenu_C_BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentVisibilityChangedDelegate__DelegateSignature_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.Button1Surrogate
struct ABP_ExtrasWidgetMenu_C_Button1Surrogate_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.DojoWaveSubMenuSurrogate
struct ABP_ExtrasWidgetMenu_C_DojoWaveSubMenuSurrogate_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ForcePlayCredits
struct ABP_ExtrasWidgetMenu_C_ForcePlayCredits_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.PlaySelectedWaveSurrogate
struct ABP_ExtrasWidgetMenu_C_PlaySelectedWaveSurrogate_Params
{
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ExecuteUbergraph_BP_ExtrasWidgetMenu
struct ABP_ExtrasWidgetMenu_C_ExecuteUbergraph_BP_ExtrasWidgetMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C.ExtrasMenu_PlayCredits__DelegateSignature
struct ABP_ExtrasWidgetMenu_C_ExtrasMenu_PlayCredits__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
