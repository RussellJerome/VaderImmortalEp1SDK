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

// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.ShowBlankScreen
// (Private, BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::ShowBlankScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.ShowBlankScreen");

	UBPW_HolodroneMinitron_C_ShowBlankScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.FormatTime
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          TotalSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBPW_HolodroneMinitron_C::FormatTime(float TotalSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.FormatTime");

	UBPW_HolodroneMinitron_C_FormatTime_Params params;
	params.TotalSeconds = TotalSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Update UI State
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EHolodroneMinitronState> New_UI_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// TEnumAsByte<EHolodroneMinitronState> Previous_UI_State              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool UBPW_HolodroneMinitron_C::Update_UI_State(TEnumAsByte<EHolodroneMinitronState> New_UI_State, TEnumAsByte<EHolodroneMinitronState>* Previous_UI_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Update UI State");

	UBPW_HolodroneMinitron_C_Update_UI_State_Params params;
	params.New_UI_State = New_UI_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Previous_UI_State != nullptr)
		*Previous_UI_State = params.Previous_UI_State;

	return params.ReturnValue;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.InitDynamicColors
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::InitDynamicColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.InitDynamicColors");

	UBPW_HolodroneMinitron_C_InitDynamicColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HandleChangeFontColor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_HolodroneMinitron_C::HandleChangeFontColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HandleChangeFontColor");

	UBPW_HolodroneMinitron_C_HandleChangeFontColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HandleChangeBackgroundColor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_HolodroneMinitron_C::HandleChangeBackgroundColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HandleChangeBackgroundColor");

	UBPW_HolodroneMinitron_C_HandleChangeBackgroundColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HandleChangeColorMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnemyWaveType>*    NewColorMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneMinitron_C::HandleChangeColorMode(TEnumAsByte<EnemyWaveType>* NewColorMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HandleChangeColorMode");

	UBPW_HolodroneMinitron_C_HandleChangeColorMode_Params params;
	params.NewColorMode = NewColorMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Display Rewards Screen
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::Display_Rewards_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Display Rewards Screen");

	UBPW_HolodroneMinitron_C_Display_Rewards_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Hide Rewards Screen
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::Hide_Rewards_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Hide Rewards Screen");

	UBPW_HolodroneMinitron_C_Hide_Rewards_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Display New Reward
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRewardData             NewRewardData                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsLastReward                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneMinitron_C::Display_New_Reward(const struct FRewardData& NewRewardData, bool IsLastReward)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Display New Reward");

	UBPW_HolodroneMinitron_C_Display_New_Reward_Params params;
	params.NewRewardData = NewRewardData;
	params.IsLastReward = IsLastReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_reward
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::SFX_reward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_reward");

	UBPW_HolodroneMinitron_C_SFX_reward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateMedals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERating                        Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneMinitron_C::UpdateMedals(ERating Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateMedals");

	UBPW_HolodroneMinitron_C_UpdateMedals_Params params;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayRatings
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::DisplayRatings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayRatings");

	UBPW_HolodroneMinitron_C_DisplayRatings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_medal_01
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::SFX_medal_01()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_medal_01");

	UBPW_HolodroneMinitron_C_SFX_medal_01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_medal_02
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::SFX_medal_02()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_medal_02");

	UBPW_HolodroneMinitron_C_SFX_medal_02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_medal_03
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::SFX_medal_03()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.SFX_medal_03");

	UBPW_HolodroneMinitron_C_SFX_medal_03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Init Medal SFX Queue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERating                        Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneMinitron_C::Init_Medal_SFX_Queue(ERating Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Init Medal SFX Queue");

	UBPW_HolodroneMinitron_C_Init_Medal_SFX_Queue_Params params;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateCompletionTimes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BestTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FinalTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneMinitron_C::UpdateCompletionTimes(float BestTime, float FinalTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateCompletionTimes");

	UBPW_HolodroneMinitron_C_UpdateCompletionTimes_Params params;
	params.BestTime = BestTime;
	params.FinalTime = FinalTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayBestAndLatestScore
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::DisplayBestAndLatestScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayBestAndLatestScore");

	UBPW_HolodroneMinitron_C_DisplayBestAndLatestScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateHealthScores
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BestHealth                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LatestHealth                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneMinitron_C::UpdateHealthScores(int BestHealth, int LatestHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateHealthScores");

	UBPW_HolodroneMinitron_C_UpdateHealthScores_Params params;
	params.BestHealth = BestHealth;
	params.LatestHealth = LatestHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateKillCountScores
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BestKillCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            LatestKillCount                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneMinitron_C::UpdateKillCountScores(int BestKillCount, int LatestKillCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateKillCountScores");

	UBPW_HolodroneMinitron_C_UpdateKillCountScores_Params params;
	params.BestKillCount = BestKillCount;
	params.LatestKillCount = LatestKillCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateRoundDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           RoundNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneMinitron_C::UpdateRoundDisplay(int* RoundNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.UpdateRoundDisplay");

	UBPW_HolodroneMinitron_C_UpdateRoundDisplay_Params params;
	params.RoundNumber = RoundNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Display Round
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::Display_Round()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Display Round");

	UBPW_HolodroneMinitron_C_Display_Round_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Hide Round
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::Hide_Round()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Hide Round");

	UBPW_HolodroneMinitron_C_Hide_Round_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayUnleashed
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::DisplayUnleashed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayUnleashed");

	UBPW_HolodroneMinitron_C_DisplayUnleashed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_HolodroneMinitron_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Construct");

	UBPW_HolodroneMinitron_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayUI
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::DisplayUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayUI");

	UBPW_HolodroneMinitron_C_DisplayUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HideUI
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::HideUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.HideUI");

	UBPW_HolodroneMinitron_C_HideUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Set SFX Locators
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         LeftMedalLocator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         CenterMedalLocator             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         RightMedalLocator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         RewardLocator                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_HolodroneMinitron_C::Set_SFX_Locators(class USceneComponent* LeftMedalLocator, class USceneComponent* CenterMedalLocator, class USceneComponent* RightMedalLocator, class USceneComponent* RewardLocator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.Set SFX Locators");

	UBPW_HolodroneMinitron_C_Set_SFX_Locators_Params params;
	params.LeftMedalLocator = LeftMedalLocator;
	params.CenterMedalLocator = CenterMedalLocator;
	params.RightMedalLocator = RightMedalLocator;
	params.RewardLocator = RewardLocator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneMinitron_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.PreConstruct");

	UBPW_HolodroneMinitron_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayFinalMessage
// (BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneMinitron_C::DisplayFinalMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.DisplayFinalMessage");

	UBPW_HolodroneMinitron_C_DisplayFinalMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.ExecuteUbergraph_BPW_HolodroneMinitron
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneMinitron_C::ExecuteUbergraph_BPW_HolodroneMinitron(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneMinitron.BPW_HolodroneMinitron_C.ExecuteUbergraph_BPW_HolodroneMinitron");

	UBPW_HolodroneMinitron_C_ExecuteUbergraph_BPW_HolodroneMinitron_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
