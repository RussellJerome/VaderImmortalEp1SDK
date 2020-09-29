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

// Function Menu.Menu_C.Show_ExtendedDojo_AccessibilityScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccessibilitySettings  Accessibility                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UMenu_C::Show_ExtendedDojo_AccessibilityScreen(const struct FAccessibilitySettings& Accessibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_ExtendedDojo_AccessibilityScreen");

	UMenu_C_Show_ExtendedDojo_AccessibilityScreen_Params params;
	params.Accessibility = Accessibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.RestoreFontSizes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class UTextBlock*, int>   SlotsToRestore                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenu_C::RestoreFontSizes(TMap<class UTextBlock*, int> SlotsToRestore)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.RestoreFontSizes");

	UMenu_C_RestoreFontSizes_Params params;
	params.SlotsToRestore = SlotsToRestore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ModifyFontSize
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            NewFontSize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<TEnumAsByte<ESupportedLanguages>> LanguagesForModification       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMenu_C::ModifyFontSize(class UTextBlock* Slot, int NewFontSize, TArray<TEnumAsByte<ESupportedLanguages>>* LanguagesForModification)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ModifyFontSize");

	UMenu_C_ModifyFontSize_Params params;
	params.Slot = Slot;
	params.NewFontSize = NewFontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LanguagesForModification != nullptr)
		*LanguagesForModification = params.LanguagesForModification;
}


// Function Menu.Menu_C.ShowLocalizationMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::ShowLocalizationMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ShowLocalizationMenu");

	UMenu_C_ShowLocalizationMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.CreateLocalizationMenuWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPW_LocalizationMenu_C* LocalizationMenu               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMenu_C::CreateLocalizationMenuWidget(class UBPW_LocalizationMenu_C** LocalizationMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.CreateLocalizationMenuWidget");

	UMenu_C_CreateLocalizationMenuWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalizationMenu != nullptr)
		*LocalizationMenu = params.LocalizationMenu;
}


// Function Menu.Menu_C.Handle Dot and Selected Indicator
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Filled_In_Dot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Off                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   text                           (Parm, OutParm)

void UMenu_C::Handle_Dot_and_Selected_Indicator(bool Filled_In_Dot, bool Off, struct FText* text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Handle Dot and Selected Indicator");

	UMenu_C_Handle_Dot_and_Selected_Indicator_Params params;
	params.Filled_In_Dot = Filled_In_Dot;
	params.Off = Off;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (text != nullptr)
		*text = params.text;
}


// Function Menu.Menu_C.HideAllSlots
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::HideAllSlots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.HideAllSlots");

	UMenu_C_HideAllSlots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_ExtendedDojo_Settings_Screen
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_ExtendedDojo_Settings_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_ExtendedDojo_Settings_Screen");

	UMenu_C_Show_ExtendedDojo_Settings_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.DisableActiveWaveIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::DisableActiveWaveIndicator(int WaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.DisableActiveWaveIndicator");

	UMenu_C_DisableActiveWaveIndicator_Params params;
	params.WaveIndex = WaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.SetActiveRewardTabIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERewardType                    RewardType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::SetActiveRewardTabIndicator(ERewardType RewardType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.SetActiveRewardTabIndicator");

	UMenu_C_SetActiveRewardTabIndicator_Params params;
	params.RewardType = RewardType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ChangeActiveRewardByType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewActiveRewardIndex           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PreviousActiveRewardIndex      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERewardType                    RewardType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::ChangeActiveRewardByType(int NewActiveRewardIndex, int PreviousActiveRewardIndex, ERewardType RewardType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ChangeActiveRewardByType");

	UMenu_C_ChangeActiveRewardByType_Params params;
	params.NewActiveRewardIndex = NewActiveRewardIndex;
	params.PreviousActiveRewardIndex = PreviousActiveRewardIndex;
	params.RewardType = RewardType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.EnableActiveWaveIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewActiveWaveIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::EnableActiveWaveIndicator(int NewActiveWaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.EnableActiveWaveIndicator");

	UMenu_C_EnableActiveWaveIndicator_Params params;
	params.NewActiveWaveIndex = NewActiveWaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.HideConfirmRewardButton
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::HideConfirmRewardButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.HideConfirmRewardButton");

	UMenu_C_HideConfirmRewardButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ShowConfirmRewardButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsButtonEnabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::ShowConfirmRewardButton(bool IsButtonEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ShowConfirmRewardButton");

	UMenu_C_ShowConfirmRewardButton_Params params;
	params.IsButtonEnabled = IsButtonEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.SetRewardPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsePreviewIcon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Description                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenu_C::SetRewardPreview(bool UsePreviewIcon, class UTexture* Texture, const struct FString& Description)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.SetRewardPreview");

	UMenu_C_SetRewardPreview_Params params;
	params.UsePreviewIcon = UsePreviewIcon;
	params.Texture = Texture;
	params.Description = Description;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_DemoPause_Menu
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_DemoPause_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_DemoPause_Menu");

	UMenu_C_Show_DemoPause_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.SetNumMedals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentNumMedals               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TotalNumMedals                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::SetNumMedals(int CurrentNumMedals, int TotalNumMedals)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.SetNumMedals");

	UMenu_C_SetNumMedals_Params params;
	params.CurrentNumMedals = CurrentNumMedals;
	params.TotalNumMedals = TotalNumMedals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.DeselectDojoReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERewardType                    RewardType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Reward_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::DeselectDojoReward(ERewardType RewardType, int Reward_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.DeselectDojoReward");

	UMenu_C_DeselectDojoReward_Params params;
	params.RewardType = RewardType;
	params.Reward_Index = Reward_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.SetKyberCrystalCompatibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   LightsaberName                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   KyberCrystalName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            KyberCrystalIndex              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsCompatibleWithLightsaber     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::SetKyberCrystalCompatibility(const struct FName& LightsaberName, const struct FName& KyberCrystalName, int KyberCrystalIndex, bool IsCompatibleWithLightsaber)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.SetKyberCrystalCompatibility");

	UMenu_C_SetKyberCrystalCompatibility_Params params;
	params.LightsaberName = LightsaberName;
	params.KyberCrystalName = KyberCrystalName;
	params.KyberCrystalIndex = KyberCrystalIndex;
	params.IsCompatibleWithLightsaber = IsCompatibleWithLightsaber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.UpdateWaveStatus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPW_DojoWave_C*         WaveItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERating                        Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::UpdateWaveStatus(class UBPW_DojoWave_C* WaveItem, const struct FString& WaveName, bool IsUnlocked, ERating Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.UpdateWaveStatus");

	UMenu_C_UpdateWaveStatus_Params params;
	params.WaveItem = WaveItem;
	params.WaveName = WaveName;
	params.IsUnlocked = IsUnlocked;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.CreateWaveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERating                        CurrentRating                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::CreateWaveWidget(const struct FString& WaveName, bool IsUnlocked, ERating CurrentRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.CreateWaveWidget");

	UMenu_C_CreateWaveWidget_Params params;
	params.WaveName = WaveName;
	params.IsUnlocked = IsUnlocked;
	params.CurrentRating = CurrentRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.UpdateWaveStatusByIndex
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERating                        Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::UpdateWaveStatusByIndex(int WaveIndex, const struct FString& WaveName, bool IsUnlocked, ERating Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.UpdateWaveStatusByIndex");

	UMenu_C_UpdateWaveStatusByIndex_Params params;
	params.WaveIndex = WaveIndex;
	params.WaveName = WaveName;
	params.IsUnlocked = IsUnlocked;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.UpdateRewardByType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERewardType                    RewardType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            RewardIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RewardName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UnlockHint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenu_C::UpdateRewardByType(ERewardType RewardType, int RewardIndex, const struct FString& RewardName, bool IsUnlocked, const struct FString& UnlockHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.UpdateRewardByType");

	UMenu_C_UpdateRewardByType_Params params;
	params.RewardType = RewardType;
	params.RewardIndex = RewardIndex;
	params.RewardName = RewardName;
	params.IsUnlocked = IsUnlocked;
	params.UnlockHint = UnlockHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.InitScrollBox
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*              ScrollBox                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UBPW_SelectableItem_C*> SelectableRewards              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMenu_C::InitScrollBox(class UScrollBox* ScrollBox, TArray<class UBPW_SelectableItem_C*>* SelectableRewards)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.InitScrollBox");

	UMenu_C_InitScrollBox_Params params;
	params.ScrollBox = ScrollBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectableRewards != nullptr)
		*SelectableRewards = params.SelectableRewards;
}


// Function Menu.Menu_C.UpdateRewardStatus
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBPW_SelectableItem_C*   SelectableReward               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 RewardName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UnlockHint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenu_C::UpdateRewardStatus(class UBPW_SelectableItem_C* SelectableReward, const struct FString& RewardName, bool IsUnlocked, const struct FString& UnlockHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.UpdateRewardStatus");

	UMenu_C_UpdateRewardStatus_Params params;
	params.SelectableReward = SelectableReward;
	params.RewardName = RewardName;
	params.IsUnlocked = IsUnlocked;
	params.UnlockHint = UnlockHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.SwitchRewardTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERewardType                    RewardType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SelectedRewardIndex            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::SwitchRewardTab(ERewardType RewardType, int SelectedRewardIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.SwitchRewardTab");

	UMenu_C_SwitchRewardTab_Params params;
	params.RewardType = RewardType;
	params.SelectedRewardIndex = SelectedRewardIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.CreateRewardWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERewardType                    RewardType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 RewardName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsUnlocked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UnlockHint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UMenu_C::CreateRewardWidget(ERewardType RewardType, const struct FString& RewardName, bool IsUnlocked, const struct FString& UnlockHint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.CreateRewardWidget");

	UMenu_C_CreateRewardWidget_Params params;
	params.RewardType = RewardType;
	params.RewardName = RewardName;
	params.IsUnlocked = IsUnlocked;
	params.UnlockHint = UnlockHint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.SelectDojoWave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Wave_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDescendantScrollDestination   ScrollDestination              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::SelectDojoWave(int Wave_Index, EDescendantScrollDestination ScrollDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.SelectDojoWave");

	UMenu_C_SelectDojoWave_Params params;
	params.Wave_Index = Wave_Index;
	params.ScrollDestination = ScrollDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.SelectDojoReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Reward_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERewardType                    RewardType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDescendantScrollDestination   ScrollDestination              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::SelectDojoReward(int Reward_Index, ERewardType RewardType, EDescendantScrollDestination ScrollDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.SelectDojoReward");

	UMenu_C_SelectDojoReward_Params params;
	params.Reward_Index = Reward_Index;
	params.RewardType = RewardType;
	params.ScrollDestination = ScrollDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ShowDojoRewardsMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::ShowDojoRewardsMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ShowDojoRewardsMenu");

	UMenu_C_ShowDojoRewardsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.SetChapterText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           ChapterDisplayText             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMenu_C::SetChapterText(TArray<struct FText>* ChapterDisplayText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.SetChapterText");

	UMenu_C_SetChapterText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChapterDisplayText != nullptr)
		*ChapterDisplayText = params.ChapterDisplayText;
}


// Function Menu.Menu_C.SelectScrollBoxItem
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UBPW_SelectableItem_C*   LastSelectedItem               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UScrollBox*              ScrollBox                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// EDescendantScrollDestination   ScrollDestination              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class UBPW_SelectableItem_C*   CurrentSelectedItem            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

bool UMenu_C::SelectScrollBoxItem(int Index, class UBPW_SelectableItem_C* LastSelectedItem, class UScrollBox* ScrollBox, EDescendantScrollDestination ScrollDestination, class UBPW_SelectableItem_C** CurrentSelectedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.SelectScrollBoxItem");

	UMenu_C_SelectScrollBoxItem_Params params;
	params.Index = Index;
	params.LastSelectedItem = LastSelectedItem;
	params.ScrollBox = ScrollBox;
	params.ScrollDestination = ScrollDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSelectedItem != nullptr)
		*CurrentSelectedItem = params.CurrentSelectedItem;

	return params.ReturnValue;
}


// Function Menu.Menu_C.ShowDojoMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bUnlockAll                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           UseMainMenuVersion             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::ShowDojoMenu(bool bUnlockAll, bool UseMainMenuVersion)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ShowDojoMenu");

	UMenu_C_ShowDojoMenu_Params params;
	params.bUnlockAll = bUnlockAll;
	params.UseMainMenuVersion = UseMainMenuVersion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_First_Comfort_Screen
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_First_Comfort_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_First_Comfort_Screen");

	UMenu_C_Show_First_Comfort_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Select_Episode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Episode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Select_Episode(int Episode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Select_Episode");

	UMenu_C_Show_Select_Episode_Params params;
	params.Episode = Episode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Quit_Game
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Quit_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Quit_Game");

	UMenu_C_Show_Quit_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Credits_Setting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Credits                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Set_Credits_Setting(bool Show_Credits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Credits_Setting");

	UMenu_C_Set_Credits_Setting_Params params;
	params.Show_Credits = Show_Credits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Trophy_Setting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Trophies                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Set_Trophy_Setting(bool Show_Trophies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Trophy_Setting");

	UMenu_C_Set_Trophy_Setting_Params params;
	params.Show_Trophies = Show_Trophies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Extras_Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Trophies                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Show_Credits                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Extras_Screen(bool Show_Trophies, bool Show_Credits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Extras_Screen");

	UMenu_C_Show_Extras_Screen_Params params;
	params.Show_Trophies = Show_Trophies;
	params.Show_Credits = Show_Credits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Select_Episode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Episode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Select_Episode(int Episode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Select_Episode");

	UMenu_C_Select_Episode_Params params;
	params.Episode = Episode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Chapter_Select_Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current_Level_Selection        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableStartNew               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Chapter_Select_Screen(int Current_Level_Selection, bool bDisableStartNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Chapter_Select_Screen");

	UMenu_C_Show_Chapter_Select_Screen_Params params;
	params.Current_Level_Selection = Current_Level_Selection;
	params.bDisableStartNew = bDisableStartNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Video_Setting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAudioVideoSettings     Audio_Video_Settings           (BlueprintVisible, BlueprintReadOnly, Parm)

void UMenu_C::Set_Video_Setting(const struct FAudioVideoSettings& Audio_Video_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Video_Setting");

	UMenu_C_Set_Video_Setting_Params params;
	params.Audio_Video_Settings = Audio_Video_Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_AudioVideo_Settings
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_AudioVideo_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_AudioVideo_Settings");

	UMenu_C_Show_AudioVideo_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Extras_Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Dojo_open                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Extras_Menu(bool Dojo_open)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Extras_Menu");

	UMenu_C_Show_Extras_Menu_Params params;
	params.Dojo_open = Dojo_open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Locomotion_Teleport_Throttle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Teleport                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELocomotionScreenSelect> ScreenSelect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Locomotion_Teleport_Throttle(bool Teleport, TEnumAsByte<ELocomotionScreenSelect> ScreenSelect)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Locomotion_Teleport_Throttle");

	UMenu_C_Show_Locomotion_Teleport_Throttle_Params params;
	params.Teleport = Teleport;
	params.ScreenSelect = ScreenSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Pause_Quit
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Pause_Quit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Pause_Quit");

	UMenu_C_Show_Pause_Quit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Chapter_Confirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Current_Checkpoint             (BlueprintVisible, BlueprintReadOnly, Parm)

void UMenu_C::Show_Chapter_Confirm(const struct FText& Current_Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Chapter_Confirm");

	UMenu_C_Show_Chapter_Confirm_Params params;
	params.Current_Checkpoint = Current_Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Confirm_Recent_Checkpoint
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Confirm_Recent_Checkpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Confirm_Recent_Checkpoint");

	UMenu_C_Show_Confirm_Recent_Checkpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Pause_Menu
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Pause_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Pause_Menu");

	UMenu_C_Show_Pause_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Custom_Comfort_Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECustomComfortSelect> CustomComfortSetting           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Custom_Comfort_Screen(TEnumAsByte<ECustomComfortSelect> CustomComfortSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Custom_Comfort_Screen");

	UMenu_C_Show_Custom_Comfort_Screen_Params params;
	params.CustomComfortSetting = CustomComfortSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Comfort_Climb_Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Slow_Fall                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Skip_Climb                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Safe_Climb                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Comfort_Climb_Screen(bool Slow_Fall, bool Skip_Climb, bool Safe_Climb)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Comfort_Climb_Screen");

	UMenu_C_Show_Comfort_Climb_Screen_Params params;
	params.Slow_Fall = Slow_Fall;
	params.Skip_Climb = Skip_Climb;
	params.Safe_Climb = Safe_Climb;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Comfort_Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EComfortLevelEnum              Comfort_Setting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Comfort_Screen(EComfortLevelEnum Comfort_Setting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Comfort_Screen");

	UMenu_C_Show_Comfort_Screen_Params params;
	params.Comfort_Setting = Comfort_Setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Accessibility_Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccessibilitySettings  Accessibility                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UMenu_C::Show_Accessibility_Screen(const struct FAccessibilitySettings& Accessibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Accessibility_Screen");

	UMenu_C_Show_Accessibility_Screen_Params params;
	params.Accessibility = Accessibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Audio_Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current_Volume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Audio_Screen(float Current_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Audio_Screen");

	UMenu_C_Show_Audio_Screen_Params params;
	params.Current_Volume = Current_Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_MainMenu_Screen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetStart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowChapters                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_MainMenu_Screen(bool SetStart, bool ShowChapters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_MainMenu_Screen");

	UMenu_C_Show_MainMenu_Screen_Params params;
	params.SetStart = SetStart;
	params.ShowChapters = ShowChapters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Settings_Screen
// (Public, BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Settings_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Settings_Screen");

	UMenu_C_Show_Settings_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Locomotion_Setting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELocomotionModeEnum            Locomotion                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Set_Locomotion_Setting(ELocomotionModeEnum Locomotion)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Locomotion_Setting");

	UMenu_C_Set_Locomotion_Setting_Params params;
	params.Locomotion = Locomotion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Accessibility_Setting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccessibilitySettings  Accessibility                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UMenu_C::Set_Accessibility_Setting(const struct FAccessibilitySettings& Accessibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Accessibility_Setting");

	UMenu_C_Set_Accessibility_Setting_Params params;
	params.Accessibility = Accessibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Audio_Setting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESoundChannel                  Audio_Setting                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Current_Volume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Set_Audio_Setting(ESoundChannel Audio_Setting, float Current_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Audio_Setting");

	UMenu_C_Set_Audio_Setting_Params params;
	params.Audio_Setting = Audio_Setting;
	params.Current_Volume = Current_Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Comfort_Setting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EComfortLevelEnum              Comfort_Setting                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Set_Comfort_Setting(EComfortLevelEnum Comfort_Setting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Comfort_Setting");

	UMenu_C_Set_Comfort_Setting_Params params;
	params.Comfort_Setting = Comfort_Setting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Extras
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Dojo_open                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Menu_Extras(bool Dojo_open)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Extras");

	UMenu_C_Menu_Extras_Params params;
	params.Dojo_open = Dojo_open;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Construct");

	UMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Comfort_Standard
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Comfort_Standard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Comfort_Standard");

	UMenu_C_Menu_Comfort_Standard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Comfort_Comfortable
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Comfort_Comfortable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Comfort_Comfortable");

	UMenu_C_Menu_Comfort_Comfortable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Comfort_Custom_Show
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Comfort_Custom_Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Comfort_Custom_Show");

	UMenu_C_Menu_Comfort_Custom_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Audio_Voice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current_Volume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Menu_Audio_Voice(float Current_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Audio_Voice");

	UMenu_C_Menu_Audio_Voice_Params params;
	params.Current_Volume = Current_Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Audio_Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current_Volume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Menu_Audio_Music(float Current_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Audio_Music");

	UMenu_C_Menu_Audio_Music_Params params;
	params.Current_Volume = Current_Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Audio_FX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current_Volume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Menu_Audio_FX(float Current_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Audio_FX");

	UMenu_C_Menu_Audio_FX_Params params;
	params.Current_Volume = Current_Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Accessibility_Seated_OFF
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Accessibility_Seated_OFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Accessibility_Seated_OFF");

	UMenu_C_Menu_Accessibility_Seated_OFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Locomotion_Throttle
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Locomotion_Throttle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Locomotion_Throttle");

	UMenu_C_Menu_Locomotion_Throttle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Volume_Level
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current_Volume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Set_Volume_Level(float Current_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Volume_Level");

	UMenu_C_Set_Volume_Level_Params params;
	params.Current_Volume = Current_Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Accessibility
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Accessibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Accessibility");

	UMenu_C_Show_Accessibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Comfort_Custom_Climb_Show
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Comfort_Custom_Climb_Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Comfort_Custom_Climb_Show");

	UMenu_C_Menu_Comfort_Custom_Climb_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Comfort
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EComfortLevelEnum              Comfort_Settings               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Comfort(EComfortLevelEnum Comfort_Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Comfort");

	UMenu_C_Show_Comfort_Params params;
	params.Comfort_Settings = Comfort_Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Confirm_Resume_From_Checkpoint
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Confirm_Resume_From_Checkpoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Confirm_Resume_From_Checkpoint");

	UMenu_C_Menu_Confirm_Resume_From_Checkpoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Comfort_Custom_Skip_Climb_On
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Comfort_Custom_Skip_Climb_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Comfort_Custom_Skip_Climb_On");

	UMenu_C_Comfort_Custom_Skip_Climb_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Comfort_Custom_Slow_Fall_On
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Comfort_Custom_Slow_Fall_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Comfort_Custom_Slow_Fall_On");

	UMenu_C_Comfort_Custom_Slow_Fall_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Custom_Climb
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Slow                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Skip                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Safe                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Custom_Climb(bool Slow, bool Skip, bool Safe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Custom_Climb");

	UMenu_C_Show_Custom_Climb_Params params;
	params.Slow = Slow;
	params.Skip = Skip;
	params.Safe = Safe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Comfort_Custom_Skip_Climb_Off
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Comfort_Custom_Skip_Climb_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Comfort_Custom_Skip_Climb_Off");

	UMenu_C_Comfort_Custom_Skip_Climb_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Comfort_Custom_Slow_Fall_Off
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Comfort_Custom_Slow_Fall_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Comfort_Custom_Slow_Fall_Off");

	UMenu_C_Comfort_Custom_Slow_Fall_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Comfort_Custom_Safe_Climb_On
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Comfort_Custom_Safe_Climb_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Comfort_Custom_Safe_Climb_On");

	UMenu_C_Comfort_Custom_Safe_Climb_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Comfort_Custom_Safe_Climb_Off
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Comfort_Custom_Safe_Climb_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Comfort_Custom_Safe_Climb_Off");

	UMenu_C_Comfort_Custom_Safe_Climb_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Custom_Comfort_Vignette
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           vignette                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Custom_Comfort_Vignette(bool vignette)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Custom_Comfort_Vignette");

	UMenu_C_Show_Custom_Comfort_Vignette_Params params;
	params.vignette = vignette;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Custom_Comfort_Accel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Accel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Custom_Comfort_Accel(bool Accel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Custom_Comfort_Accel");

	UMenu_C_Show_Custom_Comfort_Accel_Params params;
	params.Accel = Accel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Custom_Comfort_Damage_Reduction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DamageOn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Custom_Comfort_Damage_Reduction(bool DamageOn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Custom_Comfort_Damage_Reduction");

	UMenu_C_Show_Custom_Comfort_Damage_Reduction_Params params;
	params.DamageOn = DamageOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Custom_Comfort_Shake
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Shake                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Custom_Comfort_Shake(bool Shake)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Custom_Comfort_Shake");

	UMenu_C_Show_Custom_Comfort_Shake_Params params;
	params.Shake = Shake;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Locomotion_Teleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Teleport                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Locomotion_Teleport(bool Teleport)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Locomotion_Teleport");

	UMenu_C_Show_Locomotion_Teleport_Params params;
	params.Teleport = Teleport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Locomotion_LR_Throttle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Left_Throttle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Locomotion_LR_Throttle(bool Left_Throttle)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Locomotion_LR_Throttle");

	UMenu_C_Show_Locomotion_LR_Throttle_Params params;
	params.Left_Throttle = Left_Throttle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Locomotion_Nav_Rotation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NavRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Locomotion_Nav_Rotation(bool NavRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Locomotion_Nav_Rotation");

	UMenu_C_Show_Locomotion_Nav_Rotation_Params params;
	params.NavRotation = NavRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Locomotion_SnapTurn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SnapTurn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Locomotion_SnapTurn(bool SnapTurn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Locomotion_SnapTurn");

	UMenu_C_Show_Locomotion_SnapTurn_Params params;
	params.SnapTurn = SnapTurn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Chapter_Confirm
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Current_Checkpoint             (BlueprintVisible, BlueprintReadOnly, Parm)

void UMenu_C::Menu_Chapter_Confirm(const struct FText& Current_Checkpoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Chapter_Confirm");

	UMenu_C_Menu_Chapter_Confirm_Params params;
	params.Current_Checkpoint = Current_Checkpoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Audio_Video_Settings
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Audio_Video_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Audio_Video_Settings");

	UMenu_C_Show_Audio_Video_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Video_Settings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Ultra                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Set_Video_Settings(bool Ultra)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Video_Settings");

	UMenu_C_Set_Video_Settings_Params params;
	params.Ultra = Ultra;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Chapter_Select
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current_Level_Selection        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDisableStartNew               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Chapter_Select(int Current_Level_Selection, bool bDisableStartNew)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Chapter_Select");

	UMenu_C_Show_Chapter_Select_Params params;
	params.Current_Level_Selection = Current_Level_Selection;
	params.bDisableStartNew = bDisableStartNew;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Pause_Quit_Return
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Pause_Quit_Return()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Pause_Quit_Return");

	UMenu_C_Menu_Pause_Quit_Return_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Chapter_Select_Episode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Episode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Chapter_Select_Episode(int Episode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Chapter_Select_Episode");

	UMenu_C_Chapter_Select_Episode_Params params;
	params.Episode = Episode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Select_Level
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current_Level_Selection        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Select_Level(int Current_Level_Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Select_Level");

	UMenu_C_Select_Level_Params params;
	params.Current_Level_Selection = Current_Level_Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Level_Image
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current_Level                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Set_Level_Image(int Current_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Level_Image");

	UMenu_C_Set_Level_Image_Params params;
	params.Current_Level = Current_Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Unlocked_Levels
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Current_Level_Selection        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_Unlocked_Levels(int Current_Level_Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Unlocked_Levels");

	UMenu_C_Show_Unlocked_Levels_Params params;
	params.Current_Level_Selection = Current_Level_Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Extras_Trophies_Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Trophies                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Extras_Trophies_Show(bool Show_Trophies)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Extras_Trophies_Show");

	UMenu_C_Extras_Trophies_Show_Params params;
	params.Show_Trophies = Show_Trophies;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Extras_Credits_Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show_Credits                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Extras_Credits_Show(bool Show_Credits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Extras_Credits_Show");

	UMenu_C_Extras_Credits_Show_Params params;
	params.Show_Credits = Show_Credits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Pause
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Pause");

	UMenu_C_Menu_Pause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.TEMP_ShowDojoWaves
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FText>           Unlocked_Levels                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMenu_C::TEMP_ShowDojoWaves(TArray<struct FText> Unlocked_Levels)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.TEMP_ShowDojoWaves");

	UMenu_C_TEMP_ShowDojoWaves_Params params;
	params.Unlocked_Levels = Unlocked_Levels;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Confirm_Quit_Game
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Confirm_Quit_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Confirm_Quit_Game");

	UMenu_C_Menu_Confirm_Quit_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_First_Setup_Comfort_Screen
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_First_Setup_Comfort_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_First_Setup_Comfort_Screen");

	UMenu_C_Show_First_Setup_Comfort_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_left_panel
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_left_panel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_left_panel");

	UMenu_C_Show_left_panel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Left_Menu
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Left_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Left_Menu");

	UMenu_C_Show_Left_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Short_Bars
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Short_Bars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Short_Bars");

	UMenu_C_Short_Bars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Long_Bars
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Long_Bars()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Long_Bars");

	UMenu_C_Long_Bars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Episode_2
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Episode_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Episode_2");

	UMenu_C_Show_Episode_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Locomotion_Teleport
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Locomotion_Teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Locomotion_Teleport");

	UMenu_C_Menu_Locomotion_Teleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Accessibility_Seated_ON
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Accessibility_Seated_ON()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Accessibility_Seated_ON");

	UMenu_C_Menu_Accessibility_Seated_ON_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_all_slots
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_all_slots()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_all_slots");

	UMenu_C_Show_all_slots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Audio_Master
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Current_Volume                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Menu_Audio_Master(float Current_Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Audio_Master");

	UMenu_C_Menu_Audio_Master_Params params;
	params.Current_Volume = Current_Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Episode_3
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Episode_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Episode_3");

	UMenu_C_Show_Episode_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Epsiode_4
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Epsiode_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Epsiode_4");

	UMenu_C_Show_Epsiode_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Menu_Settings
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Menu_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Menu_Settings");

	UMenu_C_Show_Menu_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_Left_Text_Boxes
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_Left_Text_Boxes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_Left_Text_Boxes");

	UMenu_C_Show_Left_Text_Boxes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_MainMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SetStart                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowChapters                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Show_MainMenu(bool SetStart, bool ShowChapters)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_MainMenu");

	UMenu_C_Show_MainMenu_Params params;
	params.SetStart = SetStart;
	params.ShowChapters = ShowChapters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Fade_Bars
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Bar1                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bar2                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bar3                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Bar4                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::Fade_Bars(bool Bar1, bool Bar2, bool Bar3, bool Bar4)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Fade_Bars");

	UMenu_C_Fade_Bars_Params params;
	params.Bar1 = Bar1;
	params.Bar2 = Bar2;
	params.Bar3 = Bar3;
	params.Bar4 = Bar4;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Resume
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Set_Resume()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Resume");

	UMenu_C_Set_Resume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Back
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Set_Back()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Back");

	UMenu_C_Set_Back_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Set_Exit
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Set_Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Set_Exit");

	UMenu_C_Set_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Accessibility_VisualCombatAssist_OFF
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Accessibility_VisualCombatAssist_OFF()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Accessibility_VisualCombatAssist_OFF");

	UMenu_C_Menu_Accessibility_VisualCombatAssist_OFF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Accessibility_VisualCombatAssist_ON
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Accessibility_VisualCombatAssist_ON()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Accessibility_VisualCombatAssist_ON");

	UMenu_C_Menu_Accessibility_VisualCombatAssist_ON_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Show_DemoMenu
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Show_DemoMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Show_DemoMenu");

	UMenu_C_Show_DemoMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Accessibility_360CombatEnabled
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Accessibility_360CombatEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Accessibility_360CombatEnabled");

	UMenu_C_Menu_Accessibility_360CombatEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.Menu_Accessibility_360CombatDisabled
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::Menu_Accessibility_360CombatDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.Menu_Accessibility_360CombatDisabled");

	UMenu_C_Menu_Accessibility_360CombatDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ShowExtendedDojoMenuSettings
// (BlueprintCallable, BlueprintEvent)

void UMenu_C::ShowExtendedDojoMenuSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ShowExtendedDojoMenuSettings");

	UMenu_C_ShowExtendedDojoMenuSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Menu.Menu_C.ExecuteUbergraph_Menu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMenu_C::ExecuteUbergraph_Menu(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu.Menu_C.ExecuteUbergraph_Menu");

	UMenu_C_ExecuteUbergraph_Menu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
