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

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.CanSpawnEnemy
struct ABP_WKNDWaveManager_C_CanSpawnEnemy_Params
{
	struct FEnemySpawnData                             EnemySpawnData;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.IsWaveOngoing
struct ABP_WKNDWaveManager_C_IsWaveOngoing_Params
{
	bool                                               Ongoing;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.SetWaveDataProviderClass
struct ABP_WKNDWaveManager_C_SetWaveDataProviderClass_Params
{
	class UClass*                                      WaveDataProviderClass;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.SetWaveDataTable
struct ABP_WKNDWaveManager_C_SetWaveDataTable_Params
{
	class UDataTable*                                  WaveDataTable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetSpawnableEnemies
struct ABP_WKNDWaveManager_C_GetSpawnableEnemies_Params
{
	TArray<int>                                        SpawnableEnemyIndices;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveType
struct ABP_WKNDWaveManager_C_GetCurrentWaveType_Params
{
	TEnumAsByte<EnemyWaveType>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetRemainingTime
struct ABP_WKNDWaveManager_C_GetRemainingTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveDuration
struct ABP_WKNDWaveManager_C_GetCurrentWaveDuration_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.IsOnFinalWave
struct ABP_WKNDWaveManager_C_IsOnFinalWave_Params
{
	bool                                               IsFinalWave;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveName
struct ABP_WKNDWaveManager_C_GetCurrentWaveName_Params
{
	struct FName                                       CurrentWaveName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveIndex
struct ABP_WKNDWaveManager_C_GetCurrentWaveIndex_Params
{
	int                                                CurrentWaveIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginLastWave
struct ABP_WKNDWaveManager_C_BeginLastWave_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginTimerForLastWave
struct ABP_WKNDWaveManager_C_BeginTimerForLastWave_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.Reset
struct ABP_WKNDWaveManager_C_Reset_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ForceDestroyRemainingEnemies
struct ABP_WKNDWaveManager_C_ForceDestroyRemainingEnemies_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleAbortWave
struct ABP_WKNDWaveManager_C_HandleAbortWave_Params
{
	struct FName                                       WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEnemyWaveData                              WaveData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsFinalWave;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.AbortWave
struct ABP_WKNDWaveManager_C_AbortWave_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.KillRemainingEnemies
struct ABP_WKNDWaveManager_C_KillRemainingEnemies_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.DespawnRemainingEnemies
struct ABP_WKNDWaveManager_C_DespawnRemainingEnemies_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleEndWave
struct ABP_WKNDWaveManager_C_HandleEndWave_Params
{
	struct FName                                       WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEnemyWaveData                              WaveData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsFinalWave;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleBeginWave
struct ABP_WKNDWaveManager_C_HandleBeginWave_Params
{
	struct FName                                       WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEnemyWaveData                              WaveData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsFinalWave;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginTimerForNextWave
struct ABP_WKNDWaveManager_C_BeginTimerForNextWave_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.CleanupWave
struct ABP_WKNDWaveManager_C_CleanupWave_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginNextWave
struct ABP_WKNDWaveManager_C_BeginNextWave_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleEnemySpawned
struct ABP_WKNDWaveManager_C_HandleEnemySpawned_Params
{
	class APawn*                                       Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.CheckPendingSpawns
struct ABP_WKNDWaveManager_C_CheckPendingSpawns_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.DebugPrintWaveMessage
struct ABP_WKNDWaveManager_C_DebugPrintWaveMessage_Params
{
	struct FString                                     inString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Is_Error_Message;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.DebugPrintWaveInfo
struct ABP_WKNDWaveManager_C_DebugPrintWaveInfo_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.EndWave
struct ABP_WKNDWaveManager_C_EndWave_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleEnemyKilled
struct ABP_WKNDWaveManager_C_HandleEnemyKilled_Params
{
	class APawn*                                       Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginWave
struct ABP_WKNDWaveManager_C_BeginWave_Params
{
	struct FEnemyWaveData                              WaveData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginWaveByName
struct ABP_WKNDWaveManager_C_BeginWaveByName_Params
{
	struct FName                                       WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginWaveByIndex
struct ABP_WKNDWaveManager_C_BeginWaveByIndex_Params
{
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.InitWaveManager
struct ABP_WKNDWaveManager_C_InitWaveManager_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.UserConstructionScript
struct ABP_WKNDWaveManager_C_UserConstructionScript_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ReceiveTick
struct ABP_WKNDWaveManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ReceiveBeginPlay
struct ABP_WKNDWaveManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ExecuteUbergraph_BP_WKNDWaveManager
struct ABP_WKNDWaveManager_C_ExecuteUbergraph_BP_WKNDWaveManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnAbortWave__DelegateSignature
struct ABP_WKNDWaveManager_C_OnAbortWave__DelegateSignature_Params
{
	struct FName                                       WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnEnemyKilled__DelegateSignature
struct ABP_WKNDWaveManager_C_OnEnemyKilled__DelegateSignature_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnEnemySpawned__DelegateSignature
struct ABP_WKNDWaveManager_C_OnEnemySpawned__DelegateSignature_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnAllWavesCleared__DelegateSignature
struct ABP_WKNDWaveManager_C_OnAllWavesCleared__DelegateSignature_Params
{
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnEndWave__DelegateSignature
struct ABP_WKNDWaveManager_C_OnEndWave__DelegateSignature_Params
{
	struct FName                                       WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnBeginWave__DelegateSignature
struct ABP_WKNDWaveManager_C_OnBeginWave__DelegateSignature_Params
{
	struct FName                                       WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
