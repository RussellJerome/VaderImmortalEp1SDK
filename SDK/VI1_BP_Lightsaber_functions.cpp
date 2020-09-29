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

// Function BP_Lightsaber.BP_Lightsaber_C.SetDeflectionScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::SetDeflectionScale(float NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.SetDeflectionScale");

	ABP_Lightsaber_C_SetDeflectionScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.UpdateInstigator
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::UpdateInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.UpdateInstigator");

	ABP_Lightsaber_C_UpdateInstigator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.AK_LoadBank
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::AK_LoadBank()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.AK_LoadBank");

	ABP_Lightsaber_C_AK_LoadBank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.AK_Throw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::AK_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.AK_Throw");

	ABP_Lightsaber_C_AK_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.AK_ShortOut
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::AK_ShortOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.AK_ShortOut");

	ABP_Lightsaber_C_AK_ShortOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.RTPC_HumAggressive_Velocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InterpolationTimeMs            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::RTPC_HumAggressive_Velocity(float Value, int InterpolationTimeMs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.RTPC_HumAggressive_Velocity");

	ABP_Lightsaber_C_RTPC_HumAggressive_Velocity_Params params;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.RTPC_HumNormal_Velocity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            InterpolationTimeMs            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::RTPC_HumNormal_Velocity(float Value, int InterpolationTimeMs)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.RTPC_HumNormal_Velocity");

	ABP_Lightsaber_C_RTPC_HumNormal_Velocity_Params params;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.Ak_Hum_ManualOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::Ak_Hum_ManualOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.Ak_Hum_ManualOff");

	ABP_Lightsaber_C_Ak_Hum_ManualOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.Ak_Hum_ManualOn
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::Ak_Hum_ManualOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.Ak_Hum_ManualOn");

	ABP_Lightsaber_C_Ak_Hum_ManualOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.DoLightLerps
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::DoLightLerps()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.DoLightLerps");

	ABP_Lightsaber_C_DoLightLerps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.RTPC_HumDistanceVolume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::RTPC_HumDistanceVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.RTPC_HumDistanceVolume");

	ABP_Lightsaber_C_RTPC_HumDistanceVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.FX_SaberDistort
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::FX_SaberDistort()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.FX_SaberDistort");

	ABP_Lightsaber_C_FX_SaberDistort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.BlinkStart
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::BlinkStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.BlinkStart");

	ABP_Lightsaber_C_BlinkStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.SetSaberTrailParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::SetSaberTrailParameters(const struct FVector& Direction, float Velocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.SetSaberTrailParameters");

	ABP_Lightsaber_C_SetSaberTrailParameters_Params params;
	params.Direction = Direction;
	params.Velocity = Velocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.SetBladeWobble
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::SetBladeWobble()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.SetBladeWobble");

	ABP_Lightsaber_C_SetBladeWobble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.CalculateRumbleOverload
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Overload_Min                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Overload_Scale                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RumbleLoopOverload             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::CalculateRumbleOverload(float Overload_Min, float Overload_Scale, float* RumbleLoopOverload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.CalculateRumbleOverload");

	ABP_Lightsaber_C_CalculateRumbleOverload_Params params;
	params.Overload_Min = Overload_Min;
	params.Overload_Scale = Overload_Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RumbleLoopOverload != nullptr)
		*RumbleLoopOverload = params.RumbleLoopOverload;
}


// Function BP_Lightsaber.BP_Lightsaber_C.CalculateSwoosh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SwooshValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::CalculateSwoosh(float* SwooshValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.CalculateSwoosh");

	ABP_Lightsaber_C_CalculateSwoosh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SwooshValue != nullptr)
		*SwooshValue = params.SwooshValue;
}


// Function BP_Lightsaber.BP_Lightsaber_C.CalculateHaptics_Swoosh
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Frequency                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Amplitude                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::CalculateHaptics_Swoosh(float* Frequency, float* Amplitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.CalculateHaptics_Swoosh");

	ABP_Lightsaber_C_CalculateHaptics_Swoosh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Frequency != nullptr)
		*Frequency = params.Frequency;
	if (Amplitude != nullptr)
		*Amplitude = params.Amplitude;
}


// Function BP_Lightsaber.BP_Lightsaber_C.CalculateHaptics
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Frequency                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Amplitude                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::CalculateHaptics(float* Frequency, float* Amplitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.CalculateHaptics");

	ABP_Lightsaber_C_CalculateHaptics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Frequency != nullptr)
		*Frequency = params.Frequency;
	if (Amplitude != nullptr)
		*Amplitude = params.Amplitude;
}


// Function BP_Lightsaber.BP_Lightsaber_C.FX_SaberTrail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::FX_SaberTrail()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.FX_SaberTrail");

	ABP_Lightsaber_C_FX_SaberTrail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.GetCutting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Cutting                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::GetCutting(bool* Cutting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.GetCutting");

	ABP_Lightsaber_C_GetCutting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cutting != nullptr)
		*Cutting = params.Cutting;
}


// Function BP_Lightsaber.BP_Lightsaber_C.OutputText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::OutputText(const struct FString& text, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.OutputText");

	ABP_Lightsaber_C_OutputText_Params params;
	params.text = text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.UserConstructionScript");

	ABP_Lightsaber_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ScaleBladeDownQuick__FinishedFunc
// (BlueprintEvent)

void ABP_Lightsaber_C::ScaleBladeDownQuick__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ScaleBladeDownQuick__FinishedFunc");

	ABP_Lightsaber_C_ScaleBladeDownQuick__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ScaleBladeDownQuick__UpdateFunc
// (BlueprintEvent)

void ABP_Lightsaber_C::ScaleBladeDownQuick__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ScaleBladeDownQuick__UpdateFunc");

	ABP_Lightsaber_C_ScaleBladeDownQuick__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.BladeScale__FinishedFunc
// (BlueprintEvent)

void ABP_Lightsaber_C::BladeScale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.BladeScale__FinishedFunc");

	ABP_Lightsaber_C_BladeScale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.BladeScale__UpdateFunc
// (BlueprintEvent)

void ABP_Lightsaber_C::BladeScale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.BladeScale__UpdateFunc");

	ABP_Lightsaber_C_BladeScale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ProtoScale__FinishedFunc
// (BlueprintEvent)

void ABP_Lightsaber_C::ProtoScale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ProtoScale__FinishedFunc");

	ABP_Lightsaber_C_ProtoScale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ProtoScale__UpdateFunc
// (BlueprintEvent)

void ABP_Lightsaber_C::ProtoScale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ProtoScale__UpdateFunc");

	ABP_Lightsaber_C_ProtoScale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.FastTurnOff_Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_Lightsaber_C::FastTurnOff_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.FastTurnOff_Timeline__FinishedFunc");

	ABP_Lightsaber_C_FastTurnOff_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.FastTurnOff_Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_Lightsaber_C::FastTurnOff_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.FastTurnOff_Timeline__UpdateFunc");

	ABP_Lightsaber_C_FastTurnOff_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_Lightsaber_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.Timeline_0__FinishedFunc");

	ABP_Lightsaber_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_Lightsaber_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.Timeline_0__UpdateFunc");

	ABP_Lightsaber_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_Period_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Lightsaber_C::InpActEvt_Period_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_Period_K2Node_InputKeyEvent_4");

	ABP_Lightsaber_C_InpActEvt_Period_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_Comma_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Lightsaber_C::InpActEvt_Comma_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_Comma_K2Node_InputKeyEvent_3");

	ABP_Lightsaber_C_InpActEvt_Comma_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_C_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Lightsaber_C::InpActEvt_C_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_C_K2Node_InputKeyEvent_2");

	ABP_Lightsaber_C_InpActEvt_C_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_T_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Lightsaber_C::InpActEvt_T_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.InpActEvt_T_K2Node_InputKeyEvent_1");

	ABP_Lightsaber_C_InpActEvt_T_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ReceiveTick");

	ABP_Lightsaber_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Lightsaber_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ReceiveBeginPlay");

	ABP_Lightsaber_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOn
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::SaberIsOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOn");

	ABP_Lightsaber_C_SaberIsOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.FlickerTicker
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::FlickerTicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.FlickerTicker");

	ABP_Lightsaber_C_FlickerTicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOff
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::SaberIsOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOff");

	ABP_Lightsaber_C_SaberIsOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnPickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 CurrentInstigator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::ReceiveOnPickedUp(class AActor** CurrentInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnPickedUp");

	ABP_Lightsaber_C_ReceiveOnPickedUp_Params params;
	params.CurrentInstigator = CurrentInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 PreviousInstigator             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::ReceiveOnReleased(class AActor** PreviousInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnReleased");

	ABP_Lightsaber_C_ReceiveOnReleased_Params params;
	params.PreviousInstigator = PreviousInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnUsed
// (Event, Public, BlueprintEvent)

void ABP_Lightsaber_C::ReceiveOnUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnUsed");

	ABP_Lightsaber_C_ReceiveOnUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnInHand
// (Event, Public, BlueprintEvent)

void ABP_Lightsaber_C::ReceiveOnInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnInHand");

	ABP_Lightsaber_C_ReceiveOnInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.CallTestDoorBasic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATestDoorBasic_C*        TestDoorBasic                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::CallTestDoorBasic(class ATestDoorBasic_C* TestDoorBasic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.CallTestDoorBasic");

	ABP_Lightsaber_C_CallTestDoorBasic_Params params;
	params.TestDoorBasic = TestDoorBasic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.DoorHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Lightsaber_C::DoorHit(const struct FVector& HitLocation, const struct FVector& NormalImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.DoorHit");

	ABP_Lightsaber_C_DoorHit_Params params;
	params.HitLocation = HitLocation;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Lightsaber_C::BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Lightsaber_C_BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.DEBUG_ToggleLightsaber
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::DEBUG_ToggleLightsaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.DEBUG_ToggleLightsaber");

	ABP_Lightsaber_C_DEBUG_ToggleLightsaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.FlickerOveride
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::FlickerOveride()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.FlickerOveride");

	ABP_Lightsaber_C_FlickerOveride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.Teleport_BlinkStart
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::Teleport_BlinkStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.Teleport_BlinkStart");

	ABP_Lightsaber_C_Teleport_BlinkStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.Teleport_BlinkStop
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::Teleport_BlinkStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.Teleport_BlinkStop");

	ABP_Lightsaber_C_Teleport_BlinkStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Lightsaber_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ReceiveHit");

	ABP_Lightsaber_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOn_3
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::SaberIsOn_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOn_3");

	ABP_Lightsaber_C_SaberIsOn_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOff_3
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::SaberIsOff_3()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.SaberIsOff_3");

	ABP_Lightsaber_C_SaberIsOff_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnOverload
// (Event, Public, BlueprintEvent)

void ABP_Lightsaber_C::ReceiveOnOverload()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnOverload");

	ABP_Lightsaber_C_ReceiveOnOverload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnBeenDisarmed
// (Event, Public, BlueprintEvent)

void ABP_Lightsaber_C::ReceiveOnBeenDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnBeenDisarmed");

	ABP_Lightsaber_C_ReceiveOnBeenDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.inComboMode
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::inComboMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.inComboMode");

	ABP_Lightsaber_C_inComboMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.outComboMode
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::outComboMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.outComboMode");

	ABP_Lightsaber_C_outComboMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike1Audio
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::ConfigureStrike1Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike1Audio");

	ABP_Lightsaber_C_ConfigureStrike1Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike2Audio
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::ConfigureStrike2Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike2Audio");

	ABP_Lightsaber_C_ConfigureStrike2Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike3Audio
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::ConfigureStrike3Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike3Audio");

	ABP_Lightsaber_C_ConfigureStrike3Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike4Audio
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::ConfigureStrike4Audio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ConfigureStrike4Audio");

	ABP_Lightsaber_C_ConfigureStrike4Audio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ComboStrikeStarted
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::ComboStrikeStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ComboStrikeStarted");

	ABP_Lightsaber_C_ComboStrikeStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.PoseSFX_On
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::PoseSFX_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.PoseSFX_On");

	ABP_Lightsaber_C_PoseSFX_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.PoseSFX_Off
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::PoseSFX_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.PoseSFX_Off");

	ABP_Lightsaber_C_PoseSFX_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.audio_SaberIsOff
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::audio_SaberIsOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.audio_SaberIsOff");

	ABP_Lightsaber_C_audio_SaberIsOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.audio_SaberReleased
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::audio_SaberReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.audio_SaberReleased");

	ABP_Lightsaber_C_audio_SaberReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.SetNewLightIntensityMax
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Intensity_Max                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius_Max                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::SetNewLightIntensityMax(float Intensity_Max, float Radius_Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.SetNewLightIntensityMax");

	ABP_Lightsaber_C_SetNewLightIntensityMax_Params params;
	params.Intensity_Max = Intensity_Max;
	params.Radius_Max = Radius_Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.TrainingDroidUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BladeProgress                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::TrainingDroidUpdate(float BladeProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.TrainingDroidUpdate");

	ABP_Lightsaber_C_TrainingDroidUpdate_Params params;
	params.BladeProgress = BladeProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.TD_FXOff
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::TD_FXOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.TD_FXOff");

	ABP_Lightsaber_C_TD_FXOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.TD_FXOn
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::TD_FXOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.TD_FXOn");

	ABP_Lightsaber_C_TD_FXOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.Snap_Start
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::Snap_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.Snap_Start");

	ABP_Lightsaber_C_Snap_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.Snap_Stop
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::Snap_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.Snap_Stop");

	ABP_Lightsaber_C_Snap_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnFastTurnOff
// (Event, Public, BlueprintEvent)

void ABP_Lightsaber_C::ReceiveOnFastTurnOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ReceiveOnFastTurnOff");

	ABP_Lightsaber_C_ReceiveOnFastTurnOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.GameUnPaused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowPauseMenu                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::GameUnPaused(bool bShowPauseMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.GameUnPaused");

	ABP_Lightsaber_C_GameUnPaused_Params params;
	params.bShowPauseMenu = bShowPauseMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.GamePaused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowPauseMenu                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::GamePaused(bool bShowPauseMenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.GamePaused");

	ABP_Lightsaber_C_GamePaused_Params params;
	params.bShowPauseMenu = bShowPauseMenu;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.BeginSwoosh
// (BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::BeginSwoosh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.BeginSwoosh");

	ABP_Lightsaber_C_BeginSwoosh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.ExecuteUbergraph_BP_Lightsaber
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::ExecuteUbergraph_BP_Lightsaber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.ExecuteUbergraph_BP_Lightsaber");

	ABP_Lightsaber_C_ExecuteUbergraph_BP_Lightsaber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.TurnedOff__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::TurnedOff__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.TurnedOff__DelegateSignature");

	ABP_Lightsaber_C_TurnedOff__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.TurnedOn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_C::TurnedOn__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.TurnedOn__DelegateSignature");

	ABP_Lightsaber_C_TurnedOn__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber.BP_Lightsaber_C.PickedUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                HoldingHand                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_C::PickedUp__DelegateSignature(EControllerHand HoldingHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber.BP_Lightsaber_C.PickedUp__DelegateSignature");

	ABP_Lightsaber_C_PickedUp__DelegateSignature_Params params;
	params.HoldingHand = HoldingHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
