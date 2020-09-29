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

// Enum ILMxLABAnim.EBoneDrawType
enum class EBoneDrawType : uint8_t
{
	Axis                           = 0,
	Arrow                          = 1,
	EBoneDrawType_MAX              = 2
};


// Enum ILMxLABAnim.ERootComponentFlags
enum class ERootComponentFlags : uint8_t
{
	X_Correction                   = 0,
	Y_Correction                   = 1,
	Z_Correction                   = 2,
	Roll_Correction                = 3,
	Yaw_Correction                 = 4,
	Pitch_Correction               = 5,
	Translation_Correction         = 6,
	Rotation_Correction            = 7,
	ERootComponentFlags_MAX        = 8
};


// Enum ILMxLABAnim.EDockingFlags
enum class EDockingFlags : uint8_t
{
	No_X_Correction                = 0,
	No_Y_Correction                = 1,
	No_Z_Correction                = 2,
	No_Roll_Correction             = 3,
	No_Yaw_Correction              = 4,
	No_Pitch_Correction            = 5,
	No_Translation_Correction      = 6,
	No_Rotation_Correction         = 7,
	No_MAX                         = 8
};


// Enum ILMxLABAnim.ESavedBoneSpace
enum class ESavedBoneSpace : uint8_t
{
	Local                          = 0,
	Model                          = 1,
	World                          = 2,
	ESavedBoneSpace_MAX            = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ILMxLABAnim.ShowBoneEntry
// 0x0028
struct FShowBoneEntry
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               MeshBoneNames;                                            // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FColor                                      Color;                                                    // 0x0018(0x0004) (Edit, IsPlainOldData)
	TEnumAsByte<EBoneDrawType>                         DrawPrimitive;                                            // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	float                                              PrimitiveScale;                                           // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct ILMxLABAnim.SubGraphAnimDebugInfo
// 0x0020
struct FSubGraphAnimDebugInfo
{
	struct FName                                       SubGraphName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DebugTextAlignBoneName;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DebugTextOffset;                                          // 0x0010(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ILMxLABAnim.ActorTypeAnimDebugInfo
// 0x0018
struct FActorTypeAnimDebugInfo
{
	struct FName                                       ActorClassName;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSubGraphAnimDebugInfo>              SubGraphDebugInfo;                                        // 0x0008(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ILMxLABAnim.DockingRequestHandle
// 0x0004
struct FDockingRequestHandle
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
};

// ScriptStruct ILMxLABAnim.ParamRange
// 0x0008
struct FParamRange
{
	float                                              MinParamRange;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxParamRange;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ILMxLABAnim.Animation_BlendListByParamRangeNode
// 0x0020 (0x00E8 - 0x00C8)
struct FAnimation_BlendListByParamRangeNode : public FAnimNode_BlendListBase
{
	TArray<struct FParamRange>                         ParamRanges;                                              // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Parameter;                                                // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00DC(0x000C) MISSED OFFSET
};

// ScriptStruct ILMxLABAnim.AnimationDebugComponentAlwaysTickFunction
// 0x0008 (0x0058 - 0x0050)
struct FAnimationDebugComponentAlwaysTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct ILMxLABAnim.AnimationDockingNode
// 0x0030 (0x0060 - 0x0030)
struct FAnimationDockingNode : public FAnimNode_Base
{
	struct FPoseLink                                   DockedNode;                                               // 0x0030(0x0018) (Edit, BlueprintVisible)
	bool                                               PoseIsMirrored;                                           // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0049(0x0017) MISSED OFFSET
};

// ScriptStruct ILMxLABAnim.AnimationMirrorPoseNode
// 0x0038 (0x0068 - 0x0030)
struct FAnimationMirrorPoseNode : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0030(0x0018) (Edit, BlueprintVisible)
	bool                                               MirrorRootMotion;                                         // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x0049(0x001F) MISSED OFFSET
};

// ScriptStruct ILMxLABAnim.SavedBoneInfo
// 0x0080
struct FSavedBoneInfo
{
	struct FBoneReference                              BoneName;                                                 // 0x0000(0x0018) (Edit)
	TEnumAsByte<ESavedBoneSpace>                       BoneSpace;                                                // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               WriteToOwnerActor;                                        // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
	class UClass*                                      ComponentToWrite;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       PropertyToWrite;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0030(0x0050) MISSED OFFSET
};

// ScriptStruct ILMxLABAnim.AnimationSaveBoneTransformNode
// 0x0028 (0x0058 - 0x0030)
struct FAnimationSaveBoneTransformNode : public FAnimNode_Base
{
	struct FPoseLink                                   InputPose;                                                // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FSavedBoneInfo>                      SaveBones;                                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
