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

// BlueprintGeneratedClass BP_CombatWaveManager.BP_CombatWaveManager_C
// 0x0010 (0x0520 - 0x0510)
class ABP_CombatWaveManager_C : public ABP_WKNDWaveManager_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class ACombatSquad*                                CombatSquad;                                              // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CombatWaveManager.BP_CombatWaveManager_C");
		return ptr;
	}


	bool InitWaveManager();
	void UserConstructionScript();
	void Event_Handle_Enemy_Spawn_Completed(class AActor* SpawnedEnemy);
	void HandleBeginWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave);
	void HandleEndWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave);
	void HandleAbortWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave);
	void Reset();
	void ExecuteUbergraph_BP_CombatWaveManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
