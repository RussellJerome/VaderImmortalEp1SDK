#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum NTAnimation.EContainsResult
enum class EContainsResult : uint8_t
{
	Contained                      = 0,
	NotContained                   = 1,
	EContainsResult_MAX            = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NTAnimation.FixedCategoryNameDropdown
// 0x0010
struct FFixedCategoryNameDropdown
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SourceName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct NTAnimation.AnimTypeDropdown
// 0x0000 (0x0010 - 0x0010)
struct FAnimTypeDropdown : public FFixedCategoryNameDropdown
{

};

// ScriptStruct NTAnimation.FrameRequestDropdown
// 0x0000 (0x0010 - 0x0010)
struct FFrameRequestDropdown : public FFixedCategoryNameDropdown
{

};

// ScriptStruct NTAnimation.NTAnimVarStruct
// 0x0058
struct FNTAnimVarStruct
{
	float                                              HorizontalSpeed;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalSpeed;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForwardsSpeed;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SidewaysSpeed;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveDirectionAngle;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnAngle;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimAnglePitch;                                            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimAngleYaw;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WantsToMove;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsInAir;                                                  // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0022(0x0002) MISSED OFFSET
	float                                              FullBodyBlendAlpha;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AnimatedActionDesc;                                       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimatedTime;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FAnimTypeDropdown>                   SpecialAnimTypes;                                         // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FFrameRequestDropdown>               FrameRequests;                                            // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct NTAnimation.NTAnimListStruct
// 0x0020
struct FNTAnimListStruct
{
	struct FAnimTypeDropdown                           ListName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UClass*                                      ListType;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UNTAnimList*                                 ListInstance;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};

// ScriptStruct NTAnimation.AnimActionDropdown
// 0x0000 (0x0010 - 0x0010)
struct FAnimActionDropdown : public FFixedCategoryNameDropdown
{

};

// ScriptStruct NTAnimation.NTAnimStructBase
// 0x0010
struct FNTAnimStructBase
{
	bool                                               Looping;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       ListTag;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTAnimation.NTAnimAimOffset1DStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimAimOffset1DStruct : public FNTAnimStructBase
{
	class UAimOffsetBlendSpace1D*                      Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace1D*                      ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTAnimation.NTAnimAimOffsetStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimAimOffsetStruct : public FNTAnimStructBase
{
	class UAimOffsetBlendSpace*                        Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTAnimation.NTAnimBlendSpace1DStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimBlendSpace1DStruct : public FNTAnimStructBase
{
	class UBlendSpace1D*                               Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTAnimation.NTAnimBlendSpaceStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimBlendSpaceStruct : public FNTAnimStructBase
{
	class UBlendSpace*                                 Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTAnimation.NTAnimMontageStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimMontageStruct : public FNTAnimStructBase
{
	class UAnimMontage*                                Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTAnimation.NTAnimSequenceStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimSequenceStruct : public FNTAnimStructBase
{
	class UAnimSequence*                               Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
