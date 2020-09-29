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

// UserDefinedStruct EnemySpawnData.EnemySpawnData
// 0x0020
struct FEnemySpawnData
{
	class UClass*                                      EnemyClass_18_9CA6D06F4B1317F9820F2FB55E95F65C;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	TArray<int>                                        SpawnIndexOptions_16_D14E864A4534ED3781B98DA38198E1CB;    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              DelayBeforeSpawn_8_8C29DC0F4BD177B8D2062DAB149D7CA9;      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxNumberAtATime_21_B1B276DB45C60156FE6A539BDE09B580;     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
