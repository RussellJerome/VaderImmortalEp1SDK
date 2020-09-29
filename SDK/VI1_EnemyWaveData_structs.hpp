#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct EnemyWaveData.EnemyWaveData
// 0x0030
struct FEnemyWaveData
{
	struct FString                                     WaveDescriptionOptional_22_5ED502E743C0891A7CF41384A433D6A4;// 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FEnemySpawnData>                     Enemies_33_45A54FDF4C3A6E02AB1FDA81F6F8FF75;              // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EnemyWaveType>                         WaveType_23_ACDBAD4F41B85389E8B0C1AF4248FC70;             // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                MaxEnemiesAtATimeInWave_42_938611BD40A3FB6964A26FB5DC4126BE;// 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaveDuration_24_FDA83A354ACFE575F4797DB6A6E6BA1F;         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayBeforeNextWave_27_2E5B8D664DC61B59F937DB9817FD632F;  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
