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

// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.CanSpawnEnemy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FEnemySpawnData         EnemySpawnData                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::CanSpawnEnemy(const struct FEnemySpawnData& EnemySpawnData, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.CanSpawnEnemy");

	ABP_WKNDWaveManager_C_CanSpawnEnemy_Params params;
	params.EnemySpawnData = EnemySpawnData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.IsWaveOngoing
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Ongoing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::IsWaveOngoing(bool* Ongoing)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.IsWaveOngoing");

	ABP_WKNDWaveManager_C_IsWaveOngoing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ongoing != nullptr)
		*Ongoing = params.Ongoing;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.SetWaveDataProviderClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  WaveDataProviderClass          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::SetWaveDataProviderClass(class UClass* WaveDataProviderClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.SetWaveDataProviderClass");

	ABP_WKNDWaveManager_C_SetWaveDataProviderClass_Params params;
	params.WaveDataProviderClass = WaveDataProviderClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.SetWaveDataTable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*              WaveDataTable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::SetWaveDataTable(class UDataTable* WaveDataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.SetWaveDataTable");

	ABP_WKNDWaveManager_C_SetWaveDataTable_Params params;
	params.WaveDataTable = WaveDataTable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetSpawnableEnemies
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int>                    SpawnableEnemyIndices          (Parm, OutParm, ZeroConstructor)

void ABP_WKNDWaveManager_C::GetSpawnableEnemies(TArray<int>* SpawnableEnemyIndices)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetSpawnableEnemies");

	ABP_WKNDWaveManager_C_GetSpawnableEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnableEnemyIndices != nullptr)
		*SpawnableEnemyIndices = params.SpawnableEnemyIndices;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EnemyWaveType>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EnemyWaveType> ABP_WKNDWaveManager_C::GetCurrentWaveType()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveType");

	ABP_WKNDWaveManager_C_GetCurrentWaveType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetRemainingTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_WKNDWaveManager_C::GetRemainingTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetRemainingTime");

	ABP_WKNDWaveManager_C_GetRemainingTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveDuration
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_WKNDWaveManager_C::GetCurrentWaveDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveDuration");

	ABP_WKNDWaveManager_C_GetCurrentWaveDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.IsOnFinalWave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsFinalWave                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::IsOnFinalWave(bool* IsFinalWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.IsOnFinalWave");

	ABP_WKNDWaveManager_C_IsOnFinalWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinalWave != nullptr)
		*IsFinalWave = params.IsFinalWave;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CurrentWaveName                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::GetCurrentWaveName(struct FName* CurrentWaveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveName");

	ABP_WKNDWaveManager_C_GetCurrentWaveName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWaveName != nullptr)
		*CurrentWaveName = params.CurrentWaveName;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            CurrentWaveIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::GetCurrentWaveIndex(int* CurrentWaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.GetCurrentWaveIndex");

	ABP_WKNDWaveManager_C_GetCurrentWaveIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWaveIndex != nullptr)
		*CurrentWaveIndex = params.CurrentWaveIndex;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginLastWave
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::BeginLastWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginLastWave");

	ABP_WKNDWaveManager_C_BeginLastWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginTimerForLastWave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::BeginTimerForLastWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginTimerForLastWave");

	ABP_WKNDWaveManager_C_BeginTimerForLastWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.Reset");

	ABP_WKNDWaveManager_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ForceDestroyRemainingEnemies
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::ForceDestroyRemainingEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ForceDestroyRemainingEnemies");

	ABP_WKNDWaveManager_C_ForceDestroyRemainingEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleAbortWave
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEnemyWaveData          WaveData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsFinalWave                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::HandleAbortWave(const struct FName& WaveName, int WaveIndex, const struct FEnemyWaveData& WaveData, bool IsFinalWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleAbortWave");

	ABP_WKNDWaveManager_C_HandleAbortWave_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;
	params.WaveData = WaveData;
	params.IsFinalWave = IsFinalWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.AbortWave
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::AbortWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.AbortWave");

	ABP_WKNDWaveManager_C_AbortWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.KillRemainingEnemies
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::KillRemainingEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.KillRemainingEnemies");

	ABP_WKNDWaveManager_C_KillRemainingEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.DespawnRemainingEnemies
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::DespawnRemainingEnemies()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.DespawnRemainingEnemies");

	ABP_WKNDWaveManager_C_DespawnRemainingEnemies_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleEndWave
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEnemyWaveData          WaveData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsFinalWave                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::HandleEndWave(const struct FName& WaveName, int WaveIndex, const struct FEnemyWaveData& WaveData, bool IsFinalWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleEndWave");

	ABP_WKNDWaveManager_C_HandleEndWave_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;
	params.WaveData = WaveData;
	params.IsFinalWave = IsFinalWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleBeginWave
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEnemyWaveData          WaveData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsFinalWave                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::HandleBeginWave(const struct FName& WaveName, int WaveIndex, const struct FEnemyWaveData& WaveData, bool IsFinalWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleBeginWave");

	ABP_WKNDWaveManager_C_HandleBeginWave_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;
	params.WaveData = WaveData;
	params.IsFinalWave = IsFinalWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginTimerForNextWave
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::BeginTimerForNextWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginTimerForNextWave");

	ABP_WKNDWaveManager_C_BeginTimerForNextWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.CleanupWave
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::CleanupWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.CleanupWave");

	ABP_WKNDWaveManager_C_CleanupWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginNextWave
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::BeginNextWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginNextWave");

	ABP_WKNDWaveManager_C_BeginNextWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleEnemySpawned
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::HandleEnemySpawned(class APawn* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleEnemySpawned");

	ABP_WKNDWaveManager_C_HandleEnemySpawned_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.CheckPendingSpawns
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::CheckPendingSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.CheckPendingSpawns");

	ABP_WKNDWaveManager_C_CheckPendingSpawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.DebugPrintWaveMessage
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 inString                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Is_Error_Message               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::DebugPrintWaveMessage(const struct FString& inString, bool Is_Error_Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.DebugPrintWaveMessage");

	ABP_WKNDWaveManager_C_DebugPrintWaveMessage_Params params;
	params.inString = inString;
	params.Is_Error_Message = Is_Error_Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.DebugPrintWaveInfo
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::DebugPrintWaveInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.DebugPrintWaveInfo");

	ABP_WKNDWaveManager_C_DebugPrintWaveInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.EndWave
// (Protected, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::EndWave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.EndWave");

	ABP_WKNDWaveManager_C_EndWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleEnemyKilled
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::HandleEnemyKilled(class APawn* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.HandleEnemyKilled");

	ABP_WKNDWaveManager_C_HandleEnemyKilled_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginWave
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnemyWaveData          WaveData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDWaveManager_C::BeginWave(const struct FEnemyWaveData& WaveData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginWave");

	ABP_WKNDWaveManager_C_BeginWave_Params params;
	params.WaveData = WaveData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginWaveByName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::BeginWaveByName(const struct FName& WaveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginWaveByName");

	ABP_WKNDWaveManager_C_BeginWaveByName_Params params;
	params.WaveName = WaveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginWaveByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::BeginWaveByIndex(int WaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.BeginWaveByIndex");

	ABP_WKNDWaveManager_C_BeginWaveByIndex_Params params;
	params.WaveIndex = WaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.InitWaveManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_WKNDWaveManager_C::InitWaveManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.InitWaveManager");

	ABP_WKNDWaveManager_C_InitWaveManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.UserConstructionScript");

	ABP_WKNDWaveManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ReceiveTick");

	ABP_WKNDWaveManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WKNDWaveManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ReceiveBeginPlay");

	ABP_WKNDWaveManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ExecuteUbergraph_BP_WKNDWaveManager
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::ExecuteUbergraph_BP_WKNDWaveManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.ExecuteUbergraph_BP_WKNDWaveManager");

	ABP_WKNDWaveManager_C_ExecuteUbergraph_BP_WKNDWaveManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnAbortWave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::OnAbortWave__DelegateSignature(const struct FName& WaveName, int WaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnAbortWave__DelegateSignature");

	ABP_WKNDWaveManager_C_OnAbortWave__DelegateSignature_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnEnemyKilled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::OnEnemyKilled__DelegateSignature(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnEnemyKilled__DelegateSignature");

	ABP_WKNDWaveManager_C_OnEnemyKilled__DelegateSignature_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnEnemySpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::OnEnemySpawned__DelegateSignature(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnEnemySpawned__DelegateSignature");

	ABP_WKNDWaveManager_C_OnEnemySpawned__DelegateSignature_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnAllWavesCleared__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_WKNDWaveManager_C::OnAllWavesCleared__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnAllWavesCleared__DelegateSignature");

	ABP_WKNDWaveManager_C_OnAllWavesCleared__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnEndWave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::OnEndWave__DelegateSignature(const struct FName& WaveName, int WaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnEndWave__DelegateSignature");

	ABP_WKNDWaveManager_C_OnEndWave__DelegateSignature_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnBeginWave__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDWaveManager_C::OnBeginWave__DelegateSignature(const struct FName& WaveName, int WaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDWaveManager.BP_WKNDWaveManager_C.OnBeginWave__DelegateSignature");

	ABP_WKNDWaveManager_C_OnBeginWave__DelegateSignature_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
