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

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.IsOnFinalWave
struct ABP_ExDojoWaveManager_C_IsOnFinalWave_Params
{
	bool                                               IsFinalWave;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.SetPlayerVulnerability
struct ABP_ExDojoWaveManager_C_SetPlayerVulnerability_Params
{
	bool                                               ShouldBeVulnerable;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.FindCombatMusicVariantForWave
struct ABP_ExDojoWaveManager_C_FindCombatMusicVariantForWave_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FExtendedDojoCombatMusicData>     CombatMusicVariants;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               VariantFound_;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FExtendedDojoCombatMusicData                CombatMusicData;                                          // (Parm, OutParm)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetWaveTypeForRequestedWave
struct ABP_ExDojoWaveManager_C_GetWaveTypeForRequestedWave_Params
{
	TEnumAsByte<EnemyWaveType>                         Wave_Type;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.FindCombatMusicDataForWave
struct ABP_ExDojoWaveManager_C_FindCombatMusicDataForWave_Params
{
	int                                                WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FExtendedDojoCombatMusicData                CombatMusicData;                                          // (Parm, OutParm)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetNumberOfUnleashedWavesPassed
struct ABP_ExDojoWaveManager_C_GetNumberOfUnleashedWavesPassed_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumUnleashedWavesPassed;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetCurrentWaveIndex
struct ABP_ExDojoWaveManager_C_GetCurrentWaveIndex_Params
{
	int                                                CurrentWaveIndex;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HideRewards
struct ABP_ExDojoWaveManager_C_HideRewards_Params
{
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.DisplayRewards
struct ABP_ExDojoWaveManager_C_DisplayRewards_Params
{
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.FindHoloDronePod
struct ABP_ExDojoWaveManager_C_FindHoloDronePod_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	class ABP_HoloDronePod_C*                          HoloDronePod;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.InitWaveManager
struct ABP_ExDojoWaveManager_C_InitWaveManager_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.SetRequestedWave
struct ABP_ExDojoWaveManager_C_SetRequestedWave_Params
{
	struct FName                                       RequestedWaveName;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetNextWave
struct ABP_ExDojoWaveManager_C_GetNextWave_Params
{
	struct FName                                       CurrentWaveName;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       NextWaveName;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NextWaveIndex;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.LogPerformance
struct ABP_ExDojoWaveManager_C_LogPerformance_Params
{
	struct FName                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.SaveWave
struct ABP_ExDojoWaveManager_C_SaveWave_Params
{
	struct FName                                       CurrentWaveName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.BeginWaveManager
struct ABP_ExDojoWaveManager_C_BeginWaveManager_Params
{
	bool                                               Success_;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.UserConstructionScript
struct ABP_ExDojoWaveManager_C_UserConstructionScript_Params
{
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Request Next Wave
struct ABP_ExDojoWaveManager_C_Request_Next_Wave_Params
{
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Request Replay Current Wave
struct ABP_ExDojoWaveManager_C_Request_Replay_Current_Wave_Params
{
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.ReceiveBeginPlay
struct ABP_ExDojoWaveManager_C_ReceiveBeginPlay_Params
{
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Handle Begin Wave Manager
struct ABP_ExDojoWaveManager_C_Handle_Begin_Wave_Manager_Params
{
	struct FName                                       Loaded_Wave_Name;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Loaded_Wave_Index;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Begin Requested Wave
struct ABP_ExDojoWaveManager_C_Begin_Requested_Wave_Params
{
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HandleAbortWave
struct ABP_ExDojoWaveManager_C_HandleAbortWave_Params
{
	struct FName*                                      WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEnemyWaveData*                             WaveData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsFinalWave;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.OnHolodroneDisplayRound
struct ABP_ExDojoWaveManager_C_OnHolodroneDisplayRound_Params
{
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HandleBeginWave
struct ABP_ExDojoWaveManager_C_HandleBeginWave_Params
{
	struct FName*                                      WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEnemyWaveData*                             WaveData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsFinalWave;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HandleEndWave
struct ABP_ExDojoWaveManager_C_HandleEndWave_Params
{
	struct FName*                                      WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               WaveIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FEnemyWaveData*                             WaveData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsFinalWave;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.ExecuteUbergraph_BP_ExDojoWaveManager
struct ABP_ExDojoWaveManager_C_ExecuteUbergraph_BP_ExDojoWaveManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.WaveFailed__DelegateSignature
struct ABP_ExDojoWaveManager_C_WaveFailed__DelegateSignature_Params
{
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.WavesComplete__DelegateSignature
struct ABP_ExDojoWaveManager_C_WavesComplete__DelegateSignature_Params
{
};

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.NewWaveStarted__DelegateSignature
struct ABP_ExDojoWaveManager_C_NewWaveStarted__DelegateSignature_Params
{
	struct FName                                       NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
