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

// BlueprintGeneratedClass BP_WaveDataProvider.BP_WaveDataProvider_C
// 0x0000 (0x0028 - 0x0028)
class UBP_WaveDataProvider_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WaveDataProvider.BP_WaveDataProvider_C");
		return ptr;
	}


	void GetWaveData(const struct FName& WaveName, bool* WaveExists, struct FEnemyWaveData* Wave);
	void GetAllWaveNames(TArray<struct FName>* WaveNames);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
