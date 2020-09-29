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

// Function SliceablePipe.SliceablePipe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASliceablePipe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SliceablePipe.SliceablePipe_C.UserConstructionScript");

	ASliceablePipe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliceablePipe.SliceablePipe_C.ReceiveOnUpdateCut
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 CuttingActor                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                CutEntryLocation               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                CutEntryNormal                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector2D*              CollisionUV                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName*                  BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                CutExitLocation                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ASliceablePipe_C::ReceiveOnUpdateCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* CutEntryLocation, struct FVector* CutEntryNormal, struct FVector2D* CollisionUV, struct FName* BoneName, struct FVector* CutExitLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function SliceablePipe.SliceablePipe_C.ReceiveOnUpdateCut");

	ASliceablePipe_C_ReceiveOnUpdateCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutComponent = CutComponent;
	params.CutEntryLocation = CutEntryLocation;
	params.CutEntryNormal = CutEntryNormal;
	params.CollisionUV = CollisionUV;
	params.BoneName = BoneName;
	params.CutExitLocation = CutExitLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliceablePipe.SliceablePipe_C.ReceiveOnStartCut
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 CuttingActor                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ASliceablePipe_C::ReceiveOnStartCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SliceablePipe.SliceablePipe_C.ReceiveOnStartCut");

	ASliceablePipe_C_ReceiveOnStartCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutComponent = CutComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliceablePipe.SliceablePipe_C.ReceiveOnEndCut
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 CuttingActor                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    CutComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector*                BladeDirection                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ASliceablePipe_C::ReceiveOnEndCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* BladeDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function SliceablePipe.SliceablePipe_C.ReceiveOnEndCut");

	ASliceablePipe_C_ReceiveOnEndCut_Params params;
	params.CuttingActor = CuttingActor;
	params.CutComponent = CutComponent;
	params.BladeDirection = BladeDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliceablePipe.SliceablePipe_C.ReceiveOnMeshSliced
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector*                CentreOfSlice                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USliceableMeshComponent** MeshA                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class USliceableMeshComponent** MeshB                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ASliceablePipe_C::ReceiveOnMeshSliced(struct FVector* CentreOfSlice, class USliceableMeshComponent** MeshA, class USliceableMeshComponent** MeshB)
{
	static auto fn = UObject::FindObject<UFunction>("Function SliceablePipe.SliceablePipe_C.ReceiveOnMeshSliced");

	ASliceablePipe_C_ReceiveOnMeshSliced_Params params;
	params.CentreOfSlice = CentreOfSlice;
	params.MeshA = MeshA;
	params.MeshB = MeshB;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliceablePipe.SliceablePipe_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASliceablePipe_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function SliceablePipe.SliceablePipe_C.ReceiveTick");

	ASliceablePipe_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliceablePipe.SliceablePipe_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASliceablePipe_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SliceablePipe.SliceablePipe_C.ReceiveBeginPlay");

	ASliceablePipe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SliceablePipe.SliceablePipe_C.ExecuteUbergraph_SliceablePipe
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASliceablePipe_C::ExecuteUbergraph_SliceablePipe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SliceablePipe.SliceablePipe_C.ExecuteUbergraph_SliceablePipe");

	ASliceablePipe_C_ExecuteUbergraph_SliceablePipe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
