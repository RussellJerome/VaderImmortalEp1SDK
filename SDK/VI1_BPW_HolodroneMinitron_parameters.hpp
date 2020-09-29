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

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.ShowBlankScreen
struct UBPW_HolodroneMinitron_C_ShowBlankScreen_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.FormatTime
struct UBPW_HolodroneMinitron_C_FormatTime_Params
{
	float                                              TotalSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Update UI State
struct UBPW_HolodroneMinitron_C_Update_UI_State_Params
{
	TEnumAsByte<EHolodroneMinitronState>               New_UI_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	TEnumAsByte<EHolodroneMinitronState>               Previous_UI_State;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.InitDynamicColors
struct UBPW_HolodroneMinitron_C_InitDynamicColors_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HandleChangeFontColor
struct UBPW_HolodroneMinitron_C_HandleChangeFontColor_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HandleChangeBackgroundColor
struct UBPW_HolodroneMinitron_C_HandleChangeBackgroundColor_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HandleChangeColorMode
struct UBPW_HolodroneMinitron_C_HandleChangeColorMode_Params
{
	TEnumAsByte<EnemyWaveType>*                        NewColorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Display Rewards Screen
struct UBPW_HolodroneMinitron_C_Display_Rewards_Screen_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Hide Rewards Screen
struct UBPW_HolodroneMinitron_C_Hide_Rewards_Screen_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Display New Reward
struct UBPW_HolodroneMinitron_C_Display_New_Reward_Params
{
	struct FRewardData                                 NewRewardData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsLastReward;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_reward
struct UBPW_HolodroneMinitron_C_SFX_reward_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateMedals
struct UBPW_HolodroneMinitron_C_UpdateMedals_Params
{
	ERating                                            Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayRatings
struct UBPW_HolodroneMinitron_C_DisplayRatings_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_medal_01
struct UBPW_HolodroneMinitron_C_SFX_medal_01_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_medal_02
struct UBPW_HolodroneMinitron_C_SFX_medal_02_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_medal_03
struct UBPW_HolodroneMinitron_C_SFX_medal_03_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Init Medal SFX Queue
struct UBPW_HolodroneMinitron_C_Init_Medal_SFX_Queue_Params
{
	ERating                                            Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateCompletionTimes
struct UBPW_HolodroneMinitron_C_UpdateCompletionTimes_Params
{
	float                                              BestTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FinalTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayBestAndLatestScore
struct UBPW_HolodroneMinitron_C_DisplayBestAndLatestScore_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateHealthScores
struct UBPW_HolodroneMinitron_C_UpdateHealthScores_Params
{
	int                                                BestHealth;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LatestHealth;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateKillCountScores
struct UBPW_HolodroneMinitron_C_UpdateKillCountScores_Params
{
	int                                                BestKillCount;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                LatestKillCount;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateRoundDisplay
struct UBPW_HolodroneMinitron_C_UpdateRoundDisplay_Params
{
	int*                                               RoundNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Display Round
struct UBPW_HolodroneMinitron_C_Display_Round_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Hide Round
struct UBPW_HolodroneMinitron_C_Hide_Round_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayUnleashed
struct UBPW_HolodroneMinitron_C_DisplayUnleashed_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Construct
struct UBPW_HolodroneMinitron_C_Construct_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayUI
struct UBPW_HolodroneMinitron_C_DisplayUI_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HideUI
struct UBPW_HolodroneMinitron_C_HideUI_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Set SFX Locators
struct UBPW_HolodroneMinitron_C_Set_SFX_Locators_Params
{
	class USceneComponent*                             LeftMedalLocator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CenterMedalLocator;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RightMedalLocator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RewardLocator;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.PreConstruct
struct UBPW_HolodroneMinitron_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayFinalMessage
struct UBPW_HolodroneMinitron_C_DisplayFinalMessage_Params
{
};

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.ExecuteUbergraph_BPW_HolodroneMinitron
struct UBPW_HolodroneMinitron_C_ExecuteUbergraph_BPW_HolodroneMinitron_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
