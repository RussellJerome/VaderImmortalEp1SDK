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

// Function BP_HoloDronePod.BP_HoloDronePod_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HoloDronePod_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDronePod.BP_HoloDronePod_C.UserConstructionScript");

	ABP_HoloDronePod_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDronePod.BP_HoloDronePod_C.DebugShowCheckPoint
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDronePod_C::DebugShowCheckPoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDronePod.BP_HoloDronePod_C.DebugShowCheckPoint");

	ABP_HoloDronePod_C_DebugShowCheckPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDronePod.BP_HoloDronePod_C.HideDebugLines
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDronePod_C::HideDebugLines()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDronePod.BP_HoloDronePod_C.HideDebugLines");

	ABP_HoloDronePod_C_HideDebugLines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDronePod.BP_HoloDronePod_C.SpawnHoloDrone
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDronePod_C::SpawnHoloDrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDronePod.BP_HoloDronePod_C.SpawnHoloDrone");

	ABP_HoloDronePod_C_SpawnHoloDrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDronePod.BP_HoloDronePod_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HoloDronePod_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDronePod.BP_HoloDronePod_C.ReceiveBeginPlay");

	ABP_HoloDronePod_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDronePod.BP_HoloDronePod_C.InitHolodrone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LoadedWaveIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDronePod_C::InitHolodrone(int LoadedWaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDronePod.BP_HoloDronePod_C.InitHolodrone");

	ABP_HoloDronePod_C_InitHolodrone_Params params;
	params.LoadedWaveIndex = LoadedWaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDronePod.BP_HoloDronePod_C.DespawnHolodrone
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDronePod_C::DespawnHolodrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDronePod.BP_HoloDronePod_C.DespawnHolodrone");

	ABP_HoloDronePod_C_DespawnHolodrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDronePod.BP_HoloDronePod_C.DestroyHolodrone
// (BlueprintCallable, BlueprintEvent)

void ABP_HoloDronePod_C::DestroyHolodrone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDronePod.BP_HoloDronePod_C.DestroyHolodrone");

	ABP_HoloDronePod_C_DestroyHolodrone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HoloDronePod.BP_HoloDronePod_C.ExecuteUbergraph_BP_HoloDronePod
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HoloDronePod_C::ExecuteUbergraph_BP_HoloDronePod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HoloDronePod.BP_HoloDronePod_C.ExecuteUbergraph_BP_HoloDronePod");

	ABP_HoloDronePod_C_ExecuteUbergraph_BP_HoloDronePod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
