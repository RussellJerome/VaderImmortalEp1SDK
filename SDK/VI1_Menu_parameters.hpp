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

// Function Menu.Menu_C.Show_ExtendedDojo_AccessibilityScreen
struct UMenu_C_Show_ExtendedDojo_AccessibilityScreen_Params
{
	struct FAccessibilitySettings                      Accessibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu.Menu_C.RestoreFontSizes
struct UMenu_C_RestoreFontSizes_Params
{
	TMap<class UTextBlock*, int>                       SlotsToRestore;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Menu.Menu_C.ModifyFontSize
struct UMenu_C_ModifyFontSize_Params
{
	class UTextBlock*                                  Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                NewFontSize;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<TEnumAsByte<ESupportedLanguages>>           LanguagesForModification;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu.Menu_C.ShowLocalizationMenu
struct UMenu_C_ShowLocalizationMenu_Params
{
};

// Function Menu.Menu_C.CreateLocalizationMenuWidget
struct UMenu_C_CreateLocalizationMenuWidget_Params
{
	class UBPW_LocalizationMenu_C*                     LocalizationMenu;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Menu.Menu_C.Handle Dot and Selected Indicator
struct UMenu_C_Handle_Dot_and_Selected_Indicator_Params
{
	bool                                               Filled_In_Dot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Off;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       text;                                                     // (Parm, OutParm)
};

// Function Menu.Menu_C.HideAllSlots
struct UMenu_C_HideAllSlots_Params
{
};

// Function Menu.Menu_C.Show_ExtendedDojo_Settings_Screen
struct UMenu_C_Show_ExtendedDojo_Settings_Screen_Params
{
};

// Function Menu.Menu_C.DisableActiveWaveIndicator
struct UMenu_C_DisableActiveWaveIndicator_Params
{
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.SetActiveRewardTabIndicator
struct UMenu_C_SetActiveRewardTabIndicator_Params
{
	ERewardType                                        RewardType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.ChangeActiveRewardByType
struct UMenu_C_ChangeActiveRewardByType_Params
{
	int                                                NewActiveRewardIndex;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PreviousActiveRewardIndex;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERewardType                                        RewardType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.EnableActiveWaveIndicator
struct UMenu_C_EnableActiveWaveIndicator_Params
{
	int                                                NewActiveWaveIndex;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.HideConfirmRewardButton
struct UMenu_C_HideConfirmRewardButton_Params
{
};

// Function Menu.Menu_C.ShowConfirmRewardButton
struct UMenu_C_ShowConfirmRewardButton_Params
{
	bool                                               IsButtonEnabled;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.SetRewardPreview
struct UMenu_C_SetRewardPreview_Params
{
	bool                                               UsePreviewIcon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Description;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Menu.Menu_C.Show_DemoPause_Menu
struct UMenu_C_Show_DemoPause_Menu_Params
{
};

// Function Menu.Menu_C.SetNumMedals
struct UMenu_C_SetNumMedals_Params
{
	int                                                CurrentNumMedals;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                TotalNumMedals;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.DeselectDojoReward
struct UMenu_C_DeselectDojoReward_Params
{
	ERewardType                                        RewardType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reward_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.SetKyberCrystalCompatibility
struct UMenu_C_SetKyberCrystalCompatibility_Params
{
	struct FName                                       LightsaberName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       KyberCrystalName;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                KyberCrystalIndex;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsCompatibleWithLightsaber;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.UpdateWaveStatus
struct UMenu_C_UpdateWaveStatus_Params
{
	class UBPW_DojoWave_C*                             WaveItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERating                                            Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.CreateWaveWidget
struct UMenu_C_CreateWaveWidget_Params
{
	struct FString                                     WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERating                                            CurrentRating;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.UpdateWaveStatusByIndex
struct UMenu_C_UpdateWaveStatusByIndex_Params
{
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERating                                            Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.UpdateRewardByType
struct UMenu_C_UpdateRewardByType_Params
{
	ERewardType                                        RewardType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                RewardIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RewardName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UnlockHint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Menu.Menu_C.InitScrollBox
struct UMenu_C_InitScrollBox_Params
{
	class UScrollBox*                                  ScrollBox;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UBPW_SelectableItem_C*>               SelectableRewards;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu.Menu_C.UpdateRewardStatus
struct UMenu_C_UpdateRewardStatus_Params
{
	class UBPW_SelectableItem_C*                       SelectableReward;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     RewardName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UnlockHint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Menu.Menu_C.SwitchRewardTab
struct UMenu_C_SwitchRewardTab_Params
{
	ERewardType                                        RewardType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SelectedRewardIndex;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.CreateRewardWidget
struct UMenu_C_CreateRewardWidget_Params
{
	ERewardType                                        RewardType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     RewardName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               IsUnlocked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UnlockHint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function Menu.Menu_C.SelectDojoWave
struct UMenu_C_SelectDojoWave_Params
{
	int                                                Wave_Index;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDescendantScrollDestination                       ScrollDestination;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.SelectDojoReward
struct UMenu_C_SelectDojoReward_Params
{
	int                                                Reward_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ERewardType                                        RewardType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EDescendantScrollDestination                       ScrollDestination;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.ShowDojoRewardsMenu
struct UMenu_C_ShowDojoRewardsMenu_Params
{
};

// Function Menu.Menu_C.SetChapterText
struct UMenu_C_SetChapterText_Params
{
	TArray<struct FText>                               ChapterDisplayText;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu.Menu_C.SelectScrollBoxItem
struct UMenu_C_SelectScrollBoxItem_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UBPW_SelectableItem_C*                       LastSelectedItem;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UScrollBox*                                  ScrollBox;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EDescendantScrollDestination                       ScrollDestination;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	class UBPW_SelectableItem_C*                       CurrentSelectedItem;                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Menu.Menu_C.ShowDojoMenu
struct UMenu_C_ShowDojoMenu_Params
{
	bool                                               bUnlockAll;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseMainMenuVersion;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_First_Comfort_Screen
struct UMenu_C_Show_First_Comfort_Screen_Params
{
};

// Function Menu.Menu_C.Show_Select_Episode
struct UMenu_C_Show_Select_Episode_Params
{
	int                                                Episode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Quit_Game
struct UMenu_C_Show_Quit_Game_Params
{
};

// Function Menu.Menu_C.Set_Credits_Setting
struct UMenu_C_Set_Credits_Setting_Params
{
	bool                                               Show_Credits;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Set_Trophy_Setting
struct UMenu_C_Set_Trophy_Setting_Params
{
	bool                                               Show_Trophies;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Extras_Screen
struct UMenu_C_Show_Extras_Screen_Params
{
	bool                                               Show_Trophies;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Show_Credits;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Select_Episode
struct UMenu_C_Select_Episode_Params
{
	int                                                Episode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Chapter_Select_Screen
struct UMenu_C_Show_Chapter_Select_Screen_Params
{
	int                                                Current_Level_Selection;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableStartNew;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Set_Video_Setting
struct UMenu_C_Set_Video_Setting_Params
{
	struct FAudioVideoSettings                         Audio_Video_Settings;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu.Menu_C.Show_AudioVideo_Settings
struct UMenu_C_Show_AudioVideo_Settings_Params
{
};

// Function Menu.Menu_C.Show_Extras_Menu
struct UMenu_C_Show_Extras_Menu_Params
{
	bool                                               Dojo_open;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Locomotion_Teleport_Throttle
struct UMenu_C_Show_Locomotion_Teleport_Throttle_Params
{
	bool                                               Teleport;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELocomotionScreenSelect>               ScreenSelect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Pause_Quit
struct UMenu_C_Show_Pause_Quit_Params
{
};

// Function Menu.Menu_C.Show_Chapter_Confirm
struct UMenu_C_Show_Chapter_Confirm_Params
{
	struct FText                                       Current_Checkpoint;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu.Menu_C.Show_Confirm_Recent_Checkpoint
struct UMenu_C_Show_Confirm_Recent_Checkpoint_Params
{
};

// Function Menu.Menu_C.Show_Pause_Menu
struct UMenu_C_Show_Pause_Menu_Params
{
};

// Function Menu.Menu_C.Show_Custom_Comfort_Screen
struct UMenu_C_Show_Custom_Comfort_Screen_Params
{
	TEnumAsByte<ECustomComfortSelect>                  CustomComfortSetting;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Comfort_Climb_Screen
struct UMenu_C_Show_Comfort_Climb_Screen_Params
{
	bool                                               Slow_Fall;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Skip_Climb;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Safe_Climb;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Comfort_Screen
struct UMenu_C_Show_Comfort_Screen_Params
{
	EComfortLevelEnum                                  Comfort_Setting;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Accessibility_Screen
struct UMenu_C_Show_Accessibility_Screen_Params
{
	struct FAccessibilitySettings                      Accessibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu.Menu_C.Show_Audio_Screen
struct UMenu_C_Show_Audio_Screen_Params
{
	float                                              Current_Volume;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_MainMenu_Screen
struct UMenu_C_Show_MainMenu_Screen_Params
{
	bool                                               SetStart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowChapters;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Settings_Screen
struct UMenu_C_Show_Settings_Screen_Params
{
};

// Function Menu.Menu_C.Set_Locomotion_Setting
struct UMenu_C_Set_Locomotion_Setting_Params
{
	ELocomotionModeEnum                                Locomotion;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Set_Accessibility_Setting
struct UMenu_C_Set_Accessibility_Setting_Params
{
	struct FAccessibilitySettings                      Accessibility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu.Menu_C.Set_Audio_Setting
struct UMenu_C_Set_Audio_Setting_Params
{
	ESoundChannel                                      Audio_Setting;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Volume;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Set_Comfort_Setting
struct UMenu_C_Set_Comfort_Setting_Params
{
	EComfortLevelEnum                                  Comfort_Setting;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Menu_Extras
struct UMenu_C_Menu_Extras_Params
{
	bool                                               Dojo_open;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Construct
struct UMenu_C_Construct_Params
{
};

// Function Menu.Menu_C.Menu_Comfort_Standard
struct UMenu_C_Menu_Comfort_Standard_Params
{
};

// Function Menu.Menu_C.Menu_Comfort_Comfortable
struct UMenu_C_Menu_Comfort_Comfortable_Params
{
};

// Function Menu.Menu_C.Menu_Comfort_Custom_Show
struct UMenu_C_Menu_Comfort_Custom_Show_Params
{
};

// Function Menu.Menu_C.Menu_Audio_Voice
struct UMenu_C_Menu_Audio_Voice_Params
{
	float                                              Current_Volume;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Menu_Audio_Music
struct UMenu_C_Menu_Audio_Music_Params
{
	float                                              Current_Volume;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Menu_Audio_FX
struct UMenu_C_Menu_Audio_FX_Params
{
	float                                              Current_Volume;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Menu_Accessibility_Seated_OFF
struct UMenu_C_Menu_Accessibility_Seated_OFF_Params
{
};

// Function Menu.Menu_C.Menu_Locomotion_Throttle
struct UMenu_C_Menu_Locomotion_Throttle_Params
{
};

// Function Menu.Menu_C.Set_Volume_Level
struct UMenu_C_Set_Volume_Level_Params
{
	float                                              Current_Volume;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Accessibility
struct UMenu_C_Show_Accessibility_Params
{
};

// Function Menu.Menu_C.Menu_Comfort_Custom_Climb_Show
struct UMenu_C_Menu_Comfort_Custom_Climb_Show_Params
{
};

// Function Menu.Menu_C.Show_Comfort
struct UMenu_C_Show_Comfort_Params
{
	EComfortLevelEnum                                  Comfort_Settings;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Menu_Confirm_Resume_From_Checkpoint
struct UMenu_C_Menu_Confirm_Resume_From_Checkpoint_Params
{
};

// Function Menu.Menu_C.Comfort_Custom_Skip_Climb_On
struct UMenu_C_Comfort_Custom_Skip_Climb_On_Params
{
};

// Function Menu.Menu_C.Comfort_Custom_Slow_Fall_On
struct UMenu_C_Comfort_Custom_Slow_Fall_On_Params
{
};

// Function Menu.Menu_C.Show_Custom_Climb
struct UMenu_C_Show_Custom_Climb_Params
{
	bool                                               Slow;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Skip;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Safe;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Comfort_Custom_Skip_Climb_Off
struct UMenu_C_Comfort_Custom_Skip_Climb_Off_Params
{
};

// Function Menu.Menu_C.Comfort_Custom_Slow_Fall_Off
struct UMenu_C_Comfort_Custom_Slow_Fall_Off_Params
{
};

// Function Menu.Menu_C.Comfort_Custom_Safe_Climb_On
struct UMenu_C_Comfort_Custom_Safe_Climb_On_Params
{
};

// Function Menu.Menu_C.Comfort_Custom_Safe_Climb_Off
struct UMenu_C_Comfort_Custom_Safe_Climb_Off_Params
{
};

// Function Menu.Menu_C.Show_Custom_Comfort_Vignette
struct UMenu_C_Show_Custom_Comfort_Vignette_Params
{
	bool                                               vignette;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Custom_Comfort_Accel
struct UMenu_C_Show_Custom_Comfort_Accel_Params
{
	bool                                               Accel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Custom_Comfort_Damage_Reduction
struct UMenu_C_Show_Custom_Comfort_Damage_Reduction_Params
{
	bool                                               DamageOn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Custom_Comfort_Shake
struct UMenu_C_Show_Custom_Comfort_Shake_Params
{
	bool                                               Shake;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Locomotion_Teleport
struct UMenu_C_Show_Locomotion_Teleport_Params
{
	bool                                               Teleport;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Locomotion_LR_Throttle
struct UMenu_C_Show_Locomotion_LR_Throttle_Params
{
	bool                                               Left_Throttle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Locomotion_Nav_Rotation
struct UMenu_C_Show_Locomotion_Nav_Rotation_Params
{
	bool                                               NavRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Locomotion_SnapTurn
struct UMenu_C_Show_Locomotion_SnapTurn_Params
{
	bool                                               SnapTurn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Menu_Chapter_Confirm
struct UMenu_C_Menu_Chapter_Confirm_Params
{
	struct FText                                       Current_Checkpoint;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu.Menu_C.Show_Audio_Video_Settings
struct UMenu_C_Show_Audio_Video_Settings_Params
{
};

// Function Menu.Menu_C.Set_Video_Settings
struct UMenu_C_Set_Video_Settings_Params
{
	bool                                               Ultra;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Chapter_Select
struct UMenu_C_Show_Chapter_Select_Params
{
	int                                                Current_Level_Selection;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableStartNew;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Menu_Pause_Quit_Return
struct UMenu_C_Menu_Pause_Quit_Return_Params
{
};

// Function Menu.Menu_C.Chapter_Select_Episode
struct UMenu_C_Chapter_Select_Episode_Params
{
	int                                                Episode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Select_Level
struct UMenu_C_Select_Level_Params
{
	int                                                Current_Level_Selection;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Set_Level_Image
struct UMenu_C_Set_Level_Image_Params
{
	int                                                Current_Level;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Unlocked_Levels
struct UMenu_C_Show_Unlocked_Levels_Params
{
	int                                                Current_Level_Selection;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Extras_Trophies_Show
struct UMenu_C_Extras_Trophies_Show_Params
{
	bool                                               Show_Trophies;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Extras_Credits_Show
struct UMenu_C_Extras_Credits_Show_Params
{
	bool                                               Show_Credits;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Menu_Pause
struct UMenu_C_Menu_Pause_Params
{
};

// Function Menu.Menu_C.TEMP_ShowDojoWaves
struct UMenu_C_TEMP_ShowDojoWaves_Params
{
	TArray<struct FText>                               Unlocked_Levels;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu.Menu_C.Menu_Confirm_Quit_Game
struct UMenu_C_Menu_Confirm_Quit_Game_Params
{
};

// Function Menu.Menu_C.Show_First_Setup_Comfort_Screen
struct UMenu_C_Show_First_Setup_Comfort_Screen_Params
{
};

// Function Menu.Menu_C.Show_left_panel
struct UMenu_C_Show_left_panel_Params
{
};

// Function Menu.Menu_C.Show_Left_Menu
struct UMenu_C_Show_Left_Menu_Params
{
};

// Function Menu.Menu_C.Short_Bars
struct UMenu_C_Short_Bars_Params
{
};

// Function Menu.Menu_C.Long_Bars
struct UMenu_C_Long_Bars_Params
{
};

// Function Menu.Menu_C.Show_Episode_2
struct UMenu_C_Show_Episode_2_Params
{
};

// Function Menu.Menu_C.Menu_Locomotion_Teleport
struct UMenu_C_Menu_Locomotion_Teleport_Params
{
};

// Function Menu.Menu_C.Menu_Accessibility_Seated_ON
struct UMenu_C_Menu_Accessibility_Seated_ON_Params
{
};

// Function Menu.Menu_C.Show_all_slots
struct UMenu_C_Show_all_slots_Params
{
};

// Function Menu.Menu_C.Menu_Audio_Master
struct UMenu_C_Menu_Audio_Master_Params
{
	float                                              Current_Volume;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Show_Episode_3
struct UMenu_C_Show_Episode_3_Params
{
};

// Function Menu.Menu_C.Show_Epsiode_4
struct UMenu_C_Show_Epsiode_4_Params
{
};

// Function Menu.Menu_C.Show_Menu_Settings
struct UMenu_C_Show_Menu_Settings_Params
{
};

// Function Menu.Menu_C.Show_Left_Text_Boxes
struct UMenu_C_Show_Left_Text_Boxes_Params
{
};

// Function Menu.Menu_C.Show_MainMenu
struct UMenu_C_Show_MainMenu_Params
{
	bool                                               SetStart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowChapters;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Fade_Bars
struct UMenu_C_Fade_Bars_Params
{
	bool                                               Bar1;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bar2;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bar3;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Bar4;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Menu.Menu_C.Set_Resume
struct UMenu_C_Set_Resume_Params
{
};

// Function Menu.Menu_C.Set_Back
struct UMenu_C_Set_Back_Params
{
};

// Function Menu.Menu_C.Set_Exit
struct UMenu_C_Set_Exit_Params
{
};

// Function Menu.Menu_C.Menu_Accessibility_VisualCombatAssist_OFF
struct UMenu_C_Menu_Accessibility_VisualCombatAssist_OFF_Params
{
};

// Function Menu.Menu_C.Menu_Accessibility_VisualCombatAssist_ON
struct UMenu_C_Menu_Accessibility_VisualCombatAssist_ON_Params
{
};

// Function Menu.Menu_C.Show_DemoMenu
struct UMenu_C_Show_DemoMenu_Params
{
};

// Function Menu.Menu_C.Menu_Accessibility_360CombatEnabled
struct UMenu_C_Menu_Accessibility_360CombatEnabled_Params
{
};

// Function Menu.Menu_C.Menu_Accessibility_360CombatDisabled
struct UMenu_C_Menu_Accessibility_360CombatDisabled_Params
{
};

// Function Menu.Menu_C.ShowExtendedDojoMenuSettings
struct UMenu_C_ShowExtendedDojoMenuSettings_Params
{
};

// Function Menu.Menu_C.ExecuteUbergraph_Menu
struct UMenu_C_ExecuteUbergraph_Menu_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
