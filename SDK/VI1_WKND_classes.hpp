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

// Class WKND.AIDebugRenderer
// 0x0000 (0x00F0 - 0x00F0)
class UAIDebugRenderer : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AIDebugRenderer");
		return ptr;
	}


	bool STATIC_GetAIDebugRender();
};


// Class WKND.WKNDGrabberComponent
// 0x0080 (0x0310 - 0x0290)
class UWKNDGrabberComponent : public USceneComponent
{
public:
	struct FScriptMulticastDelegate                    OnGrabbed;                                                // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDropped;                                                // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               HoldsLoosely;                                             // 0x02B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	float                                              grabRadius;                                               // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreRadiusOnGrab;                                       // 0x02B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	float                                              GrabbingTime;                                             // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RecoveryTime;                                             // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	class AActor*                                      HeldObject;                                               // 0x02C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   GrabLocator;                                              // 0x02D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPickupData                                 CurrentPickupData;                                        // 0x02D8(0x0028)
	EGrabHand                                          Hand;                                                     // 0x0300(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0301(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDGrabberComponent");
		return ptr;
	}


	void Update(float DeltaTime);
	void SetHoldsLoosely(bool Value);
	void SetHandType(EGrabHand Type);
	void Reset();
	bool IsInState(EGrabbingState TestState);
	bool IsHoldingSomething();
	EGrabHand HandType();
	bool Grab(class AActor* actorToGrab, class URPOCGrabLocatorComponent* Locator);
	EGrabbingState GetHoldState();
	class AActor* GetHeldObject();
	class URPOCGrabLocatorComponent* GetGrabLocator();
	float GetGrabbingTime();
	bool Drop(bool GoIntoRecoveryState, bool preventImpulse);
	bool STATIC_Debugging();
};


// Class WKND.AIGrabberComponent
// 0x0000 (0x0310 - 0x0310)
class UAIGrabberComponent : public UWKNDGrabberComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AIGrabberComponent");
		return ptr;
	}


	bool Drop(bool GoIntoRecoveryState, bool preventImpulse);
};


// Class WKND.AIInstructionComponent
// 0x0108 (0x01F8 - 0x00F0)
class UAIInstructionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x00F0(0x00D0) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInteractionRejected;                                    // 0x01C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               DebugInstructions;                                        // 0x01D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugSignals;                                             // 0x01D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugCurrentInteraction;                                  // 0x01D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x25];                                      // 0x01D3(0x0025) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AIInstructionComponent");
		return ptr;
	}


	void SetSignal(const struct FName& SignalName);
	void RunInstructions();
	void InternalEnqueueStatusCheckInstruction(EAIStatusCheckType StatusCheck, const struct FLatentActionInfo& LatentInfo);
	void STATIC_InternalEnqueueCallbackInstruction(class UAIInstructionComponent* InstructionComp, const struct FLatentActionInfo& LatentInfo);
	void ImmediateStopMontage(class UAnimMontage* Montage, float BlendTime);
	bool HasInstructions();
	struct FName GetInteractionStartedName();
	struct FName GetInteractionFailedName();
	struct FName GetInteractionCompleteName();
	struct FName GetFlyCompleteName();
	class UAIInstructionComponent* ForgetAllInstructions();
	struct FVector FeetToRoot(const struct FVector& feetVector);
	class UAIInstructionComponent* EnqueueWaitOnSignalInstruction(const struct FName& SignalName, bool ClearSignalAtStart);
	class UAIInstructionComponent* EnqueueWaitOnCountdownTimerInstruction(const struct FName& TimerName);
	class UAIInstructionComponent* EnqueueWaitInstruction(bool WaitForever, float WaitSeconds);
	class UAIInstructionComponent* EnqueueWaitForMontageToFinishInstruction(class UAnimMontage* Montage);
	class UAIInstructionComponent* EnqueueWaitForDialogueToFinishInstruction();
	class UAIInstructionComponent* EnqueueUseInteractableInstruction();
	class UAIInstructionComponent* EnqueueUberMove(const struct FVector& Destination, const struct FRotator& Facing, bool alignOnComplete, float ThresholdDistance, float ThresholdAngle, EAIMovementOverride moveOverride, EBuddyAIMovementType moveType);
	class UAIInstructionComponent* EnqueueTurnToOrientationInstruction(const struct FRotator& Orientation, float ThresholdAngle);
	class UAIInstructionComponent* EnqueueTurnToInstruction(const struct FVector& Target, float ThresholdAngle);
	class UAIInstructionComponent* EnqueueThrowMontageInstruction(const struct FVector& toThrow, class UAnimMontage* Montage, float Speed, float longRange);
	class UAIInstructionComponent* EnqueueThrowImmediateInstruction(const struct FVector& toThrow, float Speed, float longRange);
	class UAIInstructionComponent* EnqueueThrowHeldPickupInstruction(const struct FVector& toThrow, float Speed, bool rotateFirst, bool waitForComplete, EAIThrowSelection throwOverride);
	class UAIInstructionComponent* EnqueueStartMontageInstruction(class UAnimMontage* Montage, bool stopOnCleanup, const struct FName& StartingSection, bool overrideBlend, float blendOverride);
	class UAIInstructionComponent* EnqueueStartDialogueInstruction(class USoundBase* Sound);
	class UAIInstructionComponent* EnqueueStartCountdownTimerInstruction(float Seconds, const struct FName& TimerName);
	class UAIInstructionComponent* EnqueueShootAtActorSideInstruction(class AActor* Target, TEnumAsByte<EActorSide> WhichSide);
	class UAIInstructionComponent* EnqueueShootAtActorInstruction(class AActor* Target);
	class UAIInstructionComponent* EnqueueRotateOnSpotInstruction(float angleToRotate, float rotateDuration);
	class UAIInstructionComponent* EnqueueResumeMontageInstruction(class UAnimMontage* Montage);
	class UAIInstructionComponent* EnqueueReleaseActorInstruction();
	class UAIInstructionComponent* EnqueuePlayMontageInstruction(class UAnimMontage* Montage, const struct FName& StartingSection);
	class UAIInstructionComponent* EnqueuePlayDialogueInstruction(class USoundBase* Sound);
	class UAIInstructionComponent* EnqueuePauseMontageInstruction(class UAnimMontage* Montage);
	class UAIInstructionComponent* EnqueueMoveToRunThresholdInstruction(const struct FVector& Target, float ThresholdDistance, float RunThresholdDistance);
	class UAIInstructionComponent* EnqueueMoveToInstruction(const struct FVector& Target, float ThresholdDistance, EBuddyAIMovementType MovementType);
	class UAIInstructionComponent* EnqueueMoveAndFaceInstruction(const struct FVector& Target, const struct FRotator& Facing, float ThresholdDistance);
	class UAIInstructionComponent* EnqueueMoveAndAlignToInstruction(const struct FVector& Target, const struct FRotator& Orientation, EBuddyAIMovementType MovementType, float LerpTime, EAIAlignComponent alignComponent);
	class UAIInstructionComponent* EnqueueJumpToMontageSectionInstruction(class UAnimMontage* Montage, const struct FName& SectionName, bool JumpToEnd);
	class UAIInstructionComponent* EnqueueGrabPickupInstruction(class AActor* toGrab, bool moveTo, bool rotateTo, bool waitForComplete);
	class UAIInstructionComponent* EnqueueGrabActorInstruction(class AActor* toGrab);
	class UAIInstructionComponent* EnqueueFlyToInstruction(const struct FVector& Destination, int Exp, bool waitForComplete, bool bForceFlyStraight);
	class UAIInstructionComponent* EnqueueFlyThroughPlayerSideInstruction(TEnumAsByte<EActorSide> WhichSide, bool bSmoothEnd, float SideDistance, float SideHeightRatio, float EndDistance, float EndHeight, const struct FMovementParams& MovementParams);
	class UAIInstructionComponent* EnqueueCompositeMoveInstruction(TArray<class ATargetPoint*> route);
	class UAIInstructionComponent* EnqueueAlignToInstruction(const struct FVector& Target, const struct FRotator& Orientation, float LerpTime, bool smoothCurve, EAIAlignComponent alignComponent);
	void ClearSignal(const struct FName& SignalName);
};


// Class WKND.AIPatrolComponent
// 0x0028 (0x0118 - 0x00F0)
class UAIPatrolComponent : public UActorComponent
{
public:
	bool                                               patrolRequested;                                          // 0x00F0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	EAIPatrolStart                                     patrolStartBehaviour;                                     // 0x00F1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	EAIPatrolCorners                                   patrolCornerBehaviour;                                    // 0x00F2(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00F3(0x0001) MISSED OFFSET
	float                                              delayAtEachPoint;                                         // 0x00F4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	EAIPatrolEnd                                       patrolEndBehaviour;                                       // 0x00F8(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               reverseDirection;                                         // 0x00F9(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET
	int                                                currentPatrolIndex;                                       // 0x0100(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TArray<class ATargetPoint*>                        patrolRoute;                                              // 0x0108(0x0010) (BlueprintVisible, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AIPatrolComponent");
		return ptr;
	}


	void StopPatrolling();
	bool StartPatrolling(EAIPatrolStart Start, float Delay, EAIPatrolEnd End);
	int SetPatrolRoute(TArray<class ATargetPoint*> inPatrolRoute);
	bool SetPatrolIndex(int nextIndex);
	bool MoveToPatrolPointIndex(int nextIndex);
	bool IsPatrolling();
	bool HasValidPatrolRoute();
	bool HasPatrolRequested();
	int GetPatrolLength();
	class ATargetPoint* FindPatrolPointAtIndex(int Index);
	class ATargetPoint* FindFurthestPatrolPoint(const struct FVector& toLocation);
	int FindClosestPatrolPointIndex(const struct FVector& toLocation);
};


// Class WKND.AIPositioningComponent
// 0x0070 (0x0160 - 0x00F0)
class UAIPositioningComponent : public UActorComponent
{
public:
	class UClass*                                      DefaultHotSpotLayout;                                     // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, class UClass*>                HotSpotLayouts;                                           // 0x00F8(0x0050) (Edit, ZeroConstructor)
	class AHotSpotLayout*                              ActiveHotSpotLayout;                                      // 0x0148(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AHotSpotActor*>                       ActiveMapHotSpots;                                        // 0x0150(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AIPositioningComponent");
		return ptr;
	}


	class UAIPositioningComponent* STATIC_GetAIPositioningComponent(class APawn* Pawn);
};


// Class WKND.AIWanderVolume
// 0x0010 (0x0328 - 0x0318)
class AAIWanderVolume : public AActor
{
public:
	class UAIWanderVolumeComponent*                    WanderVolume;                                             // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               DebugDrawVolume;                                          // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0321(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AIWanderVolume");
		return ptr;
	}


	bool ContainsPoint(const struct FVector& Point);
};


// Class WKND.AIWanderVolumeComponent
// 0x0010 (0x02A0 - 0x0290)
class UAIWanderVolumeComponent : public USceneComponent
{
public:
	struct FVector                                     VolumeExtents;                                            // 0x0290(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x029C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AIWanderVolumeComponent");
		return ptr;
	}

};


// Class WKND.AIWorldInteractionComponent
// 0x00D8 (0x01C8 - 0x00F0)
class UAIWorldInteractionComponent : public UActorComponent
{
public:
	float                                              IdealFollowDistance;                                      // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowDistanceSlack;                                      // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowRunDistance;                                        // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWanderRadius;                                          // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWanderRadius;                                          // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WanderCooldownDuration;                                   // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WanderEnabled;                                            // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnNavigationComplete;                                     // 0x0110(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAlignComplete;                                          // 0x0120(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	class AActor*                                      pendingGrab;                                              // 0x0130(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnGrabSuccess;                                            // 0x0138(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGrabFail;                                               // 0x0148(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorDropped;                                           // 0x0158(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnActorThrown;                                            // 0x0168(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	float                                              throwSpeed;                                               // 0x0178(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     throwDestination;                                         // 0x017C(0x000C) (Transient, IsPlainOldData)
	EAIThrowSelection                                  throwSelection;                                           // 0x0188(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0189(0x000F) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHeldInHands;                                            // 0x0198(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCatchSuccess;                                           // 0x01A8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCatchFail;                                              // 0x01B8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AIWorldInteractionComponent");
		return ptr;
	}


	void WanderBehaviourFinished();
	void TriggerThrow();
	void StopPlayingCatch();
	void StartPlayingCatch(class AActor* ball);
	void SetupThrow(const struct FVector& Point, float Speed, EAIThrowSelection throwOverride);
	void SetFollowTarget(class AActor* FollowTarget);
	void SearchForWanderTarget();
	bool IsPlayingCatch();
	void ClearFollowTarget();
};


// Class WKND.AnimNotify_EndTaunt
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_EndTaunt : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AnimNotify_EndTaunt");
		return ptr;
	}

};


// Class WKND.AnimNotify_EnableLookAt
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_EnableLookAt : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AnimNotify_EnableLookAt");
		return ptr;
	}

};


// Class WKND.AnimNotify_DisableLookAt
// 0x0000 (0x0038 - 0x0038)
class UAnimNotify_DisableLookAt : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AnimNotify_DisableLookAt");
		return ptr;
	}

};


// Class WKND.AnimNotify_EnableLookAtCustom
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_EnableLookAtCustom : public UAnimNotify
{
public:
	float                                              FadeInTime;                                               // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELookAtFadeType>                       FadeInCurve;                                              // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AnimNotify_EnableLookAtCustom");
		return ptr;
	}

};


// Class WKND.AnimNotify_DisableLookAtCustom
// 0x0008 (0x0040 - 0x0038)
class UAnimNotify_DisableLookAtCustom : public UAnimNotify
{
public:
	float                                              FadeOutTime;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELookAtFadeType>                       FadeOutCurve;                                             // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AnimNotify_DisableLookAtCustom");
		return ptr;
	}

};


// Class WKND.AnimNotifyState_CanParry
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_CanParry : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AnimNotifyState_CanParry");
		return ptr;
	}

};


// Class WKND.AnimNotifyState_CriticalDamage
// 0x0008 (0x0038 - 0x0030)
class UAnimNotifyState_CriticalDamage : public UAnimNotifyState
{
public:
	int                                                DamageMultiplier;                                         // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AnimNotifyState_CriticalDamage");
		return ptr;
	}

};


// Class WKND.AnimNotifyState_Invulnerable
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_Invulnerable : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AnimNotifyState_Invulnerable");
		return ptr;
	}

};


// Class WKND.AnimNotifyState_MultiplyAttackSpeed
// 0x0000 (0x0030 - 0x0030)
class UAnimNotifyState_MultiplyAttackSpeed : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AnimNotifyState_MultiplyAttackSpeed");
		return ptr;
	}

};


// Class WKND.AnimUtils
// 0x0000 (0x0028 - 0x0028)
class UAnimUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AnimUtils");
		return ptr;
	}


	void STATIC_RemoveMetaDataOfClass(class UAnimationAsset* AnimationAsset, class UClass* MetaDataClass);
	void STATIC_RemoveMetaData(class UAnimationAsset* AnimationAsset, class UAnimMetaData* MetaDataObject);
	void STATIC_RemoveAllMetaData(class UAnimationAsset* AnimationAsset);
	void STATIC_GetMetaDataOfClass(class UAnimationAsset* AnimationAsset, class UClass* MetaDataClass, TArray<class UAnimMetaData*> MetaDataOfClass);
	void STATIC_GetMetaData(class UAnimationAsset* AnimationAsset, TArray<class UAnimMetaData*> MetaData);
	bool STATIC_ContainsMetaDataOfClass(class UAnimationAsset* AnimationAsset, class UClass* MetaDataClass);
	void STATIC_AddMetaDataObject(class UAnimationAsset* AnimationAsset, class UAnimMetaData* MetaDataObject);
	void STATIC_AddMetaData(class UAnimationAsset* AnimationAsset, class UClass* MetaDataClass, class UAnimMetaData* MetaDataInstance);
};


// Class WKND.AutomatedPerformanceCaptureUserCommand
// 0x0000 (0x0028 - 0x0028)
class UAutomatedPerformanceCaptureUserCommand : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AutomatedPerformanceCaptureUserCommand");
		return ptr;
	}

};


// Class WKND.AutomatedPerformanceCaptureUserCommand_Wait
// 0x0008 (0x0030 - 0x0028)
class UAutomatedPerformanceCaptureUserCommand_Wait : public UAutomatedPerformanceCaptureUserCommand
{
public:
	float                                              Time;                                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AutomatedPerformanceCaptureUserCommand_Wait");
		return ptr;
	}

};


// Class WKND.AutomatedPerformanceCaptureUserCommand_ExecuteConsoleCommand
// 0x0010 (0x0038 - 0x0028)
class UAutomatedPerformanceCaptureUserCommand_ExecuteConsoleCommand : public UAutomatedPerformanceCaptureUserCommand
{
public:
	struct FString                                     Command;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AutomatedPerformanceCaptureUserCommand_ExecuteConsoleCommand");
		return ptr;
	}

};


// Class WKND.AutomatedPerformanceCaptureUserCommand_SetPlayerTransform
// 0x0030 (0x0058 - 0x0028)
class UAutomatedPerformanceCaptureUserCommand_SetPlayerTransform : public UAutomatedPerformanceCaptureUserCommand
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WKND.AutomatedPerformanceCaptureUserCommand_SetPlayerTransform.ActorProvidingTransform
	bool                                               bApplyPlayerHeightToCamera;                               // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyRotation;                                            // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AutomatedPerformanceCaptureUserCommand_SetPlayerTransform");
		return ptr;
	}

};


// Class WKND.AutomatedPerformanceCapture
// 0x0070 (0x0388 - 0x0318)
class AAutomatedPerformanceCapture : public AActor
{
public:
	float                                              DelayAfterTeleport;                                       // 0x0318(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DelayAfterStableStreamingLevels;                          // 0x031C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DesiredStatStabilityTime;                                 // 0x0320(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StatStabilityTimeout;                                     // 0x0324(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TimeCapturingUnrealStats;                                 // 0x0328(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	TArray<struct FAutomatedPerformanceCaptureLocation> Locations;                                                // 0x0330(0x0010) (Edit, ZeroConstructor)
	class UAutomatedPerformanceCaptureAnchor*          Anchor;                                                   // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0348(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AutomatedPerformanceCapture");
		return ptr;
	}

};


// Class WKND.AutomatedPerformanceCaptureAnchor
// 0x0060 (0x0088 - 0x0028)
class UAutomatedPerformanceCaptureAnchor : public UObject
{
public:
	TArray<class UWKNDProgressionCheckpointData*>      TemporaryCheckpoints;                                     // 0x0028(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0038(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AutomatedPerformanceCaptureAnchor");
		return ptr;
	}

};


// Class WKND.BaseMenuActor
// 0x0070 (0x0388 - 0x0318)
class ABaseMenuActor : public AActor
{
public:
	class UFrontendInteractionComponent*               InteractionComponent;                                     // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bIsHandInteractable;                                      // 0x0320(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHandHoverable;                                         // 0x0321(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0322(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMenuSetActive;                                          // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMenuSetInactive;                                        // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0348(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BaseMenuActor");
		return ptr;
	}


	void SetInactive();
	void SetActiveSubMenu(class ASubMenuActor* Submenu);
	void SetActive();
	void ReceiveNewMenuComponentHovered(class UMenuBaseComponent* HoveredComponent);
	void ReceiveMenuDeactivated();
	void ReceiveMenuActivated();
	void PlayTabChangedSound(class UMenuTabComponent* MenuTabComponent);
	void PlayScrollContainerChangedSound(class UMenuScrollContainerComponent* MenuScrollContainerComponent, bool bIssuedFromConsole);
	void PlayRadiobuttonChangedSound(class UMenuRadioButtonComponent* MenuRadioButtonComponent);
	void PlayButtonSoundAtLocation(const struct FVector& ButtonLocation, EMenuButtonState ButtonState, bool bIsBackButton, bool bIsConsoleButton);
	void PlayButtonSound(class UMenuButtonComponent* MenuButtonComponent, bool bIsBackButton, bool bIsConsoleButton);
	void OnActorInteractReleased();
	void OnActorInteractPressed(class UFrontendInteractionController* Controller);
	void OnActorHoverEnd(bool bInteractionKeyPressed);
	void OnActorHoverBegin(class UFrontendInteractionController* Controller);
	class ASubMenuActor* GetActiveSubmenu();
	void AddSubMenu(class ASubMenuActor* Submenu, class ABaseMenuActor* ParentMenu);
};


// Class WKND.BlackoutWidget
// 0x0018 (0x0220 - 0x0208)
class UBlackoutWidget : public UUserWidget
{
public:
	bool                                               bShowAngleIndicatorImage;                                 // 0x0208(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0209(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFadeOutFinished;                                        // 0x0210(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BlackoutWidget");
		return ptr;
	}


	void SetIndicatorOpacity(float Opacity);
	void SetAngleIndicatorRotation(float Angle);
	void Init();
	void FadeOutWarningText();
	void FadeOutAngleIndicatorImage();
	void FadeInWarningText();
	void FadeInAngleIndicatorImage();
};


// Class WKND.BodyComponent
// 0x0060 (0x02F0 - 0x0290)
class UBodyComponent : public USceneComponent
{
public:
	class UCameraComponent*                            CameraComponent;                                          // 0x0290(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AWKNDPlayerPawn*                             PlayerPawn;                                               // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bInitialised;                                             // 0x02A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInLocomotion;                                            // 0x02A1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02A2(0x0002) MISSED OFFSET
	float                                              InitialisationDelay;                                      // 0x02A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialisationTimeLeft;                                   // 0x02A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxYawDifference;                                         // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RotInterpSpeed;                                           // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MidCameraPitch;                                           // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MidYawMultiplier;                                         // 0x02B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FullCameraPitch;                                          // 0x02BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FullYawMultiplier;                                        // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPitchDifference;                                       // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxForwardOffset;                                         // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxHeightOffset;                                          // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FQuat                                       WorldQuat;                                                // 0x02D0(0x0010) (IsPlainOldData)
	struct FVector                                     DefaultRelativeLocation;                                  // 0x02E0(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02EC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BodyComponent");
		return ptr;
	}


	void StartLocomotion(TEnumAsByte<ENTSnapDirection> Direction);
	void EndLocomotion();
};


// Class WKND.BTDecorator_HasToken
// 0x0008 (0x0070 - 0x0068)
class UBTDecorator_HasToken : public UBTDecorator
{
public:
	struct FName                                       TokenName;                                                // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BTDecorator_HasToken");
		return ptr;
	}

};


// Class WKND.BTTask_ThrowAndCatch
// 0x01A0 (0x0210 - 0x0070)
class UBTTask_ThrowAndCatch : public UBTTaskNode
{
public:
	class AActor*                                      ballActor;                                                // 0x0070(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	class AAIController*                               owningAIController;                                       // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      playerActor;                                              // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               oneHandedAnimations;                                      // 0x0090(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0091(0x000F) MISSED OFFSET
	bool                                               finishOnceHeld;                                           // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7F];                                      // 0x00A1(0x007F) MISSED OFFSET
	class UWKNDGrabberComponent*                       grabber;                                                  // 0x0120(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0xE8];                                      // 0x0128(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BTTask_ThrowAndCatch");
		return ptr;
	}

};


// Class WKND.RICEAIController
// 0x0000 (0x0410 - 0x0410)
class ARICEAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RICEAIController");
		return ptr;
	}


	class ARICEAICoordinator* GetAICoordinator();
};


// Class WKND.BuddyAIController
// 0x0000 (0x0410 - 0x0410)
class ABuddyAIController : public ARICEAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BuddyAIController");
		return ptr;
	}

};


// Class WKND.BuddyAIPawn
// 0x00C8 (0x0440 - 0x0378)
class ABuddyAIPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0378(0x0010) MISSED OFFSET
	class UCapsuleComponent*                           Collision;                                                // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAIInstructionComponent*                     Instructions;                                             // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWKNDFloatingMovementComponent*              Movement;                                                 // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              IdealFollowDistance;                                      // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowDistanceSlack;                                      // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FollowRunDistance;                                        // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugFollowBehaviour;                                     // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	float                                              MinWanderRadius;                                          // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWanderRadius;                                          // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WanderCooldownDuration;                                   // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               WanderEnabled;                                            // 0x03C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugWanderBehaviour;                                     // 0x03C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03C6(0x0002) MISSED OFFSET
	float                                              POIRadius;                                                // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               POIRequiresLOS;                                           // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               POIInteractionsEnabled;                                   // 0x03CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EIdleBehaviourSelectionPolicy                      IdleBehaviourSelectionPolicy;                             // 0x03CE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x03CF(0x0001) MISSED OFFSET
	float                                              IdleCooldownDuration;                                     // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultIdleAnimCooldownDuration;                          // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBuddyIdleAnim>                      IdleAnims;                                                // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IdlesEnabled;                                             // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugIdleBehaviour;                                       // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x03EA(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnHeldInHands;                                            // 0x03F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCatchSuccess;                                           // 0x0400(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCatchFail;                                              // 0x0410(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               ShowThrowCatchDebug;                                      // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              catchDistOffset;                                          // 0x0424(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              throwOrCarryThresholdRange;                               // 0x0428(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              carryApproachDistance;                                    // 0x042C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              holdBallTime;                                             // 0x0430(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              maximumMoveRangeForCatch;                                 // 0x0434(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0438(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BuddyAIPawn");
		return ptr;
	}


	void WanderBehaviourFinished();
	ETriggeredInteractionResult TriggerInteraction(class UBuddyInteractableComponent* Interactable);
	void StopPlayingThrowAndCatch();
	void StartPlayingThrowAndCatch(class AActor* ball, bool fetchOnly);
	void SetupIdleBehaviour();
	void SetSignal(const struct FName& SignalName);
	void SetFollowTarget(class AActor* FollowTarget);
	void SearchForWanderTarget();
	void SearchForPointOfInterest();
	void OnThrowCatchComplete();
	void OnPickupTakenFromMe();
	void OnPickupReleased();
	void OnPickupGrabSuccess();
	void OnPickupGrabFailed();
	void ForgetAllSignals();
	void ClearSignal(const struct FName& SignalName);
	void ClearFollowTarget();
	void AnimProxy_ObjectThrow(bool oneHand, float throwDistance);
	void AnimProxy_ObjectPickup(bool oneHand, float Height);
	void AnimProxy_ObjectLetGo();
	void AnimProxy_ObjectHandOver(bool oneHand);
	void AnimProxy_ObjectCatchSuccess(bool oneHand, float catchAngle);
	void AnimProxy_ObjectCatchReady(bool oneHand, float catchAngle);
	void AnimProxy_ObjectCatchFail(bool oneHand);
};


// Class WKND.BuddyAIPawnMovement
// 0x0030 (0x01A8 - 0x0178)
class UBuddyAIPawnMovement : public UPawnMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0178(0x001C) MISSED OFFSET
	float                                              WalkSpeed;                                                // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningSpeed;                                             // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BuddyAIPawnMovement");
		return ptr;
	}


	void PushMovementType(EBuddyAIMovementType MovementType);
	void PopMovementType();
};


// Class WKND.BuddyFloatingMovementComponent
// 0x0038 (0x01C8 - 0x0190)
class UBuddyFloatingMovementComponent : public UFloatingPawnMovement
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0190(0x0008) MISSED OFFSET
	float                                              WalkSpeed;                                                // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkAcceleration;                                         // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunAcceleration;                                          // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintAcceleration;                                       // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningSpeed;                                             // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x01B4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BuddyFloatingMovementComponent");
		return ptr;
	}


	void PushMovementType(EBuddyAIMovementType MovementType);
	void PopMovementType();
};


// Class WKND.BuddyInteractableComponent
// 0x0030 (0x02C0 - 0x0290)
class UBuddyInteractableComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    SetupInteraction;                                         // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EBuddyInteractableType                             InteractableType;                                         // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AcceptsMultipleInteractions;                              // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02AA(0x0002) MISSED OFFSET
	float                                              InteractionCooldownTime;                                  // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInteractableUsedPoint                             UsedPoint;                                                // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InteractionEnabled;                                       // 0x02B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugInteractability;                                     // 0x02B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD];                                       // 0x02B3(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BuddyInteractableComponent");
		return ptr;
	}


	ETriggeredInteractionResult TriggeredByPlayer(class APawn* BuddyPawn);
	void StartInteraction(class UAIInstructionComponent* InstructionComponent);
	bool CanStartInteraction(EBuddyInteractableType Type);
};


// Class WKND.BuddyMovementInterface
// 0x0000 (0x0028 - 0x0028)
class UBuddyMovementInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BuddyMovementInterface");
		return ptr;
	}

};


// Class WKND.BuddyTriggerGrab
// 0x0000 (0x0038 - 0x0038)
class UBuddyTriggerGrab : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BuddyTriggerGrab");
		return ptr;
	}

};


// Class WKND.BuddyTriggerThrow
// 0x0000 (0x0038 - 0x0038)
class UBuddyTriggerThrow : public UAnimNotify
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.BuddyTriggerThrow");
		return ptr;
	}

};


// Class WKND.PhysicsInteraction
// 0x01B8 (0x01E0 - 0x0028)
class UPhysicsInteraction : public UObject
{
public:
	struct FName                                       InteractionName;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebug;                                                   // 0x0031(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET
	struct FString                                     ShapeComponentName;                                       // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Min;                                                      // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max;                                                      // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Step;                                                     // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PressedEventThreshold;                                    // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityEventThreshold;                                   // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpringBackSpeed;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x0060(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	struct FString                                     SkinnedMeshComponentName;                                 // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       SocketName;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSoftObjectPath                             InteractionStartHaptics;                                  // 0x0080(0x0018) (Edit, Config)
	struct FSoftObjectPath                             InteractionCompletedHaptics;                              // 0x0098(0x0018) (Edit, Config)
	struct FSoftObjectPath                             InteractionOngoingHaptics;                                // 0x00B0(0x0018) (Edit, Config)
	TArray<class UPrimitiveComponent*>                 DetectOnlyComponents;                                     // 0x00C8(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	class USkinnedMeshComponent*                       SkinnedMeshComponent;                                     // 0x00D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UShapeComponent*                             FoundShapeComponent;                                      // 0x00E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF8];                                      // 0x00E8(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.PhysicsInteraction");
		return ptr;
	}


	void UnlockInteraction();
	void SetEnabled(bool bInEnabled);
	void LockInteraction(float InLockTime, float InLockSpeedOverride);
	struct FName GetInteractionName();
	bool GetEnabled();
	struct FTransform GetDesiredBoneTransform();
	float GetCurrentVelocity();
	class UPrimitiveComponent* GetCurrentTouchingComponent();
	float GetCurrentTime();
};


// Class WKND.ButtonInteraction
// 0x0090 (0x0270 - 0x01E0)
class UButtonInteraction : public UPhysicsInteraction
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x01E0(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ButtonInteraction");
		return ptr;
	}

};


// Class WKND.CableInteractionComponent
// 0x0070 (0x0160 - 0x00F0)
class UCableInteractionComponent : public UActorComponent
{
public:
	TArray<struct FMeshWithSocket>                     ContactPoints;                                            // 0x00F0(0x0010) (ZeroConstructor)
	class USceneComponent*                             HeldMeshWithSocket;                                       // 0x0100(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             FixedMeshWithSocket;                                      // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCableLengthPipelineNode*                    CableLengthPipelineNode;                                  // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0118(0x001C) MISSED OFFSET
	float                                              ThresholdDistanceToMakeConnection;                        // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxCableLength;                                           // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Elasticity;                                               // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnContactMade;                                            // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnContactBroken;                                          // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CableInteractionComponent");
		return ptr;
	}


	void SetStartOfCableMeshAndSocket(class USceneComponent* Mesh, const struct FName& SocketName);
	void SetEndOfCableMeshAndSocket(class USceneComponent* Mesh, const struct FName& SocketName);
	void AddContactPoint(class USceneComponent* Mesh, const struct FName& SocketName);
};


// Class WKND.CableLengthPipelineNode
// 0x0010 (0x0040 - 0x0030)
class UCableLengthPipelineNode : public UXLABItemPipelineNode
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CableLengthPipelineNode");
		return ptr;
	}

};


// Class WKND.SubMenuActor
// 0x0098 (0x0420 - 0x0388)
class ASubMenuActor : public ABaseMenuActor
{
public:
	bool                                               bStartsActive;                                            // 0x0388(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	class ABaseMenuActor*                              ParentMenu;                                               // 0x0390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ABaseMenuActor*                              ConsoleMenu;                                              // 0x0398(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x03A0(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SubMenuActor");
		return ptr;
	}


	void SwitchToParentMenu();
	void SwitchToMenu(class ABaseMenuActor* OtherMenu);
	void SetTooltipText(const struct FText& text);
	void SetParentMenu(class ABaseMenuActor* Menu);
	void SetInactive();
	void SetConsoleMenu(class ABaseMenuActor* ConsoleActor);
	void SetActive();
	void ReceiveTwistInput(float TwistValue);
	void OnBackButtonPressed(const struct FPressedButtonComponent& ButtonComponent);
	bool IsActive();
	void Initialize(class ABaseMenuActor* ParentMenu, bool bSetStartsActive);
	class UMenuBaseComponent* GetActiveMenuComponentByTag(const struct FName& Tag);
};


// Class WKND.ChapterSelectMenu
// 0x0050 (0x0470 - 0x0420)
class AChapterSelectMenu : public ASubMenuActor
{
public:
	bool                                               bIsWidgetMenu;                                            // 0x0420(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	class USceneComponent*                             RootSceneComponent;                                       // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuTabComponent*                           EpisodesTab;                                              // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      Episode_1Button;                                          // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      Episode_2Button;                                          // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      Episode_3Button;                                          // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuScrollContainerComponent*               EP1ScrollContainer;                                       // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      BackButton;                                               // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      PlayChapterButton;                                        // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0468(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ChapterSelectMenu");
		return ptr;
	}


	void OnTabChanged(const struct FChangedMenuComponent& MenuComponent);
	void OnBackButtonPressed(const struct FPressedButtonComponent& MenuComponent);
};


// Class WKND.MenuBaseComponent
// 0x00E0 (0x0370 - 0x0290)
class UMenuBaseComponent : public USceneComponent
{
public:
	bool                                               bIsHandInteractable;                                      // 0x0290(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHandHoverable;                                         // 0x0291(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bMenuComponentDisabled;                                   // 0x0292(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0293(0x0001) MISSED OFFSET
	int                                                OrderNumber;                                              // 0x0294(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       ToolTipText;                                              // 0x0298(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FScriptMulticastDelegate                    OnComponentInteractPressed;                               // 0x02B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnComponentInteractReleased;                              // 0x02C0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnComponentHoverBegin;                                    // 0x02D0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnComponentHoverEnd;                                      // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnComponentEnabled;                                       // 0x02F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnComponentDisabled;                                      // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0310(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMenuElementShow;                                        // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMenuElementHide;                                        // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0340(0x0008) MISSED OFFSET
	TArray<struct FAttachedMenuElement>                AttachedMenuElements;                                     // 0x0348(0x0010) (ZeroConstructor, Transient)
	TArray<class USceneComponent*>                     AttachedNonMenuElements;                                  // 0x0358(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuBaseComponent");
		return ptr;
	}


	void ShowComponent(bool bIncludeAttachedMenuElements);
	void HideComponent(bool bIncludeAttachedMenuElements);
	bool EndHover();
	void DisableComponent(bool bDisabled);
	bool BeginHover();
};


// Class WKND.ChapterSelectMenuItem
// 0x0060 (0x03D0 - 0x0370)
class UChapterSelectMenuItem : public UMenuBaseComponent
{
public:
	class UWKNDProgressionCheckpointData*              CheckpointToLoad;                                         // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeTimeOnLevelLoad;                                      // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	struct FName                                       GameLevelName;                                            // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       LockedText;                                               // 0x0388(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       DisplayText;                                              // 0x03A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UWKNDCheckpointProgressionOrder*             CheckpointOrderData;                                      // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UTextRenderComponent*                        CheckpointText;                                           // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ChapterSelectMenuItem");
		return ptr;
	}


	void UnlockItem();
	bool TryLoadChapter();
};


// Class WKND.CheckpointListener
// 0x0000 (0x0028 - 0x0028)
class UCheckpointListener : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CheckpointListener");
		return ptr;
	}


	void OnCheckpointResumed(class UWKNDProgressionCheckpointData* ResumedCheckpoint, class AWKNDCheckpointTeleporter* CheckpointTeleporter);
};


// Class WKND.CinematicBlendingComponent
// 0x0090 (0x0180 - 0x00F0)
class UCinematicBlendingComponent : public UActorComponent
{
public:
	class AActor*                                      Owner;                                                    // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              StartTimeStamp;                                           // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 AnimBlendCurve;                                           // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AnimBlendDuration;                                        // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bBlendIn;                                                 // 0x010C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	float                                              CurrentMoveTime;                                          // 0x0110(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0114(0x000C) MISSED OFFSET
	struct FTransform                                  StartTransform;                                           // 0x0120(0x0030) (Transient, IsPlainOldData)
	struct FTransform                                  TargetTransform;                                          // 0x0150(0x0030) (Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CinematicBlendingComponent");
		return ptr;
	}


	void StartBlend(class ATargetPoint* BlendEndPosition, class UCurveFloat* BlendCurve, float BlendStartDelay, float BlendDuration);
};


// Class WKND.CinematicPositioningInterface
// 0x0000 (0x0028 - 0x0028)
class UCinematicPositioningInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CinematicPositioningInterface");
		return ptr;
	}


	void MoveToStartPosition(class ATargetPoint* StartPosition, const struct FScriptDelegate& Callback);
	void CancelAllMovementCommands();
};


// Class WKND.ClimbObject
// 0x0118 (0x0430 - 0x0318)
class AClimbObject : public AActor
{
public:
	class USceneComponent*                             Scale;                                                    // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ClimbMesh;                                                // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ClimbStart;                                               // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ClimbStop;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class URPOCClimbLocatorComponent*                  GrabLeft;                                                 // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class URPOCClimbLocatorComponent*                  GrabRight;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             OffsetLeft;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             OffsetRight;                                              // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ClimbLeft;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ClimbRight;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DistanceGuide;                                            // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class AClimbDismount*                              DismountTarget;                                           // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAnimTypeDropdown                           AnimType;                                                 // 0x0378(0x0010) (Edit, BlueprintVisible)
	bool                                               LockClimbHand;                                            // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RestrictSnapTurns;                                        // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoAdjustGrabPosition;                                   // 0x038A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x038B(0x0001) MISSED OFFSET
	float                                              ClimbAdjustSpeed;                                         // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbAdjustDistance;                                      // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OneToOneness;                                             // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	struct FOneToOnePair                               OneToOnenessForward;                                      // 0x0398(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FOneToOnePair                               OneToOnenessRight;                                        // 0x03A0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FOneToOnePair                               OneToOnenessUp;                                           // 0x03A8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ActiveClimb;                                              // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugGrabs;                                               // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x03B2(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    ClimbGrabEvent;                                           // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClimbReleaseEvent;                                        // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     OldLocation;                                              // 0x03D8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     DeltaLocation;                                            // 0x03E4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              ZOffsetLeft;                                              // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ZOffsetRight;                                             // 0x03F4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurrentOffsetDir;                                         // 0x03F8(0x000C) (IsPlainOldData)
	float                                              CurrentOffsetLength;                                      // 0x0404(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x28];                                      // 0x0408(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ClimbObject");
		return ptr;
	}


	void UnlockClimbHand(bool unlockClimbHold);
	void SetZOffset(EControllerHand Hand, float Offset);
	void SetEnabledClimbable(bool Enabled);
	void ReceiveOnReleased(class AWKNDMotionController* Controller);
	void ReceiveOnGrabbed(bool upperHalf, class AWKNDMotionController* Controller);
	bool IsUpperHalf();
	void Highlight(bool Highlight);
	float GetGripScale();
	struct FVector GetFacingVector();
};


// Class WKND.ClimbDismount
// 0x0020 (0x0338 - 0x0318)
class AClimbDismount : public AActor
{
public:
	class USceneComponent*                             Root;                                                     // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               DismountBox;                                              // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DismountStart;                                            // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DismountEnd;                                              // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ClimbDismount");
		return ptr;
	}

};


// Class WKND.CombatPointManager
// 0x0040 (0x0358 - 0x0318)
class ACombatPointManager : public AActor
{
public:
	class AActor*                                      TargetPointOpponent;                                      // 0x0318(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTargetPoints;                                         // 0x0320(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable360Combat;                                         // 0x0321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0322(0x0006) MISSED OFFSET
	TArray<struct FKFCircleCombatPoint>                CombatPoints_PC;                                          // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FKFCircleCombatPoint>                CombatPoints_Quest;                                       // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FKFCircleCombatPoint>                CombatPoints;                                             // 0x0348(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CombatPointManager");
		return ptr;
	}


	void ResetCombatPoints();
	void ReleaseCombatPoint(const TScriptInterface<class UCombatPointOccupant>& SquadMember);
	bool OccupyCombatPoint(int Index, const TScriptInterface<class UCombatPointOccupant>& SquadMember);
	void InitCombatPoints();
	TArray<struct FKFCircleCombatPoint> GetVacantCombatPointsForAttacker(const TScriptInterface<class UCombatPointOccupant>& Attacker);
	TArray<struct FKFCircleCombatPoint> GetVacantCombatPointsByType(ENPCCombatType Type);
	bool GetRandomVacantCombatPoint(ENPCCombatType NPCCombatType, struct FKFCircleCombatPoint* CombatPoint);
	void GetRandomPointOnYZPlane(float MaxX, float MaxY, const struct FVector& AnchorLocation, struct FVector* PlaneLocation);
	void GetLocationAroundTargetActor(float Angle, float Distance, float Height, struct FVector* Location);
	void GetCombatPointForAttacker(const TScriptInterface<class UCombatPointOccupant>& Attacker, struct FKFCircleCombatPoint* CombatPoint);
};


// Class WKND.CombatSquad
// 0x0078 (0x0390 - 0x0318)
class ACombatSquad : public AActor
{
public:
	bool                                               m_bEnableLogMessages;                                     // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_bShowLogMessagesOnScreen;                               // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x031A(0x0002) MISSED OFFSET
	float                                              m_MessageDisplayDuration;                                 // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       m_SquadName;                                              // 0x0320(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              m_SquadActionCooldownDuration;                            // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	class ACombatPointManager*                         OpponentCombatPointManager;                               // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCombatBegin;                                            // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCombatEnd;                                              // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSquadAction;                                            // 0x0358(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSquadMemberKilled;                                      // 0x0368(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<TWeakObjectPtr<class UObject>>              m_SquadMembers;                                           // 0x0378(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CombatSquad");
		return ptr;
	}


	void UpdateSquadActionCooldown(float DeltaTime);
	TArray<TScriptInterface<class UCombatSquadBehaviourInterface>> SelectSquadMembers(const struct FScriptDelegate& Predicate, int NumMembersToSelect);
	void ResetSquad();
	void RemoveNullMembersFromSquad();
	void RemoveMemberFromSquad(const TScriptInterface<class UCombatSquadBehaviourInterface>& Member, bool bSendEvent);
	void PrintLog(const struct FString& Message);
	bool IsInCombat();
	bool HandleSquadAction();
	void HandleMemberRemoved(const TScriptInterface<class UCombatSquadBehaviourInterface>& Member);
	void HandleMemberKilledEvent(class AActor* DeadActor, const struct FWKNDDamageInfo& KillDamageInfo);
	void HandleMemberKilled(const TScriptInterface<class UCombatSquadBehaviourInterface>& Member);
	void HandleMemberAdded(const TScriptInterface<class UCombatSquadBehaviourInterface>& NewMember);
	int GetSquadSize();
	void GetSquadMembersOfClass(class UClass* ActorClass, TArray<class AActor*>* OutActors);
	TArray<TScriptInterface<class UCombatSquadBehaviourInterface>> GetSquadMembersByType(ENPCCombatType CombatType);
	void GetSquadMembers(TArray<TScriptInterface<class UCombatSquadBehaviourInterface>>* OutAttackers);
	TScriptInterface<class UCombatSquadBehaviourInterface> GetSquadMemberByIndex(int Index);
	TScriptInterface<class UCombatSquadBehaviourInterface> GetRandomSquadMember();
	void EndCombat();
	void BeginCombat();
	bool AttemptSquadAction();
	bool AddMemberToSquad(const TScriptInterface<class UCombatSquadBehaviourInterface>& NewMember, bool bSendEvent);
	void AddMembersToSquad(TArray<TScriptInterface<class UCombatSquadBehaviourInterface>> NewMembers);
};


// Class WKND.CombatSquadBehaviourInterface
// 0x0000 (0x0028 - 0x0028)
class UCombatSquadBehaviourInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CombatSquadBehaviourInterface");
		return ptr;
	}


	bool StopAttack();
	void StartRangedAttack();
	void StartMeleeAttack();
	bool StartAttack(class AActor* Opponent, float DelayBeforeAttack);
	bool SetOpponent(class ACombatPointManager* Opponent);
	bool OnRemovedFromCombatSquad(class ACombatSquad* Squad);
	bool OnAddedToCombatSquad(class ACombatSquad* Squad);
	bool Kill();
	bool IsAttacking();
	ENPCCombatType GetNPCCombatType();
	class UWKNDHealthComponent* GetHealthComponent();
	bool Despawn();
	bool CanAttack();
	bool BindHandleAttackComplete(const struct FScriptDelegate& HandleAttackCompleteDelegate);
};


// Class WKND.ConsoleMenuActor
// 0x0080 (0x0408 - 0x0388)
class AConsoleMenuActor : public ABaseMenuActor
{
public:
	class USceneComponent*                             RootSceneComponent;                                       // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UPoseableMeshComponent*                      ConsolePoseableMesh;                                      // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        MainMenuChildActor;                                       // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        OptionsMenuChildActor;                                    // 0x03A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        EpisodesMenuChildActor;                                   // 0x03A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ExtrasMenuChildActor;                                     // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChapterSelectChildActor;                                  // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class AMainMenuActor*                              MainMenu;                                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class AOptionsMenuActor*                           OptionsMenu;                                              // 0x03C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class AEpisodesMenuActor*                          EpisodesMenu;                                             // 0x03D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class AExtrasMenuActor*                            ExtrasMenu;                                               // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class AChapterSelectMenu*                          ChapterMenu;                                              // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ScrollableBehaviourTag;                                   // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ButtonMaterialParameterName;                              // 0x03F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ButtonConfigMaterialIndex;                                // 0x03F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03FC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicButtonMaterialInstance;                            // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ConsoleMenuActor");
		return ptr;
	}


	void SetButtonConfigMaterialParameter(int ConfigID);
};


// Class WKND.ConstructionComponent
// 0x00A0 (0x0750 - 0x06B0)
class UConstructionComponent : public USphereComponent
{
public:
	bool                                               AllowDeconstruction;                                      // 0x06B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAddPart;                                                // 0x06B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRemovePart;                                             // 0x06C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBuildComplete;                                          // 0x06D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bBuildComplete;                                           // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBuildOrder;                                           // 0x06E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BuildOnOverlap;                                           // 0x06EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x06EB(0x0005) MISSED OFFSET
	TArray<class UClass*>                              PartsList;                                                // 0x06F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              InstalledParts;                                           // 0x0700(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class ARPOCBuildPart*>                      InstalledPartActors;                                      // 0x0710(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0720(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ConstructionComponent");
		return ptr;
	}


	void SetTargetMesh(class UStaticMeshComponent* Mesh);
	class ARPOCBuildPart* ReleasePart();
	float GetCombinedWeight();
	void EndComponentOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BeginComponentOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool AllowsDeconstruction();
	bool AddPart(class ARPOCBuildPart* Part);
};


// Class WKND.ConstructionPartDesc
// 0x0018 (0x0040 - 0x0028)
class UConstructionPartDesc : public UObject
{
public:
	struct FName                                       Name;                                                     // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Description;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ConstructionPartDesc");
		return ptr;
	}

};


// Class WKND.CorvaxianBoxBase
// 0x0000 (0x0318 - 0x0318)
class ACorvaxianBoxBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CorvaxianBoxBase");
		return ptr;
	}

};


// Class WKND.CorvaxianBoxLatticeAnimation
// 0x0098 (0x0188 - 0x00F0)
class UCorvaxianBoxLatticeAnimation : public UActorComponent
{
public:
	TArray<struct FCorvaxianBoxPiston>                 PistonData;                                               // 0x00F0(0x0010) (ZeroConstructor)
	class UPoseableMeshComponent*                      CachedPoseableMeshComponent;                              // 0x0100(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNTHapticManagerComponent*                   CachedHapticManager;                                      // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0110(0x0030) MISSED OFFSET
	TArray<struct FName>                               PistonBoneNames;                                          // 0x0140(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EAxis>                                 BoneAxis;                                                 // 0x0150(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0151(0x0003) MISSED OFFSET
	float                                              PistonMinMaxExtentsPadding;                               // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RandomSeed;                                               // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldPlayHaptics;                                        // 0x015C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x015D(0x0003) MISSED OFFSET
	float                                              HapticFrequency;                                          // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HapticAmplitude;                                          // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHapticFeedbackEffect_Curve*                 HapticCurve;                                              // 0x0168(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    HoldingHand;                                              // 0x0170(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAnimComplete;                                           // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CorvaxianBoxLatticeAnimation");
		return ptr;
	}


	void RetractSinglePiston(const struct FName& BoneName, float extension, float SpeedMultiplier);
	void RetractAllPistons(float InTotalPlayTime, float extension, float SpeedMultiplier, float InPistonAnimationInterval, float InPistonRandomSpeedVaration);
	void PlayRandomPatternAnimation(float InTotalPlayTime, float extension, float SpeedMultiplier, float InPistonAnimationInterval);
	void InitializeLattice(class UPoseableMeshComponent* PoseableMesh, const struct FName& InBonePrefix);
	class UPoseableMeshComponent* GetPoseableMeshComponent();
	void ExtendSinglePiston(const struct FName& BoneName, float extension, float SpeedMultiplier);
	void ExtendAllPistons(float InTotalPlayTime, float extension, float SpeedMultiplier, float InPistonAnimationInterval, float InPistonRandomSpeedVaration);
};


// Class WKND.CuttableComponent
// 0x0010 (0x0100 - 0x00F0)
class UCuttableComponent : public UActorComponent
{
public:
	ECuttabilityType                                   CuttabilityType;                                          // 0x00F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	class UCuttableMaterial*                           Material;                                                 // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CuttableComponent");
		return ptr;
	}

};


// Class WKND.CuttableMaterial
// 0x0008 (0x0030 - 0x0028)
class UCuttableMaterial : public UObject
{
public:
	float                                              MaterialStengthMultiplier;                                // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CuttableMaterial");
		return ptr;
	}

};


// Class WKND.DirectionTrackingComponent
// 0x0070 (0x0300 - 0x0290)
class UDirectionTrackingComponent : public USceneComponent
{
public:
	class USceneComponent*                             TrackingSource;                                           // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FTrackingData>                       CurrentTargets;                                           // 0x0298(0x0010) (ZeroConstructor)
	TArray<struct FMotionMonitorData>                  CurrentMotions;                                           // 0x02A8(0x0010) (ZeroConstructor)
	float                                              OwnDynamicism;                                            // 0x02B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DynamicismThisFrame;                                      // 0x02BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LinearVelocityThisFrame;                                  // 0x02C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocityThisFrame;                                 // 0x02C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastLocation;                                             // 0x02C8(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x02D4(0x000C) MISSED OFFSET
	struct FQuat                                       LastRotation;                                             // 0x02E0(0x0010) (IsPlainOldData)
	bool                                               bPrintDebugInfo;                                          // 0x02F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x02F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.DirectionTrackingComponent");
		return ptr;
	}


	void ResetDirectionTrackingTransform();
	void RemoveTargetForLookAt_Component(class USceneComponent* TargetComponent);
	void RemoveTargetForLookAt(class AActor* Target);
	float CheckLookStatus_Location(const struct FVector& CheckLocation, bool bRequireLookAt);
	float CheckLookStatus_Component(class USceneComponent* CheckComponent, bool bRequireLookAt);
	float CheckLookStatus_Actor(class AActor* CheckActor, bool bRequireLookAt);
	float Check2DAngleToTarget(class AActor* CheckTarget);
	void AddTargetForLookAway(class AActor* NewTarget, bool bSingleShot, float AngleTolerance, float DurationRequired, const struct FScriptDelegate& ReportDoneEvent);
	void AddTargetForLookAt_Component(class USceneComponent* NewTargetComponent, bool bSingleShot, float AngleTolerance, float DurationRequired, const struct FScriptDelegate& ReportDoneEvent, bool bTriggerOnlyOnce);
	void AddTargetForLookAt(class AActor* NewTarget, bool bSingleShot, float AngleTolerance, float DurationRequired, const struct FScriptDelegate& ReportDoneEvent, bool bTriggerOnlyOnce);
	void AddMotionMonitor(bool bSuccessOnAbove, float Threshold, float DurationRequired, const struct FScriptDelegate& ReportDoneEvent);
};


// Class WKND.EpisodesMenuActor
// 0x00A0 (0x04C0 - 0x0420)
class AEpisodesMenuActor : public ASubMenuActor
{
public:
	class UMenuButtonComponent*                        BackToParentMenuButton;                                   // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuTabComponent*                           SeasonTab;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        PlayButton;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        RestartButton;                                            // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Season1TabButton;                                         // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Season2TabButton;                                         // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Season3TabButton;                                         // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuRadioButtonComponent*                   S1EpisodeRadioButton;                                     // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      S1Ep1Button;                                              // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      S1Ep2Button;                                              // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      S1Ep3Button;                                              // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuRadioButtonComponent*                   S2EpisodeRadioButton;                                     // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      S2Ep1Button;                                              // 0x0480(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      S2Ep2Button;                                              // 0x0488(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      S2Ep3Button;                                              // 0x0490(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuRadioButtonComponent*                   S3EpisodeRadioButton;                                     // 0x0498(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      S3Ep1Button;                                              // 0x04A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      S3Ep2Button;                                              // 0x04A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      S3Ep3Button;                                              // 0x04B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.EpisodesMenuActor");
		return ptr;
	}


	void OnRestartButtonPressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnPlayButtonPressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnEpisodeRadioButtonValueChanged(const struct FChangedMenuComponent& ChangedMenuComponent);
};


// Class WKND.ExtendedDojoMainMenuActor
// 0x00A0 (0x04C0 - 0x0420)
class AExtendedDojoMainMenuActor : public ASubMenuActor
{
public:
	struct FText                                       MainMenuConfirmText;                                      // 0x0420(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       QuitGameConfirmText;                                      // 0x0438(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class USceneComponent*                             RootComp;                                                 // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      BackToMainMenuButton;                                     // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      ResumeGameMenuButton;                                     // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      QuitGameMenuButton;                                       // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuBaseComponent*                          ConfirmationPromptBase;                                   // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      ConfirmationButton;                                       // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      CancelButton;                                             // 0x0480(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0488(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ExtendedDojoMainMenuActor");
		return ptr;
	}


	void UnlockAllWaves();
	bool TryLoadDojoWave(const struct FName& WaveName);
	void ShowConfirmationPrompt(struct FText* WarningText);
	void SetPauseManager(class AWKNDPauseManager* PauseManager);
	void SetDojoLevel(const struct FName& NewDojoLevelName);
	void RequestChangeDojoLevel();
	void ReceiveConfirmationPromptClosed();
	void ReceiveConfirmationPromptCalled(const struct FText& WarningText);
	void OnResumeGamePressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnQuitGamePressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnConfirmationPressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnCancelPressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnBackToMainMenuPressed(const struct FPressedButtonComponent& ButtonComponent);
	void CloseConfirmationPrompt();
	bool CanUnlockAllWaves();
};


// Class WKND.ExtendedDojoRewardsMenuActor
// 0x0030 (0x0450 - 0x0420)
class AExtendedDojoRewardsMenuActor : public ASubMenuActor
{
public:
	class USMMenuButtonComponent*                      BackButton;                                               // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnNewEnvironmentSelected;                                 // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0438(0x0008) MISSED OFFSET
	float                                              CameraFadeTime;                                           // 0x0440(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0444(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ExtendedDojoRewardsMenuActor");
		return ptr;
	}


	void UnlockAllRewards();
	void OnBackButtonPressed(const struct FPressedButtonComponent& MenuComponent);
	void HandleNewEnvironmentSelection(const struct FName& LevelName);
	void CheckForNewEnvironmentSelection(const struct FName& LevelName);
	bool CanUnlockAllRewards();
};


// Class WKND.ExtendedDojoWaveMenuItem
// 0x0020 (0x0390 - 0x0370)
class UExtendedDojoWaveMenuItem : public UMenuBaseComponent
{
public:
	struct FName                                       WaveName;                                                 // 0x0370(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       DisplayText;                                              // 0x0378(0x0018) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ExtendedDojoWaveMenuItem");
		return ptr;
	}

};


// Class WKND.ExtrasMenuActor
// 0x00B0 (0x04D0 - 0x0420)
class AExtrasMenuActor : public ASubMenuActor
{
public:
	class USceneComponent*                             RootSceneComponent;                                       // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      BackButton;                                               // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuTabComponent*                           ExtrasTab;                                                // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      DojoButton;                                               // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      TrophiesButton;                                           // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      CommentaryButton;                                         // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      CreditsButton;                                            // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuScrollContainerComponent*               WaveScrollComponent;                                      // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      PlayWaveButton;                                           // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UDataTable*                                  DojoWaveDataTable;                                        // 0x0468(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             RelativeVisibleLocations;                                 // 0x0470(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UExtendedDojoWaveMenuItem*>           DojoWaveItems;                                            // 0x0480(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FName                                       ExtendedDojoLevelName;                                    // 0x0490(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CameraFadeTime;                                           // 0x0498(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x049C(0x0004) MISSED OFFSET
	struct FText                                       LockedWaveText;                                           // 0x04A0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bUnlockAllWaves;                                          // 0x04B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x04B9(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ExtrasMenuActor");
		return ptr;
	}


	void UnlockAllWaves();
	bool TryLoadDojoWave(class UExtendedDojoWaveMenuItem* WaveItemToLoad);
	void SpawnVisualWaveItems();
	void ReceiveAllWavesUnlocked();
	void PlaySelectedWaveSurrogate();
	void OnTabChanged(const struct FChangedMenuComponent& MenuComponent);
	void OnBackButtonPressed(const struct FPressedButtonComponent& MenuComponent);
};


// Class WKND.ForceItemComponentBase
// 0x0380 (0x0470 - 0x00F0)
class UForceItemComponentBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x00F0(0x0088) MISSED OFFSET
	class USceneComponent*                             SocketPointOrigin;                                        // 0x0178(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    SocketingEvent;                                           // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SocketedEvent;                                            // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UnsocketedEvent;                                          // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FRuntimeFloatCurve                          ForceVibrationMultiplierCurve;                            // 0x01B0(0x0078) (Edit)
	struct FRuntimeFloatCurve                          ForceVibrationIntervalCurve;                              // 0x0228(0x0078) (Edit)
	struct FRuntimeFloatCurve                          ForceGrabCurve;                                           // 0x02A0(0x0078) (Edit)
	EForceItemState                                    State;                                                    // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BothHandsRequired;                                        // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsForceGrabbable;                                         // 0x031A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x031B(0x0001) MISSED OFFSET
	struct FConstraintProfileProperties                TetherProperties;                                         // 0x031C(0x0104) (Edit)
	float                                              MaxSocketingTransformAngle;                               // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VibrationBaseMagnitude;                                   // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VibrationUpwardImpulse;                                   // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinFloatingHeight;                                        // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxFloatingHeight;                                        // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeBeforeCompletedLiftOffGround;                         // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingUpForce;                                          // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FloatingDownForce;                                        // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LinearDampingWhileFloating;                               // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularDampingWhileFloating;                              // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceThrowMultiplier;                                     // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceSlowMoveMultiplier;                                  // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceRotationMultiplier;                                  // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceSummonMultiplier;                                    // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickOffOfGroundImpulse;                                   // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickOutOfSocketImpulse;                                   // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CounterForceToStopItem;                                   // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DotProductThresholdBeforeApplyingCounterForce;            // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinAllowedDistanceInFrontOfPlayer;                        // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x046C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ForceItemComponentBase");
		return ptr;
	}


	void SetTetherObject(class UPrimitiveComponent* InTetherObject);
	void SetSocketPointOrigin(class USceneComponent* InSocketPointOrigin);
	void SetPhysicsObject(class UPrimitiveComponent* PhysicsObject);
	void SetIsTethered(bool InIsTethered);
	void SendVibrationImpulse();
	void OnHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool IsTethered();
	bool HasCompletedLiftOffGround();
	bool HasCollidedAfterForceSlowMove();
	class UPrimitiveComponent* GetTetherObject();
	class UPrimitiveComponent* GetPhysicsObject();
	class UForceSocketComponent* GetHostSocket();
	void ForceThrow(const struct FVector& Impulse, class UForcePowerTargetBase* Target);
	void ForceSlowMove(const struct FVector& Impulse);
	void BeginForceGrab(class AActor* InGrabbingMotionController);
};


// Class WKND.ForcePowerComponentBase
// 0x00D8 (0x01C8 - 0x00F0)
class UForcePowerComponentBase : public UActorComponent
{
public:
	struct FForceItemCandidate                         BestScoredCandidate;                                      // 0x00F0(0x0028)
	struct FForceItemCandidate                         CurrentlyActiveCandidate;                                 // 0x0118(0x0028)
	TArray<class UForcePowerTargetBase*>               Targets;                                                  // 0x0140(0x0010) (ExportObject, ZeroConstructor)
	class UNTHapticManagerComponent*                   CachedHapticManager;                                      // 0x0150(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              HapticFrequency;                                          // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHapticAmplitude;                                       // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToMaxHapticAmplitude;                                 // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDotProductControllerAimToActivate;                     // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDotProductHMDAimToActivate;                            // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinOffhandScoreToActivate;                                // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDotProductControllerAimBeforeSlowMove;                 // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlowMoveBackwardsForwardsMultiplier;                      // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceRotationMultiplier;                                  // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VelocityThresholdBeforeForceRotation;                     // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceThrowThreshold;                                      // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceGrabThresholdUp;                                     // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceGrabThresholdAwayFromTarget;                         // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimAssistDotProductThreshold;                             // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HMDToTargetDotProductThreshold;                           // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActiveCandidateScoreMultiplier;                           // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ControllerAimScoreMultiplier;                             // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceScoreMultiplier;                                  // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HMDAimScoreMultiplier;                                    // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HMDToControllerUpwardAngle;                               // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableFishingGrabGesture;                                 // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnablePullTowardsGrabGesture;                             // 0x01A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableForceSummonGesture;                                // 0x01AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableThrowAwayGesture;                                   // 0x01AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSlowMoveGesture;                                    // 0x01AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReachDeterminesForwardBackSlowMove;                       // 0x01AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01AE(0x0002) MISSED OFFSET
	float                                              ReachSlowMoveDeadZone;                                    // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachSlowMoveExtents;                                     // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReachSlowMoveMaxVelocity;                                 // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebugDisplayReachMode;                             // 0x01BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerPullRequiredForGrab;                               // 0x01BD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseHMDToControllerAim;                                   // 0x01BE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDebugDisplay;                                      // 0x01BF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableForcePower;                                        // 0x01C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ForcePowerComponentBase");
		return ptr;
	}


	void SubmitTargetForConsideration(class UForcePowerTargetBase* ForceTarget);
};


// Class WKND.ForcePowerTargetBase
// 0x0020 (0x02B0 - 0x0290)
class UForcePowerTargetBase : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0290(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ForcePowerTargetBase");
		return ptr;
	}


	void NotifyHitByForceItem(class UForceItemComponentBase* ForceItem, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	struct FVector CalculateFutureLocationGivenCurrentVelocity(float SecondsIntoFuture);
};


// Class WKND.ForceSocketComponent
// 0x0220 (0x04B0 - 0x0290)
class UForceSocketComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0290(0x0040) MISSED OFFSET
	struct FRuntimeFloatCurve                          CaptureCurve;                                             // 0x02D0(0x0078) (Edit)
	EForceSocketType                                   SocketType;                                               // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EForceSocketCaptureConstraint                      CaptureConstraint;                                        // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x034A(0x0006) MISSED OFFSET
	TArray<float>                                      AllowedCaptureRotationalAngles;                           // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FConstraintProfileProperties                ConstraintProperties;                                     // 0x0360(0x0104) (Edit)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnItemSocketed;                                           // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemUnsocketed;                                         // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemStartSocketing;                                     // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSocketStateChanged;                                     // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               EnableCaptureOfItems;                                     // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PreventHandReleaseWhileSocketLocked;                      // 0x04A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OnlySocketHeldItems;                                      // 0x04AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x04AB(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x04AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ForceSocketComponent");
		return ptr;
	}


	void SetPhysicsConstraintAttachHost(class UPrimitiveComponent* InPhysicsConstraintAttachHost);
	void SetOverlapVolume(class UShapeComponent* InOverlapVolume);
	void ReleaseLockedItem();
	void OnHandInteraction(EXLABInteractionEventType EventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive);
	void OnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	class UShapeComponent* GetOverlapVolume();
};


// Class WKND.FrontendInteractionComponent
// 0x0048 (0x0138 - 0x00F0)
class UFrontendInteractionComponent : public UActorComponent
{
public:
	bool                                               bIsHovered;                                               // 0x00F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnInteractPressed;                                        // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInteractReleased;                                       // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHoverBegin;                                             // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHoverEnd;                                               // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.FrontendInteractionComponent");
		return ptr;
	}

};


// Class WKND.FrontendInteractionController
// 0x01A0 (0x0430 - 0x0290)
class UFrontendInteractionController : public USceneComponent
{
public:
	bool                                               bActive;                                                  // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EInteractionMethodEnum                             InteractionMethod;                                        // 0x0291(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bComponentBased;                                          // 0x0292(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockInputAfterInteraction;                              // 0x0293(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebugTrace;                                          // 0x0294(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0295(0x0003) MISSED OFFSET
	float                                              InputBlockTime;                                           // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TraceFrameDelay;                                          // 0x029C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TraceLength;                                              // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FingerHoverOffset;                                        // 0x02A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FingertraceLength;                                        // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FingertraceRadius;                                        // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FingerInteractDistance;                                   // 0x02B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FingerReleaseDistance;                                    // 0x02B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FingerHoverDistance;                                      // 0x02B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x02BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02BD(0x0003) MISSED OFFSET
	TArray<class AActor*>                              ActorsToIgnore;                                           // 0x02C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FAnimTypeDropdown                           RequestingHandAnim;                                       // 0x02D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	EControllerHand                                    Handedness;                                               // 0x02E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14F];                                     // 0x02E1(0x014F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.FrontendInteractionController");
		return ptr;
	}


	void UpdateUsedHandForInteraction(EControllerHand ControllerHand);
	void SetTraceLength(float Length);
	void SetTraceChannel(TEnumAsByte<ECollisionChannel> CollisionChannel);
	void SetInteractionMethod(EInteractionMethodEnum NewInteractionMethod);
	void ReleaseInteractionKey();
	void PressInteractionKey();
	bool IsInteractionKeyPressed();
	class UMotionControllerComponent* GetMotionControllerComponent();
	class AWKNDMotionController* GetMotionController();
	struct FHitResult GetLaserHitResults();
	EInteractionMethodEnum GetInteractionMethod();
	class AActor* GetHoveredActor();
	struct FHitResult GetHandHitResult();
	void Deactivate();
	void Activate(bool bReset);
};


// Class WKND.FrontendInteractionInterface
// 0x0000 (0x0028 - 0x0028)
class UFrontendInteractionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.FrontendInteractionInterface");
		return ptr;
	}


	void UpButton_Release();
	void UpButton_Press();
	void UpButton_HoverEnd();
	void UpButton_HoverBegin();
	void RadialButton_ValueChanged(float TwistValue);
	void DownButton_Release();
	void DownButton_Press();
	void DownButton_HoverEnd();
	void DownButton_HoverBegin();
	void Button4_Release();
	void Button4_Press();
	void Button4_HoverEnd();
	void Button4_HoverBegin();
	void Button3_Release();
	void Button3_Press();
	void Button3_HoverEnd();
	void Button3_HoverBegin();
	void Button2_Release();
	void Button2_Press();
	void Button2_HoverEnd();
	void Button2_HoverBegin();
	void Button1_Release();
	void Button1_Press();
	void Button1_HoverEnd();
	void Button1_HoverBegin();
	void BackButton_Release();
	void BackButton_Press();
	void BackButton_HoverEnd();
	void BackButton_HoverBegin();
};


// Class WKND.GeneralUtils
// 0x0000 (0x0028 - 0x0028)
class UGeneralUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.GeneralUtils");
		return ptr;
	}


	void STATIC_SetRelativeBoneRotation(class UPoseableMeshComponent* PoseableMesh, const struct FName& BoneName, const struct FVector& EulerAngles);
	void STATIC_SetRelativeBoneLocation(class UPoseableMeshComponent* PoseableMesh, const struct FName& BoneName, const struct FVector& Location);
	bool STATIC_NeedsEntitlementsCheck();
	float STATIC_ModulateOverTime(float GameTimeInSeconds, float MinValue, float MaxValue, float CycleTime);
	void STATIC_MakeActorAndAttachedHiddenInGameRecur(class AActor* TargetActor, bool hidden);
	bool STATIC_IsLowQualityHardware();
	class AWKNDPlayerPawn* STATIC_GetWKNDPlayerPawn();
	class UTelemetryManager* STATIC_GetTelemetryManager();
	class URewardsManager* STATIC_GetRewardsManager();
	class URatingsManager* STATIC_GetRatingsManager();
	TArray<class UActorComponent*> STATIC_GetComponentsByInterfaceAndTag(class AActor* OwnerActor, class UClass* InterfaceUClass, const struct FName& Tag);
	TArray<class UActorComponent*> STATIC_GetComponentsByInterface(class AActor* OwnerActor, class UClass* InterfaceUClass);
	class UActorComponent* STATIC_GetComponentByInterface(class AActor* OwnerActor, class UClass* InterfaceUClass);
	void STATIC_DisableTickCollisionPhysicsGrabbable(class AActor* TargetActor);
};


// Class WKND.RunningAverage
// 0x0020 (0x0048 - 0x0028)
class URunningAverage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	int                                                SampleSize;                                               // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RunningAverage");
		return ptr;
	}


	int GetTotalSamplesTaken();
	void Clear();
	float CalculateAverage();
	void AddSample(float Sample);
};


// Class WKND.GhostingTriggerComponent
// 0x00F0 (0x07A0 - 0x06B0)
class UGhostingTriggerComponent : public USphereComponent
{
public:
	struct FName                                       MaterialParameterName;                                    // 0x06B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ActorForceOffGhostingTag;                                 // 0x06B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggeredByPlayerHands;                                  // 0x06C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggeredByPickupObjects;                                // 0x06C1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggeredByToolbeltObjects;                              // 0x06C2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggeredByCharacters;                                   // 0x06C3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTriggeredByStaticGeometry;                               // 0x06C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideMaterial;                                        // 0x06C5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGhostingMode                                      GhostingMode;                                             // 0x06C6(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x06C7(0x0001) MISSED OFFSET
	TArray<struct FGhostMaterialStruct>                GhostMaterials;                                           // 0x06C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UMaterialInterface*                          DepthClippingMaterial;                                    // 0x06D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GhostingSpeed;                                            // 0x06E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x94];                                      // 0x06E4(0x0094) MISSED OFFSET
	TArray<struct FGhostMaterialStruct>                PreviousMaterials;                                        // 0x0778(0x0010) (ZeroConstructor)
	TArray<class UMaterialInstanceDynamic*>            DynamicMaterialInstances;                                 // 0x0788(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0798(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.GhostingTriggerComponent");
		return ptr;
	}


	bool ShouldGhost();
	void SetShouldGhostWithMode(bool bShouldGhost, EGhostingReason GhostingReason, EGhostingMode NewGhostingMode);
	void SetShouldGhost(bool bShouldGhost, EGhostingReason GhostingReason);
	void SetPrimitiveComponent(class UPrimitiveComponent* Component);
	void SetMaterialParameterName(const struct FName& ParameterName);
	void RemoveTrackedComponent(class UPrimitiveComponent* ComponentToRemove);
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	TArray<class UMaterialInstanceDynamic*> GetDynamicMaterialInstances();
	void DeactivateGhosting();
	void AddTrackedComponent(class UPrimitiveComponent* ComponentToAdd);
	void ActivateGhosting(bool bSkipAutomaticChecks);
};


// Class WKND.GrabbableCrankingComponent
// 0x0090 (0x0180 - 0x00F0)
class UGrabbableCrankingComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET
	class URunningAverage*                             RunningAverage;                                           // 0x0108(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AmCrankingThreshold;                                      // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisplayDebugInfo;                                         // 0x0114(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0115(0x0003) MISSED OFFSET
	TArray<struct FGrabbableCrankingPoint>             CrankingPoints;                                           // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              CrankingVelocity;                                         // 0x0128(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCrankAngle;                                        // 0x012C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedCrankAngle;                                    // 0x0130(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HapticFrequency;                                          // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHapticAmplitude;                                       // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HapticAmplitudeMultiplier;                                // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCrankableGrabbed;                                       // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCrankableReleased;                                      // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartCranking;                                          // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStopCranking;                                           // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.GrabbableCrankingComponent");
		return ptr;
	}


	void SetAllowedRotationDirection(class UObject* Emitter, EAllowedRotationDirection AllowedRotationDirection);
	void LockAtCurrentRotation(class UObject* Emitter, bool ShouldLock);
	class UPoseableMeshComponent* GetPoseableMeshComponent();
	float GetCurrentRotationAngle(class UObject* Emitter);
};


// Class WKND.GrabbableDeformerComponent
// 0x0098 (0x0188 - 0x00F0)
class UGrabbableDeformerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F0(0x0028) MISSED OFFSET
	bool                                               bDeformerGrabbedLeft;                                     // 0x0118(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDeformerGrabbedRight;                                    // 0x0119(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x011A(0x0006) MISSED OFFSET
	TArray<struct FGrabbableDeformerPoint>             DeformerPoints;                                           // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bEnableDebugDisplay;                                      // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              HapticFrequency;                                          // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHapticAmplitude;                                       // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HapticAmplitudeMultiplier;                                // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeformationStopGracePeriod;                               // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentDeformationAmount;                                 // 0x0144(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDeformableBrokenOff;                                    // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeformableGrabbed;                                      // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWrenchingStart;                                         // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWrenchingStop;                                          // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.GrabbableDeformerComponent");
		return ptr;
	}


	void SetSkeletalMeshComponent(class USkeletalMeshComponent* SkeletalMeshComponent);
	void SetDeformationAmount(const struct FName& EmitterTag, float DeformationAmount);
	class USkeletalMeshComponent* GetSkeletalMeshComponent();
};


// Class WKND.GrabbableMoverComponent
// 0x00B0 (0x01A0 - 0x00F0)
class UGrabbableMoverComponent : public UActorComponent
{
public:
	EControllerHand                                    CurrentHand;                                              // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1F];                                      // 0x00F1(0x001F) MISSED OFFSET
	class URunningAverage*                             RunningAverage;                                           // 0x0110(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	float                                              AmMovingThreshold;                                        // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MoverVelocity;                                            // 0x012C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentBoneExtension;                                     // 0x0130(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HapticFrequency;                                          // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHapticAmplitude;                                       // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HapticAmplitudeMultiplier;                                // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HapticAmplitudeLerp;                                      // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	float                                              HapticAmplitudeLerpBegin;                                 // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HapticAmplitudeLerpEnd;                                   // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugText;                                            // 0x014C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMoverGrabbed;                                           // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMoverReleased;                                          // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartMoving;                                            // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStopMoving;                                             // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FGrabbableMoverPoint>                MoverPoints;                                              // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.GrabbableMoverComponent");
		return ptr;
	}


	void SetPoseableMeshComponent(class UPoseableMeshComponent* PoseableMesh);
	void OverrideCurrentBoneExtension(class UObject* Emitter, float NewBoneExtension);
	void LockAtCurrentLocation(class UObject* Emitter, bool ShouldLock);
	class UPoseableMeshComponent* GetPoseableMeshComponent();
};


// Class WKND.GrabbableSpinnerComponent
// 0x0098 (0x0188 - 0x00F0)
class UGrabbableSpinnerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET
	class URunningAverage*                             RunningAverageLeft;                                       // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class URunningAverage*                             RunningAverageRight;                                      // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              TouchThreshold;                                           // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HapticFrequency;                                          // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHapticAmplitude;                                       // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HapticAmplitudeMultiplier;                                // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FGrabbableSpinnerPoint>              SpinnerPoints;                                            // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnSpinnerTouched;                                         // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpinnerReleased;                                        // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpinnerStartRotating;                                   // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpinnerStopRotating;                                    // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSpinnerPassedStoppingPoint;                             // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.GrabbableSpinnerComponent");
		return ptr;
	}


	void LockRotation(class USceneComponent* Emitter, bool ShouldLock);
	void LockAllRotation(bool ShouldLock);
	class UPoseableMeshComponent* GetPoseableMeshComponent();
	float GetAngularMomentum(class USceneComponent* Emitter);
};


// Class WKND.GrabbableTouchComponent
// 0x0038 (0x0128 - 0x00F0)
class UGrabbableTouchComponent : public UActorComponent
{
public:
	TArray<struct FGrabbableTouchPoint>                TouchPoints;                                              // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TouchHoldTime;                                            // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTouchStart;                                             // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTouchComplete;                                          // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.GrabbableTouchComponent");
		return ptr;
	}


	void ResetTouch(class UObject* Emitter);
};


// Class WKND.GrabbableTwisterComponent
// 0x00D0 (0x01C0 - 0x00F0)
class UGrabbableTwisterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET
	class URunningAverage*                             RunningAverage;                                           // 0x0110(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              AmTwistingThreshold;                                      // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	TArray<struct FGrabbableTwisterPoint>              TwisterPoints;                                            // 0x0120(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              CurrentTwistAngle;                                        // 0x0130(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentRunningNormalizedAngle;                            // 0x0134(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TwistVelocity;                                            // 0x0138(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UsesAnimationBlueprint;                                   // 0x013C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseParentBoneSpace;                                       // 0x013D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawDebugText;                                            // 0x013E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawConstraintDebugText;                                  // 0x013F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DrawRunningNormalizedAngleDebugText;                      // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0141(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTwistableGrabbed;                                       // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTwistableReleased;                                      // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStartTwisting;                                          // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStopTwisting;                                           // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnTwistableTwisted;                                       // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHitNextStopPoint;                                       // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNewABPBoneAngle;                                        // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EControllerHand                                    CurrentHand;                                              // 0x01B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.GrabbableTwisterComponent");
		return ptr;
	}


	void SetSkeletalMeshComponent(class USkeletalMeshComponent* SkeletalMesh);
	void SetPoseableMeshComponent(class UPoseableMeshComponent* PoseableMesh);
	void SetMinMaxAngleConstraintForEmitter(class UObject* Emitter, const struct FVector2D& MinMaxAngleConstraint);
	void SetBoneNameForEmitter(class UObject* Emitter, const struct FName& BoneName);
	void NotifyTwistingStopped();
	void LockAtCurrentRotation(class UObject* Emitter, bool ShouldLock);
	class USkeletalMeshComponent* GetSkeletalMeshComponent();
	class UPoseableMeshComponent* GetPoseableMeshComponent();
	float GetCurrentTwistAngle(class UObject* Emitter);
	void EnableTwisterForEmitter(class UObject* Emitter, bool ShouldEnable);
};


// Class WKND.GripAdjustComponent
// 0x0030 (0x02C0 - 0x0290)
class UGripAdjustComponent : public USceneComponent
{
public:
	bool                                               DebugGripAdjust;                                          // 0x0290(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ActiveGripAdjust;                                         // 0x0291(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0292(0x0006) MISSED OFFSET
	class URPOCGrabLocatorComponent*                   GrabLocator;                                              // 0x0298(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             GripAdjustLocator;                                        // 0x02A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02A8(0x0008) MISSED OFFSET
	struct FQuat                                       TargetRotation;                                           // 0x02B0(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.GripAdjustComponent");
		return ptr;
	}


	void EndGripAdjustment();
	void BeginGripAdjustment(class URPOCGrabLocatorComponent* Grab, class USceneComponent* Pivot);
	void AdjustByAxis(const struct FVector& Forward, const struct FVector& Normal, struct FVector* Direction);
};


// Class WKND.HandClimbComponent
// 0x0270 (0x0920 - 0x06B0)
class UHandClimbComponent : public USphereComponent
{
public:
	class UCurveFloat*                                 FallCurve;                                                // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ClimbHandLocked;                                          // 0x06B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DistanceCheck;                                            // 0x06B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x06BA(0x0002) MISSED OFFSET
	float                                              MaxDistance_Head;                                         // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance_Hands;                                        // 0x06C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseClimbDrag;                                             // 0x06C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseLagByDistance;                                         // 0x06C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x06C6(0x0002) MISSED OFFSET
	class UCurveFloat*                                 LagByDistanceCurve;                                       // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceRange;                                            // 0x06D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FOneToOnePair                               OneToOnenessForward;                                      // 0x06D4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FOneToOnePair                               OneToOnenessRight;                                        // 0x06DC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FOneToOnePair                               OneToOnenessUp;                                           // 0x06E4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               GrabDampening;                                            // 0x06EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x06ED(0x0003) MISSED OFFSET
	float                                              GrabDampTime;                                             // 0x06F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SweepTestClimb;                                           // 0x06F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x06F5(0x0003) MISSED OFFSET
	float                                              SweepRadius;                                              // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepCapsuleSizeAdjust;                                   // 0x06FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepHalfHeight;                                          // 0x0700(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SweepRadiusCurrent;                                       // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepHeightAdjust;                                        // 0x0708(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SweepDetailed;                                            // 0x070C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x070D(0x0003) MISSED OFFSET
	class UHapticFeedbackEffect_Curve*                 HapticCurve;                                              // 0x0710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HapticScale;                                              // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HapticFrictionScale;                                      // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallRaycastOffset;                                        // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DropThreshold;                                            // 0x0724(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorizontalDropThreshold;                                  // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Catchable;                                                // 0x072C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x072D(0x0003) MISSED OFFSET
	float                                              MaxFallRate;                                              // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartFallLoc;                                             // 0x0734(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               DebugClimbing;                                            // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ActivePlayerClimb;                                        // 0x0741(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0742(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AClimbObject>                 ClimbObject;                                              // 0x0744(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x074C(0x0004) MISSED OFFSET
	struct FNTAnimVarStruct                            HandAnims;                                                // 0x0750(0x0058) (BlueprintVisible, BlueprintReadOnly)
	bool                                               Grabbed;                                                  // 0x07A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x07A9(0x0007) MISSED OFFSET
	class UHandClimbComponent*                         OtherClimber;                                             // 0x07B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Primary;                                                  // 0x07B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3F];                                      // 0x07B9(0x003F) MISSED OFFSET
	class URPOCGrabLocatorComponent*                   LastGrab;                                                 // 0x07F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData10[0x40];                                      // 0x0800(0x0040) MISSED OFFSET
	struct FTimeline                                   Timeline;                                                 // 0x0840(0x00D0)
	unsigned char                                      UnknownData11[0x10];                                      // 0x0910(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.HandClimbComponent");
		return ptr;
	}


	void UpdateClimber(class AActor* climber, float DeltaTime);
	bool TryGrabClimbHold(class AClimbObject* ClimbObject);
	bool StopClimbHold(bool Force, bool WithFallBehaviour);
	void StartFall(class AClimbDismount* DismountPoint);
	void StartClimbShock(float Magnitude, float Duration);
	void SetOtherClimber(class UHandClimbComponent* Other);
	void SetFallSpeed(float Value);
	void SetCurrentClimber(EClimbPrimaryToken Token);
	void SetClimbOffset(const struct FVector& Offset, float DeltaTime, float LerpSpeed);
	bool IsPrimary();
	bool IsLocked();
	bool IsGrabbed();
	bool IsFalling();
	void HitGround();
	float GetClimbDistanceThisFrame();
	void GetClimbData(struct FVector* Grab, struct FVector* Forward);
	void FallProgress(float Value);
	void BeginFallHaptics();
};


// Class WKND.HandGhostingTriggerComponent
// 0x0020 (0x07C0 - 0x07A0)
class UHandGhostingTriggerComponent : public UGhostingTriggerComponent
{
public:
	bool                                               bHandleHandsIndividually;                                 // 0x07A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x07A1(0x0007) MISSED OFFSET
	struct FName                                       MaterialParameterName_LeftHandOverride;                   // 0x07A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MaterialParameterName_RightHandOverride;                  // 0x07B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.HandGhostingTriggerComponent");
		return ptr;
	}

};


// Class WKND.HBVRTransitionComponent
// 0x00E0 (0x01D0 - 0x00F0)
class UHBVRTransitionComponent : public UActorComponent
{
public:
	struct FVRTransitionAsset                          TransitionAssets[0x4];                                    // 0x00F0(0x0028) (Edit, DisableEditOnInstance)
	class UHBVRTransitionData*                         Transitions[0x4];                                         // 0x0190(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x01B0(0x0010) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CurrentMaterialInstance;                                  // 0x01C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.HBVRTransitionComponent");
		return ptr;
	}


	void TriggerTransition(EVRCameraTransitionType Type);
	void EndTransition();
};


// Class WKND.HBVRTransitionData
// 0x0020 (0x0050 - 0x0030)
class UHBVRTransitionData : public UDataAsset
{
public:
	class UMaterialInstance*                           PostProcessMaterial;                                      // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 AlphaCurve;                                               // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseLastFrameViewMatrix;                                   // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.HBVRTransitionData");
		return ptr;
	}


	void TransitionEnd(class UMaterialInstanceDynamic* Material);
	void TransitionBegin(class UMaterialInstanceDynamic* Material);
};


// Class WKND.HotSpot
// 0x0040 (0x02D0 - 0x0290)
class UHotSpot : public USceneComponent
{
public:
	EHotSpotType                                       Type;                                                     // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0291(0x0028) UNKNOWN PROPERTY: SoftClassProperty WKND.HotSpot.FilterClass
	float                                              distanceToPlayer;                                         // 0x02C0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET
	class AActor*                                      claimant;                                                 // 0x02C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.HotSpot");
		return ptr;
	}

};


// Class WKND.HotSpotActor
// 0x0008 (0x0320 - 0x0318)
class AHotSpotActor : public AActor
{
public:
	class UHotSpot*                                    HotSpot;                                                  // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.HotSpotActor");
		return ptr;
	}

};


// Class WKND.HotSpotLayout
// 0x0010 (0x0328 - 0x0318)
class AHotSpotLayout : public AActor
{
public:
	TArray<class UHotSpot*>                            HotSpots;                                                 // 0x0318(0x0010) (ExportObject, ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.HotSpotLayout");
		return ptr;
	}

};


// Class WKND.CombatPointOccupant
// 0x0000 (0x0028 - 0x0028)
class UCombatPointOccupant : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.CombatPointOccupant");
		return ptr;
	}


	bool OnAssignedToCombatPoint(const struct FKFCircleCombatPoint& CombatPoint);
	int GetPreferredCombatPoint(TArray<struct FKFCircleCombatPoint> AvailableCombatPoints);
	bool CanOccupyCombatPoint(const struct FKFCircleCombatPoint& CombatPoint);
};


// Class WKND.INPDebugInputComponent
// 0x0000 (0x00F0 - 0x00F0)
class UINPDebugInputComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.INPDebugInputComponent");
		return ptr;
	}

};


// Class WKND.InteractionUtils
// 0x0000 (0x0028 - 0x0028)
class UInteractionUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.InteractionUtils");
		return ptr;
	}


	bool STATIC_IsBestInteractiveValid(const struct FXLABBestInteractiveData& BestInteractive);
	TScriptInterface<class UXLABInteractionHandler> STATIC_GetInteractionReceiverForHand(class UObject* WorldContextObject, EControllerHand Hand);
	TScriptInterface<class UXLABInteractiveGroup> STATIC_GetGroupForActor(class AActor* Actor);
	float STATIC_AdjustByAxis(const struct FVector& Forward, const struct FVector& RotationAxis, const struct FVector& DirectionToController, bool Abs);
};


// Class WKND.InterfaceCharacter
// 0x0010 (0x0730 - 0x0720)
class AInterfaceCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0720(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.InterfaceCharacter");
		return ptr;
	}

};


// Class WKND.KungFuCircleSquad
// 0x00C0 (0x0450 - 0x0390)
class AKungFuCircleSquad : public ACombatSquad
{
public:
	bool                                               m_bEnableMultipleAttackers;                               // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	int                                                m_MaxMeleeAttackers;                                      // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                m_MaxRangedAttackers;                                     // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_SelectNextCandidateAfterCooldown;                       // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	struct FVector2D                                   m_MeleeAttackCooldownDurationRange;                       // 0x03A0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               m_ShouldUseRangedSpecificAttackCooldown;                  // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	float                                              m_RangedAttackCooldownDuration;                           // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_bUseFixedDelayBeforeAttacks;                            // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	float                                              m_MinDelayBeforeMeleeAttacks;                             // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_MaxDelayBeforeMeleeAttacks;                             // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_MinDelayBeforeRangedAttacks;                            // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_MaxDelayBeforeRangedAttacks;                            // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_bUseTargetPoints;                                       // 0x03C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_bEnable360Combat;                                       // 0x03C5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x03C6(0x0002) MISSED OFFSET
	TArray<struct FKFCircleCombatPoint>                m_CombatPoints_PC;                                        // 0x03C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FKFCircleCombatPoint>                m_CombatPoints_Quest;                                     // 0x03D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FKFCircleCombatPoint>                m_CombatPoints;                                           // 0x03E8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData05[0x58];                                      // 0x03F8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.KungFuCircleSquad");
		return ptr;
	}


	void StartAttackCooldown(ENPCCombatType NPCCombatType);
	void ResetCombatPoints();
	void ResetAttackCooldowns();
	void ResetAttackCooldownByType(ENPCCombatType NPCCombatType);
	void ReleaseCombatPoint(const TScriptInterface<class UCombatSquadBehaviourInterface>& SquadMember);
	bool OccupyCombatPoint(int Index, class AActor* SquadMember);
	bool IsDisengaged(const TScriptInterface<class UCombatSquadBehaviourInterface>& Member);
	bool IsCurrentlyOnCooldown(ENPCCombatType CooldownType);
	void HandleCooldownReset(ENPCCombatType CooldownType);
	void GetVacantCombatPointsByType(TArray<struct FKFCircleCombatPoint>* VacantMeleePoints, TArray<struct FKFCircleCombatPoint>* VacantRangedPoints, TArray<struct FKFCircleCombatPoint>* VacantMixedPoints);
	bool GetRandomVacantCombatPoint(ENPCCombatType NPCCombatType, struct FKFCircleCombatPoint* CombatPoint);
	void GetRandomPointOnYZPlane(float MaxX, float MaxY, const struct FVector& AnchorLocation, struct FVector* PlaneLocation);
	bool GetRandomCandidateByCombatType(ENPCCombatType NPCCombatType, class AActor** Candidate);
	bool GetRandomCandidate(class AActor** Candidate);
	void GetLocationAroundTargetActor(class AActor* TargetActor, float Angle, float Distance, float Height, struct FVector* Location);
	void GetCombatPointForAttacker(const TScriptInterface<class UCombatSquadBehaviourInterface>& Attacker, struct FKFCircleCombatPoint* CombatPoint);
	bool GetClosestVacantCombatPoint(class AActor* Attacker, struct FKFCircleCombatPoint* CombatPoint);
	void GetCandidates(TArray<class AActor*>* All, TArray<class AActor*>* Melee, TArray<class AActor*>* Ranged, TArray<class AActor*>* Mixed);
	bool AssignRandomCombatPointToDisengaged(ENPCCombatType CombatType, class AActor** Member);
	void AddDisengagedMember(class AActor* NewDisengaged);
};


// Class WKND.LightsaberBladeComponent
// 0x0190 (0x0420 - 0x0290)
class ULightsaberBladeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x0290(0x00C8) MISSED OFFSET
	float                                              BladeLength;                                              // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BladeRadius;                                              // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlanceThreshold;                                          // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlanceMaxTime;                                            // 0x0364(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableSlicing;                                           // 0x0368(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableCollisionWhenSlicingIsOff;                         // 0x0369(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x036A(0x0002) MISSED OFFSET
	float                                              MinImpulseMagnitude;                                      // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxImpulseMagnitude;                                      // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BladeSpeedToImpulseMagnitude;                             // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SliceBurstPFX;                                            // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x0380(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSaberOn;                                                 // 0x0381(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnabled;                                               // 0x0382(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bJustTeleported;                                          // 0x0383(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bJustSnapped;                                             // 0x0384(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSimplifiedCutDetection;                                  // 0x0385(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawBlade;                                          // 0x0386(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugPrintCuttingState;                                  // 0x0387(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCutEnd;                                                 // 0x0388(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCut;                                                    // 0x0398(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGlance;                                                 // 0x03A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGlanceEnd;                                              // 0x03B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              Interval;                                                 // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDraw;                                               // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x23];                                      // 0x03CD(0x0023) MISSED OFFSET
	struct FTransform                                  OwnerTransform;                                           // 0x03F0(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.LightsaberBladeComponent");
		return ptr;
	}


	void SetStressOnBlade(float NewStress);
	void SetBladeScale(float NewBladeScale);
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool IsGlancing();
	bool IsCutting();
	struct FVector GetTipLocation();
	float GetStressOnBlade();
	float GetScaledBladeLength();
	struct FVector GetReverseCutDirection();
	float GetLastFrameMovement();
	struct FVector GetHiltLocation();
	struct FLightsaberCuttingPlane GetCuttingPlane();
	struct FVector GetCutDirection();
	float GetBladeSpeed();
	float GetBladeScale();
	struct FVector GetBladeDirection();
};


// Class WKND.LightsaberCuttingFX
// 0x0380 (0x0698 - 0x0318)
class ALightsaberCuttingFX : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0318(0x0004) MISSED OFFSET
	bool                                               bUseSimplifiedFX;                                         // 0x031C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x031D(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    CuttingPFX;                                               // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               CuttingParticleEmitters;                                  // 0x0328(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EPhysicalSurface>, struct FListOfEmitters> SurfaceTypeCuttingEmitters;                               // 0x0338(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UInstancedStaticMeshComponent*               MetalGlowMesh;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UInstancedStaticMeshComponent*               WoodGlowMesh;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	int                                                MaxGlowInstances;                                         // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      GlowSpawnFrequency;                                       // 0x039C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	float                                              GlowSpawnDistance;                                        // 0x03A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowMinScale;                                             // 0x03A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowMaxScale;                                             // 0x03A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03AC(0x0004) MISSED OFFSET
	class UInstancedStaticMeshComponent*               GenericScorchMesh;                                        // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	int                                                MaxScorchInstances;                                       // 0x03B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GenericScorchMinScale;                                    // 0x03BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GenericScorchMaxScale;                                    // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinScorchDistance;                                        // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumOfSplineMeshes;                                        // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxSplineLength;                                          // 0x03CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinFinalSplineDistance;                                   // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScorchDepthBias;                                          // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxScorchDepth;                                           // 0x03D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	TArray<class UStaticMesh*>                         DefaultScorchMeshes;                                      // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EPhysicalSurface>, struct FListOfMeshes> SurfaceTypeScorchMeshes;                                  // 0x03F0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<EPhysicalSurface>, class UMaterial*> ScorchMaterials;                                          // 0x0440(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 CoverMesh;                                                // 0x0490(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldPinchHardCorners;                                  // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              PointStabCutOff;                                          // 0x049C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumOfPointStabMeshes;                                     // 0x04A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	class UStaticMesh*                                 PointStabMesh;                                            // 0x04A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<TEnumAsByte<EPhysicalSurface>, class UMaterialInstance*> PointStabMaterials;                                       // 0x04B0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              PointStabMinScale;                                        // 0x0500(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PointStabMaxScale;                                        // 0x0504(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 CapMesh;                                                  // 0x0508(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CapMeshScale;                                             // 0x0510(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    GlancingPFX;                                              // 0x0520(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UMaterial*                                   GlanceDecalMaterial;                                      // 0x0528(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumGlanceDecals;                                       // 0x0530(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	class USplineMeshComponent*                        CurrentScorchMesh;                                        // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USplineMeshComponent*                        CurrentCoverMesh;                                         // 0x0540(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bScorchActive;                                            // 0x0548(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0549(0x0003) MISSED OFFSET
	struct FVector                                     LastSplineLocation;                                       // 0x054C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	class UStaticMeshComponent*                        CurrentPointStabMesh;                                     // 0x0558(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              PointStabDistance;                                        // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              PointStabDuration;                                        // 0x0564(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              PointStabScale;                                           // 0x0568(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bPointStabActive;                                         // 0x056C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x056D(0x0003) MISSED OFFSET
	class UDecalComponent*                             CurrentGlanceDecal;                                       // 0x0570(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<class UDecalComponent*>                     GlanceDecals;                                             // 0x0578(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                CurrentGlanceDecalIndex;                                  // 0x0588(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bDynamicSurface;                                          // 0x058C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x058D(0x0003) MISSED OFFSET
	struct FVector                                     CutLocation;                                              // 0x0590(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     CutNormal;                                                // 0x059C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              CutAbsoluteDepth;                                         // 0x05A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              CutChangeInDepth;                                         // 0x05AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              CutChangeInLocation;                                      // 0x05B0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              CutStressOnBlade;                                         // 0x05B4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      CutSurfaceType;                                           // 0x05B8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bCutIsNew;                                                // 0x05B9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x05BA(0x0002) MISSED OFFSET
	float                                              CutDuration;                                              // 0x05BC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class UPrimitiveComponent*                         ComponentBeingCut;                                        // 0x05C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FVector                                     GlanceLocation;                                           // 0x05C8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FVector                                     GlanceNormal;                                             // 0x05D4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	float                                              GlanceBladeSpeed;                                         // 0x05E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x05E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class USceneComponent*                             Origin;                                                   // 0x05E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData13[0x40];                                      // 0x05F0(0x0040) MISSED OFFSET
	TArray<class USplineMeshComponent*>                PreSpawnedScorchMeshes;                                   // 0x0630(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	TArray<class USplineMeshComponent*>                PreSpawnedCoverMeshes;                                    // 0x0640(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData14[0x28];                                      // 0x0650(0x0028) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                PreSpawnedPointStabMeshes;                                // 0x0678(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData15[0x10];                                      // 0x0688(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.LightsaberCuttingFX");
		return ptr;
	}


	void UpdateSplineScorch();
	void UpdateScorchMaterialParams();
	void UpdatePointStabMaterialParams();
	void UpdatePointStab();
	void UpdateGlancePFX();
	void UpdateGlanceDecal();
	void UpdateCuttingPFXParams();
	void StopSplineScorch();
	void StopScorchMaterialParams();
	void StopPointStab();
	void StopGlancePFX();
	void StopCuttingPFX();
	void StartSplineScorch(const struct FVector& Location);
	void StartPointStab();
	void StartGlancePFX();
	void StartGlanceDecal();
	void ScorchGeneric();
	void ReceiveOnUpdateGlance();
	void ReceiveOnUpdateCut();
	void ReceiveOnStartGlance();
	void ReceiveOnStartCut();
	void ReceiveOnEndGlance();
	void ReceiveOnEndCut();
	class UInstancedStaticMeshComponent* PickGlowMesh();
	void OnGlanceUpdated();
	void OnGlanceStarted();
	void OnGlanceEnded();
	void OnGlance(const struct FVector& Location, const struct FVector& Normal, float BladeSpeed, bool bIsNewCut, bool bDynamic);
	void OnCutUpdated();
	void OnCutStarted();
	void OnCutEnded();
	void OnCut(const struct FWeaponBladeCollisionPoint& BladeColln, float AbsoluteDepth, float ChangeInDistance, float StressOnBlade, bool bIsNewCut, bool bDynamic);
	void InitScorchMaterialParams();
	void InitPointStabMaterialParams();
	void InitCuttingPFXParams();
	class UStaticMesh* GetScorchMeshForSurface();
	class UMaterial* GetScorchMaterialForSurface();
	class UMaterialInstance* GetPointStabMaterialForSurface();
	void ClearAllFX();
	bool CheckPointStabClearance(struct FVector* OutLocation);
	void AddNewSplinePoint(const struct FVector& Location);
	void AddGlow();
};


// Class WKND.ListAnimSequenceFrameRatesCommandlet
// 0x0010 (0x0090 - 0x0080)
class UListAnimSequenceFrameRatesCommandlet : public UCommandlet
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ListAnimSequenceFrameRatesCommandlet");
		return ptr;
	}

};


// Class WKND.LocomotionUtils
// 0x0000 (0x0028 - 0x0028)
class ULocomotionUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.LocomotionUtils");
		return ptr;
	}


	bool STATIC_VignetteDuringMotion();
	bool STATIC_UseThumbstickAngleForTeleportFacing();
	bool STATIC_ThrottleShouldSlideToStoryPoints();
	bool STATIC_SwapThrottleHands();
	bool STATIC_SnapTurnsResetSlideCardinals();
	bool STATIC_SnapTurnsInstant();
	bool STATIC_SlideUsesLockedCardinalDirections();
	bool STATIC_IsUsingThrottleLocomotion();
	bool STATIC_IsUsingTeleportLocomotion();
	bool STATIC_IsUsingSlideLocomotion();
	bool STATIC_IsUsingOriginalWKNDLocomotion();
	bool STATIC_IsUsingOculusLocomotion();
	bool STATIC_IsUsingNewWKNDLocomotion();
	int STATIC_GetTeleportArcCast();
	int STATIC_GetMandatedSnapRotateType();
	int STATIC_GetLocomotionSpeed();
	EComfortLevelEnum STATIC_GetLocomotionComfortLevel();
	EWKNDLocomotionControlScheme STATIC_GetCurrentControlScheme();
	bool STATIC_FadeOutDuringAcceleration();
	bool STATIC_CanBridgeSeparateNavmeshes();
	bool STATIC_AutoCompleteClimbs();
	bool STATIC_AllowTeleportToBypassClimbs();
	bool STATIC_AllowCameraShakes();
};


// Class WKND.LookAtControllerComponent
// 0x00D0 (0x01C0 - 0x00F0)
class ULookAtControllerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class USkeletalMeshComponent*                      m_Mesh;                                                   // 0x00F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	float                                              LookAtCurrentWeight;                                      // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LookAtPitch;                                              // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LookAtYaw;                                                // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LookFadeInTime;                                           // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookFadeOutTime;                                          // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtAngleLerpSpeed;                                     // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LookAtYawLerpSpeedCurve;                                  // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LookAtPitchLerpSpeedCurve;                                // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLookAtTarget                               LookAtTarget;                                             // 0x0128(0x0028) (Edit, BlueprintVisible)
	bool                                               ExternallySetLookAtBaseTransform;                         // 0x0150(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	struct FName                                       LookAtBaseBone;                                           // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LookAtBaseTransform;                                      // 0x0160(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<EAxis>                                 LookAtBaseTransformForward;                               // 0x0190(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0191(0x0003) MISSED OFFSET
	struct FVector                                     LookAtBaseOffset;                                         // 0x0194(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x01A0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.LookAtControllerComponent");
		return ptr;
	}


	bool LookAtEnabled();
	void EnableLookAtCustom(float FadeInTime, TEnumAsByte<ELookAtFadeType> fadeType);
	void EnableLookAt();
	void DisableLookAtCustom(float FadeOutTime, TEnumAsByte<ELookAtFadeType> fadeType);
	void DisableLookAt();
};


// Class WKND.MainMenuActor
// 0x00E0 (0x0500 - 0x0420)
class AMainMenuActor : public ASubMenuActor
{
public:
	struct FName                                       MainLevelName;                                            // 0x0420(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeTimeOnLevelLoad;                                      // 0x0428(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	struct FText                                       QuitGameWarningText;                                      // 0x0430(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class USceneComponent*                             RootSceneComponent;                                       // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      StartButton;                                              // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      ChapterSelectButton;                                      // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      OptionsButton;                                            // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      ExtrasButton;                                             // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      QuitGameMenuButton;                                       // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuBaseComponent*                          ConfirmationPromptBase;                                   // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      ConfirmationButton;                                       // 0x0480(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      CancelButton;                                             // 0x0488(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0490(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MainMenuActor");
		return ptr;
	}


	void QuitGame();
	void OnStartGameButtonPressed(const struct FPressedButtonComponent& PressedStartButton);
	void OnQuitGamePressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnConfirmationPromptCalled(const struct FText& WarningText);
	void OnConfirmationPressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnCancelPressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnButtonPressed(const struct FPressedButtonComponent& ButtonComponent);
	void CreateMenuButtonLink(class ASubMenuActor* MenuActor, class UMenuButtonComponent* ButtonComponent);
};


// Class WKND.MaterialProfiler
// 0x00B8 (0x03D0 - 0x0318)
class AMaterialProfiler : public AActor
{
public:
	TArray<class UMaterialInterface*>                  ProfileMaterials;                                         // 0x0318(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bAutoCycle;                                               // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	float                                              CycleTime;                                                // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintToScreen;                                           // 0x0331(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintToLog;                                              // 0x0332(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowRawTimes;                                            // 0x0333(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGPUBreakdown;                                        // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	int                                                NumOfMeshesInBreakdown;                                   // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowChronologicalOrder;                                  // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowTextureInfo;                                         // 0x033D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bProfiling;                                               // 0x033E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x033F(0x0001) MISSED OFFSET
	class UMaterialInterface*                          CurrentProfileMaterial;                                   // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ProfileMaterialIndex;                                     // 0x0348(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	TMap<class UMeshComponent*, struct FMeshMaterialData> OriginalMaterialRecords;                                  // 0x0350(0x0050) (ZeroConstructor)
	bool                                               bPaused;                                                  // 0x03A0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bProfilingExisting;                                       // 0x03A1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x03A2(0x0002) MISSED OFFSET
	float                                              CurrentMaterialProfilingTime;                             // 0x03A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RawMaterialGPUTime;                                       // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaterialGPUTime;                                          // 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RawFrameGPUTime;                                          // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FrameGPUTime;                                             // 0x03B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalMaterialGPUTime;                                     // 0x03B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalFrameGPUTime;                                        // 0x03BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalFrameCount;                                          // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OriginalGShowMaterialDrawEventTypes;                      // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OriginalGNTDetailedProfileGPU;                            // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MaterialProfiler");
		return ptr;
	}


	void StopProfiling();
	void StartProfiling();
	void Resume();
	bool ProfileMaterial(class UMaterialInterface* ProfileMaterial);
	void PreviousMaterial();
	void Pause();
	void NextMaterial();
	bool ApplyProfileMaterial(bool bUseNext, int IndexOverride);
	bool ApplyNewProfileMaterial(class UMaterialInterface* ProfileMaterial);
};


// Class WKND.MathUtils
// 0x0000 (0x0028 - 0x0028)
class UMathUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MathUtils");
		return ptr;
	}


	struct FVector STATIC_WithoutZ(const struct FVector& In);
	struct FVector STATIC_WithoutY(const struct FVector& In);
	struct FVector STATIC_WithoutX(const struct FVector& In);
	bool STATIC_TryGetRadiusOfCircleFormedByIntersectionOfHorizontalPlaneWithSphere(const struct FVector& sphereCenter, float SphereRadius, float planeZ, float* outCircleRadius);
	bool STATIC_TryGetPointsWhereTwoCirclesIntersect(const struct FVector2D& center1, float radius1, const struct FVector2D& center2, float radius2, struct FVector2D* outIntersection1, struct FVector2D* outIntersection2);
	bool STATIC_TryGetHorizontalCircleSphereIntersection(const struct FVector& sphereCenter, float SphereRadius, const struct FVector& circleCenter, float circleRadius, struct FVector* outIntersection1, struct FVector* outIntersection2);
	struct FTransform STATIC_TransformQuaternionSlerp(const struct FTransform& q1, const struct FTransform& q2, float Alpha, const struct FTransform& Out, const struct FVector& EulerDisp);
	float STATIC_SignedHorizontalAngleBetweenVectors(const struct FVector& vector1, const struct FVector& vector2);
	struct FVector STATIC_ProjectPointToLine(const struct FVector& ToProject, const struct FVector& Pt1, const struct FVector& Pt2);
	float STATIC_HorizontalAngleBetweenVectors(const struct FVector& vector1, const struct FVector& vector2);
	struct FRotator STATIC_GetRotationOfVector(const struct FVector& Vector);
	float STATIC_GetAngleBetweenVectorsAroundAxisInRadians(const struct FVector& FirstVector, const struct FVector& SecondVector, const struct FVector& Axis);
	void STATIC_FitCircleToPoints(TArray<struct FVector2D> Points, float* outRadius, struct FVector2D* outCenter);
	struct FTransform STATIC_ConvertTransformToRelative_Fixed(const struct FTransform& Transform, const struct FTransform& ParentTransform);
	struct FVector STATIC_CalculateBallisticTrajectoryToHitTarget(float InitialSpeed, float Gravity, const struct FVector& Target, bool pickLowestAngle, float* outTimeToTarget, bool* canHitTarget);
	float STATIC_AngleBetweenVectors(const struct FVector& vector1, const struct FVector& vector2);
};


// Class WKND.MBAnimList_Locomotion
// 0x00C0 (0x00E8 - 0x0028)
class UMBAnimList_Locomotion : public UNTAnimationList
{
public:
	struct FNTAnimationSequenceStruct                  IdleToMove;                                               // 0x0028(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FNTAnimationSequenceStruct                  IdleToMoveLeft;                                           // 0x0048(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FNTAnimationSequenceStruct                  IdleToMoveRight;                                          // 0x0068(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FNTAnimationSequenceStruct                  MoveToIdle;                                               // 0x0088(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FNTAnimationSequenceStruct                  QuickturnLeft;                                            // 0x00A8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FNTAnimationSequenceStruct                  QuickturnRight;                                           // 0x00C8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MBAnimList_Locomotion");
		return ptr;
	}

};


// Class WKND.MenuElement
// 0x00A8 (0x03C0 - 0x0318)
class AMenuElement : public AActor
{
public:
	bool                                               bDisabled;                                                // 0x0318(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0319(0x0007) MISSED OFFSET
	class UFrontendInteractionComponent*               InteractionComponent;                                     // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnElementValueChanged;                                    // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TWeakObjectPtr<class AMenuLabel>                   TooltipMenuElement;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       ToolTipText;                                              // 0x0340(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      TextLabelClass;                                           // 0x0358(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LabelSpawnTransform;                                      // 0x0360(0x0030) (Edit, IsPlainOldData)
	struct FText                                       LabelText;                                                // 0x0390(0x0018) (Edit)
	TWeakObjectPtr<class AMenuLabel>                   SpawnedTextLabel;                                         // 0x03A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x03B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuElement");
		return ptr;
	}


	void SpawnTextLabel();
	void ShowElement();
	void SetTooltipText();
	void SetLabelText(const struct FText& text);
	void ResetTooltipText();
	void ReceiveElementEnabled();
	void ReceiveElementDisabled();
	void OnTriggerReleased();
	void OnTriggerPressed(class UFrontendInteractionController* Controller);
	void OnHoverEnd(bool bInteractionKeyPressed);
	void OnHoverBegin(class UFrontendInteractionController* Controller);
	bool IsElementEnabled();
	void HideElement();
	void EnableElement();
	void DisableElement();
};


// Class WKND.MenuBaseButton
// 0x0040 (0x0400 - 0x03C0)
class AMenuBaseButton : public AMenuElement
{
public:
	class USceneComponent*                             RootSceneComponent;                                       // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BaseMesh;                                                 // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ButtonMesh;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          IdleMaterial;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PressedMaterial;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          HoveredMaterial;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DisabledMaterial;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuBaseButton");
		return ptr;
	}


	void ToggleButtonState();
	void SetStateBasedMaterial();
	void SetButtonState(EButtonState newButtonState);
	void ReceiveButtonPress(EButtonState newButtonState);
	void PressButton();
	EButtonState GetButtonState();
};


// Class WKND.MenuButtonComponent
// 0x0060 (0x03D0 - 0x0370)
class UMenuButtonComponent : public UMenuBaseComponent
{
public:
	struct FName                                       ActivatedContentTag;                                      // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       InactiveContentTag;                                       // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMenuButtonPress;                                        // 0x0380(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMenuButtonRelease;                                      // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x03A0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuButtonComponent");
		return ptr;
	}


	void ReleaseButton(bool bPlayAudio, bool bIssuedFromConsole);
	void PressButton(bool bPlayAudio, bool bIssuedFromConsole);
	EMenuButtonState GetButtonState();
};


// Class WKND.MenuContainer
// 0x0020 (0x03E0 - 0x03C0)
class AMenuContainer : public AMenuElement
{
public:
	class USceneComponent*                             RootSceneComponent;                                       // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	TArray<struct FContainerSlot>                      ContainerSlots;                                           // 0x03C8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuContainer");
		return ptr;
	}


	void ResetAttachedElements();
	void FetchAttachedElements();
};


// Class WKND.MenuContainerSlot
// 0x0010 (0x02A0 - 0x0290)
class UMenuContainerSlot : public USceneComponent
{
public:
	class UBillboardComponent*                         EditorOnlyBillboard;                                      // 0x0290(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuContainerSlot");
		return ptr;
	}

};


// Class WKND.MenuLabel
// 0x0030 (0x03F0 - 0x03C0)
class AMenuLabel : public AMenuElement
{
public:
	struct FText                                       text;                                                     // 0x03C0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class USceneComponent*                             RootSceneComponent;                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRenderComponent;                                      // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuLabel");
		return ptr;
	}


	void SetText(const struct FText& newText);
};


// Class WKND.MenuMovingButton
// 0x0090 (0x0490 - 0x0400)
class AMenuMovingButton : public AMenuBaseButton
{
public:
	bool                                               bAutoReset;                                               // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0401(0x0003) MISSED OFFSET
	float                                              AutoResetDelay;                                           // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LerpMoveSpeed;                                            // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LerpRotateSpeed;                                          // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLerpMoveTarget;                                   // 0x0410(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    RelativeLerpRotateTarget;                                 // 0x041C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class USceneComponent*                             RotationPivotPoint;                                       // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0430(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuMovingButton");
		return ptr;
	}


	void StartButtonMovement();
	void ButtonLerpRotation(float DeltaSeconds, const struct FRotator& TargetRotation);
	void ButtonLerpMovement(float DeltaSeconds, const struct FVector& TargetPosition);
};


// Class WKND.MenuRadioButtonComponent
// 0x0010 (0x0380 - 0x0370)
class UMenuRadioButtonComponent : public UMenuBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0370(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuRadioButtonComponent");
		return ptr;
	}


	void SwitchToNextButton();
	void SetActiveRadioButton(class UMenuButtonComponent* ButtonComponent);
	void OnRadioButtonPressed(const struct FPressedButtonComponent& ButtonComponent);
	int GetActiveRadioButtonIndex();
	class UMenuButtonComponent* GetActiveRadioButton();
};


// Class WKND.MenuRadioButtons
// 0x0040 (0x0400 - 0x03C0)
class AMenuRadioButtons : public AMenuElement
{
public:
	bool                                               bExclusiveSelect;                                         // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	int                                                NumberOfButtons;                                          // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpawnOffset;                                              // 0x03C8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	class UClass*                                      RadioButtonClass;                                         // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class AMenuTickBox*>                        RadioButtons;                                             // 0x03E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst)
	unsigned char                                      UnknownData02[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuRadioButtons");
		return ptr;
	}


	void RecreateRadioButtons();
	void OnRadioButtonValueChanged(class AMenuElement* TickBoxPtr);
};


// Class WKND.MenuScrollContainerComponent
// 0x0050 (0x03C0 - 0x0370)
class UMenuScrollContainerComponent : public UMenuBaseComponent
{
public:
	class UCurveFloat*                                 AutoScrollCurve;                                          // 0x0370(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoScrollUp;                                            // 0x0378(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoScrollDown;                                          // 0x0379(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x46];                                      // 0x037A(0x0046) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuScrollContainerComponent");
		return ptr;
	}


	void StopAutoScroll();
	void StartAutoScrollUp();
	void StartAutoScrollDown();
	bool SetSelectedElement(class UMenuBaseComponent* MenuElement, bool bIssuedFromConsole);
	void SetCurrentlySelectedIndex(int NewIndex);
	int GetLastSelectedIndex();
	int GetIndexForElement(class UMenuBaseComponent* MenuElement);
	class UMenuBaseComponent* GetElementByIndex(int Index);
	class UMenuBaseComponent* GetCurrentSelectedElement();
	int GetCurrentlySelectedIndex();
	bool ChangeSelectionTwistInput(float Value);
	bool ChangeSelectionByIndex(int Index, bool bIssuedFromConsole);
};


// Class WKND.MenuSplineSlider
// 0x0080 (0x0440 - 0x03C0)
class AMenuSplineSlider : public AMenuElement
{
public:
	int                                                MinSliderValue;                                           // 0x03C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxSliderValue;                                           // 0x03C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SliderStepSize;                                           // 0x03C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SplineOffsetPerStep;                                      // 0x03CC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	class UCurveFloat*                                 SliderFloatCurve;                                         // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RootSceneComponent;                                       // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SliderSceneComponent;                                     // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SplineSceneComponent;                                     // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USplineComponent*                            SliderSpline;                                             // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SliderMesh;                                               // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          IdleMaterial;                                             // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          InteractMaterial;                                         // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          HoveredMaterial;                                          // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DisabledMaterial;                                         // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0428(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuSplineSlider");
		return ptr;
	}


	void SetStateBasedMaterial();
	int GetCurrentSplineIndex();
	int GetCurrentSliderValue();
};


// Class WKND.MenuTab
// 0x0020 (0x03E0 - 0x03C0)
class AMenuTab : public AMenuElement
{
public:
	TArray<struct FTabSlot>                            ContentArray;                                             // 0x03C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuTab");
		return ptr;
	}


	void OnTabButtonClick(class AMenuElement* element);
	void DetachSlotElements();
	void AttachSlotElements();
};


// Class WKND.MenuTabButtonComponent
// 0x0000 (0x03D0 - 0x03D0)
class UMenuTabButtonComponent : public UMenuButtonComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuTabButtonComponent");
		return ptr;
	}

};


// Class WKND.MenuTabComponent
// 0x0020 (0x0390 - 0x0370)
class UMenuTabComponent : public UMenuBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0370(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuTabComponent");
		return ptr;
	}


	void SetNextTabByIndex(int Index);
	void SetActiveTab(class UMenuButtonComponent* TabButton);
	void OnTabButtonPressed(const struct FPressedButtonComponent& ButtonComponent);
	bool HasActiveTab();
	int GetCurrentTabIndex();
	class UMenuButtonComponent* GetActiveTab();
	void CloseActiveTab();
};


// Class WKND.MenuTickBox
// 0x0040 (0x0400 - 0x03C0)
class AMenuTickBox : public AMenuElement
{
public:
	class USceneComponent*                             RootSceneComponent;                                       // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TickBoxFrame;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TickBox;                                                  // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          IdleMaterial;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          TickedMaterial;                                           // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          HoveredMaterial;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DisabledMaterial;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MenuTickBox");
		return ptr;
	}


	void ToggleTickState(bool bBroadcastChange);
	void SetTickState(ETickState NewState, bool bBroadcastChange);
	void SetStateBasedMaterial();
	void ReceiveOnValueChangedEvent(ETickState newTickState);
	ETickState GetTickState();
};


// Class WKND.MotionFieldCharacter
// 0x0030 (0x0750 - 0x0720)
class AMotionFieldCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0720(0x0018) MISSED OFFSET
	class ARPOCPickup_Lightsaber*                      SaberBase;                                                // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0740(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MotionFieldCharacter");
		return ptr;
	}


	void OnThrowItem(class ARPOCForceThrowLocation* ThrowLocation, class ASliceableActor* Item);
	void OnLocationAndYawReached(const struct FVector& DesiredLocation, bool bMovingToFaceActor, class AActor* TargetFaceActor);
};


// Class WKND.MotionFieldMovementComponent
// 0x0010 (0x07E0 - 0x07D0)
class UMotionFieldMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x07D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MotionFieldMovementComponent");
		return ptr;
	}


	float GetYawRate_Degrees();
	float GetYaw_Degrees();
};


// Class WKND.MovementAudioFoleyComponent
// 0x0000 (0x00F0 - 0x00F0)
class UMovementAudioFoleyComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.MovementAudioFoleyComponent");
		return ptr;
	}

};


// Class WKND.NTCharacterHapticComponent
// 0x0020 (0x02B0 - 0x0290)
class UNTCharacterHapticComponent : public USceneComponent
{
public:
	TArray<struct FNTCharacterHapticSet>               SurfaceHapticSets;                                        // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x02A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.NTCharacterHapticComponent");
		return ptr;
	}


	struct FNTCharacterHapticSet FindHapticSet(TEnumAsByte<EPhysicalSurface> SurfaceType);
	float FindHapticDuration(TEnumAsByte<EPhysicalSurface> SurfaceType);
};


// Class WKND.NTComboDetectionComponent
// 0x0200 (0x02F0 - 0x00F0)
class UNTComboDetectionComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    ComboAttemptStarted;                                      // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ComboAttemptEnded;                                        // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ComboPoseLost;                                            // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ComboPoseFound;                                           // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ComboStrikeStarted;                                       // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ComboStrikeEnded;                                         // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OutputDebugInfo;                                          // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0160(0x0008) MISSED OFFSET
	TArray<class UWKNDPlayerStrikeData*>               PotentialCombos;                                          // 0x0168(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	float                                              MinimumGestureProbabilityThreshold;                       // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ComboStartTime;                                           // 0x017C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 PoseHeldCurve;                                            // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CurrentGestureName_PoseDetector;                          // 0x0188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0190(0x0008) MISSED OFFSET
	struct FName                                       TargetStrikeName;                                         // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FNTStrike                                   CurrentStrikeInfo;                                        // 0x01A0(0x0080) (BlueprintVisible)
	float                                              PoseHoldTimeReqd;                                         // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class URPOCGestureDetector>         PoseDetector;                                             // 0x0224(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class ARPOCPickup_Lightsaber>       HeldLightsaber;                                           // 0x022C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0234(0x0004) MISSED OFFSET
	class UWKNDPlayerComboData*                        CurrentPlayerCombo;                                       // 0x0238(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentPlayerStrikeIndex;                                 // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x55];                                      // 0x0244(0x0055) MISSED OFFSET
	bool                                               bTutorialMode;                                            // 0x0299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x029A(0x0002) MISSED OFFSET
	float                                              PoseRetentionTime;                                        // 0x029C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrikeRetentionTime;                                      // 0x02A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	TArray<class UWKNDPlayerComboData*>                PlayerCombos;                                             // 0x02A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x38];                                      // 0x02B8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.NTComboDetectionComponent");
		return ptr;
	}


	void SimpleComboDetection(float DeltaTime, const struct FVector& WorldPrev, const struct FVector& WorldNow);
	void RegisterGestureComponent(class URPOCGestureDetector* NewPoseDetector);
	void MakeCurrentStrike(const struct FVector& GuardPrev, const struct FVector& GuardNow, const struct FVector& TipPrev, const struct FVector& TipNow, float DeltaTime, struct FNTStrike* Result);
	float GetPoseHeldValue();
};


// Class WKND.NTHapticComponent
// 0x00C0 (0x0350 - 0x0290)
class UNTHapticComponent : public USceneComponent
{
public:
	struct FNTHapticData                               PrimaryHapticData;                                        // 0x0290(0x0018) (Edit, BlueprintVisible)
	struct FNTHapticData                               SecondaryHapticData;                                      // 0x02A8(0x0018) (Edit, BlueprintVisible)
	bool                                               UseAxisHaptics;                                           // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	TArray<struct FNTAxisHaptics>                      AxisHaptics;                                              // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UHapticFeedbackEffect_Base*                  StretchCurve;                                             // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             StretchComponent;                                         // 0x02E0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               UpdateHaptics;                                            // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseHapticsManager;                                        // 0x02E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HapticActive;                                             // 0x02EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugHaptics;                                             // 0x02EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5C];                                      // 0x02EC(0x005C) MISSED OFFSET
	class UNTHapticManagerComponent*                   HapticManager;                                            // 0x0348(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.NTHapticComponent");
		return ptr;
	}


	void TriggerHaptics();
	void StopHaptics();
	void SetPrimaryHapticHands(ENTHapticHands primaryHands);
	void SetHapticHands(ENTHapticHands primaryHands, ENTHapticHands secondaryHands, class USceneComponent* Stretch, bool ActivateHaptic);
	void PushHapticValues(const struct FNTHapticValueByHand& hapticValues);
	void PlayHapticEffect(const struct FNTHapticData& HapticData);
};


// Class WKND.NTHapticManagerComponent
// 0x0070 (0x0300 - 0x0290)
class UNTHapticManagerComponent : public USceneComponent
{
public:
	bool                                               HapticsOn;                                                // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ENTHapticBlendType                                 SequencerType;                                            // 0x0291(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreTimeDilation;                                       // 0x0292(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugOutput;                                              // 0x0293(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	TArray<class UNTHapticComponent*>                  HapticComponents;                                         // 0x0298(0x0010) (ExportObject, ZeroConstructor)
	TArray<struct FNTHapticSequenceEvent>              ActiveHapticEvents;                                       // 0x02A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x48];                                      // 0x02B8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.NTHapticManagerComponent");
		return ptr;
	}


	void RegisterHapticComponent(class UNTHapticComponent* hapticComponent);
	void PushHapticValues(const struct FNTHapticValueByHand& hapticValues);
	void HapticEffectUpdateScale(int ID, float HapticScale);
	int HapticEffectRequest(ENTHapticHands hands, const struct FNTHapticData& haptic);
	void HapticEffectCancel(int ID);
	void ClearAllHaptics();
};


// Class WKND.NTNinjaFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UNTNinjaFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.NTNinjaFunctionLibrary");
		return ptr;
	}


	void STATIC_StopVRTransition(class APawn* Pawn, EVRCameraTransitionType Type);
	void STATIC_StartVRTransition(class APawn* Pawn, EVRCameraTransitionType Type);
	void STATIC_ShowHiddenActors(TArray<class AActor*> HiddenActors);
	bool STATIC_LineCheckWithTriangle(const struct FVector& v1, const struct FVector& v2, const struct FVector& V3, const struct FVector& Start, const struct FVector& End, const struct FVector& Direction, struct FHitResult* Result);
	bool STATIC_IsRunningOnSantaCruz();
	void STATIC_HideActorsInLevel(class ALevelScriptActor* LevelScriptActor, TArray<class AActor*>* HiddenActors);
	bool STATIC_GetPlaneIntersection(class USplineComponent* useSpline, struct FPlane* prePlane, struct FPlane* postPlane, struct FVector* Point, struct FVector* CutNormal);
	struct FRotator STATIC_ConvertQuatToRotator(const struct FQuat& Q);
};


// Class WKND.NTTokenComponent
// 0x0018 (0x0108 - 0x00F0)
class UNTTokenComponent : public UActorComponent
{
public:
	class UNTTokenManager*                             TokenManager;                                             // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               BlueprintTokenListeners;                                  // 0x00F8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.NTTokenComponent");
		return ptr;
	}


	void UndenyTokens(TArray<struct FName> TokenNames);
	void UndenyToken(const struct FName& TokenName);
	void SetIsMovingToken(bool bIsMoving);
	void ResetTokens();
	void RemoveTokenDeactivatedDelegate(const struct FName& TokenName, const struct FScriptDelegate& Delegate);
	void RemoveTokenActivatedDelegate(const struct FName& TokenName, const struct FScriptDelegate& Delegate);
	void OnTokenDeleted(const struct FName& TokenName);
	void OnTokenCreated(const struct FName& TokenName);
	bool HasToken(const struct FName& TokenName);
	bool HasAnyToken(TArray<struct FName> TokenNames);
	bool HasAllTokens(TArray<struct FName> TokenNames);
	float GetTokenOwnedTimeUndilated(const struct FName& TokenName);
	float GetTokenOwnedTime(const struct FName& TokenName);
	class UNTTokenManager* GetTokenManager();
	float GetTokenHoldTimeUndilated(const struct FName& TokenName);
	float GetTokenHoldTime(const struct FName& TokenName);
	void GetActiveTokens(TArray<struct FName>* OutTokenNames);
	void DenyTokens(TArray<struct FName> TokenNames);
	void DenyToken(const struct FName& TokenName);
	void DeleteTokens(TArray<struct FName> TokenNames, const struct FName& TokenOwner, bool RemoveAll);
	void DeleteToken(const struct FName& TokenName, const struct FName& TokenOwner, bool RemoveAll);
	bool CreateUniqueToken(const struct FName& TokenName, const struct FName& TokenOwner);
	void CreateTokensForTime(TArray<struct FName> TokenNames, const struct FName& TokenOwner, float TimeLimit);
	void CreateTokens(TArray<struct FName> TokenNames, const struct FName& TokenOwner);
	void CreateTokenForTime(const struct FName& TokenName, const struct FName& TokenOwner, float TimeLimit);
	void CreateToken(const struct FName& TokenName, const struct FName& TokenOwner);
	void AddTokenDeactivatedDelegate(const struct FName& TokenName, const struct FScriptDelegate& Delegate);
	void AddTokenActivatedDelegate(const struct FName& TokenName, const struct FScriptDelegate& Delegate);
};


// Class WKND.NTTransformFilterComponent
// 0x00B0 (0x0340 - 0x0290)
class UNTTransformFilterComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0290(0x0058) MISSED OFFSET
	bool                                               bShowDebugPrints;                                         // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFilterActive;                                            // 0x02E9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02EA(0x0006) MISSED OFFSET
	struct FTransform                                  LastReportedParentTransform;                              // 0x02F0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bOverrideRotationFilterSettings;                          // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideLocationFilterSettings;                          // 0x0321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0322(0x0002) MISSED OFFSET
	struct FNTAdaptiveLowPassFilterParams              RotationFilterParams;                                     // 0x0324(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FNTAdaptiveLowPassFilterParams              LocationFilterParams;                                     // 0x0330(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x033C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.NTTransformFilterComponent");
		return ptr;
	}


	void MultiplyFilter_Rotation_FDXMin(float Multiplier);
	void MultiplyFilter_Rotation_FCMin(float Multiplier);
	void MultiplyFilter_Rotation_Beta(float Multiplier);
	void MultiplyFilter_Location_FDXMin(float Multiplier);
	void MultiplyFilter_Location_FCMin(float Multiplier);
	void MultiplyFilter_Location_Beta(float Multiplier);
};


// Class WKND.NTVisibilityVolume
// 0x0020 (0x0370 - 0x0350)
class ANTVisibilityVolume : public AVolume
{
public:
	bool                                               bStartsEnabled;                                           // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseCameraLocationCheck;                                   // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0352(0x0006) MISSED OFFSET
	TArray<class AActor*>                              OverrideInvisibleActors;                                  // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0368(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.NTVisibilityVolume");
		return ptr;
	}


	void Enable();
	void Disable();
};


// Class WKND.OffensiveCombatSquad
// 0x00A0 (0x0430 - 0x0390)
class AOffensiveCombatSquad : public ACombatSquad
{
public:
	TArray<struct FSquadAttackInfo>                    AvailableAttacks;                                         // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   MinMaxCooldownBetweenAttacks;                             // 0x03A0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              WeightDegradationOnMemberSelection;                       // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeightRegeneration;                                       // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumWeight;                                            // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x03B4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	class ASquadAttack*                                CurrentAttack;                                            // 0x03B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class ASquadAttack*                                EndingAttack;                                             // 0x03C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x03C8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.OffensiveCombatSquad");
		return ptr;
	}


	bool WasDraftedForAttack(const TScriptInterface<class UCombatSquadBehaviourInterface>& SquadMember);
	void OnAttackEnded(class ASquadAttack* Attack);
	void OnAttackAboutToEnd(class ASquadAttack* Attack);
	class ASquadAttack* GetOngoingAttack();
};


// Class WKND.OptionsMenuActor
// 0x01A0 (0x05C0 - 0x0420)
class AOptionsMenuActor : public ASubMenuActor
{
public:
	class USceneComponent*                             RootSceneComponent;                                       // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Back_Button;                                              // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuTabComponent*                           OptionsTabComponent;                                      // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Comfort_MenuButton;                                       // 0x0438(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        AudioVideo_MenuButton;                                    // 0x0440(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Locomotion_SettingButton;                                 // 0x0448(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Accessibility_SettingButton;                              // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        ComfortableMode_Button;                                   // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        StandardMode_Button;                                      // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuTabComponent*                           CustomComfortOpt_Tab;                                     // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuTabComponent*                           CustomComfortSettings_Tab;                                // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        CustomComfort_MenuButton;                                 // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        CustomClimb_MenuButton;                                   // 0x0480(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Vignette_ComfortButton;                                   // 0x0488(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        FadeDuringAccel_ComfortButton;                            // 0x0490(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        CameraShake_ComfortButton;                                // 0x0498(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        DamageIndicator_ComfortButton;                            // 0x04A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        SlowFallingButton;                                        // 0x04A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        SafeClimbButton;                                          // 0x04B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        SkipClimbButton;                                          // 0x04B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        SeatedAccessibilityButton;                                // 0x04C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        VisualCombatAssistAccessibilityButton;                    // 0x04C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Combat360AccessibilityButton;                             // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuTabComponent*                           LocalizationTab;                                          // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        LanguageButton;                                           // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        SubtitlesOffButton;                                       // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        SubtitlesOnButton;                                        // 0x04F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        LanguageConfirmButton;                                    // 0x04F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuTabComponent*                           AudioVideo_Tab;                                           // 0x0500(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        AudioSetting_Button;                                      // 0x0508(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        VideoSetting_Button;                                      // 0x0510(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuRadioButtonComponent*                   AudioChannel_RadioButton;                                 // 0x0518(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        MasterChannel_Button;                                     // 0x0520(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        VoiceChannel_Button;                                      // 0x0528(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        MusicChannel_Button;                                      // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        SFXChannel_Button;                                        // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bOpenSubMenu;                                             // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	class UMenuButtonComponent*                        LowQualityVideo_Button;                                   // 0x0548(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        HighQualityVideo_Button;                                  // 0x0550(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0558(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.OptionsMenuActor");
		return ptr;
	}


	void ReceiveVolumeSettingUpdated(ESoundChannel Channel, float Volume, bool bPlaySound);
	void ReceiveVisualCombatAssistSettingChanged();
	void ReceiveSubtitlesChanged(bool SubtitlesOn);
	void ReceiveSeatedSettingChanged();
	void ReceiveComfortLevelChanged();
	void ReceiveClimbSettingChanged();
	void ReceiveBackButtonPressed();
	void Receive360CombatSettingChanged();
	void OnVisualCombatAssistSettingChanged(const struct FChangedMenuComponent& MenuComponent);
	void OnTabChanged(const struct FChangedMenuComponent& ChangedComponent);
	void OnSubtitlesOnButtonPressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnSubtitlesOffButtonPressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnSeatedSettingChanged(const struct FChangedMenuComponent& MenuComponent);
	void OnMenuButtonPressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnLocomotionSettingChanged(const struct FChangedMenuComponent& MenuComponent);
	void OnLocomotionModeChanged(const struct FPressedButtonComponent& ButtonComponent);
	void OnComfortLevelValueChanged(const struct FPressedButtonComponent& ButtonComponent);
	void OnClimbSettingChanged(const struct FChangedMenuComponent& MenuComponent);
	void OnAudioSettingChanged(const struct FChangedMenuComponent& MenuComponent);
	void On360CombatSettingChanged(const struct FChangedMenuComponent& MenuComponent);
	void AttemptSaveSettings();
};


// Class WKND.PauseMainMenuActor
// 0x0080 (0x04A0 - 0x0420)
class APauseMainMenuActor : public ASubMenuActor
{
public:
	struct FText                                       MainMenuConfirmText;                                      // 0x0420(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FText                                       QuitGameConfirmText;                                      // 0x0438(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class USceneComponent*                             RootComp;                                                 // 0x0450(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      BackToMainMenuButton;                                     // 0x0458(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      ResumeGameMenuButton;                                     // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      QuitGameMenuButton;                                       // 0x0468(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMenuBaseComponent*                          ConfirmationPromptBase;                                   // 0x0470(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      ConfirmationButton;                                       // 0x0478(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      CancelButton;                                             // 0x0480(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0488(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.PauseMainMenuActor");
		return ptr;
	}


	void ShowConfirmationPrompt(struct FText* WarningText);
	void SetPauseManager(class AWKNDPauseManager* PauseManager);
	void ReceiveConfirmationPromptClosed();
	void ReceiveConfirmationPromptCalled(const struct FText& WarningText);
	void OnResumeGamePressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnQuitGamePressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnConfirmationPressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnCancelPressed(const struct FPressedButtonComponent& ButtonComponent);
	void OnBackToMainMenuPressed(const struct FPressedButtonComponent& ButtonComponent);
	void CloseConfirmationPrompt();
};


// Class WKND.PauseMenuActor
// 0x0088 (0x0410 - 0x0388)
class APauseMenuActor : public ABaseMenuActor
{
public:
	float                                              MenuAdjust_MenuDistance;                                  // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class UCameraComponent*                            PlayerCamera;                                             // 0x0390(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              MaxCameraDistanceOffset;                                  // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HeightOffset;                                             // 0x039C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DoubleMenuAdjustmentThreshold;                            // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET
	TArray<float>                                      SpawnAnglesAroundPlayer;                                  // 0x03A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class USceneComponent*                             RootSceneComponent;                                       // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UPoseableMeshComponent*                      ConsoleMesh;                                              // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        PauseOptionsChildActor;                                   // 0x03C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        MainPauseMenuChildActorComponent;                         // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               SpawnCollisionBoxCollidier;                               // 0x03D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       ButtonMaterialParameterName;                              // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ButtonConfigMaterialIndex;                                // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicButtonMaterialInstance;                            // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x03F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.PauseMenuActor");
		return ptr;
	}


	void SetButtonConfigMaterialParameter(int ConfigID);
	void RequestPlacePauseMenuAtPlayer();
	void OnGameUnPaused(bool bShowPauseMenu);
	void OnGamePaused(bool bShowPauseMenu);
};


// Class WKND.PhysicsButtonComponent
// 0x0060 (0x0150 - 0x00F0)
class UPhysicsButtonComponent : public UActorComponent
{
public:
	TArray<struct FWKNDPhysicsInteractionData>         Interactions;                                             // 0x00F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ButtonPressedEvent;                                       // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ButtonStartsMovingEvent;                                  // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ButtonStopsMovingEvent;                                   // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ButtonContactStartsEvent;                                 // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ButtonContactEndsEvent;                                   // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.PhysicsButtonComponent");
		return ptr;
	}


	void SetInteractionEnabledForButtonName(const struct FName& Name, bool bEnabled);
	void SetInteractionEnabledForButtonIndex(int Index, bool bEnabled);
	float GetVelocityForButtonByName(const struct FName& Name);
	float GetVelocityForButtonByIndex(int Index);
	struct FTransform GetDesiredButtonTransformByName(const struct FName& Name);
	struct FTransform GetDesiredButtonTransformByIndex(int Index);
};


// Class WKND.PhysicsInteractionsComponent
// 0x0080 (0x0170 - 0x00F0)
class UPhysicsInteractionsComponent : public UActorComponent
{
public:
	TArray<class UPhysicsInteraction*>                 Interactions;                                             // 0x00F0(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	struct FScriptMulticastDelegate                    PressedEvent;                                             // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReleasedEvent;                                            // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StartsMovingEvent;                                        // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StopsMovingEvent;                                         // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    FullSpringBackEvent;                                      // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ContactStartsEvent;                                       // 0x0150(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ContactEndsEvent;                                         // 0x0160(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.PhysicsInteractionsComponent");
		return ptr;
	}


	void UnlockAllInteractions();
	void LockAllInteractions(float InLockTime, float InLockSpeedOverride);
	class UPhysicsInteraction* GetInteractionFromName(const struct FName& Name);
	class UPhysicsInteraction* GetInteractionFromIndex(int Index);
	int GetIndexForInteractionName(const struct FName& Name);
	void EnableAllInteractions();
	void DisableAllInteractions();
};


// Class WKND.PlayerClimbComponent
// 0x0088 (0x0178 - 0x00F0)
class UPlayerClimbComponent : public UActorComponent
{
public:
	class UHandClimbComponent*                         HandClimbLeft;                                            // 0x00F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHandClimbComponent*                         HandClimbRight;                                           // 0x00F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UHandClimbComponent*                         PrimaryClimb;                                             // 0x0100(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ActiveClimb;                                              // 0x0108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              Distance;                                                 // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InterpSpeed;                                              // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TransitionSpeed;                                          // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0118(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.PlayerClimbComponent");
		return ptr;
	}


	bool IsClimbing();
	class AClimbObject* GetPrimaryClimbObject();
	float GetClimbDistanceThisFrame();
};


// Class WKND.VelocityTrackerComponent
// 0x0090 (0x0180 - 0x00F0)
class UVelocityTrackerComponent : public UActorComponent
{
public:
	TMap<struct FName, struct FTrackedBoneData>        TrackedBones;                                             // 0x00F0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     BonePrefix;                                               // 0x0140(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              VelocityThreshold;                                        // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    TrackedBoneStartedMovingEvent;                            // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TrackedBoneStoppedMovingEvent;                            // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0178(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.VelocityTrackerComponent");
		return ptr;
	}


	void Initialize(class USceneComponent* InTrackedComponent);
	struct FTransform GetWorldTransformForBone(const struct FName& BoneName);
	struct FVector GetWorldLocationForBone(const struct FName& BoneName);
	class USceneComponent* GetTrackedComponent();
	float GetRelativeVelocityForBone(const struct FName& BoneName);
	struct FName GetPrefixedBoneName(const struct FName& Name);
};


// Class WKND.PlayerHandAudioComponentBase
// 0x0008 (0x0188 - 0x0180)
class UPlayerHandAudioComponentBase : public UVelocityTrackerComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0180(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.PlayerHandAudioComponentBase");
		return ptr;
	}


	float GetTrigger();
	float GetGrip();
};


// Class WKND.PlayerLocomotion
// 0x0018 (0x0108 - 0x00F0)
class UPlayerLocomotion : public UActorComponent
{
public:
	bool                                               IsTeleporting;                                            // 0x00F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFading;                                                 // 0x00F1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	float                                              TeleportPhaseTime;                                        // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TeleportFadeColor;                                        // 0x00F8(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.PlayerLocomotion");
		return ptr;
	}


	void StartLocomote(const struct FVector& Location, const struct FRotator& Rotation, bool SnapToMandated);
	void GetSafeNavigationGround(struct FVector* lastNavigableGround, bool* groundInit);
};


// Class WKND.PlayerScreenBlackOutComponent
// 0x02C8 (0x03B8 - 0x00F0)
class UPlayerScreenBlackOutComponent : public UActorComponent
{
public:
	bool                                               bEnabled;                                                 // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCollisionBasedBlackoutEnabled;                           // 0x00F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	float                                              ManualAlpha;                                              // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCameraMangerForFade;                                  // 0x00F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUseAngleIndicatorOnSantaCruz;                            // 0x00F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldFadeAudio;                                         // 0x00FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00FB(0x0001) MISSED OFFSET
	float                                              SphereRadius;                                             // 0x00FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreGrabableObjects;                                   // 0x0100(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreActor_LeftHand;                                    // 0x0101(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreActor_RightHand;                                   // 0x0102(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                             // 0x0103(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	TArray<class UClass*>                              ClassesToIgnore;                                          // 0x0108(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              ClassesToIgnoreArrows;                                    // 0x0118(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              ForceStaticBehaviourClasses;                              // 0x0128(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              ForceDynamicBehaviourClasses;                             // 0x0138(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FName                                       ForceDynamicBehaviourTagName;                             // 0x0148(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       ForceStaticBehaviourTagName;                              // 0x0150(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FName                                       IgnoreActorTagName;                                       // 0x0158(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TArray<class AActor*>                              SpecificActorsToIgnore;                                   // 0x0160(0x0010) (ZeroConstructor, Transient)
	class UCurveFloat*                                 AlphaDistanceCurve;                                       // 0x0170(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                FadeColor;                                                // 0x0178(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AutoFadeDuration;                                         // 0x0188(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintDebugInformation;                                   // 0x018C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFireWarningOnlyFullyFaded;                               // 0x018D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bContinuouslyWarning;                                     // 0x018E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x018F(0x0001) MISSED OFFSET
	TArray<float>                                      WarningDelays;                                            // 0x0190(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      BlackoutWarningWidgetClass;                               // 0x01A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBlackoutWarningTriggered;                               // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlackoutStarted;                                        // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBlackoutEnded;                                          // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAutoFadeOutRequested;                                   // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnAutoFadeInRequested;                                    // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x1A0];                                     // 0x01F8(0x01A0) MISSED OFFSET
	class UBlackoutWidget*                             BlackoutWarningWidget;                                    // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x18];                                      // 0x03A0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.PlayerScreenBlackOutComponent");
		return ptr;
	}


	void SetTraceLength(float Length);
	void SetSphereRadius(float Radius);
	void SetOffsetToCamera(const struct FVector& OffsetToCamera);
	void SetIndicatorAngle(float degrees);
	void SetBlackOutEnabled(bool bEnable);
	void ResetOffsetToCamera();
	void ResetBlackoutAfterTeleport();
	void OnWarningWidgetFadeOutFinished();
	bool IsBlackedOut();
	void IgnoreSpecificClassArrows(bool bIgnore, class UClass* SubclassToIgnore);
	void IgnoreSpecificClass(bool bIgnore, class UClass* SubclassToIgnore);
	void IgnoreSpecificActor(bool bIgnore, class AActor* Actor);
	void IgnoreGrabbedObject(bool bIgnore, EControllerHand Hand);
	void IgnoreGrabableObjects(bool bIgnore);
	struct FVector GetOffsetToCamera();
	void GetLastValidCameraLocation(bool* bValidLocationFound, struct FVector* LastValidLocation);
	float GetIndicatorAngle();
	float GetDistanceToLastCollisionGeometry();
	float GetCurrentFadeValue();
};


// Class WKND.PMMenuButtonComponent
// 0x0060 (0x0430 - 0x03D0)
class UPMMenuButtonComponent : public UMenuButtonComponent
{
public:
	float                                              LerpMoveSpeed;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DeltaBoneMovement;                                        // 0x03D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ButtonName;                                               // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ButtonBoneName;                                           // 0x03E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x03E8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.PMMenuButtonComponent");
		return ptr;
	}


	void SetSkeletalMesh(class USkeletalMeshComponent* SkeletalMesh);
	void SetPoseableMesh(class UPoseableMeshComponent* PoseableMesh);
	void SetAssingedBoneName(const struct FName& BoneName);
	class USkeletalMeshComponent* GetSkeletalMesh();
	class UPoseableMeshComponent* GetPoseableMesh();
	struct FName GetAssignedBoneName();
};


// Class WKND.RatingsManager
// 0x01F8 (0x02E8 - 0x00F0)
class URatingsManager : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    RatingEarnedEvent;                                        // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LiveRatingChangedEvent;                                   // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UDataTable*                                  RatingDataTable;                                          // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0118(0x0060) MISSED OFFSET
	class UClass*                                      RemoteDroneBaseClass;                                     // 0x0178(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      TrainingDroidBaseClass;                                   // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      CorvaxDroidBaseClass;                                     // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CurrentWaveStartTime;                                     // 0x0190(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	struct FName                                       CurrentWaveName;                                          // 0x0198(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<ERating, float>                               TimeLimitPerMedal;                                        // 0x01A0(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0xF8];                                      // 0x01F0(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RatingsManager");
		return ptr;
	}


	void OnTelemetryEvent(const struct FTelemetryEvent& Event);
	bool HasWaveBeenRated(const struct FName& WaveName);
	bool HasRatingIncreasedForLastCompletedWave();
	void GetRatingInfoForLastCompletedWave(ERating* PreviousRating, ERating* NewRating, int* NumMedalsEarned);
	bool GetRatingForWave(const struct FName& WaveName, ERating* Rating);
	struct FRatingData GetRatingDataForWave(const struct FName& WaveName);
	int GetNumMedalsEarned();
	bool GetMedalConditionByTypeForCurrentWave(ERating MedalType, EWaveMedalConditionType ConditionType, struct FWaveMedalCondition* MedalCondition);
	bool GetMedalConditionByType(const struct FName& WaveName, ERating MedalType, EWaveMedalConditionType ConditionType, struct FWaveMedalCondition* MedalCondition);
	struct FMedalCollection GetMedalCollection();
	ERating GetFinalRatingForCurrentWave();
	int GetCurrentWaveRemainingPlayerHealth();
	int GetCurrentWaveKillCount();
	float GetCurrentWaveCompletionTime();
	int GetCurrentWaveBestRemainingPlayerHealth();
	int GetCurrentWaveBestKillCount();
	float GetCurrentWaveBestCompletionTime();
	ERating GetCurrentLiveRating();
	ERating GetBestRatingForCurrentWave();
};


// Class WKND.RewardsManager
// 0x00B8 (0x01A8 - 0x00F0)
class URewardsManager : public UActorComponent
{
public:
	class UDataTable*                                  KyberCrystalDataTable;                                    // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  LightsaberHiltDataTable;                                  // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  EnvironmentDataTable;                                     // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  TipDataTable;                                             // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  AchievementDataTable;                                     // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    RewardEarnedEvent;                                        // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AchievementEarnedEvent;                                   // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0148(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RewardsManager");
		return ptr;
	}


	TArray<struct FRewardData> ParseRewardData();
	void OnRatingEarned(const struct FName& WaveName, ERating Rating);
	bool IsRewardUnlocked(const struct FName& RewardName);
	TArray<struct FRewardData> GetRewardsEarnedOnLastRating();
	bool GetRewardData(const struct FName& RewardName, struct FRewardData* RewardData);
	TArray<struct FRewardData> GetAllRewardsOfType(ERewardType RewardType);
	bool ClearRewardsEarnedOnLastRating();
};


// Class WKND.RICEAICoordinator
// 0x0040 (0x0450 - 0x0410)
class ARICEAICoordinator : public ARICEAIController
{
public:
	bool                                               rebuildZoneData;                                          // 0x0410(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0411(0x0007) MISSED OFFSET
	TArray<struct FHotspotZone>                        allZones;                                                 // 0x0418(0x0010) (ZeroConstructor, Transient)
	bool                                               bDebugDrawZones;                                          // 0x0428(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bUpdateRequired;                                          // 0x0429(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x042A(0x0006) MISSED OFFSET
	class UAIPositioningComponent*                     PositionCoordinator;                                      // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	TArray<struct FAIPositioningAIData>                AIData;                                                   // 0x0438(0x0010) (ZeroConstructor, Transient)
	int                                                NumActiveAIs;                                             // 0x0448(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x044C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RICEAICoordinator");
		return ptr;
	}


	void ShuffleAdvance();
	void SetTarget(class APawn* NewTarget);
	void RemoveAIData(class ARICEAIController* Controller);
	void MoveRandomDroidForwardToZone(int destinationZone);
	class APawn* GetDroidAtIndex(int Index);
	bool GetAssignedLocation(class ARICEAIController* Controller, struct FVector* Position);
	class UAIPositioningComponent* GetAIPositioningComponent();
	void DebugDrawZones();
	int CountDroidsAttemptingMelee();
	void AssignLocationsByZone();
	void AgentRejectedNavigation(class ARICEAIController* Controller);
	void AddAIData(class ARICEAIController* Controller);
	int ActiveDroidCount();
};


// Class WKND.RICEPOCGameModeBase
// 0x0028 (0x03E0 - 0x03B8)
class ARICEPOCGameModeBase : public AGameModeBase
{
public:
	class UNTHapticManagerComponent*                   HapticsManager;                                           // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class URPOCKeyMapManagerComponent*                 KeyMapManager;                                            // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ARPOCSaberManager*                           SaberManager;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AICoordinatorTemplate;                                    // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ARICEAICoordinator*                          AICoordinator;                                            // 0x03D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RICEPOCGameModeBase");
		return ptr;
	}


	void ToggleHaptics();
	class ARPOCSaberManager* GetSaberManager();
	class UNTHapticManagerComponent* GetHapticsManager();
	class ARICEAICoordinator* GetCoordinator();
};


// Class WKND.RICETokens
// 0x0048 (0x0070 - 0x0028)
class URICETokens : public UObject
{
public:
	struct FName                                       MovementAnimationBusyToken;                               // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RootMotionDenialToken;                                    // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MovementInputDenialToken;                                 // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       DeathToken;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AlreadyDeadToken;                                         // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttackingToken;                                           // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReactingToken;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MovingToken;                                              // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       UntargetableToken;                                        // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RICETokens");
		return ptr;
	}

};


// Class WKND.RPOCBladeSweepComponent
// 0x0240 (0x0330 - 0x00F0)
class URPOCBladeSweepComponent : public UActorComponent
{
public:
	bool                                               bActivelySweep;                                           // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSweptCapsule;                                         // 0x00F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	int                                                SweepSubsteps;                                            // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     SweepChannel;                                             // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Blade_On;                                                 // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET
	struct FTransform                                  Blade_Start;                                              // 0x0100(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  Blade_Finish;                                             // 0x0130(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Blade_Length;                                             // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionRadius;                                          // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             HandLocator;                                              // 0x0168(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  HandTransformOffset;                                      // 0x0170(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bHitSomething;                                            // 0x01A0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	float                                              Alpha;                                                    // 0x01A4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // 0x01A8(0x0088) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bDebugDraw;                                               // 0x0230(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0231(0x0003) MISSED OFFSET
	float                                              bDebugDrawDuration;                                       // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FClashData>                          ClashDataPerBlade;                                        // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class ARPOCPickup_Lightsaber*                      Saber;                                                    // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  BladeCurrent;                                             // 0x0250(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  ControllerCurrent;                                        // 0x0280(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bClash;                                                   // 0x02B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	struct FVector                                     ClashPosition;                                            // 0x02B4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData05[0x70];                                      // 0x02C0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCBladeSweepComponent");
		return ptr;
	}


	void UpdateBlade(const struct FBladeData& BladeData, bool Primary);
	bool SweepIncrement(TEnumAsByte<ECollisionChannel> Channel, const struct FVector& TraceStart, const struct FVector& TraceEnd, const struct FQuat& traceRot, TArray<struct FHitResult>* hitResults);
	bool SweepCapsule(const struct FTransform& Start, const struct FTransform& End);
	void SweepBlade2();
	void SweepBlade();
	bool FindTriangleIntersection();
};


// Class WKND.RPOCPickupActor
// 0x01C8 (0x04E0 - 0x0318)
class ARPOCPickupActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) MISSED OFFSET
	bool                                               IsPalmable;                                               // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	class UCapsuleComponent*                           PalmedCollision;                                          // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0338(0x000C) MISSED OFFSET
	bool                                               bDebugGrabLocators;                                       // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	TArray<class URPOCGrabLocatorComponent*>           GrabLocators;                                             // 0x0348(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bIsActive;                                                // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        PickupMesh;                                               // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UWKNDGrabbableComponent*                     GrabbableComponent;                                       // 0x0368(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LogicRoot;                                                // 0x0370(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	EHoldType                                          HoldType;                                                 // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0379(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        HighlightMeshReference;                                   // 0x0380(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHighlighted;                                           // 0x0388(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	float                                              HighlightIntensity;                                       // 0x038C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MIHighlight;                                              // 0x0390(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HighlightMaterialIndex;                                   // 0x0398(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPriorityPickUp;                                        // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	float                                              PickupPriorityMultiplier;                                 // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PickupDistanceMultiplier;                                 // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisablePickup;                                            // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseGrip;                                             // 0x03A9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTwoHanded;                                               // 0x03AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHeldInBothHands;                                       // 0x03AB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EHandPosition                                      CurrentHandPosition;                                      // 0x03AC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SimulatePhysics;                                          // 0x03AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyPickupScale;                                        // 0x03AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x03AF(0x0001) MISSED OFFSET
	struct FVector                                     PickupScale;                                              // 0x03B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TimeHeld;                                                 // 0x03BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InitialRelativeTransform;                                 // 0x03C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FTransform                                  TargetRelativeTransform;                                  // 0x03F0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              RepositioningTime_Pickup;                                 // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepositioningTime;                                        // 0x0424(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RepositioningTimeToGo;                                    // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReOrientatingTimeToGo;                                    // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRepositioning;                                         // 0x0430(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class APawn*                                       LastGrabInstigator;                                       // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class URPOCCanGrabInterface>      GrabbingHand;                                             // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsHandleComponent*                     PhysicsHandle;                                            // 0x0450(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class AWKNDMotionController*                       OffHand;                                                  // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    CurrentHand;                                              // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	float                                              gravityRestoreTimer;                                      // 0x0464(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              idleTimer;                                                // 0x0468(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x10];                                      // 0x046C(0x0010) MISSED OFFSET
	float                                              VelocityFrameBufferTime;                                  // 0x047C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x50];                                      // 0x0480(0x0050) MISSED OFFSET
	class URPOCGrabLocatorComponent*                   GrabbedLocator;                                           // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData13[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCPickupActor");
		return ptr;
	}


	void UpdateHighlight(float DeltaTime);
	void SetAsPalmable(class UCapsuleComponent* CollisionWhenInHand, bool Palmable);
	bool RepositionObject(float DeltaTime);
	void Release(bool bApplyImpulseOnRelease);
	void ReceiveOnUsed();
	void ReceiveOnStopUse();
	void ReceiveOnReleased(class AActor* PreviousInstigator);
	void ReceiveOnPickedUp(class AActor* CurrentInstigator);
	void ReceiveOnNotHeldInBothHands();
	void ReceiveOnInHand();
	void ReceiveOnHeldInBothHands();
	void ReceiveOnBeginRangedGrab();
	void ReceiveOnBeenDisarmed();
	void OnNonPlayerPickUp();
	void OnNonPlayerDrop();
	void InitReposition(const struct FTransform& HandTransform, float RepositionTime);
	struct FVector GetRegressedVelocity();
	struct FVector GetRegressedAngularVelocity();
	ENTHapticHands GetPrimaryHand();
	ENTHapticHands GetOffHand();
	struct FVector GetLatestVelocityFromBuffer();
	bool GetIsIdling();
	float GetIdleTime();
	bool EnablePhysicsSimulation(bool flag);
	bool DropInternal(bool ApplyImpulseOnRelease);
	void DelayedDestroy(float Delay);
	void Deactivate();
	void CancelDelayedDestroy();
	bool ApplyImpulseOnRelease();
	void Activate();
};


// Class WKND.RPOCBuildPart
// 0x0050 (0x0530 - 0x04E0)
class ARPOCBuildPart : public ARPOCPickupActor
{
public:
	class USphereComponent*                            GrabSphere;                                               // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BuildSphere;                                              // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UClass*                                      ConstructionPartDesc;                                     // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AttachDirectly;                                           // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BuildSocketName;                                          // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepositioningTime_Build;                                  // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeRemoved;                                             // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseSaberPartHack;                                         // 0x050D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InBuildVolume;                                            // 0x050E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x050F(0x0001) MISSED OFFSET
	class UConstructionComponent*                      Target;                                                   // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BuildRange;                                               // 0x0518(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x14];                                      // 0x051C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCBuildPart");
		return ptr;
	}


	bool RemovePart();
	void ReceiveOnAddedPart(class AActor* AttachParent);
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void LockIntoSlot();
	void Deactivate();
	bool AddPart(class UPrimitiveComponent* AttachTo);
	void Activate();
};


// Class WKND.RPOCCanGrabInterface
// 0x0000 (0x0028 - 0x0028)
class URPOCCanGrabInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCanGrabInterface");
		return ptr;
	}


	void SetReverseGrip(bool bReverse);
	void SetForceAttachToController(bool bForce);
	void SetAttachedActor(class AActor* attached);
	void RequestSwap(class AActor* Actor);
	TEnumAsByte<EGrabResult> ReleaseActor();
	void OnActorGrabbed();
	bool IsHeldInBothHands();
	bool HasAttachedActor();
	TEnumAsByte<EGrabResult> GrabActor_Force(class AActor* actorToGrab);
	class APawn* GetOwningPawn();
	class AActor* GetHeldActor();
	class AActor* GetHandCollisionActor();
	float GetGrabSphereSize();
	struct FVector GetGrabSphereLocation();
	EControllerHand GetControllerHand();
	void ForceDropItem();
	void EnvIgnoreList(class AActor* Actor, bool ignore);
};


// Class WKND.RPOCGrabLocatorComponent
// 0x0080 (0x0730 - 0x06B0)
class URPOCGrabLocatorComponent : public USphereComponent
{
public:
	EGrabType                                          GrabType;                                                 // 0x06B0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGrabHand                                          Hand;                                                     // 0x06B1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOneHandedOnly;                                         // 0x06B2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDefineSecondaryLocators;                                 // 0x06B3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06B4(0x0004) MISSED OFFSET
	TArray<struct FName>                               SecondaryGrabLocatorNames;                                // 0x06B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class URPOCGrabLocatorComponent*>           SecondaryGrabs;                                           // 0x06C8(0x0010) (ExportObject, ZeroConstructor)
	bool                                               bSecondaryOnly;                                           // 0x06D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bRangedGrab;                                              // 0x06D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               UseGripAdjust;                                            // 0x06DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EGripAdjustType                                    ForwardAxis;                                              // 0x06DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGripAdjustType                                    RotationAxis;                                             // 0x06DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06DD(0x0003) MISSED OFFSET
	float                                              InterpSpeed;                                              // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06E4(0x0004) MISSED OFFSET
	struct FAnimTypeDropdown                           AnimType;                                                 // 0x06E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bUseNaturalPointingAnimation;                             // 0x06F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepRelativeRotation;                                    // 0x06F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysOrientSameWay;                                     // 0x06FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveGrab;                                              // 0x06FB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // 0x06FC(0x0004) (ZeroConstructor, IsPlainOldData)
	class UWKNDGrabbableComponent*                     GrabbableComponent;                                       // 0x0700(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAutoRegisterInteraction;                                 // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInteractionEnabled;                                      // 0x0709(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x070A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x070B(0x0001) MISSED OFFSET
	float                                              InteractionCutoffRadius;                                  // 0x070C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UXLABInteractionShape*                       InteractionShape;                                         // 0x0710(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UXLABInteractionModifier*>            InteractionModifiers;                                     // 0x0718(0x0010) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	class UWKNDInteractionData*                        InteractionData;                                          // 0x0728(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCGrabLocatorComponent");
		return ptr;
	}


	void SetEnabled(bool bEnabled);
	bool IsGrabbed();
	bool IsGrabbable(EGrabHand GrabHand);
	class UWKNDGrabbableComponent* GetGrabbable();
	bool GetEnabled();
	struct FAnimTypeDropdown GetAnimType();
};


// Class WKND.RPOCClimbLocatorComponent
// 0x0030 (0x0760 - 0x0730)
class URPOCClimbLocatorComponent : public URPOCGrabLocatorComponent
{
public:
	class USceneComponent*                             ClimbStart;                                               // 0x0730(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ClimbStop;                                                // 0x0738(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlignInteractionWithForwardVector;                       // 0x0741(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E];                                      // 0x0742(0x001E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCClimbLocatorComponent");
		return ptr;
	}


	void STATIC_ToggleDebug();
};


// Class WKND.RPOCCombatData
// 0x0008 (0x0038 - 0x0030)
class URPOCCombatData : public UDataAsset
{
public:
	struct FName                                       RestPose;                                                 // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatData");
		return ptr;
	}

};


// Class WKND.RPOCCombatData_Block
// 0x00F0 (0x0120 - 0x0030)
class URPOCCombatData_Block : public UDataAsset
{
public:
	class UDataTable*                                  Blocks;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UDataTable*>                          BlockDefinitions;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FStagedCombatBlockSelectionData>     PoseData;                                                 // 0x0048(0x0010) (ZeroConstructor, Transient)
	TArray<struct FBlockSwitchData>                    Switches;                                                 // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              BlockAnticipationTimeout;                                 // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClashSwitchTimeout;                                       // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrikeReactionTime;                                       // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoseReleaseDistance;                                      // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoseReleaseTime;                                          // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoseTransitionTime;                                       // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GuardPoseRelaxationTime;                                  // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerAngleThreshold;                                     // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerDistanceBlockingDistance;                           // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerDistanceBlockingTimeout;                            // 0x008C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BladeSamplePoint;                                         // 0x0090(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BladeClashDistance;                                       // 0x0094(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerStrikePlaneOffset;                                  // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	struct FTransform                                  SwordGuardTransform;                                      // 0x00A0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SwordTipTransform;                                        // 0x00D0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InsideGuardOrigin;                                        // 0x0100(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InsideGuardExtent;                                        // 0x010C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatData_Block");
		return ptr;
	}

};


// Class WKND.RPOCCombatData_Evade
// 0x0048 (0x0078 - 0x0030)
class URPOCCombatData_Evade : public UDataAsset
{
public:
	class UDataTable*                                  Evades;                                                   // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStagedCombatEvadeSelectionData>     EvadeData;                                                // 0x0038(0x0010) (ZeroConstructor)
	float                                              BlendTime;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FName                                       EvadePose;                                                // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrikeLength;                                             // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EvadeTimeout;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectionAwayWeight;                                      // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectionOrthogonalWeight;                                // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceWeight;                                           // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceClamp;                                            // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpponentFaceTolerance;                                    // 0x0070(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatData_Evade");
		return ptr;
	}

};


// Class WKND.RPOCCombatData_Movement
// 0x0078 (0x00A8 - 0x0030)
class URPOCCombatData_Movement : public UDataAsset
{
public:
	float                                              TimeInterval;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDefensiveSpeed;                                        // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NegligibleSpeed;                                          // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnAcceleration;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearEnoughDistance;                                       // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RetriggerMoveDistance;                                    // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerDefenceDistance;                                   // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaintainFacingDistance;                                   // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnPriorityDistance;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurnPriorityTolerance;                                    // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpponentFaceTolerance;                                    // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PosedSpeedClamp;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PosedTurnRateClamp;                                       // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	struct FName                                       MovementPose;                                             // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DefencePose;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseProceduralMovement;                                   // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector                                     DefenceGuardLocation;                                     // 0x008C(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     DefenceTipLocation;                                       // 0x0098(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatData_Movement");
		return ptr;
	}

};


// Class WKND.RPOCCombatData_Parry
// 0x00D0 (0x0100 - 0x0030)
class URPOCCombatData_Parry : public UDataAsset
{
public:
	class UDataTable*                                  Parries;                                                  // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               ParryDataLabels;                                          // 0x0038(0x0010) (ZeroConstructor)
	TArray<struct FStagedCombatParrySelectionData>     ParryData;                                                // 0x0048(0x0010) (ZeroConstructor)
	struct FName                                       ReferencePose;                                            // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlendTime;                                                // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecayTime;                                                // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumPlayRate;                                          // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumPlayRate;                                          // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ComboExitTimeout;                                         // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoseExitTimeout;                                          // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpponentDistanceTolerance;                                // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlaneDistance;                                            // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSweepDistance;                                         // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Radius;                                                   // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FailRadius;                                               // 0x0088(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
	struct FTransform                                  SwordGuardTransform;                                      // 0x0090(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  SwordTipTransform;                                        // 0x00C0(0x0030) (Edit, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatData_Parry");
		return ptr;
	}

};


// Class WKND.RPOCCombatData_Reaction
// 0x0160 (0x0190 - 0x0030)
class URPOCCombatData_Reaction : public UDataAsset
{
public:
	class UAnimMontage*                                ReactionAnimAnticlockwise;                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ReactionAnimClockwise;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FFlinchAnims                                FlinchAnims;                                              // 0x0040(0x0040) (Edit, DisableEditOnInstance)
	struct FFlinchAnims                                FlinchComboAnims;                                         // 0x0080(0x0040) (Edit, DisableEditOnInstance)
	struct FFlinchAnims                                FlinchArmouredAnims;                                      // 0x00C0(0x0040) (Edit, DisableEditOnInstance)
	struct FDamagedAnims                               TakeDamageAnims;                                          // 0x0100(0x0040) (Edit, DisableEditOnInstance)
	struct FDeathAnims                                 DeathAnims;                                               // 0x0140(0x0020) (Edit, DisableEditOnInstance)
	struct FName                                       OpenDamageWindow;                                         // 0x0160(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CloseDamageWindow;                                        // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinStrikeAngleDifference;                                 // 0x0170(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeDelayOnTakeDamage;                                    // 0x0174(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerSaberLengthMultiplier;                              // 0x0178(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StabEvasionGraceDistance;                                 // 0x017C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StabEvasionGraceTime;                                     // 0x0180(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldPushTowardsPlayer;                                 // 0x0184(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	float                                              TargetReactionDistanceToPlayer;                           // 0x0188(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x018C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatData_Reaction");
		return ptr;
	}

};


// Class WKND.RPOCCombatData_Throw
// 0x0028 (0x0058 - 0x0030)
class URPOCCombatData_Throw : public UDataAsset
{
public:
	class UAnimMontage*                                ThrowAnim;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ThrowLocationActorClass;                                  // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class ARPOCForceThrowLocation*>             ThrowLocators;                                            // 0x0040(0x0010) (ZeroConstructor, Transient)
	class ARPOCForceThrowLocation*                     LastThrowLocation;                                        // 0x0050(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatData_Throw");
		return ptr;
	}

};


// Class WKND.RPOCCombatSequence
// 0x0010 (0x0040 - 0x0030)
class URPOCCombatSequence : public UDataAsset
{
public:
	TArray<class URPOCCombatStageData*>                Stages;                                                   // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatSequence");
		return ptr;
	}

};


// Class WKND.RPOCCombatStage
// 0x05E8 (0x0610 - 0x0028)
class URPOCCombatStage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E8];                                     // 0x0028(0x05E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage");
		return ptr;
	}

};


// Class WKND.RPOCCombatStage_Movement
// 0x0140 (0x0750 - 0x0610)
class URPOCCombatStage_Movement : public URPOCCombatStage
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0610(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage_Movement");
		return ptr;
	}

};


// Class WKND.RPOCCombatStage_Attack
// 0x00A0 (0x07F0 - 0x0750)
class URPOCCombatStage_Attack : public URPOCCombatStage_Movement
{
public:
	struct FCombatStageConfig_Attack                   AttackConfig;                                             // 0x0750(0x0038) (Transient, IsPlainOldData)
	struct FCombatStageState_Attack                    AttackState;                                              // 0x0788(0x0060) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x07E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage_Attack");
		return ptr;
	}


	void TriggerNewCombo();
};


// Class WKND.RPOCCombatStage_Block
// 0x0060 (0x07B0 - 0x0750)
class URPOCCombatStage_Block : public URPOCCombatStage_Movement
{
public:
	struct FCombatStageConfig_Block                    BlockConfig;                                              // 0x0750(0x0010) (Transient, IsPlainOldData)
	struct FCombatStageState_Block                     BlockState;                                               // 0x0760(0x0050) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage_Block");
		return ptr;
	}

};


// Class WKND.RPOCCombatStage_Defence
// 0x0070 (0x07C0 - 0x0750)
class URPOCCombatStage_Defence : public URPOCCombatStage_Movement
{
public:
	struct FCombatStageConfig_Defence                  DefenceConfig;                                            // 0x0750(0x0038) (Transient)
	struct FCombatStageState_Defence                   DefenceState;                                             // 0x0788(0x0030) (Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x07B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage_Defence");
		return ptr;
	}

};


// Class WKND.RPOCCombatStage_Duel
// 0x0120 (0x0870 - 0x0750)
class URPOCCombatStage_Duel : public URPOCCombatStage_Movement
{
public:
	struct FCombatStageConfig_Duel                     DuelConfig;                                               // 0x0750(0x00E8) (Transient)
	struct FCombatStageState_Duel                      DuelState;                                                // 0x0838(0x0038) (Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage_Duel");
		return ptr;
	}

};


// Class WKND.RPOCCombatStage_Evade
// 0x0040 (0x0790 - 0x0750)
class URPOCCombatStage_Evade : public URPOCCombatStage_Movement
{
public:
	struct FCombatStageConfig_Evade                    EvadeConfig;                                              // 0x0750(0x0008) (Transient, IsPlainOldData)
	struct FCombatStageState_Evade                     EvadeState;                                               // 0x0758(0x0038) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage_Evade");
		return ptr;
	}

};


// Class WKND.RPOCCombatStage_Exposition
// 0x0020 (0x0770 - 0x0750)
class URPOCCombatStage_Exposition : public URPOCCombatStage_Movement
{
public:
	struct FCombatStageConfig_Exposition               ExpositionConfig;                                         // 0x0750(0x0010) (Transient, IsPlainOldData)
	struct FCombatStageState_Exposition                ExpositionState;                                          // 0x0760(0x0010) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage_Exposition");
		return ptr;
	}

};


// Class WKND.RPOCCombatStage_Idle
// 0x0010 (0x0760 - 0x0750)
class URPOCCombatStage_Idle : public URPOCCombatStage_Movement
{
public:
	struct FCombatStageConfig_Idle                     IdleConfig;                                               // 0x0750(0x0001) (Transient, IsPlainOldData)
	struct FCombatStageState_Idle                      IdleState;                                                // 0x0751(0x0002) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD];                                       // 0x0753(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage_Idle");
		return ptr;
	}

};


// Class WKND.RPOCCombatStage_Parry
// 0x00A0 (0x07F0 - 0x0750)
class URPOCCombatStage_Parry : public URPOCCombatStage_Movement
{
public:
	struct FCombatStageConfig_Parry                    ParryConfig;                                              // 0x0750(0x0028) (Transient)
	struct FCombatStageState_Parry                     ParryState;                                               // 0x0778(0x0078) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage_Parry");
		return ptr;
	}

};


// Class WKND.RPOCCombatStage_Reaction
// 0x00F0 (0x0840 - 0x0750)
class URPOCCombatStage_Reaction : public URPOCCombatStage_Movement
{
public:
	struct FCombatStageConfig_Reaction                 ReactionConfig;                                           // 0x0750(0x0098) (Transient)
	struct FCombatStageState_Reaction                  ReactionState;                                            // 0x07E8(0x0058) (Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage_Reaction");
		return ptr;
	}

};


// Class WKND.RPOCCombatStage_Throw
// 0x0030 (0x0780 - 0x0750)
class URPOCCombatStage_Throw : public URPOCCombatStage_Movement
{
public:
	struct FCombatStageConfig_Throw                    ThrowConfig;                                              // 0x0750(0x0018) (IsPlainOldData)
	struct FCombatStageState_Throw                     ThrowState;                                               // 0x0768(0x0014)
	unsigned char                                      UnknownData00[0x4];                                       // 0x077C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStage_Throw");
		return ptr;
	}

};


// Class WKND.RPOCCombatStageData
// 0x0018 (0x0048 - 0x0030)
class URPOCCombatStageData : public UDataAsset
{
public:
	bool                                               bUseDuration;                                             // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              Duration;                                                 // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Token;                                                    // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanTakeDamage;                                           // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStageData");
		return ptr;
	}

};


// Class WKND.RPOCCombatStageData_Movement
// 0x0058 (0x00A0 - 0x0048)
class URPOCCombatStageData_Movement : public URPOCCombatStageData
{
public:
	bool                                               bUseLocation;                                             // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x004C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              LocationTolerance;                                        // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinPlayerDistance;                                        // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OptimumPlayerDistance;                                    // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxPlayerDistance;                                        // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseDirection;                                            // 0x0068(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	float                                              DirectionFromTargetActor;                                 // 0x006C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectionTolerance;                                       // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnterDefenceDistance;                                     // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeaveDefenceDistance;                                     // 0x0078(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AccelerationOverride;                                     // 0x007C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DecelerationOverride;                                     // 0x0080(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeedOverride;                                         // 0x0084(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFacingLocation;                                       // 0x0088(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	struct FVector                                     FacingLocation;                                           // 0x008C(0x000C) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              FacingTolerance_Degrees;                                  // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStageData_Movement");
		return ptr;
	}

};


// Class WKND.RPOCCombatStageData_Attack
// 0x0030 (0x00D0 - 0x00A0)
class URPOCCombatStageData_Attack : public URPOCCombatStageData_Movement
{
public:
	class UAnimMontage*                                CombatStartAnim;                                          // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                CombatStopAnim;                                           // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCEnemyComboStageSetData*                 OrderedCombosInStage;                                     // 0x00B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCEnemyComboStageSetData*                 RandomisedCombosInStage;                                  // 0x00B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AttackCount;                                              // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InterAttackTime;                                          // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECombatStage_Taunt                                 Taunt;                                                    // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStageData_Attack");
		return ptr;
	}

};


// Class WKND.RPOCCombatStageData_Block
// 0x0000 (0x00A0 - 0x00A0)
class URPOCCombatStageData_Block : public URPOCCombatStageData_Movement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStageData_Block");
		return ptr;
	}

};


// Class WKND.RPOCCombatStageData_Defence
// 0x0020 (0x00C0 - 0x00A0)
class URPOCCombatStageData_Defence : public URPOCCombatStageData_Movement
{
public:
	int                                                MaxBlockPhases;                                           // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxParryPhases;                                           // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndOnceHit;                                               // 0x00A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET
	TArray<class UWKNDPlayerComboData*>                ParrySpecificCombo;                                       // 0x00B0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStageData_Defence");
		return ptr;
	}

};


// Class WKND.RPOCCombatStageData_Duel
// 0x0098 (0x0138 - 0x00A0)
class URPOCCombatStageData_Duel : public URPOCCombatStageData_Movement
{
public:
	class URPOCEnemyComboStageSetData*                 OrderedCombosInStage;                                     // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCEnemyComboStageSetData*                 RandomisedCombosInStage;                                  // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAttackPhases;                                          // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxBlockPhases;                                           // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxParryPhases;                                           // 0x00B8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxCombosReceived;                                        // 0x00BC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StrikesPerCombo;                                          // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET
	TArray<int>                                        StrikeDamageReceived;                                     // 0x00C8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                FinalStrikeDamageReceived_2H_Bonus;                       // 0x00D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	class UAnimMontage*                                AnimationOnBlocked;                                       // 0x00E0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationOnNotBlocked;                                    // 0x00E8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundBase*>                          DialogueOnNotBlocked;                                     // 0x00F8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                AnimationOnStartReactionOverride;                         // 0x0108(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchLeftOverride;                            // 0x0110(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchRightOverride;                           // 0x0118(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AnimationOnTakeDamageOverride;                            // 0x0120(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRandomiseDirectionFromTargetActor;                       // 0x0128(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0129(0x0003) MISSED OFFSET
	float                                              CentralAngle;                                             // 0x012C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadAngle;                                              // 0x0130(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECombatStage_Taunt                                 Taunt;                                                    // 0x0134(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0135(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStageData_Duel");
		return ptr;
	}

};


// Class WKND.RPOCCombatStageData_Evade
// 0x0000 (0x00A0 - 0x00A0)
class URPOCCombatStageData_Evade : public URPOCCombatStageData_Movement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStageData_Evade");
		return ptr;
	}

};


// Class WKND.RPOCCombatStageData_Exposition
// 0x0018 (0x00B8 - 0x00A0)
class URPOCCombatStageData_Exposition : public URPOCCombatStageData_Movement
{
public:
	class UAnimMontage*                                Animation;                                                // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  Dialogue;                                                 // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VolumeMultiplier;                                         // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEvadeIncomingStrikes;                                    // 0x00B4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bParryCombos;                                             // 0x00B5(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlockStrikes;                                            // 0x00B6(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x00B7(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStageData_Exposition");
		return ptr;
	}

};


// Class WKND.RPOCCombatStageData_Idle
// 0x0008 (0x00A8 - 0x00A0)
class URPOCCombatStageData_Idle : public URPOCCombatStageData_Movement
{
public:
	bool                                               bEnableMovement;                                          // 0x00A0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStageData_Idle");
		return ptr;
	}

};


// Class WKND.RPOCCombatStageData_Parry
// 0x0000 (0x00A0 - 0x00A0)
class URPOCCombatStageData_Parry : public URPOCCombatStageData_Movement
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStageData_Parry");
		return ptr;
	}

};


// Class WKND.RPOCCombatStageData_Throw
// 0x0008 (0x00A8 - 0x00A0)
class URPOCCombatStageData_Throw : public URPOCCombatStageData_Movement
{
public:
	int                                                ThrownItemsCount;                                         // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrowInterval;                                            // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCCombatStageData_Throw");
		return ptr;
	}

};


// Class WKND.RPOCEnemyAttackComponent
// 0x03B0 (0x04A0 - 0x00F0)
class URPOCEnemyAttackComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    NotifyAttackStarted;                                      // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyStrikeLanded;                                       // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyComboCompleted;                                     // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyBlockBegins;                                        // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x40];                                      // 0x0130(0x0040) MISSED OFFSET
	struct FScriptMulticastDelegate                    NotifyTwoHandedBlockFailed;                               // 0x0170(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyContestedClashFinished;                             // 0x0180(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NotifyParryAttemptFailed;                                 // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TWeakObjectPtr<class URPOCEnemyComboData>          CurrentCombo;                                             // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAttacking;                                             // 0x01A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01A9(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AWKNDPlayerPawn>              TargetOpponent;                                           // 0x01AC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BlocksThisCombo;                                          // 0x01B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                HitsThisCombo;                                            // 0x01B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                CurrentBlockWindow;                                       // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxBlocks;                                                // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	struct FTimerHandle                                EntireComboTimer;                                         // 0x01C8(0x0008) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData03[0x40];                                      // 0x01D0(0x0040) MISSED OFFSET
	bool                                               bBladeCanBeBlocked;                                       // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0211(0x0002) MISSED OFFSET
	bool                                               bBladeCanBeStopped;                                       // 0x0213(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockBeforeNotify;                                       // 0x0214(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0215(0x0003) MISSED OFFSET
	class ARPOCPickup_Lightsaber*                      AttackingLightsaber;                                      // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      BlockingLightsaber;                                       // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x28];                                      // 0x0228(0x0028) MISSED OFFSET
	float                                              MaxAllowedAngleChangeDuringClash;                         // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReqdClashPushDistance;                                    // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReqdClashBlockTime;                                       // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveDuringInitialBlock;                                // 0x025C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FContestedClashParams                       ContestedClashParams;                                     // 0x0260(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              AllowableClashDisconnectTime;                             // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClashDisconnectMoveRate;                                  // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClashMoveMultiplier;                                      // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinClashDuration;                                         // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoHitGracePeriodDuration;                                 // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClashDuration;                                            // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EParryMode                                         ParryMode;                                                // 0x028C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x028D(0x0003) MISSED OFFSET
	float                                              MinimumParrySpeed;                                        // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0294(0x0004) MISSED OFFSET
	struct FBlockBounceParams                          SingleHandedBlockParams;                                  // 0x0298(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FBlockBounceParams                          TwoHandedBlockParams;                                     // 0x0318(0x0080) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              PostBlockClashDisableTime;                                // 0x0398(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticallyDetectBlocks;                               // 0x039C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDebugType                                         bDebugForIK;                                              // 0x039D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	float                                              DebugForIKDuration;                                       // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintDebugToLog;                                         // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	float                                              TauntBlendDuration;                                       // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlockRecoveryDuration;                                    // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalBlockRecoveryDuration;                               // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      Skelmesh;                                                 // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimInstance*                               AnimInstance;                                             // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              AttackSpeedMultiplier;                                    // 0x03C8(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	float                                              WindUpSpeedMultiplier;                                    // 0x03CC(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UAnimMontage*                                BlockedMontage;                                           // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RecovereableAttack;                                       // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AttackMontage;                                            // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0xB8];                                      // 0x03E8(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCEnemyAttackComponent");
		return ptr;
	}


	void UpdateContestedClash(float DeltaTime);
	void TauntBlendOut(class UAnimMontage* InAttack, float StartAtTime, float BlendTime);
	void StartContestedClash(const struct FSaberClashData& Clash);
	void RecoverFromBlock(class UAnimMontage* InAttack);
	void OnSuccess();
	void OnOpponentTakeDamage(int DamageAmount, const struct FWKNDDamageInfo& DamageInfo);
	void OnLightsaberClash(class ARPOCPickup_Lightsaber* Saber1, class ARPOCPickup_Lightsaber* Saber2, float RewindTime, const struct FSaberClashData& Clash);
	bool OnBlocked(float AdjustPosition, const struct FSaberClashData& Clash);
	void ForceOutAttack();
	void EndClashAndContinueAttack();
	void ComboMoveBlocked();
	void ComboCompleted(ECombat_ComboAttackResult AttackResult, int NumBlocks);
	void AttackHitsPlayer(bool* ShouldDoDamage);
	void Attack(class URPOCEnemyComboData* NewCombo, class AWKNDPlayerPawn* Opponent, ECombatStage_Taunt Taunt, int FirstStrikeIndex);
};


// Class WKND.RPOCEnemyComboData
// 0x0068 (0x0098 - 0x0030)
class URPOCEnemyComboData : public UDataAsset
{
public:
	ECombatComboWeight                                 ComboWeight;                                              // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class UAnimMontage*                                ShortTaunt;                                               // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                LongTaunt;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        FirstStrikeOptions;                                       // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimMontage*>                        SubsequentStrikes;                                        // 0x0058(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                FinalBlockedAnim;                                         // 0x0068(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                VulnerableStageAnim;                                      // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                AltVulnerableStageAnim;                                   // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                ParriedAnim;                                              // 0x0080(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UAnimMontage*>                        SubsequentParryAnims;                                     // 0x0088(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCEnemyComboData");
		return ptr;
	}

};


// Class WKND.RPOCEnemyComboStageSetData
// 0x0010 (0x0040 - 0x0030)
class URPOCEnemyComboStageSetData : public UDataAsset
{
public:
	TArray<class URPOCEnemyComboData*>                 Combos;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCEnemyComboStageSetData");
		return ptr;
	}

};


// Class WKND.RPOCEquippedWeapon
// 0x0030 (0x0510 - 0x04E0)
class ARPOCEquippedWeapon : public ARPOCPickupActor
{
public:
	class UCapsuleComponent*                           HandleCollision;                                          // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        AttachMesh;                                               // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               AttachArea;                                               // 0x04F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bMainToMainHand;                                          // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMainHand;                                                // 0x04F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x04FA(0x0002) MISSED OFFSET
	float                                              OffHandHoldDuration;                                      // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMovingToMainHand;                                        // 0x0500(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0501(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCEquippedWeapon");
		return ptr;
	}


	void ReceiveOnRepositionWeapon();
	void ReceiveOnReleased(class AActor* PreviousInstigator);
	void ReceiveOnPickedUp(class AActor* CurrentInstigator);
	void ReceiveOnNotHeldInBothHands();
	void ReceiveOnMeleeMunitionHit();
	void ReceiveOnHeldInBothHands();
	class UMotionControllerComponent* GetParentMotionController();
};


// Class WKND.RPOCForceThrowComponent
// 0x0038 (0x0128 - 0x00F0)
class URPOCForceThrowComponent : public UActorComponent
{
public:
	TArray<class UClass*>                              ThrowActors;                                              // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ThrowStrength;                                            // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCodeThrow;                                            // 0x0104(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0105(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    ItemThrown;                                               // 0x0108(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ThrowItem;                                                // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCForceThrowComponent");
		return ptr;
	}


	void ThrowRandomActor();
	void HandleItemThrown(class ASliceableActor* ThrownActor);
};


// Class WKND.RPOCForceThrowLocation
// 0x0010 (0x0328 - 0x0318)
class ARPOCForceThrowLocation : public AActor
{
public:
	TArray<class ASliceableActor*>                     ThrowableItems;                                           // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCForceThrowLocation");
		return ptr;
	}

};


// Class WKND.RPOCGestureDetector
// 0x0060 (0x0150 - 0x00F0)
class URPOCGestureDetector : public UActorComponent
{
public:
	class UTensorFlowModel*                            Model;                                                    // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              HeadComponent;                                            // 0x00F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              ControllingHandComponent;                                 // 0x0100(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              SecondaryHandComponent;                                   // 0x0108(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReverseGrip;                                              // 0x0110(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsGesturing;                                              // 0x0111(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0112(0x0006) MISSED OFFSET
	struct FRiceDetectedGesture                        DetectedGesture;                                          // 0x0118(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0130(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCGestureDetector");
		return ptr;
	}


	void StartGesture();
	bool IsDetectingGestures();
	struct FRiceDetectedGesture GetDetectedGesture();
	void EndGesture();
	void ClearGesture();
};


// Class WKND.RPOCGestureRecorderComponent
// 0x0058 (0x0148 - 0x00F0)
class URPOCGestureRecorderComponent : public UActorComponent
{
public:
	TWeakObjectPtr<class USceneComponent>              HeadComponent;                                            // 0x00F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              ControllingHandComponent;                                 // 0x00F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              SecondaryHandComponent;                                   // 0x0100(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Gesture;                                                  // 0x0108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReverseGrip;                                              // 0x0110(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRecording;                                              // 0x0111(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x36];                                      // 0x0112(0x0036) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCGestureRecorderComponent");
		return ptr;
	}


	void StartRecording();
	void EndRecording();
	void CancelRecording();
};


// Class WKND.RPOCGestureReplayerComponent
// 0x0068 (0x0158 - 0x00F0)
class URPOCGestureReplayerComponent : public UActorComponent
{
public:
	TWeakObjectPtr<class USceneComponent>              HeadComponent;                                            // 0x00F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              ControllingHandComponent;                                 // 0x00F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              SecondaryHandComponent;                                   // 0x0100(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     TraceFile;                                                // 0x0108(0x0010) (Edit, ZeroConstructor)
	int                                                CurrentFrame;                                             // 0x0118(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsReplaying;                                              // 0x011C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3B];                                      // 0x011D(0x003B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCGestureReplayerComponent");
		return ptr;
	}


	void StopReplaying();
	void StartReplaying(bool Loop);
};


// Class WKND.RPOCHandEnvironmentInteractionComponent
// 0x0390 (0x0480 - 0x00F0)
class URPOCHandEnvironmentInteractionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC8];                                      // 0x00F0(0x00C8) MISSED OFFSET
	class USceneComponent*                             MotionController;                                         // 0x01B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x01C0(0x0058) MISSED OFFSET
	TArray<class UShapeComponent*>                     ManifestingCollisionComponents;                           // 0x0218(0x0010) (ExportObject, ZeroConstructor, Transient)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x0228(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0229(0x0003) MISSED OFFSET
	float                                              MinPushSpeed;                                             // 0x022C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxPushSpeed;                                             // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlideHandSpeed;                                           // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SlideHandStepSize;                                        // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MinSlideHandSteps;                                        // 0x023C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxSlideHandSteps;                                        // 0x0240(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HandPadding;                                              // 0x0244(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceFromMotionController;                          // 0x0248(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	class UHapticFeedbackEffect_Base*                  ImpactHapticCurve;                                        // 0x0250(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HapticsMaxImpactSpeed;                                    // 0x0258(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HapticsMaxPushSpeed;                                      // 0x025C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StrengthMultiplier;                                       // 0x0260(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HandOrientationWeight;                                    // 0x0264(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FHandOrientationStrengthModifiers           HandOrientationStrengthModifiers;                         // 0x0268(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              HandMovementPositionalStrengthWeight;                     // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FHandMovementPositionalStrengthModifiers    HandMovementPositionalStrengthModifiers;                  // 0x0284(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              HandMovementDirectionalStrengthWeight;                    // 0x029C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FHandMovementDirectionalStrengthModifiers   HandMovementDirectionalStrengthModifiers;                 // 0x02A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FHandMeshOrientation                        LeftHandOrientation;                                      // 0x02B0(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FHandMeshOrientation                        RightHandOrientation;                                     // 0x02B3(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData04[0x2];                                       // 0x02B6(0x0002) MISSED OFFSET
	struct FVector                                     LeftShoulderOffset;                                       // 0x02B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     RightShoulderOffset;                                      // 0x02C4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bDebugDrawPositions;                                      // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawShoulders;                                      // 0x02D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugHandSliding;                                        // 0x02D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugHaptics;                                            // 0x02D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugStrength;                                           // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugStrengthVerbose;                                    // 0x02D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugShapes;                                             // 0x02D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x02D7(0x0001) MISSED OFFSET
	float                                              MaxHandLerpSpeed;                                         // 0x02D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxHandLerpDist;                                          // 0x02DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LerpTime;                                                 // 0x02E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PushIntentSpeed;                                          // 0x02E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StoppingPushingSpeed;                                     // 0x02E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PushLockReleaseTime;                                      // 0x02EC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UXLABHandSolver*                             HandSolver;                                               // 0x02F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReleasedItemPushTimeout;                                  // 0x02F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EstimatedFOVForHapticPurposes;                            // 0x02FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsIntersecting;                                          // 0x0300(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyCollideWithCharacters;                               // 0x0301(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x16];                                      // 0x0302(0x0016) MISSED OFFSET
	struct FXLABBestInteractiveData                    BestInteractiveInRange;                                   // 0x0318(0x0020) (Transient)
	class UXLABInteractionData*                        BestInteractiveData;                                      // 0x0338(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x0340(0x000C) MISSED OFFSET
	float                                              GrabAdjustTimeToLerp;                                     // 0x034C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              GrabAdjustLerpTimer;                                      // 0x0350(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              GrabAdjustMaxRange;                                       // 0x0354(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              GrabAdjustDetectMaxRange;                                 // 0x0358(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	struct FTransform                                  GrabAdjustedControllerTransform;                          // 0x0360(0x0030) (Transient, IsPlainOldData)
	class AActor*                                      heldActor;                                                // 0x0390(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class AActor*>                              IgnoredActors;                                            // 0x0398(0x0010) (ZeroConstructor, Transient)
	class AActor*                                      ActorRecentlyHeld;                                        // 0x03A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x28];                                      // 0x03B0(0x0028) MISSED OFFSET
	TArray<class AActor*>                              HeldObjectAttachedActors;                                 // 0x03D8(0x0010) (ZeroConstructor, Transient)
	TArray<class UPrimitiveComponent*>                 TouchedComponents;                                        // 0x03E8(0x0010) (ExportObject, ZeroConstructor, Transient)
	TArray<class UPrimitiveComponent*>                 BorrowedHitcheckComponents;                               // 0x03F8(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      UnknownData10[0x8];                                       // 0x0408(0x0008) MISSED OFFSET
	class UCapsuleComponent*                           HeldObjectCollisionCapsule;                               // 0x0410(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData11[0x68];                                      // 0x0418(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCHandEnvironmentInteractionComponent");
		return ptr;
	}


	void ToggleUseHandRepositioning();
	void TeleportEnd();
	void TeleportBegin();
	void SnapEnd();
	void SnapBegin();
	void SetHeldActor(class AActor* Actor);
	void SetHand(EControllerHand NewHand, const struct FName& InHandSocketName);
	void SetEnvironmentInteractionMode(EHandEnvironmentInteractionMode InteractionMode);
	void OnHeldObjectHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void IgnoreCollisionInRadiusUntilMoved(float Radius);
	void IgnoreActor(class AActor* Actor, bool ignore);
	class AActor* GetHeldActor();
	ENTHapticHands GetHapticHand();
	void GetHandTransform(struct FVector* Location, struct FRotator* Rotation);
	float GetHandAwarenessAnimationScrubbing();
	EHandEnvironmentInteractionMode GetEnvironmentInteractionMode();
};


// Class WKND.RPOCHandTouchOverrideComponent
// 0x0010 (0x0100 - 0x00F0)
class URPOCHandTouchOverrideComponent : public UActorComponent
{
public:
	bool                                               AllowPushMode;                                            // 0x00F0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               OverridePushIntentSpeeds;                                 // 0x00F1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00F2(0x0002) MISSED OFFSET
	float                                              PushIntentSpeed;                                          // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StoppingPushingSpeed;                                     // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCHandTouchOverrideComponent");
		return ptr;
	}

};


// Class WKND.RPOCIntersectRepelantComponent
// 0x00E0 (0x0790 - 0x06B0)
class URPOCIntersectRepelantComponent : public USphereComponent
{
public:
	float                                              CollisionRadius;                                          // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Adjustment;                                               // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, float>                          OffsetPerPlatform;                                        // 0x06B8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             CameraLocator;                                            // 0x0708(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Skelmesh;                                                 // 0x0710(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       RayStartSocketName;                                       // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RayTargetSocketName;                                      // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             ControllerLocator;                                        // 0x0728(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             HandLocator;                                              // 0x0730(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0738(0x0008) MISSED OFFSET
	struct FTransform                                  HandTransformOffset;                                      // 0x0740(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0770(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCIntersectRepelantComponent");
		return ptr;
	}


	void TraceHandPosition();
};


// Class WKND.RPOCKeyMapManagerComponent
// 0x0020 (0x0110 - 0x00F0)
class URPOCKeyMapManagerComponent : public UActorComponent
{
public:
	bool                                               bLoadInBlueprint;                                         // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x00F1(0x0007) MISSED OFFSET
	TArray<class UDataTable*>                          InputDataTables;                                          // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0108(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCKeyMapManagerComponent");
		return ptr;
	}


	void Load();
};


// Class WKND.RPOCPickupWeapon
// 0x00C0 (0x05A0 - 0x04E0)
class ARPOCPickupWeapon : public ARPOCPickupActor
{
public:
	class UCapsuleComponent*                           HandleCollision;                                          // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              MinAutotargetForce;                                       // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ClampAutotargetForce;                                     // 0x04EC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PowerForceIncrease;                                       // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DebugDraw;                                                // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MovementPrediction;                                       // 0x04F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FollowTargetZ;                                            // 0x04FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               OrientToVelocity;                                         // 0x04FB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrientToVelocityDuration;                                 // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OrientToVelocityRotateTime;                               // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CustomArc;                                                // 0x0504(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0505(0x0003) MISSED OFFSET
	float                                              ArcParam;                                                 // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeaponType                                        WeaponType;                                               // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowStealing;                                            // 0x050D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDespawn;                                              // 0x050E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x050F(0x0001) MISSED OFFSET
	float                                              AutoDespawnZOffset;                                       // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoDespawnTime;                                          // 0x0514(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDespawnDisablePickup;                                 // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDespawnOnAttachParentDeath;                           // 0x0519(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x051A(0x0006) MISSED OFFSET
	struct FGrabData                                   SwapHandData;                                             // 0x0520(0x0038) (Edit, BlueprintVisible)
	struct FName                                       PommelSocketName;                                         // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       GuardSocketName;                                          // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TipSocketName;                                            // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNonPlayerPickedUp;                                       // 0x0570(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2F];                                      // 0x0571(0x002F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCPickupWeapon");
		return ptr;
	}


	bool RepositionObject(float DeltaTime);
	void ReceiveOnRepositionWeapon();
	void ReceiveOnParry(class AActor* HitActor, const struct FVector& ImpactPoint, class UPrimitiveComponent* HitComponent);
	void ReceiveOnMeleeMunitionHit(class AActor* HitActor, const struct FVector& ImpactPoint, class UPrimitiveComponent* HitComponent);
	void ReceiveOnDecapitation(class AActor* HitActor, const struct FVector& ImpactPoint);
	void OnNonPlayerPickUp();
	void OnNonPlayerDrop();
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	bool IsPendingDelayedKill();
	class UMotionControllerComponent* GetParentMotionController();
	void GetBladeLocations(struct FVector* GuardLocation, struct FVector* TipLocation);
	void DespawnOnAttachParentDeath();
	void Deactivate();
	void Activate();
};


// Class WKND.RPOCPickup_Lightsaber
// 0x0200 (0x07A0 - 0x05A0)
class ARPOCPickup_Lightsaber : public ARPOCPickupWeapon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05A0(0x0008) MISSED OFFSET
	class ULightsaberBladeComponent*                   LightsaberBladeComponent;                                 // 0x05A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BladeMesh;                                                // 0x05B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	float                                              BladeRadius;                                              // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDamageStrength                                    DamageStrength;                                           // 0x05BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05BD(0x0003) MISSED OFFSET
	class ALightsaberCuttingFX*                        CuttingFX;                                                // 0x05C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FSoftClassPath                              CuttingFXClassRef;                                        // 0x05C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SaberId;                                                  // 0x05E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               AllowHitcheckBorrowing;                                   // 0x05E4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF];                                       // 0x05E5(0x000F) MISSED OFFSET
	bool                                               bDebugNextFrame;                                          // 0x05F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ELightsaberState                                   PrivateBladeStateVar;                                     // 0x05F5(0x0001) (ZeroConstructor, IsPlainOldData)
	ESaberGameState                                    PrivateRequestedStateVar;                                 // 0x05F6(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bBladeEnabled;                                            // 0x05F7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HiltWeight;                                               // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSaberDragProperties                        SaberDragProperties;                                      // 0x05FC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              BladeLengthModifier;                                      // 0x0604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerHiltClash;                                          // 0x0608(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSaberClash;                                              // 0x0609(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x060A(0x0002) MISSED OFFSET
	int                                                ClashingSaberID;                                          // 0x060C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSaberParry;                                              // 0x0610(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0611(0x0003) MISSED OFFSET
	float                                              HiltLength;                                               // 0x0614(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bBlinking;                                                // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0619(0x0003) MISSED OFFSET
	struct FVector                                     SaberClashLocation;                                       // 0x061C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SaberClashNormal;                                         // 0x0628(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // 0x0634(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xB];                                       // 0x0635(0x000B) MISSED OFFSET
	struct FTransform                                  SaberClashHandTransform;                                  // 0x0640(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  IdealTipTransform;                                        // 0x0670(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  IdealGuardTransform;                                      // 0x06A0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  PreviousIdealTipTransform;                                // 0x06D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  PreviousIdealGuardTransform;                              // 0x0700(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bEnableResistance;                                        // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0731(0x0003) MISSED OFFSET
	float                                              MinimumSpeed;                                             // 0x0734(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OptimumSpeed;                                             // 0x0738(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverloadSpeed;                                            // 0x073C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OffScreenOverloadTolerance;                               // 0x0740(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StoppingSpeed;                                            // 0x0744(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LagDistance;                                              // 0x0748(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEditModifiers;                                           // 0x074C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	float                                              SpeedSmoothingTime;                                       // 0x0750(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DepthToAngleRatio;                                        // 0x0754(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinWeightDepthPct;                                        // 0x0758(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWeightDepthPct;                                        // 0x075C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinWeightAngle;                                           // 0x0760(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWeightAngle;                                           // 0x0764(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResistanceIncreaseTime;                                   // 0x0768(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResistanceDecreaseTime;                                   // 0x076C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ResistanceCurve;                                          // 0x0770(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneRadius;                                           // 0x0778(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneDepthThreshold;                                   // 0x077C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneAngleThreshold;                                   // 0x0780(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneDensityThreshold;                                 // 0x0784(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneDistanceThreshold;                                // 0x0788(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeadzoneDebugText;                                       // 0x078C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StateDebugging;                                           // 0x078D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x12];                                      // 0x078E(0x0012) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCPickup_Lightsaber");
		return ptr;
	}


	void UpdateSaberDragProperties();
	void TurnOffLightsaber();
	void RequestSaberState(ESaberGameState GameState);
	void RenderDebugInfo();
	void ReceiveOnSaberHit();
	void ReceiveOnRepositionWeapon();
	void ReceiveOnReleased(class AActor* PreviousInstigator);
	void ReceiveOnPickedUp(class AActor* CurrentInstigator);
	void ReceiveOnParry(class AActor* HitActor, const struct FVector& ImpactPoint, class UPrimitiveComponent* HitComponent);
	void ReceiveOnOverload();
	void ReceiveOnNotHeldInBothHands();
	void ReceiveOnMeleeMunitionHit(class AActor* HitActor, const struct FVector& ImpactPoint, class UPrimitiveComponent* HitComponent);
	void ReceiveOnHeldInBothHands();
	void ReceiveOnFastTurnOff();
	void ReceiveOnDecapitation(class AActor* HitActor, const struct FVector& ImpactPoint);
	void ReceiveOnAddDirector();
	void ReceiveOnAddCrystal();
	void ReceiveOnAddCrossGuard();
	void ReceivedOnInstallPart(class AActor* Part);
	void PushHapticValue(float Frequency, float Amplitude);
	void PlayHapticsEffect(class UHapticFeedbackEffect_Base* HapticEffect, float HapticScale);
	void OverloadIfPlayersAndInFOV();
	void Overload();
	void OnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnBeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void NotifyBladeOn(bool On);
	bool IsPendingDelayedKill();
	bool IsHiltClash();
	bool IsClashingEnabled();
	bool IsClashing(bool IncludeHiltClashes);
	bool IsBladeLive();
	bool IsAttacking();
	float GetScaledBladeLength();
	int GetSaberId();
	bool GetIsWeaponActive();
	struct FVector GetBladeUpVector();
	void GetBladeTransforms(struct FTransform* GuardTransform, struct FTransform* PommelTransform);
	ELightsaberState GetBladeState();
	float GetBladeSpeed();
	float GetBladeRadius();
	void GetBladeLocations(struct FVector* GuardLocation, struct FVector* TipLocation);
	void FastTurnOff();
	void EnableClashAndAttackDebugModeForTestLevelsOnly();
	void DespawnOnAttachParentDeath();
	void DelayedDestroy(float Delay);
	bool CheckBladeState(ELightsaberState bladeState);
	void CancelDelayedDestroy();
};


// Class WKND.RPOCPickupActor_Phys
// 0x01B8 (0x04D0 - 0x0318)
class ARPOCPickupActor_Phys : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) MISSED OFFSET
	bool                                               bDebugGrabLocators;                                       // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	TArray<class URPOCGrabLocatorComponent*>           GrabLocators;                                             // 0x0330(0x0010) (ExportObject, ZeroConstructor)
	EPickupMode                                        PickupMode;                                               // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPickupMode                                        PickupMode_Oculus;                                        // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x0342(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0343(0x0005) MISSED OFFSET
	class USkeletalMeshComponent*                      PickupMesh;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LogicRoot;                                                // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	EHoldType                                          HoldType;                                                 // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0359(0x0007) MISSED OFFSET
	struct FAnimTypeDropdown                           AnimType;                                                 // 0x0360(0x0010) (Edit, BlueprintVisible)
	bool                                               bIsCarried;                                               // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class UStaticMeshComponent*                        HighlightMeshReference;                                   // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHighlighted;                                           // 0x0380(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	float                                              HighlightIntensity;                                       // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MIHighlight;                                              // 0x0388(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HighlightMaterialIndex;                                   // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPriorityPickUp;                                        // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	float                                              PickupPriorityMultiplier;                                 // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PickupDistanceMultiplier;                                 // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisablePickup;                                            // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseGrip;                                             // 0x03A1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EHandPosition                                      CurrentHandPosition;                                      // 0x03A2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SimulatePhysics;                                          // 0x03A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyPickupScale;                                        // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	struct FVector                                     PickupScale;                                              // 0x03A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TimeHeld;                                                 // 0x03B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x8];                                       // 0x03B8(0x0008) MISSED OFFSET
	struct FTransform                                  InitialRelativeTransform;                                 // 0x03C0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FTransform                                  TargetRelativeTransform;                                  // 0x03F0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              RepositioningTime_Pickup;                                 // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepositioningTime;                                        // 0x0424(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RepositioningTimeToGo;                                    // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRepositioning;                                         // 0x042C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBeingPickedUp;                                         // 0x042D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x042E(0x0002) MISSED OFFSET
	class APawn*                                       LastGrabInstigator;                                       // 0x0430(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ThrowingImpulseMultiplier;                                // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrowingAngularImpulseMultiplier;                         // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class URPOCCanGrabInterface>      GrabbingHand;                                             // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    CurrentHand;                                              // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0451(0x0003) MISSED OFFSET
	float                                              gravityRestoreTimer;                                      // 0x0454(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              idleTimer;                                                // 0x0458(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x10];                                      // 0x045C(0x0010) MISSED OFFSET
	float                                              VelocityFrameBufferTime;                                  // 0x046C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x50];                                      // 0x0470(0x0050) MISSED OFFSET
	class URPOCGrabLocatorComponent*                   GrabbedLocator;                                           // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData13[0x8];                                       // 0x04C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCPickupActor_Phys");
		return ptr;
	}


	void UpdateHighlight(float DeltaTime);
	bool RepositionObject(float DeltaTime);
	void Release(bool bDetach);
	void ReceiveOnReleased(class AActor* PreviousInstigator);
	void ReceiveOnPickedUp(class AActor* CurrentInstigator);
	void ReceiveOnInHand();
	void ReceiveOnBeginRangedGrab();
	void OnNonPlayerPickUp();
	void OnNonPlayerDrop();
	void InitReposition(const struct FTransform& HandTransform, float RepositionTime);
	struct FVector GetRegressedVelocity();
	struct FVector GetRegressedAngularVelocity();
	ENTHapticHands GetPrimaryHand();
	ENTHapticHands GetOffHand();
	bool GetIsIdling();
	float GetIdleTime();
	bool EnablePhysicsSimulation(bool flag);
	void DelayedDestroy(float Delay);
	void Deactivate();
	void CancelDelayedDestroy();
	bool ApplyImpulseOnRelease();
	void Activate();
};


// Class WKND.SliceableActor
// 0x0080 (0x0398 - 0x0318)
class ASliceableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSliceFailedDelegate;                                    // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StoppedBeingThrown;                                       // 0x0330(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                MaxNumOfSliceBursts;                                      // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class USceneComponent*                             Origin;                                                   // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USliceableMeshComponent*                     SliceableMesh;                                            // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UPhysicsThrusterComponent*                   Thruster;                                                 // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ThrowCentre;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0368(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SliceableActor");
		return ptr;
	}


	void UpdateThrow();
	bool Throw(const struct FVector& TargetLocation, float ThrustStrength);
	void StopThrow();
	void SpawnBursts(class USliceableMeshComponent* Mesh, TArray<struct FVector> CutPoints, class UParticleSystem* SliceBurstPFX);
	void ReceiveOnValidCut(class USliceableMeshComponent* CutComponent, const struct FVector& LastLocationWS);
	void ReceiveOnUpdateCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& CutEntryLocation, const struct FVector& CutEntryNormal, const struct FVector2D& CollisionUV, const struct FName& BoneName, const struct FVector& CutExitLocation);
	void ReceiveOnStartCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent);
	void ReceiveOnMeshSliced(const struct FVector& CentreOfSlice, class USliceableMeshComponent* MeshA, class USliceableMeshComponent* MeshB);
	void ReceiveOnEndCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& BladeDirection);
	bool PrepForThrow();
	void OnValidCut(class USliceableMeshComponent* CutComponent, const struct FVector& LastLocationWS);
	void OnSliceFailed(class USliceableMeshComponent* Mesh);
	void OnMeshSliced(const struct FVector& CentreOfSlice, TArray<struct FVector> CutPoints, class UParticleSystem* SliceBurstPFX, class USliceableMeshComponent* MeshA, class USliceableMeshComponent* MeshB);
};


// Class WKND.RPOCPickupActor_Sliceable
// 0x0188 (0x0520 - 0x0398)
class ARPOCPickupActor_Sliceable : public ASliceableActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET
	bool                                               bNonPlayerPickedUp;                                       // 0x03A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugGrabLocators;                                       // 0x03A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPickupMode                                        PickupMode;                                               // 0x03AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPickupMode                                        PickupMode_Oculus;                                        // 0x03AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnsPickups;                                           // 0x03AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x03AE(0x0002) MISSED OFFSET
	class USceneComponent*                             LogicRoot;                                                // 0x03B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	EHoldType                                          HoldType;                                                 // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03B9(0x0007) MISSED OFFSET
	struct FAnimTypeDropdown                           AnimType;                                                 // 0x03C0(0x0010) (Edit, BlueprintVisible)
	class UStaticMeshComponent*                        HighlightMeshReference;                                   // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsHighlighted;                                           // 0x03D8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03D9(0x0003) MISSED OFFSET
	float                                              HighlightIntensity;                                       // 0x03DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MIHighlight;                                              // 0x03E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HighlightMaterialIndex;                                   // 0x03E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPriorityPickUp;                                        // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	float                                              PickupPriorityMultiplier;                                 // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PickupDistanceMultiplier;                                 // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisablePickup;                                            // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseGrip;                                             // 0x03F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTwoHanded;                                               // 0x03FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHeldInBothHands;                                       // 0x03FB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EHandPosition                                      CurrentHandPosition;                                      // 0x03FC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SimulatePhysics;                                          // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bApplyPickupScale;                                        // 0x03FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x03FF(0x0001) MISSED OFFSET
	struct FVector                                     PickupScale;                                              // 0x0400(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TimeHeld;                                                 // 0x040C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InitialRelativeTransform;                                 // 0x0410(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FTransform                                  TargetRelativeTransform;                                  // 0x0440(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              RepositioningTime_Pickup;                                 // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepositioningTime;                                        // 0x0474(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RepositioningTimeToGo;                                    // 0x0478(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRepositioning;                                         // 0x047C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowGrabs;                                               // 0x047D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x047E(0x0002) MISSED OFFSET
	class APawn*                                       LastGrabInstigator;                                       // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ThrowingImpulseMultiplier;                                // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrowingAngularImpulseMultiplier;                         // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class URPOCCanGrabInterface>      GrabbingHand;                                             // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    CurrentHand;                                              // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	float                                              idleTimer;                                                // 0x04A4(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x10];                                      // 0x04A8(0x0010) MISSED OFFSET
	float                                              VelocityFrameBufferTime;                                  // 0x04B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x64];                                      // 0x04BC(0x0064) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCPickupActor_Sliceable");
		return ptr;
	}


	void UpdateHighlight(float DeltaTime);
	void SetSliceableMesh(class USliceableMeshComponent* Mesh);
	bool RepositionObject(float DeltaTime);
	void Release(bool bDetach);
	void ReceiveOnUsed();
	void ReceiveOnStopUse();
	void ReceiveOnReleased(class AActor* PreviousInstigator);
	void ReceiveOnPickedUp_Native(class AActor* CurrentInstigator);
	void ReceiveOnPickedUp(class AActor* CurrentInstigator);
	void ReceiveOnNotHeldInBothHands();
	void ReceiveOnInHand();
	void ReceiveOnHeldInBothHands();
	void ReceiveOnBeginRangedGrab();
	void ReceiveOnBeenDisarmed();
	void OnSliced(const struct FVector& CentreOfSlice, class USliceableMeshComponent* OriginalMesh, class USliceableMeshComponent* NewMesh);
	void OnNonPlayerPickUp();
	void OnNonPlayerDrop();
	void OnFadeOut();
	void InitSliceable(class USliceableMeshComponent* InSliceableMesh, TArray<class URPOCGrabLocatorComponent*>* InGrabLocators);
	void InitReposition(const struct FTransform& HandTransform, float RepositionTime, bool KeepRelativeRotation);
	struct FVector GetRegressedVelocity();
	struct FVector GetRegressedAngularVelocity();
	ENTHapticHands GetPrimaryHand();
	ENTHapticHands GetOffHand();
	bool GetIsIdling();
	float GetIdleTime();
	void DelayedDestroy(float Delay);
	void Deactivate();
	void CancelDelayedDestroy();
	bool ApplyImpulseOnRelease();
	void Activate();
};


// Class WKND.RPOCPickupActorInterface
// 0x0000 (0x0028 - 0x0028)
class URPOCPickupActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCPickupActorInterface");
		return ptr;
	}


	void SetTwoHanded(bool TwoHanded);
	void SetSwapData(const struct FGrabData& GrabData);
	void SetPhysicsEnabled(bool Enabled, bool disarmed, const struct FVector& Impulse);
	bool SetHighlight(bool bHighlight);
	bool IsPriorityPickUp();
	float GetPickupPriorityMultiplier();
	float GetPickupDistanceMultiplier();
	bool GetPickupData(struct FPickupStateData* PickupData);
	TScriptInterface<class URPOCCanGrabInterface> GetGrabbingHand();
	bool Drop(bool applyImpulse);
	void BeginRangedGrab();
};


// Class WKND.RPOCPickupDevice
// 0x0010 (0x04F0 - 0x04E0)
class ARPOCPickupDevice : public ARPOCPickupActor
{
public:
	bool                                               bAmbidextrous;                                            // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04E1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCPickupDevice");
		return ptr;
	}


	void Deactivate();
	void Activate();
};


// Class WKND.RPOCSaberManager
// 0x0138 (0x0450 - 0x0318)
class ARPOCSaberManager : public AActor
{
public:
	bool                                               bClashesOn;                                               // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	int                                                MaxSabers;                                                // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxClashes;                                               // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugClashData;                                          // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLogEvents;                                               // 0x0325(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0326(0x0002) MISSED OFFSET
	float                                              ClashStickinessDist;                                      // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClashCooldownTime;                                        // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClashEffectsCooldownTime;                                 // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkCooldownTime;                                        // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClashStickTime;                                           // 0x0338(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ClashUnStickRate;                                         // 0x033C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    ClashStartEvent;                                          // 0x0340(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               PlayerHasLightsaber;                                      // 0x0350(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	TArray<int>                                        UnusedSaberIDs;                                           // 0x0358(0x0010) (ZeroConstructor)
	TMap<struct FName, class ARPOCPickup_Lightsaber*>  LightSaberMap;                                            // 0x0368(0x0050) (ZeroConstructor)
	TArray<class ARPOCPickup_Lightsaber*>              LightSabers;                                              // 0x03B8(0x0010) (ZeroConstructor)
	TArray<class AWKNDMotionController*>               MotionControllers;                                        // 0x03C8(0x0010) (ZeroConstructor)
	TArray<struct FSaberPathData>                      BladePathData;                                            // 0x03D8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x10];                                      // 0x03E8(0x0010) MISSED OFFSET
	TArray<struct FSaberClashData>                     ClashData;                                                // 0x03F8(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData04[0x48];                                      // 0x0408(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCSaberManager");
		return ptr;
	}


	class ARPOCPickup_Lightsaber* STATIC_RequestSaberSpawn(class UObject* WorldContextObject, class UClass* LightSaberType, const struct FName& Tag, const struct FTransform& Transform, bool* outAlreadyExisted);
	void RegisterController(class AWKNDMotionController* Controller);
	void OnSaberSweepHit(class ARPOCPickup_Lightsaber* Saber1, class ARPOCPickup_Lightsaber* Saber2, float RewindTime, const struct FSaberClashData& Clash);
	void OnSaberContactStop(int clashMask, class ARPOCPickup_Lightsaber* Saber1, class ARPOCPickup_Lightsaber* Saber2);
	void OnSaberContactStart(int clashMask, class ARPOCPickup_Lightsaber* Saber1, class ARPOCPickup_Lightsaber* Saber2);
	void OnPlayerHit(class ARPOCPickup_Lightsaber* AttackingSaber, int FrameStrikeCount, class AWKNDPlayerPawn* Player, bool PlayerWasStruckBeforeBlock);
	int NumSpareSlots();
	int STATIC_NumSpareSaberSlots(class UObject* WorldContextObject);
	class ARPOCSaberManager* STATIC_GetSaberManager(class UObject* WorldContextObject);
	class ARPOCPickup_Lightsaber* GetSaberHeldByPlayer();
	class ARPOCPickup_Lightsaber* GetSaberHeldByActor(class AActor* Actor);
	class ARPOCPickup_Lightsaber* GetSaberByTag(const struct FName& Tag);
	void CheckSaberDisengage(class ARPOCPickup_Lightsaber* Saber, const struct FTransform& ControllerBladeLoc);
};


// Class WKND.RPOCSettings
// 0x0018 (0x0040 - 0x0028)
class URPOCSettings : public UObject
{
public:
	float                                              MinSliceableMeshVolume;                                   // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSliceableMeshCuts;                                     // 0x002C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSliceableMeshComponents;                               // 0x0030(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxSliceableMeshCuttingPlanes;                            // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              CutDeviation;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bAlwaysHoldToCarry;                                       // 0x003C(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCSettings");
		return ptr;
	}

};


// Class WKND.RPOCStagedCombat_Attack
// 0x0038 (0x0060 - 0x0028)
class URPOCStagedCombat_Attack : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnFinished;                                               // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStaggered;                                              // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDied;                                                   // 0x0048(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCStagedCombat_Attack");
		return ptr;
	}


	void NotifyStaggered();
	void NotifyLethalDamageReceived();
	void NotifyCombatStageCompleted(ECombatStageType CompletedStage, const struct FName& Token, int RemainingStageCount);
	class URPOCStagedCombat_Attack* STATIC_CreateAttackStageProxy(class URPOCStagedCombatComponent* StagedCombatComponent, class URPOCCombatStageData* Stage, ECombatStage_Taunt Taunt, class URPOCEnemyComboStageSetData* OrderedCombos, class URPOCEnemyComboStageSetData* RandomCombos, bool VerifyPosition);
};


// Class WKND.RPOCStagedCombat_GoToPosition
// 0x0088 (0x00B0 - 0x0028)
class URPOCStagedCombat_GoToPosition : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnReachedLocation;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReachedLocationAndYaw;                                  // 0x0038(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                TimeoutTimer;                                             // 0x0060(0x0008)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0068(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCStagedCombat_GoToPosition");
		return ptr;
	}


	void NotifyMoveLocationReached(const struct FVector& Location, bool bMovingToFaceActor, class AActor* TargetFaceActor);
	void NotifyMoveLocationAndYawReached(const struct FVector& Location, bool bMovingToFaceActor, class AActor* TargetFaceActor);
	class URPOCStagedCombat_GoToPosition* STATIC_CreateGoToPositionProxy(class URPOCStagedCombatComponent* StagedCombatComponent, const struct FTransform& Position, float LocationTolerance, float YawTolerance, EStagedCombat_StageCompleteBehaviour AfterOpponentReached);
	class URPOCStagedCombat_GoToPosition* STATIC_CreateGoToOpponentProxy(class URPOCStagedCombatComponent* StagedCombatComponent, float Distance, float DistanceTolerance, bool bUseYaw, float YawFromOpponent, EStagedCombat_StageCompleteBehaviour AfterOpponentReached);
	class URPOCStagedCombat_GoToPosition* STATIC_CreateGoToMovementStageProxy(class URPOCStagedCombatComponent* StagedCombatComponent, class URPOCCombatStageData* Stage, bool bUseDirection, float Direction, float DirectionTolerance, EStagedCombat_StageCompleteBehaviour AfterOpponentReached);
	class URPOCStagedCombat_GoToPosition* STATIC_CreateGoToLocationProxy(class URPOCStagedCombatComponent* StagedCombatComponent, const struct FVector& Location, float LocationTolerance, EStagedCombat_StageCompleteBehaviour AfterOpponentReached);
	class URPOCStagedCombat_GoToPosition* STATIC_CreateGoToCurrentTargetProxy(class URPOCStagedCombatComponent* StagedCombatComponent, bool bUseDelay, float ReachedLocationTimeout);
};


// Class WKND.RPOCStagedCombatComponent
// 0x06D0 (0x07C0 - 0x00F0)
class URPOCStagedCombatComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UWKNDEnemyCombatData*                        PersonalCombatData;                                       // 0x00F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceThrowStage;                                          // 0x0100(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AWKNDPlayerPawn>              TargetOpponent;                                           // 0x0104(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bDebugDraw;                                               // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceLocomotionScore;                                    // 0x010D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x010E(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    TargetMoveLocationReached;                                // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TargetMoveLocationAndYawReached;                          // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NewMotionFieldTarget;                                     // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FName                                       OpponentBoneName;                                         // 0x0140(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OpponentLocatorBoneIndex;                                 // 0x0148(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InitialHitPoints;                                         // 0x014C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                NumHealthLevels;                                          // 0x0150(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StabDamage;                                               // 0x0154(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UWKNDHealthComponent*                        HealthComponent;                                          // 0x0158(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               bEnableDefence;                                           // 0x0160(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableBlocks;                                            // 0x0161(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableCentralBlocking;                                   // 0x0162(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableThrow;                                             // 0x0163(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDisarm;                                            // 0x0164(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableRecordOpponent;                                    // 0x0165(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableComboDetection;                                    // 0x0166(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableNewPathPrediction;                                 // 0x0167(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       WeaponGripName;                                           // 0x0168(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FIncomingStrikeData                         StrikePredictionData;                                     // 0x0170(0x0280) (Transient)
	TArray<class UStaticMeshComponent*>                DefensiveArmour;                                          // 0x03F0(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                CoreArmour;                                               // 0x0400(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance)
	float                                              AdjacentPieceThreshold;                                   // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageMultiplier;                                         // 0x0414(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BonusDamageMultiplier;                                    // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BonusDamageThreshold;                                     // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableEvades;                                            // 0x0420(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0421(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    MinorDamage;                                              // 0x0428(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    BonusDamage;                                              // 0x0438(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HitWhileVulnerable;                                       // 0x0448(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HitDuringReactionWindow;                                  // 0x0458(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Hit;                                                      // 0x0468(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DamagedEvent;                                             // 0x0478(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CombatStageStarted;                                       // 0x0488(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CombatStageAborted;                                       // 0x0498(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CombatStageCompleted;                                     // 0x04A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StaggerDamageReceived;                                    // 0x04B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LethalDamageReceived;                                     // 0x04C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    MontageEnded;                                             // 0x04D8(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData04[0xC];                                       // 0x04E8(0x000C) MISSED OFFSET
	int                                                ThrowItemCounter;                                         // 0x04F4(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class URPOCStrikePredictionComponent*              StrikePredictionComponent;                                // 0x04F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UHapticFeedbackEffect_Curve*                 WeakStrikeHapticCurve;                                    // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHapticFeedbackEffect_Curve*                 StandardStrikeHapticCurve;                                // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x0510(0x0005) MISSED OFFSET
	bool                                               bDrawDebugHitPoints;                                      // 0x0515(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x9A];                                      // 0x0516(0x009A) MISSED OFFSET
	TWeakObjectPtr<class ARPOCPickup_Lightsaber>       HeldSaber;                                                // 0x05B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URPOCCombatSequence*                         StageSequence;                                            // 0x05B8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<ECombatStageType, struct FRPOCCombatStageSummary> DefaultStages;                                            // 0x05C0(0x0050) (ZeroConstructor, Transient)
	TArray<struct FRPOCCombatStageSummary>             StageStack;                                               // 0x0610(0x0010) (ZeroConstructor, Transient)
	class URPOCCombatData*                             BaseInitData;                                             // 0x0620(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatData_Block*                       BlockingInitData;                                         // 0x0628(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatData_Evade*                       EvadeInitData;                                            // 0x0630(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatData_Movement*                    MovementInitData;                                         // 0x0638(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatData_Reaction*                    ReactionInitData;                                         // 0x0640(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatData_Throw*                       ThrowInitData;                                            // 0x0648(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData*                        DefaultStageConfiguration;                                // 0x0650(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData_Attack*                 AttackStageConfiguration;                                 // 0x0658(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData_Defence*                DefenceStageConfiguration;                                // 0x0660(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData_Duel*                   DuelStageConfiguration;                                   // 0x0668(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData_Evade*                  EvadeStageConfiguration;                                  // 0x0670(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData_Exposition*             ExpositionStageConfiguration;                             // 0x0678(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData_Idle*                   IdleStageConfiguration;                                   // 0x0680(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData_Movement*               MovementStageConfiguration;                               // 0x0688(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData_Throw*                  ThrowStageConfiguration;                                  // 0x0690(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStage_Attack*                     AttackStage;                                              // 0x0698(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URPOCCombatStage_Block*                      BlockStage;                                               // 0x06A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URPOCCombatStage_Defence*                    DefenceStage;                                             // 0x06A8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URPOCCombatStage_Duel*                       DuelStage;                                                // 0x06B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URPOCCombatStage_Evade*                      EvadeStage;                                               // 0x06B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URPOCCombatStage_Exposition*                 ExpositionStage;                                          // 0x06C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URPOCCombatStage_Idle*                       IdleStage;                                                // 0x06C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URPOCCombatStage_Movement*                   MovementStage;                                            // 0x06D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URPOCCombatStage_Reaction*                   ReactionStage;                                            // 0x06D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class URPOCCombatStage_Throw*                      ThrowStage;                                               // 0x06E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x06E8(0x0008) MISSED OFFSET
	class URPOCEnemyComboData*                         OverrideCombo;                                            // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAnimRootMotion;                                          // 0x06F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableMotionField;                                      // 0x06F9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInCombat;                                              // 0x06FA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayIdleLoop;                                            // 0x06FB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceCompleteMovement;                                   // 0x06FC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x13];                                      // 0x06FD(0x0013) MISSED OFFSET
	class UWKNDEnemyRoutePlanner*                      RoutePlanner;                                             // 0x0710(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             BlueprintNodes;                                           // 0x0718(0x0010) (ZeroConstructor)
	TArray<class URPOCStagedCombat_Attack*>            BlueprintAttackNodes;                                     // 0x0728(0x0010) (ZeroConstructor)
	TArray<class URPOCStagedCombat_GoToPosition*>      BlueprintGoToPositionNodes;                               // 0x0738(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData09[0x78];                                      // 0x0748(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCStagedCombatComponent");
		return ptr;
	}


	bool ThrowStageConfigured();
	void TakeHit(float Timeout);
	void StopRotation();
	void StageCompletedExternally(ECombatStageType CompletedStage);
	void SetTargetOpponent(class AWKNDPlayerPawn* NewTargetOpponent);
	bool SetNewDebugMovementTargets(const struct FVector& NewMoveTargetLocation, const struct FVector& NewTargetFaceLocation);
	bool SetNewDebugMovementTargetFaceActor(const struct FVector& NewMoveTargetLocation, class AActor* NewTargetFaceActor);
	bool SetNewDebugMovementActorTarget(class AActor* NewTargetFaceActor);
	void SetLeftHanded(bool InLeftHanded);
	void SetDirectionOffset(float InDeltaDirection);
	void SetDirection(float InDirection);
	void SetDamageable(bool InDamageable);
	bool SafeToTransitionFromState(ECombatStageType CheckOutState);
	void ResetStageTimeout();
	void ResetCombatStatistics();
	void RegisterStrikeLanded();
	void RegisterStrikeBlocked(bool bWeakPushback);
	void RegisterFinalComboStrikeBlocked(ECombat_ComboAttackResult ComboResult, int BlocksThisCombo, int HitsThisCombo, int StrikesThisCombo);
	void RegisterComboCompleted(ECombat_ComboAttackResult ComboResult, int BlocksThisCombo);
	void PushCombatStage(class URPOCCombatStageData* Stage, bool bClearCurrentStages, const struct FName& Token, ECombatStageMovementOptions Positioning, class ATargetPoint* Target, float Distance, float Yaw);
	void PlayStageSequence(class AWKNDPlayerPawn* NewOpponent, class URPOCCombatSequence* InStageSequence);
	void OverrideAttackSpeedMultipliers(float NewAttackSpeedMultiplier, float NewWindUpSpeedMultiplier);
	void OnStrike();
	void OnDeath(const struct FWKNDDamageInfo& DamageInfo);
	void NotifySaberPickedUp(class AWKNDMotionController* Controller, class AActor* Object);
	bool IsVulnerable();
	bool IsStaggered();
	bool IsInCombatSequence();
	bool IsAtTargetMoveLocationAndYaw();
	bool IsAtTargetMoveLocation();
	void GetTargetLocation(struct FVector* IdealLocation, struct FVector* ClippedLocation);
	struct FString GetStageDebugInfo();
	void GetHealth(int* HitPoints, int* Level);
	bool GetDistanceToOpponent(float* FoundDistance);
	bool GetDamageable();
	void GetCombatStatistics(struct FStagedCombatStatistics* Enemy, struct FStagedCombatStatistics* Player);
	void EndCombatStage(ECombatStageType StageType);
	ECombatStageType CurrentActiveStage();
	bool ConfigurePersonalCombatData(class UWKNDEnemyCombatData* NewPersonalCombatData, float NewAttackSpeedMultiplier, float NewWindUpSpeedMultiplier);
	class UStaticMeshComponent* CheckDamagedArmourPiece(const struct FVector& StrikeLocation);
};


// Class WKND.RPOCStrikePredictionComponent
// 0x0660 (0x0750 - 0x00F0)
class URPOCStrikePredictionComponent : public UActorComponent
{
public:
	TWeakObjectPtr<class AWKNDPlayerPawn>              TargetOpponent;                                           // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalPredictionTime;                                      // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumPredictionPoints;                                      // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0100(0x0004) MISSED OFFSET
	struct FVector                                     OuterCapsuleOffset;                                       // 0x0104(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              OuterCapsuleHalfHeight;                                   // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OuterCapsuleRadius;                                       // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InnerCapsuleOffset;                                       // 0x0118(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              InnerCapsuleHalfHeight;                                   // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerCapsuleRadius;                                       // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TorsoCapsuleOffset;                                       // 0x012C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TorsoCapsuleHalfHeight;                                   // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TorsoCapsuleRadius;                                       // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ParryCapsuleOffset;                                       // 0x0140(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ParryCapsuleHalfHeight;                                   // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParryCapsuleRadius;                                       // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PhaseAxisOffset;                                          // 0x0154(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EvadeCapsuleOffset;                                       // 0x0160(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EvadeCapsuleHalfHeight;                                   // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EvadeCapsuleRadius;                                       // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EvadeAnticipationTime;                                    // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BladeSeparationOffset;                                    // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeRelevantTimeframe;                                  // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeVelocityThetaTolerance_Degrees;                     // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeMinimumMapDistance;                                 // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeStabbingWindow;                                     // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeStabbingForwardness;                                // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CapsuleRotationRate;                                      // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    StrikeReceived;                                           // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnNewStrikeReceived;                                      // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FStrikePredictionKinematicData              PredictionData;                                           // 0x01B8(0x0040)
	unsigned char                                      UnknownData02[0x558];                                     // 0x01F8(0x0558) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCStrikePredictionComponent");
		return ptr;
	}


	void InitNewOpponent(class AWKNDPlayerPawn* NewOpponent);
	bool HasOuterCapsuleOverlap();
	bool HasIncomingStrike();
	bool GetHasNewInnerCollision();
	bool CheckForStrike(struct FCompleteStrikeData* ActiveStrike);
};


// Class WKND.RPOCUsageInterface
// 0x0000 (0x0028 - 0x0028)
class URPOCUsageInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.RPOCUsageInterface");
		return ptr;
	}


	bool Use_Release();
	bool Use_Press();
	bool Trigger_UnTouch();
	bool Trigger_Touch();
	bool Trigger_Release();
	bool Trigger_Press();
	bool Stick_UnTouch();
	bool Stick_Touch();
	bool FaceTopButton_UnTouch();
	bool FaceTopButton_Touch();
	bool FaceTopButton_Release();
	bool FaceTopButton_Press();
	bool FaceBottomButton_UnTouch();
	bool FaceBottomButton_Touch();
	bool FaceBottomButton_Release();
	bool FaceBottomButton_Press();
};


// Class WKND.SliceableChain
// 0x0238 (0x0550 - 0x0318)
class ASliceableChain : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	class USoundBase*                                  SwingingSound;                                            // 0x0320(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  WhooshingSound;                                           // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumSwingSpeed;                                        // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumWhooshSpeed;                                       // 0x0334(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumSwingAngle;                                        // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x033C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 VolumeCurve;                                              // 0x0340(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 PitchCurve;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 WhooshVolumeCurve;                                        // 0x0350(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SlicedSound;                                              // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  DestroyedSound;                                           // 0x0360(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoftHit;                                                  // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoftHitThreshold;                                         // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0374(0x0004) MISSED OFFSET
	class USoundBase*                                  MediumHit;                                                // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MediumHitThreshold;                                       // 0x0380(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class USoundBase*                                  HardHit;                                                  // 0x0388(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HardHitThreshold;                                         // 0x0390(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitMinDelay;                                              // 0x0394(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   VolumeRange;                                              // 0x0398(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PitchRange;                                               // 0x03A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	bool                                               AudioDebugging;                                           // 0x03A8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class UParticleSystem*                             CuttingPFX;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstance*                           DestroyedLinkMaterial;                                    // 0x03B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 DefaultDestroyedLinkMesh;                                 // 0x03C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, class UStaticMesh*>             DestroyedLinkMeshes;                                      // 0x03C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              DestroyedLinkDissolveTime;                                // 0x0418(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x041C(0x0004) MISSED OFFSET
	class UParticleSystem*                             DestroyedLinkPFX;                                         // 0x0420(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      ChainMesh;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData05[0x50];                                      // 0x0430(0x0050) UNKNOWN PROPERTY: SetProperty WKND.SliceableChain.GatedCollisionComponentList
	TMap<class UPrimitiveComponent*, float>            LastImpactTimes;                                          // 0x0480(0x0050) (ZeroConstructor)
	TArray<struct FName>                               UnattachedLinks;                                          // 0x04D0(0x0010) (ZeroConstructor)
	TArray<struct FName>                               BrokenLinks;                                              // 0x04E0(0x0010) (ZeroConstructor)
	TMap<class UStaticMeshComponent*, float>           DissolvingLinks;                                          // 0x04F0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0540(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SliceableChain");
		return ptr;
	}


	void SpawnDestroyedLink(const struct FVector& Location, const struct FQuat& Rotation, const struct FVector& Scale, const struct FName& BoneName);
	void SpawnCuttingVFX(const struct FVector& CutLocation);
	void SetDissolveParameter(class UStaticMeshComponent* DestroyedMesh, float DissolveTime);
	void ReceiveOnUpdateCut(class AActor* CuttingActor);
	void ReceiveOnStartCut(class AActor* CuttingActor);
	void ReceiveOnMeshSliced(class AActor* CuttingActor);
	void ReceiveOnEndCut(class AActor* CuttingActor);
	void PlaySlicedAudio(const struct FVector& Location);
	void PlayDestroyedAudio(const struct FVector& Location);
	void OnTouched(class UPrimitiveComponent* TouchedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, EHandTouch TouchType, const struct FVector& Location, const struct FVector& ContactVelocity);
	void OnHitAudio(class UPrimitiveComponent* OtherComponent, const struct FVector& HitImpulse, const struct FVector& HitLocation);
	void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
};


// Class WKND.SliceableCloth
// 0x00B0 (0x03C8 - 0x0318)
class ASliceableCloth : public AActor
{
public:
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0318(0x00A8) MISSED OFFSET
	class UNTFlexClothComponent*                       FlexCloth;                                                // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SliceableCloth");
		return ptr;
	}


	void ReceiveOnUpdateCut(class AActor* CuttingActor);
	void ReceiveOnStartCut(class AActor* CuttingActor);
	void ReceiveOnMeshSliced(class AActor* CuttingActor);
	void ReceiveOnEndCut(class AActor* CuttingActor);
};


// Class WKND.SliceableMeshComponent
// 0x0330 (0x0A80 - 0x0750)
class USliceableMeshComponent : public UProceduralMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x138];                                     // 0x0750(0x0138) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0750(0x0050) UNKNOWN PROPERTY: SetProperty WKND.SliceableMeshComponent.GatedCollisionComponentList
	TMap<class UPrimitiveComponent*, float>            LastImpactTimes;                                          // 0x08D8(0x0050) (ZeroConstructor)
	TMap<class UPrimitiveComponent*, int>              LastCutCounts;                                            // 0x0928(0x0050) (ZeroConstructor)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0978(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          CapMaterial;                                              // 0x0980(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0988(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RemoveCollisionTime;                                      // 0x098C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DissolveParticleSystem;                                   // 0x0990(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumSliceTime;                                         // 0x0998(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumSliceLength;                                       // 0x099C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectsNavigationWhenSliced;                             // 0x09A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSlicingActive;                                           // 0x09A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x09A2(0x0002) MISSED OFFSET
	struct FVector                                     VelocityWhenSliced;                                       // 0x09A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bVelocityToBeApplied;                                     // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDrawCut;                                            // 0x09B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseStampedVFX;                                           // 0x09B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipStampCooldown;                                       // 0x09B3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	class UMaterialInterface*                          StampMaterial;                                            // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       StampPositionParamName;                                   // 0x09C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StampRTParamName;                                         // 0x09C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          CooldownMaterial;                                         // 0x09D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialParameterCollection*                MaterialCollection;                                       // 0x09D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CooldownDuration;                                         // 0x09E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RenderTargetWidth;                                        // 0x09E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RenderTargetHeight;                                       // 0x09E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostSpawnCutMuteTime;                                     // 0x09EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PostSpawnCutTimer;                                        // 0x09F0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x09F4(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               StandardImpactAudioEvent;                                 // 0x09F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               SlicingSound;                                             // 0x0A00(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMeshSliced;                                             // 0x0A08(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFadedOut;                                               // 0x0A18(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnBeginFadeOut;                                           // 0x0A28(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValidCut;                                               // 0x0A38(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UTextureRenderTarget2D*                      StampRT;                                                  // 0x0A48(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    StampMID;                                                 // 0x0A50(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CooldownRemaining;                                        // 0x0A58(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFadingOut;                                               // 0x0A5C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A5D(0x0003) MISSED OFFSET
	struct FBox                                        MeshBox;                                                  // 0x0A60(0x001C) (IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0A7C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SliceableMeshComponent");
		return ptr;
	}


	void UpdateCut(class AActor* CuttingActor, const struct FVector& CutEntryLocation, const struct FVector& CutExitLocation);
	void StartDissolveOut();
	void StartCut(class AActor* CuttingActor);
	void StampVFX(const struct FVector2D& CollisionUV);
	void SliceFromBladeCollision(class AActor* Lightsaber, EProcMeshSliceCapOption CapOption, class UMaterialInterface* CapMat, float SplitSpeedMultiplier, bool bColorCutEdgeWhite, class UProceduralMeshComponent** OutOtherHalfProcMesh);
	void OnTouched(class UPrimitiveComponent* TouchedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, EHandTouch TouchType, const struct FVector& Location, const struct FVector& ContactVelocity);
	void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnAsyncPhysicsCookFinished();
	bool IsFadingOut();
	bool HasBeenCut();
	struct FBoxSphereBounds GetMeshBounds();
	float GetDissolveStartTime();
	void FinaliseCut(class AActor* CuttingActor, const struct FVector& BladePointingDirection);
	float EstimateVolume();
	struct FVector EstimateCentre();
};


// Class WKND.SliceableMeshDebuggingComponent
// 0x0070 (0x0300 - 0x0290)
class USliceableMeshDebuggingComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0290(0x0010) MISSED OFFSET
	bool                                               VisualiseCuttingPlanes;                                   // 0x02A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02A1(0x0003) MISSED OFFSET
	float                                              CuttingPlaneSize;                                         // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CuttingPlaneLife;                                         // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ReplayAndVisualiseCut;                                    // 0x02AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	float                                              ExplodeAmount;                                            // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReplayCutOffset;                                          // 0x02B4(0x000C) (Edit, IsPlainOldData)
	float                                              ReplayCutStepTime;                                        // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UntextureCutHalf;                                         // 0x02C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ReplayAndVisualisePathSimplification;                     // 0x02C5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x02C6(0x0002) MISSED OFFSET
	struct FVector                                     ReplayPathOffset;                                         // 0x02C8(0x000C) (Edit, IsPlainOldData)
	float                                              ReplayPathStepTime;                                       // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReplayPathPointRadius;                                    // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ReplayAndVisualiseCapGeneration;                          // 0x02DC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	struct FVector                                     ReplayCapOffset;                                          // 0x02E0(0x000C) (Edit, IsPlainOldData)
	float                                              ReplayCapStepTime;                                        // 0x02EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawFailedCapsOnly;                                      // 0x02F0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xF];                                       // 0x02F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SliceableMeshDebuggingComponent");
		return ptr;
	}

};


// Class WKND.SliceableSkeleton
// 0x02A0 (0x09C0 - 0x0720)
class ASliceableSkeleton : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0720(0x005C) MISSED OFFSET
	struct FVector                                     Impulse;                                                  // 0x077C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0788(0x0018) MISSED OFFSET
	TMap<class UPrimitiveComponent*, struct FName>     MeshAttachBones;                                          // 0x07A0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x07F0(0x0050) UNKNOWN PROPERTY: SetProperty WKND.SliceableSkeleton.GatedCollisionComponentList
	TMap<class UPrimitiveComponent*, float>            LastImpactTimes;                                          // 0x0840(0x0050) (ZeroConstructor)
	class USceneComponent*                             OrientationPoint;                                         // 0x0890(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FName                                       OrientationSocket;                                        // 0x0898(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               HiddenBones;                                              // 0x08A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, struct FDroidBoneData>          BoneDataMap;                                              // 0x08B0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FSoftClassPath                              SkeletalPartClassRef;                                     // 0x0900(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bSlicingActive;                                           // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0919(0x0003) MISSED OFFSET
	float                                              MinimumSliceTime;                                         // 0x091C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DissolveDelay;                                            // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x0924(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinImpulseMagnitude;                                      // 0x0928(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxImpulseMagnitude;                                      // 0x092C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BladeSpeedToImpulseMagnitude;                             // 0x0930(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class ASliceableSkeletonPart*                      SkeletalPart;                                             // 0x0938(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              RagdollRecoveryTime;                                      // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollTakeoverTime;                                      // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRagdolled;                                               // 0x0948(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bRecoveringFromRagdoll;                                   // 0x0949(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bDead;                                                    // 0x094A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x5];                                       // 0x094B(0x0005) MISSED OFFSET
	class USoundBase*                                  CuttingSound;                                             // 0x0950(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SlicedSound;                                              // 0x0958(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  SoftHit;                                                  // 0x0960(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoftHitThreshold;                                         // 0x0968(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x096C(0x0004) MISSED OFFSET
	class USoundBase*                                  MediumHit;                                                // 0x0970(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MediumHitThreshold;                                       // 0x0978(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	class USoundBase*                                  HardHit;                                                  // 0x0980(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HardHitThreshold;                                         // 0x0988(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitMinDelay;                                              // 0x098C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   VolumeRange;                                              // 0x0990(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PitchRange;                                               // 0x0998(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAudioDebugging;                                          // 0x09A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x09A1(0x0007) MISSED OFFSET
	class UParticleSystem*                             HitBurstPFX;                                              // 0x09A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             SparksPFX;                                                // 0x09B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x09B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SliceableSkeleton");
		return ptr;
	}


	void UpdateCut(class AActor* CuttingActor, const struct FVector& CutLocation, const struct FName& BoneName);
	void StopRagdoll();
	void StartCut(class AActor* CuttingActor, const struct FName& BoneName);
	void ReceiveStopRagdoll();
	void ReceiveRagdoll(bool bApplySliceImpulse);
	void ReceiveOnUpdateCut(class AActor* CuttingActor, const struct FVector& CutLocation, const struct FName& BoneName);
	void ReceiveOnStartCut(class AActor* CuttingActor, const struct FName& BoneName);
	void ReceiveOnSkeletonCut(class AActor* CuttingActor, const struct FName& BoneName, const struct FVector& CutCentre, const struct FVector& CutNormal);
	void ReceiveOnEndCut(class AActor* CuttingActor, const struct FVector& BladePointingDirection);
	void ReceiveKill(bool bApplySliceImpulse);
	void ReceiveDissolveAndDestroy();
	void Ragdoll(bool bApplySliceImpulse);
	void PlaySlicedVFX(const struct FVector& Location, const struct FVector& Normal, float DistanceFromBone, const struct FName& BoneName, const struct FName& ChildBoneName);
	void OverrideChildBone(const struct FName& ChildBoneName);
	void OnTouched(class UPrimitiveComponent* TouchedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, EHandTouch TouchType, const struct FVector& Location, const struct FVector& ContactVelocity);
	void OnMeshSliced(const struct FVector& CentreOfSlice, TArray<struct FVector> CutPoints, class UParticleSystem* SliceBurstPFX, class USliceableMeshComponent* MeshA, class USliceableMeshComponent* MeshB);
	void OnHitAudio(class UPrimitiveComponent* OtherComponent, const struct FVector& HitImpulse, const struct FVector& HitLocation);
	void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Kill(bool bApplySliceImpulse);
	bool IsBoneSliceable(const struct FName& BoneName);
	TEnumAsByte<ESkeletonOrientation> GetSkeletonOrientation();
	void EndCut(class AActor* CuttingActor, const struct FVector& BladePointingDirection);
};


// Class WKND.SliceableSkeletonPart
// 0x0120 (0x04C0 - 0x03A0)
class ASliceableSkeletonPart : public ASkeletalMeshActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A0(0x0004) MISSED OFFSET
	float                                              FadeOutTime;                                              // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // 0x03A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x24];                                      // 0x03B4(0x0024) MISSED OFFSET
	class USoundBase*                                  SoftHit;                                                  // 0x03D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SoftHitThreshold;                                         // 0x03E0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	class USoundBase*                                  MediumHit;                                                // 0x03E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MediumHitThreshold;                                       // 0x03F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	class USoundBase*                                  HardHit;                                                  // 0x03F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HardHitThreshold;                                         // 0x0400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HitMinDelay;                                              // 0x0404(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   VolumeRange;                                              // 0x0408(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   PitchRange;                                               // 0x0410(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAudioDebugging;                                          // 0x0418(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0419(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData05[0x50];                                      // 0x0419(0x0050) UNKNOWN PROPERTY: SetProperty WKND.SliceableSkeletonPart.GatedCollisionComponentList
	TMap<class UPrimitiveComponent*, float>            LastImpactTimes;                                          // 0x0470(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SliceableSkeletonPart");
		return ptr;
	}


	void ReceiveRagdoll();
	void ReceiveDissolveAndDestroy();
	void Ragdoll();
	void OnTouched(class UPrimitiveComponent* TouchedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, EHandTouch TouchType, const struct FVector& Location, const struct FVector& ContactVelocity);
	void OnHitAudio(class UPrimitiveComponent* OtherComponent, const struct FVector& HitImpulse, const struct FVector& HitLocation);
	void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void CopyPoseFromSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshToCopy);
};


// Class WKND.SlicingPort
// 0x0080 (0x0170 - 0x00F0)
class USlicingPort : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET
	class AActor*                                      SocketedSlicingTool;                                      // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	class UForceSocketComponent*                       ForceSocket;                                              // 0x0118(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPoseableMeshComponent*                      CachedPoseableMeshComponent;                              // 0x0120(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSlicingPortHackComplete;                                // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSlicingPortHackAborted;                                 // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FName                                       ForceSocketTag;                                           // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlicingDuration;                                          // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AbortDistance;                                            // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ResetTimeAfterAbort;                                      // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	TArray<struct FSlicingPortRing>                    SlicingPortRings;                                         // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SlicingPort");
		return ptr;
	}


	void SlicingToolUnsocketed(class AActor* SocketedForceItem);
	void SlicingToolSocketed(class AActor* SocketedForceItem);
	void SetPoseableMeshComponent(class UPoseableMeshComponent* PoseableMesh);
	class UPoseableMeshComponent* GetPoseableMeshComponent();
};


// Class WKND.SMMenuButtonComponent
// 0x0030 (0x0400 - 0x03D0)
class USMMenuButtonComponent : public UMenuButtonComponent
{
public:
	class UStaticMeshComponent*                        ButtonMesh;                                               // 0x03D0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          IdleMaterial;                                             // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          HoveredMaterial;                                          // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          PressedMaterial;                                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          DisabledMaterial;                                         // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SMMenuButtonComponent");
		return ptr;
	}


	void SetMaterialBasedOnState();
};


// Class WKND.SplineFlightComponent
// 0x00A8 (0x0198 - 0x00F0)
class USplineFlightComponent : public UActorComponent
{
public:
	bool                                               useConstantVelocity;                                      // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00F1(0x000F) MISSED OFFSET
	bool                                               faceCameraDuringAttack;                                   // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               maintainAttackDistance;                                   // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0102(0x0002) MISSED OFFSET
	float                                              maximumDistanceToAttack;                                  // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x44];                                      // 0x0108(0x0044) MISSED OFFSET
	struct FVector                                     attackLocation;                                           // 0x014C(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    attackRotation;                                           // 0x0158(0x000C) (Transient, IsPlainOldData)
	float                                              tangentLength;                                            // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AWKNDMynock*                                 owningMynock;                                             // 0x0168(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USplineComponent*                            currentSpline;                                            // 0x0170(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USplineComponent*                            loopSpline;                                               // 0x0178(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USplineComponent*                            attackSpline;                                             // 0x0180(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USplineComponent*                            returnSpline;                                             // 0x0188(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               DebugDraw;                                                // 0x0190(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0191(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SplineFlightComponent");
		return ptr;
	}


	void SetLoopSpline(class USplineComponent* Loop);
	void SetCustomSplineComponents(class USplineComponent* A, class USplineComponent* R);
	bool QueueStartAttack(const struct FVector& Loc, const struct FVector& Facing);
	bool QueueLaunchToLoopSpline(class USplineComponent* Loop);
	bool QueueFlyToLoopSplineWithCustomPath(class USplineComponent* Loop, class USplineComponent* customPath);
	bool QueueFlyToLoopSpline(class USplineComponent* Loop);
};


// Class WKND.SquadAttack
// 0x0028 (0x03B8 - 0x0390)
class ASquadAttack : public ACombatSquad
{
public:
	struct FScriptMulticastDelegate                    AttackAboutToEndEvent;                                    // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AttackEndEvent;                                           // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03B0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SquadAttack");
		return ptr;
	}


	void OnAllMembersReadyToAttack();
	TArray<struct FAttackSquadEnemyRequest> GetAttackSquadRequests();
	void AttackEnds();
	void AttackAboutToEnd();
	void AddNewRequest(const struct FScriptDelegate& SelectionPredicate, int MinEnemiesToRequest, int MaxEnemiesToRequest, TArray<struct FAttackSquadEnemyRequest>* RequestArray);
};


// Class WKND.SquadName
// 0x0000 (0x0030 - 0x0030)
class USquadName : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SquadName");
		return ptr;
	}

};


// Class WKND.SquadOrders
// 0x0028 (0x0058 - 0x0030)
class USquadOrders : public UDataAsset
{
public:
	class USquadName*                                  SquadName;                                                // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWKNDSquadLeader*                            squadLeader;                                              // 0x0038(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<TWeakObjectPtr<class AActor>>               members;                                                  // 0x0040(0x0010) (ZeroConstructor, Transient)
	TWeakObjectPtr<class URPOCEnemyComboData>          LastComboInSquad;                                         // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SquadOrders");
		return ptr;
	}


	void ValidateSquad();
	void TickSquad(float deltatTime);
	void StopSquadOrders();
	void StartSquadOrders();
	class APawn* SpawnAIFromClass(class ATargetPoint* spawnTarget, class UClass* PawnClass, class UBehaviorTree* BehaviorTree);
	void ShowSphere(class AActor* Actor, const struct FColor& col);
	class AActor* RemoveFromSquad(class AActor* toRemove);
	void OnRemoved(class AActor* removed);
	void OnAdded(class AActor* added);
	TArray<class AActor*> GetSquadMembers();
	class AActor* GetSquadMember(int Index);
	class AActor* GetRandomSquadMember();
	class AActor* GetClosestSquadMemberTo(class ATargetPoint* TargetPoint);
	int CountSquadSize();
	bool AddToSquad(class AActor* toAdd);
};


// Class WKND.StartMenuActor
// 0x0040 (0x0460 - 0x0420)
class AStartMenuActor : public ASubMenuActor
{
public:
	class USMMenuButtonComponent*                      BackButton;                                               // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      ResumeButton;                                             // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      StartButton;                                              // 0x0430(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              FadeTimeOnLevelLoad;                                      // 0x0438(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x043C(0x0004) MISSED OFFSET
	struct FName                                       GameLevelName;                                            // 0x0440(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0448(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.StartMenuActor");
		return ptr;
	}


	void OnRestartGameButtonPressed(const struct FPressedButtonComponent& RestartButton);
	void OnPlayGameButtonPressed(const struct FPressedButtonComponent& PlayButton);
};


// Class WKND.StormTrooperMontageSet
// 0x0080 (0x00B0 - 0x0030)
class UStormTrooperMontageSet : public UDataAsset
{
public:
	TArray<class UAnimMontage*>                        CoverIdle;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        CoverToAim;                                               // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        AimIdle;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        Shoot;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        AimToCover;                                               // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        Peek;                                                     // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        Signal;                                                   // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UAnimMontage*>                        Death;                                                    // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.StormTrooperMontageSet");
		return ptr;
	}

};


// Class WKND.SwitchInteraction
// 0x00A0 (0x0280 - 0x01E0)
class USwitchInteraction : public UPhysicsInteraction
{
public:
	bool                                               RestrictedInteraction;                                    // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x9F];                                      // 0x01E1(0x009F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.SwitchInteraction");
		return ptr;
	}

};


// Class WKND.TCPListenerComponent
// 0x0000 (0x00F0 - 0x00F0)
class UTCPListenerComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.TCPListenerComponent");
		return ptr;
	}

};


// Class WKND.WKNDTCPListenerComponent
// 0x0000 (0x00F0 - 0x00F0)
class UWKNDTCPListenerComponent : public UTCPListenerComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDTCPListenerComponent");
		return ptr;
	}

};


// Class WKND.TelemetryManager
// 0x0010 (0x0100 - 0x00F0)
class UTelemetryManager : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    TelemetryEvent;                                           // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.TelemetryManager");
		return ptr;
	}


	void RegisterWaveStarted(const struct FName& WaveName);
	void RegisterWaveFailed(const struct FName& WaveName);
	void RegisterWaveCompleted(const struct FName& WaveName);
	void RegisterTimeLimitExceeded();
	void RegisterDeath(class AActor* DeadActor);
	void RegisterDamage(class AActor* HurtActor);
};


// Class WKND.ToolbeltSlotCollisionComponent
// 0x0000 (0x06B0 - 0x06B0)
class UToolbeltSlotCollisionComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.ToolbeltSlotCollisionComponent");
		return ptr;
	}


	void OnToolbeltSlotOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnToolbeltSlotOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class WKND.TransformBufferManager
// 0x0098 (0x00C0 - 0x0028)
class UTransformBufferManager : public UObject
{
public:
	bool                                               VelocityBuffering;                                        // 0x0028(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	float                                              VelocityFrameBufferTime;                                  // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AngularVelocityBuffering;                                 // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              AngularVelocityFrameBufferTime;                           // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LocationBuffering;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              LocationFrameBufferTime;                                  // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.TransformBufferManager");
		return ptr;
	}


	void Update(float DeltaSeconds, const struct FTransform& CurrentTransform);
	float GetTotalTranslation();
	struct FVector GetStartEndTranslation();
	struct FVector GetRegressedVelocity();
	struct FVector GetRegressedAngularVelocity();
	struct FVector GetPointAlongBufferPath(float Distance);
	struct FVector GetLastFrameVelocity();
	float GetDirectTranslation();
	void ClearBuffers(bool Location, bool Velocity, bool AngularVelocity);
};


// Class WKND.VaderCell_INPControllerComponent
// 0x0080 (0x0170 - 0x00F0)
class UVaderCell_INPControllerComponent : public UActorComponent
{
public:
	struct FName                                       EnterCellAnimState;                                       // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       InCellIdleAnimState;                                      // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       InCellTurnAnimState;                                      // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       InCellStepAnimState;                                      // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ExitCellAnimState;                                        // 0x0110(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      VaderExitPoint;                                           // 0x0118(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinDistAwayFromPlayer;                                    // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              EntranceRepositionTriggerDist;                            // 0x0124(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReOrientTriggerAngle;                                     // 0x0128(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              IdleRePositionTriggerDist;                                // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TurnAngle;                                                // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              StepDist;                                                 // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0138(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.VaderCell_INPControllerComponent");
		return ptr;
	}


	void SetCellState(TEnumAsByte<EVaderCell_State> NewState);
	TEnumAsByte<EVaderCell_State> GetCellState();
	void EanbleRePosition(bool bEnable);
	void EanbleReOrient(bool bEnable);
};


// Class WKND.VelocityTrackerBase
// 0x0030 (0x02C0 - 0x0290)
class UVelocityTrackerBase : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0290(0x0028) MISSED OFFSET
	int                                                SampleSize;                                               // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForwardReferenceDistanceFromHand;                         // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.VelocityTrackerBase");
		return ptr;
	}


	struct FVector GetAverageVelocity();
	float GetAverageSpeedAwayFromTarget(const struct FVector& Target);
};


// Class WKND.VRForceMotionController
// 0x0000 (0x0028 - 0x0028)
class UVRForceMotionController : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.VRForceMotionController");
		return ptr;
	}


	void PrepareToForceGrabItem(class UForceItemComponentBase* ForceItem);
	struct FTransform PickBestTransformToGrabItem(class UForceItemComponentBase* ForceItem);
	bool IsNearGrabbableObject();
	bool IsHoldingParticularObject(class UForceItemComponentBase* ForceItem);
	bool IsHoldingObject();
	bool IsControllerTracking();
	class UVelocityTrackerBase* GetVelocityTracker();
	EControllerHand GetMotionControllerHand();
	struct FRotator GetGrabberRotation();
	struct FVector GetGrabberLocation();
	class UPrimitiveComponent* GetForcePowerAim();
	bool ControllerInputIndicatesGrab();
};


// Class WKND.VRForcePawn
// 0x0000 (0x0028 - 0x0028)
class UVRForcePawn : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.VRForcePawn");
		return ptr;
	}


	class AActor* GetMotionControllerForHand(EControllerHand Hand);
	class UForcePowerComponentBase* GetForcePowerComponent();
};


// Class WKND.VRLocomotionComponent
// 0x01D0 (0x02C0 - 0x00F0)
class UVRLocomotionComponent : public UActorComponent
{
public:
	float                                              TeleportCooldownTime;                                     // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxTeleportDistance;                                      // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          TeleportLocationCurve;                                    // 0x00F8(0x0078) (Edit)
	unsigned char                                      UnknownData00[0x74];                                      // 0x0170(0x0074) MISSED OFFSET
	float                                              MaxHeadsetRotationTweakingPercentage;                     // 0x01E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeadsetRotationTweakingAngle;                          // 0x01E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	struct FRuntimeFloatCurve                          HeadsetRotationTweakingCurve;                             // 0x01F0(0x0078) (Edit)
	float                                              AimTargetWeight;                                          // 0x0268(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x54];                                      // 0x026C(0x0054) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.VRLocomotionComponent");
		return ptr;
	}


	bool SetTeleportVector(const struct FVector& InTeleportVector, struct FVector* OutResultingWorldTargetLocation);
	void SetAimTarget(class USceneComponent* Target, const struct FName& TargetSocket);
	void DoTeleport();
	void ClearAimTarget();
};


// Class WKND.VRLocomotionMagnet
// 0x0000 (0x0028 - 0x0028)
class UVRLocomotionMagnet : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.VRLocomotionMagnet");
		return ptr;
	}

};


// Class WKND.VRLocomotionMagnetComponent
// 0x0050 (0x02E0 - 0x0290)
class UVRLocomotionMagnetComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
	float                                              Radius;                                                   // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectRotation;                                          // 0x02A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAffectLocation;                                          // 0x02A1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugDraw;                                               // 0x02A2(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3D];                                      // 0x02A3(0x003D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.VRLocomotionMagnetComponent");
		return ptr;
	}

};


// Class WKND.VRUtils
// 0x0000 (0x0028 - 0x0028)
class UVRUtils : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.VRUtils");
		return ptr;
	}


	void STATIC_StartQuestShaderPrecompile();
	float STATIC_GetQuestShaderPrecompilePercent();
	ETrackingStatus STATIC_GetMotionControllerTrackingStatus(int PlayerIndex, EControllerHand Hand);
	bool STATIC_GetMotionControllerOrientationAndPosition(class UObject* WorldContextObject, int PlayerIndex, EControllerHand Hand, struct FVector* Position, struct FRotator* Orientation);
	struct FTransform STATIC_GetHeadsetWorldTransform(class UObject* WorldContextObject, int PlayerIndex, bool allowToRevertToPlayerCamera);
	bool STATIC_GetHeadsetWorldOrientationAndPosition(class UObject* WorldContextObject, int PlayerIndex, bool allowToRevertToPlayerCamera, struct FVector* Position, struct FRotator* Orientation);
	bool STATIC_GetHeadsetOrientationAndPosition(class UObject* WorldContextObject, int PlayerIndex, struct FVector* Position, struct FRotator* Orientation);
	struct FTransform STATIC_GetHeadsetLocalTransform(class UObject* WorldContextObject, int PlayerIndex);
	void STATIC_EnableFoveatedRenderMask();
	void STATIC_DisableFoveatedRenderMask();
};


// Class WKND.VRWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UVRWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.VRWidgetInterface");
		return ptr;
	}


	bool Touch(EControllerHand Hand);
	bool StartHover();
	bool EndHover();
};


// Class WKND.WeaponInteractivityInterface
// 0x0000 (0x0028 - 0x0028)
class UWeaponInteractivityInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WeaponInteractivityInterface");
		return ptr;
	}


	bool UsesCuttingFX();
	bool OnUpdateCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& CutEntryLocation, const struct FVector& CutEntryNormal, const struct FVector2D& CollisionUV, const struct FName& BoneName, const struct FVector& CutExitLocation);
	bool OnStartCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FName& BoneName, const struct FVector& CutEntryLocation);
	bool OnEndCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& BladeDirection);
};


// Class WKND.WeaponMotionComponent
// 0x00F0 (0x0380 - 0x0290)
class UWeaponMotionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
	class ULightsaberBladeComponent*                   WeaponBlade;                                              // 0x0298(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              Resistance;                                               // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	float                                              StressOnBlade;                                            // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SpeedOfBlade;                                             // 0x02AC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x02B0(0x0018) MISSED OFFSET
	bool                                               bDeadzoned;                                               // 0x02C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA];                                       // 0x02C9(0x000A) MISSED OFFSET
	bool                                               bIsOverloaded;                                            // 0x02D3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              OffScreenOverloadTolerance;                               // 0x02D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x02D8(0x0004) MISSED OFFSET
	bool                                               bIsCutting;                                               // 0x02DC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bDebugBladeTrace;                                         // 0x02DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x42];                                      // 0x02DE(0x0042) MISSED OFFSET
	bool                                               bEnableResistance;                                        // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	float                                              MinimumSpeed;                                             // 0x0324(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OptimumSpeed;                                             // 0x0328(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OverloadSpeed;                                            // 0x032C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StoppingSpeed;                                            // 0x0330(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LagDistance;                                              // 0x0334(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedSmoothingTime;                                       // 0x0338(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResistanceIncreaseTime;                                   // 0x033C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ResistanceDecreaseTime;                                   // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ResistanceCurve;                                          // 0x0348(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneRadius;                                           // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneDepthThreshold;                                   // 0x0354(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneAngleThreshold;                                   // 0x0358(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneDensityThreshold;                                 // 0x035C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadzoneDistanceThreshold;                                // 0x0360(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeadzoneDebugText;                                       // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEditModifiers;                                           // 0x0365(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0366(0x0002) MISSED OFFSET
	float                                              DepthToAngleRatio;                                        // 0x0368(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinWeightDepthPct;                                        // 0x036C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWeightDepthPct;                                        // 0x0370(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinWeightAngle;                                           // 0x0374(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWeightAngle;                                           // 0x0378(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x037C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WeaponMotionComponent");
		return ptr;
	}


	bool GetIsEnabled();
	void Enable(class ULightsaberBladeComponent* Blade);
	void Disable();
};


// Class WKND.WKNDAnimInstance
// 0x0050 (0x0430 - 0x03E0)
class UWKNDAnimInstance : public UNTAnimInstance
{
public:
	struct FName                                       RightWristBoneName;                                       // 0x03E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightMotionControllerBoneName;                            // 0x03E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftWristBoneName;                                        // 0x03F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeftMotionControllerBoneName;                             // 0x03F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              HeadsetToNeckHorizontalDistance;                          // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeckLength;                                               // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeckToShoulderDistance;                                   // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWristPitch;                                            // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxWristYaw;                                              // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0414(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDAnimInstance");
		return ptr;
	}


	void GetElbows(const struct FTransform& LeftWrist, const struct FTransform& RightWrist, struct FVector* LeftElbow, struct FVector* RightElbow);
};


// Class WKND.WKNDAttackPattern
// 0x0010 (0x0038 - 0x0028)
class UWKNDAttackPattern : public UObject
{
public:
	class AActor*                                      TargetActor;                                              // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UWKNDAttackPatternComponent*                 owningComponent;                                          // 0x0030(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDAttackPattern");
		return ptr;
	}


	void OnAttackPatternStopped();
	void OnAttackPatternStarted();
	void EndAttackPattern();
	void DrawSphere(const struct FVector& Location, float Radius, int Segments, const struct FColor& col, float Duration);
};


// Class WKND.WKNDAttackPatternComponent
// 0x0018 (0x0108 - 0x00F0)
class UWKNDAttackPatternComponent : public UActorComponent
{
public:
	class UWKNDAttackPattern*                          currentAttackPattern;                                     // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAttackPatternStopped;                                   // 0x00F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDAttackPatternComponent");
		return ptr;
	}


	void StopAttackPattern();
	void StartAttackPattern(class UClass* pattern, class AActor* TargetActor);
	bool HasAttackPattern();
};


// Class WKND.WKNDGunComponent
// 0x0000 (0x0290 - 0x0290)
class UWKNDGunComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDGunComponent");
		return ptr;
	}


	void ShootAtVector(const struct FVector& targetVector, TEnumAsByte<EShotSpecifier> specifier);
	void ShootAtActor(class AActor* TargetActor, TEnumAsByte<EShotSpecifier> specifier, TEnumAsByte<EActorSide> side);
	void CancelPendingShots();
};


// Class WKND.WKNDBlasterComponent
// 0x0060 (0x02F0 - 0x0290)
class UWKNDBlasterComponent : public UWKNDGunComponent
{
public:
	class UClass*                                      ProjectileClass;                                          // 0x0290(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    BlasterShotFired;                                         // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      BlasterShotsToCache;                                      // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02A9(0x0003) MISSED OFFSET
	float                                              BlasterShotLife;                                          // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPendingShot>                        pendingShots;                                             // 0x02B0(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x10];                                      // 0x02C0(0x0010) MISSED OFFSET
	class UParticleSystem*                             shotTelegraph;                                            // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              shotDelay;                                                // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02DC(0x0004) MISSED OFFSET
	class UParticleSystem*                             muzzleFlash;                                              // 0x02E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDBlasterComponent");
		return ptr;
	}

};


// Class WKND.WKNDBlasterShot
// 0x0050 (0x0368 - 0x0318)
class AWKNDBlasterShot : public AActor
{
public:
	bool                                               InAudioRange;                                             // 0x0318(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0319(0x0007) MISSED OFFSET
	class AWKNDPlayerPawn*                             PlayerPawn;                                               // 0x0320(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        SphereMesh;                                               // 0x0328(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDEnemyProjectileMovementComponent*       ProjectileMovementComp;                                   // 0x0330(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CurrentPlayerDistance;                                    // 0x0340(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayerDistanceScale;                                      // 0x0344(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LengthScale;                                              // 0x0348(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StretchCap;                                               // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaselineBoltScale;                                        // 0x0350(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x035C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDBlasterShot");
		return ptr;
	}


	void StartStretch();
};


// Class WKND.WKNDCameraComponent
// 0x0020 (0x0850 - 0x0830)
class UWKNDCameraComponent : public UCameraComponent
{
public:
	struct FVector                                     PlayerPosition;                                           // 0x0830(0x000C) (IsPlainOldData)
	bool                                               bForcePosition;                                           // 0x083C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bPositioned;                                              // 0x083D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bResetNextFrame;                                          // 0x083E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x083F(0x0001) MISSED OFFSET
	struct FVector                                     PositionOffset;                                           // 0x0840(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x084C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDCameraComponent");
		return ptr;
	}


	void ToggleForcePosition();
	void SetPlayerPosition(const struct FVector& Position);
	void SetForcePosition(bool bForce);
	void ResetVR();
};


// Class WKND.WKNDCargoDroid
// 0x0020 (0x09E0 - 0x09C0)
class AWKNDCargoDroid : public ASliceableSkeleton
{
public:
	class UAIWorldInteractionComponent*                worldInteraction;                                         // 0x09C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAIInstructionComponent*                     Instructions;                                             // 0x09C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAIPatrolComponent*                          patrol;                                                   // 0x09D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x09D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDCargoDroid");
		return ptr;
	}

};


// Class WKND.WKNDDroidAIController
// 0x0000 (0x0410 - 0x0410)
class AWKNDDroidAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDDroidAIController");
		return ptr;
	}

};


// Class WKND.WKNDCargoDroidAIController
// 0x0000 (0x0410 - 0x0410)
class AWKNDCargoDroidAIController : public AWKNDDroidAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDCargoDroidAIController");
		return ptr;
	}

};


// Class WKND.WKNDCargoDroidPathFollowingComponent
// 0x0000 (0x03B0 - 0x03B0)
class UWKNDCargoDroidPathFollowingComponent : public UPathFollowingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDCargoDroidPathFollowingComponent");
		return ptr;
	}

};


// Class WKND.WKNDCheckpointProgressionOrder
// 0x0028 (0x0058 - 0x0030)
class UWKNDCheckpointProgressionOrder : public UDataAsset
{
public:
	struct FText                                       EpsisodeName;                                             // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TArray<class UWKNDProgressionCheckpointData*>      CheckpointOrder;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDCheckpointProgressionOrder");
		return ptr;
	}

};


// Class WKND.WKNDCheckpointTeleporter
// 0x00D0 (0x03E8 - 0x0318)
class AWKNDCheckpointTeleporter : public AActor
{
public:
	TArray<struct FCheckpoint>                         Checkpoints;                                              // 0x0318(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	struct FName                                       GameLevelName;                                            // 0x0328(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPrintDebug;                                              // 0x0330(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0331(0x0007) MISSED OFFSET
	class UWKNDProgressionCheckpointData*              OverrideCheckpoint;                                       // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              LevelLoadTimeOut;                                         // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              TextureStreamingTimeOut;                                  // 0x0344(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              LevelSetupTimeOut;                                        // 0x0348(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                TextureStreamingThreshold;                                // 0x034C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              TextureStreamingDelay;                                    // 0x0350(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class UWKNDCheckpointProgressionOrder*             Episode1_CheckpointOrder;                                 // 0x0358(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCheckpointTeleportFinished;                             // 0x0360(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x78];                                      // 0x0370(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDCheckpointTeleporter");
		return ptr;
	}


	void SetTeleporterState(ECheckpointTeleporterState NewState);
	void PerformTeleport();
	void OnTeleportDone();
	void OnCheckpointLevelSetupDone(class ALevelScriptActor* LevelScriptActor);
	bool IsValidCheckpoint(class UWKNDProgressionCheckpointData* CheckpointData);
	void InvokeCheckpointTeleport(class UWKNDProgressionCheckpointData* CheckpointName, class ATargetPoint* PlayerTargetPointOverride, bool bShowLoadingScreen);
	void GetTargetPointFromCheckpoint(class UWKNDProgressionCheckpointData* Checkpoint, bool* bFound, class ATargetPoint** PlayerTargetPoint, class ATargetPoint** ZoeTargetPoint);
	void GetNextDebugCheckpoint(int CurrentIndex, bool bIncrementIndex, int* FoundIndex, struct FCheckpoint* FoundCheckpoint);
	void GetNextChapterCheckpoint(int CurrentIndex, bool bIncrementIndex, int* FoundIndex, struct FCheckpoint* FoundCheckpoint);
	class UWKNDProgressionCheckpointData* GetCheckpointByTargetPoint(class ATargetPoint* TargetPoint);
	class UWKNDProgressionCheckpointData* GetCheckpointByName(const struct FString& NameString);
	void DoCheckpointTeleport(class UWKNDProgressionCheckpointData* DesiredCheckpoint);
};


// Class WKND.WKNDComboDetectionComponent
// 0x0220 (0x0310 - 0x00F0)
class UWKNDComboDetectionComponent : public UActorComponent
{
public:
	float                                              ComboStartTime;                                           // 0x00F0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET
	TArray<struct FStrikeFrameData>                    BladeFrameHistory;                                        // 0x00F8(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              MaxHistoryDuration;                                       // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                FramesSinceLastValidStrike;                               // 0x010C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnInitialStrike;                                         // 0x0110(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayerCreateMode;                                        // 0x0111(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0112(0x0002) MISSED OFFSET
	float                                              ComboResetTime;                                           // 0x0114(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastStrikeStartTime;                                      // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StrikesInCombo;                                           // 0x011C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxComboLength;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ARPOCPickup_Lightsaber>       HeldLightsaber;                                           // 0x0124(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumStrikeVelocity;                                    // 0x012C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumStrikeDuration;                                    // 0x0130(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumStrikeDistance;                                    // 0x0134(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinFollowUpAngleChange;                                   // 0x0138(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StrikeAngleTolerance_WorldSpace;                          // 0x013C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StrikeAngleTolerance_LAP;                                 // 0x0140(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StabbingWindowRadius;                                     // 0x0144(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetOpponent;                                           // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0150(0x0008) MISSED OFFSET
	TArray<struct FCompleteStrikeData>                 StrikeHistory;                                            // 0x0158(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FCompleteStrikeData>                 EnemyHits;                                                // 0x0168(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<struct FColor>                              StrikeColours;                                            // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0188(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    StrikeFinished;                                           // 0x0190(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    StrikeCountReset;                                         // 0x01A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0x160];                                     // 0x01B0(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDComboDetectionComponent");
		return ptr;
	}


	bool ReportFinishedStrike();
	void GetStrikingProperties(struct FCompleteStrikeData* CurrentStrike);
	int GetCurrentStrikeId();
	void ExternalComboReset();
	EComboAngleCheck STATIC_CompareStrikes(const struct FVector2D& StrikeOne, const struct FVector2D& StrikeTwo, float AngleDifferenceReqd);
};


// Class WKND.WKNDComboTutor
// 0x00B8 (0x03D0 - 0x0318)
class AWKNDComboTutor : public AActor
{
public:
	struct FScriptMulticastDelegate                    TutorialVisibilityEvent;                                  // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TutorialGestureEvent;                                     // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TutorialVisualResetEvent;                                 // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    TutorialCompleteEvent;                                    // 0x0348(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AWKNDPlayerPawn*                             Student;                                                  // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	class UNTComboDetectionComponent*                  StudentComboDetector;                                     // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ETutorialStage                                     CurrentTutorialStage;                                     // 0x0368(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0370(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0378(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDComboTutor");
		return ptr;
	}


	void VisualReset();
	void UpdateVisibilityStatus();
	void UpdatePoseProgress();
	void SetNewTutorial(class UWKNDTutorialData* NewTutorial);
	void SetNewStudent(class AWKNDPlayerPawn* NewStudent);
	void SetInTutorialArea(bool bInArea);
	void ResetPostPose();
	void ResetPostCombo();
	void ResetCurrentTutorial(bool bResetStage);
	void ProgressStrike();
	void PreviewStrike(int UpcomingStrikeIndex);
	void PreStrikePauseComplete();
	void PostStrikePauseStart();
	void PostStrikeCheck();
	void NotifyComboStrikeStarted_Pose(class UWKNDPlayerComboData* Combo, class UWKNDPlayerStrikeData* Strike, int StrikeIndex, int MaxStrikeIndex, const struct FVector& Location);
	void NotifyComboStrikeStarted_Combo(class UWKNDPlayerComboData* Combo, class UWKNDPlayerStrikeData* Strike, int StrikeIndex, int MaxStrikeIndex, const struct FVector& Location);
	void NotifyComboStrikeEnded_Combo(class UWKNDPlayerComboData* Combo, class UWKNDPlayerStrikeData* Strike, int StrikeIndex, int MaxStrikeIndex, const struct FVector& Location, bool bValid);
	void NotifyComboPoseLost_Pose(class UWKNDPlayerPoseData* Pose);
	void NotifyComboPoseFound_Pose(class UWKNDPlayerPoseData* Pose);
	void NotifyComboAttemptStarted_Pose(class UWKNDPlayerPoseData* Pose);
	void NotifyComboAttemptStarted_Combo(class UWKNDPlayerPoseData* Pose);
	void NotifyComboAttemptEnded_Pose(EComboEndType EndType, class UWKNDPlayerComboData* Combo);
	void NotifyComboAttemptEnded_Combo(EComboEndType EndType, class UWKNDPlayerComboData* Combo);
	void EndPoseTracking(class UWKNDPlayerPoseData* Pose);
	void CompletedPoseForTutorial();
	void BeginPoseTracking(class UWKNDPlayerPoseData* Pose);
};


// Class WKND.WKNDTutorialData
// 0x0000 (0x0030 - 0x0030)
class UWKNDTutorialData : public UDataAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDTutorialData");
		return ptr;
	}

};


// Class WKND.WKNDComboTutorialData
// 0x0028 (0x0058 - 0x0030)
class UWKNDComboTutorialData : public UWKNDTutorialData
{
public:
	class UAnimSequence*                               ComboSequence;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWKNDPlayerComboData*                        Combo;                                                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoseFinishTime;                                           // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrikeBracketPauseTime;                                   // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      StrikeFinishTimeStamps;                                   // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDComboTutorialData");
		return ptr;
	}

};


// Class WKND.WKNDControllerTutorComponent
// 0x0108 (0x01F8 - 0x00F0)
class UWKNDControllerTutorComponent : public UActorComponent
{
public:
	TMap<TEnumAsByte<ETutorialButton>, struct FName>   ButtonTags;                                               // 0x00F0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<TEnumAsByte<ETutorialButton>, class UStaticMeshComponent*> Buttons;                                                  // 0x0140(0x0050) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       HighlightName;                                            // 0x0190(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       OpacityName;                                              // 0x0198(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   OpacityRange;                                             // 0x01A0(0x0008) (Edit, DisableEditOnInstance, IsPlainOldData)
	bool                                               bActive;                                                  // 0x01A8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveTransitionComplete;                                // 0x01A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01AA(0x0002) MISSED OFFSET
	float                                              OpacityLevel;                                             // 0x01AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ActivationDuration;                                       // 0x01B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	TArray<uint32_t>                                   CurrentTutorials;                                         // 0x01B8(0x0010) (ZeroConstructor)
	class USceneComponent*                             CurrentTutorialArrowTgt;                                  // 0x01C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01D0(0x0010) MISSED OFFSET
	class UStaticMeshComponent*                        TutorialArrow;                                            // 0x01E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StickArrow_Left;                                          // 0x01E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        StickArrow_Right;                                         // 0x01F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDControllerTutorComponent");
		return ptr;
	}


	void StartNewTutorial_Component(int NewTutorial, class USceneComponent* TgtComponent, float ArrowFadeWhenCloserThanDist, float ArrowTotalFadeDist);
	void StartNewTutorial(int NewTutorial, class AActor* TgtActor, float ArrowFadeWhenCloserThanDist, float ArrowTotalFadeDist);
	void SetTutorialVisible(bool bNewVisible);
	class UStaticMeshComponent* GetButtonMesh(TEnumAsByte<ETutorialButton> FetchButton);
	void CompleteTutorial(int CompletedTutorial);
};


// Class WKND.WKNDDamageComponent
// 0x0018 (0x0108 - 0x00F0)
class UWKNDDamageComponent : public UActorComponent
{
public:
	struct FWKNDAttackDamage                           MeleeDamage;                                              // 0x00F0(0x000C) (Edit, IsPlainOldData)
	struct FWKNDAttackDamage                           RangedDamage;                                             // 0x00FC(0x000C) (Edit, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDDamageComponent");
		return ptr;
	}


	int GetDamageAmount(EDamageType DamageType, EDamageStrength DamageStrength);
};


// Class WKND.WKNDDialogueManager
// 0x00F8 (0x0410 - 0x0318)
class AWKNDDialogueManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	TArray<struct FDialogueRequest>                    QueuedRequests;                                           // 0x0320(0x0010) (ZeroConstructor, Transient)
	TArray<struct FDialogueRequest>                    PlayingRequests;                                          // 0x0330(0x0010) (ZeroConstructor, Transient)
	struct FNagSequence                                CurrentNagSequence;                                       // 0x0340(0x0038) (Transient)
	struct FNagInfo                                    CurrentNag;                                               // 0x0378(0x0058)
	unsigned char                                      UnknownData01[0x18];                                      // 0x03D0(0x0018) MISSED OFFSET
	struct FNTPlayingEvent                             CurrentNagEvent;                                          // 0x03E8(0x0010) (Transient)
	class AActor*                                      CurrentNagger;                                            // 0x03F8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FSpeakingActorInfo>                  SpeakingActorsTable;                                      // 0x0400(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDDialogueManager");
		return ptr;
	}


	bool WouldPlayNow(int Priority, bool AllowConcurrent);
	void WaitForNewNagInCurrentSequence(bool ProtectAgainstMultipleCalls, const struct FLatentActionInfo& LatentInfo);
	void WaitForDialogueToStart(const struct FNTPlayingEvent& PlayingEvent, bool ProtectAgainstMultipleCalls, const struct FLatentActionInfo& LatentInfo);
	void WaitForDialogueEvent(const struct FNTPlayingEvent& PlayingEvent, bool ProtectAgainstMultipleCalls, const struct FLatentActionInfo& LatentInfo);
	void WaitForCurrentNagSequence(bool ProtectAgainstMultipleCalls, const struct FLatentActionInfo& LatentInfo);
	void UpdateSpeakingActorTable();
	void StopNagDialogue(bool StopCurrentNag);
	void StopDialogue(int StopPriority);
	void STATIC_StaticDialogueDebug(const struct FString& Message);
	struct FNTPlayingEvent StartNagDialogue(const struct FNagSequence& NagSequence, class AActor* DefaultNagActorOverride);
	void SetDialogueSocket(class AActor* Actor, const struct FName& SpeakingBone);
	struct FDialogueRequest MakeDialogueRequest(class UAkAudioEvent* AkEvent, class AActor* Actor, int Priority, float PostPlayDelay, bool AllowConcurrent, bool Queueable, float SilentCueTime);
	bool IsNagging();
	void GetSpeakingActor(const struct FName& RoleName, class AActor** Actor, struct FName* SpeakingBone);
	struct FNagInfo GetCurrentNag();
	void DialogueDebug(const struct FString& Message);
	void AddSpeakingActorInfo(const struct FName& RoleName, const struct FName& SpeakingBone, class AActor* CurrentActor);
	struct FNTPlayingEvent AddDialogueRequestStruct(const struct FName& SpeakingBone, struct FDialogueRequest* DialogueRequest);
	struct FNTPlayingEvent AddDialogueRequest(class UAkAudioEvent* AkEvent, class AActor* Actor, int Priority, float PostPlayDelay, bool AllowConcurrent, bool Queueable, const struct FName& SpeakingBone, float SilentCueTime);
};


// Class WKND.WKNDDroidInstrumentFoleyComponent
// 0x0018 (0x0108 - 0x00F0)
class UWKNDDroidInstrumentFoleyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	TArray<struct FInstrument>                         instruments;                                              // 0x00F8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDDroidInstrumentFoleyComponent");
		return ptr;
	}


	float GetInstrumentSpeed(const struct FName& instrumentName);
};


// Class WKND.WKNDEnemyCombatData
// 0x0030 (0x0060 - 0x0030)
class UWKNDEnemyCombatData : public UDataAsset
{
public:
	float                                              HitPoints;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FComboOptions>                       ComboOptions;                                             // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FEnemyOverrideMaterial>              MaterialOverrides;                                        // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bHasLightsaber;                                           // 0x0058(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDEnemyCombatData");
		return ptr;
	}

};


// Class WKND.WKNDEnemyProjectileMovementComponent
// 0x0100 (0x02A0 - 0x01A0)
class UWKNDEnemyProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	TWeakObjectPtr<class AActor>                       TargetOpponent;                                           // 0x01A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       SourceActor;                                              // 0x01A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x01B0(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bAllowDeflect;                                            // 0x01BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bCompletedLaunch;                                         // 0x01BD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bPassedTarget;                                            // 0x01BE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x01BF(0x0001) MISSED OFFSET
	float                                              ParryTolerance_Shooter;                                   // 0x01C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParryTolerance_General;                                   // 0x01C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ParryTolerance_FreeDeflect;                               // 0x01C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DesiredParryCollisionDistance;                            // 0x01CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeflectionParryVelocity;                                  // 0x01D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeflectionSafeZone;                                       // 0x01D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimVarianceRange;                                         // 0x01D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialInvulnerableTime;                                  // 0x01DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       CollisionProfileName;                                     // 0x01E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DeflectionTargetTag;                                      // 0x01E8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PreviousTransform;                                        // 0x01F0(0x0030) (IsPlainOldData)
	bool                                               bIsCachedInWeapon;                                        // 0x0220(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsInUseByCache;                                          // 0x0221(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0222(0x0002) MISSED OFFSET
	float                                              TimeOfActivation;                                         // 0x0224(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0228(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x022C(0x0004) MISSED OFFSET
	struct FTimerHandle                                TimerHandle_LifeSpanExpired;                              // 0x0230(0x0008)
	bool                                               bLerpSpeedOnTargetApproach;                               // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	struct FVector2D                                   SpeedAdjust_Distance;                                     // 0x023C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   SpeedAdjust_Speed;                                        // 0x0244(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x024C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ProjectileDeflected;                                      // 0x0250(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ProjectileCollidingHit;                                   // 0x0260(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ProjectilePassedTarget;                                   // 0x0270(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ProjectileInit;                                           // 0x0280(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ProjectileReset;                                          // 0x0290(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDEnemyProjectileMovementComponent");
		return ptr;
	}


	bool TestDeflectionAgainstDesiredDirection(const struct FVector& DeflectionVelocity, const struct FVector& DesiredDirection, bool bFlatAngleTest, float AngleTolerance, float* OutAngle);
	void SetTargetOpponent(class AActor* NewTargetOpponent, TEnumAsByte<EActorSide> side);
	void SetSpeedAdjustProperties(bool bNewActive, const struct FVector2D& NewAdjustDistance, const struct FVector2D& NewAdjustSpeed);
	bool SelectNewTargetLocation(TEnumAsByte<EActorSide> side);
	void ResolvePasses(const struct FTransform& CurrentTransform);
	void ResolveHits(const struct FTransform& PreviousTransform, const struct FTransform& CurrentTransform);
	void PerformSpeedAdjust();
	struct FVector GetTargetLocationFromActor(class AActor* TargetActor);
	bool DeflectProjectile(const struct FHitResult& HitResult, class AWKNDPlayerPawn* DeflectingPlayerPawn);
};


// Class WKND.WKNDEnemyRoutePlanner
// 0x0138 (0x0160 - 0x0028)
class UWKNDEnemyRoutePlanner : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FWKNDEnemyRoutePlannerConfig                PlannerConfig;                                            // 0x0030(0x00E0) (Transient)
	struct FWKNDEnemyRoutePlannerState                 PlannerState;                                             // 0x0110(0x002C) (Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	TArray<struct FKinematicData>                      KinematicData;                                            // 0x0140(0x0010) (ZeroConstructor, Transient)
	TArray<struct FWKNDEnemyRoutePlanner_PathSegmentData> Path;                                                     // 0x0150(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDEnemyRoutePlanner");
		return ptr;
	}

};


// Class WKND.WKNDFloatingMovementComponent
// 0x0050 (0x01E0 - 0x0190)
class UWKNDFloatingMovementComponent : public UFloatingPawnMovement
{
public:
	float                                              WalkSpeed;                                                // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkAcceleration;                                         // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RunAcceleration;                                          // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintSpeed;                                              // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintAcceleration;                                       // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningSpeed;                                             // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x01AC(0x0014) MISSED OFFSET
	struct FVector                                     distanceKeepingEpicentre;                                 // 0x01C0(0x000C) (Transient, IsPlainOldData)
	float                                              distanceKeepingRange;                                     // 0x01CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               distanceKeepingEnabled;                                   // 0x01D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01D1(0x0003) MISSED OFFSET
	float                                              distanceKeepingNudge;                                     // 0x01D4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              nudgeDirection;                                           // 0x01D8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               skipCustomUpdate;                                         // 0x01DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01DD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDFloatingMovementComponent");
		return ptr;
	}


	void StopDistanceKeeping();
	void StartDistanceKeeping(const struct FVector& Location, float Distance);
	void PushMovementType(EBuddyAIMovementType MovementType);
	void PopMovementType();
	struct FVector GetPointAtRange(const struct FVector& TargetLocation, const struct FVector& centerPoint, float Distance);
};


// Class WKND.WKNDFoleySoundManager
// 0x2018 (0x2108 - 0x00F0)
class UWKNDFoleySoundManager : public UActorComponent
{
public:
	float                                              ClimbingSpeedSoundStartVal;                               // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingSpeedSoundStopVal;                                // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbSpeedAveragingTime;                                  // 0x00F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     FootStepCollisionChannel;                                 // 0x00FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00FD(0x0003) MISSED OFFSET
	float                                              ContactMinimumAudibleStrength;                            // 0x0100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ContactMaximumEffectiveStrength;                          // 0x0104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactSoundMaxRate;                                       // 0x0108(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x010C(0x0004) MISSED OFFSET
	struct FNTClimbingSoundFoleyInfo                   ClimbingInfo[0x2];                                        // 0x0110(0x0FD8)
	TArray<struct FImpactRecord>                       ImpactRecords;                                            // 0x20C0(0x0010) (ZeroConstructor)
	TArray<struct FComponentImpactRecord>              ComponentImpactRecords;                                   // 0x20D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x28];                                      // 0x20E0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDFoleySoundManager");
		return ptr;
	}


	void UpdatePlayerClimbing(float DeltaTime, EWKNDHands Handedness, float Speed, float SmoothedSpeed, const struct FNTPlayingEvent& PlayingSound);
	void StartClimbingSoundEvent(EWKNDHands Handedness, class UAkAudioEvent* AkEvent);
	void SetVolume(ESoundChannel Channel, float Volume);
	void OnStopAll();
	void OnSliceableCollision(class AActor* Actor, class AActor* OtherActor, const struct FVector& Location, float RawImpactStrength, float NormalizedImpactStrength, class UAkAudioEvent* ImpactSound, const struct FHitResult& Hit, float EstimatedVolume);
	void OnReturnToMainMenu();
	void OnQuestHeadPhoneChange(bool PluggedIn);
	void OnPlayerFootStep(class AWKNDPlayerPawn* Player, bool GroundHit, const struct FVector& Location, class UAkAudioEvent* Footstep, TEnumAsByte<EPhysicalSurface> SurfaceType, EMovementContext MovementContext);
	void OnPlayerClimbing(float DeltaTime, EWKNDHands Handedness, float Speed, float SmoothedSpeed);
	void OnPauseStart();
	void OnPauseEnd();
	void OnLevelStartFadeUp(float FadeTime);
	void OnHandHit(class URPOCHandEnvironmentInteractionComponent* HandComponent, EPlayerHandImpact ImpactType, const struct FVector& Location, const struct FVector& ImpactVel, float NormalisedImpactSpeed, TEnumAsByte<EPhysicalSurface> SurfaceType, class AActor* HeldObject, class UAkAudioEvent* AkEvent);
	void OnFootStep(bool GroundHit, const struct FVector& Location, class UAkAudioEvent* Footstep, TEnumAsByte<EPhysicalSurface> SurfaceType, EMovementContext MovementContext);
	void OnCollision(class AActor* Actor, class AActor* OtherActor, const struct FVector& Location, float RawImpactStrength, float NormalizedImpactStrength, class UAkAudioEvent* ImpactSound, const struct FHitResult& Hit, bool IsMeshPart);
	void MenuSound_OnVolumeChange(const struct FVector& ComponentLocation, bool ValueIncreased, ESoundChannel Channel);
	void MenuSound_OnTabChange(const struct FVector& ComponentLocation);
	void MenuSound_OnScrollContainerSelectionChange(const struct FVector& ComponentLocation, bool bIssuedFromConsole);
	void MenuSound_OnRadioButtonSelectionChange(const struct FVector& ComponentLocation);
	void MenuSound_OnConsoleButtonPress(bool bPressed, const struct FVector& ComponentLocation);
	void MenuSound_OnConsoleBackButtonPress(const struct FVector& ComponentLocation);
	void MenuSound_OnButtonPress(bool bPressed, const struct FVector& ComponentLocation);
	void MenuSound_OnBackButtonPress(const struct FVector& ComponentLocation);
	void GetParamsForFootStep(class AActor* Actor, struct FVector* Location, TEnumAsByte<EPhysicalSurface>* SurfaceType, EQueryResult* OutResult);
	struct FVector GetLastButtonPressLocation();
	void DoFootStepSkelMesh(class USkeletalMeshComponent* Skelmesh, const struct FName& BoneName, class UAkAudioEvent* Footstep, EMovementContext MovementContext);
	void DoFootStepPlayer(class AWKNDPlayerPawn* Player, bool UseNavPos, const struct FVector& NavPosition, class UAkAudioEvent* Footstep);
	void DebugMessage(EWKNDHands Handedness, const struct FString& Message, float HeightOffset);
	void CallMeshPartCollision(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, const struct FVector& Impulse, const struct FHitResult& HitResult, class UAkAudioEvent* ImpactSound);
	void STATIC_AudioDebugToLog(const struct FString& Prefix, const struct FString& Message);
};


// Class WKND.WKNDGameInstance
// 0x00E0 (0x01D0 - 0x00F0)
class UWKNDGameInstance : public UGameInstance
{
public:
	class UTexture2D*                                  LoadingScreenTexture;                                     // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  LoadingScreenTextureB;                                    // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWKNDCheckpointProgressionOrder*             EP1_CheckpointProgressionOrder;                           // 0x0100(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLocomotionSettings                         LocomotionSettings;                                       // 0x0108(0x0005)
	struct FComfortSettings                            ComfortSettings;                                          // 0x010D(0x0008)
	struct FAccessibilitySettings                      AccessibilitySettings;                                    // 0x0115(0x0007)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	struct FAudioVideoSettings                         AudioVideoSettings;                                       // 0x0120(0x0058)
	class UWKNDSaveGame*                               SaveGameInstance;                                         // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	class AWKNDCheckpointTeleporter*                   CheckpointTeleporter;                                     // 0x0180(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAutomatedPerformanceCaptureAnchor*          AutomatedPerformanceCaptureAnchor;                        // 0x0188(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0190(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WKND.WKNDGameInstance.PlayerTargetPointOverride
	bool                                               bDojoWaveRequested;                                       // 0x01B8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01B9(0x0007) MISSED OFFSET
	struct FName                                       RequestedDojoWaveName;                                    // 0x01C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWKNDWorldsManager*                          WorldsManager;                                            // 0x01C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDGameInstance");
		return ptr;
	}


	EVRModeEnum ToggleVRMode();
	EVisualCombatAssistEnum ToggleVisualCombatAssist();
	ESubtitlesEnum ToggleSubtitles();
	E360CombatEnum Toggle360CombatEnabled();
	void SetVRMode(EVRModeEnum VRModeEnum);
	float SetVolumeSetting(ESoundChannel Channel, float Volume);
	void SetVisualCombatAssist(EVisualCombatAssistEnum VCAEnum);
	void SetVignetteDuringMotion(bool vignette);
	void SetupOculusLoadingScreen();
	void SetTeleportTurn(bool teleturn);
	void SetSwapThrottleHands(bool Swap);
	void SetSubtitles(ESubtitlesEnum SubtitlesEnum);
	void SetSnapTurnsInstant(EVRInstantSnapTurns Snap);
	void SetSlowFalling(bool bSetSlowFalling);
	void SetSkipClimb(bool bSetSkipClimb);
	void SetSafeClimbing(bool bSetSafeClimbing);
	void SetRequestedDojoWave(const struct FName& RequestedWave);
	void SetQuestShaderPrecompileComplete();
	void SetPlayerTargetPointOverride();
	void SetLocomotionMode(ELocomotionModeEnum LocomotionModeEnum);
	void SetLanguageIndex(unsigned char LanguageIndex);
	void SetHasSeenComfortPrompt(bool bSetSeenState);
	void SetGraphicsSetting(EGraphicsSetting SelectedGraphicsSetting);
	void SetFadeOutDuringAcceleration(bool fade);
	void SetDamageIndicatorSetting(EComfortDamageIndicatorEnum ComfortDamageIndicatorEnum);
	void SetComfortLevel(EComfortLevelEnum ComfortLevelEnum);
	void SetCameraShakes(EVRCameraShakeEnum CameraShakeOption);
	void Set360CombatEnabled(E360CombatEnum C360Enum);
	bool ResetProgressionCheckpointAndSave();
	bool RegisterUnlockedExtendedDojoWaveAndSave(const struct FName& WaveName);
	bool RegisterUnlockedExtendedDojoWave(const struct FName& WaveName);
	bool RegisterProgressionCheckpointAndSave(class UWKNDProgressionCheckpointData* CheckpointObject);
	bool RegisterProgressionCheckpoint(class UWKNDProgressionCheckpointData* CheckpointObject);
	bool RegisterCheckpointTeleporter(class AWKNDCheckpointTeleporter* NewCheckpointTeleporter);
	void STATIC_LowLevelLog(const struct FString& TextToLog);
	void LogPerformanceLabel(const struct FString& Label, bool bIsSceneDivider);
	bool LoadNewLevel(const struct FName& LevelName, bool bShowLoadingScreen);
	bool IsQuestShaderPrecompileRequired();
	bool IsCheckpointUnlocked(class UWKNDProgressionCheckpointData* CheckpointObject, class UWKNDCheckpointProgressionOrder* UsedOrderData);
	bool HasSeenComfortPrompt();
	class UWKNDWorldsManager* GetWorldsManager();
	EVRModeEnum GetVRMode();
	bool GetVolumeSetting(ESoundChannel Channel, float* Volume);
	EVisualCombatAssistEnum GetVisualCombatAssist();
	bool GetVignetteDuringMotion();
	bool GetTeleportTurn();
	bool GetSwapThrottleHands();
	ESubtitlesEnum GetSubtitles();
	EVRInstantSnapTurns GetSnapTurnsInstant();
	bool GetSlowFalling();
	bool GetSkipClimb();
	class UWKNDSaveGame* GetSaveGame();
	bool GetSavedProgressionCheckpoint(class UWKNDProgressionCheckpointData** CheckpointObject);
	bool GetSafeClimbing();
	void GetRequestedDojoWave(bool* bIsWaveRequested, struct FName* RequestedWave);
	void GetPlayerTargetPointOverride();
	ELocomotionModeEnum GetLocomotionMode();
	bool GetLastUnlockedExtendedDojoWave(struct FName* WaveName);
	unsigned char GetLanguageIndex();
	bool GetHighestUnlockedProgressionCheckpoint(class UWKNDProgressionCheckpointData** CheckpointObject);
	EGraphicsSetting GetGraphicsSetting();
	bool GetFadeOutDuringAcceleration();
	EComfortDamageIndicatorEnum GetDamageIndicatorSetting();
	EComfortLevelEnum GetComfortLevel();
	bool GetCheckpointTeleporter(class AWKNDCheckpointTeleporter** RegisteredCheckpointTeleporter);
	EVRCameraShakeEnum GetCameraShakes();
	E360CombatEnum Get360CombatEnabled();
	bool CompareProgressionCheckpoint(class UWKNDProgressionCheckpointData* CheckpointObjectA, class UWKNDProgressionCheckpointData* CheckpointObjectB, class UWKNDCheckpointProgressionOrder* UsedOrderData);
	void ClearRequestedDojoWave();
	void ClearOculusLoadingScreen();
	bool AttemptSaveGameSettings();
	bool AttemptSaveGame();
	bool AttemptLoadGame();
};


// Class WKND.WKNDGameMode
// 0x0080 (0x0438 - 0x03B8)
class AWKNDGameMode : public AGameModeBase
{
public:
	class UNTHapticManagerComponent*                   HapticsManager;                                           // 0x03B8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class URPOCKeyMapManagerComponent*                 KeyMapManager;                                            // 0x03C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ARPOCSaberManager*                           SaberManager;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      AICoordinatorTemplate;                                    // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     FilePath;                                                 // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BuildVersion;                                             // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class AWKNDPauseContainer*                         PauseContainer;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPlayerScreenBlackOutComponent*              BlackoutComponent;                                        // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ShippingBuild;                                            // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0409(0x0007) MISSED OFFSET
	TArray<struct FAnimTypeDropdown>                   HandPoseWithAnimation;                                    // 0x0410(0x0010) (Edit, ZeroConstructor)
	class ARICEAICoordinator*                          AICoordinator;                                            // 0x0420(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AWKNDDialogueManager*                        DialogueManager;                                          // 0x0428(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class AWKNDPauseManager*                           PauseManager;                                             // 0x0430(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDGameMode");
		return ptr;
	}


	void TogglePause();
	void ToggleHaptics();
	bool STATIC_IsGameWorldReady();
	bool IsAnAnimatingPose(const struct FAnimTypeDropdown& PoseName);
	void InitDialogueManagerWithSpeakingActors(class AWKNDDialogueManager* DM);
	class ARPOCSaberManager* GetSaberManager();
	class AWKNDPauseManager* GetPauseManager();
	class UNTHapticManagerComponent* GetHapticsManager();
	class UWKNDFoleySoundManager* GetFoleySoundManager();
	class AWKNDDialogueManager* GetDialogueManager();
	class ARICEAICoordinator* GetCoordinator();
	void EnableConsoleMenu(bool Enable);
	void DestroyPauseMenu();
};


// Class WKND.WKNDGameState
// 0x0010 (0x0368 - 0x0358)
class AWKNDGameState : public AGameStateBase
{
public:
	class APawn*                                       ZoeyPawn;                                                 // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  ZoeyCharacter;                                            // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDGameState");
		return ptr;
	}

};


// Class WKND.WKNDGrabbableComponent
// 0x01C0 (0x02B0 - 0x00F0)
class UWKNDGrabbableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	bool                                               bHandlePhysicsEnabledState;                               // 0x00F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRegisterInteraction;                                 // 0x00F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00FA(0x0006) MISSED OFFSET
	class UXLABItemSolver*                             ItemSolver;                                               // 0x0100(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UPrimitiveComponent*>                 HitcheckCollisionComponents;                              // 0x0108(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	bool                                               bShouldAttachToMesh;                                      // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0119(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               HeldImpactAudioEvent;                                     // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               StandardImpactAudioEvent;                                 // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x58];                                      // 0x0130(0x0058) MISSED OFFSET
	struct FScriptMulticastDelegate                    Grabbed;                                                  // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Dropped;                                                  // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class URPOCGrabLocatorComponent*>           GrabLocators;                                             // 0x01A8(0x0010) (ExportObject, ZeroConstructor, Transient)
	class URPOCGrabLocatorComponent*                   GrabbedLocator;                                           // 0x01B8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         grabbablePrimitive;                                       // 0x01C0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Droppable;                                                // 0x01C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               looseCarry;                                               // 0x01C9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x01CA(0x0006) MISSED OFFSET
	struct FAnimTypeDropdown                           AnimType;                                                 // 0x01D0(0x0010) (BlueprintVisible, BlueprintReadOnly)
	class AActor*                                      holdingActor;                                             // 0x01E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UWKNDGrabberComponent*                       holdingGrabber;                                           // 0x01E8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               DisabledBy;                                               // 0x01F0(0x0010) (ZeroConstructor, Transient)
	TScriptInterface<class URPOCCanGrabInterface>      GrabbingHand;                                             // 0x0200(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x9];                                       // 0x0210(0x0009) MISSED OFFSET
	bool                                               bIsCarried;                                               // 0x0219(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               ApplyImpulseWhenDropped;                                  // 0x021A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x021B(0x0001) MISSED OFFSET
	float                                              ThrowingImpulseMultiplier;                                // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrowingAngularImpulseMultiplier;                         // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAttached;                                               // 0x0224(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsBeingPickedUp;                                         // 0x0225(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0226(0x0002) MISSED OFFSET
	float                                              TimeHeld;                                                 // 0x0228(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	EControllerHand                                    CurrentHand;                                              // 0x022C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	class AActor*                                      Instigator;                                               // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              VelocityFrameBufferTime;                                  // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x74];                                      // 0x023C(0x0074) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDGrabbableComponent");
		return ptr;
	}


	void SetPrimitiveComponent(class UPrimitiveComponent* Prim);
	void SetLooseCarry(bool shouldBeLoose);
	void SetGrabbablePrimitive(class UPrimitiveComponent* inGrabbablePrimitive);
	void SetDroppable(bool CanDrop);
	void SetDisabled(bool Disabled, const struct FName& DisabledBy);
	void SetCurrentHandPosition(EHandPosition nextHandPosition);
	bool STATIC_SetActorDroppable(class AActor* Actor, bool CanDrop);
	void RemoveGrabLocators(TArray<class URPOCGrabLocatorComponent*>* toRemove);
	bool Release(bool preventImpulse);
	void RegisterGrabLocator(class URPOCGrabLocatorComponent* GrabLocator);
	void OnOwnerCollision(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	bool IsLooseCarry();
	bool IsHeld();
	bool IsDroppable();
	bool STATIC_IsActorDroppable(class AActor* Actor);
	void InitReposition(const struct FTransform& HandTransform, float RepositioningTime, bool bKeepRelativeRotation);
	class URPOCGrabLocatorComponent* Grab(class UWKNDGrabberComponent* grabber, const struct FPickupData& PickupData, class URPOCGrabLocatorComponent* Locator);
	struct FVector GetRegressedVelocity();
	struct FVector GetRegressedAngularVelocity();
	class UPrimitiveComponent* GetPrimitiveComponent(class URPOCGrabLocatorComponent* Locator);
	struct FVector GetLatestVelocityFromBuffer();
	class AActor* GetHoldingActor();
	TArray<class URPOCGrabLocatorComponent*> GetGrabLocatorArray();
	class URPOCGrabLocatorComponent* GetGrabLocator(const struct FVector& GrabShapeLocation, EGrabHand Hand, bool Main, bool RangedOnly, bool ignoreMaxRange);
	class URPOCGrabLocatorComponent* GetGrabbedLocator();
	struct FName GetAnimType();
	void EnablePhysicsSimulation(bool Enable);
	bool CanBePickedUp(const struct FVector& GrabSphereLoc, struct FVector* outGrabDirection, float* outDistance);
	bool ApplyImpulseOnRelease();
	void AddGrabLocators(TArray<class URPOCGrabLocatorComponent*>* toAdd);
};


// Class WKND.WKNDGrabberComponentWithAttach
// 0x0000 (0x0310 - 0x0310)
class UWKNDGrabberComponentWithAttach : public UWKNDGrabberComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDGrabberComponentWithAttach");
		return ptr;
	}

};


// Class WKND.WKNDGrabberComponentWithPhysics
// 0x0020 (0x0330 - 0x0310)
class UWKNDGrabberComponentWithPhysics : public UWKNDGrabberComponent
{
public:
	class UPhysicsHandleComponent*                     PhysicsHandle;                                            // 0x0310(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OriginalMass;                                             // 0x0318(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HoldingMaxAngularStrain;                                  // 0x031C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StrainTimeLimit;                                          // 0x0320(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoDropOnStrainLimit;                                    // 0x0324(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	float                                              PhysicsHandleMismatchAccumulator;                         // 0x0328(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x032C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDGrabberComponentWithPhysics");
		return ptr;
	}


	void SetPhysicsHandleParams(const struct FNTPhysicsHandleParams& Settings);
	bool Drop(bool GoIntoRecoveryState, bool preventImpulse);
};


// Class WKND.WKNDGuardianDroid
// 0x0000 (0x09C0 - 0x09C0)
class AWKNDGuardianDroid : public ASliceableSkeleton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDGuardianDroid");
		return ptr;
	}

};


// Class WKND.WKNDGuardianDroidAIController
// 0x0000 (0x0410 - 0x0410)
class AWKNDGuardianDroidAIController : public AWKNDDroidAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDGuardianDroidAIController");
		return ptr;
	}

};


// Class WKND.WKNDGunnerComponent
// 0x0010 (0x02A0 - 0x0290)
class UWKNDGunnerComponent : public UWKNDGunComponent
{
public:
	TWeakObjectPtr<class AActor>                       equippedWeapon;                                           // 0x0290(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0298(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDGunnerComponent");
		return ptr;
	}


	void ShootAtActor(class AActor* TargetActor, TEnumAsByte<EShotSpecifier> specifier, TEnumAsByte<EActorSide> side);
	void EquipWeapon(class AActor* weapon);
	void ClearWeapon(class AActor* weapon);
};


// Class WKND.WKNDHandFilterModifier
// 0x0008 (0x0050 - 0x0048)
class UWKNDHandFilterModifier : public UXLABInteractionModifier
{
public:
	EGrabHand                                          GrabHand;                                                 // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDHandFilterModifier");
		return ptr;
	}

};


// Class WKND.WKNDHandlerData
// 0x0008 (0x0030 - 0x0028)
class UWKNDHandlerData : public UXLABVRHandData
{
public:
	EGrabHand                                          GrabHand;                                                 // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDHandlerData");
		return ptr;
	}

};


// Class WKND.WKNDRotationalOffsetModifier
// 0x0010 (0x0058 - 0x0048)
class UWKNDRotationalOffsetModifier : public UXLABInteractionModifier
{
public:
	EGrabHand                                          GrabHand;                                                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FRotator                                    Offset;                                                   // 0x004C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDRotationalOffsetModifier");
		return ptr;
	}

};


// Class WKND.WKNDHandSolver
// 0x0050 (0x0470 - 0x0420)
class UWKNDHandSolver : public UXLABDefaultHandSolver
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0420(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDHandSolver");
		return ptr;
	}

};


// Class WKND.WKNDHapticFeedbackComponent
// 0x0080 (0x0170 - 0x00F0)
class UWKNDHapticFeedbackComponent : public UActorComponent
{
public:
	struct FNTHapticData                               HapticData;                                               // 0x00F0(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	class UCurveFloat*                                 DistanceScaleCurve;                                       // 0x0108(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0110(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDHapticFeedbackComponent");
		return ptr;
	}


	void SetOuterBounds(class UPrimitiveComponent* CollisionComponent);
	void SetInnerBounds(class UPrimitiveComponent* CollisionComponent);
	void OnOwnerEndOverlap(class AActor* ThisActor, class AActor* OtherActor);
	void OnOuterBoundsBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnInnerBoundsEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnInnerBoundsBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};


// Class WKND.WKNDHealthComponent
// 0x00D8 (0x01C8 - 0x00F0)
class UWKNDHealthComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnTakeDamage;                                             // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeath;                                                  // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeathWithDamageInfo;                                    // 0x0110(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeathWithAllInfo;                                       // 0x0120(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HealthRestoredEvent;                                      // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnHealthLevelChangeEvent;                                 // 0x0140(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                InitialHealth;                                            // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0154(0x0004) MISSED OFFSET
	int                                                NumHealthLevels;                                          // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET
	int                                                WeakLightsaberDamageReceived;                             // 0x0160(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StandardLightsaberDamageReceived;                         // 0x0164(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StandardBlasterDamageReceived;                            // 0x0168(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CriticalDamageMultiplier;                                 // 0x016C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0170(0x0050) MISSED OFFSET
	bool                                               bDrawDebug;                                               // 0x01C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDHealthComponent");
		return ptr;
	}


	void TakeDamage(struct FWKNDDamageInfo* Info);
	void SetInitialHealth(int NewInitialHealth, bool bRestoreCurrentHealth);
	void RestoreHealth();
	void RequestInvulnerableStateChangeWithReason(bool bInvulnerable, const struct FString& Reason);
	void RequestInvulnerableStateChange(bool bInvulnerable);
	bool IsInvulnerable();
	bool IsDead();
	bool IsAlive();
	int GetHealthLevel(int MaxHealthLevel, int RemainingHealth);
	int GetCustomHealthLevel(int MaxHealthLevel);
	int GetCurrentHealthLevel();
	int GetCurrentHealth();
};


// Class WKND.WKNDHitResponseInterface
// 0x0000 (0x0028 - 0x0028)
class UWKNDHitResponseInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDHitResponseInterface");
		return ptr;
	}


	void ReceiveMynockHit(class AActor* StrikingActor);
	void ReceiveBlasterHit(class AActor* StrikingActor);
	void ReceiveBladeHit(class AActor* StrikingActor);
	void DeflectProjectile(class AActor* Projectile, bool bParried);
};


// Class WKND.WKNDHoloDroneAIController
// 0x0010 (0x0420 - 0x0410)
class AWKNDHoloDroneAIController : public AAIController
{
public:
	bool                                               bOrbitPlayerHeadset;                                      // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	float                                              MaxDegreesPerSegment;                                     // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class APawn*                                       PlayerPawn;                                               // 0x0418(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDHoloDroneAIController");
		return ptr;
	}

};


// Class WKND.WKNDHolsterableComponent
// 0x0018 (0x0108 - 0x00F0)
class UWKNDHolsterableComponent : public UActorComponent
{
public:
	struct FName                                       LeftHandedHolster;                                        // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightHandedHolster;                                       // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0100(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDHolsterableComponent");
		return ptr;
	}


	void OnInteraction(EXLABInteractionEventType InteractionEventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive);
	struct FName GetHolsterSocketName();
};


// Class WKND.WKNDHolsterableExtension
// 0x0000 (0x0028 - 0x0028)
class UWKNDHolsterableExtension : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDHolsterableExtension");
		return ptr;
	}


	void OnAttachedToToolbelt();
	struct FName GetHolsterSocketName();
};


// Class WKND.WKNDHolsterComponent
// 0x0020 (0x0330 - 0x0310)
class UWKNDHolsterComponent : public UWKNDGrabberComponentWithAttach
{
public:
	TArray<class UClass*>                              whiteList;                                                // 0x0310(0x0010) (Edit, ZeroConstructor)
	bool                                               drawDebugHolster;                                         // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0321(0x0007) MISSED OFFSET
	class AActor*                                      HolsteredActor;                                           // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDHolsterComponent");
		return ptr;
	}


	bool Grab(class AActor* actorToGrab, class URPOCGrabLocatorComponent* Locator);
	bool Drop(bool GoIntoRecoveryState, bool preventImpulse);
};


// Class WKND.WKNDHydrospanner
// 0x0010 (0x0328 - 0x0318)
class AWKNDHydrospanner : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDHydrospanner");
		return ptr;
	}

};


// Class WKND.WKNDInteractionData
// 0x0008 (0x0070 - 0x0068)
class UWKNDInteractionData : public UXLABInteractionData
{
public:
	EWKNDGrabType                                      InteractionButton;                                        // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0069(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDInteractionData");
		return ptr;
	}

};


// Class WKND.HapticEffectsTable
// 0x0010 (0x0038 - 0x0028)
class UHapticEffectsTable : public UObject
{
public:
	TArray<struct FHapticData>                         HapticData;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.HapticEffectsTable");
		return ptr;
	}

};


// Class WKND.WKNDMotionController
// 0x0668 (0x0980 - 0x0318)
class AWKNDMotionController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0318(0x0020) MISSED OFFSET
	float                                              grabSphereSize;                                           // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
	class UWKNDHandlerData*                            XLABHandlerData;                                          // 0x0340(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXLABMotionControllerPipeline*               ControllerPipeline;                                       // 0x0348(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FSoftClassPath                              ConstraintClassRef;                                       // 0x0350(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class APhysicsConstraintActor*                     ForceGrabConstraint;                                      // 0x0368(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	class USceneComponent*                             Scene;                                                    // 0x0370(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ControllerRoot;                                           // 0x0378(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class AWKNDMotionController*                       OtherController;                                          // 0x0380(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	EControllerHand                                    ControllerHand;                                           // 0x0388(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	struct FXLABHandBones                              HandBones;                                                // 0x0390(0x0050) (BlueprintVisible, BlueprintReadOnly)
	class UMotionControllerComponent*                  MotionController;                                         // 0x03E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWeaponMotionComponent*                      WeaponMotionComponent;                                    // 0x03E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UNTTransformFilterComponent*                 TransformFilter;                                          // 0x03F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UHandClimbComponent*                         ClimbComponent;                                           // 0x03F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UNTAnimComponent*                            AnimComponent;                                            // 0x0400(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UNTAnimRequestComponent*                     AnimRequestComponent;                                     // 0x0408(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	struct FTransform                                  HandToWrist;                                              // 0x0410(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  HandToWeapon;                                             // 0x0440(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  WeaponToWrist;                                            // 0x0470(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class USphereComponent*                            GrabSphere;                                               // 0x04A0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	bool                                               Grabbed;                                                  // 0x04A8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UWKNDGrabberComponentWithPhysics*            GrabberComponent;                                         // 0x04B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x04B8(0x0010) MISSED OFFSET
	struct FPoseAlphaData                              AwareAlpha;                                               // 0x04C8(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData05[0x18];                                      // 0x04F8(0x0018) MISSED OFFSET
	struct FPoseAlphaData                              RequestedHandPose;                                        // 0x0510(0x0030)
	float                                              HoldingMaxAngularStrain;                                  // 0x0540(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoldingMaxStrain;                                         // 0x0544(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StrainTimeLimit;                                          // 0x0548(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x054C(0x0004) MISSED OFFSET
	class USceneComponent*                             ClashRotationLocator;                                     // 0x0550(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             HandOffsetLocator;                                        // 0x0558(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RepositionHandLocator;                                    // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             HandLocator;                                              // 0x0568(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      PlayerMesh;                                               // 0x0570(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDCameraComponent*                        PlayerCamera;                                             // 0x0578(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetInteractionComponent*                 WidgetInteraction;                                        // 0x0580(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               IndexFingerCollision;                                     // 0x0588(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               HoverFingerCollision;                                     // 0x0590(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UHandGhostingTriggerComponent*               HandGhostingTrigger;                                      // 0x0598(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bIsActive;                                                // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x05A1(0x0007) MISSED OFFSET
	class URPOCHandEnvironmentInteractionComponent*    HandEnvironmentInteraction;                               // 0x05A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	bool                                               bCanGrab;                                                 // 0x05B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugGrabs;                                              // 0x05B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x05B2(0x0006) MISSED OFFSET
	class AActor*                                      AttachedActor;                                            // 0x05B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	class AActor*                                      AttachedActor_Last;                                       // 0x05C0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	class AActor*                                      HighlightedActor;                                         // 0x05C8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	float                                              MaxHoldingHandMismatch;                                   // 0x05D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoldingMismatchDropTime;                                  // 0x05D4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HoldingMismatchAccumulator;                               // 0x05D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	class URPOCGrabLocatorComponent*                   GrabLocator;                                              // 0x05E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   GrabSecondaryLocator;                                     // 0x05E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontendInteractionController*              FrontendInteractionController;                            // 0x05F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x05F8(0x0001) MISSED OFFSET
	bool                                               bWantsToGrip;                                             // 0x05F9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	EGripState                                         GripState;                                                // 0x05FA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x05FB(0x0001) MISSED OFFSET
	struct FOculusTouchData                            TouchData;                                                // 0x05FC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x060C(0x0004) MISSED OFFSET
	struct FForceGrabData                              ForceGrabData;                                            // 0x0610(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              GrabRange;                                                // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PriorityGrabRange;                                        // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BufferDistance;                                           // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondHandAttachRange;                                    // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondHandDetachRange;                                    // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SqueezeValue;                                             // 0x0674(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              TriggerValue;                                             // 0x0678(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               TriggerTouch;                                             // 0x067C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               FaceTopTouch;                                             // 0x067D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               FaceBottomTouch;                                          // 0x067E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               StickTouch;                                               // 0x067F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FMappedRange                                GrabMappingSqueezing;                                     // 0x0680(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMappedRange                                GrabMappingNotSqueezing;                                  // 0x0688(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bIsSqueezing;                                             // 0x0690(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData13[0xF];                                       // 0x0691(0x000F) MISSED OFFSET
	struct FTransform                                  InitialRelativeTransform;                                 // 0x06A0(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, IsPlainOldData)
	struct FTransform                                  InitialGrabRelativeRotation;                              // 0x06D0(0x0030) (IsPlainOldData)
	struct FTransform                                  BladeHiltTransform;                                       // 0x0700(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  WeaponTransform;                                          // 0x0730(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RepositioningTime;                                        // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepositioningTimeToGo;                                    // 0x0764(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bIsRepositioning;                                         // 0x0768(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	float                                              GrabDotWeightMultiplier;                                  // 0x076C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistanceDotWeightMultiplier;                              // 0x0770(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0774(0x0004) MISSED OFFSET
	TMap<int, struct FMandatedLocation>                MandatedLocationMap;                                      // 0x0778(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              RecenteringMaxDistance;                                   // 0x07C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanTeleport;                                             // 0x07CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTeleporting;                                           // 0x07CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x07CE(0x0002) MISSED OFFSET
	struct FVector                                     TeleportLocation;                                         // 0x07D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    TeleportRotation;                                         // 0x07DC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    InitialTeleportRotation;                                  // 0x07E8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bIsValidDestination;                                      // 0x07F4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bIsLastFrameValidDestination;                             // 0x07F5(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x07F6(0x0002) MISSED OFFSET
	float                                              ThumbstickY;                                              // 0x07F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ThumbstickX;                                              // 0x07FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	class AWKNDPlayerPawn*                             PlayerPawn;                                               // 0x0800(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NonVRHoldOffset;                                          // 0x0808(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0814(0x0004) MISSED OFFSET
	class UClass*                                      HapticEffectsTable;                                       // 0x0818(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowUMG;                                                // 0x0820(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPointing;                                              // 0x0821(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData)
	bool                                               bGrabToTwoHands;                                          // 0x0822(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x0823(0x0001) MISSED OFFSET
	float                                              GripRadius;                                               // 0x0824(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseGrip;                                             // 0x0828(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               TeleporterUIActive;                                       // 0x0829(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x082A(0x0001) MISSED OFFSET
	bool                                               bForceAttachToController;                                 // 0x082B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DropThreshold;                                            // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanGripShift;                                            // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0831(0x0003) MISSED OFFSET
	float                                              GripShiftCooldownTime;                                    // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceForegripOnRanged;                                    // 0x0838(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bManualUpdateHandPositions;                               // 0x0839(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x6];                                       // 0x083A(0x0006) MISSED OFFSET
	class UTransformBufferManager*                     LocationBuffer;                                           // 0x0840(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData23[0x138];                                     // 0x0848(0x0138) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDMotionController");
		return ptr;
	}


	bool WidgetRelease();
	bool WidgetInteract();
	void UpdateTouchData(float DeltaSeconds);
	void UpdateHandAwarenessAnims(float DeltaTime);
	void UpdateClimber(float DeltaTime);
	void STATIC_ToggleTeleportOnClimb();
	void STATIC_ToggleSnapTurnLocks();
	void STATIC_ToggleDebugNavMagnets();
	void StopDisarmMontage();
	void StartWeaponHitLag(float startDelay, float lagDuration, float lagStrength);
	void StartClimbShock(float Magnitude, float Duration);
	void Squeeze(float RawPinchAmount, float RawGrabAmount);
	void ShowTeleportDestination(bool alsoShowArcEndpoint);
	bool ShouldDisplayNavMagnetVisualization();
	bool ShouldDisplayHandAnimationInfo();
	void SetTriggerAxisValue(float Val);
	void SetTeleportDestination(const struct FVector& Location, const struct FRotator& Rotation);
	void SetTeleportArcColour(ETeleportUIState teleportUIState);
	void SetSnapTurnEnabled(bool Enabled);
	void SetPlayerHeight(float Height);
	void SetPinHand(bool Val);
	void SetOtherController(class AWKNDMotionController* Other);
	void SetIsPointing(bool bPoint);
	void SetGripState(EGripState NewState);
	void SetGrabRadius(float Radius);
	void SetEnvironmentCollisionMode(EHandEnvironmentInteractionMode InteractionMode);
	void SetEnvironmentCollisionEnabled(bool bEnabled);
	void SetEnableVRWidgetInteraction(bool bEnable);
	void SetControllerHand(EControllerHand Hand);
	void SendUMGClick();
	void RequestHandPose(class UAnimMontage* AnimMontage, const struct FNTAnimVarStruct& animData, bool lockReadyPosers);
	void ReleaseUMGClick();
	void ReleaseClimbHold(bool Force, bool WithFallBehaviour);
	bool ReleaseActor_Internal();
	void ReceiveOnNotHeldInBothHands();
	void ReceiveOnNewGripState();
	void ReceiveOnIndexFingerEndOverlap();
	void ReceiveOnIndexFingerBeginOverlap();
	void ReceiveOnHitLagStarted(float lagDuration, float lagStrength);
	void ReceiveOnHeldInBothHands();
	void ReceiveOnDropSaber();
	void ReceiveManuallyUpdateHandPosition();
	void ReceiveLockPosers(bool lock);
	void ReceiveInitializeMotionController();
	void ReceiveDeactivateTeleporter();
	void ReceiveActivateTeleporter();
	void ReAttachWidgetIntearact();
	void RangedGrabSuccess(class AActor* GrabbedItem, float GrabbedRange);
	void OnSqueezeReleased();
	void OnSqueezeActivated();
	void OnSecondHandRelease();
	void OnSecondHandGrab();
	void OnReverseGrip();
	void OnIndexFingerEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnIndexFingerBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnHoverFingerEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnHoverFingerBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnGripShift();
	void OnForeGrip();
	void OnDenyVRWidgetInput(const struct FName& TokenName);
	void OnAllowVRWidgetInput(const struct FName& TokenName);
	void OnActorReleased(class AActor* droppedActor);
	bool IsGrabbed();
	void HideTeleportDestination();
	TEnumAsByte<EGrabResult> GrabActor_Internal(class AActor* NearestActor, class URPOCGrabLocatorComponent* Locator, bool forceNotReversed, bool GrabbingFromOtherHand);
	void GrabActor(class AActor* actorToGrab, class URPOCGrabLocatorComponent* Locator);
	struct FTransform GetWeaponToWrist();
	struct FTransform GetWeaponSocketTransform();
	bool GetThumbTouch();
	bool GetSnapEnabled();
	struct FPoseAlphaData GetPoseAwareness();
	void GetNearestRecenteringPoint(const struct FVector& PlayerLocation, const struct FRotator& PlayerRotation, struct FTransform* outTransform, int* outIndex, bool* outFound);
	struct FTransform GetMotionGripTransform();
	struct FName GetHandSocket();
	struct FName GetGrabSocket();
	class AActor* GetGrabbableAtRange();
	float GetDotToTarget(const struct FVector& grabDirection);
	struct FName GetBoneName(EXLABHandlerBoneType BoneType);
	class AActor* GetActorNearHand(bool bCheckForGrab, bool Debug);
	void FinishedGripShift();
	void EnableFrontendInteraction();
	void DoHandRepositioning(float DeltaTime);
	void DisableFrontendInteraction();
	void DetachWidgetIntearact();
	void DeactivateTeleporter();
	bool CheckForReverseGrip(const struct FName& SocketName, class URPOCGrabLocatorComponent* GrabComponent, bool forceNotReversed);
	bool CheckForceUseStatus();
	void ChannelForceOnActorStart(class AActor* GrabbedItem);
	void ChannelForceOnActorComplete(class AActor* GrabbedItem);
	void ChannelForceOnActorBroken(class AActor* GrabbedItem);
	bool AttachHandLocatorToHeldObject(const TScriptInterface<class URPOCPickupActorInterface>& PickupInterface, class URPOCGrabLocatorComponent* ForSecondaryHold, bool JustHandLocator);
	void AttachHandLocatorToController();
	void ActivateTeleporter();
};


// Class WKND.WKNDMouseDroid
// 0x0020 (0x09E0 - 0x09C0)
class AWKNDMouseDroid : public ASliceableSkeleton
{
public:
	class UAIWorldInteractionComponent*                worldInteraction;                                         // 0x09C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAIInstructionComponent*                     Instructions;                                             // 0x09C8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAIPatrolComponent*                          patrol;                                                   // 0x09D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x09D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDMouseDroid");
		return ptr;
	}

};


// Class WKND.WKNDMouseDroidAIController
// 0x0000 (0x0410 - 0x0410)
class AWKNDMouseDroidAIController : public AWKNDDroidAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDMouseDroidAIController");
		return ptr;
	}

};


// Class WKND.WKNDMynock
// 0x0010 (0x09D0 - 0x09C0)
class AWKNDMynock : public ASliceableSkeleton
{
public:
	class USplineFlightComponent*                      splineFlight;                                             // 0x09C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x09C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDMynock");
		return ptr;
	}


	void StartAttacking(class ATargetPoint* Target);
	void OnReturnedToLoop();
	void OnAttackStarted();
	void OnAttackFinished();
	void FlyToLoopSpline(class USplineComponent* spline);
};


// Class WKND.WKNDPauseContainer
// 0x0018 (0x0330 - 0x0318)
class AWKNDPauseContainer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0318(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDPauseContainer");
		return ptr;
	}


	void TeleportToContainer();
	void ReturnPlayer();
};


// Class WKND.WKNDPauseManager
// 0x0090 (0x03A8 - 0x0318)
class AWKNDPauseManager : public AActor
{
public:
	bool                                               bEnableHapticFeedbackWhilePaused;                         // 0x0318(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0319(0x0003) MISSED OFFSET
	float                                              MapChangeCameraFadeTime;                                  // 0x031C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       MainMenuMapName;                                          // 0x0320(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnGamePaused;                                             // 0x0328(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGameUnPaused;                                           // 0x0338(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     PauseReturnLocation;                                      // 0x0348(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LockedLocation;                                           // 0x0354(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     PostElevatorLockedLocation;                               // 0x0360(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     SafeReturnLocRelative;                                    // 0x036C(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               Elevator;                                                 // 0x0378(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ElevatorAttached;                                         // 0x0379(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2E];                                      // 0x037A(0x002E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDPauseManager");
		return ptr;
	}


	bool UnPauseGame();
	bool PauseGame(bool bShowPauseMenu, bool bForcePause);
	void IssueBackToMainMenuCall();
	bool IsGamePaused();
};


// Class WKND.WKNDPerformanceCapturer
// 0x0018 (0x0330 - 0x0318)
class AWKNDPerformanceCapturer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0318(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPerformanceCaptureActionFinished;                       // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDPerformanceCapturer");
		return ptr;
	}


	void StopPerformanceCapture();
	void StartPerformanceCapture();
	bool PerformanceCaptureIsRunning();
};


// Class WKND.WKNDPlayerCameraManager
// 0x0000 (0x1AE0 - 0x1AE0)
class AWKNDPlayerCameraManager : public APlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDPlayerCameraManager");
		return ptr;
	}


	class UCameraShake* PlayCameraShake(class UClass* ShakeClass, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot);
	void EnableCameraShake();
	void DisableCameraShake();
};


// Class WKND.WKNDPlayerComboData
// 0x0020 (0x0050 - 0x0030)
class UWKNDPlayerComboData : public UDataAsset
{
public:
	class UWKNDPlayerPoseData*                         StartingPose;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UWKNDPlayerStrikeData*>               Strikes;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	bool                                               bEnabled;                                                 // 0x0048(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0049(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDPlayerComboData");
		return ptr;
	}

};


// Class WKND.WKNDPlayerController
// 0x0088 (0x06F8 - 0x0670)
class AWKNDPlayerController : public APlayerController
{
public:
	class AWKNDPlayerPawn*                             PlayerPawn;                                               // 0x0670(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              InputAxisThreshold;                                       // 0x0678(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputAxisTeleportStartThreshold;                          // 0x067C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InputAxisTeleportActThreshold;                            // 0x0680(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCameraTurnEnabled;                                       // 0x0684(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               bAxisInput;                                               // 0x0685(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               bAxisInputLeft;                                           // 0x0686(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               bAxisInputRight;                                          // 0x0687(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               bAxisInputMotion;                                         // 0x0688(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0689(0x0003) MISSED OFFSET
	float                                              LastTurnDirection;                                        // 0x068C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x68];                                      // 0x0690(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDPlayerController");
		return ptr;
	}


	bool ProjectWorldLocationToScreenNormalised(const struct FVector& WorldLocation, struct FVector2D* ScreenLocationNormalised);
	bool IsWorldLocationOnScreen(const struct FVector& WorldLocation);
	struct FHandInputData GetHandInputData(EControllerHand Hand);
};


// Class WKND.WKNDPlayerPawn
// 0x04D8 (0x0850 - 0x0378)
class AWKNDPlayerPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0378(0x0030) MISSED OFFSET
	class UChildActorComponent*                        cameraCollisionActorComponent;                            // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x03B0(0x0001) MISSED OFFSET
	bool                                               isSliding;                                                // 0x03B1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EMovementContext                                   activeMovementContext;                                    // 0x03B2(0x0001) (ZeroConstructor, IsPlainOldData)
	EMovementContext                                   audioMovementContext;                                     // 0x03B3(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x03B4(0x001C) MISSED OFFSET
	struct FVector                                     navExtentsForSlide;                                       // 0x03D0(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     navOffsetForSlide;                                        // 0x03DC(0x000C) (Edit, IsPlainOldData)
	float                                              slideForwardSpeed;                                        // 0x03E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              slideBackwardSpeed;                                       // 0x03EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              slideSidewaysSpeed;                                       // 0x03F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x03F4(0x000C) MISSED OFFSET
	float                                              throttleForwardSpeed;                                     // 0x0400(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              throttleBackwardSpeed;                                    // 0x0404(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              throttleSidewaysSpeed;                                    // 0x0408(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              throttleCreepForwardSpeed;                                // 0x040C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              throttleCreepBackwardSpeed;                               // 0x0410(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              throttleCreepSidewaysSpeed;                               // 0x0414(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              throttleRunForwardSpeed;                                  // 0x0418(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              throttleRunBackwardSpeed;                                 // 0x041C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              throttleRunSidewaysSpeed;                                 // 0x0420(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              VignetteIntensity;                                        // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0428(0x0004) MISSED OFFSET
	bool                                               bResetVROnRecenter;                                       // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x43];                                      // 0x042D(0x0043) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnPickUp;                                                 // 0x0470(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class AWKNDMotionController*                       R_MotionController;                                       // 0x0480(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class AWKNDMotionController*                       L_MotionController;                                       // 0x0488(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	EHandEnvironmentInteractionMode                    DefaultHandInteractionMode;                               // 0x0490(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EHandEnvironmentInteractionMode                    HandInteractionModeWhenGrabDisabled;                      // 0x0491(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x0492(0x0006) MISSED OFFSET
	class AWKNDMotionController*                       PAD_MotionController;                                     // 0x0498(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              LimitControlsAtSaberGripPercent;                          // 0x04A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	class UCapsuleComponent*                           PlayerCollision;                                          // 0x04A8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           PlayerSaberCollision;                                     // 0x04B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData08[0x20];                                      // 0x04B8(0x0020) MISSED OFFSET
	class USphereComponent*                            FallValidator;                                            // 0x04D8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UStereoLayerComponent*                       BlackoutStereoLayer_WarningText;                          // 0x04E0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             VROrigin;                                                 // 0x04E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CameraRoot;                                               // 0x04F0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x04F8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UWKNDCameraComponent*                        PlayerCamera;                                             // 0x0500(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UWKNDSnapRotationComponent*                  SnapRotationComponent;                                    // 0x0508(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UVRNotificationsComponent*                   VRNotificationComponent;                                  // 0x0510(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UHBVRTransitionComponent*                    VRTransitionComponent;                                    // 0x0518(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UNTComboDetectionComponent*                  ComboDetectionComponent;                                  // 0x0520(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class URPOCGestureDetector*                        GestureDetector;                                          // 0x0528(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UBodyComponent*                              BodyComponent;                                            // 0x0530(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UWKNDToolbeltComponent*                      Toolbelt;                                                 // 0x0538(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UWKNDToolbeltSlotComponent*                  Toolbelt_LeftSlot;                                        // 0x0540(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UWKNDToolbeltSlotComponent*                  Toolbelt_RightSlot;                                       // 0x0548(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UToolbeltSlotCollisionComponent*             Toolbelt_LeftSlotCollision;                               // 0x0550(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UToolbeltSlotCollisionComponent*             Toolbelt_RightSlotCollision;                              // 0x0558(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UPlayerScreenBlackOutComponent*              PlayerScreenBlackOutComponent;                            // 0x0560(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	class UPlayerClimbComponent*                       PlayerClimb;                                              // 0x0568(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	TArray<float>                                      StrikeDirectionHistory;                                   // 0x0570(0x0010) (ZeroConstructor, Transient)
	float                                              DefaultPlayerHeight;                                      // 0x0580(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0584(0x0004) MISSED OFFSET
	struct FSoftClassPath                              MotionControllerClassRef;                                 // 0x0588(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FVector                                     LeftToolbeltSocketOffest;                                 // 0x05A0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LeftToolbeltSocketRotation;                               // 0x05AC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RightToolbeltSocketOffest;                                // 0x05B8(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RightToolbeltSocketRotation;                              // 0x05C4(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          BurnDecalMaterial;                                        // 0x05D0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreEnemyBurns;                                        // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x05D9(0x0003) MISSED OFFSET
	float                                              ConeDotForBurns;                                          // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BurnDecalSize;                                            // 0x05E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FingerBurnDecalSize;                                      // 0x05EC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              BurnDecalFadeDelay;                                       // 0x05F8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurnDecalFadeTime;                                        // 0x05FC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurnCooldown;                                             // 0x0600(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0604(0x0004) MISSED OFFSET
	class USoundBase*                                  BurnSound;                                                // 0x0608(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  ReactionSound;                                            // 0x0610(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugHMDState;                                            // 0x0618(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0619(0x0003) MISSED OFFSET
	float                                              BurnSelfTolerenceTime;                                    // 0x061C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x5];                                       // 0x0620(0x0005) MISSED OFFSET
	bool                                               CameraLockBlackout;                                       // 0x0625(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x0626(0x0002) MISSED OFFSET
	float                                              ManualBlackoutStartDistance;                              // 0x0628(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ManualBlackoutCompleteDistance;                           // 0x062C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ManualBlackoutVolumeStartDistance;                        // 0x0630(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ManualBlackoutVolumeCompleteDistance;                     // 0x0634(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CameraConstraintAutoEnabled;                              // 0x0638(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0639(0x0003) MISSED OFFSET
	float                                              CameraConstraintStartDistance;                            // 0x063C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraConstraintEndDistance;                              // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraConstraintLocked;                                   // 0x0644(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraConstraintDirection;                                // 0x0648(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     CameraConstraintReturnLocation;                           // 0x0654(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               CameraConstraintDebugDrawOn;                              // 0x0660(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CameraConstraintVolumeEnabled;                            // 0x0661(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               CameraConstraintVolumeIsActive;                           // 0x0662(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x0663(0x0005) MISSED OFFSET
	struct FName                                       CameraConstraintVolumeTag;                                // 0x0668(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraConstraintVolumeStartDistance;                      // 0x0670(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraConstraintVolumeEndDistance;                        // 0x0674(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraConstraintVolumeEntryLocation;                      // 0x0678(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               constrainedToRadiusWhileImmobile;                         // 0x0684(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0685(0x0003) MISSED OFFSET
	struct FVector                                     CachedImpactLocation;                                     // 0x0688(0x000C) (IsPlainOldData)
	struct FVector                                     CachedBlackoutLocation;                                   // 0x0694(0x000C) (IsPlainOldData)
	struct FVector                                     NavMagnetConstraintCenter;                                // 0x06A0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              NavMagnetConstraintEngageAtDistance;                      // 0x06AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NavMagnetBackoutBeginFraction;                            // 0x06B0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NavMagnetBackoutEndFraction;                              // 0x06B4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NavMagnetConstraintEnabled;                               // 0x06B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               CameraCurrentlyConstrainedByNavMagnet;                    // 0x06B9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x06BA(0x0002) MISSED OFFSET
	float                                              radiusOfCameraConstraint;                                 // 0x06BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        recenterAnchorComponent;                                  // 0x06C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      recenterAnchor;                                           // 0x06C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               rotateToAnchor;                                           // 0x06D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x06D1(0x0003) MISSED OFFSET
	struct FVector                                     navigationGround;                                         // 0x06D4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ToolbeltSeatedDisplacement;                               // 0x06E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x06E4(0x0004) MISSED OFFSET
	TArray<struct FName>                               locomotionDisablers;                                      // 0x06E8(0x0010) (ZeroConstructor)
	struct FName                                       locomotionLastEnabledBy;                                  // 0x06F8(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportEnabled;                                         // 0x0700(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0701(0x0003) MISSED OFFSET
	int                                                bTeleportLock;                                            // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportWhileCarrying;                                   // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockRotateWhileClimbing;                                 // 0x0709(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EControllerType                                    CurrentControllerType;                                    // 0x070A(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x5];                                       // 0x070B(0x0005) MISSED OFFSET
	struct FWKNDHandBones                              OculusBones;                                              // 0x0710(0x00A0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UXLABPhysicsPipeline*                        PhysicsPipeline;                                          // 0x07B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnHitGround;                                              // 0x07B8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFallStart;                                              // 0x07C8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFallInterrupt;                                          // 0x07D8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDeathFall;                                              // 0x07E8(0x0010) (ZeroConstructor, Transient, InstancedReference, BlueprintAssignable)
	bool                                               bPlayerGrabDisabled;                                      // 0x07F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x07F9(0x0007) MISSED OFFSET
	class UForcePowerComponentBase*                    ForcePowerComponentReference;                             // 0x0800(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AWKNDMotionController*>               MotionControllers;                                        // 0x0808(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData24[0x2C];                                      // 0x0818(0x002C) MISSED OFFSET
	float                                              DeflectionToleranceBoostOnFail;                           // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialDeflectionToleranceMultiplier;                     // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x084C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDPlayerPawn");
		return ptr;
	}


	bool WasRecentlyHit(float NumSeconds, struct FVector* OutLocation, struct FVector* OutDirection);
	bool UsingOutOfBoundsTeleport();
	bool UsingHeightAdjust();
	bool STATIC_UseOldTeleportStyle();
	void UpdateClimbing(float DeltaTime, bool AllowMovement);
	void UnlockCameraBlackout();
	void UnFreezeCameraLocomotion();
	bool UnDisableLocomotion(const struct FName& locoReason);
	void ToggleVRMode();
	void TogglePause();
	void STATIC_ToggleOverloadOnBurn();
	void StopAnimMontage(class UAnimMontage* AnimMontage);
	void SnapTurnFinished();
	void Snap(float Direction);
	void STATIC_SetUseOutOfBoundsTeleport(bool boundsTeleport);
	void STATIC_SetUseOldTeleport(bool oldTeleport);
	void STATIC_SetUseHeightAdjust(bool heightAdjust);
	void SetSnapTurnEnabled(bool Enabled, EWKNDHands hands);
	void SetRecenterAnchor(class AActor* Anchor);
	void SetMovementContext(EMovementContext nextMovementContext);
	void SetManualBlackoutDistances(float StartDistance, float CompleteDistance);
	void SetEnvironmentCollisionMode(EHandEnvironmentInteractionMode InteractionMode);
	void SetEnvironmentCollisionEnabled(bool bEnabled);
	void SetDeflectionToleranceMultiplierActive(bool newActive);
	void SetDeflectionToleranceMultiplier(float NewMultiplier);
	void SetCameraConstraintDistances(float StartDistance, float EndDistance);
	void STATIC_SetAllowHandBurns(bool allow);
	void ResetVR();
	void ReleaseClimbHolds(bool WithFallBehaviour);
	void RegisterDeflectionResult(bool bSuccess);
	bool RecenterPlayerIfPossible();
	void RecenterCameraDuringTurns();
	void ReceiveOnTeleport(class AWKNDMotionController* MotionController);
	void ReceiveOnBurntHand(const struct FVector& Location, const struct FVector& Normal, const struct FVector& Direction, const struct FName& BoneName);
	void PlayDisarmMontage(EDisarmType DisarmedHand);
	void OnEnemySaberStrike(class ARPOCPickup_Lightsaber* AttackingSaber, bool PlayerWasStruckBeforeBlock);
	void LockCameraConstraint(bool lock, const struct FVector& ReturnLocation);
	void LockCameraBlackout(const struct FVector& InitialImpact);
	void LockAllPlayerItems(bool lock);
	void IsPlayerHoldingLightsaber(bool* bIsHolding, EControllerHand* Hand);
	void IsPlayerHoldingHydrospanner(bool* bIsHolding, EControllerHand* Hand);
	void IsPlayerHoldingActor(class AActor* ActorToCheck, bool* bIsHolding, EControllerHand* Hand);
	bool IsNavMagnetCameraConstraintEnabled();
	bool IsMotionControllerTracked(EControllerHand ControllerType);
	bool IsMandatedPointBlue(int pointIndex);
	bool IsLockedAtAStoryPoint();
	bool IsFrontendInteractionEnabled();
	bool IsClimbing();
	bool IsCameraCollisionActor(class AActor* CheckActor);
	void InvalidateRecenterTransform();
	void HidePlayerItemsAndHands(bool bHide);
	void HidePlayerItems(bool bHide);
	void HidePlayerHands(bool bHide);
	float GetThrottledDistance();
	struct FVector GetStoryPointLocation();
	bool GetSnapTurnEnabled(EWKNDHands hands);
	float GetSidewaysSpeed();
	float GetSeatedCameraOffset();
	void GetRecenter(struct FTransform* recenterTansform, bool* Valid);
	class AActor* GetPlayerLightsaber();
	void GetPlayerItems(struct FPlayerItems* outItems);
	EMovementContext GetMovementContext();
	class AWKNDMotionController* GetMotionController(EControllerHand ControllerType);
	bool GetLastValidLocationBeforeBlackout(struct FVector* LastValidLocation);
	struct FWKNDHandBones GetHandBones();
	float GetForwardSpeed();
	bool GetDeflectionToleranceMultiplierActive();
	float GetDeflectionToleranceMultiplier();
	bool GetCurrentCameraConstraintPoint(float StartDistance, float EndDistance, struct FVector* ConstraintPoint);
	void GetClosestRecenteringPoint(const struct FVector& CheckLocation, struct FTransform* outTransform, int* outIndex, bool* found);
	void GetClosestMandatedPoint(const struct FVector& CheckLocation, struct FTransform* outTransform, int* outIndex, bool* found);
	float GetClimbDistanceThisFrame();
	bool GetCameraConstraintReturnPoint(struct FVector* ReturnPoint, float* DistanceFromReturn);
	class AActor* GetCameraCollisionActor();
	float GetBackwardSpeed();
	EMovementContext GetAudioMovementContext();
	void GetActorsToIgnoreForLocomotion(TArray<class AActor*>* ignorables);
	void FreezeCameraLocomotionInPlace();
	void EndFallingTimeline();
	void EnablePlayerGrab(bool bDisableGhosting);
	void EnableNavMagnetCameraConstraint(const struct FVector& InNavMagnetConstraintCenter, float EnageAtDistance, float BlackoutBeginFraction, float BlackoutEndFraction);
	bool EnableLocomotion(const struct FName& locoReason);
	void EnableHandGhosting();
	void EnableFrontendInteraction(EControllerHand ControllerHand);
	void EnableCameraConstraintAuto(bool Enable);
	void DropHeldObject(class AActor* ObjectToDrop);
	void Disarm(class AActor* Enemy, EDisarmType DisarmedHand, float Force);
	void DisablePlayerGrab(bool bEnableGhosting);
	void DisableNavMagnetCameraConstraint();
	bool DisableLocomotion(const struct FName& locoReason);
	void DisableFrontendInteraction(EControllerHand ControllerHand);
	void DetermineNavigationGround(const struct FVector& projectedToNavmesh, struct FVector* navigationGround, bool* navigationGroundInit, bool* locationInvalid);
	bool ControlsLimitedBySaberHold();
	void ConstrainCameraToRadiusWhenImmobile(bool constrain);
	void ConstrainCameraToRadius();
	void ClimbShock(float Magnitude, float Duration);
	void ClearBonusDamage();
	void ChangeVRMode(EVRModeEnum VRMode);
	void CameraTeleport(const struct FVector& Location, const struct FRotator& Rotator);
	bool CameraShouldRecenterDuringTurns();
	bool CameraIsFrozenForAllMovement();
	bool CameraIsConstrainedToRadius();
	bool CameraConstraintVolumeFound();
	void CameraConstraintUpdate();
	void CameraConstraintTeleport(const struct FVector& cameraConstraintPoint);
	void CameraConstraintDebugDraw(bool DrawConstraintPoint, const struct FVector& ConstraintPoint, float StartDistance, float EndDistance);
	float CalculateManualBlackout(float DistanceFromReturn, float StartBlackoutDistance, float CompleteBlackoutDistance);
	void BroadcastMandatedSlideAsTeleport(class AWKNDMotionController* teleportingController);
	void BeginFallHaptics(float FallDistance);
	void AssignRecenterTransform(const struct FTransform& RCTransform);
	void AssignRecenterAtFeet();
};


// Class WKND.WKNDPlayerPoseData
// 0x0010 (0x0040 - 0x0030)
class UWKNDPlayerPoseData : public UDataAsset
{
public:
	struct FName                                       PoseName;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TargetReaction;                                           // 0x0038(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDPlayerPoseData");
		return ptr;
	}

};


// Class WKND.WKNDPlayerState
// 0x0000 (0x03D0 - 0x03D0)
class AWKNDPlayerState : public APlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDPlayerState");
		return ptr;
	}

};


// Class WKND.WKNDPlayerStrikeData
// 0x0020 (0x0050 - 0x0030)
class UWKNDPlayerStrikeData : public UDataAsset
{
public:
	struct FVector                                     StrikeDirection;                                          // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              StrikeDotTolerance;                                       // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PostStrikeBuffer;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FName                                       TargetReaction;                                           // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDPlayerStrikeData");
		return ptr;
	}

};


// Class WKND.WKNDPoseTutorialData
// 0x0028 (0x0058 - 0x0030)
class UWKNDPoseTutorialData : public UWKNDTutorialData
{
public:
	TArray<class UWKNDPlayerPoseData*>                 Poses;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimSequence*>                       PoseAnims;                                                // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              PoseHoldDuration;                                         // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDPoseTutorialData");
		return ptr;
	}

};


// Class WKND.WKNDProgressionCheckpointData
// 0x0030 (0x0060 - 0x0030)
class UWKNDProgressionCheckpointData : public UDataAsset
{
public:
	struct FText                                       MenuDisplayName;                                          // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bRequiresLightsaber;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresMultiTool;                                       // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWillGetLightsaber;                                       // 0x004A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresZoe;                                             // 0x004B(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bChapterCheckpoint;                                       // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugCheckpoint;                                         // 0x004D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x004E(0x0002) MISSED OFFSET
	TArray<struct FRequiredLevel>                      RequiredLevelsStruct;                                     // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDProgressionCheckpointData");
		return ptr;
	}

};


// Class WKND.WKNDSaveGame
// 0x0130 (0x0158 - 0x0028)
class UWKNDSaveGame : public USaveGame
{
public:
	struct FString                                     SaveSlotName;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	uint32_t                                           UserIndex;                                                // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	class UWKNDProgressionCheckpointData*              ProgressionCheckpoint;                                    // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWKNDProgressionCheckpointData*              HighestUnlockedCheckpoint;                                // 0x0048(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       UnlockedExtendedDojoWave;                                 // 0x0050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FComfortSettings                            ComfortSettings;                                          // 0x0058(0x0008) (BlueprintVisible)
	struct FAccessibilitySettings                      AccessibilitySettings;                                    // 0x0060(0x0007) (BlueprintVisible)
	struct FLocomotionSettings                         LocomotionSettings;                                       // 0x0067(0x0005) (BlueprintVisible)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FAudioVideoSettings                         AudioVideoSettings;                                       // 0x0070(0x0058) (BlueprintVisible)
	struct FScriptMulticastDelegate                    CustomizationSettingsChangedEvent;                        // 0x00C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TMap<struct FName, struct FWaveTelemetryData>      CompletedWavesData;                                       // 0x00D8(0x0050) (ZeroConstructor)
	struct FCustomizationSettings                      CustomizationSettings;                                    // 0x0128(0x0020) (Edit, DisableEditOnInstance)
	struct FString                                     ShaderBinaryCacheHashString;                              // 0x0148(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDSaveGame");
		return ptr;
	}


	void SetCustomizationSettings(const struct FCustomizationSettings& NewCustomizationSettings);
	void SaveLightsaberHiltSetting(const struct FName& SelectedLightsaberHilt);
	void SaveLightsaberHiltAndColorSettings(const struct FName& SelectedLightsaberHilt, const struct FName& SelectedLightsaberColor);
	void SaveLightsaberColorSetting(const struct FName& SelectedLightsaberColor);
	void SaveDojoEnvironmentSetting(const struct FName& SelectedDojoEnvironment, const struct FName& DojoEnvironmentLevelName);
	struct FCustomizationSettings GetCustomizationSettings();
};


// Class WKND.WKNDSecondaryGrabModifier
// 0x0010 (0x0058 - 0x0048)
class UWKNDSecondaryGrabModifier : public UXLABInteractionModifier
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0048(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDSecondaryGrabModifier");
		return ptr;
	}

};


// Class WKND.WKNDSlicingKeyModifier
// 0x0010 (0x0058 - 0x0048)
class UWKNDSlicingKeyModifier : public UXLABInteractionModifier
{
public:
	float                                              MaxAngleAroundZ;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinAngleAroundZ;                                          // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxAbsoluteAngleWithZ;                                    // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDSlicingKeyModifier");
		return ptr;
	}

};


// Class WKND.WKNDSnapRotationComponent
// 0x00A0 (0x0190 - 0x00F0)
class UWKNDSnapRotationComponent : public UActorComponent
{
public:
	class APawn*                                       PlayerPawn;                                               // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCameraComponent*                            PlayerCamera;                                             // 0x00F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FRotator                                    DefaultTurnDelta;                                         // 0x0100(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    DefaultTurnDeltaPS4;                                      // 0x010C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultTurnInterpTime;                                    // 0x0118(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTime;                                              // 0x011C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeOutTimePS4;                                           // 0x0120(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentCorrectedRotation;                                 // 0x0124(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, IsPlainOldData)
	struct FRotator                                    InitialTurnRotation;                                      // 0x0130(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, IsPlainOldData)
	bool                                               bInitialTurnRotationInitialised;                          // 0x013C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               bCameraReset;                                             // 0x013D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x013E(0x0002) MISSED OFFSET
	TArray<struct FRotator>                            DesiredTurnOffsetStack;                                   // 0x0140(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0150(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSnap;                                                   // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSnapFinished;                                           // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              SnapTimeLeft;                                             // 0x0188(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	bool                                               bSnapFinished;                                            // 0x018C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x018D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDSnapRotationComponent");
		return ptr;
	}


	void UpdateVRCameraOffset();
	void Snap(float Direction);
	void ResetVRCameraOffset();
	void ResetInitialRotation(const struct FRotator& NewInitialRotation);
	void ResetDesiredOffsetStack();
	void PushRotationOffset();
	void PopRotationOffset();
	void InstantUpdateSnap();
	struct FRotator GetTurnDelta();
	float GetFadeOutTime();
	struct FRotator GetDesiredRotationOffset();
	void ApplySnapRotation();
};


// Class WKND.AISquadDefinition
// 0x0018 (0x0040 - 0x0028)
class UAISquadDefinition : public UObject
{
public:
	struct FName                                       SquadName;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.AISquadDefinition");
		return ptr;
	}

};


// Class WKND.WKNDSquadLeader
// 0x0078 (0x0168 - 0x00F0)
class UWKNDSquadLeader : public UActorComponent
{
public:
	TArray<struct FReadyCombatant>                     readyCombatants;                                          // 0x00F0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient)
	TMap<class USquadName*, class USquadOrders*>       allSquads;                                                // 0x0100(0x0050) (ZeroConstructor, Transient)
	TArray<class USquadOrders*>                        allSquadsA;                                               // 0x0150(0x0010) (ZeroConstructor, Transient)
	float                                              actionCooldown;                                           // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0164(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDSquadLeader");
		return ptr;
	}


	void StopSquad(class USquadName* SquadName);
	void StopActionCooldown();
	void StartSquad(class USquadName* SquadName);
	void StartActionCooldown(float cooldown);
	int RemoveFromSquad(class AActor* toRemove, class USquadName* SquadName);
	EAISquadAction OpenSquad(class USquadName* SquadName, class USquadOrders* SquadOrders);
	class USquadOrders* OpenNewSquad(class USquadName* SquadName, class UClass* ordersClass);
	void OnAction();
	class AActor* GetRandomCombatant();
	float GetActionCooldown();
	int CountSquadSize();
	EAISquadAction CloseSquad(class USquadName* SquadName);
	int AddToSquad(class AActor* toAdd, class USquadName* SquadName);
};


// Class WKND.WKNDStormtrooper
// 0x0010 (0x09D0 - 0x09C0)
class AWKNDStormtrooper : public ASliceableSkeleton
{
public:
	class AActor*                                      OverrideTarget;                                           // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChanceToOverrideTarget;                                   // 0x09C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDStormtrooper");
		return ptr;
	}

};


// Class WKND.WKNDSubtitle
// 0x00C0 (0x03D8 - 0x0318)
class AWKNDSubtitle : public AActor
{
public:
	struct FScriptMulticastDelegate                    OnSubtitleHidden;                                         // 0x0318(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               IsShowing;                                                // 0x0328(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0329(0x0007) MISSED OFFSET
	class AActor*                                      Speaker;                                                  // 0x0330(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // 0x0338(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
	struct FText                                       SubtitleText;                                             // 0x0348(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	struct FText                                       SubtitleSpeakerName;                                      // 0x0360(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst)
	class APlayerCameraManager*                        CameraManager;                                            // 0x0378(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              DistanceOffset;                                           // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinScale;                                                 // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxScale;                                                 // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TextVertOffset;                                           // 0x038C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                MaxWordCount;                                             // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxWordsPerLine;                                          // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondsPerWord;                                           // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDuration;                                              // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FollowSpeedCurve;                                         // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ScaleCurve;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VisibleTime;                                              // 0x03B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       PendingText;                                              // 0x03C0(0x0018) (BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDSubtitle");
		return ptr;
	}


	void UpdateTransform(float DeltaSeconds);
	struct FText SplitOverflowText(const struct FText& InText, struct FText* outOverflowText, int* outTextWordCount);
	void ShowSubtitle(const struct FLinearColor& TextColor, class AActor* speakingActor, const struct FText& SubtitleText, const struct FText& SpeakerName, float Duration);
	void ShiftText(float Offset);
	void SetScreenPositionOffset(int Offset);
	void OnShowSubtitle();
	void OnHidden();
	void HideSubtitle();
	bool HasPendingText();
	float GetVerticalSize();
	void GetTargetTransform(struct FVector* outPos, struct FRotator* outRot, struct FVector* outScale, float* outAngleToPlayer);
	float GetApproximateDuration(const struct FText& InText);
	struct FText FormatLineSpacing(const struct FText& InText);
};


// Class WKND.WKNDSubtitleManager
// 0x00A0 (0x03B8 - 0x0318)
class AWKNDSubtitleManager : public AActor
{
public:
	class UClass*                                      SubtitleClass;                                            // 0x0318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DialogData;                                               // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SubtitlePoolSize;                                         // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SubtitlesEnabled;                                         // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CollapseTextFromSameSpeaker;                              // 0x032D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x032E(0x0002) MISSED OFFSET
	float                                              CompletionPercentageForCollapse;                          // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0334(0x0004) MISSED OFFSET
	TMap<struct FString, struct FLinearColor>          SubtitleColorBySpeaker;                                   // 0x0338(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                DefaultColor;                                             // 0x0388(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class AWKNDSubtitle*>                       ActiveSubtitles;                                          // 0x0398(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class AWKNDSubtitle*>                       InactiveSubtitles;                                        // 0x03A8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDSubtitleManager");
		return ptr;
	}


	bool STATIC_TryAddSubtitleByEventName(const struct FString& EventName, class AActor* Speaker, float Duration);
	bool STATIC_TryAddSubtitle(class UAkAudioEvent* AudioEvent, class AActor* Speaker, float Duration);
	void SubtitleSpawnedEvent(class AWKNDSubtitle* spawnedSubtitle);
	void SubtitleHiddenEvent(class AWKNDSubtitle* HiddenSubtitle);
	void SetSubtitlesEnabled(bool IsEnabled);
	void SetManagerInstance(class AWKNDSubtitleManager* ManagerInstance);
	void OnSubtitleHidden(class AWKNDSubtitle* HiddenSubtitle);
	class AWKNDSubtitleManager* STATIC_GetSubtitleManager();
	class AWKNDSubtitle* GetSubtitle();
	void DestroySubtitlePool();
	void ClearAllSubtitles();
	void BuildSubtitlePool();
	void AddSubtitleByEventName(const struct FString& EventName, class AActor* Speaker, float Duration);
	void AddSubtitle(class UAkAudioEvent* AudioEvent, class AActor* Speaker, float Duration);
};


// Class WKND.WKNDToolbeltComponent
// 0x00A0 (0x0330 - 0x0290)
class UWKNDToolbeltComponent : public USceneComponent
{
public:
	float                                              MaxToolbeltAngleDegrees;                                  // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ToolbeltLockAngleDegrees;                                 // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RotationCompensationFactor;                               // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x029C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x029D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    ActorHolsteredEvent;                                      // 0x02A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<class UWKNDToolbeltSlotComponent*>          Slots;                                                    // 0x02B0(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x02C0(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDToolbeltComponent");
		return ptr;
	}


	void Unassign(const TScriptInterface<class UXLABInteractiveGroup>& Group);
	void SetEnableAssignedItems(bool bEnabled);
	bool HasFreeSlots();
	class UWKNDToolbeltSlotComponent* Assign(const TScriptInterface<class UXLABInteractiveGroup>& Group);
};


// Class WKND.WKNDToolbeltSlotComponent
// 0x0020 (0x02B0 - 0x0290)
class UWKNDToolbeltSlotComponent : public USceneComponent
{
public:
	class UWKNDToolbeltComponent*                      Toolbelt;                                                 // 0x0290(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0298(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDToolbeltSlotComponent");
		return ptr;
	}


	void OnInteraction(EXLABInteractionEventType InteractionEventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive);
	class AActor* GetAttachedActor();
	class AActor* GetAssignedActor();
	void ForceAttachAssignedActor();
	void Assign(const TScriptInterface<class UXLABInteractiveGroup>& Group);
};


// Class WKND.WKNDTrainingDroidComponent
// 0x0058 (0x0148 - 0x00F0)
class UWKNDTrainingDroidComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET
	struct FTrainingDroidBob                           Bob;                                                      // 0x0108(0x0018) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FTrainingDroidDamage                        Damage;                                                   // 0x0120(0x0014) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FTrainingDroidGrille                        Grille;                                                   // 0x0134(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient)
	struct FTrainingDroidLookAt                        LookAt;                                                   // 0x0140(0x0004) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDTrainingDroidComponent");
		return ptr;
	}


	void UpdatePlayerAdjustment(class AWKNDPlayerPawn* Player, float DeltaTime);
	void UpdateLookAt(const struct FName& InSocketName, float DeltaTime);
	void UpdateGrille(float DeltaTime, float AttackSpin);
	void UpdateDamage(float DeltaTime);
	void UpdateBob(float DeltaTime);
	void SetDamageState(int InState);
	void EnableGrille(bool bEnable);
};


// Class WKND.WKNDTrainingRemotePawn
// 0x0008 (0x0380 - 0x0378)
class AWKNDTrainingRemotePawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0378(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDTrainingRemotePawn");
		return ptr;
	}

};


// Class WKND.WKNDTutorialSoundCueData
// 0x0020 (0x0050 - 0x0030)
class UWKNDTutorialSoundCueData : public UDataAsset
{
public:
	TArray<class USoundCue*>                           SuccessSoundCues;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<class USoundCue*>                           FailureSoundCues;                                         // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDTutorialSoundCueData");
		return ptr;
	}

};


// Class WKND.WKNDVisionManager
// 0x0010 (0x0328 - 0x0318)
class AWKNDVisionManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0318(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDVisionManager");
		return ptr;
	}


	void StopVisionRendering();
	void StartVisionRendering();
};


// Class WKND.WKNDWaitForMontageEnd
// 0x0028 (0x0050 - 0x0028)
class UWKNDWaitForMontageEnd : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnEnded;                                                  // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0038(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDWaitForMontageEnd");
		return ptr;
	}


	void NotifyEnded();
	class UWKNDWaitForMontageEnd* STATIC_CreateMontageEndProxy(class URPOCStagedCombatComponent* Target, class UAnimMontage* Montage, float WaitToStartPlaying);
};


// Class WKND.WKNDWorldsManager
// 0x00C8 (0x00F0 - 0x0028)
class UWKNDWorldsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBackToMainWorld;                                        // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
	TMap<int, struct FWKNDWorldInfo>                   WorldMap;                                                 // 0x0048(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x58];                                      // 0x0098(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDWorldsManager");
		return ptr;
	}


	void OnPreLoadMap(const struct FString& LoadingMap);
	void OnPostLoadMap(class UWorld* World);
	void DestroyCurrentWorld();
	int CreateWorld(const struct FString& Level, const struct FLatentActionInfo& LatentInfo);
};


// Class WKND.WKNDZoeyCharacterMovementComponent
// 0x0020 (0x07F0 - 0x07D0)
class UWKNDZoeyCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x07D0(0x0004) MISSED OFFSET
	float                                              creepMaxSpeed;                                            // 0x07D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              walkMaxSpeed;                                             // 0x07D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              runMaxSpeed;                                              // 0x07DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              sprintMaxSpeed;                                           // 0x07E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x07E4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDZoeyCharacterMovementComponent");
		return ptr;
	}


	void STATIC_SetMoveType(class AActor* Zoe, EBuddyAIMovementType moveType);
};


// Class WKND.WKNDZoeyDroidAIController
// 0x0000 (0x0410 - 0x0410)
class AWKNDZoeyDroidAIController : public AAIController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDZoeyDroidAIController");
		return ptr;
	}

};


// Class WKND.WKNDZoeyDroidCharacter
// 0x0050 (0x0780 - 0x0730)
class AWKNDZoeyDroidCharacter : public AInterfaceCharacter
{
public:
	bool                                               drawZoeyDebug;                                            // 0x0730(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0731(0x0007) MISSED OFFSET
	struct FString                                     destinationString;                                        // 0x0738(0x0010) (BlueprintVisible, ZeroConstructor, Transient)
	class UAIWorldInteractionComponent*                worldInteraction;                                         // 0x0748(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAIInstructionComponent*                     Instructions;                                             // 0x0750(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UAIPatrolComponent*                          patrolComponent;                                          // 0x0758(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	float                                              OffScreenSaberTolerance;                                  // 0x0760(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0764(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDZoeyDroidCharacter");
		return ptr;
	}


	void WanderEnable();
	void WanderDisable();
	void PlayerSaberCut(class ARPOCPickup_Lightsaber* Saber);
	void OnReachedTarget();
	bool IsMovingToActor(class AActor* GoalActor);
	void AnimProxy_ObjectThrow(bool oneHand, float throwDistance);
	void AnimProxy_ObjectPickup(bool oneHand, float Height);
	void AnimProxy_ObjectLetGo();
	void AnimProxy_ObjectHandOver(bool oneHand);
	void AnimProxy_ObjectCatchSuccess(bool oneHand, float catchAngle);
	void AnimProxy_ObjectCatchReady(bool oneHand, float catchAngle);
	void AnimProxy_ObjectCatchFail(bool oneHand);
};


// Class WKND.WKNDZoeyPathFollowingComponent
// 0x0000 (0x0400 - 0x0400)
class UWKNDZoeyPathFollowingComponent : public UCrowdFollowingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDZoeyPathFollowingComponent");
		return ptr;
	}

};


// Class WKND.WKNDZoeyPawn
// 0x0000 (0x0440 - 0x0440)
class AWKNDZoeyPawn : public ABuddyAIPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.WKNDZoeyPawn");
		return ptr;
	}

};


// Class WKND.XLABMotionControllerOffsetNode
// 0x0000 (0x0038 - 0x0038)
class UXLABMotionControllerOffsetNode : public UXLABMotionControllerPipelineNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class WKND.XLABMotionControllerOffsetNode");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
