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

// Enum NTMotionFields.EMotionFieldGraphMovementType
enum class EMotionFieldGraphMovementType : uint8_t
{
	Orientation                    = 0,
	Locomotion                     = 1,
	EMotionFieldGraphMovementType_MAX = 2
};


// Enum NTMotionFields.EMotionFieldBone
enum class EMotionFieldBone : uint8_t
{
	Root                           = 0,
	LeftFoot                       = 1,
	LeftHand                       = 2,
	RightFoot                      = 3,
	RightHand                      = 4,
	SwordTip                       = 5,
	EMotionFieldBone_MAX           = 6
};


// Enum NTMotionFields.EMotionFieldPenaltyType
enum class EMotionFieldPenaltyType : uint8_t
{
	None                           = 0,
	Animation                      = 1,
	Location                       = 2,
	Orientation                    = 3,
	Pose                           = 4,
	EMotionFieldPenaltyType_MAX    = 5
};


// Enum NTMotionFields.EFacingAxis
enum class EFacingAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	NegativeX                      = 2,
	NegativeY                      = 3,
	EFacingAxis_MAX                = 4
};


// Enum NTMotionFields.EMotionFieldAxisPair
enum class EMotionFieldAxisPair : uint8_t
{
	XY                             = 0,
	XZ                             = 1,
	YX                             = 2,
	YZ                             = 3,
	ZX                             = 4,
	ZY                             = 5,
	EMotionFieldAxisPair_MAX       = 6
};


// Enum NTMotionFields.EMotionFieldTargetBone
enum class EMotionFieldTargetBone : uint8_t
{
	Root                           = 0,
	LeftFoot                       = 1,
	LeftHand                       = 2,
	RightFoot                      = 3,
	RightHand                      = 4,
	SwordTip                       = 5,
	EMotionFieldTargetBone_MAX     = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NTMotionFields.SerializedMotionFieldNode
// 0x0008
struct FSerializedMotionFieldNode
{
	class UMotionFieldGraph_Node*                      Node;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTMotionFields.MotionFieldPose
// 0x01DC
struct FMotionFieldPose
{
	struct FVector                                     BoneLocation[0x5];                                        // 0x0000(0x000C) (IsPlainOldData)
	struct FVector2D                                   RootVelocity;                                             // 0x003C(0x0008) (IsPlainOldData)
	float                                              RootYawRate;                                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     FutureBoneLocation[0x19];                                 // 0x0048(0x000C) (IsPlainOldData)
	struct FVector2D                                   RootLocationHistory[0x6];                                 // 0x0174(0x0008) (IsPlainOldData)
	struct FVector2D                                   FutureRootVelocity;                                       // 0x01A4(0x0008) (IsPlainOldData)
	float                                              YawHistory[0x6];                                          // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x01C4(0x0018) MISSED OFFSET
};

// ScriptStruct NTMotionFields.MotionFieldPose_Data
// 0x0054 (0x0230 - 0x01DC)
struct FMotionFieldPose_Data : public FMotionFieldPose
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x01DC(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           Sequence;                                                 // 0x01E0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FrameTime;                                                // 0x01E8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	struct FName                                       PoseLabel;                                                // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FuturePoseLabel;                                          // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              PoseDistance[0x5];                                        // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FuturePoseDistance[0x5];                                  // 0x0214(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FramesUntilNextPose;                                      // 0x0228(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               SearchTarget;                                             // 0x022C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
};

// ScriptStruct NTMotionFields.MotionFieldCacheData
// 0x0028
struct FMotionFieldCacheData
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FrameDeltaTime;                                           // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CacheIndex;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumFrames;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IdleSequence;                                             // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct NTMotionFields.MotionFieldBookmarkPoseData
// 0x0058
struct FMotionFieldBookmarkPoseData
{
	struct FName                                       Label;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                FrameIndex;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     BonePositions[0x5];                                       // 0x0018(0x000C) (IsPlainOldData)
	bool                                               bUseProceduralRootMotion;                                 // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
};

// ScriptStruct NTMotionFields.MotionFieldTarget
// 0x0200
struct FMotionFieldTarget
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
	class UAnimSequenceBase*                           AnimSeq;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1D8];                                     // 0x0028(0x01D8) MISSED OFFSET
};

// ScriptStruct NTMotionFields.AnimNode_NTMotionField
// 0x1048 (0x10B0 - 0x0068)
struct FAnimNode_NTMotionField : public FAnimNode_Slot
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	struct FMotionFieldTarget                          CharacterRequest;                                         // 0x0070(0x0200) (Edit)
	float                                              PlayRate;                                                 // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0274(0x0004) MISSED OFFSET
	class UMotionFieldGraph_Graph*                     MotionFieldGraph;                                         // 0x0278(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDataTable*>                          Sequences;                                                // 0x0280(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAnimSequenceBase*                           InitialSequence;                                          // 0x0290(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InitialTime;                                              // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EMotionFieldAxisPair                               AnimationYawAxes;                                         // 0x029C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EFacingAxis                                        FacingAxis;                                               // 0x029D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x029E(0x0002) MISSED OFFSET
	float                                              AnimationBlendTime;                                       // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationOffsetDecayTime;                                 // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockingOffsetDecayTime;                                  // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseBlendMaxDistance;                                     // 0x02AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       COGName;                                                  // 0x02B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftFootBone;                                             // 0x02B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootBone;                                            // 0x02C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftFootIKBone;                                           // 0x02C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightFootIKBone;                                          // 0x02D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       LeftHandBone;                                             // 0x02D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       RightHandBone;                                            // 0x02E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SwordAttachBone;                                          // 0x02E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SwordTipTransform;                                        // 0x02F0(0x0030) (Edit, IsPlainOldData)
	TArray<class UDataTable*>                          SetPoses;                                                 // 0x0320(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDataTable*>                          SetPoseSequences;                                         // 0x0330(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              SetPoseSnapRadius;                                        // 0x0340(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SetPoseBlendInTime;                                       // 0x0344(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoseInterpolationBoneWeight[0x5];                         // 0x0348(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoseBlendingDistance;                                     // 0x035C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AdditivePoseIdle;                                         // 0x0360(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AdditivePoseIdleBlendInTime;                              // 0x0368(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseFootIK;                                                // 0x036C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	float                                              FutureLocationWeight;                                     // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumSpeed;                                             // 0x0374(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumTurnRate;                                          // 0x0378(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2BC];                                     // 0x037C(0x02BC) MISSED OFFSET
	class UAnimMontage*                                ActiveMontage;                                            // 0x0638(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xA68];                                     // 0x0640(0x0A68) MISSED OFFSET
	bool                                               IsBaked;                                                  // 0x10A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x10A9(0x0007) MISSED OFFSET
};

// ScriptStruct NTMotionFields.MotionFieldBookmarkPose
// 0x0010
struct FMotionFieldBookmarkPose
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Frame;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct NTMotionFields.MotionFieldPlaySequence
// 0x0018
struct FMotionFieldPlaySequence
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct NTMotionFields.MotionFieldPose_Request
// 0x009C (0x0278 - 0x01DC)
struct FMotionFieldPose_Request : public FMotionFieldPose
{
	unsigned char                                      UnknownData00[0x9C];                                      // 0x01DC(0x009C) MISSED OFFSET
};

// ScriptStruct NTMotionFields.MotionFieldAnimSequence
// 0x0018 (0x0020 - 0x0008)
struct FMotionFieldAnimSequence : public FTableRowBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSearchable;                                              // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bIsIdle;                                                  // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInterval;                                             // 0x0013(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StartFrame;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StopFrame;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PlaybackSpeed;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTMotionFields.MotionFieldReferencePoseSequence
// 0x0018 (0x0020 - 0x0008)
struct FMotionFieldReferencePoseSequence : public FTableRowBase
{
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseInterval;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                StartFrame;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StopFrame;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseProceduralRootMotion;                                 // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct NTMotionFields.MotionFieldReferencePose
// 0x0018 (0x0020 - 0x0008)
struct FMotionFieldReferencePose : public FTableRowBase
{
	struct FName                                       Label;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Sequence;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Frame;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseProceduralRootMotion;                                 // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct NTMotionFields.MotionFieldUtil
// 0x0001
struct FMotionFieldUtil
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
