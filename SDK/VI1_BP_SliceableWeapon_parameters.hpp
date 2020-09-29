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

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.GetNewThrowTravelLocation
struct ABP_SliceableWeapon_C_GetNewThrowTravelLocation_Params
{
	struct FVector                                     StartLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ThrowPositionDelta;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bArcToLeft;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.DebugDrawPath
struct ABP_SliceableWeapon_C_DebugDrawPath_Params
{
	class USceneComponent*                             TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.UserConstructionScript
struct ABP_SliceableWeapon_C_UserConstructionScript_Params
{
};

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.TravelTowardsActor__FinishedFunc
struct ABP_SliceableWeapon_C_TravelTowardsActor__FinishedFunc_Params
{
};

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.TravelTowardsActor__UpdateFunc
struct ABP_SliceableWeapon_C_TravelTowardsActor__UpdateFunc_Params
{
};

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.ReceiveBeginPlay
struct ABP_SliceableWeapon_C_ReceiveBeginPlay_Params
{
};

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.BndEvt__SliceableMesh_K2Node_ComponentBoundEvent_0_OnMeshSlicedDelegate__DelegateSignature
struct ABP_SliceableWeapon_C_BndEvt__SliceableMesh_K2Node_ComponentBoundEvent_0_OnMeshSlicedDelegate__DelegateSignature_Params
{
	struct FVector                                     CentreOfSlice;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USliceableMeshComponent*                     OriginalMesh;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USliceableMeshComponent*                     NewMesh;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.StoppedBeingThrownEvent
struct ABP_SliceableWeapon_C_StoppedBeingThrownEvent_Params
{
};

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.ThrowAtTarget
struct ABP_SliceableWeapon_C_ThrowAtTarget_Params
{
	class USceneComponent*                             TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.MapCurve
struct ABP_SliceableWeapon_C_MapCurve_Params
{
	class USceneComponent*                             TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.ReceiveOnMeshSliced
struct ABP_SliceableWeapon_C_ReceiveOnMeshSliced_Params
{
	struct FVector*                                    CentreOfSlice;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USliceableMeshComponent**                    MeshA;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USliceableMeshComponent**                    MeshB;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.ExecuteUbergraph_BP_SliceableWeapon
struct ABP_SliceableWeapon_C_ExecuteUbergraph_BP_SliceableWeapon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
