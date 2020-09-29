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

// BlueprintGeneratedClass BP_WKNDWaveManager.BP_WKNDWaveManager_C
// 0x01F8 (0x0510 - 0x0318)
class ABP_WKNDWaveManager_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDataTable*                                  WaveDataTable;                                            // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               WaveNames;                                                // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnBeginWave;                                              // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndWave;                                                // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FEnemyWaveData                              CurrentWaveData;                                          // 0x0360(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentWaveIndex;                                         // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFinalWave;                                              // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	int                                                NumRemainingEnemies;                                      // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<struct FEnemySpawnData>                     UnspawnedEnemies;                                         // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<class UClass*, class ABP_EnemySpawner_C*>     EnemySpawners;                                            // 0x03B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0400(0x0050) UNKNOWN PROPERTY: SetProperty BP_WKNDWaveManager.BP_WKNDWaveManager_C.SpawnedEnemies
	struct FTimerHandle                                TimeRemainingHandle;                                      // 0x0450(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnAllWavesCleared;                                        // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTimerHandle                                TimeBeforeNextWaveHandle;                                 // 0x0468(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               EnableDebugMessages;                                      // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnEnemySpawned;                                           // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEnemyKilled;                                            // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               AutoBeginNextWave_;                                       // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0499(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAbortWave;                                              // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               PrintDebugMessagesToScreen;                               // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRestartingLastWave;                                     // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnInStrictOrder;                                       // 0x04B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x04B3(0x0005) MISSED OFFSET
	class UBP_WaveDataProvider_C*                      WaveDataProvider;                                         // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class UClass*, int>                           EnemyNumberMaximum;                                       // 0x04C0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WKNDWaveManager.BP_WKNDWaveManager_C");
		return ptr;
	}


	void CanSpawnEnemy(const struct FEnemySpawnData& EnemySpawnData, bool* Result);
	void IsWaveOngoing(bool* Ongoing);
	void SetWaveDataProviderClass(class UClass* WaveDataProviderClass);
	void SetWaveDataTable(class UDataTable* WaveDataTable);
	void GetSpawnableEnemies(TArray<int>* SpawnableEnemyIndices);
	TEnumAsByte<EnemyWaveType> GetCurrentWaveType();
	float GetRemainingTime();
	float GetCurrentWaveDuration();
	void IsOnFinalWave(bool* IsFinalWave);
	void GetCurrentWaveName(struct FName* CurrentWaveName);
	void GetCurrentWaveIndex(int* CurrentWaveIndex);
	void BeginLastWave();
	void BeginTimerForLastWave();
	void Reset();
	void ForceDestroyRemainingEnemies();
	void HandleAbortWave(const struct FName& WaveName, int WaveIndex, const struct FEnemyWaveData& WaveData, bool IsFinalWave);
	void AbortWave();
	void KillRemainingEnemies();
	void DespawnRemainingEnemies();
	void HandleEndWave(const struct FName& WaveName, int WaveIndex, const struct FEnemyWaveData& WaveData, bool IsFinalWave);
	void HandleBeginWave(const struct FName& WaveName, int WaveIndex, const struct FEnemyWaveData& WaveData, bool IsFinalWave);
	void BeginTimerForNextWave();
	void CleanupWave();
	void BeginNextWave();
	void HandleEnemySpawned(class APawn* Enemy);
	void CheckPendingSpawns();
	void DebugPrintWaveMessage(const struct FString& inString, bool Is_Error_Message);
	void DebugPrintWaveInfo();
	void EndWave();
	void HandleEnemyKilled(class APawn* Enemy);
	void BeginWave(const struct FEnemyWaveData& WaveData);
	void BeginWaveByName(const struct FName& WaveName);
	void BeginWaveByIndex(int WaveIndex);
	bool InitWaveManager();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WKNDWaveManager(int EntryPoint);
	void OnAbortWave__DelegateSignature(const struct FName& WaveName, int WaveIndex);
	void OnEnemyKilled__DelegateSignature(class AActor* Enemy);
	void OnEnemySpawned__DelegateSignature(class AActor* Enemy);
	void OnAllWavesCleared__DelegateSignature();
	void OnEndWave__DelegateSignature(const struct FName& WaveName, int WaveIndex);
	void OnBeginWave__DelegateSignature(const struct FName& WaveName, int WaveIndex);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
