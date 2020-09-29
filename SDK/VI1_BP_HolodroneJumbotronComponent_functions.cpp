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

// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ChangeColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnemyWaveType>     NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::ChangeColors(TEnumAsByte<EnemyWaveType> NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ChangeColors");

	UBP_HolodroneJumbotronComponent_C_ChangeColors_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.DoesRoundTypeDisplayTimer
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBP_HolodroneJumbotronComponent_C::DoesRoundTypeDisplayTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.DoesRoundTypeDisplayTimer");

	UBP_HolodroneJumbotronComponent_C_DoesRoundTypeDisplayTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.GetOpenJumbotronAnimDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_HolodroneJumbotronComponent_C::GetOpenJumbotronAnimDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.GetOpenJumbotronAnimDuration");

	UBP_HolodroneJumbotronComponent_C_GetOpenJumbotronAnimDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateKillCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewKillCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::UpdateKillCount(int NewKillCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateKillCount");

	UBP_HolodroneJumbotronComponent_C_UpdateKillCount_Params params;
	params.NewKillCount = NewKillCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.TickFinalCountdown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_HolodroneJumbotronComponent_C::TickFinalCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.TickFinalCountdown");

	UBP_HolodroneJumbotronComponent_C_TickFinalCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ResetRemainingTime
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_HolodroneJumbotronComponent_C::ResetRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ResetRemainingTime");

	UBP_HolodroneJumbotronComponent_C_ResetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.AttemptFinalCountdown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_HolodroneJumbotronComponent_C::AttemptFinalCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.AttemptFinalCountdown");

	UBP_HolodroneJumbotronComponent_C_AttemptFinalCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ResetLiveRating
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERating                        InitialRating                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::ResetLiveRating(ERating* InitialRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ResetLiveRating");

	UBP_HolodroneJumbotronComponent_C_ResetLiveRating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialRating != nullptr)
		*InitialRating = params.InitialRating;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ComputeNewTimeLimit
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERating                        NewRating                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::ComputeNewTimeLimit(ERating NewRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ComputeNewTimeLimit");

	UBP_HolodroneJumbotronComponent_C_ComputeNewTimeLimit_Params params;
	params.NewRating = NewRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateTimeOnJumbotron
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeSeconds                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::UpdateTimeOnJumbotron(float TimeSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateTimeOnJumbotron");

	UBP_HolodroneJumbotronComponent_C_UpdateTimeOnJumbotron_Params params;
	params.TimeSeconds = TimeSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateLiveRatingAndTimeLimit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERating                        NewRating                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::UpdateLiveRatingAndTimeLimit(ERating NewRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateLiveRatingAndTimeLimit");

	UBP_HolodroneJumbotronComponent_C_UpdateLiveRatingAndTimeLimit_Params params;
	params.NewRating = NewRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.SetRemainingTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::SetRemainingTime(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.SetRemainingTime");

	UBP_HolodroneJumbotronComponent_C_SetRemainingTime_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnTelemetryEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTelemetryEvent         TelemetryEvent                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_HolodroneJumbotronComponent_C::OnTelemetryEvent(const struct FTelemetryEvent& TelemetryEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnTelemetryEvent");

	UBP_HolodroneJumbotronComponent_C_OnTelemetryEvent_Params params;
	params.TelemetryEvent = TelemetryEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnLiveRatingChangedEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ERating                        Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::OnLiveRatingChangedEvent(const struct FName& WaveName, ERating Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnLiveRatingChangedEvent");

	UBP_HolodroneJumbotronComponent_C_OnLiveRatingChangedEvent_Params params;
	params.WaveName = WaveName;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Enable Low Health Warning
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneJumbotronComponent_C::Enable_Low_Health_Warning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Enable Low Health Warning");

	UBP_HolodroneJumbotronComponent_C_Enable_Low_Health_Warning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Disable Low Health Warning
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneJumbotronComponent_C::Disable_Low_Health_Warning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Disable Low Health Warning");

	UBP_HolodroneJumbotronComponent_C_Disable_Low_Health_Warning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Reset Low Health Warning
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneJumbotronComponent_C::Reset_Low_Health_Warning()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Reset Low Health Warning");

	UBP_HolodroneJumbotronComponent_C_Reset_Low_Health_Warning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnTakeDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageTaken                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_HolodroneJumbotronComponent_C::OnTakeDamage(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnTakeDamage");

	UBP_HolodroneJumbotronComponent_C_OnTakeDamage_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnBeginFinalCountdown
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneJumbotronComponent_C::OnBeginFinalCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnBeginFinalCountdown");

	UBP_HolodroneJumbotronComponent_C_OnBeginFinalCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnEndFinalCountdown
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneJumbotronComponent_C::OnEndFinalCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.OnEndFinalCountdown");

	UBP_HolodroneJumbotronComponent_C_OnEndFinalCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_HolodroneJumbotronComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ReceiveBeginPlay");

	UBP_HolodroneJumbotronComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ReceiveTick");

	UBP_HolodroneJumbotronComponent_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Show HUD
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneJumbotronComponent_C::Show_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Show HUD");

	UBP_HolodroneJumbotronComponent_C_Show_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Hide HUD
// (BlueprintCallable, BlueprintEvent)

void UBP_HolodroneJumbotronComponent_C::Hide_HUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.Hide HUD");

	UBP_HolodroneJumbotronComponent_C_Hide_HUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.InitJumbotron
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         HealthBarLocator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         TimerLocator                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         LiveRatingLocator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMeshComponent*    BackgroundMesh                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::InitJumbotron(class USceneComponent* HealthBarLocator, class USceneComponent* TimerLocator, class USceneComponent* LiveRatingLocator, class UStaticMeshComponent* BackgroundMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.InitJumbotron");

	UBP_HolodroneJumbotronComponent_C_InitJumbotron_Params params;
	params.HealthBarLocator = HealthBarLocator;
	params.TimerLocator = TimerLocator;
	params.LiveRatingLocator = LiveRatingLocator;
	params.BackgroundMesh = BackgroundMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateRound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Round                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::UpdateRound(int Round)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.UpdateRound");

	UBP_HolodroneJumbotronComponent_C_UpdateRound_Params params;
	params.Round = Round;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ExecuteUbergraph_BP_HolodroneJumbotronComponent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_HolodroneJumbotronComponent_C::ExecuteUbergraph_BP_HolodroneJumbotronComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HolodroneJumbotronComponent.BP_HolodroneJumbotronComponent_C.ExecuteUbergraph_BP_HolodroneJumbotronComponent");

	UBP_HolodroneJumbotronComponent_C_ExecuteUbergraph_BP_HolodroneJumbotronComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
