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

// UserDefinedStruct ExtendedDojoCombatMusicData.ExtendedDojoCombatMusicData
// 0x0020
struct FExtendedDojoCombatMusicData
{
	class UAkAudioEvent*                               PlayCombatMusicEvent_7_AFC7F027436A29390D19A9B1B311AC42;  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StopCombatMusicEvent_8_650599954119D41458378B96D404BC89;  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               VIctoryOutroMusicEvent_10_5B73DB28433760D1630ECBB407B115CD;// 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               DefeatOutroMusicEvent_13_54EB91C8420BF7F9108E85B9169ECF54;// 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
