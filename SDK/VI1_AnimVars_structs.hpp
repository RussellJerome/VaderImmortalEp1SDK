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

// UserDefinedStruct AnimVars.AnimVars
// 0x0024
struct FAnimVars
{
	bool                                               Cutting_1_FA154B7D43C17A368E681EB0BBFE477A;               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TwoHandBlendRate_4_A90C3A5941523F3D27F2FEB950B8CB32;      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TwoHanded_7_6638A180447674C34DA0A0BD6D109B4F;             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReverseGrip_9_DDD6CDF74630A96193D27C94EBDBDE72;           // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Grabbed_11_B76D851B461CDDA3407F59AB8187B752;              // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              GrabbableDistance_16_247440C6470428F0BE081C8CF0F9E0A0;    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     GrabbableLocation_17_C45B7E8A423CE05D557AF580936B27DE;    // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ObjectRadius_20_40D05F2B4AC37A893AA7109FA8194A67;         // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtraAnimationScrub_23_183E5AD54F50A0B4E33831AB0AAFE862;  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
