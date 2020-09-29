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

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.DisableActiveLanguageIndicator
struct UBPW_LocalizationMenu_C_DisableActiveLanguageIndicator_Params
{
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.EnableActiveLanguageIndicator
struct UBPW_LocalizationMenu_C_EnableActiveLanguageIndicator_Params
{
	int                                                NewActiveWaveIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.HideConfirmButton
struct UBPW_LocalizationMenu_C_HideConfirmButton_Params
{
};

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.ShowConfirmButton
struct UBPW_LocalizationMenu_C_ShowConfirmButton_Params
{
	bool                                               IsButtonEnabled;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.CreateLanguageWidget
struct UBPW_LocalizationMenu_C_CreateLanguageWidget_Params
{
	struct FText                                       LanguageName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.InitScrollBox
struct UBPW_LocalizationMenu_C_InitScrollBox_Params
{
	class UScrollBox*                                  ScrollBox;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UBPW_SelectableItem_C*>               SelectableRewards;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.SelectLanguage
struct UBPW_LocalizationMenu_C_SelectLanguage_Params
{
	int                                                LanguageIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDescendantScrollDestination                       ScrollDestination;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.SelectScrollBoxItem
struct UBPW_LocalizationMenu_C_SelectScrollBoxItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBPW_SelectableItem_C*                       LastSelectedItem;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  ScrollBox;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EDescendantScrollDestination                       ScrollDestination;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	class UBPW_SelectableItem_C*                       CurrentSelectedItem;                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.PreConstruct
struct UBPW_LocalizationMenu_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.Construct
struct UBPW_LocalizationMenu_C_Construct_Params
{
};

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.ToggleLocalizationMenu
struct UBPW_LocalizationMenu_C_ToggleLocalizationMenu_Params
{
	bool                                               bShow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_LocalizationMenu.BPW_LocalizationMenu_C.ExecuteUbergraph_BPW_LocalizationMenu
struct UBPW_LocalizationMenu_C_ExecuteUbergraph_BPW_LocalizationMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
