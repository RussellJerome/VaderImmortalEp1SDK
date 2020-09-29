#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NTMotionFields.AnimNotify_NTMotionFieldPose
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_NTMotionFieldPose : public UAnimNotify
{
public:
	struct FName                                       PoseName;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTMotionFields.AnimNotify_NTMotionFieldPose");
		return ptr;
	}

};


// Class NTMotionFields.MotionFieldGraph_GraphGameData
// 0x0000 (0x0028 - 0x0028)
class UMotionFieldGraph_GraphGameData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTMotionFields.MotionFieldGraph_GraphGameData");
		return ptr;
	}

};


// Class NTMotionFields.MotionFieldGraph_Graph
// 0x0108 (0x0130 - 0x0028)
class UMotionFieldGraph_Graph : public UObject
{
public:
	EMotionFieldAxisPair                               AnimationYawAxes;                                         // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EFacingAxis                                        FacingAxis;                                               // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x002A(0x0002) MISSED OFFSET
	float                                              AnimationBlendTime;                                       // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AnimationOffsetStartWeight;                               // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DefaultOffsetDecayTime;                                   // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BlockingOffsetDecayTime;                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseBlendMaxDistance;                                     // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeleton*                                   TargetSkeleton;                                           // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       COGName;                                                  // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftFootBone;                                             // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootBone;                                            // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftFootIKBone;                                           // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightFootIKBone;                                          // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftHandBone;                                             // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightHandBone;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SwordAttachBone;                                          // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0088(0x0008) MISSED OFFSET
	struct FTransform                                  SwordTipTransform;                                        // 0x0090(0x0030) (Edit, IsPlainOldData)
	TArray<struct FName>                               IgnorePoseBones;                                          // 0x00C0(0x0010) (Edit, ZeroConstructor)
	TArray<int>                                        IgnorePoseBoneIndices;                                    // 0x00D0(0x0010) (ZeroConstructor)
	float                                              SetPoseSnapRadius;                                        // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SetPoseBlendInTime;                                       // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseInterpolationBoneWeight[0x5];                         // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AdditivePoseIdle;                                         // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AdditivePoseIdleBlendInTime;                              // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseFootIK;                                                // 0x010C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	class UMotionFieldGraph_PoseNode*                  Root;                                                     // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FSerializedMotionFieldNode>          GraphNodes;                                               // 0x0118(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0128(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTMotionFields.MotionFieldGraph_Graph");
		return ptr;
	}

};


// Class NTMotionFields.MotionFieldGraph_Node
// 0x0080 (0x00A8 - 0x0028)
class UMotionFieldGraph_Node : public UObject
{
public:
	TArray<class UAnimSequenceBase*>                   Sequences;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<class UAnimSequenceBase*>                   IdleSequences;                                            // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UDataTable*>                          SetPoses;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<class UDataTable*>                          SetPoseSequences;                                         // 0x0058(0x0010) (Edit, ZeroConstructor)
	float                                              CurrentPoseBias;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PastDistanceBias;                                         // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PastYawBias;                                              // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FutureDistanceBias;                                       // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FutureLocationBias;                                       // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FutureYawBias;                                            // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FootBoneWeight;                                           // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HandBoneWeight;                                           // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TipBoneWeight;                                            // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FutureLocationWeight;                                     // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumSpeed;                                             // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaximumTurnRate;                                          // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UMotionFieldGraph_Node*                      ParentNode;                                               // 0x0098(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UMotionFieldLibrary*                         Library;                                                  // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTMotionFields.MotionFieldGraph_Node");
		return ptr;
	}

};


// Class NTMotionFields.MotionFieldGraph_MovementNode
// 0x0008 (0x00B0 - 0x00A8)
class UMotionFieldGraph_MovementNode : public UMotionFieldGraph_Node
{
public:
	EMotionFieldGraphMovementType                      MovementType;                                             // 0x00A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTMotionFields.MotionFieldGraph_MovementNode");
		return ptr;
	}

};


// Class NTMotionFields.MotionFieldGraph_PoseNode
// 0x0058 (0x0100 - 0x00A8)
class UMotionFieldGraph_PoseNode : public UMotionFieldGraph_Node
{
public:
	TArray<class UMotionFieldGraph_PoseNode*>          PoseNodes;                                                // 0x00A8(0x0010) (ZeroConstructor)
	class UMotionFieldGraph_MovementNode*              TurnNode;                                                 // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMotionFieldGraph_MovementNode*              WalkNode;                                                 // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsRootNode;                                               // 0x00C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET
	struct FName                                       PoseName;                                                 // 0x00D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Sequence;                                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EMotionFieldAxisPair                               AnimationYawAxes;                                         // 0x00E4(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET
	TArray<struct FName>                               Bones;                                                    // 0x00E8(0x0010) (ZeroConstructor, Transient)
	float                                              PoseBlendMaxDistance;                                     // 0x00F8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTMotionFields.MotionFieldGraph_PoseNode");
		return ptr;
	}

};


// Class NTMotionFields.MotionFieldLibrary
// 0x0178 (0x01A0 - 0x0028)
class UMotionFieldLibrary : public UObject
{
public:
	EMotionFieldAxisPair                               AnimationYawAxes;                                         // 0x0028(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FName                                       RootBoneName;                                             // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              FutureLocationWeight;                                     // 0x0038(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PoseMatchingWeight[0x5];                                  // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FTransform                                  SwordTipTransform;                                        // 0x0050(0x0030) (Transient, IsPlainOldData)
	TArray<struct FMotionFieldPose_Data>               AnimSequencePoses;                                        // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FMotionFieldCacheData>               CacheContents;                                            // 0x0090(0x0010) (ZeroConstructor)
	TMap<struct FName, struct FMotionFieldBookmarkPoseData> SetPoseData;                                              // 0x00A0(0x0050) (ZeroConstructor)
	TArray<struct FMotionFieldBookmarkPoseData>        AnonymousPoseData;                                        // 0x00F0(0x0010) (ZeroConstructor)
	TArray<struct FName>                               AnimSequenceLabels;                                       // 0x0100(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0110(0x0048) MISSED OFFSET
	TArray<float>                                      SERIALIZE_PoseTree_Points;                                // 0x0158(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   SERIALIZE_PoseTree_Nodes;                                 // 0x0168(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   SERIALIZE_PoseTree_Indices;                               // 0x0178(0x0010) (ZeroConstructor)
	TArray<uint32_t>                                   SERIALIZE_PoseTree_ReverseIndices;                        // 0x0188(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0198(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTMotionFields.MotionFieldLibrary");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
