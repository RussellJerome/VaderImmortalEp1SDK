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

// Function NTLibs.NTMaths.WillPassThreshold
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          A                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Threshold                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTMaths::STATIC_WillPassThreshold(float A, float Threshold, float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.WillPassThreshold");

	UNTMaths_WillPassThreshold_Params params;
	params.A = A;
	params.Threshold = Threshold;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.UnwindRadians
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          fRadians                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_UnwindRadians(float fRadians)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.UnwindRadians");

	UNTMaths_UnwindRadians_Params params;
	params.fRadians = fRadians;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.UnwindDegrees
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          fDegrees                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_UnwindDegrees(float fDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.UnwindDegrees");

	UNTMaths_UnwindDegrees_Params params;
	params.fDegrees = fDegrees;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.SmoothVectorClamped
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 CurrentValue                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 NewValue                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          deltatTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MinSpeed                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxSpeed                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UNTMaths::SmoothVectorClamped(const struct FVector& CurrentValue, const struct FVector& NewValue, float deltatTime, float Speed, float MinSpeed, float MaxSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.SmoothVectorClamped");

	UNTMaths_SmoothVectorClamped_Params params;
	params.CurrentValue = CurrentValue;
	params.NewValue = NewValue;
	params.deltatTime = deltatTime;
	params.Speed = Speed;
	params.MinSpeed = MinSpeed;
	params.MaxSpeed = MaxSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.SmoothFloatClamp
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          CurrentValue                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewValue                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          dt                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MinSpeed                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxSpeed                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::SmoothFloatClamp(float CurrentValue, float NewValue, float dt, float Speed, float MinSpeed, float MaxSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.SmoothFloatClamp");

	UNTMaths_SmoothFloatClamp_Params params;
	params.CurrentValue = CurrentValue;
	params.NewValue = NewValue;
	params.dt = dt;
	params.Speed = Speed;
	params.MinSpeed = MinSpeed;
	params.MaxSpeed = MaxSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.SegmentSegmentIntersection
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 A1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 B1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 A2                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 B2                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTMaths::STATIC_SegmentSegmentIntersection(const struct FVector& A1, const struct FVector& B1, const struct FVector& A2, const struct FVector& B2)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.SegmentSegmentIntersection");

	UNTMaths_SegmentSegmentIntersection_Params params;
	params.A1 = A1;
	params.B1 = B1;
	params.A2 = A2;
	params.B2 = B2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.MoveTowardsAtFixedSpeed
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 movingVector                   (Parm, OutParm, IsPlainOldData)
// struct FVector                 Target                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          Speed                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTMaths::STATIC_MoveTowardsAtFixedSpeed(const struct FVector& Target, float Speed, float DeltaTime, struct FVector* movingVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.MoveTowardsAtFixedSpeed");

	UNTMaths_MoveTowardsAtFixedSpeed_Params params;
	params.Target = Target;
	params.Speed = Speed;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (movingVector != nullptr)
		*movingVector = params.movingVector;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.LerpAngle
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Alpha                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_LerpAngle(float A, float B, float Alpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.LerpAngle");

	UNTMaths_LerpAngle_Params params;
	params.A = A;
	params.B = B;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.IsLocationInCameraView
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 SourceLocation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                SourceRotation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          FOV                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          AspectRatio                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTMaths::STATIC_IsLocationInCameraView(const struct FVector& SourceLocation, const struct FRotator& SourceRotation, const struct FVector& TargetLocation, float FOV, float AspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.IsLocationInCameraView");

	UNTMaths_IsLocationInCameraView_Params params;
	params.SourceLocation = SourceLocation;
	params.SourceRotation = SourceRotation;
	params.TargetLocation = TargetLocation;
	params.FOV = FOV;
	params.AspectRatio = AspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.IsLocationInCameraFOV
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 SourceLocation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                SourceRotation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 TargetLocation                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          FOV                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          VFOV                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTMaths::STATIC_IsLocationInCameraFOV(const struct FVector& SourceLocation, const struct FRotator& SourceRotation, const struct FVector& TargetLocation, float FOV, float VFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.IsLocationInCameraFOV");

	UNTMaths_IsLocationInCameraFOV_Params params;
	params.SourceLocation = SourceLocation;
	params.SourceRotation = SourceRotation;
	params.TargetLocation = TargetLocation;
	params.FOV = FOV;
	params.VFOV = VFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.IsFacing
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Direction                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 vX                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 vZ                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTMaths::STATIC_IsFacing(const struct FVector& Direction, const struct FVector& vX, const struct FVector& vZ)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.IsFacing");

	UNTMaths_IsFacing_Params params;
	params.Direction = Direction;
	params.vX = vX;
	params.vZ = vZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.InterpAngleTo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Current                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Target                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_InterpAngleTo(float Current, float Target, float DeltaTime, float InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.InterpAngleTo");

	UNTMaths_InterpAngleTo_Params params;
	params.Current = Current;
	params.Target = Target;
	params.DeltaTime = DeltaTime;
	params.InterpSpeed = InterpSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.InBetweenVector
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 TestPoint                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 PointA                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 PointB                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTMaths::STATIC_InBetweenVector(const struct FVector& TestPoint, const struct FVector& PointA, const struct FVector& PointB)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.InBetweenVector");

	UNTMaths_InBetweenVector_Params params;
	params.TestPoint = TestPoint;
	params.PointA = PointA;
	params.PointB = PointB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.InBetween
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          A                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTMaths::STATIC_InBetween(float A, float Min, float Max)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.InBetween");

	UNTMaths_InBetween_Params params;
	params.A = A;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.HasPassedThreshold
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          A                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Threshold                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delta                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTMaths::STATIC_HasPassedThreshold(float A, float Threshold, float Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.HasPassedThreshold");

	UNTMaths_HasPassedThreshold_Params params;
	params.A = A;
	params.Threshold = Threshold;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.GetYawInRadians
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 V                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_GetYawInRadians(const struct FVector& V)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetYawInRadians");

	UNTMaths_GetYawInRadians_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.GetYawInDegrees
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 V                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_GetYawInDegrees(const struct FVector& V)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetYawInDegrees");

	UNTMaths_GetYawInDegrees_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.GetVerticalFOVInRadians
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          HorizontalFOV_Radians          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          AspectRatio                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_GetVerticalFOVInRadians(float HorizontalFOV_Radians, float AspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetVerticalFOVInRadians");

	UNTMaths_GetVerticalFOVInRadians_Params params;
	params.HorizontalFOV_Radians = HorizontalFOV_Radians;
	params.AspectRatio = AspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.GetVerticalFOVInDegrees
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          HorizontalFOV_Degrees          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          AspectRatio                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_GetVerticalFOVInDegrees(float HorizontalFOV_Degrees, float AspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetVerticalFOVInDegrees");

	UNTMaths_GetVerticalFOVInDegrees_Params params;
	params.HorizontalFOV_Degrees = HorizontalFOV_Degrees;
	params.AspectRatio = AspectRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.GetScaledCurveValue
// (Final, Native, Static, Public)
// Parameters:
// class UCurveFloat*             Curve                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          newInitialValue                (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_GetScaledCurveValue(class UCurveFloat* Curve, float Time, float newInitialValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetScaledCurveValue");

	UNTMaths_GetScaledCurveValue_Params params;
	params.Curve = Curve;
	params.Time = Time;
	params.newInitialValue = newInitialValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.GetPitchInRadians
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 V                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_GetPitchInRadians(const struct FVector& V)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetPitchInRadians");

	UNTMaths_GetPitchInRadians_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.GetPitchInDegrees
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 V                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_GetPitchInDegrees(const struct FVector& V)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetPitchInDegrees");

	UNTMaths_GetPitchInDegrees_Params params;
	params.V = V;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.GetPitchAngleDiff
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 vStart                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 vEnd                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_GetPitchAngleDiff(const struct FVector& vStart, const struct FVector& vEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetPitchAngleDiff");

	UNTMaths_GetPitchAngleDiff_Params params;
	params.vStart = vStart;
	params.vEnd = vEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.GetHeadingAngleDiff
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 vStart                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 vEnd                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_GetHeadingAngleDiff(const struct FVector& vStart, const struct FVector& vEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetHeadingAngleDiff");

	UNTMaths_GetHeadingAngleDiff_Params params;
	params.vStart = vStart;
	params.vEnd = vEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.GetBezierPoint
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FVector>         ControlPoints                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          T                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutPoint                       (Parm, OutParm, IsPlainOldData)

void UNTMaths::STATIC_GetBezierPoint(TArray<struct FVector> ControlPoints, float T, struct FVector* OutPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetBezierPoint");

	UNTMaths_GetBezierPoint_Params params;
	params.ControlPoints = ControlPoints;
	params.T = T;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPoint != nullptr)
		*OutPoint = params.OutPoint;
}


// Function NTLibs.NTMaths.GetAngleInRadians
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 vInputVector                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 vFromVector                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 vNormal                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_GetAngleInRadians(const struct FVector& vInputVector, const struct FVector& vFromVector, const struct FVector& vNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetAngleInRadians");

	UNTMaths_GetAngleInRadians_Params params;
	params.vInputVector = vInputVector;
	params.vFromVector = vFromVector;
	params.vNormal = vNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.GetAngleInDegrees
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 vInputVector                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 vFromVector                    (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 vNormal                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_GetAngleInDegrees(const struct FVector& vInputVector, const struct FVector& vFromVector, const struct FVector& vNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.GetAngleInDegrees");

	UNTMaths_GetAngleInDegrees_Params params;
	params.vInputVector = vInputVector;
	params.vFromVector = vFromVector;
	params.vNormal = vNormal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.FlattenAndNormalise
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 V                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 Up                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UNTMaths::STATIC_FlattenAndNormalise(const struct FVector& V, const struct FVector& Up)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.FlattenAndNormalise");

	UNTMaths_FlattenAndNormalise_Params params;
	params.V = V;
	params.Up = Up;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.FindAngleDeltaInDegrees
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          angle1                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          angle2                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_FindAngleDeltaInDegrees(float angle1, float angle2)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.FindAngleDeltaInDegrees");

	UNTMaths_FindAngleDeltaInDegrees_Params params;
	params.angle1 = angle1;
	params.angle2 = angle2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.Distance2DSquared
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 v2                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_Distance2DSquared(const struct FVector& v1, const struct FVector& v2)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.Distance2DSquared");

	UNTMaths_Distance2DSquared_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.Distance2D
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 v1                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 v2                             (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_Distance2D(const struct FVector& v1, const struct FVector& v2)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.Distance2D");

	UNTMaths_Distance2D_Params params;
	params.v1 = v1;
	params.v2 = v2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.CylCylIntersect
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Location1                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          radius1                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight1                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location2                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          radius2                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          HalfHeight2                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTMaths::STATIC_CylCylIntersect(const struct FVector& Location1, float radius1, float HalfHeight1, const struct FVector& Location2, float radius2, float HalfHeight2)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.CylCylIntersect");

	UNTMaths_CylCylIntersect_Params params;
	params.Location1 = Location1;
	params.radius1 = radius1;
	params.HalfHeight1 = HalfHeight1;
	params.Location2 = Location2;
	params.radius2 = radius2;
	params.HalfHeight2 = HalfHeight2;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.CreateVectorFromYaw_Radians
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          YawRadians                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UNTMaths::STATIC_CreateVectorFromYaw_Radians(float YawRadians)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.CreateVectorFromYaw_Radians");

	UNTMaths_CreateVectorFromYaw_Radians_Params params;
	params.YawRadians = YawRadians;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.CreateVectorFromYaw_Degrees
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          YawDegrees                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UNTMaths::STATIC_CreateVectorFromYaw_Degrees(float YawDegrees)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.CreateVectorFromYaw_Degrees");

	UNTMaths_CreateVectorFromYaw_Degrees_Params params;
	params.YawDegrees = YawDegrees;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.ComputeVectorOrientation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                 Target                         (Parm, IsPlainOldData)
// struct FVector                 Forward                        (Parm, IsPlainOldData)
// struct FVector                 Up                             (Parm, IsPlainOldData)
// EDirection                     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EDirection UNTMaths::STATIC_ComputeVectorOrientation(const struct FVector& Target, const struct FVector& Forward, const struct FVector& Up)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.ComputeVectorOrientation");

	UNTMaths_ComputeVectorOrientation_Params params;
	params.Target = Target;
	params.Forward = Forward;
	params.Up = Up;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.BlendFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          fNewValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          fCurrentValue                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          fSpeed                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          dt                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_BlendFloat(float fNewValue, float fCurrentValue, float fSpeed, float dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.BlendFloat");

	UNTMaths_BlendFloat_Params params;
	params.fNewValue = fNewValue;
	params.fCurrentValue = fCurrentValue;
	params.fSpeed = fSpeed;
	params.dt = dt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTMaths.AccelerateRotatorTowards
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                Target                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                Current                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                CurrentSpeed                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                MaxSpeed                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator                Acceleration                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewSpeed                       (Parm, OutParm, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, OutParm, IsPlainOldData)

void UNTMaths::AccelerateRotatorTowards(const struct FRotator& Target, const struct FRotator& Current, const struct FRotator& CurrentSpeed, const struct FRotator& MaxSpeed, const struct FRotator& Acceleration, float DeltaTime, struct FRotator* NewSpeed, struct FRotator* NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.AccelerateRotatorTowards");

	UNTMaths_AccelerateRotatorTowards_Params params;
	params.Target = Target;
	params.Current = Current;
	params.CurrentSpeed = CurrentSpeed;
	params.MaxSpeed = MaxSpeed;
	params.Acceleration = Acceleration;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewSpeed != nullptr)
		*NewSpeed = params.NewSpeed;
	if (NewRotation != nullptr)
		*NewRotation = params.NewRotation;
}


// Function NTLibs.NTMaths.AccelerateFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          fTargetSpeed                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          fCurrentSpeed                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          fAcceleration                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          fDeceleration                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          dt                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UNTMaths::STATIC_AccelerateFloat(float fTargetSpeed, float fCurrentSpeed, float fAcceleration, float fDeceleration, float dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTMaths.AccelerateFloat");

	UNTMaths_AccelerateFloat_Params params;
	params.fTargetSpeed = fTargetSpeed;
	params.fCurrentSpeed = fCurrentSpeed;
	params.fAcceleration = fAcceleration;
	params.fDeceleration = fDeceleration;
	params.dt = dt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTUtils.NotContains_NamePrevious
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FName>           OldList                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           NewList                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTUtils::STATIC_NotContains_NamePrevious(TArray<struct FName> OldList, TArray<struct FName> NewList, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTUtils.NotContains_NamePrevious");

	UNTUtils_NotContains_NamePrevious_Params params;
	params.OldList = OldList;
	params.NewList = NewList;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTUtils.NotContains_Name
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FName>           List                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTUtils::STATIC_NotContains_Name(TArray<struct FName> List, const struct FName& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTUtils.NotContains_Name");

	UNTUtils_NotContains_Name_Params params;
	params.List = List;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTUtils.IsSameClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  classToCheck                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTUtils::STATIC_IsSameClass(class UClass* classToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTUtils.IsSameClass");

	UNTUtils_IsSameClass_Params params;
	params.classToCheck = classToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTUtils.IsSameAsAnyClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  classToCheck                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTUtils::STATIC_IsSameAsAnyClass(class UClass* classToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTUtils.IsSameAsAnyClass");

	UNTUtils_IsSameAsAnyClass_Params params;
	params.classToCheck = classToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTUtils.IsOfClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTUtils::STATIC_IsOfClass(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTUtils.IsOfClass");

	UNTUtils_IsOfClass_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTUtils.IsOfAnyClass
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTUtils::STATIC_IsOfAnyClass(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTUtils.IsOfAnyClass");

	UNTUtils_IsOfAnyClass_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTUtils.Contains_AnyPrevious
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FName>           OldList                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           NewList                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           Options                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTUtils::STATIC_Contains_AnyPrevious(TArray<struct FName> OldList, TArray<struct FName> NewList, TArray<struct FName> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTUtils.Contains_AnyPrevious");

	UNTUtils_Contains_AnyPrevious_Params params;
	params.OldList = OldList;
	params.NewList = NewList;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTLibs.NTUtils.Contains_Any
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FName>           List                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           Options                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNTUtils::STATIC_Contains_Any(TArray<struct FName> List, TArray<struct FName> Options)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTLibs.NTUtils.Contains_Any");

	UNTUtils_Contains_Any_Params params;
	params.List = List;
	params.Options = Options;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
