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

// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateActiveLanguageIndicator
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::UpdateActiveLanguageIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateActiveLanguageIndicator");

	ABP_OptionsWidgetMenu_C_UpdateActiveLanguageIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateSubtitlesOnOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SubtitlesOn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::UpdateSubtitlesOnOff(bool SubtitlesOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateSubtitlesOnOff");

	ABP_OptionsWidgetMenu_C_UpdateSubtitlesOnOff_Params params;
	params.SubtitlesOn = SubtitlesOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.InitSubtitlesOnOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::InitSubtitlesOnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.InitSubtitlesOnOff");

	ABP_OptionsWidgetMenu_C_InitSubtitlesOnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.HandleNewLanguageSelection
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewLanguageSelection           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::HandleNewLanguageSelection(int NewLanguageSelection)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.HandleNewLanguageSelection");

	ABP_OptionsWidgetMenu_C_HandleNewLanguageSelection_Params params;
	params.NewLanguageSelection = NewLanguageSelection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.GetLocalizationMenuWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBPW_LocalizationMenu_C* BPW_LocalizationMenu           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::GetLocalizationMenuWidget(class UBPW_LocalizationMenu_C** BPW_LocalizationMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.GetLocalizationMenuWidget");

	ABP_OptionsWidgetMenu_C_GetLocalizationMenuWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BPW_LocalizationMenu != nullptr)
		*BPW_LocalizationMenu = params.BPW_LocalizationMenu;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.InitSelectedLanguage
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::InitSelectedLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.InitSelectedLanguage");

	ABP_OptionsWidgetMenu_C_InitSelectedLanguage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.HideVersionText
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::HideVersionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.HideVersionText");

	ABP_OptionsWidgetMenu_C_HideVersionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowVersionText
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ShowVersionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowVersionText");

	ABP_OptionsWidgetMenu_C_ShowVersionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.GetSettingsFromGameInstance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::GetSettingsFromGameInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.GetSettingsFromGameInstance");

	ABP_OptionsWidgetMenu_C_GetSettingsFromGameInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateVolumeScrolling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::UpdateVolumeScrolling(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateVolumeScrolling");

	ABP_OptionsWidgetMenu_C_UpdateVolumeScrolling_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bIncrease                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::UpdateVolume(bool bIncrease)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpdateVolume");

	ABP_OptionsWidgetMenu_C_UpdateVolume_Params params;
	params.bIncrease = bIncrease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.GetWidgetFromConsole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMenu_C*                 OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::GetWidgetFromConsole(class UMenu_C** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.GetWidgetFromConsole");

	ABP_OptionsWidgetMenu_C_GetWidgetFromConsole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.SetConsoleButtonConfig
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonConfigID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::SetConsoleButtonConfig(int ButtonConfigID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.SetConsoleButtonConfig");

	ABP_OptionsWidgetMenu_C_SetConsoleButtonConfig_Params params;
	params.ButtonConfigID = ButtonConfigID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UserConstructionScript");

	ABP_OptionsWidgetMenu_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button2_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::Button2_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button2_Press");

	ABP_OptionsWidgetMenu_C_Button2_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button3_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::Button3_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button3_Press");

	ABP_OptionsWidgetMenu_C_Button3_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button4_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::Button4_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button4_Press");

	ABP_OptionsWidgetMenu_C_Button4_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BackButton_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::BackButton_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BackButton_Press");

	ABP_OptionsWidgetMenu_C_BackButton_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpButton_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::UpButton_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpButton_Press");

	ABP_OptionsWidgetMenu_C_UpButton_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.DownButton_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::DownButton_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.DownButton_Press");

	ABP_OptionsWidgetMenu_C_DownButton_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VignetteOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__VignetteOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VignetteOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__VignetteOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VignetteOff_K2Node_ComponentBoundEvent_98_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__VignetteOff_K2Node_ComponentBoundEvent_98_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VignetteOff_K2Node_ComponentBoundEvent_98_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__VignetteOff_K2Node_ComponentBoundEvent_98_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__FadeAccelerationOff_K2Node_ComponentBoundEvent_77_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__FadeAccelerationOff_K2Node_ComponentBoundEvent_77_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__FadeAccelerationOff_K2Node_ComponentBoundEvent_77_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__FadeAccelerationOff_K2Node_ComponentBoundEvent_77_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__FadeAccelerationOn_K2Node_ComponentBoundEvent_132_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__FadeAccelerationOn_K2Node_ComponentBoundEvent_132_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__FadeAccelerationOn_K2Node_ComponentBoundEvent_132_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__FadeAccelerationOn_K2Node_ComponentBoundEvent_132_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CameraShakeOn_K2Node_ComponentBoundEvent_240_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__CameraShakeOn_K2Node_ComponentBoundEvent_240_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CameraShakeOn_K2Node_ComponentBoundEvent_240_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__CameraShakeOn_K2Node_ComponentBoundEvent_240_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CameraShakeOff_K2Node_ComponentBoundEvent_259_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__CameraShakeOff_K2Node_ComponentBoundEvent_259_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CameraShakeOff_K2Node_ComponentBoundEvent_259_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__CameraShakeOff_K2Node_ComponentBoundEvent_259_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__DamageIndicatorOff_K2Node_ComponentBoundEvent_379_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__DamageIndicatorOff_K2Node_ComponentBoundEvent_379_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__DamageIndicatorOff_K2Node_ComponentBoundEvent_379_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__DamageIndicatorOff_K2Node_ComponentBoundEvent_379_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__DamageIndicatorOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__DamageIndicatorOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__DamageIndicatorOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__DamageIndicatorOn_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LocomotionOptionsTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   ChangedMenuComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__LocomotionOptionsTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LocomotionOptionsTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__LocomotionOptionsTab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params params;
	params.ChangedMenuComponent = ChangedMenuComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__Teleport_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__Teleport_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__Teleport_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__Teleport_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__Throttle_K2Node_ComponentBoundEvent_843_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__Throttle_K2Node_ComponentBoundEvent_843_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__Throttle_K2Node_ComponentBoundEvent_843_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__Throttle_K2Node_ComponentBoundEvent_843_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__ThrottleLeftHand_K2Node_ComponentBoundEvent_873_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__ThrottleLeftHand_K2Node_ComponentBoundEvent_873_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__ThrottleLeftHand_K2Node_ComponentBoundEvent_873_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__ThrottleLeftHand_K2Node_ComponentBoundEvent_873_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__ThrottleRightHand_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__ThrottleRightHand_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__ThrottleRightHand_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__ThrottleRightHand_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__NavRotationOn_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__NavRotationOn_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__NavRotationOn_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__NavRotationOn_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__NavRotationOff_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__NavRotationOff_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__NavRotationOff_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__NavRotationOff_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LerpSnapTurns_K2Node_ComponentBoundEvent_5_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__LerpSnapTurns_K2Node_ComponentBoundEvent_5_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LerpSnapTurns_K2Node_ComponentBoundEvent_5_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__LerpSnapTurns_K2Node_ComponentBoundEvent_5_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__InstantSnapTurns_K2Node_ComponentBoundEvent_6_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__InstantSnapTurns_K2Node_ComponentBoundEvent_6_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__InstantSnapTurns_K2Node_ComponentBoundEvent_6_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__InstantSnapTurns_K2Node_ComponentBoundEvent_6_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.DownButton_Release
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::DownButton_Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.DownButton_Release");

	ABP_OptionsWidgetMenu_C_DownButton_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpButton_Release
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::UpButton_Release()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.UpButton_Release");

	ABP_OptionsWidgetMenu_C_UpButton_Release_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveTick");

	ABP_OptionsWidgetMenu_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CustomComfort_MenuButton_K2Node_ComponentBoundEvent_345_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__CustomComfort_MenuButton_K2Node_ComponentBoundEvent_345_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CustomComfort_MenuButton_K2Node_ComponentBoundEvent_345_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__CustomComfort_MenuButton_K2Node_ComponentBoundEvent_345_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__AudioSetting_Button_K2Node_ComponentBoundEvent_418_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__AudioSetting_Button_K2Node_ComponentBoundEvent_418_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__AudioSetting_Button_K2Node_ComponentBoundEvent_418_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__AudioSetting_Button_K2Node_ComponentBoundEvent_418_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__MasterChannel_Button_K2Node_ComponentBoundEvent_489_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__MasterChannel_Button_K2Node_ComponentBoundEvent_489_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__MasterChannel_Button_K2Node_ComponentBoundEvent_489_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__MasterChannel_Button_K2Node_ComponentBoundEvent_489_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VoiceChannel_Button_K2Node_ComponentBoundEvent_560_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__VoiceChannel_Button_K2Node_ComponentBoundEvent_560_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VoiceChannel_Button_K2Node_ComponentBoundEvent_560_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__VoiceChannel_Button_K2Node_ComponentBoundEvent_560_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__MusicChannel_Button_K2Node_ComponentBoundEvent_631_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__MusicChannel_Button_K2Node_ComponentBoundEvent_631_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__MusicChannel_Button_K2Node_ComponentBoundEvent_631_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__MusicChannel_Button_K2Node_ComponentBoundEvent_631_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__SFXChannel_Button_K2Node_ComponentBoundEvent_702_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__SFXChannel_Button_K2Node_ComponentBoundEvent_702_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__SFXChannel_Button_K2Node_ComponentBoundEvent_702_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__SFXChannel_Button_K2Node_ComponentBoundEvent_702_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VideoSetting_Button_K2Node_ComponentBoundEvent_774_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__VideoSetting_Button_K2Node_ComponentBoundEvent_774_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__VideoSetting_Button_K2Node_ComponentBoundEvent_774_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__VideoSetting_Button_K2Node_ComponentBoundEvent_774_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__OptionsTabComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   ChangedMenuComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__OptionsTabComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__OptionsTabComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__OptionsTabComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params params;
	params.ChangedMenuComponent = ChangedMenuComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowComfortMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ShowComfortMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowComfortMenu");

	ABP_OptionsWidgetMenu_C_ShowComfortMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowLocomotionMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ShowLocomotionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowLocomotionMenu");

	ABP_OptionsWidgetMenu_C_ShowLocomotionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowAudioVideoMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ShowAudioVideoMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowAudioVideoMenu");

	ABP_OptionsWidgetMenu_C_ShowAudioVideoMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowAccessibilityMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ShowAccessibilityMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowAccessibilityMenu");

	ABP_OptionsWidgetMenu_C_ShowAccessibilityMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveComfortLevelChanged
// (Event, Protected, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ReceiveComfortLevelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveComfortLevelChanged");

	ABP_OptionsWidgetMenu_C_ReceiveComfortLevelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CustomComfortSettings_Tab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FChangedMenuComponent   ChangedMenuComponent           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__CustomComfortSettings_Tab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CustomComfortSettings_Tab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__CustomComfortSettings_Tab_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature_Params params;
	params.ChangedMenuComponent = ChangedMenuComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CustomClimb_MenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__CustomClimb_MenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__CustomClimb_MenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__CustomClimb_MenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveBackButtonPressed
// (Event, Protected, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ReceiveBackButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveBackButtonPressed");

	ABP_OptionsWidgetMenu_C_ReceiveBackButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowMainOptionsMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ShowMainOptionsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowMainOptionsMenu");

	ABP_OptionsWidgetMenu_C_ShowMainOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveMenuActivated
// (Event, Public, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ReceiveMenuActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveMenuActivated");

	ABP_OptionsWidgetMenu_C_ReceiveMenuActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.OnMenuVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESoundChannel                  Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Increased                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::OnMenuVolumeChanged(ESoundChannel Channel, float Volume, bool Increased)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.OnMenuVolumeChanged");

	ABP_OptionsWidgetMenu_C_OnMenuVolumeChanged_Params params;
	params.Channel = Channel;
	params.Volume = Volume;
	params.Increased = Increased;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveBeginPlay");

	ABP_OptionsWidgetMenu_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button1_Press
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::Button1_Press()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Button1_Press");

	ABP_OptionsWidgetMenu_C_Button1_Press_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveClimbSettingChanged
// (Event, Protected, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ReceiveClimbSettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveClimbSettingChanged");

	ABP_OptionsWidgetMenu_C_ReceiveClimbSettingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveSeatedSettingChanged
// (Event, Protected, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ReceiveSeatedSettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveSeatedSettingChanged");

	ABP_OptionsWidgetMenu_C_ReceiveSeatedSettingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveVisualCombatAssistSettingChanged
// (Event, Protected, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ReceiveVisualCombatAssistSettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveVisualCombatAssistSettingChanged");

	ABP_OptionsWidgetMenu_C_ReceiveVisualCombatAssistSettingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.AudioMenuSurrogate
// (BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::AudioMenuSurrogate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.AudioMenuSurrogate");

	ABP_OptionsWidgetMenu_C_AudioMenuSurrogate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Receive360CombatSettingChanged
// (Event, Protected, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::Receive360CombatSettingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.Receive360CombatSettingChanged");

	ABP_OptionsWidgetMenu_C_Receive360CombatSettingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__HighQualityVideo_Button_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__HighQualityVideo_Button_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__HighQualityVideo_Button_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__HighQualityVideo_Button_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LowQualityVideo_Button_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__LowQualityVideo_Button_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LowQualityVideo_Button_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__LowQualityVideo_Button_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LanguageButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__LanguageButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LanguageButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__LanguageButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowLanguageMenu
// (BlueprintCallable, BlueprintEvent)

void ABP_OptionsWidgetMenu_C::ShowLanguageMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ShowLanguageMenu");

	ABP_OptionsWidgetMenu_C_ShowLanguageMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__SubtitlesOffButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__SubtitlesOffButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__SubtitlesOffButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__SubtitlesOffButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__SubtitlesOnButton_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__SubtitlesOnButton_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__SubtitlesOnButton_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__SubtitlesOnButton_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LanguageConfirmButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FPressedButtonComponent PressedButtonComponent         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_OptionsWidgetMenu_C::BndEvt__LanguageConfirmButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.BndEvt__LanguageConfirmButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature");

	ABP_OptionsWidgetMenu_C_BndEvt__LanguageConfirmButton_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature_Params params;
	params.PressedButtonComponent = PressedButtonComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveSubtitlesChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          SubtitlesOn                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::ReceiveSubtitlesChanged(bool* SubtitlesOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ReceiveSubtitlesChanged");

	ABP_OptionsWidgetMenu_C_ReceiveSubtitlesChanged_Params params;
	params.SubtitlesOn = SubtitlesOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ExecuteUbergraph_BP_OptionsWidgetMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::ExecuteUbergraph_BP_OptionsWidgetMenu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.ExecuteUbergraph_BP_OptionsWidgetMenu");

	ABP_OptionsWidgetMenu_C_ExecuteUbergraph_BP_OptionsWidgetMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.OnSeatedModeChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EVRModeEnum                    Mode                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_OptionsWidgetMenu_C::OnSeatedModeChange__DelegateSignature(EVRModeEnum Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OptionsWidgetMenu.BP_OptionsWidgetMenu_C.OnSeatedModeChange__DelegateSignature");

	ABP_OptionsWidgetMenu_C_OnSeatedModeChange__DelegateSignature_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
