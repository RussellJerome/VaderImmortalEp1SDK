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

// UserDefinedStruct LightsaberColorData.LightsaberColorData
// 0x0048
struct FLightsaberColorData
{
	class UMaterialInstance*                           BladeMaterial_5_7E5837664E763078F069D7B52CB8371E;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LightColor_9_F0CF1C0940D3F50518754094D5C1FFF6;            // 0x0008(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                SCGlowColor_15_53863DF04D825A50A617AC8BAF8C3A2F;          // 0x0018(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                NumMedalsRequired_18_944CFF0E45CEEC81CDEB04BA85D29DFD;    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	class UTexture*                                    RewardIcon_21_AFD85D37438A22DBE5B30BAAC4D000EE;           // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                DeflectionFXColor_25_B9C8E84644C9B2BDB9F5DB8055AB2A1E;    // 0x0038(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
