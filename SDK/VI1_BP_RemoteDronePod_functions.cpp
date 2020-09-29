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

// Function BP_RemoteDronePod.BP_RemoteDronePod_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RemoteDronePod_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteDronePod.BP_RemoteDronePod_C.UserConstructionScript");

	ABP_RemoteDronePod_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteDronePod.BP_RemoteDronePod_C.DoAttackSequence
// (BlueprintCallable, BlueprintEvent)

void ABP_RemoteDronePod_C::DoAttackSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteDronePod.BP_RemoteDronePod_C.DoAttackSequence");

	ABP_RemoteDronePod_C_DoAttackSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteDronePod.BP_RemoteDronePod_C.SpawnDrone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 DroneClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RemoteDronePod_C::SpawnDrone(class UClass** DroneClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteDronePod.BP_RemoteDronePod_C.SpawnDrone");

	ABP_RemoteDronePod_C_SpawnDrone_Params params;
	params.DroneClass = DroneClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteDronePod.BP_RemoteDronePod_C.OnReadyForRestow
// (BlueprintCallable, BlueprintEvent)

void ABP_RemoteDronePod_C::OnReadyForRestow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteDronePod.BP_RemoteDronePod_C.OnReadyForRestow");

	ABP_RemoteDronePod_C_OnReadyForRestow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteDronePod.BP_RemoteDronePod_C.ExecuteUbergraph_BP_RemoteDronePod
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RemoteDronePod_C::ExecuteUbergraph_BP_RemoteDronePod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteDronePod.BP_RemoteDronePod_C.ExecuteUbergraph_BP_RemoteDronePod");

	ABP_RemoteDronePod_C_ExecuteUbergraph_BP_RemoteDronePod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RemoteDronePod.BP_RemoteDronePod_C.UnstowFinishedSpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TrainingRemote_C*    RemoteDrone                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_RemoteDronePod_C::UnstowFinishedSpawned__DelegateSignature(class ABP_TrainingRemote_C* RemoteDrone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemoteDronePod.BP_RemoteDronePod_C.UnstowFinishedSpawned__DelegateSignature");

	ABP_RemoteDronePod_C_UnstowFinishedSpawned__DelegateSignature_Params params;
	params.RemoteDrone = RemoteDrone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
