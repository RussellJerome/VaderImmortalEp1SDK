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

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.StopMedalAnimations
struct UBPW_HolodroneJumbotron_C_StopMedalAnimations_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SetMedalWarningEnabled
struct UBPW_HolodroneJumbotron_C_SetMedalWarningEnabled_Params
{
	ERating                                            Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               EnableMedalWarning;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SetTimerColor
struct UBPW_HolodroneJumbotron_C_SetTimerColor_Params
{
	bool                                               IsFinalCountdown;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SetHealthBarColor
struct UBPW_HolodroneJumbotron_C_SetHealthBarColor_Params
{
	bool                                               IsCritical;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.InitDynamicColors
struct UBPW_HolodroneJumbotron_C_InitDynamicColors_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.HandleChangeFontColor
struct UBPW_HolodroneJumbotron_C_HandleChangeFontColor_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.HandleChangeBackgroundColor
struct UBPW_HolodroneJumbotron_C_HandleChangeBackgroundColor_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.HandleChangeColorMode
struct UBPW_HolodroneJumbotron_C_HandleChangeColorMode_Params
{
	TEnumAsByte<EnemyWaveType>*                        NewColorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Set SFX Locators
struct UBPW_HolodroneJumbotron_C_Set_SFX_Locators_Params
{
	class USceneComponent*                             HealthBarLocator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TimerLocator;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LiveRatingLocator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_TimerCountdown
struct UBPW_HolodroneJumbotron_C_SFX_TimerCountdown_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_LoseHealth
struct UBPW_HolodroneJumbotron_C_SFX_LoseHealth_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_LoseMedal
struct UBPW_HolodroneJumbotron_C_SFX_LoseMedal_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_StartLowHealthWarning
struct UBPW_HolodroneJumbotron_C_SFX_StartLowHealthWarning_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_StopLowHealthWarning
struct UBPW_HolodroneJumbotron_C_SFX_StopLowHealthWarning_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_TimerWarningColor
struct UBPW_HolodroneJumbotron_C_SFX_TimerWarningColor_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateRound
struct UBPW_HolodroneJumbotron_C_UpdateRound_Params
{
	int                                                Round;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateTime
struct UBPW_HolodroneJumbotron_C_UpdateTime_Params
{
	float                                              Time_Seconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Construct
struct UBPW_HolodroneJumbotron_C_Construct_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.ResetLiveRating
struct UBPW_HolodroneJumbotron_C_ResetLiveRating_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Close_Jumbotron
struct UBPW_HolodroneJumbotron_C_Close_Jumbotron_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Open_Jumbotron
struct UBPW_HolodroneJumbotron_C_Open_Jumbotron_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Open__Jumbo
struct UBPW_HolodroneJumbotron_C_Open__Jumbo_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Close__Jumbo
struct UBPW_HolodroneJumbotron_C_Close__Jumbo_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdatePlayerHealth
struct UBPW_HolodroneJumbotron_C_UpdatePlayerHealth_Params
{
	int                                                NewHealth;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateLiveRating
struct UBPW_HolodroneJumbotron_C_UpdateLiveRating_Params
{
	ERating                                            Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateKillCount
struct UBPW_HolodroneJumbotron_C_UpdateKillCount_Params
{
	int                                                NewKillCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.PreConstruct
struct UBPW_HolodroneJumbotron_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.ResetMedalColors
struct UBPW_HolodroneJumbotron_C_ResetMedalColors_Params
{
};

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.ExecuteUbergraph_BPW_HolodroneJumbotron
struct UBPW_HolodroneJumbotron_C_ExecuteUbergraph_BPW_HolodroneJumbotron_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
