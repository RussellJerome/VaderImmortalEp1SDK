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

// UserDefinedStruct DeathAnimationInfo.DeathAnimationInfo
// 0x0038
struct FDeathAnimationInfo
{
	class UAnimMontage*                                Montage_2_9061288B44E002D642737DA94F759EE3;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<EDamageStrength>                            StrikeStrengthRequred_12_CD5D935347DB84D2873F369659C5B119;// 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EDamageDirection>>              StrikeDirectionRequired_13_382BB3DD4CABBAF6440754916E41A8A7;// 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<EDamageType>                                StrikeDamageTypeRequired_16_5AAA6CFC47B3CA55359630A8AE53CAF1;// 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
