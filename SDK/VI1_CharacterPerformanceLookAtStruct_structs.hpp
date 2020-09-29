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

// UserDefinedStruct CharacterPerformanceLookAtStruct.CharacterPerformanceLookAtStruct
// 0x0044
struct FCharacterPerformanceLookAtStruct
{
	bool                                               UseProceduralBlink_21_785ABCC04C9B7BEB8B2E5E88E72F0253;   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseTargetSpeedBlink_22_CF358A3040600B95A577F98BA57A2FE2;  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class UAnimSequenceBase*                           ASBlink_3_F322364B402D3452D06CD783D534F485;               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           ASBlinkAdditive_4_F839646E410362939823209728BA77DA;       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkMovementSpeedPlayRateScale_7_DB64715C4F7C2B81F39BF78AFBF14F21;// 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkTimerSpeedPlayRateScale_9_4971C282430DC298371CD786866D1F16;// 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        AOLookAtBody_17_55B5128F4BB5E449158E928A5D7AC300;         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        AOLookAtEyes_16_3DBCF5FA46B6E663DA2AB29A99C914FB;         // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace1D*                      AOLookAtDistance_15_584F1CCC437AC058427B379DE9A235C3;     // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkMovementSensitivity_25_013F95DC4A9FADDB8F707D9EBDBCBD37;// 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BlinkTimerRandomLimits_28_8BB7100644D6F511E7A958A0270B0B66;// 0x003C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
