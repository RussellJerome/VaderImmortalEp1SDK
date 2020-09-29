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

// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ChangeColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnemyWaveType>     NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneMinitronComponent_C::ChangeColors(TEnumAsByte<EnemyWaveType> NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ChangeColors");

	UBP_HolodroneMinitronComponent_C_ChangeColors_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.CanShowFinalMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_HolodroneMinitronComponent_C::CanShowFinalMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.CanShowFinalMessage");

	UBP_HolodroneMinitronComponent_C_CanShowFinalMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetFinalMessageAnimDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_HolodroneMinitronComponent_C::GetFinalMessageAnimDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetFinalMessageAnimDuration");

	UBP_HolodroneMinitronComponent_C_GetFinalMessageAnimDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetHealthLevelRequiredForGold
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_HolodroneMinitronComponent_C::GetHealthLevelRequiredForGold()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetHealthLevelRequiredForGold");

	UBP_HolodroneMinitronComponent_C_GetHealthLevelRequiredForGold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetKillsRequiredForGold
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBP_HolodroneMinitronComponent_C::GetKillsRequiredForGold()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetKillsRequiredForGold");

	UBP_HolodroneMinitronComponent_C_GetKillsRequiredForGold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetTimeRequiredForGold
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_HolodroneMinitronComponent_C::GetTimeRequiredForGold()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetTimeRequiredForGold");

	UBP_HolodroneMinitronComponent_C_GetTimeRequiredForGold_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetUnleashedAnimDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_HolodroneMinitronComponent_C::GetUnleashedAnimDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetUnleashedAnimDuration");

	UBP_HolodroneMinitronComponent_C_GetUnleashedAnimDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetRatingsAnimDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_HolodroneMinitronComponent_C::GetRatingsAnimDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetRatingsAnimDuration");

	UBP_HolodroneMinitronComponent_C_GetRatingsAnimDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.Close UI Anim Duration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_HolodroneMinitronComponent_C::Close_UI_Anim_Duration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.Close UI Anim Duration");

	UBP_HolodroneMinitronComponent_C_Close_UI_Anim_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetRoundAnimDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_HolodroneMinitronComponent_C::GetRoundAnimDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetRoundAnimDuration");

	UBP_HolodroneMinitronComponent_C_GetRoundAnimDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetScoresAnimDuration
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_HolodroneMinitronComponent_C::GetScoresAnimDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.GetScoresAnimDuration");

	UBP_HolodroneMinitronComponent_C_GetScoresAnimDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.HideRewards
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::HideRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.HideRewards");

	UBP_HolodroneMinitronComponent_C_HideRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowNewReward
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::ShowNewReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowNewReward");

	UBP_HolodroneMinitronComponent_C_ShowNewReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowRatings
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::ShowRatings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowRatings");

	UBP_HolodroneMinitronComponent_C_ShowRatings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.HideRatings
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::HideRatings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.HideRatings");

	UBP_HolodroneMinitronComponent_C_HideRatings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowRewards
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::ShowRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowRewards");

	UBP_HolodroneMinitronComponent_C_ShowRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowBestAndLatestScore
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::ShowBestAndLatestScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowBestAndLatestScore");

	UBP_HolodroneMinitronComponent_C_ShowBestAndLatestScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowFinalMessage
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::ShowFinalMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowFinalMessage");

	UBP_HolodroneMinitronComponent_C_ShowFinalMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ReceiveBeginPlay");

	UBP_HolodroneMinitronComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.InitMinitron
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         LeftMedalLocator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         CenterMedalLocator             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         RightMedalLocator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         RewardLocator                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMeshComponent*    BackgroundMesh                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_HolodroneMinitronComponent_C::InitMinitron(class USceneComponent* LeftMedalLocator, class USceneComponent* CenterMedalLocator, class USceneComponent* RightMedalLocator, class USceneComponent* RewardLocator, class UStaticMeshComponent* BackgroundMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.InitMinitron");

	UBP_HolodroneMinitronComponent_C_InitMinitron_Params params;
	params.LeftMedalLocator = LeftMedalLocator;
	params.CenterMedalLocator = CenterMedalLocator;
	params.RightMedalLocator = RightMedalLocator;
	params.RewardLocator = RewardLocator;
	params.BackgroundMesh = BackgroundMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.HideMinitron
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::HideMinitron()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.HideMinitron");

	UBP_HolodroneMinitronComponent_C_HideMinitron_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowMinitron
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::ShowMinitron()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowMinitron");

	UBP_HolodroneMinitronComponent_C_ShowMinitron_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowRoundNumber
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentRoundNumber             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EnemyWaveType>     WaveType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneMinitronComponent_C::ShowRoundNumber(int CurrentRoundNumber, TEnumAsByte<EnemyWaveType> WaveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ShowRoundNumber");

	UBP_HolodroneMinitronComponent_C_ShowRoundNumber_Params params;
	params.CurrentRoundNumber = CurrentRoundNumber;
	params.WaveType = WaveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.Show Unleashed
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::Show_Unleashed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.Show Unleashed");

	UBP_HolodroneMinitronComponent_C_Show_Unleashed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ExecuteUbergraph_BP_HolodroneMinitronComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneMinitronComponent_C::ExecuteUbergraph_BP_HolodroneMinitronComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.ExecuteUbergraph_BP_HolodroneMinitronComponent");

	UBP_HolodroneMinitronComponent_C_ExecuteUbergraph_BP_HolodroneMinitronComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.OnAllRewardsDisplayed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_HolodroneMinitronComponent_C::OnAllRewardsDisplayed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneMinitronComponent.BP_HolodroneMinitronComponent_C.OnAllRewardsDisplayed__DelegateSignature");

	UBP_HolodroneMinitronComponent_C_OnAllRewardsDisplayed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
