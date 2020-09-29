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

// Function BP_ZoeyPawn.BP_ZoeyPawn_C.SetSequenceBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Interp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyPawn_C::SetSequenceBlendWeight(float Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.SetSequenceBlendWeight");

	ABP_ZoeyPawn_C_SetSequenceBlendWeight_Params params;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoeyPawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.UserConstructionScript");

	ABP_ZoeyPawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectCatchReady
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         catchAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyPawn_C::AnimProxy_ObjectCatchReady(bool* oneHand, float* catchAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectCatchReady");

	ABP_ZoeyPawn_C_AnimProxy_ObjectCatchReady_Params params;
	params.oneHand = oneHand;
	params.catchAngle = catchAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectCatchSuccess
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         catchAngle                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyPawn_C::AnimProxy_ObjectCatchSuccess(bool* oneHand, float* catchAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectCatchSuccess");

	ABP_ZoeyPawn_C_AnimProxy_ObjectCatchSuccess_Params params;
	params.oneHand = oneHand;
	params.catchAngle = catchAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectHandOver
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyPawn_C::AnimProxy_ObjectHandOver(bool* oneHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectHandOver");

	ABP_ZoeyPawn_C_AnimProxy_ObjectHandOver_Params params;
	params.oneHand = oneHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectPickup
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyPawn_C::AnimProxy_ObjectPickup(bool* oneHand, float* Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectPickup");

	ABP_ZoeyPawn_C_AnimProxy_ObjectPickup_Params params;
	params.oneHand = oneHand;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZoeyPawn_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.ReceiveBeginPlay");

	ABP_ZoeyPawn_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectThrow
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         throwDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyPawn_C::AnimProxy_ObjectThrow(bool* oneHand, float* throwDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectThrow");

	ABP_ZoeyPawn_C_AnimProxy_ObjectThrow_Params params;
	params.oneHand = oneHand;
	params.throwDistance = throwDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.OnThrowCatchComplete
// (Event, Public, BlueprintEvent)

void ABP_ZoeyPawn_C::OnThrowCatchComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.OnThrowCatchComplete");

	ABP_ZoeyPawn_C_OnThrowCatchComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.OnPickupTakenFromMe
// (Event, Public, BlueprintEvent)

void ABP_ZoeyPawn_C::OnPickupTakenFromMe()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.OnPickupTakenFromMe");

	ABP_ZoeyPawn_C_OnPickupTakenFromMe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectLetGo
// (Event, Public, BlueprintEvent)

void ABP_ZoeyPawn_C::AnimProxy_ObjectLetGo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectLetGo");

	ABP_ZoeyPawn_C_AnimProxy_ObjectLetGo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyPawn_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.ReceiveTick");

	ABP_ZoeyPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectCatchFail
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          oneHand                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyPawn_C::AnimProxy_ObjectCatchFail(bool* oneHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.AnimProxy_ObjectCatchFail");

	ABP_ZoeyPawn_C_AnimProxy_ObjectCatchFail_Params params;
	params.oneHand = oneHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoeyPawn.BP_ZoeyPawn_C.ExecuteUbergraph_BP_ZoeyPawn
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoeyPawn_C::ExecuteUbergraph_BP_ZoeyPawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoeyPawn.BP_ZoeyPawn_C.ExecuteUbergraph_BP_ZoeyPawn");

	ABP_ZoeyPawn_C_ExecuteUbergraph_BP_ZoeyPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
