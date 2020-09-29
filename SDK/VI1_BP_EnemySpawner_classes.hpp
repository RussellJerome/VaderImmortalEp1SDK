#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_EnemySpawner.BP_EnemySpawner_C
// 0x0118 (0x0430 - 0x0318)
class ABP_EnemySpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnEnemyKilled;                                            // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnemySpawned;                                           // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnemyDespawnRequested;                                  // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                NumSpawnPoints;                                           // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEnemySpawnAnimCompleted;                                // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpawnPointReleased;                                     // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0380(0x0050) UNKNOWN PROPERTY: SetProperty BP_EnemySpawner.BP_EnemySpawner_C.VacantSpawnPoints
	unsigned char                                      UnknownData02[0x50];                                      // 0x03D0(0x0050) UNKNOWN PROPERTY: SetProperty BP_EnemySpawner.BP_EnemySpawner_C.OccupiedSpawnPoints
	TArray<struct FDelayedEnemySpawnData>              DelayedEnemySpawns;                                       // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EnemySpawner.BP_EnemySpawner_C");
		return ptr;
	}


	void GetRandomVacantSpawnPointFromList(TArray<int>* PotentialSpawnPoints, int* SelectedSpawnPoint);
	void TickDelayedSpawns();
	void SpawnEnemyDelayed(const struct FEnemySpawnData& SpawnData);
	void CanSpawnEnemy(const struct FEnemySpawnData& SpawnData, bool* Result);
	void GetSpawnPointForEnemy(class APawn* Enemy, int* SpawnPoint);
	bool IsSpawnPointVacant(int SpawnPointIndex);
	void HandleEnemyKilled(class AActor* Enemy, const struct FWKNDDamageInfo& DamageInfo);
	void ResetSpawnPoints();
	void ReleaseSpawnPoint(int Spawn_Point);
	void OccupySpawnPoint(class APawn* Enemy, int SpawnPointIndex);
	void InitSpawnPoints(int InNumSpawnPoints);
	bool HasVacantSpawnPoints();
	void GetVacantSpawnPoint(int DesiredIndex, int* SpawnPointIndex);
	void InitSpawner();
	void SpawnEnemy(class UClass* EnemyClass, int SpawnIndex, bool* Success, class APawn** Enemy);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_EnemySpawner(int EntryPoint);
	void OnSpawnPointReleased__DelegateSignature(class ABP_EnemySpawner_C* Spawner, int SpawnPointIndex);
	void OnEnemySpawnAnimCompleted__DelegateSignature(class AActor* SpawnedEnemy);
	void OnEnemyDespawnRequested__DelegateSignature(class APawn* Enemy);
	void OnEnemySpawned__DelegateSignature(class APawn* Enemy);
	void OnEnemyKilled__DelegateSignature(class APawn* Enemy);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
