#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OculusMR.OculusMR_CastingCameraActor.ToggleCastingWindow
struct AOculusMR_CastingCameraActor_ToggleCastingWindow_Params
{
};

// Function OculusMR.OculusMR_CastingCameraActor.RequestTrackedCameraCalibration
struct AOculusMR_CastingCameraActor_RequestTrackedCameraCalibration_Params
{
};

// Function OculusMR.OculusMR_CastingCameraActor.OpenCastingWindow
struct AOculusMR_CastingCameraActor_OpenCastingWindow_Params
{
};

// Function OculusMR.OculusMR_CastingCameraActor.OnHMDRecentered
struct AOculusMR_CastingCameraActor_OnHMDRecentered_Params
{
};

// Function OculusMR.OculusMR_CastingCameraActor.HasCastingWindowOpened
struct AOculusMR_CastingCameraActor_HasCastingWindowOpened_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusMR.OculusMR_CastingCameraActor.CloseCastingWindow
struct AOculusMR_CastingCameraActor_CloseCastingWindow_Params
{
};

// Function OculusMR.OculusMR_CastingCameraActor.BindToTrackedCameraIndexIfAvailable
struct AOculusMR_CastingCameraActor_BindToTrackedCameraIndexIfAvailable_Params
{
	int                                                InTrackedCameraIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles
struct UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Params
{
	TArray<struct FOculusMR_PlaneMeshTriangle>         Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles
struct UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Params
{
};

// Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles
struct UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Params
{
	TArray<struct FOculusMR_PlaneMeshTriangle>         Triangles;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function OculusMR.OculusMRFunctionLibrary.GetPlayAreaPoints
struct UOculusMRFunctionLibrary_GetPlayAreaPoints_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusMR.OculusMRFunctionLibrary.GetOuterBoundaryPoints
struct UOculusMRFunctionLibrary_GetOuterBoundaryPoints_Params
{
	TArray<struct FVector>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function OculusMR.OculusMRFunctionLibrary.GetAllTrackedCamera
struct UOculusMRFunctionLibrary_GetAllTrackedCamera_Params
{
	TArray<struct FTrackedCamera>                      TrackedCameras;                                           // (Parm, OutParm, ZeroConstructor)
	bool                                               bCalibratedOnly;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
