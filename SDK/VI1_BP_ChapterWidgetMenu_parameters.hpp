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

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.OnChapterChanged
struct ABP_ChapterWidgetMenu_C_OnChapterChanged_Params
{
	class UMenuScrollContainerComponent*               ChangedContainerComponent;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIssuedFromConsole;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ScrollDown
struct ABP_ChapterWidgetMenu_C_ScrollDown_Params
{
	class UMenuScrollContainerComponent*               ScrollContainer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ScrollUp
struct ABP_ChapterWidgetMenu_C_ScrollUp_Params
{
	class UMenuScrollContainerComponent*               ScrollContainer;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UpdateCheckpointDisplayText
struct ABP_ChapterWidgetMenu_C_UpdateCheckpointDisplayText_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.GetWidgetFromConsole
struct ABP_ChapterWidgetMenu_C_GetWidgetFromConsole_Params
{
	class UMenu_C*                                     OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.SetConsoleButtonConfig
struct ABP_ChapterWidgetMenu_C_SetConsoleButtonConfig_Params
{
	int                                                ButtonConfigID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UserConstructionScript
struct ABP_ChapterWidgetMenu_C_UserConstructionScript_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__ChangeEpisodeButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature
struct ABP_ChapterWidgetMenu_C_BndEvt__ChangeEpisodeButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ReceiveMenuActivated
struct ABP_ChapterWidgetMenu_C_ReceiveMenuActivated_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EpisodesTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
struct ABP_ChapterWidgetMenu_C_BndEvt__EpisodesTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button1_Press
struct ABP_ChapterWidgetMenu_C_Button1_Press_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button2_Press
struct ABP_ChapterWidgetMenu_C_Button2_Press_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button3_Press
struct ABP_ChapterWidgetMenu_C_Button3_Press_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.Button4_Press
struct ABP_ChapterWidgetMenu_C_Button4_Press_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BackButton_Press
struct ABP_ChapterWidgetMenu_C_BackButton_Press_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UpButton_Press
struct ABP_ChapterWidgetMenu_C_UpButton_Press_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.DownButton_Press
struct ABP_ChapterWidgetMenu_C_DownButton_Press_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ShowConfirmPrompt
struct ABP_ChapterWidgetMenu_C_ShowConfirmPrompt_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.CloseConfirmPrompt
struct ABP_ChapterWidgetMenu_C_CloseConfirmPrompt_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.LoadChapter
struct ABP_ChapterWidgetMenu_C_LoadChapter_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__Yes_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_ChapterWidgetMenu_C_BndEvt__Yes_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__No_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
struct ABP_ChapterWidgetMenu_C_BndEvt__No_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__PlayChapterButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_ChapterWidgetMenu_C_BndEvt__PlayChapterButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EP1ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
struct ABP_ChapterWidgetMenu_C_BndEvt__EP1ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EP2ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
struct ABP_ChapterWidgetMenu_C_BndEvt__EP2ScrollContainer_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.BndEvt__EP3ScrollContainer_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature
struct ABP_ChapterWidgetMenu_C_BndEvt__EP3ScrollContainer_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ReceiveBeginPlay
struct ABP_ChapterWidgetMenu_C_ReceiveBeginPlay_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.UpButton_Release
struct ABP_ChapterWidgetMenu_C_UpButton_Release_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.DownButton_Release
struct ABP_ChapterWidgetMenu_C_DownButton_Release_Params
{
};

// Function BP_ChapterWidgetMenu.BP_ChapterWidgetMenu_C.ExecuteUbergraph_BP_ChapterWidgetMenu
struct ABP_ChapterWidgetMenu_C_ExecuteUbergraph_BP_ChapterWidgetMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
