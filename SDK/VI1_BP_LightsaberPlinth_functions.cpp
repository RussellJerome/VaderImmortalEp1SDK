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

// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SetPositions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LightsaberPlinth_C::SetPositions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SetPositions");

	ABP_LightsaberPlinth_C_SetPositions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.GetSaberSpawnTransform
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Spawn_Transform                (Parm, OutParm, IsPlainOldData)

void ABP_LightsaberPlinth_C::GetSaberSpawnTransform(struct FTransform* Spawn_Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.GetSaberSpawnTransform");

	ABP_LightsaberPlinth_C_GetSaberSpawnTransform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Spawn_Transform != nullptr)
		*Spawn_Transform = params.Spawn_Transform;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_LightsaberPlinth_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.UserConstructionScript");

	ABP_LightsaberPlinth_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_LightsaberPlinth_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.Timeline_0__FinishedFunc");

	ABP_LightsaberPlinth_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_LightsaberPlinth_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.Timeline_0__UpdateFunc");

	ABP_LightsaberPlinth_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LightsaberPlinth_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.ReceiveBeginPlay");

	ABP_LightsaberPlinth_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.LightsaberPickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                HoldingHand                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightsaberPlinth_C::LightsaberPickedUp(EControllerHand HoldingHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.LightsaberPickedUp");

	ABP_LightsaberPlinth_C_LightsaberPickedUp_Params params;
	params.HoldingHand = HoldingHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.DescendPlinth
// (BlueprintCallable, BlueprintEvent)

void ABP_LightsaberPlinth_C::DescendPlinth()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.DescendPlinth");

	ABP_LightsaberPlinth_C_DescendPlinth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SetDown
// (BlueprintCallable, BlueprintEvent)

void ABP_LightsaberPlinth_C::SetDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SetDown");

	ABP_LightsaberPlinth_C_SetDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SetUp
// (BlueprintCallable, BlueprintEvent)

void ABP_LightsaberPlinth_C::SetUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SetUp");

	ABP_LightsaberPlinth_C_SetUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.RespawnSaber
// (BlueprintCallable, BlueprintEvent)

void ABP_LightsaberPlinth_C::RespawnSaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.RespawnSaber");

	ABP_LightsaberPlinth_C_RespawnSaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.ExecuteUbergraph_BP_LightsaberPlinth
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightsaberPlinth_C::ExecuteUbergraph_BP_LightsaberPlinth(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.ExecuteUbergraph_BP_LightsaberPlinth");

	ABP_LightsaberPlinth_C_ExecuteUbergraph_BP_LightsaberPlinth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SaberPickedUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                HoldingHand                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_LightsaberPlinth_C::SaberPickedUp__DelegateSignature(EControllerHand HoldingHand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.SaberPickedUp__DelegateSignature");

	ABP_LightsaberPlinth_C_SaberPickedUp__DelegateSignature_Params params;
	params.HoldingHand = HoldingHand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.PodInitialSmoke__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LightsaberPlinth_C::PodInitialSmoke__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.PodInitialSmoke__DelegateSignature");

	ABP_LightsaberPlinth_C_PodInitialSmoke__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.PlinthLowered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_LightsaberPlinth_C::PlinthLowered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LightsaberPlinth.BP_LightsaberPlinth_C.PlinthLowered__DelegateSignature");

	ABP_LightsaberPlinth_C_PlinthLowered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
