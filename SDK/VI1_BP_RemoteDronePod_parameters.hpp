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

// Function BP_RemoteDronePod.BP_RemoteDronePod_C.UserConstructionScript
struct ABP_RemoteDronePod_C_UserConstructionScript_Params
{
};

// Function BP_RemoteDronePod.BP_RemoteDronePod_C.DoAttackSequence
struct ABP_RemoteDronePod_C_DoAttackSequence_Params
{
};

// Function BP_RemoteDronePod.BP_RemoteDronePod_C.SpawnDrone
struct ABP_RemoteDronePod_C_SpawnDrone_Params
{
	class UClass**                                     DroneClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RemoteDronePod.BP_RemoteDronePod_C.OnReadyForRestow
struct ABP_RemoteDronePod_C_OnReadyForRestow_Params
{
};

// Function BP_RemoteDronePod.BP_RemoteDronePod_C.ExecuteUbergraph_BP_RemoteDronePod
struct ABP_RemoteDronePod_C_ExecuteUbergraph_BP_RemoteDronePod_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RemoteDronePod.BP_RemoteDronePod_C.UnstowFinishedSpawned__DelegateSignature
struct ABP_RemoteDronePod_C_UnstowFinishedSpawned__DelegateSignature_Params
{
	class ABP_TrainingRemote_C*                        RemoteDrone;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
