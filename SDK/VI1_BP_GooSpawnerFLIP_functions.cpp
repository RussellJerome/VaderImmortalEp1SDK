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

// Function BP_GooSpawnerFLIP.BP_GooSpawnerFLIP_C.SpawnPlayScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           spawnLongVariant               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GooSpawnerFLIP_C::SpawnPlayScale(int Index, bool spawnLongVariant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GooSpawnerFLIP.BP_GooSpawnerFLIP_C.SpawnPlayScale");

	ABP_GooSpawnerFLIP_C_SpawnPlayScale_Params params;
	params.Index = Index;
	params.spawnLongVariant = spawnLongVariant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GooSpawnerFLIP.BP_GooSpawnerFLIP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GooSpawnerFLIP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GooSpawnerFLIP.BP_GooSpawnerFLIP_C.UserConstructionScript");

	ABP_GooSpawnerFLIP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GooSpawnerFLIP.BP_GooSpawnerFLIP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GooSpawnerFLIP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GooSpawnerFLIP.BP_GooSpawnerFLIP_C.ReceiveTick");

	ABP_GooSpawnerFLIP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GooSpawnerFLIP.BP_GooSpawnerFLIP_C.ExecuteUbergraph_BP_GooSpawnerFLIP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GooSpawnerFLIP_C::ExecuteUbergraph_BP_GooSpawnerFLIP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GooSpawnerFLIP.BP_GooSpawnerFLIP_C.ExecuteUbergraph_BP_GooSpawnerFLIP");

	ABP_GooSpawnerFLIP_C_ExecuteUbergraph_BP_GooSpawnerFLIP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
