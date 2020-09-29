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

// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetSafeNavigationGround
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 lastNavigableGround            (Parm, OutParm, IsPlainOldData)
// bool                           groundInit                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerLocomotion_C::GetSafeNavigationGround(struct FVector* lastNavigableGround, bool* groundInit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetSafeNavigationGround");

	UBP_PlayerLocomotion_C_GetSafeNavigationGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (lastNavigableGround != nullptr)
		*lastNavigableGround = params.lastNavigableGround;
	if (groundInit != nullptr)
		*groundInit = params.groundInit;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.RecoverFromFading
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PlayerLocomotion_C::RecoverFromFading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.RecoverFromFading");

	UBP_PlayerLocomotion_C_RecoverFromFading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TickThrottleFootstepAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerLocomotion_C::TickThrottleFootstepAudio(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TickThrottleFootstepAudio");

	UBP_PlayerLocomotion_C_TickThrottleFootstepAudio_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TriggerTeleportFootsteps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TravelVector                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_PlayerLocomotion_C::TriggerTeleportFootsteps(const struct FVector& TravelVector)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TriggerTeleportFootsteps");

	UBP_PlayerLocomotion_C_TriggerTeleportFootsteps_Params params;
	params.TravelVector = TravelVector;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TickTeleportFootstepAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerLocomotion_C::TickTeleportFootstepAudio(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TickTeleportFootstepAudio");

	UBP_PlayerLocomotion_C_TickTeleportFootstepAudio_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetPlayerFeet
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform              NewParam                       (Parm, OutParm, IsPlainOldData)

void UBP_PlayerLocomotion_C::GetPlayerFeet(struct FTransform* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetPlayerFeet");

	UBP_PlayerLocomotion_C_GetPlayerFeet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.SetTeleportTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 TeleportLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator                TeleportRotation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_PlayerLocomotion_C::SetTeleportTransform(const struct FVector& TeleportLocation, const struct FRotator& TeleportRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.SetTeleportTransform");

	UBP_PlayerLocomotion_C_SetTeleportTransform_Params params;
	params.TeleportLocation = TeleportLocation;
	params.TeleportRotation = TeleportRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetFadeTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsFadeStart                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CameraFadeTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerLocomotion_C::GetFadeTime(bool IsFadeStart, float* CameraFadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetFadeTime");

	UBP_PlayerLocomotion_C_GetFadeTime_Params params;
	params.IsFadeStart = IsFadeStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CameraFadeTime != nullptr)
		*CameraFadeTime = params.CameraFadeTime;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetFadeColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            TeleportFadeColor              (Parm, OutParm, IsPlainOldData)

void UBP_PlayerLocomotion_C::GetFadeColor(struct FLinearColor* TeleportFadeColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.GetFadeColor");

	UBP_PlayerLocomotion_C_GetFadeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeleportFadeColor != nullptr)
		*TeleportFadeColor = params.TeleportFadeColor;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.LerpBetweenPoints
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LocationStart                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 LocationEnd                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          TimeToLerp                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DistanceTraveledThisFrame      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerLocomotion_C::LerpBetweenPoints(const struct FVector& LocationStart, const struct FVector& LocationEnd, float TimeToLerp, float StartTime, bool* Complete, float* DistanceTraveledThisFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.LerpBetweenPoints");

	UBP_PlayerLocomotion_C_LerpBetweenPoints_Params params;
	params.LocationStart = LocationStart;
	params.LocationEnd = LocationEnd;
	params.TimeToLerp = TimeToLerp;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Complete != nullptr)
		*Complete = params.Complete;
	if (DistanceTraveledThisFrame != nullptr)
		*DistanceTraveledThisFrame = params.DistanceTraveledThisFrame;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.BuildNavPathPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PlayerLocomotion_C::BuildNavPathPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.BuildNavPathPoints");

	UBP_PlayerLocomotion_C_BuildNavPathPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.DoStepAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TotalDistanceMoved             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StrideLength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerLocomotion_C::DoStepAudio(float TotalDistanceMoved, float StrideLength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.DoStepAudio");

	UBP_PlayerLocomotion_C_DoStepAudio_Params params;
	params.TotalDistanceMoved = TotalDistanceMoved;
	params.StrideLength = StrideLength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.MovePlayerOverTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ProjectedMoveTime              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StrideLength                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Destination                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Origin                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Complete                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerLocomotion_C::MovePlayerOverTime(float ProjectedMoveTime, float StrideLength, const struct FVector& Destination, const struct FVector& Origin, bool* Complete)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.MovePlayerOverTime");

	UBP_PlayerLocomotion_C_MovePlayerOverTime_Params params;
	params.ProjectedMoveTime = ProjectedMoveTime;
	params.StrideLength = StrideLength;
	params.Destination = Destination;
	params.Origin = Origin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Complete != nullptr)
		*Complete = params.Complete;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TryTeleport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWKNDMotionController*   Motion_Controller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_WKNDMotionController_C* In_Left_Controller             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_WKNDMotionController_C* In_Right_Controller            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerLocomotion_C::TryTeleport(class AWKNDMotionController* Motion_Controller, class ABP_WKNDMotionController_C* In_Left_Controller, class ABP_WKNDMotionController_C* In_Right_Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.TryTeleport");

	UBP_PlayerLocomotion_C_TryTeleport_Params params;
	params.Motion_Controller = Motion_Controller;
	params.In_Left_Controller = In_Left_Controller;
	params.In_Right_Controller = In_Right_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerLocomotion_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReceiveTick");

	UBP_PlayerLocomotion_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.CompleteLocomote
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLocomotion_C::CompleteLocomote()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.CompleteLocomote");

	UBP_PlayerLocomotion_C_CompleteLocomote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.VignetteOn
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLocomotion_C::VignetteOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.VignetteOn");

	UBP_PlayerLocomotion_C_VignetteOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.VignetteOff
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLocomotion_C::VignetteOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.VignetteOff");

	UBP_PlayerLocomotion_C_VignetteOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PlayerLocomotion_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReceiveBeginPlay");

	UBP_PlayerLocomotion_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.StartLocomote
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FRotator*               Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          SnapToMandated                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerLocomotion_C::StartLocomote(struct FVector* Location, struct FRotator* Rotation, bool* SnapToMandated)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.StartLocomote");

	UBP_PlayerLocomotion_C_StartLocomote_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.SnapToMandated = SnapToMandated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ExecuteUbergraph_BP_PlayerLocomotion
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerLocomotion_C::ExecuteUbergraph_BP_PlayerLocomotion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ExecuteUbergraph_BP_PlayerLocomotion");

	UBP_PlayerLocomotion_C_ExecuteUbergraph_BP_PlayerLocomotion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReportStartLocomote__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_PlayerLocomotion_C::ReportStartLocomote__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReportStartLocomote__DelegateSignature");

	UBP_PlayerLocomotion_C_ReportStartLocomote__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReportLastLocomote__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 EndLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBP_PlayerLocomotion_C::ReportLastLocomote__DelegateSignature(const struct FVector& StartLocation, const struct FVector& EndLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerLocomotion.BP_PlayerLocomotion_C.ReportLastLocomote__DelegateSignature");

	UBP_PlayerLocomotion_C_ReportLastLocomote__DelegateSignature_Params params;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
