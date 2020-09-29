#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C
// 0x0118 (0x06D8 - 0x05C0)
class ABP_OptionsWidgetMenu_C : public AOptionsMenuActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05C0(0x0008) (Transient, DuplicateTransient)
	class UBP_MenuItemIterator_C*                      MenuItemIterator;                                         // 0x05C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        ThrottleLeftHand;                                         // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        ThrottleRightHand;                                        // 0x05D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Teleport;                                                 // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Throttle;                                                 // 0x05E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        NavRotationOff;                                           // 0x05F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        NavRotationOn;                                            // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        InstantSnapTurns;                                         // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        LerpSnapTurns;                                            // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        SnapTurns;                                                // 0x0610(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        ThrottleHands;                                            // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        LocomotionMode;                                           // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        NavRotation;                                              // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuTabComponent*                           LocomotionOptionsTab;                                     // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        DamageIndicatorOff;                                       // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        DamageIndicatorOn;                                        // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        CameraShakeOff;                                           // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        CameraShakeOn;                                            // 0x0650(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        FadeAccelerationOff;                                      // 0x0658(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        FadeAccelerationOn;                                       // 0x0660(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        VignetteOff;                                              // 0x0668(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        VignetteOn;                                               // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenu_C*                                     MenuWidget;                                               // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBP_WKNDGameInstance_C*                      WKNDGameInstance;                                         // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ESoundChannel                                      CurrentActiveSoundChannel;                                // 0x0688(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0689(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSeatedModeChange;                                       // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UCurveFloat*                                 AudioChangeCurve;                                         // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIncreaseAudio;                                           // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDecreaseAudio;                                           // 0x06A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x06AA(0x0002) MISSED OFFSET
	float                                              UpdateAudioDelay;                                         // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AudioUpdateTimer;                                         // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Interation;                                               // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBPW_LocalizationMenu_C*                     BPW_LocalizationMenu;                                     // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                LastLanguageIndex;                                        // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SelectedLanguageIndex;                                    // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialSelectedLanguageIndex;                             // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06CC(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               SFXSelectWave;                                            // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C");
		return ptr;
	}


	void UpdateActiveLanguageIndicator();
	void UpdateSubtitlesOnOff(bool SubtitlesOn);
	void InitSubtitlesOnOff();
	void HandleNewLanguageSelection(int NewLanguageSelection);
	void GetLocalizationMenuWidget(class UBPW_LocalizationMenu_C** BPW_LocalizationMenu);
	void InitSelectedLanguage();
	void HideVersionText();
	void ShowVersionText();
	void GetSettingsFromGameInstance();
	void UpdateVolumeScrolling(float DeltaSeconds);
	void UpdateVolume(bool bIncrease);
	void GetWidgetFromConsole(class UMenu_C** OutWidget);
	void SetConsoleButtonConfig(int ButtonConfigID);
	void UserConstructionScript();
	void Button2_Press();
	void Button3_Press();
	void Button4_Press();
	void BackButton_Press();
	void UpButton_Press();
	void DownButton_Press();
	void BndEvt__VignetteOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__VignetteOff_K2Node_ComponentBoundEvent_98_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__FadeAccelerationOff_K2Node_ComponentBoundEvent_77_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__FadeAccelerationOn_K2Node_ComponentBoundEvent_132_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__CameraShakeOn_K2Node_ComponentBoundEvent_240_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__CameraShakeOff_K2Node_ComponentBoundEvent_259_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__DamageIndicatorOff_K2Node_ComponentBoundEvent_379_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__DamageIndicatorOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__LocomotionOptionsTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent);
	void BndEvt__Teleport_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__Throttle_K2Node_ComponentBoundEvent_843_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__ThrottleLeftHand_K2Node_ComponentBoundEvent_873_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__ThrottleRightHand_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__NavRotationOn_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__NavRotationOff_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__LerpSnapTurns_K2Node_ComponentBoundEvent_5_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__InstantSnapTurns_K2Node_ComponentBoundEvent_6_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void DownButton_Release();
	void UpButton_Release();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__CustomComfort_MenuButton_K2Node_ComponentBoundEvent_345_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__AudioSetting_Button_K2Node_ComponentBoundEvent_418_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__MasterChannel_Button_K2Node_ComponentBoundEvent_489_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__VoiceChannel_Button_K2Node_ComponentBoundEvent_560_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__MusicChannel_Button_K2Node_ComponentBoundEvent_631_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__SFXChannel_Button_K2Node_ComponentBoundEvent_702_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__VideoSetting_Button_K2Node_ComponentBoundEvent_774_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__OptionsTabComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent);
	void ShowComfortMenu();
	void ShowLocomotionMenu();
	void ShowAudioVideoMenu();
	void ShowAccessibilityMenu();
	void ReceiveComfortLevelChanged();
	void BndEvt__CustomComfortSettings_Tab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent);
	void BndEvt__CustomClimb_MenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void ReceiveBackButtonPressed();
	void ShowMainOptionsMenu();
	void ReceiveMenuActivated();
	void OnMenuVolumeChanged(ESoundChannel Channel, float Volume, bool Increased);
	void ReceiveBeginPlay();
	void Button1_Press();
	void ReceiveClimbSettingChanged();
	void ReceiveSeatedSettingChanged();
	void ReceiveVisualCombatAssistSettingChanged();
	void AudioMenuSurrogate();
	void Receive360CombatSettingChanged();
	void BndEvt__HighQualityVideo_Button_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__LowQualityVideo_Button_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__LanguageButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void ShowLanguageMenu();
	void BndEvt__SubtitlesOffButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__SubtitlesOnButton_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__LanguageConfirmButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void ReceiveSubtitlesChanged(bool* SubtitlesOn);
	void ExecuteUbergraph_BP_OptionsWidgetMenu(int EntryPoint);
	void OnSeatedModeChange__DelegateSignature(EVRModeEnum Mode);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
