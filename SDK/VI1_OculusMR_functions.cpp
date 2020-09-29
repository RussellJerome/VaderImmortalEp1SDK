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

// Function OculusMR.OculusMR_CastingCameraActor.ToggleCastingWindow
// (Final, Native, Public, BlueprintCallable)

void AOculusMR_CastingCameraActor::ToggleCastingWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_CastingCameraActor.ToggleCastingWindow");

	AOculusMR_CastingCameraActor_ToggleCastingWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusMR.OculusMR_CastingCameraActor.RequestTrackedCameraCalibration
// (Final, Native, Public, BlueprintCallable)

void AOculusMR_CastingCameraActor::RequestTrackedCameraCalibration()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_CastingCameraActor.RequestTrackedCameraCalibration");

	AOculusMR_CastingCameraActor_RequestTrackedCameraCalibration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusMR.OculusMR_CastingCameraActor.OpenCastingWindow
// (Final, Native, Public, BlueprintCallable)

void AOculusMR_CastingCameraActor::OpenCastingWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_CastingCameraActor.OpenCastingWindow");

	AOculusMR_CastingCameraActor_OpenCastingWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusMR.OculusMR_CastingCameraActor.OnHMDRecentered
// (Final, Native, Public, BlueprintCallable)

void AOculusMR_CastingCameraActor::OnHMDRecentered()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_CastingCameraActor.OnHMDRecentered");

	AOculusMR_CastingCameraActor_OnHMDRecentered_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusMR.OculusMR_CastingCameraActor.HasCastingWindowOpened
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AOculusMR_CastingCameraActor::HasCastingWindowOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_CastingCameraActor.HasCastingWindowOpened");

	AOculusMR_CastingCameraActor_HasCastingWindowOpened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusMR.OculusMR_CastingCameraActor.CloseCastingWindow
// (Final, Native, Public, BlueprintCallable)

void AOculusMR_CastingCameraActor::CloseCastingWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_CastingCameraActor.CloseCastingWindow");

	AOculusMR_CastingCameraActor_CloseCastingWindow_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusMR.OculusMR_CastingCameraActor.BindToTrackedCameraIndexIfAvailable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InTrackedCameraIndex           (Parm, ZeroConstructor, IsPlainOldData)

void AOculusMR_CastingCameraActor::BindToTrackedCameraIndexIfAvailable(int InTrackedCameraIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_CastingCameraActor.BindToTrackedCameraIndexIfAvailable");

	AOculusMR_CastingCameraActor_BindToTrackedCameraIndexIfAvailable_Params params;
	params.InTrackedCameraIndex = InTrackedCameraIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FOculusMR_PlaneMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UOculusMR_PlaneMeshComponent::SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles");

	UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
// (Final, Native, Public, BlueprintCallable)

void UOculusMR_PlaneMeshComponent::ClearCustomMeshTriangles()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles");

	UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FOculusMR_PlaneMeshTriangle> Triangles                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UOculusMR_PlaneMeshComponent::AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles");

	UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OculusMR.OculusMRFunctionLibrary.GetPlayAreaPoints
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UOculusMRFunctionLibrary::STATIC_GetPlayAreaPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.GetPlayAreaPoints");

	UOculusMRFunctionLibrary_GetPlayAreaPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusMR.OculusMRFunctionLibrary.GetOuterBoundaryPoints
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FVector>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FVector> UOculusMRFunctionLibrary::STATIC_GetOuterBoundaryPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.GetOuterBoundaryPoints");

	UOculusMRFunctionLibrary_GetOuterBoundaryPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OculusMR.OculusMRFunctionLibrary.GetAllTrackedCamera
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FTrackedCamera>  TrackedCameras                 (Parm, OutParm, ZeroConstructor)
// bool                           bCalibratedOnly                (Parm, ZeroConstructor, IsPlainOldData)

void UOculusMRFunctionLibrary::STATIC_GetAllTrackedCamera(bool bCalibratedOnly, TArray<struct FTrackedCamera>* TrackedCameras)
{
	static auto fn = UObject::FindObject<UFunction>("Function OculusMR.OculusMRFunctionLibrary.GetAllTrackedCamera");

	UOculusMRFunctionLibrary_GetAllTrackedCamera_Params params;
	params.bCalibratedOnly = bCalibratedOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TrackedCameras != nullptr)
		*TrackedCameras = params.TrackedCameras;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
