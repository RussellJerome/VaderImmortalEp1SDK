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

// Class VRHandInteraction.XLABItemPipelineNode
// 0x0008 (0x0030 - 0x0028)
class UXLABItemPipelineNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABItemPipelineNode");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionModifier
// 0x0020 (0x0048 - 0x0028)
class UXLABInteractionModifier : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TScriptInterface<class UXLABInteractive>           InteractiveOwner;                                         // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionModifier");
		return ptr;
	}


	void OnInteraction(EXLABInteractionEventType InteractionEventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive);
	struct FTransform ModifyTransform(const struct FTransform& OriginalTransform, const TScriptInterface<class UXLABInteractionHandler>& Handler);
	float ModifyStrength(float OriginalStrength, const TScriptInterface<class UXLABInteractionHandler>& Handler);
};


// Class VRHandInteraction.XLABHandlerData
// 0x0000 (0x0028 - 0x0028)
class UXLABHandlerData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABHandlerData");
		return ptr;
	}

};


// Class VRHandInteraction.XLABVRHandData
// 0x0000 (0x0028 - 0x0028)
class UXLABVRHandData : public UXLABHandlerData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABVRHandData");
		return ptr;
	}

};


// Class VRHandInteraction.XLABHandSolver
// 0x0178 (0x01A0 - 0x0028)
class UXLABHandSolver : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0028(0x0140) MISSED OFFSET
	TArray<class UXLABHandPipelineNode*>               PreHandPipelineNodes;                                     // 0x0168(0x0010) (Edit, ExportObject, ZeroConstructor)
	TArray<class UXLABHandPipelineNode*>               PostHandPipelineNodes;                                    // 0x0178(0x0010) (Edit, ExportObject, ZeroConstructor)
	EXLABInteractionState                              PreviousInteractionState;                                 // 0x0188(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EXLABInteractionState                              CurrentInteractionState;                                  // 0x0189(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x018A(0x0006) MISSED OFFSET
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // 0x0190(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABHandSolver");
		return ptr;
	}


	void SetHandler(const TScriptInterface<class UXLABInteractionHandler>& InHandler);
	bool IsSolvedHandNearlyDoneLerping(float Threshold);
	bool IsSolvedHandDoneLerping();
	bool IsSolvedHandDoneAnimating();
	bool IsHandInPositionForGrab(float Tolerance);
	struct FTransform GetInteractionToHandTransformDelta();
	TScriptInterface<class UXLABInteractionHandler> GetHandler();
	struct FTransform GetDesiredTransform();
};


// Class VRHandInteraction.XLABDefaultHandSolver
// 0x0280 (0x0420 - 0x01A0)
class UXLABDefaultHandSolver : public UXLABHandSolver
{
public:
	bool                                               bDrawDebug;                                               // 0x01A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawMayaAxes;                                            // 0x01A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bWaitForAnimationBeforeGrab;                              // 0x01A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01A3(0x0001) MISSED OFFSET
	float                                              MinDistanceForTimeBasedSync;                              // 0x01A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAngleForTimeBasedSync;                                 // 0x01A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeBasedSyncSpeed;                                       // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DistanceBasedSyncFactor;                                  // 0x01B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	struct FXLABHandBones                              HandBones;                                                // 0x01B8(0x0050) (Edit)
	struct FXLABShapeRelativeValueCalculator           AnimationValueCalculator;                                 // 0x0208(0x0038) (Edit, DisableEditOnInstance)
	struct FXLABShapeRelativeValueCalculator           LerpValueCalculator;                                      // 0x0240(0x0038) (Edit, DisableEditOnInstance)
	struct FXLABShapeRelativeValueCalculator           LerpLocationValueCalculator;                              // 0x0278(0x0038) (Edit, DisableEditOnInstance)
	struct FTransform                                  RootBoneTargetTransform;                                  // 0x02B0(0x0030) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AnimationTime;                                            // 0x02E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimationReadyForGrab;                                   // 0x02E4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xAF];                                      // 0x02E5(0x00AF) MISSED OFFSET
	TWeakObjectPtr<class UXLABInteractionData>         InteractiveData;                                          // 0x0394(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x84];                                      // 0x039C(0x0084) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABDefaultHandSolver");
		return ptr;
	}


	class UAnimationAsset* GetAnimationAssetForInteractive(const TScriptInterface<class UXLABInteractive>& Interactive);
};


// Class VRHandInteraction.XLABInteractionData
// 0x0040 (0x0068 - 0x0028)
class UXLABInteractionData : public UObject
{
public:
	EXLABHandlerBoneType                               TrackedBone;                                              // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EXLABHandlerBoneType                               PositioningBone;                                          // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDefaultInteractionBehavior;                           // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CustomInteractionBehaviorFlags;                           // 0x002B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLerpRotationOnly;                                        // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTurnOffCollisionWhenInRange;                             // 0x002D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EXLABInteractionReleaseMethod                      ReleaseMethod;                                            // 0x002E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoReleaseBasedOnDistance;                              // 0x002F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoReleaseDistanceThreshold;                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FXLABInteractionThreshold                   GrabbableThreshold;                                       // 0x0034(0x000C) (Edit, BlueprintVisible)
	struct FXLABInteractionRange                       AnimationRange;                                           // 0x0040(0x0014) (Edit, BlueprintVisible)
	struct FXLABInteractionRange                       LerpRange;                                                // 0x0054(0x0014) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionData");
		return ptr;
	}

};


// Class VRHandInteraction.XLABMotionControllerPipelineNode
// 0x0010 (0x0038 - 0x0028)
class UXLABMotionControllerPipelineNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	bool                                               bDrawDebug;                                               // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABMotionControllerPipelineNode");
		return ptr;
	}

};


// Class VRHandInteraction.XLABAngularRestrictionModifier
// 0x0008 (0x0050 - 0x0048)
class UXLABAngularRestrictionModifier : public UXLABInteractionModifier
{
public:
	float                                              MaxAngle;                                                 // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 RotationAxis;                                             // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EXLABAngularRestrictionType                        RelativeTo;                                               // 0x004D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABAngularRestrictionModifier");
		return ptr;
	}

};


// Class VRHandInteraction.XLABAxisAlignRestrictionModifier
// 0x0008 (0x0050 - 0x0048)
class UXLABAxisAlignRestrictionModifier : public UXLABInteractionModifier
{
public:
	float                                              MaxAngleDegrees;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 AlignmentAxis;                                            // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABAxisAlignRestrictionModifier");
		return ptr;
	}

};


// Class VRHandInteraction.XLABPhysicsPipelineNode
// 0x0008 (0x0030 - 0x0028)
class UXLABPhysicsPipelineNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABPhysicsPipelineNode");
		return ptr;
	}

};


// Class VRHandInteraction.XLABBetweenHandsPhysicsNode
// 0x0070 (0x00A0 - 0x0030)
class UXLABBetweenHandsPhysicsNode : public UXLABPhysicsPipelineNode
{
public:
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              LerpDuration;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0038(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABBetweenHandsPhysicsNode");
		return ptr;
	}

};


// Class VRHandInteraction.XLABControllerComponentNode
// 0x0008 (0x0040 - 0x0038)
class UXLABControllerComponentNode : public UXLABMotionControllerPipelineNode
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABControllerComponentNode");
		return ptr;
	}

};


// Class VRHandInteraction.XLABDefaultHandlerData
// 0x0008 (0x0030 - 0x0028)
class UXLABDefaultHandlerData : public UXLABVRHandData
{
public:
	TEnumAsByte<EXLABHandFlags>                        Flags;                                                    // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABDefaultHandlerData");
		return ptr;
	}

};


// Class VRHandInteraction.XLABHandRestrictionModifier
// 0x0008 (0x0050 - 0x0048)
class UXLABHandRestrictionModifier : public UXLABInteractionModifier
{
public:
	int                                                HandFlags;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABHandRestrictionModifier");
		return ptr;
	}

};


// Class VRHandInteraction.XLABHandRotationalOffsetModifier
// 0x0010 (0x0058 - 0x0048)
class UXLABHandRotationalOffsetModifier : public UXLABInteractionModifier
{
public:
	int                                                HandFlags;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Offset;                                                   // 0x004C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABHandRotationalOffsetModifier");
		return ptr;
	}

};


// Class VRHandInteraction.XLABItemSolver
// 0x0128 (0x0150 - 0x0028)
class UXLABItemSolver : public UObject
{
public:
	unsigned char                                      UnknownData00[0xF0];                                      // 0x0028(0x00F0) MISSED OFFSET
	bool                                               bCanMove;                                                 // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0119(0x0003) MISSED OFFSET
	float                                              WeightSlowdown;                                           // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    InteractionEvent;                                         // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UXLABItemPipelineNode*>               PipelineNodes;                                            // 0x0130(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABItemSolver");
		return ptr;
	}


	void SetCanMove(bool bInCanMove);
	void OnInteraction(EXLABInteractionEventType InteractionEventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive);
	bool IsHeldBy(const TScriptInterface<class UXLABInteractionHandler>& Handler);
	bool IsBeingHeld();
	int GetNumGrabbers();
	TScriptInterface<class UXLABInteractive> GetHeldInteractive(const TScriptInterface<class UXLABInteractionHandler>& Handler);
	int GetHandlerIndex(const TScriptInterface<class UXLABInteractionHandler>& Handler);
	TScriptInterface<class UXLABInteractionHandler> GetHandlerByIndex(int Index);
	bool GetCanMove();
};


// Class VRHandInteraction.XLABDefaultItemSolver
// 0x0000 (0x0150 - 0x0150)
class UXLABDefaultItemSolver : public UXLABItemSolver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABDefaultItemSolver");
		return ptr;
	}

};


// Class VRHandInteraction.XLABHandlerIndexFilter
// 0x0008 (0x0050 - 0x0048)
class UXLABHandlerIndexFilter : public UXLABInteractionModifier
{
public:
	int                                                HandIndex;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABHandlerIndexFilter");
		return ptr;
	}

};


// Class VRHandInteraction.XLABHandPipelineNode
// 0x0008 (0x0030 - 0x0028)
class UXLABHandPipelineNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABHandPipelineNode");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionAnimInstance
// 0x0000 (0x03C0 - 0x03C0)
class UXLABInteractionAnimInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionAnimInstance");
		return ptr;
	}


	void SetHandSolver(class UXLABHandSolver* InHandSolver);
};


// Class VRHandInteraction.XLABInteractionShape
// 0x0028 (0x0050 - 0x0028)
class UXLABInteractionShape : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	float                                              Scale;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FName                                       BoneToTrackOverride;                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              Locator;                                                  // 0x0040(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionShape");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionBoundedPlane
// 0x0018 (0x0068 - 0x0050)
class UXLABInteractionBoundedPlane : public UXLABInteractionShape
{
public:
	struct FVector2D                                   HalfDiagonal;                                             // 0x0050(0x0008) (Edit, IsPlainOldData)
	float                                              InnerDistance;                                            // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterDistance;                                            // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Depth;                                                    // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAreBothSidesInteractive;                                 // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0065(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionBoundedPlane");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionBox
// 0x0020 (0x0070 - 0x0050)
class UXLABInteractionBox : public UXLABInteractionShape
{
public:
	struct FVector                                     OuterDimensions;                                          // 0x0050(0x000C) (Edit, IsPlainOldData)
	float                                              InnerDimensionsRatio;                                     // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BoxSurfaceDimensions;                                     // 0x0060(0x000C) (Edit, IsPlainOldData)
	unsigned char                                      InteractiveSurfaces;                                      // 0x006C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x006D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionBox");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionCylinder
// 0x0010 (0x0060 - 0x0050)
class UXLABInteractionCylinder : public UXLABInteractionShape
{
public:
	float                                              CylinderHeight;                                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CylinderOuterRadius;                                      // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CylinderInnerRadius;                                      // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionCylinder");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionHandler
// 0x0000 (0x0028 - 0x0028)
class UXLABInteractionHandler : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionHandler");
		return ptr;
	}


	class AActor* GetReferenceActor();
	class UXLABMotionControllerPipeline* GetMotionControllerPipeline();
	EXLABInteractionState GetInteractionState();
	class UXLABHandSolver* GetHandSolver();
	struct FTransform GetHandlerWorldTransform(EXLABHandlerBoneType BoneType, EXLABHandlerBoneSpace BoneSpace);
	class UXLABHandlerData* GetHandlerData();
	class USceneComponent* GetGrabberComponent();
	struct FXLABBestInteractiveData GetGrabbedInteractive();
	float GetGrabAmount();
	struct FXLABBestInteractiveData GetBestInteractive();
	void ForceRelease();
	void ForceGrab();
};


// Class VRHandInteraction.XLABInteractionHandlerComponent
// 0x00B0 (0x0340 - 0x0290)
class UXLABInteractionHandlerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
	float                                              MinStrengthForGrab;                                       // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	class UXLABHandlerData*                            HandlerData;                                              // 0x02A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXLABMotionControllerPipeline*               MotionControllerPipeline;                                 // 0x02A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXLABHandSolver*                             HandSolver;                                               // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bInteractionEnabled;                                      // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02B9(0x0007) MISSED OFFSET
	class AActor*                                      RefActor;                                                 // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EXLABInteractionState                              InteractionState;                                         // 0x02C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    StateChangeEvent;                                         // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x40];                                      // 0x02E0(0x0040) MISSED OFFSET
	float                                              GrabAmount;                                               // 0x0320(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class USceneComponent*                             GrabberComp;                                              // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0330(0x0008) MISSED OFFSET
	class AXLABInteractionManager*                     InteractionManager;                                       // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionHandlerComponent");
		return ptr;
	}


	void SetGrabAmount(float InGrabAmount);
	void InitializeGrabbing(class USceneComponent* InGrabberComp, const struct FName& InGrabberSocketName);
	EXLABInteractionState GetInteractionState();
	struct FXLABBestInteractiveData GetGrabbedInteractive();
	float GetGrabAmount();
	struct FXLABBestInteractiveData GetBestInteractive();
	void ForceRelease();
	void ForceGrab();
	bool CanGrab();
};


// Class VRHandInteraction.XLABInteractionItemComponent
// 0x0038 (0x0128 - 0x00F0)
class UXLABInteractionItemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	bool                                               bInteractionEnabled;                                      // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoFindGrabbableComponent;                              // 0x00F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRegisterAreaComponents;                              // 0x00FA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHandlePhysicsEnabledState;                               // 0x00FB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHandleItemLocation;                                      // 0x00FC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	class UXLABItemSolver*                             ItemSolver;                                               // 0x0100(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         PrimitiveComp;                                            // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<TScriptInterface<class UXLABInteractive>>   RegisteredInteractives;                                   // 0x0110(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0120(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionItemComponent");
		return ptr;
	}


	void SetPrimitive(class UPrimitiveComponent* InGrabbableComp);
};


// Class VRHandInteraction.XLABInteractionLineBase
// 0x0010 (0x0060 - 0x0050)
class UXLABInteractionLineBase : public UXLABInteractionShape
{
public:
	float                                              InnerRadius;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bInteractOnSides;                                         // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionLineBase");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionLine
// 0x0008 (0x0068 - 0x0060)
class UXLABInteractionLine : public UXLABInteractionLineBase
{
public:
	float                                              Length;                                                   // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionLine");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionLineFromStartAndEnd
// 0x0010 (0x0070 - 0x0060)
class UXLABInteractionLineFromStartAndEnd : public UXLABInteractionLineBase
{
public:
	class USceneComponent*                             Start;                                                    // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             End;                                                      // 0x0068(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionLineFromStartAndEnd");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionManager
// 0x0040 (0x0358 - 0x0318)
class AXLABInteractionManager : public AActor
{
public:
	struct FScriptMulticastDelegate                    InteractionEvent;                                         // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0328(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionManager");
		return ptr;
	}


	void UnregisterInteractiveGroup(const TScriptInterface<class UXLABInteractiveGroup>& InteractiveGroup);
	void UnregisterInteractive(const TScriptInterface<class UXLABInteractive>& Interactive);
	void RegisterInteractiveGroup(const TScriptInterface<class UXLABInteractiveGroup>& InteractiveGroup);
	void RegisterInteractive(const TScriptInterface<class UXLABInteractive>& Interactive);
	TScriptInterface<class UXLABInteractive> GetStrongestInteractive(const TScriptInterface<class UXLABInteractiveGroup>& Group, const TScriptInterface<class UXLABInteractionHandler>& Handler);
	TArray<struct FXLABLockedInteractionData> GetInteractionDataForInteractive(const TScriptInterface<class UXLABInteractive>& Interactive, EXLABLockedDataType LockedDataType);
	bool GetInteractionDataForHandler(const TScriptInterface<class UXLABInteractionHandler>& InHandler, struct FXLABLockedInteractionData* OutData);
	TArray<struct FXLABLockedInteractionData> GetInteractionDataForGroup(const TScriptInterface<class UXLABInteractiveGroup>& Group, EXLABLockedDataType LockedDataType);
	TScriptInterface<class UXLABInteractiveGroup> GetGroupForInteractive(const TScriptInterface<class UXLABInteractive>& Interactive);
};


// Class VRHandInteraction.XLABInteractionMathUtils
// 0x0000 (0x0028 - 0x0028)
class UXLABInteractionMathUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionMathUtils");
		return ptr;
	}


	struct FVector STATIC_GetClosestPointOnTorus(const struct FVector& Point, const struct FVector& TorusCenter, const struct FVector& TorusNormal, float TorusRadius, float TorusWidth);
	struct FVector STATIC_GetClosestPointOnSquare(const struct FVector& Point, const struct FVector& CenterOfPlane, const struct FRotator& PlaneOrientation, const struct FVector2D& LocalHalfExtents);
	struct FVector STATIC_GetClosestPointOnSphere(const struct FVector& Point, const struct FVector& sphereCenter, float SphereRadius);
	struct FVector STATIC_GetClosestPointOnSegmentWithStartAndEnd(const struct FVector& Point, const struct FVector& SegmentStart, const struct FVector& SegmentEnd);
	struct FVector STATIC_GetClosestPointOnSegment(const struct FVector& Point, const struct FVector& SegmentCenter, const struct FVector& SegmentDirection, float SegmentHalfLength);
	struct FVector STATIC_GetClosestPointOnOpenCylinder(const struct FVector& Point, const struct FVector& CylinderCenter, const struct FVector& CylinderAxis, float CylinderRadius, float CylinderHalfHeight);
	struct FVector STATIC_GetClosestPointOnOpenCone(const struct FVector& Point, const struct FVector& ConeTip, const struct FVector& ConeDirection, float ConeHalfAngleDegrees, float ConeLength);
	struct FVector STATIC_GetClosestPointOnInfinitePlane(const struct FVector& Point, const struct FVector& PointOnPlane, const struct FVector& PlaneNormal);
	struct FVector STATIC_GetClosestPointOnInfiniteLine(const struct FVector& Point, const struct FVector& PointOnLine, const struct FVector& LineDirection);
	struct FVector STATIC_GetClosestPointOnDisc(const struct FVector& Point, const struct FVector& DiscCenter, const struct FVector& DiscNormal, float DiscRadius);
	struct FVector STATIC_GetClosestPointOnClosedCylinder(const struct FVector& Point, const struct FVector& CylinderCenter, const struct FVector& CylinderAxis, float CylinderRadius, float CylinderHalfHeight);
	struct FVector STATIC_GetClosestPointOnClosedCone(const struct FVector& Point, const struct FVector& ConeTip, const struct FVector& ConeDirection, float ConeHalfAngleDegrees, float ConeLength);
	struct FVector STATIC_GetClosestPointOnCircle(const struct FVector& Point, const struct FVector& circleCenter, const struct FVector& CircleNormal, float circleRadius);
	struct FVector STATIC_GetClosestPointOnBox(const struct FVector& Point, const struct FVector& BoxCenter, const struct FRotator& BoxOrientation, const struct FVector& LocalBoxHalfExtents, EXLABBoxSurfaces Surfaces);
	struct FVector STATIC_GetClosestPointOnBoundedPlane(const struct FVector& Point, const struct FVector& CenterOfPlane, const struct FRotator& PlaneOrientation, const struct FVector2D& LocalHalfExtents);
	struct FVector STATIC_GetClosestFaceCenterOnBox(const struct FVector& Point, const struct FVector& BoxCenter, const struct FRotator& BoxOrientation, const struct FVector& LocalBoxHalfExtents, EXLABBoxSurfaces Surfaces);
};


// Class VRHandInteraction.XLABInteractionPhysics
// 0x0000 (0x0028 - 0x0028)
class UXLABInteractionPhysics : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionPhysics");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionPoint
// 0x0008 (0x0058 - 0x0050)
class UXLABInteractionPoint : public UXLABInteractionShape
{
public:
	float                                              OuterSphereRadius;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerSphereRadius;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionPoint");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionRing
// 0x0010 (0x0060 - 0x0050)
class UXLABInteractionRing : public UXLABInteractionShape
{
public:
	float                                              RingRadius;                                               // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionRing");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionSphere
// 0x0010 (0x0060 - 0x0050)
class UXLABInteractionSphere : public UXLABInteractionShape
{
public:
	float                                              OuterSphereRadius;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerSphereRadius;                                        // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SphereRadius;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionSphere");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionSpline
// 0x0018 (0x0068 - 0x0050)
class UXLABInteractionSpline : public UXLABInteractionShape
{
public:
	float                                              InnerRadius;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoFindSplineComponent;                                 // 0x0058(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class USplineComponent*                            SplineComponent;                                          // 0x0060(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionSpline");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractivePipelineNode
// 0x0008 (0x0030 - 0x0028)
class UXLABInteractivePipelineNode : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractivePipelineNode");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionTracking
// 0x0020 (0x0050 - 0x0030)
class UXLABInteractionTracking : public UXLABInteractivePipelineNode
{
public:
	struct FName                                       LeftHandBoneToTrack;                                      // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftHandRootBone;                                         // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightHandBoneToTrack;                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightHandRootBone;                                        // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionTracking");
		return ptr;
	}

};


// Class VRHandInteraction.XLABInteractionUtils
// 0x0000 (0x0028 - 0x0028)
class UXLABInteractionUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractionUtils");
		return ptr;
	}


	float STATIC_GetRotationAngleAroundAxis(const struct FTransform& Transform, TEnumAsByte<EAxis> RotationAxis);
	class AXLABInteractionManager* STATIC_GetInteractionManager(class UObject* WorldContextObject);
	void STATIC_DrawDebugString(class UObject* WorldContextObject, const struct FVector& TextLocation, const struct FString& text, float FontScale, class AActor* TestBaseActor, const struct FLinearColor& TextColor, float Duration, bool bDrawShadow);
};


// Class VRHandInteraction.XLABInteractive
// 0x0000 (0x0028 - 0x0028)
class UXLABInteractive : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractive");
		return ptr;
	}


	void SetReleaseMethod(EXLABInteractionReleaseMethod ReleaseMethod);
	void SetEnabled(bool bEnabled);
	EXLABInteractionReleaseMethod GetReleaseMethod();
	struct FTransform GetInteractionTransform(const TScriptInterface<class UXLABInteractionHandler>& Handler);
	float GetInteractionStrength(const TScriptInterface<class UXLABInteractionHandler>& Handler);
	class UXLABInteractionData* GetInteractionData(const TScriptInterface<class UXLABInteractionHandler>& Handler);
	bool GetEnabled();
};


// Class VRHandInteraction.XLABInteractiveActor
// 0x0008 (0x0320 - 0x0318)
class AXLABInteractiveActor : public AActor
{
public:
	class UXLABInteractionItemComponent*               InteractionComponent;                                     // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractiveActor");
		return ptr;
	}


	void SetPrimitive(class UPrimitiveComponent* InGrabbableComp);
	bool IsBeingHeld();
	class UPrimitiveComponent* GetPrimitive();
};


// Class VRHandInteraction.XLABInteractiveAreaComponent
// 0x0020 (0x02B0 - 0x0290)
class UXLABInteractiveAreaComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
	bool                                               bInteractionEnabled;                                      // 0x0298(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x0299(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x029A(0x0006) MISSED OFFSET
	class UXLABInteractivePipeline*                    InteractivePipeline;                                      // 0x02A0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXLABInteractionData*                        InteractionData;                                          // 0x02A8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractiveAreaComponent");
		return ptr;
	}


	struct FTransform GetInteractionTransform(const TScriptInterface<class UXLABInteractionHandler>& Handler);
};


// Class VRHandInteraction.XLABInteractiveGroup
// 0x0000 (0x0028 - 0x0028)
class UXLABInteractiveGroup : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractiveGroup");
		return ptr;
	}


	void SetEnabled(bool bEnabled);
	class UPrimitiveComponent* GetPrimitive();
	class UXLABItemSolver* GetGroupSolver();
	bool GetEnabled();
};


// Class VRHandInteraction.XLABInteractivePipeline
// 0x0168 (0x0190 - 0x0028)
class UXLABInteractivePipeline : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0028(0x00E0) MISSED OFFSET
	TArray<class UXLABInteractivePipelineNode*>        PreShapeNodes;                                            // 0x0108(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class UXLABInteractionShape*                       InteractionShape;                                         // 0x0118(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UXLABInteractionModifier*>            ShapeModifiers;                                           // 0x0120(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // 0x0130(0x0010) (ZeroConstructor, IsPlainOldData)
	TMap<TWeakObjectPtr<class UObject>, struct FXLABTimestampedExecutionData> TimestampedData;                                          // 0x0140(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABInteractivePipeline");
		return ptr;
	}

};


// Class VRHandInteraction.XLABLerpItemPipelineNode
// 0x0040 (0x0070 - 0x0030)
class UXLABLerpItemPipelineNode : public UXLABItemPipelineNode
{
public:
	float                                              LerpTime;                                                 // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0034(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABLerpItemPipelineNode");
		return ptr;
	}

};


// Class VRHandInteraction.XLABMotionControllerPipeline
// 0x00F8 (0x0120 - 0x0028)
class UXLABMotionControllerPipeline : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0028(0x00D8) MISSED OFFSET
	TArray<class UXLABMotionControllerPipelineNode*>   PipelineNodes;                                            // 0x0100(0x0010) (Edit, ExportObject, ZeroConstructor)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // 0x0110(0x0010) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABMotionControllerPipeline");
		return ptr;
	}

};


// Class VRHandInteraction.XLABMotionControllerWeightNode
// 0x0048 (0x0080 - 0x0038)
class UXLABMotionControllerWeightNode : public UXLABMotionControllerPipelineNode
{
public:
	float                                              WeightSlowdownInterpolationSpeed;                         // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x44];                                      // 0x003C(0x0044) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABMotionControllerWeightNode");
		return ptr;
	}

};


// Class VRHandInteraction.XLABNumHandlerRestrictionModifier
// 0x0008 (0x0050 - 0x0048)
class UXLABNumHandlerRestrictionModifier : public UXLABInteractionModifier
{
public:
	uint32_t                                           MaxNumGrabbers;                                           // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowOverhandedHandoff;                                  // 0x004C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABNumHandlerRestrictionModifier");
		return ptr;
	}

};


// Class VRHandInteraction.XLABPhysicsPipeline
// 0x02B8 (0x02E0 - 0x0028)
class UXLABPhysicsPipeline : public UObject
{
public:
	unsigned char                                      UnknownData00[0x280];                                     // 0x0028(0x0280) MISSED OFFSET
	TArray<class UXLABPhysicsPipelineNode*>            PipelineNodes;                                            // 0x02A8(0x0010) (Edit, ExportObject, ZeroConstructor)
	TScriptInterface<class UXLABInteractionHandler>    FirstHandler;                                             // 0x02B8(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    SecondHandler;                                            // 0x02C8(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABPhysicsPipeline");
		return ptr;
	}

};


// Class VRHandInteraction.XLABSingleHandedItemSolver
// 0x0000 (0x0030 - 0x0030)
class UXLABSingleHandedItemSolver : public UXLABItemPipelineNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABSingleHandedItemSolver");
		return ptr;
	}

};


// Class VRHandInteraction.XLABTransformRotationModifier
// 0x0008 (0x0050 - 0x0048)
class UXLABTransformRotationModifier : public UXLABInteractionModifier
{
public:
	EXLABRotationModificationType                      PitchModificationType;                                    // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EXLABRotationModificationType                      YawModificationType;                                      // 0x0049(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EXLABRotationModificationType                      RollModificationType;                                     // 0x004A(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x004B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABTransformRotationModifier");
		return ptr;
	}

};


// Class VRHandInteraction.XLABTransformSingleAxisRotationModifier
// 0x0040 (0x0088 - 0x0048)
class UXLABTransformSingleAxisRotationModifier : public UXLABInteractionModifier
{
public:
	TEnumAsByte<EAxis>                                 Axis;                                                     // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
	TArray<float>                                      SnapAngles;                                               // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector2D>                           AngleRanges;                                              // 0x0060(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0070(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABTransformSingleAxisRotationModifier");
		return ptr;
	}

};


// Class VRHandInteraction.XLABTwoHandedItemSolver
// 0x0000 (0x0030 - 0x0030)
class UXLABTwoHandedItemSolver : public UXLABItemPipelineNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABTwoHandedItemSolver");
		return ptr;
	}

};


// Class VRHandInteraction.XLABTwoHandedVRPawn
// 0x0000 (0x0028 - 0x0028)
class UXLABTwoHandedVRPawn : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABTwoHandedVRPawn");
		return ptr;
	}


	TScriptInterface<class UXLABInteractionHandler> GetHandlerForHand(EControllerHand Hand);
};


// Class VRHandInteraction.XLABUseHandlerRotationModifier
// 0x0000 (0x0048 - 0x0048)
class UXLABUseHandlerRotationModifier : public UXLABInteractionModifier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABUseHandlerRotationModifier");
		return ptr;
	}

};


// Class VRHandInteraction.XLABUseLocatorRotationModifier
// 0x0000 (0x0048 - 0x0048)
class UXLABUseLocatorRotationModifier : public UXLABInteractionModifier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABUseLocatorRotationModifier");
		return ptr;
	}

};


// Class VRHandInteraction.XLABVRHandsNode
// 0x0038 (0x0070 - 0x0038)
class UXLABVRHandsNode : public UXLABMotionControllerPipelineNode
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0038(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VRHandInteraction.XLABVRHandsNode");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
