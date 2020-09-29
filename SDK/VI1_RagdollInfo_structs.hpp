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

// UserDefinedStruct RagdollInfo.RagdollInfo
// 0x0014
struct FRagdollInfo
{
	struct FName                                       BoneName_2_A0E3708F45D4018204C5589032BFF4E6;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldBreakConstraints_5_52FCCF184C901476BAE3FBB3E7A29C0F;// 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ConstraintBreakingChance_8_AC524ED14F6D8910B44B0D98E70B15CE;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollChance_11_3470EB564637C05503D5219A106644F0;        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
