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

// Function BP_EnemySpawner.BP_EnemySpawner_C.GetRandomVacantSpawnPointFromList
struct ABP_EnemySpawner_C_GetRandomVacantSpawnPointFromList_Params
{
	TArray<int>                                        PotentialSpawnPoints;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                SelectedSpawnPoint;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.TickDelayedSpawns
struct ABP_EnemySpawner_C_TickDelayedSpawns_Params
{
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.SpawnEnemyDelayed
struct ABP_EnemySpawner_C_SpawnEnemyDelayed_Params
{
	struct FEnemySpawnData                             SpawnData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.CanSpawnEnemy
struct ABP_EnemySpawner_C_CanSpawnEnemy_Params
{
	struct FEnemySpawnData                             SpawnData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.GetSpawnPointForEnemy
struct ABP_EnemySpawner_C_GetSpawnPointForEnemy_Params
{
	class APawn*                                       Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnPoint;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.IsSpawnPointVacant
struct ABP_EnemySpawner_C_IsSpawnPointVacant_Params
{
	int                                                SpawnPointIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.HandleEnemyKilled
struct ABP_EnemySpawner_C_HandleEnemyKilled_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FWKNDDamageInfo                             DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.ResetSpawnPoints
struct ABP_EnemySpawner_C_ResetSpawnPoints_Params
{
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.ReleaseSpawnPoint
struct ABP_EnemySpawner_C_ReleaseSpawnPoint_Params
{
	int                                                Spawn_Point;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.OccupySpawnPoint
struct ABP_EnemySpawner_C_OccupySpawnPoint_Params
{
	class APawn*                                       Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnPointIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.InitSpawnPoints
struct ABP_EnemySpawner_C_InitSpawnPoints_Params
{
	int                                                InNumSpawnPoints;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.HasVacantSpawnPoints
struct ABP_EnemySpawner_C_HasVacantSpawnPoints_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.GetVacantSpawnPoint
struct ABP_EnemySpawner_C_GetVacantSpawnPoint_Params
{
	int                                                DesiredIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnPointIndex;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.InitSpawner
struct ABP_EnemySpawner_C_InitSpawner_Params
{
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.SpawnEnemy
struct ABP_EnemySpawner_C_SpawnEnemy_Params
{
	class UClass*                                      EnemyClass;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Enemy;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.UserConstructionScript
struct ABP_EnemySpawner_C_UserConstructionScript_Params
{
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.ReceiveTick
struct ABP_EnemySpawner_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.ExecuteUbergraph_BP_EnemySpawner
struct ABP_EnemySpawner_C_ExecuteUbergraph_BP_EnemySpawner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.OnSpawnPointReleased__DelegateSignature
struct ABP_EnemySpawner_C_OnSpawnPointReleased__DelegateSignature_Params
{
	class ABP_EnemySpawner_C*                          Spawner;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnPointIndex;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemySpawnAnimCompleted__DelegateSignature
struct ABP_EnemySpawner_C_OnEnemySpawnAnimCompleted__DelegateSignature_Params
{
	class AActor*                                      SpawnedEnemy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemyDespawnRequested__DelegateSignature
struct ABP_EnemySpawner_C_OnEnemyDespawnRequested__DelegateSignature_Params
{
	class APawn*                                       Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemySpawned__DelegateSignature
struct ABP_EnemySpawner_C_OnEnemySpawned__DelegateSignature_Params
{
	class APawn*                                       Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemyKilled__DelegateSignature
struct ABP_EnemySpawner_C_OnEnemyKilled__DelegateSignature_Params
{
	class APawn*                                       Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
