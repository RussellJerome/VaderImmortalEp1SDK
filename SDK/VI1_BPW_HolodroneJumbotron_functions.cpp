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

// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.StopMedalAnimations
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::StopMedalAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.StopMedalAnimations");

	UBPW_HolodroneJumbotron_C_StopMedalAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SetMedalWarningEnabled
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERating                        Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           EnableMedalWarning             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::SetMedalWarningEnabled(ERating Rating, bool EnableMedalWarning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SetMedalWarningEnabled");

	UBPW_HolodroneJumbotron_C_SetMedalWarningEnabled_Params params;
	params.Rating = Rating;
	params.EnableMedalWarning = EnableMedalWarning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SetTimerColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsFinalCountdown               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::SetTimerColor(bool IsFinalCountdown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SetTimerColor");

	UBPW_HolodroneJumbotron_C_SetTimerColor_Params params;
	params.IsFinalCountdown = IsFinalCountdown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SetHealthBarColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsCritical                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::SetHealthBarColor(bool IsCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SetHealthBarColor");

	UBPW_HolodroneJumbotron_C_SetHealthBarColor_Params params;
	params.IsCritical = IsCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.InitDynamicColors
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::InitDynamicColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.InitDynamicColors");

	UBPW_HolodroneJumbotron_C_InitDynamicColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.HandleChangeFontColor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::HandleChangeFontColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.HandleChangeFontColor");

	UBPW_HolodroneJumbotron_C_HandleChangeFontColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.HandleChangeBackgroundColor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::HandleChangeBackgroundColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.HandleChangeBackgroundColor");

	UBPW_HolodroneJumbotron_C_HandleChangeBackgroundColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.HandleChangeColorMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnemyWaveType>*    NewColorMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::HandleChangeColorMode(TEnumAsByte<EnemyWaveType>* NewColorMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.HandleChangeColorMode");

	UBPW_HolodroneJumbotron_C_HandleChangeColorMode_Params params;
	params.NewColorMode = NewColorMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Set SFX Locators
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         HealthBarLocator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TimerLocator                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         LiveRatingLocator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::Set_SFX_Locators(class USceneComponent* HealthBarLocator, class USceneComponent* TimerLocator, class USceneComponent* LiveRatingLocator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Set SFX Locators");

	UBPW_HolodroneJumbotron_C_Set_SFX_Locators_Params params;
	params.HealthBarLocator = HealthBarLocator;
	params.TimerLocator = TimerLocator;
	params.LiveRatingLocator = LiveRatingLocator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_TimerCountdown
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::SFX_TimerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_TimerCountdown");

	UBPW_HolodroneJumbotron_C_SFX_TimerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_LoseHealth
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::SFX_LoseHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_LoseHealth");

	UBPW_HolodroneJumbotron_C_SFX_LoseHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_LoseMedal
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::SFX_LoseMedal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_LoseMedal");

	UBPW_HolodroneJumbotron_C_SFX_LoseMedal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_StartLowHealthWarning
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::SFX_StartLowHealthWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_StartLowHealthWarning");

	UBPW_HolodroneJumbotron_C_SFX_StartLowHealthWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_StopLowHealthWarning
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::SFX_StopLowHealthWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_StopLowHealthWarning");

	UBPW_HolodroneJumbotron_C_SFX_StopLowHealthWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_TimerWarningColor
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::SFX_TimerWarningColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.SFX_TimerWarningColor");

	UBPW_HolodroneJumbotron_C_SFX_TimerWarningColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateRound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Round                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::UpdateRound(int Round)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateRound");

	UBPW_HolodroneJumbotron_C_UpdateRound_Params params;
	params.Round = Round;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time_Seconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::UpdateTime(float Time_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateTime");

	UBPW_HolodroneJumbotron_C_UpdateTime_Params params;
	params.Time_Seconds = Time_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Construct");

	UBPW_HolodroneJumbotron_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.ResetLiveRating
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::ResetLiveRating()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.ResetLiveRating");

	UBPW_HolodroneJumbotron_C_ResetLiveRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Close_Jumbotron
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::Close_Jumbotron()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Close_Jumbotron");

	UBPW_HolodroneJumbotron_C_Close_Jumbotron_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Open_Jumbotron
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::Open_Jumbotron()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Open_Jumbotron");

	UBPW_HolodroneJumbotron_C_Open_Jumbotron_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Open__Jumbo
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::Open__Jumbo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Open__Jumbo");

	UBPW_HolodroneJumbotron_C_Open__Jumbo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Close__Jumbo
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::Close__Jumbo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.Close__Jumbo");

	UBPW_HolodroneJumbotron_C_Close__Jumbo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdatePlayerHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewHealth                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::UpdatePlayerHealth(int NewHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdatePlayerHealth");

	UBPW_HolodroneJumbotron_C_UpdatePlayerHealth_Params params;
	params.NewHealth = NewHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateLiveRating
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERating                        Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::UpdateLiveRating(ERating Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateLiveRating");

	UBPW_HolodroneJumbotron_C_UpdateLiveRating_Params params;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateKillCount
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewKillCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::UpdateKillCount(int NewKillCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.UpdateKillCount");

	UBPW_HolodroneJumbotron_C_UpdateKillCount_Params params;
	params.NewKillCount = NewKillCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.PreConstruct");

	UBPW_HolodroneJumbotron_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.ResetMedalColors
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneJumbotron_C::ResetMedalColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.ResetMedalColors");

	UBPW_HolodroneJumbotron_C_ResetMedalColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.ExecuteUbergraph_BPW_HolodroneJumbotron
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneJumbotron_C::ExecuteUbergraph_BPW_HolodroneJumbotron(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneJumbotron.BPW_HolodroneJumbotron_C.ExecuteUbergraph_BPW_HolodroneJumbotron");

	UBPW_HolodroneJumbotron_C_ExecuteUbergraph_BPW_HolodroneJumbotron_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
