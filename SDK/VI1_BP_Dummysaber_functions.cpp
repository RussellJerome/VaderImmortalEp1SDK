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

// Function BP_Dummysaber.BP_Dummysaber_C.OutputText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dummysaber_C::OutputText(const struct FString& text, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.OutputText");

	ABP_Dummysaber_C_OutputText_Params params;
	params.text = text;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Dummysaber_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.UserConstructionScript");

	ABP_Dummysaber_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnPickedUp
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 CurrentInstigator              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dummysaber_C::ReceiveOnPickedUp(class AActor** CurrentInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnPickedUp");

	ABP_Dummysaber_C_ReceiveOnPickedUp_Params params;
	params.CurrentInstigator = CurrentInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnReleased
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 PreviousInstigator             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dummysaber_C::ReceiveOnReleased(class AActor** PreviousInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnReleased");

	ABP_Dummysaber_C_ReceiveOnReleased_Params params;
	params.PreviousInstigator = PreviousInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnInHand
// (Event, Public, BlueprintEvent)

void ABP_Dummysaber_C::ReceiveOnInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnInHand");

	ABP_Dummysaber_C_ReceiveOnInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.Tick2
// (BlueprintCallable, BlueprintEvent)

void ABP_Dummysaber_C::Tick2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.Tick2");

	ABP_Dummysaber_C_Tick2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.CallTestDoorBasic
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATestDoorBasic_C*        TestDoorBasic                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dummysaber_C::CallTestDoorBasic(class ATestDoorBasic_C* TestDoorBasic)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.CallTestDoorBasic");

	ABP_Dummysaber_C_CallTestDoorBasic_Params params;
	params.TestDoorBasic = TestDoorBasic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.DoorHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_Dummysaber_C::DoorHit(const struct FVector& HitLocation, const struct FVector& NormalImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.DoorHit");

	ABP_Dummysaber_C_DoorHit_Params params;
	params.HitLocation = HitLocation;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dummysaber_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.ReceiveTick");

	ABP_Dummysaber_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Dummysaber_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.ReceiveBeginPlay");

	ABP_Dummysaber_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Dummysaber_C::BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ABP_Dummysaber_C_BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_Dummysaber_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.ReceiveHit");

	ABP_Dummysaber_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnBeenDisarmed
// (Event, Public, BlueprintEvent)

void ABP_Dummysaber_C::ReceiveOnBeenDisarmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.ReceiveOnBeenDisarmed");

	ABP_Dummysaber_C_ReceiveOnBeenDisarmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.ExecuteUbergraph_BP_Dummysaber
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Dummysaber_C::ExecuteUbergraph_BP_Dummysaber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.ExecuteUbergraph_BP_Dummysaber");

	ABP_Dummysaber_C_ExecuteUbergraph_BP_Dummysaber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Dummysaber.BP_Dummysaber_C.PickedUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Dummysaber_C::PickedUp__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Dummysaber.BP_Dummysaber_C.PickedUp__DelegateSignature");

	ABP_Dummysaber_C_PickedUp__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
