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

// Function BP_CombatWaveManager.BP_CombatWaveManager_C.InitWaveManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_CombatWaveManager_C::InitWaveManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatWaveManager.BP_CombatWaveManager_C.InitWaveManager");

	ABP_CombatWaveManager_C_InitWaveManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_CombatWaveManager.BP_CombatWaveManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CombatWaveManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatWaveManager.BP_CombatWaveManager_C.UserConstructionScript");

	ABP_CombatWaveManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CombatWaveManager.BP_CombatWaveManager_C.Event Handle Enemy Spawn Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedEnemy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CombatWaveManager_C::Event_Handle_Enemy_Spawn_Completed(class AActor* SpawnedEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatWaveManager.BP_CombatWaveManager_C.Event Handle Enemy Spawn Completed");

	ABP_CombatWaveManager_C_Event_Handle_Enemy_Spawn_Completed_Params params;
	params.SpawnedEnemy = SpawnedEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CombatWaveManager.BP_CombatWaveManager_C.HandleBeginWave
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEnemyWaveData*         WaveData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsFinalWave                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CombatWaveManager_C::HandleBeginWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatWaveManager.BP_CombatWaveManager_C.HandleBeginWave");

	ABP_CombatWaveManager_C_HandleBeginWave_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;
	params.WaveData = WaveData;
	params.IsFinalWave = IsFinalWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CombatWaveManager.BP_CombatWaveManager_C.HandleEndWave
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEnemyWaveData*         WaveData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsFinalWave                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CombatWaveManager_C::HandleEndWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatWaveManager.BP_CombatWaveManager_C.HandleEndWave");

	ABP_CombatWaveManager_C_HandleEndWave_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;
	params.WaveData = WaveData;
	params.IsFinalWave = IsFinalWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CombatWaveManager.BP_CombatWaveManager_C.HandleAbortWave
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEnemyWaveData*         WaveData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsFinalWave                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CombatWaveManager_C::HandleAbortWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatWaveManager.BP_CombatWaveManager_C.HandleAbortWave");

	ABP_CombatWaveManager_C_HandleAbortWave_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;
	params.WaveData = WaveData;
	params.IsFinalWave = IsFinalWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CombatWaveManager.BP_CombatWaveManager_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_CombatWaveManager_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatWaveManager.BP_CombatWaveManager_C.Reset");

	ABP_CombatWaveManager_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CombatWaveManager.BP_CombatWaveManager_C.ExecuteUbergraph_BP_CombatWaveManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CombatWaveManager_C::ExecuteUbergraph_BP_CombatWaveManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CombatWaveManager.BP_CombatWaveManager_C.ExecuteUbergraph_BP_CombatWaveManager");

	ABP_CombatWaveManager_C_ExecuteUbergraph_BP_CombatWaveManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
