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

// Function TestDoorBasic.TestDoorBasic_C.UserConstructionScript
struct ATestDoorBasic_C_UserConstructionScript_Params
{
};

// Function TestDoorBasic.TestDoorBasic_C.ReceiveBeginPlay
struct ATestDoorBasic_C_ReceiveBeginPlay_Params
{
};

// Function TestDoorBasic.TestDoorBasic_C.ReceiveActorBeginOverlap
struct ATestDoorBasic_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TestDoorBasic.TestDoorBasic_C.BndEvt__CollisionBox_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
struct ATestDoorBasic_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function TestDoorBasic.TestDoorBasic_C.ExecuteUbergraph_TestDoorBasic
struct ATestDoorBasic_C_ExecuteUbergraph_TestDoorBasic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TestDoorBasic.TestDoorBasic_C.DoorCollision__DelegateSignature
struct ATestDoorBasic_C_DoorCollision__DelegateSignature_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
