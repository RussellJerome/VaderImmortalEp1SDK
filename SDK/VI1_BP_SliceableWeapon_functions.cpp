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

// Function BP_SliceableWeapon.BP_SliceableWeapon_C.GetNewThrowTravelLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 StartLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 TargetLocation                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ThrowPositionDelta             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bArcToLeft                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewLocation                    (Parm, OutParm, IsPlainOldData)

void ABP_SliceableWeapon_C::GetNewThrowTravelLocation(const struct FVector& StartLocation, const struct FVector& TargetLocation, float ThrowPositionDelta, bool bArcToLeft, struct FVector* NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.GetNewThrowTravelLocation");

	ABP_SliceableWeapon_C_GetNewThrowTravelLocation_Params params;
	params.StartLocation = StartLocation;
	params.TargetLocation = TargetLocation;
	params.ThrowPositionDelta = ThrowPositionDelta;
	params.bArcToLeft = bArcToLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewLocation != nullptr)
		*NewLocation = params.NewLocation;
}


// Function BP_SliceableWeapon.BP_SliceableWeapon_C.DebugDrawPath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SliceableWeapon_C::DebugDrawPath(class USceneComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.DebugDrawPath");

	ABP_SliceableWeapon_C_DebugDrawPath_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliceableWeapon.BP_SliceableWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SliceableWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.UserConstructionScript");

	ABP_SliceableWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliceableWeapon.BP_SliceableWeapon_C.TravelTowardsActor__FinishedFunc
// (BlueprintEvent)

void ABP_SliceableWeapon_C::TravelTowardsActor__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.TravelTowardsActor__FinishedFunc");

	ABP_SliceableWeapon_C_TravelTowardsActor__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliceableWeapon.BP_SliceableWeapon_C.TravelTowardsActor__UpdateFunc
// (BlueprintEvent)

void ABP_SliceableWeapon_C::TravelTowardsActor__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.TravelTowardsActor__UpdateFunc");

	ABP_SliceableWeapon_C_TravelTowardsActor__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliceableWeapon.BP_SliceableWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SliceableWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.ReceiveBeginPlay");

	ABP_SliceableWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliceableWeapon.BP_SliceableWeapon_C.BndEvt__SliceableMesh_K2Node_ComponentBoundEvent_0_OnMeshSlicedDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FVector                 CentreOfSlice                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USliceableMeshComponent* OriginalMesh                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USliceableMeshComponent* NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SliceableWeapon_C::BndEvt__SliceableMesh_K2Node_ComponentBoundEvent_0_OnMeshSlicedDelegate__DelegateSignature(const struct FVector& CentreOfSlice, class USliceableMeshComponent* OriginalMesh, class USliceableMeshComponent* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.BndEvt__SliceableMesh_K2Node_ComponentBoundEvent_0_OnMeshSlicedDelegate__DelegateSignature");

	ABP_SliceableWeapon_C_BndEvt__SliceableMesh_K2Node_ComponentBoundEvent_0_OnMeshSlicedDelegate__DelegateSignature_Params params;
	params.CentreOfSlice = CentreOfSlice;
	params.OriginalMesh = OriginalMesh;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliceableWeapon.BP_SliceableWeapon_C.StoppedBeingThrownEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_SliceableWeapon_C::StoppedBeingThrownEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.StoppedBeingThrownEvent");

	ABP_SliceableWeapon_C_StoppedBeingThrownEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliceableWeapon.BP_SliceableWeapon_C.ThrowAtTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SliceableWeapon_C::ThrowAtTarget(class USceneComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.ThrowAtTarget");

	ABP_SliceableWeapon_C_ThrowAtTarget_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliceableWeapon.BP_SliceableWeapon_C.MapCurve
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SliceableWeapon_C::MapCurve(class USceneComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.MapCurve");

	ABP_SliceableWeapon_C_MapCurve_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliceableWeapon.BP_SliceableWeapon_C.ReceiveOnMeshSliced
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                CentreOfSlice                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USliceableMeshComponent** MeshA                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USliceableMeshComponent** MeshB                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_SliceableWeapon_C::ReceiveOnMeshSliced(struct FVector* CentreOfSlice, class USliceableMeshComponent** MeshA, class USliceableMeshComponent** MeshB)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.ReceiveOnMeshSliced");

	ABP_SliceableWeapon_C_ReceiveOnMeshSliced_Params params;
	params.CentreOfSlice = CentreOfSlice;
	params.MeshA = MeshA;
	params.MeshB = MeshB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SliceableWeapon.BP_SliceableWeapon_C.ExecuteUbergraph_BP_SliceableWeapon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SliceableWeapon_C::ExecuteUbergraph_BP_SliceableWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SliceableWeapon.BP_SliceableWeapon_C.ExecuteUbergraph_BP_SliceableWeapon");

	ABP_SliceableWeapon_C_ExecuteUbergraph_BP_SliceableWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
