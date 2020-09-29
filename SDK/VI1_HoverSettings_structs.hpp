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

// UserDefinedStruct HoverSettings.HoverSettings
// 0x0040
struct FHoverSettings
{
	struct FVector                                     MaxOffsetBounds_5_7A2C6C4D49D50CA9C5982A8856CDE532;       // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MinOffsetBounds_4_0AD3EFF54343D20807B9D2BB9F8DDEE0;       // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MinRetargetFreq_8_8DCEB30D47BA6C1F93F36185CC899A88;       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRetargetFreq_10_213C04524FDB0DBBE4BF0D90280BDC53;      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RetargetSpeed_12_7464E4854D01FB8520B1D8A47DB873B4;        // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RetargetAccel_14_AB293AAA4E89CF07D37E1A8C0308FE64;        // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NoiseFreq_17_B8FAB40845709ADAF95EBF91161398AC;            // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     NoiseAmplitude_19_354B4B954C98B650E565A39D2F90564F;       // 0x0034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
