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

// UserDefinedStruct SpeakingCharacterSetup.SpeakingCharacterSetup
// 0x0010
struct FSpeakingCharacterSetup
{
	TEnumAsByte<ESpeakingCharacter>                    Character_2_1D779BB0429F180BC3420EB6B11FF509;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       SpeakingBone_5_C24AB0B54A4A16B39DCF1DBAEAD9EB01;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
