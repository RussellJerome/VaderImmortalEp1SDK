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

// Function BP_DronePod.BP_DronePod_C.UserConstructionScript
struct ABP_DronePod_C_UserConstructionScript_Params
{
};

// Function BP_DronePod.BP_DronePod_C.PivotTile__FinishedFunc
struct ABP_DronePod_C_PivotTile__FinishedFunc_Params
{
};

// Function BP_DronePod.BP_DronePod_C.PivotTile__UpdateFunc
struct ABP_DronePod_C_PivotTile__UpdateFunc_Params
{
};

// Function BP_DronePod.BP_DronePod_C.SpawnDrone
struct ABP_DronePod_C_SpawnDrone_Params
{
	class UClass*                                      DroneClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DronePod.BP_DronePod_C.Open Hatch
struct ABP_DronePod_C_Open_Hatch_Params
{
};

// Function BP_DronePod.BP_DronePod_C.Close Hatch
struct ABP_DronePod_C_Close_Hatch_Params
{
};

// Function BP_DronePod.BP_DronePod_C.ExecuteUbergraph_BP_DronePod
struct ABP_DronePod_C_ExecuteUbergraph_BP_DronePod_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_DronePod.BP_DronePod_C.DroneSpawnedEvent__DelegateSignature
struct ABP_DronePod_C_DroneSpawnedEvent__DelegateSignature_Params
{
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
