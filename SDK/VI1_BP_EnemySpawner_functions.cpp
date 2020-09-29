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

// Function BP_EnemySpawner.BP_EnemySpawner_C.GetRandomVacantSpawnPointFromList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int>                    PotentialSpawnPoints           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            SelectedSpawnPoint             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::GetRandomVacantSpawnPointFromList(TArray<int>* PotentialSpawnPoints, int* SelectedSpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.GetRandomVacantSpawnPointFromList");

	ABP_EnemySpawner_C_GetRandomVacantSpawnPointFromList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PotentialSpawnPoints != nullptr)
		*PotentialSpawnPoints = params.PotentialSpawnPoints;
	if (SelectedSpawnPoint != nullptr)
		*SelectedSpawnPoint = params.SelectedSpawnPoint;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.TickDelayedSpawns
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_EnemySpawner_C::TickDelayedSpawns()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.TickDelayedSpawns");

	ABP_EnemySpawner_C_TickDelayedSpawns_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.SpawnEnemyDelayed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEnemySpawnData         SpawnData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_EnemySpawner_C::SpawnEnemyDelayed(const struct FEnemySpawnData& SpawnData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.SpawnEnemyDelayed");

	ABP_EnemySpawner_C_SpawnEnemyDelayed_Params params;
	params.SpawnData = SpawnData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.CanSpawnEnemy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FEnemySpawnData         SpawnData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::CanSpawnEnemy(const struct FEnemySpawnData& SpawnData, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.CanSpawnEnemy");

	ABP_EnemySpawner_C_CanSpawnEnemy_Params params;
	params.SpawnData = SpawnData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.GetSpawnPointForEnemy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnPoint                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::GetSpawnPointForEnemy(class APawn* Enemy, int* SpawnPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.GetSpawnPointForEnemy");

	ABP_EnemySpawner_C_GetSpawnPointForEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPoint != nullptr)
		*SpawnPoint = params.SpawnPoint;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.IsSpawnPointVacant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            SpawnPointIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EnemySpawner_C::IsSpawnPointVacant(int SpawnPointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.IsSpawnPointVacant");

	ABP_EnemySpawner_C_IsSpawnPointVacant_Params params;
	params.SpawnPointIndex = SpawnPointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.HandleEnemyKilled
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_EnemySpawner_C::HandleEnemyKilled(class AActor* Enemy, const struct FWKNDDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.HandleEnemyKilled");

	ABP_EnemySpawner_C_HandleEnemyKilled_Params params;
	params.Enemy = Enemy;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.ResetSpawnPoints
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EnemySpawner_C::ResetSpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.ResetSpawnPoints");

	ABP_EnemySpawner_C_ResetSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.ReleaseSpawnPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Spawn_Point                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::ReleaseSpawnPoint(int Spawn_Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.ReleaseSpawnPoint");

	ABP_EnemySpawner_C_ReleaseSpawnPoint_Params params;
	params.Spawn_Point = Spawn_Point;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.OccupySpawnPoint
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnPointIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::OccupySpawnPoint(class APawn* Enemy, int SpawnPointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.OccupySpawnPoint");

	ABP_EnemySpawner_C_OccupySpawnPoint_Params params;
	params.Enemy = Enemy;
	params.SpawnPointIndex = SpawnPointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.InitSpawnPoints
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InNumSpawnPoints               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::InitSpawnPoints(int InNumSpawnPoints)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.InitSpawnPoints");

	ABP_EnemySpawner_C_InitSpawnPoints_Params params;
	params.InNumSpawnPoints = InNumSpawnPoints;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.HasVacantSpawnPoints
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_EnemySpawner_C::HasVacantSpawnPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.HasVacantSpawnPoints");

	ABP_EnemySpawner_C_HasVacantSpawnPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.GetVacantSpawnPoint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            DesiredIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnPointIndex                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::GetVacantSpawnPoint(int DesiredIndex, int* SpawnPointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.GetVacantSpawnPoint");

	ABP_EnemySpawner_C_GetVacantSpawnPoint_Params params;
	params.DesiredIndex = DesiredIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPointIndex != nullptr)
		*SpawnPointIndex = params.SpawnPointIndex;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.InitSpawner
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_EnemySpawner_C::InitSpawner()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.InitSpawner");

	ABP_EnemySpawner_C_InitSpawner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.SpawnEnemy
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  EnemyClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Enemy                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::SpawnEnemy(class UClass* EnemyClass, int SpawnIndex, bool* Success, class APawn** Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.SpawnEnemy");

	ABP_EnemySpawner_C_SpawnEnemy_Params params;
	params.EnemyClass = EnemyClass;
	params.SpawnIndex = SpawnIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
	if (Enemy != nullptr)
		*Enemy = params.Enemy;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_EnemySpawner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.UserConstructionScript");

	ABP_EnemySpawner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.ReceiveTick");

	ABP_EnemySpawner_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.ExecuteUbergraph_BP_EnemySpawner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::ExecuteUbergraph_BP_EnemySpawner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.ExecuteUbergraph_BP_EnemySpawner");

	ABP_EnemySpawner_C_ExecuteUbergraph_BP_EnemySpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.OnSpawnPointReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EnemySpawner_C*      Spawner                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnPointIndex                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::OnSpawnPointReleased__DelegateSignature(class ABP_EnemySpawner_C* Spawner, int SpawnPointIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.OnSpawnPointReleased__DelegateSignature");

	ABP_EnemySpawner_C_OnSpawnPointReleased__DelegateSignature_Params params;
	params.Spawner = Spawner;
	params.SpawnPointIndex = SpawnPointIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemySpawnAnimCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  SpawnedEnemy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::OnEnemySpawnAnimCompleted__DelegateSignature(class AActor* SpawnedEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemySpawnAnimCompleted__DelegateSignature");

	ABP_EnemySpawner_C_OnEnemySpawnAnimCompleted__DelegateSignature_Params params;
	params.SpawnedEnemy = SpawnedEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemyDespawnRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::OnEnemyDespawnRequested__DelegateSignature(class APawn* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemyDespawnRequested__DelegateSignature");

	ABP_EnemySpawner_C_OnEnemyDespawnRequested__DelegateSignature_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemySpawned__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::OnEnemySpawned__DelegateSignature(class APawn* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemySpawned__DelegateSignature");

	ABP_EnemySpawner_C_OnEnemySpawned__DelegateSignature_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemyKilled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_EnemySpawner_C::OnEnemyKilled__DelegateSignature(class APawn* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EnemySpawner.BP_EnemySpawner_C.OnEnemyKilled__DelegateSignature");

	ABP_EnemySpawner_C_OnEnemyKilled__DelegateSignature_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
