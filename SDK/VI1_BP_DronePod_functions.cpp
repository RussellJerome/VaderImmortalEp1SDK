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

// Function BP_DronePod.BP_DronePod_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DronePod_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DronePod.BP_DronePod_C.UserConstructionScript");

	ABP_DronePod_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DronePod.BP_DronePod_C.PivotTile__FinishedFunc
// (BlueprintEvent)

void ABP_DronePod_C::PivotTile__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DronePod.BP_DronePod_C.PivotTile__FinishedFunc");

	ABP_DronePod_C_PivotTile__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DronePod.BP_DronePod_C.PivotTile__UpdateFunc
// (BlueprintEvent)

void ABP_DronePod_C::PivotTile__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DronePod.BP_DronePod_C.PivotTile__UpdateFunc");

	ABP_DronePod_C_PivotTile__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DronePod.BP_DronePod_C.SpawnDrone
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DroneClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DronePod_C::SpawnDrone(class UClass* DroneClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DronePod.BP_DronePod_C.SpawnDrone");

	ABP_DronePod_C_SpawnDrone_Params params;
	params.DroneClass = DroneClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DronePod.BP_DronePod_C.Open Hatch
// (BlueprintCallable, BlueprintEvent)

void ABP_DronePod_C::Open_Hatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DronePod.BP_DronePod_C.Open Hatch");

	ABP_DronePod_C_Open_Hatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DronePod.BP_DronePod_C.Close Hatch
// (BlueprintCallable, BlueprintEvent)

void ABP_DronePod_C::Close_Hatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DronePod.BP_DronePod_C.Close Hatch");

	ABP_DronePod_C_Close_Hatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DronePod.BP_DronePod_C.ExecuteUbergraph_BP_DronePod
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DronePod_C::ExecuteUbergraph_BP_DronePod(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DronePod.BP_DronePod_C.ExecuteUbergraph_BP_DronePod");

	ABP_DronePod_C_ExecuteUbergraph_BP_DronePod_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DronePod.BP_DronePod_C.DroneSpawnedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DronePod_C::DroneSpawnedEvent__DelegateSignature(class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DronePod.BP_DronePod_C.DroneSpawnedEvent__DelegateSignature");

	ABP_DronePod_C_DroneSpawnedEvent__DelegateSignature_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
