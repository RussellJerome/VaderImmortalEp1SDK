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

// Function SliceablePipe.SliceablePipe_C.UserConstructionScript
struct ASliceablePipe_C_UserConstructionScript_Params
{
};

// Function SliceablePipe.SliceablePipe_C.ReceiveOnUpdateCut
struct ASliceablePipe_C_ReceiveOnUpdateCut_Params
{
	class AActor**                                     CuttingActor;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        CutComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    CutEntryLocation;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    CutEntryNormal;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D*                                  CollisionUV;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FName*                                      BoneName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    CutExitLocation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function SliceablePipe.SliceablePipe_C.ReceiveOnStartCut
struct ASliceablePipe_C_ReceiveOnStartCut_Params
{
	class AActor**                                     CuttingActor;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        CutComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SliceablePipe.SliceablePipe_C.ReceiveOnEndCut
struct ASliceablePipe_C_ReceiveOnEndCut_Params
{
	class AActor**                                     CuttingActor;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        CutComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector*                                    BladeDirection;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function SliceablePipe.SliceablePipe_C.ReceiveOnMeshSliced
struct ASliceablePipe_C_ReceiveOnMeshSliced_Params
{
	struct FVector*                                    CentreOfSlice;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class USliceableMeshComponent**                    MeshA;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USliceableMeshComponent**                    MeshB;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function SliceablePipe.SliceablePipe_C.ReceiveTick
struct ASliceablePipe_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SliceablePipe.SliceablePipe_C.ReceiveBeginPlay
struct ASliceablePipe_C_ReceiveBeginPlay_Params
{
};

// Function SliceablePipe.SliceablePipe_C.ExecuteUbergraph_SliceablePipe
struct ASliceablePipe_C_ExecuteUbergraph_SliceablePipe_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
