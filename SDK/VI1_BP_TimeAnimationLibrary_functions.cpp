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

// Function BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C.TimeCircleMotion
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffsetScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 WorldPosition                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AbsWorldPosition               (Parm, OutParm, IsPlainOldData)

void UBP_TimeAnimationLibrary_C::STATIC_TimeCircleMotion(float Time, float TimeScale, float Radius, float TimeOffset, float TimeOffsetScale, const struct FVector& WorldPosition, class UObject* __WorldContext, struct FVector* AbsWorldPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C.TimeCircleMotion");

	UBP_TimeAnimationLibrary_C_TimeCircleMotion_Params params;
	params.Time = Time;
	params.TimeScale = TimeScale;
	params.Radius = Radius;
	params.TimeOffset = TimeOffset;
	params.TimeOffsetScale = TimeOffsetScale;
	params.WorldPosition = WorldPosition;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AbsWorldPosition != nullptr)
		*AbsWorldPosition = params.AbsWorldPosition;
}


// Function BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C.TimeFlickerStep
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffsetScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MinInt                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxInt                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            TimeFlickerStep                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TimeAnimationLibrary_C::STATIC_TimeFlickerStep(float Time, float TimeScale, float TimeOffset, float TimeOffsetScale, int MinInt, int MaxInt, class UObject* __WorldContext, int* TimeFlickerStep)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C.TimeFlickerStep");

	UBP_TimeAnimationLibrary_C_TimeFlickerStep_Params params;
	params.Time = Time;
	params.TimeScale = TimeScale;
	params.TimeOffset = TimeOffset;
	params.TimeOffsetScale = TimeOffsetScale;
	params.MinInt = MinInt;
	params.MaxInt = MaxInt;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeFlickerStep != nullptr)
		*TimeFlickerStep = params.TimeFlickerStep;
}


// Function BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C.TimeFlicker
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffsetScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeFlicker                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TimeAnimationLibrary_C::STATIC_TimeFlicker(float Time, float TimeScale, float Max, float Min, float TimeOffset, float TimeOffsetScale, class UObject* __WorldContext, float* TimeFlicker)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C.TimeFlicker");

	UBP_TimeAnimationLibrary_C_TimeFlicker_Params params;
	params.Time = Time;
	params.TimeScale = TimeScale;
	params.Max = Max;
	params.Min = Min;
	params.TimeOffset = TimeOffset;
	params.TimeOffsetScale = TimeOffsetScale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeFlicker != nullptr)
		*TimeFlicker = params.TimeFlicker;
}


// Function BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C.TimeFrac
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffsetScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeFrac                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TimeAnimationLibrary_C::STATIC_TimeFrac(float Time, float TimeScale, float Max, float Min, float TimeOffset, float TimeOffsetScale, class UObject* __WorldContext, float* TimeFrac)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C.TimeFrac");

	UBP_TimeAnimationLibrary_C_TimeFrac_Params params;
	params.Time = Time;
	params.TimeScale = TimeScale;
	params.Max = Max;
	params.Min = Min;
	params.TimeOffset = TimeOffset;
	params.TimeOffsetScale = TimeOffsetScale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeFrac != nullptr)
		*TimeFrac = params.TimeFrac;
}


// Function BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C.TimeSine
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffsetScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeSine                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_TimeAnimationLibrary_C::STATIC_TimeSine(float Time, float TimeScale, float Max, float Min, float TimeOffset, float TimeOffsetScale, class UObject* __WorldContext, float* TimeSine)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeAnimationLibrary.BP_TimeAnimationLibrary_C.TimeSine");

	UBP_TimeAnimationLibrary_C_TimeSine_Params params;
	params.Time = Time;
	params.TimeScale = TimeScale;
	params.Max = Max;
	params.Min = Min;
	params.TimeOffset = TimeOffset;
	params.TimeOffsetScale = TimeOffsetScale;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeSine != nullptr)
		*TimeSine = params.TimeSine;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
