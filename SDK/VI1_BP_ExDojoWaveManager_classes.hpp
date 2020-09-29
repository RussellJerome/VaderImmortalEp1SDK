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

// BlueprintGeneratedClass BP_ExDojoWaveManager.BP_ExDojoWaveManager_C
// 0x0161 (0x0681 - 0x0520)
class ABP_ExDojoWaveManager_C : public ABP_CombatWaveManager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0520(0x0008) (Transient, DuplicateTransient)
	bool                                               DebugStartFromFirstWave_;                                 // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	class ABP_HoloDronePod_C*                          HoloDronePod;                                             // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                RewardsDisplayTimerHandle;                                // 0x0538(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                                   FirstWaveCooldownRange;                                   // 0x0540(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   LastWaveCooldownRange;                                    // 0x0548(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FScriptMulticastDelegate                    NewWaveStarted;                                           // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    WavesComplete;                                            // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    WaveFailed;                                               // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       RequestedWaveName;                                        // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        UnleashedWaveIndexes;                                     // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FExtendedDojoCombatMusicData>     StandardCombatMusicVariants;                              // 0x0598(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FExtendedDojoCombatMusicData>     UnleashedCombatMusicVariants;                             // 0x05E8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FExtendedDojoCombatMusicData                DefaultStandardCombatMusic;                               // 0x0638(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FExtendedDojoCombatMusicData                DefaultUnleashedCombatMusic;                              // 0x0658(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UWKNDHealthComponent*                        PlayerHealthComponent;                                    // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               HasFailedWave;                                            // 0x0680(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExDojoWaveManager.BP_ExDojoWaveManager_C");
		return ptr;
	}


	void IsOnFinalWave(bool* IsFinalWave);
	void SetPlayerVulnerability(bool ShouldBeVulnerable);
	void FindCombatMusicVariantForWave(int Index, TMap<int, struct FExtendedDojoCombatMusicData> CombatMusicVariants, bool* VariantFound_, struct FExtendedDojoCombatMusicData* CombatMusicData);
	void GetWaveTypeForRequestedWave(TEnumAsByte<EnemyWaveType>* Wave_Type);
	void FindCombatMusicDataForWave(int WaveIndex, struct FExtendedDojoCombatMusicData* CombatMusicData);
	void GetNumberOfUnleashedWavesPassed(int Index, int* NumUnleashedWavesPassed);
	void GetCurrentWaveIndex(int* CurrentWaveIndex);
	void HideRewards();
	void DisplayRewards();
	bool FindHoloDronePod(class ABP_HoloDronePod_C** HoloDronePod);
	bool InitWaveManager();
	void SetRequestedWave(const struct FName& RequestedWaveName);
	void GetNextWave(const struct FName& CurrentWaveName, struct FName* NextWaveName, int* NextWaveIndex);
	void LogPerformance(const struct FName& Label);
	void SaveWave(const struct FName& CurrentWaveName);
	void BeginWaveManager(bool* Success_);
	void UserConstructionScript();
	void Request_Next_Wave();
	void Request_Replay_Current_Wave();
	void ReceiveBeginPlay();
	void Handle_Begin_Wave_Manager(const struct FName& Loaded_Wave_Name, int Loaded_Wave_Index);
	void Begin_Requested_Wave();
	void HandleAbortWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave);
	void OnHolodroneDisplayRound();
	void HandleBeginWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave);
	void HandleEndWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave);
	void ExecuteUbergraph_BP_ExDojoWaveManager(int EntryPoint);
	void WaveFailed__DelegateSignature();
	void WavesComplete__DelegateSignature();
	void NewWaveStarted__DelegateSignature(const struct FName& NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
