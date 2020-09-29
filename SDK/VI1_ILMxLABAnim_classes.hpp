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

// Class ILMxLABAnim.AnimationDebugComponent
// 0x0170 (0x0260 - 0x00F0)
class UAnimationDebugComponent : public UActorComponent
{
public:
	TArray<struct FShowBoneEntry>                      ShowBones;                                                // 0x00F0(0x0010) (ZeroConstructor, Config)
	struct FInputActionKeyMapping                      PauseActionMapping;                                       // 0x0100(0x0028) (Config)
	struct FInputActionKeyMapping                      SingleFrameStepActionMapping;                             // 0x0128(0x0028) (Config)
	struct FInputActionKeyMapping                      SelectSkeletalMeshActionMapping;                          // 0x0150(0x0028) (Config)
	struct FInputActionKeyMapping                      ToggleFreeCamActionMapping;                               // 0x0178(0x0028) (Config)
	struct FVector                                     DefaultDebugTextOffset;                                   // 0x01A0(0x000C) (Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	TArray<struct FActorTypeAnimDebugInfo>             ActorTypeAnimDebugInfo;                                   // 0x01B0(0x0010) (ZeroConstructor, Config)
	bool                                               DebugIgnore_AnimNode_BlendSpaceEvaluator;                 // 0x01C0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_BlendSpacePlayer;                    // 0x01C1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_PoseByName;                          // 0x01C2(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_PoseHandler;                         // 0x01C3(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_PoseSnapshot;                        // 0x01C4(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_RandomPlayer;                        // 0x01C5(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_RefPose;                             // 0x01C6(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_SequenceEvaluator;                   // 0x01C7(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_Slot;                                // 0x01C8(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_SequencePlayer;                      // 0x01C9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_UseCachedPose;                       // 0x01CA(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_AimOffsetLookAt;                     // 0x01CB(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DebugIgnore_AnimNode_RotationOffsetBlendSpace;            // 0x01CC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               DrawAABBAroundSelected;                                   // 0x01CD(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x01CE(0x0002) MISSED OFFSET
	struct FName                                       MainSkeletalMeshComponentTag;                             // 0x01D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CheckOwnerParentForPlayerController;                      // 0x01D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x87];                                      // 0x01D9(0x0087) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ILMxLABAnim.AnimationDebugComponent");
		return ptr;
	}


	void OnBecomeLocalPlayer();
};


// Class ILMxLABAnim.AnimationDockingComponent
// 0x0050 (0x0140 - 0x00F0)
class UAnimationDockingComponent : public UActorComponent
{
public:
	struct FName                                       MainSkeletalMeshComponentTag;                             // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x00F8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ILMxLABAnim.AnimationDockingComponent");
		return ptr;
	}


	void UpdateDocking(const struct FDockingRequestHandle& Handle, const struct FTransform& destTransform);
	struct FDockingRequestHandle SetRelevantAnimInStateDockDestinationByTime(const struct FName& StateName, const struct FTransform& destTransform, float dockStartTime, float dockEndTime, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor);
	struct FDockingRequestHandle SetRelevantAnimInStateDockDestinationByEvent(const struct FName& StateName, const struct FTransform& destTransform, const struct FName& dockStartEvent, const struct FName& dockEndEvent, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor);
	struct FDockingRequestHandle SetMontageDockDestinationByTime(class UAnimMontage* Montage, const struct FTransform& destTransform, float dockStartTime, float dockEndTime, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor);
	struct FDockingRequestHandle SetMontageDockDestinationByEvent(class UAnimMontage* Montage, const struct FTransform& destTransform, const struct FName& dockStartEvent, const struct FName& dockEndEvent, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor);
	struct FDockingRequestHandle SetDockDestinationByTime(const struct FName& AssetName, const struct FTransform& destTransform, float dockStartTime, float dockEndTime, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor);
	struct FDockingRequestHandle SetDockDestinationByEvent(const struct FName& AssetName, const struct FTransform& destTransform, const struct FName& dockStartEvent, const struct FName& dockEndEvent, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTimeAActor, class AActor* destParentActor);
	struct FDockingRequestHandle SetBlendSpaceDockDestinationByTime(class UBlendSpaceBase* BlendSpace, const struct FTransform& destTransform, float dockStartTime, float dockEndTime, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor);
	struct FDockingRequestHandle SetBlendSpaceDockDestinationByEvent(class UBlendSpaceBase* BlendSpace, const struct FTransform& destTransform, const struct FName& dockStartEvent, const struct FName& dockEndEvent, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor);
	struct FDockingRequestHandle SetAnimSequenceDockDestinationByTime(class UAnimSequence* AnimSeq, const struct FTransform& destTransform, float dockStartTime, float dockEndTime, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor);
	struct FDockingRequestHandle SetAnimSequenceDockDestinationByEvent(class UAnimSequence* AnimSeq, const struct FTransform& destTransform, const struct FName& dockStartEvent, const struct FName& dockEndEvent, const struct FName& dockBone, int dockingFlags, int parallelDockingRootComponents, float parallelDockingRootComponentsDockTime, class AActor* destParentActor);
	int STATIC_RootComponentsToInt(TEnumAsByte<ERootComponentFlags> flag);
	bool RequestHandleValid(const struct FDockingRequestHandle& Handle);
	bool IsDocking(const struct FDockingRequestHandle& Handle);
	float GetDockPercentage(const struct FDockingRequestHandle& Handle);
	int STATIC_DockingFlagToInt(TEnumAsByte<EDockingFlags> flag);
	void ClearAllDocking();
};


// Class ILMxLABAnim.MirrorAnimationAsset
// 0x0010 (0x0088 - 0x0078)
class UMirrorAnimationAsset : public UProxyAnimationAsset
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0078(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ILMxLABAnim.MirrorAnimationAsset");
		return ptr;
	}

};


// Class ILMxLABAnim.FreeCameraComponent
// 0x0078 (0x0168 - 0x00F0)
class UFreeCameraComponent : public UActorComponent
{
public:
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x00F0(0x0010) (ZeroConstructor, Config)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // 0x0100(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0110(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ILMxLABAnim.FreeCameraComponent");
		return ptr;
	}

};


// Class ILMxLABAnim.MirrorTableAsset
// 0x0018 (0x0040 - 0x0028)
class UMirrorTableAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ILMxLABAnim.MirrorTableAsset");
		return ptr;
	}

};


// Class ILMxLABAnim.MirrorTableComponent
// 0x0010 (0x0100 - 0x00F0)
class UMirrorTableComponent : public UActorComponent
{
public:
	class UMirrorTableAsset*                           MirrorTableAsset;                                         // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ILMxLABAnim.MirrorTableComponent");
		return ptr;
	}

};


// Class ILMxLABAnim.SkeletalMeshActorMovementComponent
// 0x0060 (0x0150 - 0x00F0)
class USkeletalMeshActorMovementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET
	struct FName                                       MainSkeletalMeshComponentTag;                             // 0x0140(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SweepMove;                                                // 0x0148(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0149(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ILMxLABAnim.SkeletalMeshActorMovementComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
