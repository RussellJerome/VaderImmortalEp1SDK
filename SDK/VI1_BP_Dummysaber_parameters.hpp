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

// Function BP_Dummysaber.BP_Dummysaber_C.OutputText
struct ABP_Dummysaber_C_OutputText_Params
{
	struct FString                                     text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dummysaber.BP_Dummysaber_C.UserConstructionScript
struct ABP_Dummysaber_C_UserConstructionScript_Params
{
};

// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnPickedUp
struct ABP_Dummysaber_C_ReceiveOnPickedUp_Params
{
	class AActor**                                     CurrentInstigator;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnReleased
struct ABP_Dummysaber_C_ReceiveOnReleased_Params
{
	class AActor**                                     PreviousInstigator;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnInHand
struct ABP_Dummysaber_C_ReceiveOnInHand_Params
{
};

// Function BP_Dummysaber.BP_Dummysaber_C.Tick2
struct ABP_Dummysaber_C_Tick2_Params
{
};

// Function BP_Dummysaber.BP_Dummysaber_C.CallTestDoorBasic
struct ABP_Dummysaber_C_CallTestDoorBasic_Params
{
	class ATestDoorBasic_C*                            TestDoorBasic;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dummysaber.BP_Dummysaber_C.DoorHit
struct ABP_Dummysaber_C_DoorHit_Params
{
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveTick
struct ABP_Dummysaber_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveBeginPlay
struct ABP_Dummysaber_C_ReceiveBeginPlay_Params
{
};

// Function BP_Dummysaber.BP_Dummysaber_C.BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_Dummysaber_C_BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveHit
struct ABP_Dummysaber_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor**                                     Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnBeenDisarmed
struct ABP_Dummysaber_C_ReceiveOnBeenDisarmed_Params
{
};

// Function BP_Dummysaber.BP_Dummysaber_C.ExecuteUbergraph_BP_Dummysaber
struct ABP_Dummysaber_C_ExecuteUbergraph_BP_Dummysaber_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Dummysaber.BP_Dummysaber_C.PickedUp__DelegateSignature
struct ABP_Dummysaber_C_PickedUp__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
