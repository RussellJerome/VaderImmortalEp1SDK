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

// Function TestDoorBasic.TestDoorBasic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATestDoorBasic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestDoorBasic.TestDoorBasic_C.UserConstructionScript");

	ATestDoorBasic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestDoorBasic.TestDoorBasic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATestDoorBasic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestDoorBasic.TestDoorBasic_C.ReceiveBeginPlay");

	ATestDoorBasic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestDoorBasic.TestDoorBasic_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATestDoorBasic_C::ReceiveActorBeginOverlap(class AActor** OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestDoorBasic.TestDoorBasic_C.ReceiveActorBeginOverlap");

	ATestDoorBasic_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestDoorBasic.TestDoorBasic_C.BndEvt__CollisionBox_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ATestDoorBasic_C::BndEvt__CollisionBox_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestDoorBasic.TestDoorBasic_C.BndEvt__CollisionBox_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature");

	ATestDoorBasic_C_BndEvt__CollisionBox_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestDoorBasic.TestDoorBasic_C.ExecuteUbergraph_TestDoorBasic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATestDoorBasic_C::ExecuteUbergraph_TestDoorBasic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestDoorBasic.TestDoorBasic_C.ExecuteUbergraph_TestDoorBasic");

	ATestDoorBasic_C_ExecuteUbergraph_TestDoorBasic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TestDoorBasic.TestDoorBasic_C.DoorCollision__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ATestDoorBasic_C::DoorCollision__DelegateSignature(const struct FVector& HitLocation, const struct FVector& NormalImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestDoorBasic.TestDoorBasic_C.DoorCollision__DelegateSignature");

	ATestDoorBasic_C_DoorCollision__DelegateSignature_Params params;
	params.HitLocation = HitLocation;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
