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

// Enum NTLibsEngine.ETestBlueprintType
enum class ETestBlueprintType : uint8_t
{
	SmokeTest                      = 0,
	NormalTest                     = 1,
	StressTest                     = 2,
	ETestBlueprintType_MAX         = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NTLibsEngine.NTAnimationListStruct
// 0x0018
struct FNTAnimationListStruct
{
	struct FName                                       ListName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ListType;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UNTAnimationList*                            ListInstance;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
};

// ScriptStruct NTLibsEngine.NTAnimationStructBase
// 0x0010
struct FNTAnimationStructBase
{
	bool                                               Looping;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       ListTag;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibsEngine.NTAnimationAimOffset1DStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimationAimOffset1DStruct : public FNTAnimationStructBase
{
	class UAimOffsetBlendSpace1D*                      Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace1D*                      ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibsEngine.NTAnimationAimOffsetStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimationAimOffsetStruct : public FNTAnimationStructBase
{
	class UAimOffsetBlendSpace*                        Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAimOffsetBlendSpace*                        ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibsEngine.NTAnimationBlendSpace1DStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimationBlendSpace1DStruct : public FNTAnimationStructBase
{
	class UBlendSpace1D*                               Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace1D*                               ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibsEngine.NTAnimationBlendSpaceStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimationBlendSpaceStruct : public FNTAnimationStructBase
{
	class UBlendSpace*                                 Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibsEngine.NTAnimationMontageStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimationMontageStruct : public FNTAnimationStructBase
{
	class UAnimMontage*                                Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibsEngine.NTAnimationSequenceStruct
// 0x0010 (0x0020 - 0x0010)
struct FNTAnimationSequenceStruct : public FNTAnimationStructBase
{
	class UAnimSequence*                               Animation;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ExtraAnimation;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibsEngine.NTAnimNode_FootIK
// 0x00D0 (0x0140 - 0x0070)
struct FNTAnimNode_FootIK : public FAnimNode_SkeletalControlBase
{
	struct FBoneReference                              RootBone;                                                 // 0x0070(0x0018) (Edit)
	struct FBoneReference                              HipBone;                                                  // 0x0088(0x0018) (Edit)
	TArray<struct FBoneReference>                      FootBones;                                                // 0x00A0(0x0010) (Edit, ZeroConstructor)
	bool                                               RotateRootBoneToFloor;                                    // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AdjustHipBone;                                            // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MatchFootBonesToFloor;                                    // 0x00B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00B3(0x0001) MISSED OFFSET
	float                                              MaxHipMovement;                                           // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HipBlendSpeed;                                            // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RootBlendSpeed;                                           // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFloorFootOffset;                                       // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LimitFootBoneRotation;                                    // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	float                                              FootHeightMaxRotation;                                    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootHeightMinRotation;                                    // 0x00CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BlendFootOffset;                                          // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D1(0x0003) MISSED OFFSET
	float                                              FootOnFloorHeight;                                        // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootOffFloorHeight;                                       // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootOffsetBlendSpeed;                                     // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCollisionResponseContainer                 FloorSweepResponse;                                       // 0x00E0(0x0020) (Edit, BlueprintVisible)
	struct FVector                                     CurrentFloorNormal;                                       // 0x0100(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               DoLineSweeps;                                             // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x33];                                      // 0x010D(0x0033) MISSED OFFSET
};

// ScriptStruct NTLibsEngine.NTTimedTokenInstance
// 0x0018
struct FNTTimedTokenInstance
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct NTLibsEngine.NTTokenInstance
// 0x0140
struct FNTTokenInstance
{
	unsigned char                                      UnknownData00[0x140];                                     // 0x0000(0x0140) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
