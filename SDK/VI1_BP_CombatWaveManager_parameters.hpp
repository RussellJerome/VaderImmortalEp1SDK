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

// Function BP_CombatWaveManager.BP_CombatWaveManager_C.InitWaveManager
struct ABP_CombatWaveManager_C_InitWaveManager_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_CombatWaveManager.BP_CombatWaveManager_C.UserConstructionScript
struct ABP_CombatWaveManager_C_UserConstructionScript_Params
{
};

// Function BP_CombatWaveManager.BP_CombatWaveManager_C.Event Handle Enemy Spawn Completed
struct ABP_CombatWaveManager_C_Event_Handle_Enemy_Spawn_Completed_Params
{
	class AActor*                                      SpawnedEnemy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CombatWaveManager.BP_CombatWaveManager_C.HandleBeginWave
struct ABP_CombatWaveManager_C_HandleBeginWave_Params
{
	struct FName*                                      WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEnemyWaveData*                             WaveData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsFinalWave;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CombatWaveManager.BP_CombatWaveManager_C.HandleEndWave
struct ABP_CombatWaveManager_C_HandleEndWave_Params
{
	struct FName*                                      WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEnemyWaveData*                             WaveData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsFinalWave;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CombatWaveManager.BP_CombatWaveManager_C.HandleAbortWave
struct ABP_CombatWaveManager_C_HandleAbortWave_Params
{
	struct FName*                                      WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEnemyWaveData*                             WaveData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsFinalWave;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CombatWaveManager.BP_CombatWaveManager_C.Reset
struct ABP_CombatWaveManager_C_Reset_Params
{
};

// Function BP_CombatWaveManager.BP_CombatWaveManager_C.ExecuteUbergraph_BP_CombatWaveManager
struct ABP_CombatWaveManager_C_ExecuteUbergraph_BP_CombatWaveManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
