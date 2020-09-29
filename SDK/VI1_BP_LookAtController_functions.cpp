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

// Function BP_LookAtController.BP_LookAtController_C.TrackLocations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_LookAtController_C::TrackLocations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.TrackLocations");

	UBP_LookAtController_C_TrackLocations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.GetSocketTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*         Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   SocketName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ERelativeTransformSpace> TransformSpace                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UBP_LookAtController_C::GetSocketTransform(class USceneComponent* Target, const struct FName& SocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.GetSocketTransform");

	UBP_LookAtController_C_GetSocketTransform_Params params;
	params.Target = Target;
	params.SocketName = SocketName;
	params.TransformSpace = TransformSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LookAtController.BP_LookAtController_C.OptimizeTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LookAtController_C::OptimizeTick(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.OptimizeTick");

	UBP_LookAtController_C_OptimizeTick_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.StoreLastHeadLocationFromHeadForward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_LookAtController_C::StoreLastHeadLocationFromHeadForward()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.StoreLastHeadLocationFromHeadForward");

	UBP_LookAtController_C_StoreLastHeadLocationFromHeadForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.GetFocusedTargetLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UBP_LookAtController_C::GetFocusedTargetLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.GetFocusedTargetLocation");

	UBP_LookAtController_C_GetFocusedTargetLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LookAtController.BP_LookAtController_C.GetTargetAltitude
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LookAtController_C::GetTargetAltitude(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.GetTargetAltitude");

	UBP_LookAtController_C_GetTargetAltitude_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BP_LookAtController.BP_LookAtController_C.GetTargetAzimuth
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LookAtController_C::GetTargetAzimuth(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.GetTargetAzimuth");

	UBP_LookAtController_C_GetTargetAzimuth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BP_LookAtController.BP_LookAtController_C.DeactivateHeadLookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LookAtController_C::DeactivateHeadLookAt(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.DeactivateHeadLookAt");

	UBP_LookAtController_C_DeactivateHeadLookAt_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.ActivateHeadLookAt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LookAtController_C::ActivateHeadLookAt(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.ActivateHeadLookAt");

	UBP_LookAtController_C_ActivateHeadLookAt_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.RecordTargetPos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_LookAtController_C::RecordTargetPos()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.RecordTargetPos");

	UBP_LookAtController_C_RecordTargetPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.GetTargetAngularSpeed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 OffsetHeadTarget               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          AngularSpeed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LookAtController_C::GetTargetAngularSpeed(const struct FVector& OffsetHeadTarget, float* AngularSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.GetTargetAngularSpeed");

	UBP_LookAtController_C_GetTargetAngularSpeed_Params params;
	params.OffsetHeadTarget = OffsetHeadTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AngularSpeed != nullptr)
		*AngularSpeed = params.AngularSpeed;
}


// Function BP_LookAtController.BP_LookAtController_C.DrawDebugHeadInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_LookAtController_C::DrawDebugHeadInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.DrawDebugHeadInfo");

	UBP_LookAtController_C_DrawDebugHeadInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.DrawDebugEyeRays
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_LookAtController_C::DrawDebugEyeRays()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.DrawDebugEyeRays");

	UBP_LookAtController_C_DrawDebugEyeRays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.FadeInHeadLook
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LookAtController_C::FadeInHeadLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.FadeInHeadLook");

	UBP_LookAtController_C_FadeInHeadLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.FadeOutHeadLook
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LookAtController_C::FadeOutHeadLook()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.FadeOutHeadLook");

	UBP_LookAtController_C_FadeOutHeadLook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.ToggleHeadLookAt
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LookAtController_C::ToggleHeadLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.ToggleHeadLookAt");

	UBP_LookAtController_C_ToggleHeadLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  Skeleton                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USceneComponent*         SceneTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USkeletalMeshComponent*  SceneTargetSkeletalMesh        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_LookAtController_C::Initialize(class USkeletalMeshComponent* Skeleton, class USceneComponent* SceneTarget, class USkeletalMeshComponent* SceneTargetSkeletalMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.Initialize");

	UBP_LookAtController_C_Initialize_Params params;
	params.Skeleton = Skeleton;
	params.SceneTarget = SceneTarget;
	params.SceneTargetSkeletalMesh = SceneTargetSkeletalMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.UpdateHeadLookAt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_LookAtController_C::UpdateHeadLookAt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.UpdateHeadLookAt");

	UBP_LookAtController_C_UpdateHeadLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.GetHeadToTargetAngle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LookAtController_C::GetHeadToTargetAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.GetHeadToTargetAngle");

	UBP_LookAtController_C_GetHeadToTargetAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function BP_LookAtController.BP_LookAtController_C.UpdateEyeDart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_LookAtController_C::UpdateEyeDart()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.UpdateEyeDart");

	UBP_LookAtController_C_UpdateEyeDart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LookAtController_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.ReceiveTick");

	UBP_LookAtController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LookAtController.BP_LookAtController_C.ExecuteUbergraph_BP_LookAtController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LookAtController_C::ExecuteUbergraph_BP_LookAtController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LookAtController.BP_LookAtController_C.ExecuteUbergraph_BP_LookAtController");

	UBP_LookAtController_C_ExecuteUbergraph_BP_LookAtController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
