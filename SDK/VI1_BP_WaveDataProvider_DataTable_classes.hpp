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

// BlueprintGeneratedClass BP_WaveDataProvider_DataTable.BP_WaveDataProvider_DataTable_C
// 0x0008 (0x0030 - 0x0028)
class UBP_WaveDataProvider_DataTable_C : public UBP_WaveDataProvider_C
{
public:
	class UDataTable*                                  DataTable;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaveDataProvider_DataTable.BP_WaveDataProvider_DataTable_C");
		return ptr;
	}


	void GetWaveData(struct FName* WaveName, bool* WaveExists, struct FEnemyWaveData* Wave);
	void GetAllWaveNames(TArray<struct FName>* WaveNames);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
