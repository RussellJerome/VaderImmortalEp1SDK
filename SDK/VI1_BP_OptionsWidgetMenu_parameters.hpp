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

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateActiveLanguageIndicator
struct ABP_OptionsWidgetMenu_C_UpdateActiveLanguageIndicator_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateSubtitlesOnOff
struct ABP_OptionsWidgetMenu_C_UpdateSubtitlesOnOff_Params
{
	bool                                               SubtitlesOn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.InitSubtitlesOnOff
struct ABP_OptionsWidgetMenu_C_InitSubtitlesOnOff_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.HandleNewLanguageSelection
struct ABP_OptionsWidgetMenu_C_HandleNewLanguageSelection_Params
{
	int                                                NewLanguageSelection;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.GetLocalizationMenuWidget
struct ABP_OptionsWidgetMenu_C_GetLocalizationMenuWidget_Params
{
	class UBPW_LocalizationMenu_C*                     BPW_LocalizationMenu;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.InitSelectedLanguage
struct ABP_OptionsWidgetMenu_C_InitSelectedLanguage_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.HideVersionText
struct ABP_OptionsWidgetMenu_C_HideVersionText_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowVersionText
struct ABP_OptionsWidgetMenu_C_ShowVersionText_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.GetSettingsFromGameInstance
struct ABP_OptionsWidgetMenu_C_GetSettingsFromGameInstance_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateVolumeScrolling
struct ABP_OptionsWidgetMenu_C_UpdateVolumeScrolling_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateVolume
struct ABP_OptionsWidgetMenu_C_UpdateVolume_Params
{
	bool                                               bIncrease;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.GetWidgetFromConsole
struct ABP_OptionsWidgetMenu_C_GetWidgetFromConsole_Params
{
	class UMenu_C*                                     OutWidget;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.SetConsoleButtonConfig
struct ABP_OptionsWidgetMenu_C_SetConsoleButtonConfig_Params
{
	int                                                ButtonConfigID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UserConstructionScript
struct ABP_OptionsWidgetMenu_C_UserConstructionScript_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button2_Press
struct ABP_OptionsWidgetMenu_C_Button2_Press_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button3_Press
struct ABP_OptionsWidgetMenu_C_Button3_Press_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button4_Press
struct ABP_OptionsWidgetMenu_C_Button4_Press_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BackButton_Press
struct ABP_OptionsWidgetMenu_C_BackButton_Press_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpButton_Press
struct ABP_OptionsWidgetMenu_C_UpButton_Press_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.DownButton_Press
struct ABP_OptionsWidgetMenu_C_DownButton_Press_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VignetteOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__VignetteOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VignetteOff_K2Node_ComponentBoundEvent_98_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__VignetteOff_K2Node_ComponentBoundEvent_98_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__FadeAccelerationOff_K2Node_ComponentBoundEvent_77_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__FadeAccelerationOff_K2Node_ComponentBoundEvent_77_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__FadeAccelerationOn_K2Node_ComponentBoundEvent_132_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__FadeAccelerationOn_K2Node_ComponentBoundEvent_132_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CameraShakeOn_K2Node_ComponentBoundEvent_240_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__CameraShakeOn_K2Node_ComponentBoundEvent_240_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CameraShakeOff_K2Node_ComponentBoundEvent_259_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__CameraShakeOff_K2Node_ComponentBoundEvent_259_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__DamageIndicatorOff_K2Node_ComponentBoundEvent_379_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__DamageIndicatorOff_K2Node_ComponentBoundEvent_379_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__DamageIndicatorOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__DamageIndicatorOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LocomotionOptionsTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__LocomotionOptionsTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__Teleport_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__Teleport_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__Throttle_K2Node_ComponentBoundEvent_843_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__Throttle_K2Node_ComponentBoundEvent_843_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__ThrottleLeftHand_K2Node_ComponentBoundEvent_873_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__ThrottleLeftHand_K2Node_ComponentBoundEvent_873_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__ThrottleRightHand_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__ThrottleRightHand_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__NavRotationOn_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__NavRotationOn_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__NavRotationOff_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__NavRotationOff_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LerpSnapTurns_K2Node_ComponentBoundEvent_5_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__LerpSnapTurns_K2Node_ComponentBoundEvent_5_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__InstantSnapTurns_K2Node_ComponentBoundEvent_6_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__InstantSnapTurns_K2Node_ComponentBoundEvent_6_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.DownButton_Release
struct ABP_OptionsWidgetMenu_C_DownButton_Release_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpButton_Release
struct ABP_OptionsWidgetMenu_C_UpButton_Release_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveTick
struct ABP_OptionsWidgetMenu_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CustomComfort_MenuButton_K2Node_ComponentBoundEvent_345_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__CustomComfort_MenuButton_K2Node_ComponentBoundEvent_345_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__AudioSetting_Button_K2Node_ComponentBoundEvent_418_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__AudioSetting_Button_K2Node_ComponentBoundEvent_418_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__MasterChannel_Button_K2Node_ComponentBoundEvent_489_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__MasterChannel_Button_K2Node_ComponentBoundEvent_489_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VoiceChannel_Button_K2Node_ComponentBoundEvent_560_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__VoiceChannel_Button_K2Node_ComponentBoundEvent_560_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__MusicChannel_Button_K2Node_ComponentBoundEvent_631_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__MusicChannel_Button_K2Node_ComponentBoundEvent_631_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__SFXChannel_Button_K2Node_ComponentBoundEvent_702_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__SFXChannel_Button_K2Node_ComponentBoundEvent_702_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VideoSetting_Button_K2Node_ComponentBoundEvent_774_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__VideoSetting_Button_K2Node_ComponentBoundEvent_774_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__OptionsTabComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__OptionsTabComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowComfortMenu
struct ABP_OptionsWidgetMenu_C_ShowComfortMenu_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowLocomotionMenu
struct ABP_OptionsWidgetMenu_C_ShowLocomotionMenu_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowAudioVideoMenu
struct ABP_OptionsWidgetMenu_C_ShowAudioVideoMenu_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowAccessibilityMenu
struct ABP_OptionsWidgetMenu_C_ShowAccessibilityMenu_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveComfortLevelChanged
struct ABP_OptionsWidgetMenu_C_ReceiveComfortLevelChanged_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CustomComfortSettings_Tab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__CustomComfortSettings_Tab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CustomClimb_MenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__CustomClimb_MenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveBackButtonPressed
struct ABP_OptionsWidgetMenu_C_ReceiveBackButtonPressed_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowMainOptionsMenu
struct ABP_OptionsWidgetMenu_C_ShowMainOptionsMenu_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveMenuActivated
struct ABP_OptionsWidgetMenu_C_ReceiveMenuActivated_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.OnMenuVolumeChanged
struct ABP_OptionsWidgetMenu_C_OnMenuVolumeChanged_Params
{
	ESoundChannel                                      Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Increased;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveBeginPlay
struct ABP_OptionsWidgetMenu_C_ReceiveBeginPlay_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button1_Press
struct ABP_OptionsWidgetMenu_C_Button1_Press_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveClimbSettingChanged
struct ABP_OptionsWidgetMenu_C_ReceiveClimbSettingChanged_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveSeatedSettingChanged
struct ABP_OptionsWidgetMenu_C_ReceiveSeatedSettingChanged_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveVisualCombatAssistSettingChanged
struct ABP_OptionsWidgetMenu_C_ReceiveVisualCombatAssistSettingChanged_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.AudioMenuSurrogate
struct ABP_OptionsWidgetMenu_C_AudioMenuSurrogate_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Receive360CombatSettingChanged
struct ABP_OptionsWidgetMenu_C_Receive360CombatSettingChanged_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__HighQualityVideo_Button_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__HighQualityVideo_Button_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LowQualityVideo_Button_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__LowQualityVideo_Button_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LanguageButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__LanguageButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowLanguageMenu
struct ABP_OptionsWidgetMenu_C_ShowLanguageMenu_Params
{
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__SubtitlesOffButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__SubtitlesOffButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__SubtitlesOnButton_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__SubtitlesOnButton_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LanguageConfirmButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature
struct ABP_OptionsWidgetMenu_C_BndEvt__LanguageConfirmButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature_Params
{
	struct FPressedButtonComponent                     PressedButtonComponent;                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveSubtitlesChanged
struct ABP_OptionsWidgetMenu_C_ReceiveSubtitlesChanged_Params
{
	bool*                                              SubtitlesOn;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ExecuteUbergraph_BP_OptionsWidgetMenu
struct ABP_OptionsWidgetMenu_C_ExecuteUbergraph_BP_OptionsWidgetMenu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.OnSeatedModeChange__DelegateSignature
struct ABP_OptionsWidgetMenu_C_OnSeatedModeChange__DelegateSignature_Params
{
	EVRModeEnum                                        Mode;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
