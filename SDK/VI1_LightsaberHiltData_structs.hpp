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

// UserDefinedStruct LightsaberHiltData.LightsaberHiltData
// 0x0060
struct FLightsaberHiltData
{
	struct FText                                       DisplayName_24_9FA57E404D6A98FF42A71393818644F0;          // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UStaticMesh*                                 HiltMesh_2_280D33DC46007DE2C9D3E882886AA230;              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         EnforcedSaberColor_5_F6714D404B2BB18E80C084A8E08A1F05;    // 0x0020(0x0010) (Edit, BlueprintVisible)
	struct FText                                       UnlockHint_25_EBA2C75141F571E27A47B284DC5A3799;           // 0x0030(0x0018) (Edit, BlueprintVisible)
	int                                                NumMedalsRequired_18_088B9F634B562C138D894585418E6D5A;    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FName                                       WaveCompletionRequired_11_7F5C0B804CFA2AC9B4F887BB78615DF8;// 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    RewardIcon_14_3AC4862F475806B8ACD1A6AA6FB53B08;           // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
