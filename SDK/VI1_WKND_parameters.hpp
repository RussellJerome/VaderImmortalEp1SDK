#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WKND.AIDebugRenderer.GetAIDebugRender
struct UAIDebugRenderer_GetAIDebugRender_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.Update
struct UWKNDGrabberComponent_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.SetHoldsLoosely
struct UWKNDGrabberComponent_SetHoldsLoosely_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.SetHandType
struct UWKNDGrabberComponent_SetHandType_Params
{
	EGrabHand                                          Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.Reset
struct UWKNDGrabberComponent_Reset_Params
{
};

// Function WKND.WKNDGrabberComponent.IsInState
struct UWKNDGrabberComponent_IsInState_Params
{
	EGrabbingState                                     TestState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.IsHoldingSomething
struct UWKNDGrabberComponent_IsHoldingSomething_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.HandType
struct UWKNDGrabberComponent_HandType_Params
{
	EGrabHand                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.Grab
struct UWKNDGrabberComponent_Grab_Params
{
	class AActor*                                      actorToGrab;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   Locator;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.GetHoldState
struct UWKNDGrabberComponent_GetHoldState_Params
{
	EGrabbingState                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.GetHeldObject
struct UWKNDGrabberComponent_GetHeldObject_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.GetGrabLocator
struct UWKNDGrabberComponent_GetGrabLocator_Params
{
	class URPOCGrabLocatorComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.GetGrabbingTime
struct UWKNDGrabberComponent_GetGrabbingTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.Drop
struct UWKNDGrabberComponent_Drop_Params
{
	bool                                               GoIntoRecoveryState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               preventImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabberComponent.Debugging
struct UWKNDGrabberComponent_Debugging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIGrabberComponent.Drop
struct UAIGrabberComponent_Drop_Params
{
	bool                                               GoIntoRecoveryState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               preventImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.SetSignal
struct UAIInstructionComponent_SetSignal_Params
{
	struct FName                                       SignalName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.RunInstructions
struct UAIInstructionComponent_RunInstructions_Params
{
};

// Function WKND.AIInstructionComponent.InternalEnqueueStatusCheckInstruction
struct UAIInstructionComponent_InternalEnqueueStatusCheckInstruction_Params
{
	EAIStatusCheckType                                 StatusCheck;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function WKND.AIInstructionComponent.InternalEnqueueCallbackInstruction
struct UAIInstructionComponent_InternalEnqueueCallbackInstruction_Params
{
	class UAIInstructionComponent*                     InstructionComp;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function WKND.AIInstructionComponent.ImmediateStopMontage
struct UAIInstructionComponent_ImmediateStopMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.HasInstructions
struct UAIInstructionComponent_HasInstructions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.GetInteractionStartedName
struct UAIInstructionComponent_GetInteractionStartedName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.GetInteractionFailedName
struct UAIInstructionComponent_GetInteractionFailedName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.GetInteractionCompleteName
struct UAIInstructionComponent_GetInteractionCompleteName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.GetFlyCompleteName
struct UAIInstructionComponent_GetFlyCompleteName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.ForgetAllInstructions
struct UAIInstructionComponent_ForgetAllInstructions_Params
{
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.FeetToRoot
struct UAIInstructionComponent_FeetToRoot_Params
{
	struct FVector                                     feetVector;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueWaitOnSignalInstruction
struct UAIInstructionComponent_EnqueueWaitOnSignalInstruction_Params
{
	struct FName                                       SignalName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ClearSignalAtStart;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueWaitOnCountdownTimerInstruction
struct UAIInstructionComponent_EnqueueWaitOnCountdownTimerInstruction_Params
{
	struct FName                                       TimerName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueWaitInstruction
struct UAIInstructionComponent_EnqueueWaitInstruction_Params
{
	bool                                               WaitForever;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaitSeconds;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueWaitForMontageToFinishInstruction
struct UAIInstructionComponent_EnqueueWaitForMontageToFinishInstruction_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueWaitForDialogueToFinishInstruction
struct UAIInstructionComponent_EnqueueWaitForDialogueToFinishInstruction_Params
{
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueUseInteractableInstruction
struct UAIInstructionComponent_EnqueueUseInteractableInstruction_Params
{
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueUberMove
struct UAIInstructionComponent_EnqueueUberMove_Params
{
	struct FVector                                     Destination;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Facing;                                                   // (Parm, IsPlainOldData)
	bool                                               alignOnComplete;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdDistance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ThresholdAngle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EAIMovementOverride                                moveOverride;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EBuddyAIMovementType                               moveType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueTurnToOrientationInstruction
struct UAIInstructionComponent_EnqueueTurnToOrientationInstruction_Params
{
	struct FRotator                                    Orientation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ThresholdAngle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueTurnToInstruction
struct UAIInstructionComponent_EnqueueTurnToInstruction_Params
{
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ThresholdAngle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueThrowMontageInstruction
struct UAIInstructionComponent_EnqueueThrowMontageInstruction_Params
{
	struct FVector                                     toThrow;                                                  // (Parm, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              longRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueThrowImmediateInstruction
struct UAIInstructionComponent_EnqueueThrowImmediateInstruction_Params
{
	struct FVector                                     toThrow;                                                  // (Parm, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              longRange;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueThrowHeldPickupInstruction
struct UAIInstructionComponent_EnqueueThrowHeldPickupInstruction_Params
{
	struct FVector                                     toThrow;                                                  // (Parm, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               rotateFirst;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               waitForComplete;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EAIThrowSelection                                  throwOverride;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueStartMontageInstruction
struct UAIInstructionComponent_EnqueueStartMontageInstruction_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               stopOnCleanup;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartingSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               overrideBlend;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendOverride;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueStartDialogueInstruction
struct UAIInstructionComponent_EnqueueStartDialogueInstruction_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueStartCountdownTimerInstruction
struct UAIInstructionComponent_EnqueueStartCountdownTimerInstruction_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TimerName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueShootAtActorSideInstruction
struct UAIInstructionComponent_EnqueueShootAtActorSideInstruction_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActorSide>                            WhichSide;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueShootAtActorInstruction
struct UAIInstructionComponent_EnqueueShootAtActorInstruction_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueRotateOnSpotInstruction
struct UAIInstructionComponent_EnqueueRotateOnSpotInstruction_Params
{
	float                                              angleToRotate;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              rotateDuration;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueResumeMontageInstruction
struct UAIInstructionComponent_EnqueueResumeMontageInstruction_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueReleaseActorInstruction
struct UAIInstructionComponent_EnqueueReleaseActorInstruction_Params
{
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueuePlayMontageInstruction
struct UAIInstructionComponent_EnqueuePlayMontageInstruction_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartingSection;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueuePlayDialogueInstruction
struct UAIInstructionComponent_EnqueuePlayDialogueInstruction_Params
{
	class USoundBase*                                  Sound;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueuePauseMontageInstruction
struct UAIInstructionComponent_EnqueuePauseMontageInstruction_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueMoveToRunThresholdInstruction
struct UAIInstructionComponent_EnqueueMoveToRunThresholdInstruction_Params
{
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ThresholdDistance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RunThresholdDistance;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueMoveToInstruction
struct UAIInstructionComponent_EnqueueMoveToInstruction_Params
{
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ThresholdDistance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EBuddyAIMovementType                               MovementType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueMoveAndFaceInstruction
struct UAIInstructionComponent_EnqueueMoveAndFaceInstruction_Params
{
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Facing;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ThresholdDistance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueMoveAndAlignToInstruction
struct UAIInstructionComponent_EnqueueMoveAndAlignToInstruction_Params
{
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EBuddyAIMovementType                               MovementType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LerpTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EAIAlignComponent                                  alignComponent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueJumpToMontageSectionInstruction
struct UAIInstructionComponent_EnqueueJumpToMontageSectionInstruction_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SectionName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               JumpToEnd;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueGrabPickupInstruction
struct UAIInstructionComponent_EnqueueGrabPickupInstruction_Params
{
	class AActor*                                      toGrab;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               moveTo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               rotateTo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               waitForComplete;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueGrabActorInstruction
struct UAIInstructionComponent_EnqueueGrabActorInstruction_Params
{
	class AActor*                                      toGrab;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueFlyToInstruction
struct UAIInstructionComponent_EnqueueFlyToInstruction_Params
{
	struct FVector                                     Destination;                                              // (Parm, IsPlainOldData)
	int                                                Exp;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               waitForComplete;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForceFlyStraight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueFlyThroughPlayerSideInstruction
struct UAIInstructionComponent_EnqueueFlyThroughPlayerSideInstruction_Params
{
	TEnumAsByte<EActorSide>                            WhichSide;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSmoothEnd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SideDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SideHeightRatio;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FMovementParams                             MovementParams;                                           // (Parm, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueCompositeMoveInstruction
struct UAIInstructionComponent_EnqueueCompositeMoveInstruction_Params
{
	TArray<class ATargetPoint*>                        route;                                                    // (Parm, ZeroConstructor)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.EnqueueAlignToInstruction
struct UAIInstructionComponent_EnqueueAlignToInstruction_Params
{
	struct FVector                                     Target;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LerpTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               smoothCurve;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EAIAlignComponent                                  alignComponent;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIInstructionComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIInstructionComponent.ClearSignal
struct UAIInstructionComponent_ClearSignal_Params
{
	struct FName                                       SignalName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.AIPatrolComponent.StopPatrolling
struct UAIPatrolComponent_StopPatrolling_Params
{
};

// Function WKND.AIPatrolComponent.StartPatrolling
struct UAIPatrolComponent_StartPatrolling_Params
{
	EAIPatrolStart                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EAIPatrolEnd                                       End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIPatrolComponent.SetPatrolRoute
struct UAIPatrolComponent_SetPatrolRoute_Params
{
	TArray<class ATargetPoint*>                        inPatrolRoute;                                            // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIPatrolComponent.SetPatrolIndex
struct UAIPatrolComponent_SetPatrolIndex_Params
{
	int                                                nextIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIPatrolComponent.MoveToPatrolPointIndex
struct UAIPatrolComponent_MoveToPatrolPointIndex_Params
{
	int                                                nextIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIPatrolComponent.IsPatrolling
struct UAIPatrolComponent_IsPatrolling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIPatrolComponent.HasValidPatrolRoute
struct UAIPatrolComponent_HasValidPatrolRoute_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIPatrolComponent.HasPatrolRequested
struct UAIPatrolComponent_HasPatrolRequested_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIPatrolComponent.GetPatrolLength
struct UAIPatrolComponent_GetPatrolLength_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIPatrolComponent.FindPatrolPointAtIndex
struct UAIPatrolComponent_FindPatrolPointAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ATargetPoint*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIPatrolComponent.FindFurthestPatrolPoint
struct UAIPatrolComponent_FindFurthestPatrolPoint_Params
{
	struct FVector                                     toLocation;                                               // (ConstParm, Parm, IsPlainOldData)
	class ATargetPoint*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIPatrolComponent.FindClosestPatrolPointIndex
struct UAIPatrolComponent_FindClosestPatrolPointIndex_Params
{
	struct FVector                                     toLocation;                                               // (ConstParm, Parm, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIPositioningComponent.GetAIPositioningComponent
struct UAIPositioningComponent_GetAIPositioningComponent_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAIPositioningComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.AIWanderVolume.ContainsPoint
struct AAIWanderVolume_ContainsPoint_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIWorldInteractionComponent.WanderBehaviourFinished
struct UAIWorldInteractionComponent_WanderBehaviourFinished_Params
{
};

// Function WKND.AIWorldInteractionComponent.TriggerThrow
struct UAIWorldInteractionComponent_TriggerThrow_Params
{
};

// Function WKND.AIWorldInteractionComponent.StopPlayingCatch
struct UAIWorldInteractionComponent_StopPlayingCatch_Params
{
};

// Function WKND.AIWorldInteractionComponent.StartPlayingCatch
struct UAIWorldInteractionComponent_StartPlayingCatch_Params
{
	class AActor*                                      ball;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.AIWorldInteractionComponent.SetupThrow
struct UAIWorldInteractionComponent_SetupThrow_Params
{
	struct FVector                                     Point;                                                    // (Parm, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EAIThrowSelection                                  throwOverride;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.AIWorldInteractionComponent.SetFollowTarget
struct UAIWorldInteractionComponent_SetFollowTarget_Params
{
	class AActor*                                      FollowTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.AIWorldInteractionComponent.SearchForWanderTarget
struct UAIWorldInteractionComponent_SearchForWanderTarget_Params
{
};

// Function WKND.AIWorldInteractionComponent.IsPlayingCatch
struct UAIWorldInteractionComponent_IsPlayingCatch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AIWorldInteractionComponent.ClearFollowTarget
struct UAIWorldInteractionComponent_ClearFollowTarget_Params
{
};

// Function WKND.AnimUtils.RemoveMetaDataOfClass
struct UAnimUtils_RemoveMetaDataOfClass_Params
{
	class UAnimationAsset*                             AnimationAsset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MetaDataClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.AnimUtils.RemoveMetaData
struct UAnimUtils_RemoveMetaData_Params
{
	class UAnimationAsset*                             AnimationAsset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMetaData*                               MetaDataObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.AnimUtils.RemoveAllMetaData
struct UAnimUtils_RemoveAllMetaData_Params
{
	class UAnimationAsset*                             AnimationAsset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.AnimUtils.GetMetaDataOfClass
struct UAnimUtils_GetMetaDataOfClass_Params
{
	class UAnimationAsset*                             AnimationAsset;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MetaDataClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMetaData*>                       MetaDataOfClass;                                          // (ConstParm, Parm, OutParm, ZeroConstructor)
};

// Function WKND.AnimUtils.GetMetaData
struct UAnimUtils_GetMetaData_Params
{
	class UAnimationAsset*                             AnimationAsset;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMetaData*>                       MetaData;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor)
};

// Function WKND.AnimUtils.ContainsMetaDataOfClass
struct UAnimUtils_ContainsMetaDataOfClass_Params
{
	class UAnimationAsset*                             AnimationAsset;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MetaDataClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.AnimUtils.AddMetaDataObject
struct UAnimUtils_AddMetaDataObject_Params
{
	class UAnimationAsset*                             AnimationAsset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMetaData*                               MetaDataObject;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.AnimUtils.AddMetaData
struct UAnimUtils_AddMetaData_Params
{
	class UAnimationAsset*                             AnimationAsset;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MetaDataClass;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMetaData*                               MetaDataInstance;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WKND.BaseMenuActor.SetInactive
struct ABaseMenuActor_SetInactive_Params
{
};

// Function WKND.BaseMenuActor.SetActiveSubMenu
struct ABaseMenuActor_SetActiveSubMenu_Params
{
	class ASubMenuActor*                               Submenu;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BaseMenuActor.SetActive
struct ABaseMenuActor_SetActive_Params
{
};

// Function WKND.BaseMenuActor.ReceiveNewMenuComponentHovered
struct ABaseMenuActor_ReceiveNewMenuComponentHovered_Params
{
	class UMenuBaseComponent*                          HoveredComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.BaseMenuActor.ReceiveMenuDeactivated
struct ABaseMenuActor_ReceiveMenuDeactivated_Params
{
};

// Function WKND.BaseMenuActor.ReceiveMenuActivated
struct ABaseMenuActor_ReceiveMenuActivated_Params
{
};

// Function WKND.BaseMenuActor.PlayTabChangedSound
struct ABaseMenuActor_PlayTabChangedSound_Params
{
	class UMenuTabComponent*                           MenuTabComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.BaseMenuActor.PlayScrollContainerChangedSound
struct ABaseMenuActor_PlayScrollContainerChangedSound_Params
{
	class UMenuScrollContainerComponent*               MenuScrollContainerComponent;                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIssuedFromConsole;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BaseMenuActor.PlayRadiobuttonChangedSound
struct ABaseMenuActor_PlayRadiobuttonChangedSound_Params
{
	class UMenuRadioButtonComponent*                   MenuRadioButtonComponent;                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.BaseMenuActor.PlayButtonSoundAtLocation
struct ABaseMenuActor_PlayButtonSoundAtLocation_Params
{
	struct FVector                                     ButtonLocation;                                           // (Parm, IsPlainOldData)
	EMenuButtonState                                   ButtonState;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBackButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsConsoleButton;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BaseMenuActor.PlayButtonSound
struct ABaseMenuActor_PlayButtonSound_Params
{
	class UMenuButtonComponent*                        MenuButtonComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsBackButton;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsConsoleButton;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BaseMenuActor.OnActorInteractReleased
struct ABaseMenuActor_OnActorInteractReleased_Params
{
};

// Function WKND.BaseMenuActor.OnActorInteractPressed
struct ABaseMenuActor_OnActorInteractPressed_Params
{
	class UFrontendInteractionController*              Controller;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.BaseMenuActor.OnActorHoverEnd
struct ABaseMenuActor_OnActorHoverEnd_Params
{
	bool                                               bInteractionKeyPressed;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BaseMenuActor.OnActorHoverBegin
struct ABaseMenuActor_OnActorHoverBegin_Params
{
	class UFrontendInteractionController*              Controller;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.BaseMenuActor.GetActiveSubmenu
struct ABaseMenuActor_GetActiveSubmenu_Params
{
	class ASubMenuActor*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.BaseMenuActor.AddSubMenu
struct ABaseMenuActor_AddSubMenu_Params
{
	class ASubMenuActor*                               Submenu;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class ABaseMenuActor*                              ParentMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BlackoutWidget.SetIndicatorOpacity
struct UBlackoutWidget_SetIndicatorOpacity_Params
{
	float                                              Opacity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BlackoutWidget.SetAngleIndicatorRotation
struct UBlackoutWidget_SetAngleIndicatorRotation_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BlackoutWidget.Init
struct UBlackoutWidget_Init_Params
{
};

// Function WKND.BlackoutWidget.FadeOutWarningText
struct UBlackoutWidget_FadeOutWarningText_Params
{
};

// Function WKND.BlackoutWidget.FadeOutAngleIndicatorImage
struct UBlackoutWidget_FadeOutAngleIndicatorImage_Params
{
};

// Function WKND.BlackoutWidget.FadeInWarningText
struct UBlackoutWidget_FadeInWarningText_Params
{
};

// Function WKND.BlackoutWidget.FadeInAngleIndicatorImage
struct UBlackoutWidget_FadeInAngleIndicatorImage_Params
{
};

// Function WKND.BodyComponent.StartLocomotion
struct UBodyComponent_StartLocomotion_Params
{
	TEnumAsByte<ENTSnapDirection>                      Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BodyComponent.EndLocomotion
struct UBodyComponent_EndLocomotion_Params
{
};

// Function WKND.RICEAIController.GetAICoordinator
struct ARICEAIController_GetAICoordinator_Params
{
	class ARICEAICoordinator*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.BuddyAIPawn.WanderBehaviourFinished
struct ABuddyAIPawn_WanderBehaviourFinished_Params
{
};

// Function WKND.BuddyAIPawn.TriggerInteraction
struct ABuddyAIPawn_TriggerInteraction_Params
{
	class UBuddyInteractableComponent*                 Interactable;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	ETriggeredInteractionResult                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.BuddyAIPawn.StopPlayingThrowAndCatch
struct ABuddyAIPawn_StopPlayingThrowAndCatch_Params
{
};

// Function WKND.BuddyAIPawn.StartPlayingThrowAndCatch
struct ABuddyAIPawn_StartPlayingThrowAndCatch_Params
{
	class AActor*                                      ball;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               fetchOnly;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyAIPawn.SetupIdleBehaviour
struct ABuddyAIPawn_SetupIdleBehaviour_Params
{
};

// Function WKND.BuddyAIPawn.SetSignal
struct ABuddyAIPawn_SetSignal_Params
{
	struct FName                                       SignalName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyAIPawn.SetFollowTarget
struct ABuddyAIPawn_SetFollowTarget_Params
{
	class AActor*                                      FollowTarget;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyAIPawn.SearchForWanderTarget
struct ABuddyAIPawn_SearchForWanderTarget_Params
{
};

// Function WKND.BuddyAIPawn.SearchForPointOfInterest
struct ABuddyAIPawn_SearchForPointOfInterest_Params
{
};

// Function WKND.BuddyAIPawn.OnThrowCatchComplete
struct ABuddyAIPawn_OnThrowCatchComplete_Params
{
};

// Function WKND.BuddyAIPawn.OnPickupTakenFromMe
struct ABuddyAIPawn_OnPickupTakenFromMe_Params
{
};

// Function WKND.BuddyAIPawn.OnPickupReleased
struct ABuddyAIPawn_OnPickupReleased_Params
{
};

// Function WKND.BuddyAIPawn.OnPickupGrabSuccess
struct ABuddyAIPawn_OnPickupGrabSuccess_Params
{
};

// Function WKND.BuddyAIPawn.OnPickupGrabFailed
struct ABuddyAIPawn_OnPickupGrabFailed_Params
{
};

// Function WKND.BuddyAIPawn.ForgetAllSignals
struct ABuddyAIPawn_ForgetAllSignals_Params
{
};

// Function WKND.BuddyAIPawn.ClearSignal
struct ABuddyAIPawn_ClearSignal_Params
{
	struct FName                                       SignalName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyAIPawn.ClearFollowTarget
struct ABuddyAIPawn_ClearFollowTarget_Params
{
};

// Function WKND.BuddyAIPawn.AnimProxy_ObjectThrow
struct ABuddyAIPawn_AnimProxy_ObjectThrow_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              throwDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyAIPawn.AnimProxy_ObjectPickup
struct ABuddyAIPawn_AnimProxy_ObjectPickup_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyAIPawn.AnimProxy_ObjectLetGo
struct ABuddyAIPawn_AnimProxy_ObjectLetGo_Params
{
};

// Function WKND.BuddyAIPawn.AnimProxy_ObjectHandOver
struct ABuddyAIPawn_AnimProxy_ObjectHandOver_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyAIPawn.AnimProxy_ObjectCatchSuccess
struct ABuddyAIPawn_AnimProxy_ObjectCatchSuccess_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              catchAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyAIPawn.AnimProxy_ObjectCatchReady
struct ABuddyAIPawn_AnimProxy_ObjectCatchReady_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              catchAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyAIPawn.AnimProxy_ObjectCatchFail
struct ABuddyAIPawn_AnimProxy_ObjectCatchFail_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyAIPawnMovement.PushMovementType
struct UBuddyAIPawnMovement_PushMovementType_Params
{
	EBuddyAIMovementType                               MovementType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyAIPawnMovement.PopMovementType
struct UBuddyAIPawnMovement_PopMovementType_Params
{
};

// Function WKND.BuddyFloatingMovementComponent.PushMovementType
struct UBuddyFloatingMovementComponent_PushMovementType_Params
{
	EBuddyAIMovementType                               MovementType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.BuddyFloatingMovementComponent.PopMovementType
struct UBuddyFloatingMovementComponent_PopMovementType_Params
{
};

// Function WKND.BuddyInteractableComponent.TriggeredByPlayer
struct UBuddyInteractableComponent_TriggeredByPlayer_Params
{
	class APawn*                                       BuddyPawn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	ETriggeredInteractionResult                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.BuddyInteractableComponent.StartInteraction
struct UBuddyInteractableComponent_StartInteraction_Params
{
	class UAIInstructionComponent*                     InstructionComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.BuddyInteractableComponent.CanStartInteraction
struct UBuddyInteractableComponent_CanStartInteraction_Params
{
	EBuddyInteractableType                             Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsInteraction.UnlockInteraction
struct UPhysicsInteraction_UnlockInteraction_Params
{
};

// Function WKND.PhysicsInteraction.SetEnabled
struct UPhysicsInteraction_SetEnabled_Params
{
	bool                                               bInEnabled;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PhysicsInteraction.LockInteraction
struct UPhysicsInteraction_LockInteraction_Params
{
	float                                              InLockTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLockSpeedOverride;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PhysicsInteraction.GetInteractionName
struct UPhysicsInteraction_GetInteractionName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsInteraction.GetEnabled
struct UPhysicsInteraction_GetEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsInteraction.GetDesiredBoneTransform
struct UPhysicsInteraction_GetDesiredBoneTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsInteraction.GetCurrentVelocity
struct UPhysicsInteraction_GetCurrentVelocity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsInteraction.GetCurrentTouchingComponent
struct UPhysicsInteraction_GetCurrentTouchingComponent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.PhysicsInteraction.GetCurrentTime
struct UPhysicsInteraction_GetCurrentTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CableInteractionComponent.SetStartOfCableMeshAndSocket
struct UCableInteractionComponent_SetStartOfCableMeshAndSocket_Params
{
	class USceneComponent*                             Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CableInteractionComponent.SetEndOfCableMeshAndSocket
struct UCableInteractionComponent_SetEndOfCableMeshAndSocket_Params
{
	class USceneComponent*                             Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CableInteractionComponent.AddContactPoint
struct UCableInteractionComponent_AddContactPoint_Params
{
	class USceneComponent*                             Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SubMenuActor.SwitchToParentMenu
struct ASubMenuActor_SwitchToParentMenu_Params
{
};

// Function WKND.SubMenuActor.SwitchToMenu
struct ASubMenuActor_SwitchToMenu_Params
{
	class ABaseMenuActor*                              OtherMenu;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SubMenuActor.SetTooltipText
struct ASubMenuActor_SetTooltipText_Params
{
	struct FText                                       text;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.SubMenuActor.SetParentMenu
struct ASubMenuActor_SetParentMenu_Params
{
	class ABaseMenuActor*                              Menu;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SubMenuActor.SetInactive
struct ASubMenuActor_SetInactive_Params
{
};

// Function WKND.SubMenuActor.SetConsoleMenu
struct ASubMenuActor_SetConsoleMenu_Params
{
	class ABaseMenuActor*                              ConsoleActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SubMenuActor.SetActive
struct ASubMenuActor_SetActive_Params
{
};

// Function WKND.SubMenuActor.ReceiveTwistInput
struct ASubMenuActor_ReceiveTwistInput_Params
{
	float                                              TwistValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SubMenuActor.OnBackButtonPressed
struct ASubMenuActor_OnBackButtonPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.SubMenuActor.IsActive
struct ASubMenuActor_IsActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SubMenuActor.Initialize
struct ASubMenuActor_Initialize_Params
{
	class ABaseMenuActor*                              ParentMenu;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSetStartsActive;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SubMenuActor.GetActiveMenuComponentByTag
struct ASubMenuActor_GetActiveMenuComponentByTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class UMenuBaseComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.ChapterSelectMenu.OnTabChanged
struct AChapterSelectMenu_OnTabChanged_Params
{
	struct FChangedMenuComponent                       MenuComponent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.ChapterSelectMenu.OnBackButtonPressed
struct AChapterSelectMenu_OnBackButtonPressed_Params
{
	struct FPressedButtonComponent                     MenuComponent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.MenuBaseComponent.ShowComponent
struct UMenuBaseComponent_ShowComponent_Params
{
	bool                                               bIncludeAttachedMenuElements;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuBaseComponent.HideComponent
struct UMenuBaseComponent_HideComponent_Params
{
	bool                                               bIncludeAttachedMenuElements;                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuBaseComponent.EndHover
struct UMenuBaseComponent_EndHover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuBaseComponent.DisableComponent
struct UMenuBaseComponent_DisableComponent_Params
{
	bool                                               bDisabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuBaseComponent.BeginHover
struct UMenuBaseComponent_BeginHover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ChapterSelectMenuItem.UnlockItem
struct UChapterSelectMenuItem_UnlockItem_Params
{
};

// Function WKND.ChapterSelectMenuItem.TryLoadChapter
struct UChapterSelectMenuItem_TryLoadChapter_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CheckpointListener.OnCheckpointResumed
struct UCheckpointListener_OnCheckpointResumed_Params
{
	class UWKNDProgressionCheckpointData*              ResumedCheckpoint;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AWKNDCheckpointTeleporter*                   CheckpointTeleporter;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CinematicBlendingComponent.StartBlend
struct UCinematicBlendingComponent_StartBlend_Params
{
	class ATargetPoint*                                BlendEndPosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 BlendCurve;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendStartDelay;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CinematicPositioningInterface.MoveToStartPosition
struct UCinematicPositioningInterface_MoveToStartPosition_Params
{
	class ATargetPoint*                                StartPosition;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WKND.CinematicPositioningInterface.CancelAllMovementCommands
struct UCinematicPositioningInterface_CancelAllMovementCommands_Params
{
};

// Function WKND.ClimbObject.UnlockClimbHand
struct AClimbObject_UnlockClimbHand_Params
{
	bool                                               unlockClimbHold;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ClimbObject.SetZOffset
struct AClimbObject_SetZOffset_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ClimbObject.SetEnabledClimbable
struct AClimbObject_SetEnabledClimbable_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ClimbObject.ReceiveOnReleased
struct AClimbObject_ReceiveOnReleased_Params
{
	class AWKNDMotionController*                       Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ClimbObject.ReceiveOnGrabbed
struct AClimbObject_ReceiveOnGrabbed_Params
{
	bool                                               upperHalf;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AWKNDMotionController*                       Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ClimbObject.IsUpperHalf
struct AClimbObject_IsUpperHalf_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ClimbObject.Highlight
struct AClimbObject_Highlight_Params
{
	bool                                               Highlight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ClimbObject.GetGripScale
struct AClimbObject_GetGripScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ClimbObject.GetFacingVector
struct AClimbObject_GetFacingVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatPointManager.ResetCombatPoints
struct ACombatPointManager_ResetCombatPoints_Params
{
};

// Function WKND.CombatPointManager.ReleaseCombatPoint
struct ACombatPointManager_ReleaseCombatPoint_Params
{
	TScriptInterface<class UCombatPointOccupant>       SquadMember;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CombatPointManager.OccupyCombatPoint
struct ACombatPointManager_OccupyCombatPoint_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UCombatPointOccupant>       SquadMember;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatPointManager.InitCombatPoints
struct ACombatPointManager_InitCombatPoints_Params
{
};

// Function WKND.CombatPointManager.GetVacantCombatPointsForAttacker
struct ACombatPointManager_GetVacantCombatPointsForAttacker_Params
{
	TScriptInterface<class UCombatPointOccupant>       Attacker;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	TArray<struct FKFCircleCombatPoint>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.CombatPointManager.GetVacantCombatPointsByType
struct ACombatPointManager_GetVacantCombatPointsByType_Params
{
	ENPCCombatType                                     Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKFCircleCombatPoint>                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.CombatPointManager.GetRandomVacantCombatPoint
struct ACombatPointManager_GetRandomVacantCombatPoint_Params
{
	ENPCCombatType                                     NPCCombatType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKFCircleCombatPoint                        CombatPoint;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatPointManager.GetRandomPointOnYZPlane
struct ACombatPointManager_GetRandomPointOnYZPlane_Params
{
	float                                              MaxX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnchorLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PlaneLocation;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.CombatPointManager.GetLocationAroundTargetActor
struct ACombatPointManager_GetLocationAroundTargetActor_Params
{
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.CombatPointManager.GetCombatPointForAttacker
struct ACombatPointManager_GetCombatPointForAttacker_Params
{
	TScriptInterface<class UCombatPointOccupant>       Attacker;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FKFCircleCombatPoint                        CombatPoint;                                              // (Parm, OutParm)
};

// Function WKND.CombatSquad.UpdateSquadActionCooldown
struct ACombatSquad_UpdateSquadActionCooldown_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CombatSquad.SelectSquadMembers
struct ACombatSquad_SelectSquadMembers_Params
{
	struct FScriptDelegate                             Predicate;                                                // (Parm, ZeroConstructor)
	int                                                NumMembersToSelect;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TScriptInterface<class UCombatSquadBehaviourInterface>> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.CombatSquad.ResetSquad
struct ACombatSquad_ResetSquad_Params
{
};

// Function WKND.CombatSquad.RemoveNullMembersFromSquad
struct ACombatSquad_RemoveNullMembersFromSquad_Params
{
};

// Function WKND.CombatSquad.RemoveMemberFromSquad
struct ACombatSquad_RemoveMemberFromSquad_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> Member;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSendEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CombatSquad.PrintLog
struct ACombatSquad_PrintLog_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function WKND.CombatSquad.IsInCombat
struct ACombatSquad_IsInCombat_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquad.HandleSquadAction
struct ACombatSquad_HandleSquadAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquad.HandleMemberRemoved
struct ACombatSquad_HandleMemberRemoved_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> Member;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WKND.CombatSquad.HandleMemberKilledEvent
struct ACombatSquad_HandleMemberKilledEvent_Params
{
	class AActor*                                      DeadActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWKNDDamageInfo                             KillDamageInfo;                                           // (Parm)
};

// Function WKND.CombatSquad.HandleMemberKilled
struct ACombatSquad_HandleMemberKilled_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> Member;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WKND.CombatSquad.HandleMemberAdded
struct ACombatSquad_HandleMemberAdded_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> NewMember;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WKND.CombatSquad.GetSquadSize
struct ACombatSquad_GetSquadSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquad.GetSquadMembersOfClass
struct ACombatSquad_GetSquadMembersOfClass_Params
{
	class UClass*                                      ActorClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              OutActors;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function WKND.CombatSquad.GetSquadMembersByType
struct ACombatSquad_GetSquadMembersByType_Params
{
	ENPCCombatType                                     CombatType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<TScriptInterface<class UCombatSquadBehaviourInterface>> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.CombatSquad.GetSquadMembers
struct ACombatSquad_GetSquadMembers_Params
{
	TArray<TScriptInterface<class UCombatSquadBehaviourInterface>> OutAttackers;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function WKND.CombatSquad.GetSquadMemberByIndex
struct ACombatSquad_GetSquadMemberByIndex_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UCombatSquadBehaviourInterface> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquad.GetRandomSquadMember
struct ACombatSquad_GetRandomSquadMember_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquad.EndCombat
struct ACombatSquad_EndCombat_Params
{
};

// Function WKND.CombatSquad.BeginCombat
struct ACombatSquad_BeginCombat_Params
{
};

// Function WKND.CombatSquad.AttemptSquadAction
struct ACombatSquad_AttemptSquadAction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquad.AddMemberToSquad
struct ACombatSquad_AddMemberToSquad_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> NewMember;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSendEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquad.AddMembersToSquad
struct ACombatSquad_AddMembersToSquad_Params
{
	TArray<TScriptInterface<class UCombatSquadBehaviourInterface>> NewMembers;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WKND.CombatSquadBehaviourInterface.StopAttack
struct UCombatSquadBehaviourInterface_StopAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquadBehaviourInterface.StartRangedAttack
struct UCombatSquadBehaviourInterface_StartRangedAttack_Params
{
};

// Function WKND.CombatSquadBehaviourInterface.StartMeleeAttack
struct UCombatSquadBehaviourInterface_StartMeleeAttack_Params
{
};

// Function WKND.CombatSquadBehaviourInterface.StartAttack
struct UCombatSquadBehaviourInterface_StartAttack_Params
{
	class AActor*                                      Opponent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DelayBeforeAttack;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquadBehaviourInterface.SetOpponent
struct UCombatSquadBehaviourInterface_SetOpponent_Params
{
	class ACombatPointManager*                         Opponent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquadBehaviourInterface.OnRemovedFromCombatSquad
struct UCombatSquadBehaviourInterface_OnRemovedFromCombatSquad_Params
{
	class ACombatSquad*                                Squad;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquadBehaviourInterface.OnAddedToCombatSquad
struct UCombatSquadBehaviourInterface_OnAddedToCombatSquad_Params
{
	class ACombatSquad*                                Squad;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquadBehaviourInterface.Kill
struct UCombatSquadBehaviourInterface_Kill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquadBehaviourInterface.IsAttacking
struct UCombatSquadBehaviourInterface_IsAttacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquadBehaviourInterface.GetNPCCombatType
struct UCombatSquadBehaviourInterface_GetNPCCombatType_Params
{
	ENPCCombatType                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquadBehaviourInterface.GetHealthComponent
struct UCombatSquadBehaviourInterface_GetHealthComponent_Params
{
	class UWKNDHealthComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.CombatSquadBehaviourInterface.Despawn
struct UCombatSquadBehaviourInterface_Despawn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquadBehaviourInterface.CanAttack
struct UCombatSquadBehaviourInterface_CanAttack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatSquadBehaviourInterface.BindHandleAttackComplete
struct UCombatSquadBehaviourInterface_BindHandleAttackComplete_Params
{
	struct FScriptDelegate                             HandleAttackCompleteDelegate;                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ConsoleMenuActor.SetButtonConfigMaterialParameter
struct AConsoleMenuActor_SetButtonConfigMaterialParameter_Params
{
	int                                                ConfigID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ConstructionComponent.SetTargetMesh
struct UConstructionComponent_SetTargetMesh_Params
{
	class UStaticMeshComponent*                        Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.ConstructionComponent.ReleasePart
struct UConstructionComponent_ReleasePart_Params
{
	class ARPOCBuildPart*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ConstructionComponent.GetCombinedWeight
struct UConstructionComponent_GetCombinedWeight_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ConstructionComponent.EndComponentOverlap
struct UConstructionComponent_EndComponentOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ConstructionComponent.BeginComponentOverlap
struct UConstructionComponent_BeginComponentOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.ConstructionComponent.AllowsDeconstruction
struct UConstructionComponent_AllowsDeconstruction_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ConstructionComponent.AddPart
struct UConstructionComponent_AddPart_Params
{
	class ARPOCBuildPart*                              Part;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CorvaxianBoxLatticeAnimation.RetractSinglePiston
struct UCorvaxianBoxLatticeAnimation_RetractSinglePiston_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              extension;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CorvaxianBoxLatticeAnimation.RetractAllPistons
struct UCorvaxianBoxLatticeAnimation_RetractAllPistons_Params
{
	float                                              InTotalPlayTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              extension;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPistonAnimationInterval;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPistonRandomSpeedVaration;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CorvaxianBoxLatticeAnimation.PlayRandomPatternAnimation
struct UCorvaxianBoxLatticeAnimation_PlayRandomPatternAnimation_Params
{
	float                                              InTotalPlayTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              extension;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPistonAnimationInterval;                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CorvaxianBoxLatticeAnimation.InitializeLattice
struct UCorvaxianBoxLatticeAnimation_InitializeLattice_Params
{
	class UPoseableMeshComponent*                      PoseableMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InBonePrefix;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CorvaxianBoxLatticeAnimation.GetPoseableMeshComponent
struct UCorvaxianBoxLatticeAnimation_GetPoseableMeshComponent_Params
{
	class UPoseableMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.CorvaxianBoxLatticeAnimation.ExtendSinglePiston
struct UCorvaxianBoxLatticeAnimation_ExtendSinglePiston_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              extension;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CorvaxianBoxLatticeAnimation.ExtendAllPistons
struct UCorvaxianBoxLatticeAnimation_ExtendAllPistons_Params
{
	float                                              InTotalPlayTime;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              extension;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SpeedMultiplier;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPistonAnimationInterval;                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InPistonRandomSpeedVaration;                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.DirectionTrackingComponent.ResetDirectionTrackingTransform
struct UDirectionTrackingComponent_ResetDirectionTrackingTransform_Params
{
};

// Function WKND.DirectionTrackingComponent.RemoveTargetForLookAt_Component
struct UDirectionTrackingComponent_RemoveTargetForLookAt_Component_Params
{
	class USceneComponent*                             TargetComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.DirectionTrackingComponent.RemoveTargetForLookAt
struct UDirectionTrackingComponent_RemoveTargetForLookAt_Params
{
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.DirectionTrackingComponent.CheckLookStatus_Location
struct UDirectionTrackingComponent_CheckLookStatus_Location_Params
{
	struct FVector                                     CheckLocation;                                            // (Parm, IsPlainOldData)
	bool                                               bRequireLookAt;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.DirectionTrackingComponent.CheckLookStatus_Component
struct UDirectionTrackingComponent_CheckLookStatus_Component_Params
{
	class USceneComponent*                             CheckComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bRequireLookAt;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.DirectionTrackingComponent.CheckLookStatus_Actor
struct UDirectionTrackingComponent_CheckLookStatus_Actor_Params
{
	class AActor*                                      CheckActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRequireLookAt;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.DirectionTrackingComponent.Check2DAngleToTarget
struct UDirectionTrackingComponent_Check2DAngleToTarget_Params
{
	class AActor*                                      CheckTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.DirectionTrackingComponent.AddTargetForLookAway
struct UDirectionTrackingComponent_AddTargetForLookAway_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSingleShot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationRequired;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ReportDoneEvent;                                          // (Parm, ZeroConstructor)
};

// Function WKND.DirectionTrackingComponent.AddTargetForLookAt_Component
struct UDirectionTrackingComponent_AddTargetForLookAt_Component_Params
{
	class USceneComponent*                             NewTargetComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSingleShot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationRequired;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ReportDoneEvent;                                          // (Parm, ZeroConstructor)
	bool                                               bTriggerOnlyOnce;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.DirectionTrackingComponent.AddTargetForLookAt
struct UDirectionTrackingComponent_AddTargetForLookAt_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSingleShot;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationRequired;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ReportDoneEvent;                                          // (Parm, ZeroConstructor)
	bool                                               bTriggerOnlyOnce;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.DirectionTrackingComponent.AddMotionMonitor
struct UDirectionTrackingComponent_AddMotionMonitor_Params
{
	bool                                               bSuccessOnAbove;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DurationRequired;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ReportDoneEvent;                                          // (Parm, ZeroConstructor)
};

// Function WKND.EpisodesMenuActor.OnRestartButtonPressed
struct AEpisodesMenuActor_OnRestartButtonPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.EpisodesMenuActor.OnPlayButtonPressed
struct AEpisodesMenuActor_OnPlayButtonPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.EpisodesMenuActor.OnEpisodeRadioButtonValueChanged
struct AEpisodesMenuActor_OnEpisodeRadioButtonValueChanged_Params
{
	struct FChangedMenuComponent                       ChangedMenuComponent;                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.ExtendedDojoMainMenuActor.UnlockAllWaves
struct AExtendedDojoMainMenuActor_UnlockAllWaves_Params
{
};

// Function WKND.ExtendedDojoMainMenuActor.TryLoadDojoWave
struct AExtendedDojoMainMenuActor_TryLoadDojoWave_Params
{
	struct FName                                       WaveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ExtendedDojoMainMenuActor.ShowConfirmationPrompt
struct AExtendedDojoMainMenuActor_ShowConfirmationPrompt_Params
{
	struct FText                                       WarningText;                                              // (Parm, OutParm)
};

// Function WKND.ExtendedDojoMainMenuActor.SetPauseManager
struct AExtendedDojoMainMenuActor_SetPauseManager_Params
{
	class AWKNDPauseManager*                           PauseManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ExtendedDojoMainMenuActor.SetDojoLevel
struct AExtendedDojoMainMenuActor_SetDojoLevel_Params
{
	struct FName                                       NewDojoLevelName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ExtendedDojoMainMenuActor.RequestChangeDojoLevel
struct AExtendedDojoMainMenuActor_RequestChangeDojoLevel_Params
{
};

// Function WKND.ExtendedDojoMainMenuActor.ReceiveConfirmationPromptClosed
struct AExtendedDojoMainMenuActor_ReceiveConfirmationPromptClosed_Params
{
};

// Function WKND.ExtendedDojoMainMenuActor.ReceiveConfirmationPromptCalled
struct AExtendedDojoMainMenuActor_ReceiveConfirmationPromptCalled_Params
{
	struct FText                                       WarningText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.ExtendedDojoMainMenuActor.OnResumeGamePressed
struct AExtendedDojoMainMenuActor_OnResumeGamePressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.ExtendedDojoMainMenuActor.OnQuitGamePressed
struct AExtendedDojoMainMenuActor_OnQuitGamePressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.ExtendedDojoMainMenuActor.OnConfirmationPressed
struct AExtendedDojoMainMenuActor_OnConfirmationPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.ExtendedDojoMainMenuActor.OnCancelPressed
struct AExtendedDojoMainMenuActor_OnCancelPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.ExtendedDojoMainMenuActor.OnBackToMainMenuPressed
struct AExtendedDojoMainMenuActor_OnBackToMainMenuPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.ExtendedDojoMainMenuActor.CloseConfirmationPrompt
struct AExtendedDojoMainMenuActor_CloseConfirmationPrompt_Params
{
};

// Function WKND.ExtendedDojoMainMenuActor.CanUnlockAllWaves
struct AExtendedDojoMainMenuActor_CanUnlockAllWaves_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ExtendedDojoRewardsMenuActor.UnlockAllRewards
struct AExtendedDojoRewardsMenuActor_UnlockAllRewards_Params
{
};

// Function WKND.ExtendedDojoRewardsMenuActor.OnBackButtonPressed
struct AExtendedDojoRewardsMenuActor_OnBackButtonPressed_Params
{
	struct FPressedButtonComponent                     MenuComponent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.ExtendedDojoRewardsMenuActor.HandleNewEnvironmentSelection
struct AExtendedDojoRewardsMenuActor_HandleNewEnvironmentSelection_Params
{
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ExtendedDojoRewardsMenuActor.CheckForNewEnvironmentSelection
struct AExtendedDojoRewardsMenuActor_CheckForNewEnvironmentSelection_Params
{
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ExtendedDojoRewardsMenuActor.CanUnlockAllRewards
struct AExtendedDojoRewardsMenuActor_CanUnlockAllRewards_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ExtrasMenuActor.UnlockAllWaves
struct AExtrasMenuActor_UnlockAllWaves_Params
{
};

// Function WKND.ExtrasMenuActor.TryLoadDojoWave
struct AExtrasMenuActor_TryLoadDojoWave_Params
{
	class UExtendedDojoWaveMenuItem*                   WaveItemToLoad;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ExtrasMenuActor.SpawnVisualWaveItems
struct AExtrasMenuActor_SpawnVisualWaveItems_Params
{
};

// Function WKND.ExtrasMenuActor.ReceiveAllWavesUnlocked
struct AExtrasMenuActor_ReceiveAllWavesUnlocked_Params
{
};

// Function WKND.ExtrasMenuActor.PlaySelectedWaveSurrogate
struct AExtrasMenuActor_PlaySelectedWaveSurrogate_Params
{
};

// Function WKND.ExtrasMenuActor.OnTabChanged
struct AExtrasMenuActor_OnTabChanged_Params
{
	struct FChangedMenuComponent                       MenuComponent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.ExtrasMenuActor.OnBackButtonPressed
struct AExtrasMenuActor_OnBackButtonPressed_Params
{
	struct FPressedButtonComponent                     MenuComponent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.ForceItemComponentBase.SetTetherObject
struct UForceItemComponentBase_SetTetherObject_Params
{
	class UPrimitiveComponent*                         InTetherObject;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.SetSocketPointOrigin
struct UForceItemComponentBase_SetSocketPointOrigin_Params
{
	class USceneComponent*                             InSocketPointOrigin;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.SetPhysicsObject
struct UForceItemComponentBase_SetPhysicsObject_Params
{
	class UPrimitiveComponent*                         PhysicsObject;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.SetIsTethered
struct UForceItemComponentBase_SetIsTethered_Params
{
	bool                                               InIsTethered;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.SendVibrationImpulse
struct UForceItemComponentBase_SendVibrationImpulse_Params
{
};

// Function WKND.ForceItemComponentBase.OnHit
struct UForceItemComponentBase_OnHit_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.IsTethered
struct UForceItemComponentBase_IsTethered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.HasCompletedLiftOffGround
struct UForceItemComponentBase_HasCompletedLiftOffGround_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.HasCollidedAfterForceSlowMove
struct UForceItemComponentBase_HasCollidedAfterForceSlowMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.GetTetherObject
struct UForceItemComponentBase_GetTetherObject_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.GetPhysicsObject
struct UForceItemComponentBase_GetPhysicsObject_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.GetHostSocket
struct UForceItemComponentBase_GetHostSocket_Params
{
	class UForceSocketComponent*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.ForceThrow
struct UForceItemComponentBase_ForceThrow_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, IsPlainOldData)
	class UForcePowerTargetBase*                       Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.ForceSlowMove
struct UForceItemComponentBase_ForceSlowMove_Params
{
	struct FVector                                     Impulse;                                                  // (Parm, IsPlainOldData)
};

// Function WKND.ForceItemComponentBase.BeginForceGrab
struct UForceItemComponentBase_BeginForceGrab_Params
{
	class AActor*                                      InGrabbingMotionController;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ForcePowerComponentBase.SubmitTargetForConsideration
struct UForcePowerComponentBase_SubmitTargetForConsideration_Params
{
	class UForcePowerTargetBase*                       ForceTarget;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.ForcePowerTargetBase.NotifyHitByForceItem
struct UForcePowerTargetBase_NotifyHitByForceItem_Params
{
	class UForceItemComponentBase*                     ForceItem;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.ForcePowerTargetBase.CalculateFutureLocationGivenCurrentVelocity
struct UForcePowerTargetBase_CalculateFutureLocationGivenCurrentVelocity_Params
{
	float                                              SecondsIntoFuture;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.ForceSocketComponent.SetPhysicsConstraintAttachHost
struct UForceSocketComponent_SetPhysicsConstraintAttachHost_Params
{
	class UPrimitiveComponent*                         InPhysicsConstraintAttachHost;                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.ForceSocketComponent.SetOverlapVolume
struct UForceSocketComponent_SetOverlapVolume_Params
{
	class UShapeComponent*                             InOverlapVolume;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.ForceSocketComponent.ReleaseLockedItem
struct UForceSocketComponent_ReleaseLockedItem_Params
{
};

// Function WKND.ForceSocketComponent.OnHandInteraction
struct UForceSocketComponent_OnHandInteraction_Params
{
	EXLABInteractionEventType                          EventType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ForceSocketComponent.OnEndOverlap
struct UForceSocketComponent_OnEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ForceSocketComponent.OnBeginOverlap
struct UForceSocketComponent_OnBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.ForceSocketComponent.GetOverlapVolume
struct UForceSocketComponent_GetOverlapVolume_Params
{
	class UShapeComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.UpdateUsedHandForInteraction
struct UFrontendInteractionController_UpdateUsedHandForInteraction_Params
{
	EControllerHand                                    ControllerHand;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.SetTraceLength
struct UFrontendInteractionController_SetTraceLength_Params
{
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.SetTraceChannel
struct UFrontendInteractionController_SetTraceChannel_Params
{
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.SetInteractionMethod
struct UFrontendInteractionController_SetInteractionMethod_Params
{
	EInteractionMethodEnum                             NewInteractionMethod;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.ReleaseInteractionKey
struct UFrontendInteractionController_ReleaseInteractionKey_Params
{
};

// Function WKND.FrontendInteractionController.PressInteractionKey
struct UFrontendInteractionController_PressInteractionKey_Params
{
};

// Function WKND.FrontendInteractionController.IsInteractionKeyPressed
struct UFrontendInteractionController_IsInteractionKeyPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.GetMotionControllerComponent
struct UFrontendInteractionController_GetMotionControllerComponent_Params
{
	class UMotionControllerComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.GetMotionController
struct UFrontendInteractionController_GetMotionController_Params
{
	class AWKNDMotionController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.GetLaserHitResults
struct UFrontendInteractionController_GetLaserHitResults_Params
{
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.GetInteractionMethod
struct UFrontendInteractionController_GetInteractionMethod_Params
{
	EInteractionMethodEnum                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.GetHoveredActor
struct UFrontendInteractionController_GetHoveredActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.GetHandHitResult
struct UFrontendInteractionController_GetHandHitResult_Params
{
	struct FHitResult                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.FrontendInteractionController.Deactivate
struct UFrontendInteractionController_Deactivate_Params
{
};

// Function WKND.FrontendInteractionController.Activate
struct UFrontendInteractionController_Activate_Params
{
	bool                                               bReset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.FrontendInteractionInterface.UpButton_Release
struct UFrontendInteractionInterface_UpButton_Release_Params
{
};

// Function WKND.FrontendInteractionInterface.UpButton_Press
struct UFrontendInteractionInterface_UpButton_Press_Params
{
};

// Function WKND.FrontendInteractionInterface.UpButton_HoverEnd
struct UFrontendInteractionInterface_UpButton_HoverEnd_Params
{
};

// Function WKND.FrontendInteractionInterface.UpButton_HoverBegin
struct UFrontendInteractionInterface_UpButton_HoverBegin_Params
{
};

// Function WKND.FrontendInteractionInterface.RadialButton_ValueChanged
struct UFrontendInteractionInterface_RadialButton_ValueChanged_Params
{
	float                                              TwistValue;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.FrontendInteractionInterface.DownButton_Release
struct UFrontendInteractionInterface_DownButton_Release_Params
{
};

// Function WKND.FrontendInteractionInterface.DownButton_Press
struct UFrontendInteractionInterface_DownButton_Press_Params
{
};

// Function WKND.FrontendInteractionInterface.DownButton_HoverEnd
struct UFrontendInteractionInterface_DownButton_HoverEnd_Params
{
};

// Function WKND.FrontendInteractionInterface.DownButton_HoverBegin
struct UFrontendInteractionInterface_DownButton_HoverBegin_Params
{
};

// Function WKND.FrontendInteractionInterface.Button4_Release
struct UFrontendInteractionInterface_Button4_Release_Params
{
};

// Function WKND.FrontendInteractionInterface.Button4_Press
struct UFrontendInteractionInterface_Button4_Press_Params
{
};

// Function WKND.FrontendInteractionInterface.Button4_HoverEnd
struct UFrontendInteractionInterface_Button4_HoverEnd_Params
{
};

// Function WKND.FrontendInteractionInterface.Button4_HoverBegin
struct UFrontendInteractionInterface_Button4_HoverBegin_Params
{
};

// Function WKND.FrontendInteractionInterface.Button3_Release
struct UFrontendInteractionInterface_Button3_Release_Params
{
};

// Function WKND.FrontendInteractionInterface.Button3_Press
struct UFrontendInteractionInterface_Button3_Press_Params
{
};

// Function WKND.FrontendInteractionInterface.Button3_HoverEnd
struct UFrontendInteractionInterface_Button3_HoverEnd_Params
{
};

// Function WKND.FrontendInteractionInterface.Button3_HoverBegin
struct UFrontendInteractionInterface_Button3_HoverBegin_Params
{
};

// Function WKND.FrontendInteractionInterface.Button2_Release
struct UFrontendInteractionInterface_Button2_Release_Params
{
};

// Function WKND.FrontendInteractionInterface.Button2_Press
struct UFrontendInteractionInterface_Button2_Press_Params
{
};

// Function WKND.FrontendInteractionInterface.Button2_HoverEnd
struct UFrontendInteractionInterface_Button2_HoverEnd_Params
{
};

// Function WKND.FrontendInteractionInterface.Button2_HoverBegin
struct UFrontendInteractionInterface_Button2_HoverBegin_Params
{
};

// Function WKND.FrontendInteractionInterface.Button1_Release
struct UFrontendInteractionInterface_Button1_Release_Params
{
};

// Function WKND.FrontendInteractionInterface.Button1_Press
struct UFrontendInteractionInterface_Button1_Press_Params
{
};

// Function WKND.FrontendInteractionInterface.Button1_HoverEnd
struct UFrontendInteractionInterface_Button1_HoverEnd_Params
{
};

// Function WKND.FrontendInteractionInterface.Button1_HoverBegin
struct UFrontendInteractionInterface_Button1_HoverBegin_Params
{
};

// Function WKND.FrontendInteractionInterface.BackButton_Release
struct UFrontendInteractionInterface_BackButton_Release_Params
{
};

// Function WKND.FrontendInteractionInterface.BackButton_Press
struct UFrontendInteractionInterface_BackButton_Press_Params
{
};

// Function WKND.FrontendInteractionInterface.BackButton_HoverEnd
struct UFrontendInteractionInterface_BackButton_HoverEnd_Params
{
};

// Function WKND.FrontendInteractionInterface.BackButton_HoverBegin
struct UFrontendInteractionInterface_BackButton_HoverBegin_Params
{
};

// Function WKND.GeneralUtils.SetRelativeBoneRotation
struct UGeneralUtils_SetRelativeBoneRotation_Params
{
	class UPoseableMeshComponent*                      PoseableMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EulerAngles;                                              // (Parm, IsPlainOldData)
};

// Function WKND.GeneralUtils.SetRelativeBoneLocation
struct UGeneralUtils_SetRelativeBoneLocation_Params
{
	class UPoseableMeshComponent*                      PoseableMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function WKND.GeneralUtils.NeedsEntitlementsCheck
struct UGeneralUtils_NeedsEntitlementsCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.GeneralUtils.ModulateOverTime
struct UGeneralUtils_ModulateOverTime_Params
{
	float                                              GameTimeInSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MinValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CycleTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.GeneralUtils.MakeActorAndAttachedHiddenInGameRecur
struct UGeneralUtils_MakeActorAndAttachedHiddenInGameRecur_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hidden;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GeneralUtils.IsLowQualityHardware
struct UGeneralUtils_IsLowQualityHardware_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.GeneralUtils.GetWKNDPlayerPawn
struct UGeneralUtils_GetWKNDPlayerPawn_Params
{
	class AWKNDPlayerPawn*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.GeneralUtils.GetTelemetryManager
struct UGeneralUtils_GetTelemetryManager_Params
{
	class UTelemetryManager*                           ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.GeneralUtils.GetRewardsManager
struct UGeneralUtils_GetRewardsManager_Params
{
	class URewardsManager*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.GeneralUtils.GetRatingsManager
struct UGeneralUtils_GetRatingsManager_Params
{
	class URatingsManager*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.GeneralUtils.GetComponentsByInterfaceAndTag
struct UGeneralUtils_GetComponentsByInterfaceAndTag_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InterfaceUClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.GeneralUtils.GetComponentsByInterface
struct UGeneralUtils_GetComponentsByInterface_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InterfaceUClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UActorComponent*>                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.GeneralUtils.GetComponentByInterface
struct UGeneralUtils_GetComponentByInterface_Params
{
	class AActor*                                      OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InterfaceUClass;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.GeneralUtils.DisableTickCollisionPhysicsGrabbable
struct UGeneralUtils_DisableTickCollisionPhysicsGrabbable_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RunningAverage.GetTotalSamplesTaken
struct URunningAverage_GetTotalSamplesTaken_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RunningAverage.Clear
struct URunningAverage_Clear_Params
{
};

// Function WKND.RunningAverage.CalculateAverage
struct URunningAverage_CalculateAverage_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RunningAverage.AddSample
struct URunningAverage_AddSample_Params
{
	float                                              Sample;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GhostingTriggerComponent.ShouldGhost
struct UGhostingTriggerComponent_ShouldGhost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.GhostingTriggerComponent.SetShouldGhostWithMode
struct UGhostingTriggerComponent_SetShouldGhostWithMode_Params
{
	bool                                               bShouldGhost;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EGhostingReason                                    GhostingReason;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	EGhostingMode                                      NewGhostingMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GhostingTriggerComponent.SetShouldGhost
struct UGhostingTriggerComponent_SetShouldGhost_Params
{
	bool                                               bShouldGhost;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EGhostingReason                                    GhostingReason;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GhostingTriggerComponent.SetPrimitiveComponent
struct UGhostingTriggerComponent_SetPrimitiveComponent_Params
{
	class UPrimitiveComponent*                         Component;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.GhostingTriggerComponent.SetMaterialParameterName
struct UGhostingTriggerComponent_SetMaterialParameterName_Params
{
	struct FName                                       ParameterName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GhostingTriggerComponent.RemoveTrackedComponent
struct UGhostingTriggerComponent_RemoveTrackedComponent_Params
{
	class UPrimitiveComponent*                         ComponentToRemove;                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.GhostingTriggerComponent.OnOverlapEnd
struct UGhostingTriggerComponent_OnOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GhostingTriggerComponent.OnOverlapBegin
struct UGhostingTriggerComponent_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.GhostingTriggerComponent.GetDynamicMaterialInstances
struct UGhostingTriggerComponent_GetDynamicMaterialInstances_Params
{
	TArray<class UMaterialInstanceDynamic*>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.GhostingTriggerComponent.DeactivateGhosting
struct UGhostingTriggerComponent_DeactivateGhosting_Params
{
};

// Function WKND.GhostingTriggerComponent.AddTrackedComponent
struct UGhostingTriggerComponent_AddTrackedComponent_Params
{
	class UPrimitiveComponent*                         ComponentToAdd;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.GhostingTriggerComponent.ActivateGhosting
struct UGhostingTriggerComponent_ActivateGhosting_Params
{
	bool                                               bSkipAutomaticChecks;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GrabbableCrankingComponent.SetAllowedRotationDirection
struct UGrabbableCrankingComponent_SetAllowedRotationDirection_Params
{
	class UObject*                                     Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EAllowedRotationDirection                          AllowedRotationDirection;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GrabbableCrankingComponent.LockAtCurrentRotation
struct UGrabbableCrankingComponent_LockAtCurrentRotation_Params
{
	class UObject*                                     Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldLock;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GrabbableCrankingComponent.GetPoseableMeshComponent
struct UGrabbableCrankingComponent_GetPoseableMeshComponent_Params
{
	class UPoseableMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.GrabbableCrankingComponent.GetCurrentRotationAngle
struct UGrabbableCrankingComponent_GetCurrentRotationAngle_Params
{
	class UObject*                                     Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.GrabbableDeformerComponent.SetSkeletalMeshComponent
struct UGrabbableDeformerComponent_SetSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.GrabbableDeformerComponent.SetDeformationAmount
struct UGrabbableDeformerComponent_SetDeformationAmount_Params
{
	struct FName                                       EmitterTag;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeformationAmount;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GrabbableDeformerComponent.GetSkeletalMeshComponent
struct UGrabbableDeformerComponent_GetSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.GrabbableMoverComponent.SetPoseableMeshComponent
struct UGrabbableMoverComponent_SetPoseableMeshComponent_Params
{
	class UPoseableMeshComponent*                      PoseableMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.GrabbableMoverComponent.OverrideCurrentBoneExtension
struct UGrabbableMoverComponent_OverrideCurrentBoneExtension_Params
{
	class UObject*                                     Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewBoneExtension;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GrabbableMoverComponent.LockAtCurrentLocation
struct UGrabbableMoverComponent_LockAtCurrentLocation_Params
{
	class UObject*                                     Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldLock;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GrabbableMoverComponent.GetPoseableMeshComponent
struct UGrabbableMoverComponent_GetPoseableMeshComponent_Params
{
	class UPoseableMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.GrabbableSpinnerComponent.LockRotation
struct UGrabbableSpinnerComponent_LockRotation_Params
{
	class USceneComponent*                             Emitter;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ShouldLock;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GrabbableSpinnerComponent.LockAllRotation
struct UGrabbableSpinnerComponent_LockAllRotation_Params
{
	bool                                               ShouldLock;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GrabbableSpinnerComponent.GetPoseableMeshComponent
struct UGrabbableSpinnerComponent_GetPoseableMeshComponent_Params
{
	class UPoseableMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.GrabbableSpinnerComponent.GetAngularMomentum
struct UGrabbableSpinnerComponent_GetAngularMomentum_Params
{
	class USceneComponent*                             Emitter;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.GrabbableTouchComponent.ResetTouch
struct UGrabbableTouchComponent_ResetTouch_Params
{
	class UObject*                                     Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GrabbableTwisterComponent.SetSkeletalMeshComponent
struct UGrabbableTwisterComponent_SetSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.GrabbableTwisterComponent.SetPoseableMeshComponent
struct UGrabbableTwisterComponent_SetPoseableMeshComponent_Params
{
	class UPoseableMeshComponent*                      PoseableMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.GrabbableTwisterComponent.SetMinMaxAngleConstraintForEmitter
struct UGrabbableTwisterComponent_SetMinMaxAngleConstraintForEmitter_Params
{
	class UObject*                                     Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MinMaxAngleConstraint;                                    // (Parm, IsPlainOldData)
};

// Function WKND.GrabbableTwisterComponent.SetBoneNameForEmitter
struct UGrabbableTwisterComponent_SetBoneNameForEmitter_Params
{
	class UObject*                                     Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GrabbableTwisterComponent.NotifyTwistingStopped
struct UGrabbableTwisterComponent_NotifyTwistingStopped_Params
{
};

// Function WKND.GrabbableTwisterComponent.LockAtCurrentRotation
struct UGrabbableTwisterComponent_LockAtCurrentRotation_Params
{
	class UObject*                                     Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldLock;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GrabbableTwisterComponent.GetSkeletalMeshComponent
struct UGrabbableTwisterComponent_GetSkeletalMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.GrabbableTwisterComponent.GetPoseableMeshComponent
struct UGrabbableTwisterComponent_GetPoseableMeshComponent_Params
{
	class UPoseableMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.GrabbableTwisterComponent.GetCurrentTwistAngle
struct UGrabbableTwisterComponent_GetCurrentTwistAngle_Params
{
	class UObject*                                     Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.GrabbableTwisterComponent.EnableTwisterForEmitter
struct UGrabbableTwisterComponent_EnableTwisterForEmitter_Params
{
	class UObject*                                     Emitter;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldEnable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.GripAdjustComponent.EndGripAdjustment
struct UGripAdjustComponent_EndGripAdjustment_Params
{
};

// Function WKND.GripAdjustComponent.BeginGripAdjustment
struct UGripAdjustComponent_BeginGripAdjustment_Params
{
	class URPOCGrabLocatorComponent*                   Grab;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Pivot;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.GripAdjustComponent.AdjustByAxis
struct UGripAdjustComponent_AdjustByAxis_Params
{
	struct FVector                                     Forward;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.HandClimbComponent.UpdateClimber
struct UHandClimbComponent_UpdateClimber_Params
{
	class AActor*                                      climber;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.HandClimbComponent.TryGrabClimbHold
struct UHandClimbComponent_TryGrabClimbHold_Params
{
	class AClimbObject*                                ClimbObject;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.HandClimbComponent.StopClimbHold
struct UHandClimbComponent_StopClimbHold_Params
{
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WithFallBehaviour;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.HandClimbComponent.StartFall
struct UHandClimbComponent_StartFall_Params
{
	class AClimbDismount*                              DismountPoint;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.HandClimbComponent.StartClimbShock
struct UHandClimbComponent_StartClimbShock_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.HandClimbComponent.SetOtherClimber
struct UHandClimbComponent_SetOtherClimber_Params
{
	class UHandClimbComponent*                         Other;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.HandClimbComponent.SetFallSpeed
struct UHandClimbComponent_SetFallSpeed_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.HandClimbComponent.SetCurrentClimber
struct UHandClimbComponent_SetCurrentClimber_Params
{
	EClimbPrimaryToken                                 Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.HandClimbComponent.SetClimbOffset
struct UHandClimbComponent_SetClimbOffset_Params
{
	struct FVector                                     Offset;                                                   // (ConstParm, Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LerpSpeed;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.HandClimbComponent.IsPrimary
struct UHandClimbComponent_IsPrimary_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.HandClimbComponent.IsLocked
struct UHandClimbComponent_IsLocked_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.HandClimbComponent.IsGrabbed
struct UHandClimbComponent_IsGrabbed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.HandClimbComponent.IsFalling
struct UHandClimbComponent_IsFalling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.HandClimbComponent.HitGround
struct UHandClimbComponent_HitGround_Params
{
};

// Function WKND.HandClimbComponent.GetClimbDistanceThisFrame
struct UHandClimbComponent_GetClimbDistanceThisFrame_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.HandClimbComponent.GetClimbData
struct UHandClimbComponent_GetClimbData_Params
{
	struct FVector                                     Grab;                                                     // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Forward;                                                  // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.HandClimbComponent.FallProgress
struct UHandClimbComponent_FallProgress_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.HandClimbComponent.BeginFallHaptics
struct UHandClimbComponent_BeginFallHaptics_Params
{
};

// Function WKND.HBVRTransitionComponent.TriggerTransition
struct UHBVRTransitionComponent_TriggerTransition_Params
{
	EVRCameraTransitionType                            Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.HBVRTransitionComponent.EndTransition
struct UHBVRTransitionComponent_EndTransition_Params
{
};

// Function WKND.HBVRTransitionData.TransitionEnd
struct UHBVRTransitionData_TransitionEnd_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.HBVRTransitionData.TransitionBegin
struct UHBVRTransitionData_TransitionBegin_Params
{
	class UMaterialInstanceDynamic*                    Material;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.CombatPointOccupant.OnAssignedToCombatPoint
struct UCombatPointOccupant_OnAssignedToCombatPoint_Params
{
	struct FKFCircleCombatPoint                        CombatPoint;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatPointOccupant.GetPreferredCombatPoint
struct UCombatPointOccupant_GetPreferredCombatPoint_Params
{
	TArray<struct FKFCircleCombatPoint>                AvailableCombatPoints;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.CombatPointOccupant.CanOccupyCombatPoint
struct UCombatPointOccupant_CanOccupyCombatPoint_Params
{
	struct FKFCircleCombatPoint                        CombatPoint;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.InteractionUtils.IsBestInteractiveValid
struct UInteractionUtils_IsBestInteractiveValid_Params
{
	struct FXLABBestInteractiveData                    BestInteractive;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.InteractionUtils.GetInteractionReceiverForHand
struct UInteractionUtils_GetInteractionReceiverForHand_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.InteractionUtils.GetGroupForActor
struct UInteractionUtils_GetGroupForActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractiveGroup>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.InteractionUtils.AdjustByAxis
struct UInteractionUtils_AdjustByAxis_Params
{
	struct FVector                                     Forward;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     DirectionToController;                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               Abs;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.StartAttackCooldown
struct AKungFuCircleSquad_StartAttackCooldown_Params
{
	ENPCCombatType                                     NPCCombatType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.ResetCombatPoints
struct AKungFuCircleSquad_ResetCombatPoints_Params
{
};

// Function WKND.KungFuCircleSquad.ResetAttackCooldowns
struct AKungFuCircleSquad_ResetAttackCooldowns_Params
{
};

// Function WKND.KungFuCircleSquad.ResetAttackCooldownByType
struct AKungFuCircleSquad_ResetAttackCooldownByType_Params
{
	ENPCCombatType                                     NPCCombatType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.ReleaseCombatPoint
struct AKungFuCircleSquad_ReleaseCombatPoint_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> SquadMember;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.OccupyCombatPoint
struct AKungFuCircleSquad_OccupyCombatPoint_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      SquadMember;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.IsDisengaged
struct AKungFuCircleSquad_IsDisengaged_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> Member;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.IsCurrentlyOnCooldown
struct AKungFuCircleSquad_IsCurrentlyOnCooldown_Params
{
	ENPCCombatType                                     CooldownType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.HandleCooldownReset
struct AKungFuCircleSquad_HandleCooldownReset_Params
{
	ENPCCombatType                                     CooldownType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.GetVacantCombatPointsByType
struct AKungFuCircleSquad_GetVacantCombatPointsByType_Params
{
	TArray<struct FKFCircleCombatPoint>                VacantMeleePoints;                                        // (Parm, OutParm, ZeroConstructor)
	TArray<struct FKFCircleCombatPoint>                VacantRangedPoints;                                       // (Parm, OutParm, ZeroConstructor)
	TArray<struct FKFCircleCombatPoint>                VacantMixedPoints;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function WKND.KungFuCircleSquad.GetRandomVacantCombatPoint
struct AKungFuCircleSquad_GetRandomVacantCombatPoint_Params
{
	ENPCCombatType                                     NPCCombatType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKFCircleCombatPoint                        CombatPoint;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.GetRandomPointOnYZPlane
struct AKungFuCircleSquad_GetRandomPointOnYZPlane_Params
{
	float                                              MaxX;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxY;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnchorLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PlaneLocation;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.GetRandomCandidateByCombatType
struct AKungFuCircleSquad_GetRandomCandidateByCombatType_Params
{
	ENPCCombatType                                     NPCCombatType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Candidate;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.GetRandomCandidate
struct AKungFuCircleSquad_GetRandomCandidate_Params
{
	class AActor*                                      Candidate;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.GetLocationAroundTargetActor
struct AKungFuCircleSquad_GetLocationAroundTargetActor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.GetCombatPointForAttacker
struct AKungFuCircleSquad_GetCombatPointForAttacker_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> Attacker;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FKFCircleCombatPoint                        CombatPoint;                                              // (Parm, OutParm)
};

// Function WKND.KungFuCircleSquad.GetClosestVacantCombatPoint
struct AKungFuCircleSquad_GetClosestVacantCombatPoint_Params
{
	class AActor*                                      Attacker;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FKFCircleCombatPoint                        CombatPoint;                                              // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.GetCandidates
struct AKungFuCircleSquad_GetCandidates_Params
{
	TArray<class AActor*>                              All;                                                      // (Parm, OutParm, ZeroConstructor)
	TArray<class AActor*>                              Melee;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<class AActor*>                              Ranged;                                                   // (Parm, OutParm, ZeroConstructor)
	TArray<class AActor*>                              Mixed;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WKND.KungFuCircleSquad.AssignRandomCombatPointToDisengaged
struct AKungFuCircleSquad_AssignRandomCombatPointToDisengaged_Params
{
	ENPCCombatType                                     CombatType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Member;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.KungFuCircleSquad.AddDisengagedMember
struct AKungFuCircleSquad_AddDisengagedMember_Params
{
	class AActor*                                      NewDisengaged;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.SetStressOnBlade
struct ULightsaberBladeComponent_SetStressOnBlade_Params
{
	float                                              NewStress;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.SetBladeScale
struct ULightsaberBladeComponent_SetBladeScale_Params
{
	float                                              NewBladeScale;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.OnOverlapBegin
struct ULightsaberBladeComponent_OnOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.IsGlancing
struct ULightsaberBladeComponent_IsGlancing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.IsCutting
struct ULightsaberBladeComponent_IsCutting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.GetTipLocation
struct ULightsaberBladeComponent_GetTipLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.GetStressOnBlade
struct ULightsaberBladeComponent_GetStressOnBlade_Params
{
	float                                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.GetScaledBladeLength
struct ULightsaberBladeComponent_GetScaledBladeLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.GetReverseCutDirection
struct ULightsaberBladeComponent_GetReverseCutDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.GetLastFrameMovement
struct ULightsaberBladeComponent_GetLastFrameMovement_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.GetHiltLocation
struct ULightsaberBladeComponent_GetHiltLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.GetCuttingPlane
struct ULightsaberBladeComponent_GetCuttingPlane_Params
{
	struct FLightsaberCuttingPlane                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function WKND.LightsaberBladeComponent.GetCutDirection
struct ULightsaberBladeComponent_GetCutDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.GetBladeSpeed
struct ULightsaberBladeComponent_GetBladeSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.GetBladeScale
struct ULightsaberBladeComponent_GetBladeScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberBladeComponent.GetBladeDirection
struct ULightsaberBladeComponent_GetBladeDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberCuttingFX.UpdateSplineScorch
struct ALightsaberCuttingFX_UpdateSplineScorch_Params
{
};

// Function WKND.LightsaberCuttingFX.UpdateScorchMaterialParams
struct ALightsaberCuttingFX_UpdateScorchMaterialParams_Params
{
};

// Function WKND.LightsaberCuttingFX.UpdatePointStabMaterialParams
struct ALightsaberCuttingFX_UpdatePointStabMaterialParams_Params
{
};

// Function WKND.LightsaberCuttingFX.UpdatePointStab
struct ALightsaberCuttingFX_UpdatePointStab_Params
{
};

// Function WKND.LightsaberCuttingFX.UpdateGlancePFX
struct ALightsaberCuttingFX_UpdateGlancePFX_Params
{
};

// Function WKND.LightsaberCuttingFX.UpdateGlanceDecal
struct ALightsaberCuttingFX_UpdateGlanceDecal_Params
{
};

// Function WKND.LightsaberCuttingFX.UpdateCuttingPFXParams
struct ALightsaberCuttingFX_UpdateCuttingPFXParams_Params
{
};

// Function WKND.LightsaberCuttingFX.StopSplineScorch
struct ALightsaberCuttingFX_StopSplineScorch_Params
{
};

// Function WKND.LightsaberCuttingFX.StopScorchMaterialParams
struct ALightsaberCuttingFX_StopScorchMaterialParams_Params
{
};

// Function WKND.LightsaberCuttingFX.StopPointStab
struct ALightsaberCuttingFX_StopPointStab_Params
{
};

// Function WKND.LightsaberCuttingFX.StopGlancePFX
struct ALightsaberCuttingFX_StopGlancePFX_Params
{
};

// Function WKND.LightsaberCuttingFX.StopCuttingPFX
struct ALightsaberCuttingFX_StopCuttingPFX_Params
{
};

// Function WKND.LightsaberCuttingFX.StartSplineScorch
struct ALightsaberCuttingFX_StartSplineScorch_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, IsPlainOldData)
};

// Function WKND.LightsaberCuttingFX.StartPointStab
struct ALightsaberCuttingFX_StartPointStab_Params
{
};

// Function WKND.LightsaberCuttingFX.StartGlancePFX
struct ALightsaberCuttingFX_StartGlancePFX_Params
{
};

// Function WKND.LightsaberCuttingFX.StartGlanceDecal
struct ALightsaberCuttingFX_StartGlanceDecal_Params
{
};

// Function WKND.LightsaberCuttingFX.ScorchGeneric
struct ALightsaberCuttingFX_ScorchGeneric_Params
{
};

// Function WKND.LightsaberCuttingFX.ReceiveOnUpdateGlance
struct ALightsaberCuttingFX_ReceiveOnUpdateGlance_Params
{
};

// Function WKND.LightsaberCuttingFX.ReceiveOnUpdateCut
struct ALightsaberCuttingFX_ReceiveOnUpdateCut_Params
{
};

// Function WKND.LightsaberCuttingFX.ReceiveOnStartGlance
struct ALightsaberCuttingFX_ReceiveOnStartGlance_Params
{
};

// Function WKND.LightsaberCuttingFX.ReceiveOnStartCut
struct ALightsaberCuttingFX_ReceiveOnStartCut_Params
{
};

// Function WKND.LightsaberCuttingFX.ReceiveOnEndGlance
struct ALightsaberCuttingFX_ReceiveOnEndGlance_Params
{
};

// Function WKND.LightsaberCuttingFX.ReceiveOnEndCut
struct ALightsaberCuttingFX_ReceiveOnEndCut_Params
{
};

// Function WKND.LightsaberCuttingFX.PickGlowMesh
struct ALightsaberCuttingFX_PickGlowMesh_Params
{
	class UInstancedStaticMeshComponent*               ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.LightsaberCuttingFX.OnGlanceUpdated
struct ALightsaberCuttingFX_OnGlanceUpdated_Params
{
};

// Function WKND.LightsaberCuttingFX.OnGlanceStarted
struct ALightsaberCuttingFX_OnGlanceStarted_Params
{
};

// Function WKND.LightsaberCuttingFX.OnGlanceEnded
struct ALightsaberCuttingFX_OnGlanceEnded_Params
{
};

// Function WKND.LightsaberCuttingFX.OnGlance
struct ALightsaberCuttingFX_OnGlance_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (ConstParm, Parm, IsPlainOldData)
	float                                              BladeSpeed;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNewCut;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamic;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.LightsaberCuttingFX.OnCutUpdated
struct ALightsaberCuttingFX_OnCutUpdated_Params
{
};

// Function WKND.LightsaberCuttingFX.OnCutStarted
struct ALightsaberCuttingFX_OnCutStarted_Params
{
};

// Function WKND.LightsaberCuttingFX.OnCutEnded
struct ALightsaberCuttingFX_OnCutEnded_Params
{
};

// Function WKND.LightsaberCuttingFX.OnCut
struct ALightsaberCuttingFX_OnCut_Params
{
	struct FWeaponBladeCollisionPoint                  BladeColln;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              AbsoluteDepth;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ChangeInDistance;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StressOnBlade;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNewCut;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamic;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.LightsaberCuttingFX.InitScorchMaterialParams
struct ALightsaberCuttingFX_InitScorchMaterialParams_Params
{
};

// Function WKND.LightsaberCuttingFX.InitPointStabMaterialParams
struct ALightsaberCuttingFX_InitPointStabMaterialParams_Params
{
};

// Function WKND.LightsaberCuttingFX.InitCuttingPFXParams
struct ALightsaberCuttingFX_InitCuttingPFXParams_Params
{
};

// Function WKND.LightsaberCuttingFX.GetScorchMeshForSurface
struct ALightsaberCuttingFX_GetScorchMeshForSurface_Params
{
	class UStaticMesh*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberCuttingFX.GetScorchMaterialForSurface
struct ALightsaberCuttingFX_GetScorchMaterialForSurface_Params
{
	class UMaterial*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberCuttingFX.GetPointStabMaterialForSurface
struct ALightsaberCuttingFX_GetPointStabMaterialForSurface_Params
{
	class UMaterialInstance*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberCuttingFX.ClearAllFX
struct ALightsaberCuttingFX_ClearAllFX_Params
{
};

// Function WKND.LightsaberCuttingFX.CheckPointStabClearance
struct ALightsaberCuttingFX_CheckPointStabClearance_Params
{
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LightsaberCuttingFX.AddNewSplinePoint
struct ALightsaberCuttingFX_AddNewSplinePoint_Params
{
	struct FVector                                     Location;                                                 // (ConstParm, Parm, IsPlainOldData)
};

// Function WKND.LightsaberCuttingFX.AddGlow
struct ALightsaberCuttingFX_AddGlow_Params
{
};

// Function WKND.LocomotionUtils.VignetteDuringMotion
struct ULocomotionUtils_VignetteDuringMotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.UseThumbstickAngleForTeleportFacing
struct ULocomotionUtils_UseThumbstickAngleForTeleportFacing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.ThrottleShouldSlideToStoryPoints
struct ULocomotionUtils_ThrottleShouldSlideToStoryPoints_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.SwapThrottleHands
struct ULocomotionUtils_SwapThrottleHands_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.SnapTurnsResetSlideCardinals
struct ULocomotionUtils_SnapTurnsResetSlideCardinals_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.SnapTurnsInstant
struct ULocomotionUtils_SnapTurnsInstant_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.SlideUsesLockedCardinalDirections
struct ULocomotionUtils_SlideUsesLockedCardinalDirections_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.IsUsingThrottleLocomotion
struct ULocomotionUtils_IsUsingThrottleLocomotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.IsUsingTeleportLocomotion
struct ULocomotionUtils_IsUsingTeleportLocomotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.IsUsingSlideLocomotion
struct ULocomotionUtils_IsUsingSlideLocomotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.IsUsingOriginalWKNDLocomotion
struct ULocomotionUtils_IsUsingOriginalWKNDLocomotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.IsUsingOculusLocomotion
struct ULocomotionUtils_IsUsingOculusLocomotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.IsUsingNewWKNDLocomotion
struct ULocomotionUtils_IsUsingNewWKNDLocomotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.GetTeleportArcCast
struct ULocomotionUtils_GetTeleportArcCast_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.GetMandatedSnapRotateType
struct ULocomotionUtils_GetMandatedSnapRotateType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.GetLocomotionSpeed
struct ULocomotionUtils_GetLocomotionSpeed_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.GetLocomotionComfortLevel
struct ULocomotionUtils_GetLocomotionComfortLevel_Params
{
	EComfortLevelEnum                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.GetCurrentControlScheme
struct ULocomotionUtils_GetCurrentControlScheme_Params
{
	EWKNDLocomotionControlScheme                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.FadeOutDuringAcceleration
struct ULocomotionUtils_FadeOutDuringAcceleration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.CanBridgeSeparateNavmeshes
struct ULocomotionUtils_CanBridgeSeparateNavmeshes_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.AutoCompleteClimbs
struct ULocomotionUtils_AutoCompleteClimbs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.AllowTeleportToBypassClimbs
struct ULocomotionUtils_AllowTeleportToBypassClimbs_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LocomotionUtils.AllowCameraShakes
struct ULocomotionUtils_AllowCameraShakes_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LookAtControllerComponent.LookAtEnabled
struct ULookAtControllerComponent_LookAtEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.LookAtControllerComponent.EnableLookAtCustom
struct ULookAtControllerComponent_EnableLookAtCustom_Params
{
	float                                              FadeInTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELookAtFadeType>                       fadeType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.LookAtControllerComponent.EnableLookAt
struct ULookAtControllerComponent_EnableLookAt_Params
{
};

// Function WKND.LookAtControllerComponent.DisableLookAtCustom
struct ULookAtControllerComponent_DisableLookAtCustom_Params
{
	float                                              FadeOutTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ELookAtFadeType>                       fadeType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.LookAtControllerComponent.DisableLookAt
struct ULookAtControllerComponent_DisableLookAt_Params
{
};

// Function WKND.MainMenuActor.QuitGame
struct AMainMenuActor_QuitGame_Params
{
};

// Function WKND.MainMenuActor.OnStartGameButtonPressed
struct AMainMenuActor_OnStartGameButtonPressed_Params
{
	struct FPressedButtonComponent                     PressedStartButton;                                       // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.MainMenuActor.OnQuitGamePressed
struct AMainMenuActor_OnQuitGamePressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.MainMenuActor.OnConfirmationPromptCalled
struct AMainMenuActor_OnConfirmationPromptCalled_Params
{
	struct FText                                       WarningText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.MainMenuActor.OnConfirmationPressed
struct AMainMenuActor_OnConfirmationPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.MainMenuActor.OnCancelPressed
struct AMainMenuActor_OnCancelPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.MainMenuActor.OnButtonPressed
struct AMainMenuActor_OnButtonPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.MainMenuActor.CreateMenuButtonLink
struct AMainMenuActor_CreateMenuButtonLink_Params
{
	class ASubMenuActor*                               MenuActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMenuButtonComponent*                        ButtonComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.MaterialProfiler.StopProfiling
struct AMaterialProfiler_StopProfiling_Params
{
};

// Function WKND.MaterialProfiler.StartProfiling
struct AMaterialProfiler_StartProfiling_Params
{
};

// Function WKND.MaterialProfiler.Resume
struct AMaterialProfiler_Resume_Params
{
};

// Function WKND.MaterialProfiler.ProfileMaterial
struct AMaterialProfiler_ProfileMaterial_Params
{
	class UMaterialInterface*                          ProfileMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MaterialProfiler.PreviousMaterial
struct AMaterialProfiler_PreviousMaterial_Params
{
};

// Function WKND.MaterialProfiler.Pause
struct AMaterialProfiler_Pause_Params
{
};

// Function WKND.MaterialProfiler.NextMaterial
struct AMaterialProfiler_NextMaterial_Params
{
};

// Function WKND.MaterialProfiler.ApplyProfileMaterial
struct AMaterialProfiler_ApplyProfileMaterial_Params
{
	bool                                               bUseNext;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IndexOverride;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MaterialProfiler.ApplyNewProfileMaterial
struct AMaterialProfiler_ApplyNewProfileMaterial_Params
{
	class UMaterialInterface*                          ProfileMaterial;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.WithoutZ
struct UMathUtils_WithoutZ_Params
{
	struct FVector                                     In;                                                       // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.WithoutY
struct UMathUtils_WithoutY_Params
{
	struct FVector                                     In;                                                       // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.WithoutX
struct UMathUtils_WithoutX_Params
{
	struct FVector                                     In;                                                       // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.TryGetRadiusOfCircleFormedByIntersectionOfHorizontalPlaneWithSphere
struct UMathUtils_TryGetRadiusOfCircleFormedByIntersectionOfHorizontalPlaneWithSphere_Params
{
	struct FVector                                     sphereCenter;                                             // (Parm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              planeZ;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              outCircleRadius;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.TryGetPointsWhereTwoCirclesIntersect
struct UMathUtils_TryGetPointsWhereTwoCirclesIntersect_Params
{
	struct FVector2D                                   center1;                                                  // (Parm, IsPlainOldData)
	float                                              radius1;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   center2;                                                  // (Parm, IsPlainOldData)
	float                                              radius2;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   outIntersection1;                                         // (Parm, OutParm, IsPlainOldData)
	struct FVector2D                                   outIntersection2;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.TryGetHorizontalCircleSphereIntersection
struct UMathUtils_TryGetHorizontalCircleSphereIntersection_Params
{
	struct FVector                                     sphereCenter;                                             // (Parm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     circleCenter;                                             // (Parm, IsPlainOldData)
	float                                              circleRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     outIntersection1;                                         // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     outIntersection2;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.TransformQuaternionSlerp
struct UMathUtils_TransformQuaternionSlerp_Params
{
	struct FTransform                                  q1;                                                       // (Parm, IsPlainOldData)
	struct FTransform                                  q2;                                                       // (Parm, IsPlainOldData)
	float                                              Alpha;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Out;                                                      // (Parm, IsPlainOldData)
	struct FVector                                     EulerDisp;                                                // (Parm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.SignedHorizontalAngleBetweenVectors
struct UMathUtils_SignedHorizontalAngleBetweenVectors_Params
{
	struct FVector                                     vector1;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     vector2;                                                  // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.ProjectPointToLine
struct UMathUtils_ProjectPointToLine_Params
{
	struct FVector                                     ToProject;                                                // (Parm, IsPlainOldData)
	struct FVector                                     Pt1;                                                      // (Parm, IsPlainOldData)
	struct FVector                                     Pt2;                                                      // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.HorizontalAngleBetweenVectors
struct UMathUtils_HorizontalAngleBetweenVectors_Params
{
	struct FVector                                     vector1;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     vector2;                                                  // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.GetRotationOfVector
struct UMathUtils_GetRotationOfVector_Params
{
	struct FVector                                     Vector;                                                   // (Parm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.GetAngleBetweenVectorsAroundAxisInRadians
struct UMathUtils_GetAngleBetweenVectorsAroundAxisInRadians_Params
{
	struct FVector                                     FirstVector;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     SecondVector;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Axis;                                                     // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.FitCircleToPoints
struct UMathUtils_FitCircleToPoints_Params
{
	TArray<struct FVector2D>                           Points;                                                   // (Parm, ZeroConstructor)
	float                                              outRadius;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   outCenter;                                                // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.MathUtils.ConvertTransformToRelative_Fixed
struct UMathUtils_ConvertTransformToRelative_Fixed_Params
{
	struct FTransform                                  Transform;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ParentTransform;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.CalculateBallisticTrajectoryToHitTarget
struct UMathUtils_CalculateBallisticTrajectoryToHitTarget_Params
{
	float                                              InitialSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Target;                                                   // (Parm, IsPlainOldData)
	bool                                               pickLowestAngle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              outTimeToTarget;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               canHitTarget;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.MathUtils.AngleBetweenVectors
struct UMathUtils_AngleBetweenVectors_Params
{
	struct FVector                                     vector1;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     vector2;                                                  // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuElement.SpawnTextLabel
struct AMenuElement_SpawnTextLabel_Params
{
};

// Function WKND.MenuElement.ShowElement
struct AMenuElement_ShowElement_Params
{
};

// Function WKND.MenuElement.SetTooltipText
struct AMenuElement_SetTooltipText_Params
{
};

// Function WKND.MenuElement.SetLabelText
struct AMenuElement_SetLabelText_Params
{
	struct FText                                       text;                                                     // (Parm)
};

// Function WKND.MenuElement.ResetTooltipText
struct AMenuElement_ResetTooltipText_Params
{
};

// Function WKND.MenuElement.ReceiveElementEnabled
struct AMenuElement_ReceiveElementEnabled_Params
{
};

// Function WKND.MenuElement.ReceiveElementDisabled
struct AMenuElement_ReceiveElementDisabled_Params
{
};

// Function WKND.MenuElement.OnTriggerReleased
struct AMenuElement_OnTriggerReleased_Params
{
};

// Function WKND.MenuElement.OnTriggerPressed
struct AMenuElement_OnTriggerPressed_Params
{
	class UFrontendInteractionController*              Controller;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.MenuElement.OnHoverEnd
struct AMenuElement_OnHoverEnd_Params
{
	bool                                               bInteractionKeyPressed;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuElement.OnHoverBegin
struct AMenuElement_OnHoverBegin_Params
{
	class UFrontendInteractionController*              Controller;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.MenuElement.IsElementEnabled
struct AMenuElement_IsElementEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuElement.HideElement
struct AMenuElement_HideElement_Params
{
};

// Function WKND.MenuElement.EnableElement
struct AMenuElement_EnableElement_Params
{
};

// Function WKND.MenuElement.DisableElement
struct AMenuElement_DisableElement_Params
{
};

// Function WKND.MenuBaseButton.ToggleButtonState
struct AMenuBaseButton_ToggleButtonState_Params
{
};

// Function WKND.MenuBaseButton.SetStateBasedMaterial
struct AMenuBaseButton_SetStateBasedMaterial_Params
{
};

// Function WKND.MenuBaseButton.SetButtonState
struct AMenuBaseButton_SetButtonState_Params
{
	EButtonState                                       newButtonState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuBaseButton.ReceiveButtonPress
struct AMenuBaseButton_ReceiveButtonPress_Params
{
	EButtonState                                       newButtonState;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuBaseButton.PressButton
struct AMenuBaseButton_PressButton_Params
{
};

// Function WKND.MenuBaseButton.GetButtonState
struct AMenuBaseButton_GetButtonState_Params
{
	EButtonState                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuButtonComponent.ReleaseButton
struct UMenuButtonComponent_ReleaseButton_Params
{
	bool                                               bPlayAudio;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIssuedFromConsole;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuButtonComponent.PressButton
struct UMenuButtonComponent_PressButton_Params
{
	bool                                               bPlayAudio;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIssuedFromConsole;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuButtonComponent.GetButtonState
struct UMenuButtonComponent_GetButtonState_Params
{
	EMenuButtonState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuContainer.ResetAttachedElements
struct AMenuContainer_ResetAttachedElements_Params
{
};

// Function WKND.MenuContainer.FetchAttachedElements
struct AMenuContainer_FetchAttachedElements_Params
{
};

// Function WKND.MenuLabel.SetText
struct AMenuLabel_SetText_Params
{
	struct FText                                       newText;                                                  // (Parm)
};

// Function WKND.MenuMovingButton.StartButtonMovement
struct AMenuMovingButton_StartButtonMovement_Params
{
};

// Function WKND.MenuMovingButton.ButtonLerpRotation
struct AMenuMovingButton_ButtonLerpRotation_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // (Parm, IsPlainOldData)
};

// Function WKND.MenuMovingButton.ButtonLerpMovement
struct AMenuMovingButton_ButtonLerpMovement_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetPosition;                                           // (Parm, IsPlainOldData)
};

// Function WKND.MenuRadioButtonComponent.SwitchToNextButton
struct UMenuRadioButtonComponent_SwitchToNextButton_Params
{
};

// Function WKND.MenuRadioButtonComponent.SetActiveRadioButton
struct UMenuRadioButtonComponent_SetActiveRadioButton_Params
{
	class UMenuButtonComponent*                        ButtonComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.MenuRadioButtonComponent.OnRadioButtonPressed
struct UMenuRadioButtonComponent_OnRadioButtonPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.MenuRadioButtonComponent.GetActiveRadioButtonIndex
struct UMenuRadioButtonComponent_GetActiveRadioButtonIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuRadioButtonComponent.GetActiveRadioButton
struct UMenuRadioButtonComponent_GetActiveRadioButton_Params
{
	class UMenuButtonComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.MenuRadioButtons.RecreateRadioButtons
struct AMenuRadioButtons_RecreateRadioButtons_Params
{
};

// Function WKND.MenuRadioButtons.OnRadioButtonValueChanged
struct AMenuRadioButtons_OnRadioButtonValueChanged_Params
{
	class AMenuElement*                                TickBoxPtr;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuScrollContainerComponent.StopAutoScroll
struct UMenuScrollContainerComponent_StopAutoScroll_Params
{
};

// Function WKND.MenuScrollContainerComponent.StartAutoScrollUp
struct UMenuScrollContainerComponent_StartAutoScrollUp_Params
{
};

// Function WKND.MenuScrollContainerComponent.StartAutoScrollDown
struct UMenuScrollContainerComponent_StartAutoScrollDown_Params
{
};

// Function WKND.MenuScrollContainerComponent.SetSelectedElement
struct UMenuScrollContainerComponent_SetSelectedElement_Params
{
	class UMenuBaseComponent*                          MenuElement;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIssuedFromConsole;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuScrollContainerComponent.SetCurrentlySelectedIndex
struct UMenuScrollContainerComponent_SetCurrentlySelectedIndex_Params
{
	int                                                NewIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuScrollContainerComponent.GetLastSelectedIndex
struct UMenuScrollContainerComponent_GetLastSelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuScrollContainerComponent.GetIndexForElement
struct UMenuScrollContainerComponent_GetIndexForElement_Params
{
	class UMenuBaseComponent*                          MenuElement;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuScrollContainerComponent.GetElementByIndex
struct UMenuScrollContainerComponent_GetElementByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UMenuBaseComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.MenuScrollContainerComponent.GetCurrentSelectedElement
struct UMenuScrollContainerComponent_GetCurrentSelectedElement_Params
{
	class UMenuBaseComponent*                          ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.MenuScrollContainerComponent.GetCurrentlySelectedIndex
struct UMenuScrollContainerComponent_GetCurrentlySelectedIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuScrollContainerComponent.ChangeSelectionTwistInput
struct UMenuScrollContainerComponent_ChangeSelectionTwistInput_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuScrollContainerComponent.ChangeSelectionByIndex
struct UMenuScrollContainerComponent_ChangeSelectionByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIssuedFromConsole;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuSplineSlider.SetStateBasedMaterial
struct AMenuSplineSlider_SetStateBasedMaterial_Params
{
};

// Function WKND.MenuSplineSlider.GetCurrentSplineIndex
struct AMenuSplineSlider_GetCurrentSplineIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuSplineSlider.GetCurrentSliderValue
struct AMenuSplineSlider_GetCurrentSliderValue_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuTab.OnTabButtonClick
struct AMenuTab_OnTabButtonClick_Params
{
	class AMenuElement*                                element;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuTab.DetachSlotElements
struct AMenuTab_DetachSlotElements_Params
{
};

// Function WKND.MenuTab.AttachSlotElements
struct AMenuTab_AttachSlotElements_Params
{
};

// Function WKND.MenuTabComponent.SetNextTabByIndex
struct UMenuTabComponent_SetNextTabByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuTabComponent.SetActiveTab
struct UMenuTabComponent_SetActiveTab_Params
{
	class UMenuButtonComponent*                        TabButton;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.MenuTabComponent.OnTabButtonPressed
struct UMenuTabComponent_OnTabButtonPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.MenuTabComponent.HasActiveTab
struct UMenuTabComponent_HasActiveTab_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuTabComponent.GetCurrentTabIndex
struct UMenuTabComponent_GetCurrentTabIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MenuTabComponent.GetActiveTab
struct UMenuTabComponent_GetActiveTab_Params
{
	class UMenuButtonComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.MenuTabComponent.CloseActiveTab
struct UMenuTabComponent_CloseActiveTab_Params
{
};

// Function WKND.MenuTickBox.ToggleTickState
struct AMenuTickBox_ToggleTickState_Params
{
	bool                                               bBroadcastChange;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuTickBox.SetTickState
struct AMenuTickBox_SetTickState_Params
{
	ETickState                                         NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bBroadcastChange;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuTickBox.SetStateBasedMaterial
struct AMenuTickBox_SetStateBasedMaterial_Params
{
};

// Function WKND.MenuTickBox.ReceiveOnValueChangedEvent
struct AMenuTickBox_ReceiveOnValueChangedEvent_Params
{
	ETickState                                         newTickState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MenuTickBox.GetTickState
struct AMenuTickBox_GetTickState_Params
{
	ETickState                                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MotionFieldCharacter.OnThrowItem
struct AMotionFieldCharacter_OnThrowItem_Params
{
	class ARPOCForceThrowLocation*                     ThrowLocation;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class ASliceableActor*                             Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MotionFieldCharacter.OnLocationAndYawReached
struct AMotionFieldCharacter_OnLocationAndYawReached_Params
{
	struct FVector                                     DesiredLocation;                                          // (Parm, IsPlainOldData)
	bool                                               bMovingToFaceActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetFaceActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.MotionFieldMovementComponent.GetYawRate_Degrees
struct UMotionFieldMovementComponent_GetYawRate_Degrees_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.MotionFieldMovementComponent.GetYaw_Degrees
struct UMotionFieldMovementComponent_GetYaw_Degrees_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTCharacterHapticComponent.FindHapticSet
struct UNTCharacterHapticComponent_FindHapticSet_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNTCharacterHapticSet                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.NTCharacterHapticComponent.FindHapticDuration
struct UNTCharacterHapticComponent_FindHapticDuration_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTComboDetectionComponent.SimpleComboDetection
struct UNTComboDetectionComponent_SimpleComboDetection_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldPrev;                                                // (Parm, IsPlainOldData)
	struct FVector                                     WorldNow;                                                 // (Parm, IsPlainOldData)
};

// Function WKND.NTComboDetectionComponent.RegisterGestureComponent
struct UNTComboDetectionComponent_RegisterGestureComponent_Params
{
	class URPOCGestureDetector*                        NewPoseDetector;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.NTComboDetectionComponent.MakeCurrentStrike
struct UNTComboDetectionComponent_MakeCurrentStrike_Params
{
	struct FVector                                     GuardPrev;                                                // (Parm, IsPlainOldData)
	struct FVector                                     GuardNow;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     TipPrev;                                                  // (Parm, IsPlainOldData)
	struct FVector                                     TipNow;                                                   // (Parm, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNTStrike                                   Result;                                                   // (Parm, OutParm)
};

// Function WKND.NTComboDetectionComponent.GetPoseHeldValue
struct UNTComboDetectionComponent_GetPoseHeldValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTHapticComponent.TriggerHaptics
struct UNTHapticComponent_TriggerHaptics_Params
{
};

// Function WKND.NTHapticComponent.StopHaptics
struct UNTHapticComponent_StopHaptics_Params
{
};

// Function WKND.NTHapticComponent.SetPrimaryHapticHands
struct UNTHapticComponent_SetPrimaryHapticHands_Params
{
	ENTHapticHands                                     primaryHands;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTHapticComponent.SetHapticHands
struct UNTHapticComponent_SetHapticHands_Params
{
	ENTHapticHands                                     primaryHands;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	ENTHapticHands                                     secondaryHands;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Stretch;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ActivateHaptic;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTHapticComponent.PushHapticValues
struct UNTHapticComponent_PushHapticValues_Params
{
	struct FNTHapticValueByHand                        hapticValues;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.NTHapticComponent.PlayHapticEffect
struct UNTHapticComponent_PlayHapticEffect_Params
{
	struct FNTHapticData                               HapticData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.NTHapticManagerComponent.RegisterHapticComponent
struct UNTHapticManagerComponent_RegisterHapticComponent_Params
{
	class UNTHapticComponent*                          hapticComponent;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.NTHapticManagerComponent.PushHapticValues
struct UNTHapticManagerComponent_PushHapticValues_Params
{
	struct FNTHapticValueByHand                        hapticValues;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.NTHapticManagerComponent.HapticEffectUpdateScale
struct UNTHapticManagerComponent_HapticEffectUpdateScale_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HapticScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTHapticManagerComponent.HapticEffectRequest
struct UNTHapticManagerComponent_HapticEffectRequest_Params
{
	ENTHapticHands                                     hands;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNTHapticData                               haptic;                                                   // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTHapticManagerComponent.HapticEffectCancel
struct UNTHapticManagerComponent_HapticEffectCancel_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTHapticManagerComponent.ClearAllHaptics
struct UNTHapticManagerComponent_ClearAllHaptics_Params
{
};

// Function WKND.NTNinjaFunctionLibrary.StopVRTransition
struct UNTNinjaFunctionLibrary_StopVRTransition_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EVRCameraTransitionType                            Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTNinjaFunctionLibrary.StartVRTransition
struct UNTNinjaFunctionLibrary_StartVRTransition_Params
{
	class APawn*                                       Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EVRCameraTransitionType                            Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTNinjaFunctionLibrary.ShowHiddenActors
struct UNTNinjaFunctionLibrary_ShowHiddenActors_Params
{
	TArray<class AActor*>                              HiddenActors;                                             // (Parm, ZeroConstructor)
};

// Function WKND.NTNinjaFunctionLibrary.LineCheckWithTriangle
struct UNTNinjaFunctionLibrary_LineCheckWithTriangle_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     v1;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     v2;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     V3;                                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTNinjaFunctionLibrary.IsRunningOnSantaCruz
struct UNTNinjaFunctionLibrary_IsRunningOnSantaCruz_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTNinjaFunctionLibrary.HideActorsInLevel
struct UNTNinjaFunctionLibrary_HideActorsInLevel_Params
{
	class ALevelScriptActor*                           LevelScriptActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              HiddenActors;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function WKND.NTNinjaFunctionLibrary.GetPlaneIntersection
struct UNTNinjaFunctionLibrary_GetPlaneIntersection_Params
{
	class USplineComponent*                            useSpline;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPlane                                      prePlane;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FPlane                                      postPlane;                                                // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     Point;                                                    // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     CutNormal;                                                // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTNinjaFunctionLibrary.ConvertQuatToRotator
struct UNTNinjaFunctionLibrary_ConvertQuatToRotator_Params
{
	struct FQuat                                       Q;                                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.NTTokenComponent.UndenyTokens
struct UNTTokenComponent_UndenyTokens_Params
{
	TArray<struct FName>                               TokenNames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WKND.NTTokenComponent.UndenyToken
struct UNTTokenComponent_UndenyToken_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTokenComponent.SetIsMovingToken
struct UNTTokenComponent_SetIsMovingToken_Params
{
	bool                                               bIsMoving;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTokenComponent.ResetTokens
struct UNTTokenComponent_ResetTokens_Params
{
};

// Function WKND.NTTokenComponent.RemoveTokenDeactivatedDelegate
struct UNTTokenComponent_RemoveTokenDeactivatedDelegate_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WKND.NTTokenComponent.RemoveTokenActivatedDelegate
struct UNTTokenComponent_RemoveTokenActivatedDelegate_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WKND.NTTokenComponent.OnTokenDeleted
struct UNTTokenComponent_OnTokenDeleted_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTokenComponent.OnTokenCreated
struct UNTTokenComponent_OnTokenCreated_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTokenComponent.HasToken
struct UNTTokenComponent_HasToken_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTTokenComponent.HasAnyToken
struct UNTTokenComponent_HasAnyToken_Params
{
	TArray<struct FName>                               TokenNames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTTokenComponent.HasAllTokens
struct UNTTokenComponent_HasAllTokens_Params
{
	TArray<struct FName>                               TokenNames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTTokenComponent.GetTokenOwnedTimeUndilated
struct UNTTokenComponent_GetTokenOwnedTimeUndilated_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTTokenComponent.GetTokenOwnedTime
struct UNTTokenComponent_GetTokenOwnedTime_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTTokenComponent.GetTokenManager
struct UNTTokenComponent_GetTokenManager_Params
{
	class UNTTokenManager*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTTokenComponent.GetTokenHoldTimeUndilated
struct UNTTokenComponent_GetTokenHoldTimeUndilated_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTTokenComponent.GetTokenHoldTime
struct UNTTokenComponent_GetTokenHoldTime_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTTokenComponent.GetActiveTokens
struct UNTTokenComponent_GetActiveTokens_Params
{
	TArray<struct FName>                               OutTokenNames;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function WKND.NTTokenComponent.DenyTokens
struct UNTTokenComponent_DenyTokens_Params
{
	TArray<struct FName>                               TokenNames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WKND.NTTokenComponent.DenyToken
struct UNTTokenComponent_DenyToken_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTokenComponent.DeleteTokens
struct UNTTokenComponent_DeleteTokens_Params
{
	TArray<struct FName>                               TokenNames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       TokenOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveAll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTokenComponent.DeleteToken
struct UNTTokenComponent_DeleteToken_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TokenOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RemoveAll;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTokenComponent.CreateUniqueToken
struct UNTTokenComponent_CreateUniqueToken_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TokenOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.NTTokenComponent.CreateTokensForTime
struct UNTTokenComponent_CreateTokensForTime_Params
{
	TArray<struct FName>                               TokenNames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       TokenOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTokenComponent.CreateTokens
struct UNTTokenComponent_CreateTokens_Params
{
	TArray<struct FName>                               TokenNames;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       TokenOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTokenComponent.CreateTokenForTime
struct UNTTokenComponent_CreateTokenForTime_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TokenOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTokenComponent.CreateToken
struct UNTTokenComponent_CreateToken_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TokenOwner;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTokenComponent.AddTokenDeactivatedDelegate
struct UNTTokenComponent_AddTokenDeactivatedDelegate_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WKND.NTTokenComponent.AddTokenActivatedDelegate
struct UNTTokenComponent_AddTokenActivatedDelegate_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             Delegate;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WKND.NTTransformFilterComponent.MultiplyFilter_Rotation_FDXMin
struct UNTTransformFilterComponent_MultiplyFilter_Rotation_FDXMin_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTransformFilterComponent.MultiplyFilter_Rotation_FCMin
struct UNTTransformFilterComponent_MultiplyFilter_Rotation_FCMin_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTransformFilterComponent.MultiplyFilter_Rotation_Beta
struct UNTTransformFilterComponent_MultiplyFilter_Rotation_Beta_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTransformFilterComponent.MultiplyFilter_Location_FDXMin
struct UNTTransformFilterComponent_MultiplyFilter_Location_FDXMin_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTransformFilterComponent.MultiplyFilter_Location_FCMin
struct UNTTransformFilterComponent_MultiplyFilter_Location_FCMin_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTTransformFilterComponent.MultiplyFilter_Location_Beta
struct UNTTransformFilterComponent_MultiplyFilter_Location_Beta_Params
{
	float                                              Multiplier;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.NTVisibilityVolume.Enable
struct ANTVisibilityVolume_Enable_Params
{
};

// Function WKND.NTVisibilityVolume.Disable
struct ANTVisibilityVolume_Disable_Params
{
};

// Function WKND.OffensiveCombatSquad.WasDraftedForAttack
struct AOffensiveCombatSquad_WasDraftedForAttack_Params
{
	TScriptInterface<class UCombatSquadBehaviourInterface> SquadMember;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.OffensiveCombatSquad.OnAttackEnded
struct AOffensiveCombatSquad_OnAttackEnded_Params
{
	class ASquadAttack*                                Attack;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.OffensiveCombatSquad.OnAttackAboutToEnd
struct AOffensiveCombatSquad_OnAttackAboutToEnd_Params
{
	class ASquadAttack*                                Attack;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.OffensiveCombatSquad.GetOngoingAttack
struct AOffensiveCombatSquad_GetOngoingAttack_Params
{
	class ASquadAttack*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.OptionsMenuActor.ReceiveVolumeSettingUpdated
struct AOptionsMenuActor_ReceiveVolumeSettingUpdated_Params
{
	ESoundChannel                                      Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bPlaySound;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.OptionsMenuActor.ReceiveVisualCombatAssistSettingChanged
struct AOptionsMenuActor_ReceiveVisualCombatAssistSettingChanged_Params
{
};

// Function WKND.OptionsMenuActor.ReceiveSubtitlesChanged
struct AOptionsMenuActor_ReceiveSubtitlesChanged_Params
{
	bool                                               SubtitlesOn;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.OptionsMenuActor.ReceiveSeatedSettingChanged
struct AOptionsMenuActor_ReceiveSeatedSettingChanged_Params
{
};

// Function WKND.OptionsMenuActor.ReceiveComfortLevelChanged
struct AOptionsMenuActor_ReceiveComfortLevelChanged_Params
{
};

// Function WKND.OptionsMenuActor.ReceiveClimbSettingChanged
struct AOptionsMenuActor_ReceiveClimbSettingChanged_Params
{
};

// Function WKND.OptionsMenuActor.ReceiveBackButtonPressed
struct AOptionsMenuActor_ReceiveBackButtonPressed_Params
{
};

// Function WKND.OptionsMenuActor.Receive360CombatSettingChanged
struct AOptionsMenuActor_Receive360CombatSettingChanged_Params
{
};

// Function WKND.OptionsMenuActor.OnVisualCombatAssistSettingChanged
struct AOptionsMenuActor_OnVisualCombatAssistSettingChanged_Params
{
	struct FChangedMenuComponent                       MenuComponent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.OnTabChanged
struct AOptionsMenuActor_OnTabChanged_Params
{
	struct FChangedMenuComponent                       ChangedComponent;                                         // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.OnSubtitlesOnButtonPressed
struct AOptionsMenuActor_OnSubtitlesOnButtonPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.OnSubtitlesOffButtonPressed
struct AOptionsMenuActor_OnSubtitlesOffButtonPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.OnSeatedSettingChanged
struct AOptionsMenuActor_OnSeatedSettingChanged_Params
{
	struct FChangedMenuComponent                       MenuComponent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.OnMenuButtonPressed
struct AOptionsMenuActor_OnMenuButtonPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.OnLocomotionSettingChanged
struct AOptionsMenuActor_OnLocomotionSettingChanged_Params
{
	struct FChangedMenuComponent                       MenuComponent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.OnLocomotionModeChanged
struct AOptionsMenuActor_OnLocomotionModeChanged_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.OnComfortLevelValueChanged
struct AOptionsMenuActor_OnComfortLevelValueChanged_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.OnClimbSettingChanged
struct AOptionsMenuActor_OnClimbSettingChanged_Params
{
	struct FChangedMenuComponent                       MenuComponent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.OnAudioSettingChanged
struct AOptionsMenuActor_OnAudioSettingChanged_Params
{
	struct FChangedMenuComponent                       MenuComponent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.On360CombatSettingChanged
struct AOptionsMenuActor_On360CombatSettingChanged_Params
{
	struct FChangedMenuComponent                       MenuComponent;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.OptionsMenuActor.AttemptSaveSettings
struct AOptionsMenuActor_AttemptSaveSettings_Params
{
};

// Function WKND.PauseMainMenuActor.ShowConfirmationPrompt
struct APauseMainMenuActor_ShowConfirmationPrompt_Params
{
	struct FText                                       WarningText;                                              // (Parm, OutParm)
};

// Function WKND.PauseMainMenuActor.SetPauseManager
struct APauseMainMenuActor_SetPauseManager_Params
{
	class AWKNDPauseManager*                           PauseManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PauseMainMenuActor.ReceiveConfirmationPromptClosed
struct APauseMainMenuActor_ReceiveConfirmationPromptClosed_Params
{
};

// Function WKND.PauseMainMenuActor.ReceiveConfirmationPromptCalled
struct APauseMainMenuActor_ReceiveConfirmationPromptCalled_Params
{
	struct FText                                       WarningText;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.PauseMainMenuActor.OnResumeGamePressed
struct APauseMainMenuActor_OnResumeGamePressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.PauseMainMenuActor.OnQuitGamePressed
struct APauseMainMenuActor_OnQuitGamePressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.PauseMainMenuActor.OnConfirmationPressed
struct APauseMainMenuActor_OnConfirmationPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.PauseMainMenuActor.OnCancelPressed
struct APauseMainMenuActor_OnCancelPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.PauseMainMenuActor.OnBackToMainMenuPressed
struct APauseMainMenuActor_OnBackToMainMenuPressed_Params
{
	struct FPressedButtonComponent                     ButtonComponent;                                          // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.PauseMainMenuActor.CloseConfirmationPrompt
struct APauseMainMenuActor_CloseConfirmationPrompt_Params
{
};

// Function WKND.PauseMenuActor.SetButtonConfigMaterialParameter
struct APauseMenuActor_SetButtonConfigMaterialParameter_Params
{
	int                                                ConfigID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PauseMenuActor.RequestPlacePauseMenuAtPlayer
struct APauseMenuActor_RequestPlacePauseMenuAtPlayer_Params
{
};

// Function WKND.PauseMenuActor.OnGameUnPaused
struct APauseMenuActor_OnGameUnPaused_Params
{
	bool                                               bShowPauseMenu;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PauseMenuActor.OnGamePaused
struct APauseMenuActor_OnGamePaused_Params
{
	bool                                               bShowPauseMenu;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PhysicsButtonComponent.SetInteractionEnabledForButtonName
struct UPhysicsButtonComponent_SetInteractionEnabledForButtonName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PhysicsButtonComponent.SetInteractionEnabledForButtonIndex
struct UPhysicsButtonComponent_SetInteractionEnabledForButtonIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PhysicsButtonComponent.GetVelocityForButtonByName
struct UPhysicsButtonComponent_GetVelocityForButtonByName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsButtonComponent.GetVelocityForButtonByIndex
struct UPhysicsButtonComponent_GetVelocityForButtonByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsButtonComponent.GetDesiredButtonTransformByName
struct UPhysicsButtonComponent_GetDesiredButtonTransformByName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsButtonComponent.GetDesiredButtonTransformByIndex
struct UPhysicsButtonComponent_GetDesiredButtonTransformByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsInteractionsComponent.UnlockAllInteractions
struct UPhysicsInteractionsComponent_UnlockAllInteractions_Params
{
};

// Function WKND.PhysicsInteractionsComponent.LockAllInteractions
struct UPhysicsInteractionsComponent_LockAllInteractions_Params
{
	float                                              InLockTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InLockSpeedOverride;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PhysicsInteractionsComponent.GetInteractionFromName
struct UPhysicsInteractionsComponent_GetInteractionFromName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsInteraction*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsInteractionsComponent.GetInteractionFromIndex
struct UPhysicsInteractionsComponent_GetInteractionFromIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPhysicsInteraction*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsInteractionsComponent.GetIndexForInteractionName
struct UPhysicsInteractionsComponent_GetIndexForInteractionName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PhysicsInteractionsComponent.EnableAllInteractions
struct UPhysicsInteractionsComponent_EnableAllInteractions_Params
{
};

// Function WKND.PhysicsInteractionsComponent.DisableAllInteractions
struct UPhysicsInteractionsComponent_DisableAllInteractions_Params
{
};

// Function WKND.PlayerClimbComponent.IsClimbing
struct UPlayerClimbComponent_IsClimbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PlayerClimbComponent.GetPrimaryClimbObject
struct UPlayerClimbComponent_GetPrimaryClimbObject_Params
{
	class AClimbObject*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PlayerClimbComponent.GetClimbDistanceThisFrame
struct UPlayerClimbComponent_GetClimbDistanceThisFrame_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VelocityTrackerComponent.Initialize
struct UVelocityTrackerComponent_Initialize_Params
{
	class USceneComponent*                             InTrackedComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.VelocityTrackerComponent.GetWorldTransformForBone
struct UVelocityTrackerComponent_GetWorldTransformForBone_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.VelocityTrackerComponent.GetWorldLocationForBone
struct UVelocityTrackerComponent_GetWorldLocationForBone_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.VelocityTrackerComponent.GetTrackedComponent
struct UVelocityTrackerComponent_GetTrackedComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.VelocityTrackerComponent.GetRelativeVelocityForBone
struct UVelocityTrackerComponent_GetRelativeVelocityForBone_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VelocityTrackerComponent.GetPrefixedBoneName
struct UVelocityTrackerComponent_GetPrefixedBoneName_Params
{
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PlayerHandAudioComponentBase.GetTrigger
struct UPlayerHandAudioComponentBase_GetTrigger_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PlayerHandAudioComponentBase.GetGrip
struct UPlayerHandAudioComponentBase_GetGrip_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PlayerLocomotion.StartLocomote
struct UPlayerLocomotion_StartLocomote_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
	bool                                               SnapToMandated;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PlayerLocomotion.GetSafeNavigationGround
struct UPlayerLocomotion_GetSafeNavigationGround_Params
{
	struct FVector                                     lastNavigableGround;                                      // (Parm, OutParm, IsPlainOldData)
	bool                                               groundInit;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.SetTraceLength
struct UPlayerScreenBlackOutComponent_SetTraceLength_Params
{
	float                                              Length;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.SetSphereRadius
struct UPlayerScreenBlackOutComponent_SetSphereRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.SetOffsetToCamera
struct UPlayerScreenBlackOutComponent_SetOffsetToCamera_Params
{
	struct FVector                                     OffsetToCamera;                                           // (Parm, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.SetIndicatorAngle
struct UPlayerScreenBlackOutComponent_SetIndicatorAngle_Params
{
	float                                              degrees;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.SetBlackOutEnabled
struct UPlayerScreenBlackOutComponent_SetBlackOutEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.ResetOffsetToCamera
struct UPlayerScreenBlackOutComponent_ResetOffsetToCamera_Params
{
};

// Function WKND.PlayerScreenBlackOutComponent.ResetBlackoutAfterTeleport
struct UPlayerScreenBlackOutComponent_ResetBlackoutAfterTeleport_Params
{
};

// Function WKND.PlayerScreenBlackOutComponent.OnWarningWidgetFadeOutFinished
struct UPlayerScreenBlackOutComponent_OnWarningWidgetFadeOutFinished_Params
{
};

// Function WKND.PlayerScreenBlackOutComponent.IsBlackedOut
struct UPlayerScreenBlackOutComponent_IsBlackedOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.IgnoreSpecificClassArrows
struct UPlayerScreenBlackOutComponent_IgnoreSpecificClassArrows_Params
{
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SubclassToIgnore;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.IgnoreSpecificClass
struct UPlayerScreenBlackOutComponent_IgnoreSpecificClass_Params
{
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SubclassToIgnore;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.IgnoreSpecificActor
struct UPlayerScreenBlackOutComponent_IgnoreSpecificActor_Params
{
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.IgnoreGrabbedObject
struct UPlayerScreenBlackOutComponent_IgnoreGrabbedObject_Params
{
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.IgnoreGrabableObjects
struct UPlayerScreenBlackOutComponent_IgnoreGrabableObjects_Params
{
	bool                                               bIgnore;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.GetOffsetToCamera
struct UPlayerScreenBlackOutComponent_GetOffsetToCamera_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.GetLastValidCameraLocation
struct UPlayerScreenBlackOutComponent_GetLastValidCameraLocation_Params
{
	bool                                               bValidLocationFound;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastValidLocation;                                        // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.GetIndicatorAngle
struct UPlayerScreenBlackOutComponent_GetIndicatorAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.GetDistanceToLastCollisionGeometry
struct UPlayerScreenBlackOutComponent_GetDistanceToLastCollisionGeometry_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PlayerScreenBlackOutComponent.GetCurrentFadeValue
struct UPlayerScreenBlackOutComponent_GetCurrentFadeValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.PMMenuButtonComponent.SetSkeletalMesh
struct UPMMenuButtonComponent_SetSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.PMMenuButtonComponent.SetPoseableMesh
struct UPMMenuButtonComponent_SetPoseableMesh_Params
{
	class UPoseableMeshComponent*                      PoseableMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.PMMenuButtonComponent.SetAssingedBoneName
struct UPMMenuButtonComponent_SetAssingedBoneName_Params
{
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WKND.PMMenuButtonComponent.GetSkeletalMesh
struct UPMMenuButtonComponent_GetSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.PMMenuButtonComponent.GetPoseableMesh
struct UPMMenuButtonComponent_GetPoseableMesh_Params
{
	class UPoseableMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.PMMenuButtonComponent.GetAssignedBoneName
struct UPMMenuButtonComponent_GetAssignedBoneName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.OnTelemetryEvent
struct URatingsManager_OnTelemetryEvent_Params
{
	struct FTelemetryEvent                             Event;                                                    // (Parm)
};

// Function WKND.RatingsManager.HasWaveBeenRated
struct URatingsManager_HasWaveBeenRated_Params
{
	struct FName                                       WaveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.HasRatingIncreasedForLastCompletedWave
struct URatingsManager_HasRatingIncreasedForLastCompletedWave_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetRatingInfoForLastCompletedWave
struct URatingsManager_GetRatingInfoForLastCompletedWave_Params
{
	ERating                                            PreviousRating;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	ERating                                            NewRating;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumMedalsEarned;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RatingsManager.GetRatingForWave
struct URatingsManager_GetRatingForWave_Params
{
	struct FName                                       WaveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ERating                                            Rating;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetRatingDataForWave
struct URatingsManager_GetRatingDataForWave_Params
{
	struct FName                                       WaveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRatingData                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.RatingsManager.GetNumMedalsEarned
struct URatingsManager_GetNumMedalsEarned_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetMedalConditionByTypeForCurrentWave
struct URatingsManager_GetMedalConditionByTypeForCurrentWave_Params
{
	ERating                                            MedalType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EWaveMedalConditionType                            ConditionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWaveMedalCondition                         MedalCondition;                                           // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetMedalConditionByType
struct URatingsManager_GetMedalConditionByType_Params
{
	struct FName                                       WaveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ERating                                            MedalType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EWaveMedalConditionType                            ConditionType;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWaveMedalCondition                         MedalCondition;                                           // (Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetMedalCollection
struct URatingsManager_GetMedalCollection_Params
{
	struct FMedalCollection                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.RatingsManager.GetFinalRatingForCurrentWave
struct URatingsManager_GetFinalRatingForCurrentWave_Params
{
	ERating                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetCurrentWaveRemainingPlayerHealth
struct URatingsManager_GetCurrentWaveRemainingPlayerHealth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetCurrentWaveKillCount
struct URatingsManager_GetCurrentWaveKillCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetCurrentWaveCompletionTime
struct URatingsManager_GetCurrentWaveCompletionTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetCurrentWaveBestRemainingPlayerHealth
struct URatingsManager_GetCurrentWaveBestRemainingPlayerHealth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetCurrentWaveBestKillCount
struct URatingsManager_GetCurrentWaveBestKillCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetCurrentWaveBestCompletionTime
struct URatingsManager_GetCurrentWaveBestCompletionTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetCurrentLiveRating
struct URatingsManager_GetCurrentLiveRating_Params
{
	ERating                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RatingsManager.GetBestRatingForCurrentWave
struct URatingsManager_GetBestRatingForCurrentWave_Params
{
	ERating                                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RewardsManager.ParseRewardData
struct URewardsManager_ParseRewardData_Params
{
	TArray<struct FRewardData>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.RewardsManager.OnRatingEarned
struct URewardsManager_OnRatingEarned_Params
{
	struct FName                                       WaveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ERating                                            Rating;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RewardsManager.IsRewardUnlocked
struct URewardsManager_IsRewardUnlocked_Params
{
	struct FName                                       RewardName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RewardsManager.GetRewardsEarnedOnLastRating
struct URewardsManager_GetRewardsEarnedOnLastRating_Params
{
	TArray<struct FRewardData>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.RewardsManager.GetRewardData
struct URewardsManager_GetRewardData_Params
{
	struct FName                                       RewardName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRewardData                                 RewardData;                                               // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RewardsManager.GetAllRewardsOfType
struct URewardsManager_GetAllRewardsOfType_Params
{
	ERewardType                                        RewardType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FRewardData>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.RewardsManager.ClearRewardsEarnedOnLastRating
struct URewardsManager_ClearRewardsEarnedOnLastRating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RICEAICoordinator.ShuffleAdvance
struct ARICEAICoordinator_ShuffleAdvance_Params
{
};

// Function WKND.RICEAICoordinator.SetTarget
struct ARICEAICoordinator_SetTarget_Params
{
	class APawn*                                       NewTarget;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RICEAICoordinator.RemoveAIData
struct ARICEAICoordinator_RemoveAIData_Params
{
	class ARICEAIController*                           Controller;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RICEAICoordinator.MoveRandomDroidForwardToZone
struct ARICEAICoordinator_MoveRandomDroidForwardToZone_Params
{
	int                                                destinationZone;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RICEAICoordinator.GetDroidAtIndex
struct ARICEAICoordinator_GetDroidAtIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RICEAICoordinator.GetAssignedLocation
struct ARICEAICoordinator_GetAssignedLocation_Params
{
	class ARICEAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RICEAICoordinator.GetAIPositioningComponent
struct ARICEAICoordinator_GetAIPositioningComponent_Params
{
	class UAIPositioningComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.RICEAICoordinator.DebugDrawZones
struct ARICEAICoordinator_DebugDrawZones_Params
{
};

// Function WKND.RICEAICoordinator.CountDroidsAttemptingMelee
struct ARICEAICoordinator_CountDroidsAttemptingMelee_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RICEAICoordinator.AssignLocationsByZone
struct ARICEAICoordinator_AssignLocationsByZone_Params
{
};

// Function WKND.RICEAICoordinator.AgentRejectedNavigation
struct ARICEAICoordinator_AgentRejectedNavigation_Params
{
	class ARICEAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RICEAICoordinator.AddAIData
struct ARICEAICoordinator_AddAIData_Params
{
	class ARICEAIController*                           Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RICEAICoordinator.ActiveDroidCount
struct ARICEAICoordinator_ActiveDroidCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RICEPOCGameModeBase.ToggleHaptics
struct ARICEPOCGameModeBase_ToggleHaptics_Params
{
};

// Function WKND.RICEPOCGameModeBase.GetSaberManager
struct ARICEPOCGameModeBase_GetSaberManager_Params
{
	class ARPOCSaberManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RICEPOCGameModeBase.GetHapticsManager
struct ARICEPOCGameModeBase_GetHapticsManager_Params
{
	class UNTHapticManagerComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.RICEPOCGameModeBase.GetCoordinator
struct ARICEPOCGameModeBase_GetCoordinator_Params
{
	class ARICEAICoordinator*                          ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCBladeSweepComponent.UpdateBlade
struct URPOCBladeSweepComponent_UpdateBlade_Params
{
	struct FBladeData                                  BladeData;                                                // (Parm)
	bool                                               Primary;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCBladeSweepComponent.SweepIncrement
struct URPOCBladeSweepComponent_SweepIncrement_Params
{
	TArray<struct FHitResult>                          hitResults;                                               // (Parm, OutParm, ZeroConstructor)
	TEnumAsByte<ECollisionChannel>                     Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceStart;                                               // (Parm, IsPlainOldData)
	struct FVector                                     TraceEnd;                                                 // (Parm, IsPlainOldData)
	struct FQuat                                       traceRot;                                                 // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCBladeSweepComponent.SweepCapsule
struct URPOCBladeSweepComponent_SweepCapsule_Params
{
	struct FTransform                                  Start;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  End;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCBladeSweepComponent.SweepBlade2
struct URPOCBladeSweepComponent_SweepBlade2_Params
{
};

// Function WKND.RPOCBladeSweepComponent.SweepBlade
struct URPOCBladeSweepComponent_SweepBlade_Params
{
};

// Function WKND.RPOCBladeSweepComponent.FindTriangleIntersection
struct URPOCBladeSweepComponent_FindTriangleIntersection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.UpdateHighlight
struct ARPOCPickupActor_UpdateHighlight_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.SetAsPalmable
struct ARPOCPickupActor_SetAsPalmable_Params
{
	class UCapsuleComponent*                           CollisionWhenInHand;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Palmable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.RepositionObject
struct ARPOCPickupActor_RepositionObject_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.Release
struct ARPOCPickupActor_Release_Params
{
	bool                                               bApplyImpulseOnRelease;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.ReceiveOnUsed
struct ARPOCPickupActor_ReceiveOnUsed_Params
{
};

// Function WKND.RPOCPickupActor.ReceiveOnStopUse
struct ARPOCPickupActor_ReceiveOnStopUse_Params
{
};

// Function WKND.RPOCPickupActor.ReceiveOnReleased
struct ARPOCPickupActor_ReceiveOnReleased_Params
{
	class AActor*                                      PreviousInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.ReceiveOnPickedUp
struct ARPOCPickupActor_ReceiveOnPickedUp_Params
{
	class AActor*                                      CurrentInstigator;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.ReceiveOnNotHeldInBothHands
struct ARPOCPickupActor_ReceiveOnNotHeldInBothHands_Params
{
};

// Function WKND.RPOCPickupActor.ReceiveOnInHand
struct ARPOCPickupActor_ReceiveOnInHand_Params
{
};

// Function WKND.RPOCPickupActor.ReceiveOnHeldInBothHands
struct ARPOCPickupActor_ReceiveOnHeldInBothHands_Params
{
};

// Function WKND.RPOCPickupActor.ReceiveOnBeginRangedGrab
struct ARPOCPickupActor_ReceiveOnBeginRangedGrab_Params
{
};

// Function WKND.RPOCPickupActor.ReceiveOnBeenDisarmed
struct ARPOCPickupActor_ReceiveOnBeenDisarmed_Params
{
};

// Function WKND.RPOCPickupActor.OnNonPlayerPickUp
struct ARPOCPickupActor_OnNonPlayerPickUp_Params
{
};

// Function WKND.RPOCPickupActor.OnNonPlayerDrop
struct ARPOCPickupActor_OnNonPlayerDrop_Params
{
};

// Function WKND.RPOCPickupActor.InitReposition
struct ARPOCPickupActor_InitReposition_Params
{
	struct FTransform                                  HandTransform;                                            // (Parm, IsPlainOldData)
	float                                              RepositionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.GetRegressedVelocity
struct ARPOCPickupActor_GetRegressedVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.GetRegressedAngularVelocity
struct ARPOCPickupActor_GetRegressedAngularVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.GetPrimaryHand
struct ARPOCPickupActor_GetPrimaryHand_Params
{
	ENTHapticHands                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.GetOffHand
struct ARPOCPickupActor_GetOffHand_Params
{
	ENTHapticHands                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.GetLatestVelocityFromBuffer
struct ARPOCPickupActor_GetLatestVelocityFromBuffer_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.GetIsIdling
struct ARPOCPickupActor_GetIsIdling_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.GetIdleTime
struct ARPOCPickupActor_GetIdleTime_Params
{
	float                                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.EnablePhysicsSimulation
struct ARPOCPickupActor_EnablePhysicsSimulation_Params
{
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.DropInternal
struct ARPOCPickupActor_DropInternal_Params
{
	bool                                               ApplyImpulseOnRelease;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.DelayedDestroy
struct ARPOCPickupActor_DelayedDestroy_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.Deactivate
struct ARPOCPickupActor_Deactivate_Params
{
};

// Function WKND.RPOCPickupActor.CancelDelayedDestroy
struct ARPOCPickupActor_CancelDelayedDestroy_Params
{
};

// Function WKND.RPOCPickupActor.ApplyImpulseOnRelease
struct ARPOCPickupActor_ApplyImpulseOnRelease_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor.Activate
struct ARPOCPickupActor_Activate_Params
{
};

// Function WKND.RPOCBuildPart.RemovePart
struct ARPOCBuildPart_RemovePart_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCBuildPart.ReceiveOnAddedPart
struct ARPOCBuildPart_ReceiveOnAddedPart_Params
{
	class AActor*                                      AttachParent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCBuildPart.OnHit
struct ARPOCBuildPart_OnHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.RPOCBuildPart.OnBeginOverlap
struct ARPOCBuildPart_OnBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCBuildPart.LockIntoSlot
struct ARPOCBuildPart_LockIntoSlot_Params
{
};

// Function WKND.RPOCBuildPart.Deactivate
struct ARPOCBuildPart_Deactivate_Params
{
};

// Function WKND.RPOCBuildPart.AddPart
struct ARPOCBuildPart_AddPart_Params
{
	class UPrimitiveComponent*                         AttachTo;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCBuildPart.Activate
struct ARPOCBuildPart_Activate_Params
{
};

// Function WKND.RPOCCanGrabInterface.SetReverseGrip
struct URPOCCanGrabInterface_SetReverseGrip_Params
{
	bool                                               bReverse;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.SetForceAttachToController
struct URPOCCanGrabInterface_SetForceAttachToController_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.SetAttachedActor
struct URPOCCanGrabInterface_SetAttachedActor_Params
{
	class AActor*                                      attached;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.RequestSwap
struct URPOCCanGrabInterface_RequestSwap_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.ReleaseActor
struct URPOCCanGrabInterface_ReleaseActor_Params
{
	TEnumAsByte<EGrabResult>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.OnActorGrabbed
struct URPOCCanGrabInterface_OnActorGrabbed_Params
{
};

// Function WKND.RPOCCanGrabInterface.IsHeldInBothHands
struct URPOCCanGrabInterface_IsHeldInBothHands_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.HasAttachedActor
struct URPOCCanGrabInterface_HasAttachedActor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.GrabActor_Force
struct URPOCCanGrabInterface_GrabActor_Force_Params
{
	class AActor*                                      actorToGrab;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGrabResult>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.GetOwningPawn
struct URPOCCanGrabInterface_GetOwningPawn_Params
{
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.GetHeldActor
struct URPOCCanGrabInterface_GetHeldActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.GetHandCollisionActor
struct URPOCCanGrabInterface_GetHandCollisionActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.GetGrabSphereSize
struct URPOCCanGrabInterface_GetGrabSphereSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.GetGrabSphereLocation
struct URPOCCanGrabInterface_GetGrabSphereLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.GetControllerHand
struct URPOCCanGrabInterface_GetControllerHand_Params
{
	EControllerHand                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCCanGrabInterface.ForceDropItem
struct URPOCCanGrabInterface_ForceDropItem_Params
{
};

// Function WKND.RPOCCanGrabInterface.EnvIgnoreList
struct URPOCCanGrabInterface_EnvIgnoreList_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignore;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCGrabLocatorComponent.SetEnabled
struct URPOCGrabLocatorComponent_SetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCGrabLocatorComponent.IsGrabbed
struct URPOCGrabLocatorComponent_IsGrabbed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCGrabLocatorComponent.IsGrabbable
struct URPOCGrabLocatorComponent_IsGrabbable_Params
{
	EGrabHand                                          GrabHand;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCGrabLocatorComponent.GetGrabbable
struct URPOCGrabLocatorComponent_GetGrabbable_Params
{
	class UWKNDGrabbableComponent*                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.RPOCGrabLocatorComponent.GetEnabled
struct URPOCGrabLocatorComponent_GetEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCGrabLocatorComponent.GetAnimType
struct URPOCGrabLocatorComponent_GetAnimType_Params
{
	struct FAnimTypeDropdown                           ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function WKND.RPOCClimbLocatorComponent.ToggleDebug
struct URPOCClimbLocatorComponent_ToggleDebug_Params
{
};

// Function WKND.RPOCCombatStage_Attack.TriggerNewCombo
struct URPOCCombatStage_Attack_TriggerNewCombo_Params
{
};

// Function WKND.RPOCEnemyAttackComponent.UpdateContestedClash
struct URPOCEnemyAttackComponent_UpdateContestedClash_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCEnemyAttackComponent.TauntBlendOut
struct URPOCEnemyAttackComponent_TauntBlendOut_Params
{
	class UAnimMontage*                                InAttack;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartAtTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCEnemyAttackComponent.StartContestedClash
struct URPOCEnemyAttackComponent_StartContestedClash_Params
{
	struct FSaberClashData                             Clash;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.RPOCEnemyAttackComponent.RecoverFromBlock
struct URPOCEnemyAttackComponent_RecoverFromBlock_Params
{
	class UAnimMontage*                                InAttack;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCEnemyAttackComponent.OnSuccess
struct URPOCEnemyAttackComponent_OnSuccess_Params
{
};

// Function WKND.RPOCEnemyAttackComponent.OnOpponentTakeDamage
struct URPOCEnemyAttackComponent_OnOpponentTakeDamage_Params
{
	int                                                DamageAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FWKNDDamageInfo                             DamageInfo;                                               // (Parm)
};

// Function WKND.RPOCEnemyAttackComponent.OnLightsaberClash
struct URPOCEnemyAttackComponent_OnLightsaberClash_Params
{
	class ARPOCPickup_Lightsaber*                      Saber1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      Saber2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RewindTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSaberClashData                             Clash;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.RPOCEnemyAttackComponent.OnBlocked
struct URPOCEnemyAttackComponent_OnBlocked_Params
{
	float                                              AdjustPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSaberClashData                             Clash;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCEnemyAttackComponent.ForceOutAttack
struct URPOCEnemyAttackComponent_ForceOutAttack_Params
{
};

// Function WKND.RPOCEnemyAttackComponent.EndClashAndContinueAttack
struct URPOCEnemyAttackComponent_EndClashAndContinueAttack_Params
{
};

// Function WKND.RPOCEnemyAttackComponent.ComboMoveBlocked
struct URPOCEnemyAttackComponent_ComboMoveBlocked_Params
{
};

// Function WKND.RPOCEnemyAttackComponent.ComboCompleted
struct URPOCEnemyAttackComponent_ComboCompleted_Params
{
	ECombat_ComboAttackResult                          AttackResult;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumBlocks;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCEnemyAttackComponent.AttackHitsPlayer
struct URPOCEnemyAttackComponent_AttackHitsPlayer_Params
{
	bool                                               ShouldDoDamage;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCEnemyAttackComponent.Attack
struct URPOCEnemyAttackComponent_Attack_Params
{
	class URPOCEnemyComboData*                         NewCombo;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AWKNDPlayerPawn*                             Opponent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	ECombatStage_Taunt                                 Taunt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FirstStrikeIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCEquippedWeapon.ReceiveOnRepositionWeapon
struct ARPOCEquippedWeapon_ReceiveOnRepositionWeapon_Params
{
};

// Function WKND.RPOCEquippedWeapon.ReceiveOnReleased
struct ARPOCEquippedWeapon_ReceiveOnReleased_Params
{
	class AActor*                                      PreviousInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCEquippedWeapon.ReceiveOnPickedUp
struct ARPOCEquippedWeapon_ReceiveOnPickedUp_Params
{
	class AActor*                                      CurrentInstigator;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCEquippedWeapon.ReceiveOnNotHeldInBothHands
struct ARPOCEquippedWeapon_ReceiveOnNotHeldInBothHands_Params
{
};

// Function WKND.RPOCEquippedWeapon.ReceiveOnMeleeMunitionHit
struct ARPOCEquippedWeapon_ReceiveOnMeleeMunitionHit_Params
{
};

// Function WKND.RPOCEquippedWeapon.ReceiveOnHeldInBothHands
struct ARPOCEquippedWeapon_ReceiveOnHeldInBothHands_Params
{
};

// Function WKND.RPOCEquippedWeapon.GetParentMotionController
struct ARPOCEquippedWeapon_GetParentMotionController_Params
{
	class UMotionControllerComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.RPOCForceThrowComponent.ThrowRandomActor
struct URPOCForceThrowComponent_ThrowRandomActor_Params
{
};

// Function WKND.RPOCForceThrowComponent.HandleItemThrown
struct URPOCForceThrowComponent_HandleItemThrown_Params
{
	class ASliceableActor*                             ThrownActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCGestureDetector.StartGesture
struct URPOCGestureDetector_StartGesture_Params
{
};

// Function WKND.RPOCGestureDetector.IsDetectingGestures
struct URPOCGestureDetector_IsDetectingGestures_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCGestureDetector.GetDetectedGesture
struct URPOCGestureDetector_GetDetectedGesture_Params
{
	struct FRiceDetectedGesture                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.RPOCGestureDetector.EndGesture
struct URPOCGestureDetector_EndGesture_Params
{
};

// Function WKND.RPOCGestureDetector.ClearGesture
struct URPOCGestureDetector_ClearGesture_Params
{
};

// Function WKND.RPOCGestureRecorderComponent.StartRecording
struct URPOCGestureRecorderComponent_StartRecording_Params
{
};

// Function WKND.RPOCGestureRecorderComponent.EndRecording
struct URPOCGestureRecorderComponent_EndRecording_Params
{
};

// Function WKND.RPOCGestureRecorderComponent.CancelRecording
struct URPOCGestureRecorderComponent_CancelRecording_Params
{
};

// Function WKND.RPOCGestureReplayerComponent.StopReplaying
struct URPOCGestureReplayerComponent_StopReplaying_Params
{
};

// Function WKND.RPOCGestureReplayerComponent.StartReplaying
struct URPOCGestureReplayerComponent_StartReplaying_Params
{
	bool                                               Loop;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.ToggleUseHandRepositioning
struct URPOCHandEnvironmentInteractionComponent_ToggleUseHandRepositioning_Params
{
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.TeleportEnd
struct URPOCHandEnvironmentInteractionComponent_TeleportEnd_Params
{
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.TeleportBegin
struct URPOCHandEnvironmentInteractionComponent_TeleportBegin_Params
{
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.SnapEnd
struct URPOCHandEnvironmentInteractionComponent_SnapEnd_Params
{
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.SnapBegin
struct URPOCHandEnvironmentInteractionComponent_SnapBegin_Params
{
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.SetHeldActor
struct URPOCHandEnvironmentInteractionComponent_SetHeldActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.SetHand
struct URPOCHandEnvironmentInteractionComponent_SetHand_Params
{
	EControllerHand                                    NewHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       InHandSocketName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.SetEnvironmentInteractionMode
struct URPOCHandEnvironmentInteractionComponent_SetEnvironmentInteractionMode_Params
{
	EHandEnvironmentInteractionMode                    InteractionMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.OnHeldObjectHit
struct URPOCHandEnvironmentInteractionComponent_OnHeldObjectHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.IgnoreCollisionInRadiusUntilMoved
struct URPOCHandEnvironmentInteractionComponent_IgnoreCollisionInRadiusUntilMoved_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.IgnoreActor
struct URPOCHandEnvironmentInteractionComponent_IgnoreActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignore;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.GetHeldActor
struct URPOCHandEnvironmentInteractionComponent_GetHeldActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.GetHapticHand
struct URPOCHandEnvironmentInteractionComponent_GetHapticHand_Params
{
	ENTHapticHands                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.GetHandTransform
struct URPOCHandEnvironmentInteractionComponent_GetHandTransform_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.GetHandAwarenessAnimationScrubbing
struct URPOCHandEnvironmentInteractionComponent_GetHandAwarenessAnimationScrubbing_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCHandEnvironmentInteractionComponent.GetEnvironmentInteractionMode
struct URPOCHandEnvironmentInteractionComponent_GetEnvironmentInteractionMode_Params
{
	EHandEnvironmentInteractionMode                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCIntersectRepelantComponent.TraceHandPosition
struct URPOCIntersectRepelantComponent_TraceHandPosition_Params
{
};

// Function WKND.RPOCKeyMapManagerComponent.Load
struct URPOCKeyMapManagerComponent_Load_Params
{
};

// Function WKND.RPOCPickupWeapon.RepositionObject
struct ARPOCPickupWeapon_RepositionObject_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupWeapon.ReceiveOnRepositionWeapon
struct ARPOCPickupWeapon_ReceiveOnRepositionWeapon_Params
{
};

// Function WKND.RPOCPickupWeapon.ReceiveOnParry
struct ARPOCPickupWeapon_ReceiveOnParry_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.RPOCPickupWeapon.ReceiveOnMeleeMunitionHit
struct ARPOCPickupWeapon_ReceiveOnMeleeMunitionHit_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.RPOCPickupWeapon.ReceiveOnDecapitation
struct ARPOCPickupWeapon_ReceiveOnDecapitation_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (Parm, IsPlainOldData)
};

// Function WKND.RPOCPickupWeapon.OnNonPlayerPickUp
struct ARPOCPickupWeapon_OnNonPlayerPickUp_Params
{
};

// Function WKND.RPOCPickupWeapon.OnNonPlayerDrop
struct ARPOCPickupWeapon_OnNonPlayerDrop_Params
{
};

// Function WKND.RPOCPickupWeapon.OnHit
struct ARPOCPickupWeapon_OnHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.RPOCPickupWeapon.OnBeginOverlap
struct ARPOCPickupWeapon_OnBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupWeapon.IsPendingDelayedKill
struct ARPOCPickupWeapon_IsPendingDelayedKill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupWeapon.GetParentMotionController
struct ARPOCPickupWeapon_GetParentMotionController_Params
{
	class UMotionControllerComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.RPOCPickupWeapon.GetBladeLocations
struct ARPOCPickupWeapon_GetBladeLocations_Params
{
	struct FVector                                     GuardLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     TipLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.RPOCPickupWeapon.DespawnOnAttachParentDeath
struct ARPOCPickupWeapon_DespawnOnAttachParentDeath_Params
{
};

// Function WKND.RPOCPickupWeapon.Deactivate
struct ARPOCPickupWeapon_Deactivate_Params
{
};

// Function WKND.RPOCPickupWeapon.Activate
struct ARPOCPickupWeapon_Activate_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.UpdateSaberDragProperties
struct ARPOCPickup_Lightsaber_UpdateSaberDragProperties_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.TurnOffLightsaber
struct ARPOCPickup_Lightsaber_TurnOffLightsaber_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.RequestSaberState
struct ARPOCPickup_Lightsaber_RequestSaberState_Params
{
	ESaberGameState                                    GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.RenderDebugInfo
struct ARPOCPickup_Lightsaber_RenderDebugInfo_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnSaberHit
struct ARPOCPickup_Lightsaber_ReceiveOnSaberHit_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnRepositionWeapon
struct ARPOCPickup_Lightsaber_ReceiveOnRepositionWeapon_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnReleased
struct ARPOCPickup_Lightsaber_ReceiveOnReleased_Params
{
	class AActor*                                      PreviousInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnPickedUp
struct ARPOCPickup_Lightsaber_ReceiveOnPickedUp_Params
{
	class AActor*                                      CurrentInstigator;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnParry
struct ARPOCPickup_Lightsaber_ReceiveOnParry_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnOverload
struct ARPOCPickup_Lightsaber_ReceiveOnOverload_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnNotHeldInBothHands
struct ARPOCPickup_Lightsaber_ReceiveOnNotHeldInBothHands_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnMeleeMunitionHit
struct ARPOCPickup_Lightsaber_ReceiveOnMeleeMunitionHit_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (Parm, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnHeldInBothHands
struct ARPOCPickup_Lightsaber_ReceiveOnHeldInBothHands_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnFastTurnOff
struct ARPOCPickup_Lightsaber_ReceiveOnFastTurnOff_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnDecapitation
struct ARPOCPickup_Lightsaber_ReceiveOnDecapitation_Params
{
	class AActor*                                      HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (Parm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnAddDirector
struct ARPOCPickup_Lightsaber_ReceiveOnAddDirector_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnAddCrystal
struct ARPOCPickup_Lightsaber_ReceiveOnAddCrystal_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.ReceiveOnAddCrossGuard
struct ARPOCPickup_Lightsaber_ReceiveOnAddCrossGuard_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.ReceivedOnInstallPart
struct ARPOCPickup_Lightsaber_ReceivedOnInstallPart_Params
{
	class AActor*                                      Part;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.PushHapticValue
struct ARPOCPickup_Lightsaber_PushHapticValue_Params
{
	float                                              Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.PlayHapticsEffect
struct ARPOCPickup_Lightsaber_PlayHapticsEffect_Params
{
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              HapticScale;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.OverloadIfPlayersAndInFOV
struct ARPOCPickup_Lightsaber_OverloadIfPlayersAndInFOV_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.Overload
struct ARPOCPickup_Lightsaber_Overload_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.OnHit
struct ARPOCPickup_Lightsaber_OnHit_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.OnBeginOverlap
struct ARPOCPickup_Lightsaber_OnBeginOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.NotifyBladeOn
struct ARPOCPickup_Lightsaber_NotifyBladeOn_Params
{
	bool                                               On;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.IsPendingDelayedKill
struct ARPOCPickup_Lightsaber_IsPendingDelayedKill_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.IsHiltClash
struct ARPOCPickup_Lightsaber_IsHiltClash_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.IsClashingEnabled
struct ARPOCPickup_Lightsaber_IsClashingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.IsClashing
struct ARPOCPickup_Lightsaber_IsClashing_Params
{
	bool                                               IncludeHiltClashes;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.IsBladeLive
struct ARPOCPickup_Lightsaber_IsBladeLive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.IsAttacking
struct ARPOCPickup_Lightsaber_IsAttacking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.GetScaledBladeLength
struct ARPOCPickup_Lightsaber_GetScaledBladeLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.GetSaberId
struct ARPOCPickup_Lightsaber_GetSaberId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.GetIsWeaponActive
struct ARPOCPickup_Lightsaber_GetIsWeaponActive_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.GetBladeUpVector
struct ARPOCPickup_Lightsaber_GetBladeUpVector_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.GetBladeTransforms
struct ARPOCPickup_Lightsaber_GetBladeTransforms_Params
{
	struct FTransform                                  GuardTransform;                                           // (Parm, OutParm, IsPlainOldData)
	struct FTransform                                  PommelTransform;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.GetBladeState
struct ARPOCPickup_Lightsaber_GetBladeState_Params
{
	ELightsaberState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.GetBladeSpeed
struct ARPOCPickup_Lightsaber_GetBladeSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.GetBladeRadius
struct ARPOCPickup_Lightsaber_GetBladeRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.GetBladeLocations
struct ARPOCPickup_Lightsaber_GetBladeLocations_Params
{
	struct FVector                                     GuardLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     TipLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.FastTurnOff
struct ARPOCPickup_Lightsaber_FastTurnOff_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.EnableClashAndAttackDebugModeForTestLevelsOnly
struct ARPOCPickup_Lightsaber_EnableClashAndAttackDebugModeForTestLevelsOnly_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.DespawnOnAttachParentDeath
struct ARPOCPickup_Lightsaber_DespawnOnAttachParentDeath_Params
{
};

// Function WKND.RPOCPickup_Lightsaber.DelayedDestroy
struct ARPOCPickup_Lightsaber_DelayedDestroy_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.CheckBladeState
struct ARPOCPickup_Lightsaber_CheckBladeState_Params
{
	ELightsaberState                                   bladeState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickup_Lightsaber.CancelDelayedDestroy
struct ARPOCPickup_Lightsaber_CancelDelayedDestroy_Params
{
};

// Function WKND.RPOCPickupActor_Phys.UpdateHighlight
struct ARPOCPickupActor_Phys_UpdateHighlight_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.RepositionObject
struct ARPOCPickupActor_Phys_RepositionObject_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.Release
struct ARPOCPickupActor_Phys_Release_Params
{
	bool                                               bDetach;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.ReceiveOnReleased
struct ARPOCPickupActor_Phys_ReceiveOnReleased_Params
{
	class AActor*                                      PreviousInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.ReceiveOnPickedUp
struct ARPOCPickupActor_Phys_ReceiveOnPickedUp_Params
{
	class AActor*                                      CurrentInstigator;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.ReceiveOnInHand
struct ARPOCPickupActor_Phys_ReceiveOnInHand_Params
{
};

// Function WKND.RPOCPickupActor_Phys.ReceiveOnBeginRangedGrab
struct ARPOCPickupActor_Phys_ReceiveOnBeginRangedGrab_Params
{
};

// Function WKND.RPOCPickupActor_Phys.OnNonPlayerPickUp
struct ARPOCPickupActor_Phys_OnNonPlayerPickUp_Params
{
};

// Function WKND.RPOCPickupActor_Phys.OnNonPlayerDrop
struct ARPOCPickupActor_Phys_OnNonPlayerDrop_Params
{
};

// Function WKND.RPOCPickupActor_Phys.InitReposition
struct ARPOCPickupActor_Phys_InitReposition_Params
{
	struct FTransform                                  HandTransform;                                            // (Parm, IsPlainOldData)
	float                                              RepositionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.GetRegressedVelocity
struct ARPOCPickupActor_Phys_GetRegressedVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.GetRegressedAngularVelocity
struct ARPOCPickupActor_Phys_GetRegressedAngularVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.GetPrimaryHand
struct ARPOCPickupActor_Phys_GetPrimaryHand_Params
{
	ENTHapticHands                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.GetOffHand
struct ARPOCPickupActor_Phys_GetOffHand_Params
{
	ENTHapticHands                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.GetIsIdling
struct ARPOCPickupActor_Phys_GetIsIdling_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.GetIdleTime
struct ARPOCPickupActor_Phys_GetIdleTime_Params
{
	float                                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.EnablePhysicsSimulation
struct ARPOCPickupActor_Phys_EnablePhysicsSimulation_Params
{
	bool                                               flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.DelayedDestroy
struct ARPOCPickupActor_Phys_DelayedDestroy_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.Deactivate
struct ARPOCPickupActor_Phys_Deactivate_Params
{
};

// Function WKND.RPOCPickupActor_Phys.CancelDelayedDestroy
struct ARPOCPickupActor_Phys_CancelDelayedDestroy_Params
{
};

// Function WKND.RPOCPickupActor_Phys.ApplyImpulseOnRelease
struct ARPOCPickupActor_Phys_ApplyImpulseOnRelease_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Phys.Activate
struct ARPOCPickupActor_Phys_Activate_Params
{
};

// Function WKND.SliceableActor.UpdateThrow
struct ASliceableActor_UpdateThrow_Params
{
};

// Function WKND.SliceableActor.Throw
struct ASliceableActor_Throw_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	float                                              ThrustStrength;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SliceableActor.StopThrow
struct ASliceableActor_StopThrow_Params
{
};

// Function WKND.SliceableActor.SpawnBursts
struct ASliceableActor_SpawnBursts_Params
{
	class USliceableMeshComponent*                     Mesh;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FVector>                             CutPoints;                                                // (Parm, ZeroConstructor)
	class UParticleSystem*                             SliceBurstPFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableActor.ReceiveOnValidCut
struct ASliceableActor_ReceiveOnValidCut_Params
{
	class USliceableMeshComponent*                     CutComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     LastLocationWS;                                           // (ConstParm, Parm, IsPlainOldData)
};

// Function WKND.SliceableActor.ReceiveOnUpdateCut
struct ASliceableActor_ReceiveOnUpdateCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         CutComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CutEntryLocation;                                         // (Parm, IsPlainOldData)
	struct FVector                                     CutEntryNormal;                                           // (Parm, IsPlainOldData)
	struct FVector2D                                   CollisionUV;                                              // (Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutExitLocation;                                          // (Parm, IsPlainOldData)
};

// Function WKND.SliceableActor.ReceiveOnStartCut
struct ASliceableActor_ReceiveOnStartCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         CutComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.SliceableActor.ReceiveOnMeshSliced
struct ASliceableActor_ReceiveOnMeshSliced_Params
{
	struct FVector                                     CentreOfSlice;                                            // (Parm, IsPlainOldData)
	class USliceableMeshComponent*                     MeshA;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USliceableMeshComponent*                     MeshB;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.SliceableActor.ReceiveOnEndCut
struct ASliceableActor_ReceiveOnEndCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         CutComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     BladeDirection;                                           // (Parm, IsPlainOldData)
};

// Function WKND.SliceableActor.PrepForThrow
struct ASliceableActor_PrepForThrow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SliceableActor.OnValidCut
struct ASliceableActor_OnValidCut_Params
{
	class USliceableMeshComponent*                     CutComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     LastLocationWS;                                           // (ConstParm, Parm, IsPlainOldData)
};

// Function WKND.SliceableActor.OnSliceFailed
struct ASliceableActor_OnSliceFailed_Params
{
	class USliceableMeshComponent*                     Mesh;                                                     // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.SliceableActor.OnMeshSliced
struct ASliceableActor_OnMeshSliced_Params
{
	struct FVector                                     CentreOfSlice;                                            // (Parm, IsPlainOldData)
	TArray<struct FVector>                             CutPoints;                                                // (Parm, ZeroConstructor)
	class UParticleSystem*                             SliceBurstPFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USliceableMeshComponent*                     MeshA;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USliceableMeshComponent*                     MeshB;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.UpdateHighlight
struct ARPOCPickupActor_Sliceable_UpdateHighlight_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.SetSliceableMesh
struct ARPOCPickupActor_Sliceable_SetSliceableMesh_Params
{
	class USliceableMeshComponent*                     Mesh;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.RepositionObject
struct ARPOCPickupActor_Sliceable_RepositionObject_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.Release
struct ARPOCPickupActor_Sliceable_Release_Params
{
	bool                                               bDetach;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.ReceiveOnUsed
struct ARPOCPickupActor_Sliceable_ReceiveOnUsed_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.ReceiveOnStopUse
struct ARPOCPickupActor_Sliceable_ReceiveOnStopUse_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.ReceiveOnReleased
struct ARPOCPickupActor_Sliceable_ReceiveOnReleased_Params
{
	class AActor*                                      PreviousInstigator;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.ReceiveOnPickedUp_Native
struct ARPOCPickupActor_Sliceable_ReceiveOnPickedUp_Native_Params
{
	class AActor*                                      CurrentInstigator;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.ReceiveOnPickedUp
struct ARPOCPickupActor_Sliceable_ReceiveOnPickedUp_Params
{
	class AActor*                                      CurrentInstigator;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.ReceiveOnNotHeldInBothHands
struct ARPOCPickupActor_Sliceable_ReceiveOnNotHeldInBothHands_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.ReceiveOnInHand
struct ARPOCPickupActor_Sliceable_ReceiveOnInHand_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.ReceiveOnHeldInBothHands
struct ARPOCPickupActor_Sliceable_ReceiveOnHeldInBothHands_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.ReceiveOnBeginRangedGrab
struct ARPOCPickupActor_Sliceable_ReceiveOnBeginRangedGrab_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.ReceiveOnBeenDisarmed
struct ARPOCPickupActor_Sliceable_ReceiveOnBeenDisarmed_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.OnSliced
struct ARPOCPickupActor_Sliceable_OnSliced_Params
{
	struct FVector                                     CentreOfSlice;                                            // (Parm, IsPlainOldData)
	class USliceableMeshComponent*                     OriginalMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USliceableMeshComponent*                     NewMesh;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.OnNonPlayerPickUp
struct ARPOCPickupActor_Sliceable_OnNonPlayerPickUp_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.OnNonPlayerDrop
struct ARPOCPickupActor_Sliceable_OnNonPlayerDrop_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.OnFadeOut
struct ARPOCPickupActor_Sliceable_OnFadeOut_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.InitSliceable
struct ARPOCPickupActor_Sliceable_InitSliceable_Params
{
	class USliceableMeshComponent*                     InSliceableMesh;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class URPOCGrabLocatorComponent*>           InGrabLocators;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function WKND.RPOCPickupActor_Sliceable.InitReposition
struct ARPOCPickupActor_Sliceable_InitReposition_Params
{
	struct FTransform                                  HandTransform;                                            // (Parm, IsPlainOldData)
	float                                              RepositionTime;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               KeepRelativeRotation;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.GetRegressedVelocity
struct ARPOCPickupActor_Sliceable_GetRegressedVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.GetRegressedAngularVelocity
struct ARPOCPickupActor_Sliceable_GetRegressedAngularVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.GetPrimaryHand
struct ARPOCPickupActor_Sliceable_GetPrimaryHand_Params
{
	ENTHapticHands                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.GetOffHand
struct ARPOCPickupActor_Sliceable_GetOffHand_Params
{
	ENTHapticHands                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.GetIsIdling
struct ARPOCPickupActor_Sliceable_GetIsIdling_Params
{
	bool                                               ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.GetIdleTime
struct ARPOCPickupActor_Sliceable_GetIdleTime_Params
{
	float                                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.DelayedDestroy
struct ARPOCPickupActor_Sliceable_DelayedDestroy_Params
{
	float                                              Delay;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.Deactivate
struct ARPOCPickupActor_Sliceable_Deactivate_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.CancelDelayedDestroy
struct ARPOCPickupActor_Sliceable_CancelDelayedDestroy_Params
{
};

// Function WKND.RPOCPickupActor_Sliceable.ApplyImpulseOnRelease
struct ARPOCPickupActor_Sliceable_ApplyImpulseOnRelease_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActor_Sliceable.Activate
struct ARPOCPickupActor_Sliceable_Activate_Params
{
};

// Function WKND.RPOCPickupActorInterface.SetTwoHanded
struct URPOCPickupActorInterface_SetTwoHanded_Params
{
	bool                                               TwoHanded;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCPickupActorInterface.SetSwapData
struct URPOCPickupActorInterface_SetSwapData_Params
{
	struct FGrabData                                   GrabData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.RPOCPickupActorInterface.SetPhysicsEnabled
struct URPOCPickupActorInterface_SetPhysicsEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               disarmed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActorInterface.SetHighlight
struct URPOCPickupActorInterface_SetHighlight_Params
{
	bool                                               bHighlight;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActorInterface.IsPriorityPickUp
struct URPOCPickupActorInterface_IsPriorityPickUp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActorInterface.GetPickupPriorityMultiplier
struct URPOCPickupActorInterface_GetPickupPriorityMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActorInterface.GetPickupDistanceMultiplier
struct URPOCPickupActorInterface_GetPickupDistanceMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActorInterface.GetPickupData
struct URPOCPickupActorInterface_GetPickupData_Params
{
	struct FPickupStateData                            PickupData;                                               // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActorInterface.GetGrabbingHand
struct URPOCPickupActorInterface_GetGrabbingHand_Params
{
	TScriptInterface<class URPOCCanGrabInterface>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActorInterface.Drop
struct URPOCPickupActorInterface_Drop_Params
{
	bool                                               applyImpulse;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCPickupActorInterface.BeginRangedGrab
struct URPOCPickupActorInterface_BeginRangedGrab_Params
{
};

// Function WKND.RPOCPickupDevice.Deactivate
struct ARPOCPickupDevice_Deactivate_Params
{
};

// Function WKND.RPOCPickupDevice.Activate
struct ARPOCPickupDevice_Activate_Params
{
};

// Function WKND.RPOCSaberManager.RequestSaberSpawn
struct ARPOCSaberManager_RequestSaberSpawn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      LightSaberType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	bool                                               outAlreadyExisted;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCSaberManager.RegisterController
struct ARPOCSaberManager_RegisterController_Params
{
	class AWKNDMotionController*                       Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCSaberManager.OnSaberSweepHit
struct ARPOCSaberManager_OnSaberSweepHit_Params
{
	class ARPOCPickup_Lightsaber*                      Saber1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      Saber2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RewindTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FSaberClashData                             Clash;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.RPOCSaberManager.OnSaberContactStop
struct ARPOCSaberManager_OnSaberContactStop_Params
{
	int                                                clashMask;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      Saber1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      Saber2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCSaberManager.OnSaberContactStart
struct ARPOCSaberManager_OnSaberContactStart_Params
{
	int                                                clashMask;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      Saber1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      Saber2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCSaberManager.OnPlayerHit
struct ARPOCSaberManager_OnPlayerHit_Params
{
	class ARPOCPickup_Lightsaber*                      AttackingSaber;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FrameStrikeCount;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AWKNDPlayerPawn*                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerWasStruckBeforeBlock;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCSaberManager.NumSpareSlots
struct ARPOCSaberManager_NumSpareSlots_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCSaberManager.NumSpareSaberSlots
struct ARPOCSaberManager_NumSpareSaberSlots_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCSaberManager.GetSaberManager
struct ARPOCSaberManager_GetSaberManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCSaberManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCSaberManager.GetSaberHeldByPlayer
struct ARPOCSaberManager_GetSaberHeldByPlayer_Params
{
	class ARPOCPickup_Lightsaber*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCSaberManager.GetSaberHeldByActor
struct ARPOCSaberManager_GetSaberHeldByActor_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCSaberManager.GetSaberByTag
struct ARPOCSaberManager_GetSaberByTag_Params
{
	struct FName                                       Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCSaberManager.CheckSaberDisengage
struct ARPOCSaberManager_CheckSaberDisengage_Params
{
	class ARPOCPickup_Lightsaber*                      Saber;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ControllerBladeLoc;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombat_Attack.NotifyStaggered
struct URPOCStagedCombat_Attack_NotifyStaggered_Params
{
};

// Function WKND.RPOCStagedCombat_Attack.NotifyLethalDamageReceived
struct URPOCStagedCombat_Attack_NotifyLethalDamageReceived_Params
{
};

// Function WKND.RPOCStagedCombat_Attack.NotifyCombatStageCompleted
struct URPOCStagedCombat_Attack_NotifyCombatStageCompleted_Params
{
	ECombatStageType                                   CompletedStage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingStageCount;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombat_Attack.CreateAttackStageProxy
struct URPOCStagedCombat_Attack_CreateAttackStageProxy_Params
{
	class URPOCStagedCombatComponent*                  StagedCombatComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCCombatStageData*                        Stage;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	ECombatStage_Taunt                                 Taunt;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCEnemyComboStageSetData*                 OrderedCombos;                                            // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class URPOCEnemyComboStageSetData*                 RandomCombos;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               VerifyPosition;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCStagedCombat_Attack*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombat_GoToPosition.NotifyMoveLocationReached
struct URPOCStagedCombat_GoToPosition_NotifyMoveLocationReached_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	bool                                               bMovingToFaceActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetFaceActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombat_GoToPosition.NotifyMoveLocationAndYawReached
struct URPOCStagedCombat_GoToPosition_NotifyMoveLocationAndYawReached_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	bool                                               bMovingToFaceActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetFaceActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombat_GoToPosition.CreateGoToPositionProxy
struct URPOCStagedCombat_GoToPosition_CreateGoToPositionProxy_Params
{
	class URPOCStagedCombatComponent*                  StagedCombatComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  Position;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LocationTolerance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YawTolerance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	EStagedCombat_StageCompleteBehaviour               AfterOpponentReached;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCStagedCombat_GoToPosition*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombat_GoToPosition.CreateGoToOpponentProxy
struct URPOCStagedCombat_GoToPosition_CreateGoToOpponentProxy_Params
{
	class URPOCStagedCombatComponent*                  StagedCombatComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceTolerance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseYaw;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YawFromOpponent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	EStagedCombat_StageCompleteBehaviour               AfterOpponentReached;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCStagedCombat_GoToPosition*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombat_GoToPosition.CreateGoToMovementStageProxy
struct URPOCStagedCombat_GoToPosition_CreateGoToMovementStageProxy_Params
{
	class URPOCStagedCombatComponent*                  StagedCombatComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCCombatStageData*                        Stage;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDirection;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DirectionTolerance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	EStagedCombat_StageCompleteBehaviour               AfterOpponentReached;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCStagedCombat_GoToPosition*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombat_GoToPosition.CreateGoToLocationProxy
struct URPOCStagedCombat_GoToPosition_CreateGoToLocationProxy_Params
{
	class URPOCStagedCombatComponent*                  StagedCombatComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              LocationTolerance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	EStagedCombat_StageCompleteBehaviour               AfterOpponentReached;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCStagedCombat_GoToPosition*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombat_GoToPosition.CreateGoToCurrentTargetProxy
struct URPOCStagedCombat_GoToPosition_CreateGoToCurrentTargetProxy_Params
{
	class URPOCStagedCombatComponent*                  StagedCombatComponent;                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bUseDelay;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReachedLocationTimeout;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCStagedCombat_GoToPosition*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.ThrowStageConfigured
struct URPOCStagedCombatComponent_ThrowStageConfigured_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.TakeHit
struct URPOCStagedCombatComponent_TakeHit_Params
{
	float                                              Timeout;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.StopRotation
struct URPOCStagedCombatComponent_StopRotation_Params
{
};

// Function WKND.RPOCStagedCombatComponent.StageCompletedExternally
struct URPOCStagedCombatComponent_StageCompletedExternally_Params
{
	ECombatStageType                                   CompletedStage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.SetTargetOpponent
struct URPOCStagedCombatComponent_SetTargetOpponent_Params
{
	class AWKNDPlayerPawn*                             NewTargetOpponent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.SetNewDebugMovementTargets
struct URPOCStagedCombatComponent_SetNewDebugMovementTargets_Params
{
	struct FVector                                     NewMoveTargetLocation;                                    // (Parm, IsPlainOldData)
	struct FVector                                     NewTargetFaceLocation;                                    // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.SetNewDebugMovementTargetFaceActor
struct URPOCStagedCombatComponent_SetNewDebugMovementTargetFaceActor_Params
{
	struct FVector                                     NewMoveTargetLocation;                                    // (Parm, IsPlainOldData)
	class AActor*                                      NewTargetFaceActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.SetNewDebugMovementActorTarget
struct URPOCStagedCombatComponent_SetNewDebugMovementActorTarget_Params
{
	class AActor*                                      NewTargetFaceActor;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.SetLeftHanded
struct URPOCStagedCombatComponent_SetLeftHanded_Params
{
	bool                                               InLeftHanded;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.SetDirectionOffset
struct URPOCStagedCombatComponent_SetDirectionOffset_Params
{
	float                                              InDeltaDirection;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.SetDirection
struct URPOCStagedCombatComponent_SetDirection_Params
{
	float                                              InDirection;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.SetDamageable
struct URPOCStagedCombatComponent_SetDamageable_Params
{
	bool                                               InDamageable;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.SafeToTransitionFromState
struct URPOCStagedCombatComponent_SafeToTransitionFromState_Params
{
	ECombatStageType                                   CheckOutState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.ResetStageTimeout
struct URPOCStagedCombatComponent_ResetStageTimeout_Params
{
};

// Function WKND.RPOCStagedCombatComponent.ResetCombatStatistics
struct URPOCStagedCombatComponent_ResetCombatStatistics_Params
{
};

// Function WKND.RPOCStagedCombatComponent.RegisterStrikeLanded
struct URPOCStagedCombatComponent_RegisterStrikeLanded_Params
{
};

// Function WKND.RPOCStagedCombatComponent.RegisterStrikeBlocked
struct URPOCStagedCombatComponent_RegisterStrikeBlocked_Params
{
	bool                                               bWeakPushback;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.RegisterFinalComboStrikeBlocked
struct URPOCStagedCombatComponent_RegisterFinalComboStrikeBlocked_Params
{
	ECombat_ComboAttackResult                          ComboResult;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BlocksThisCombo;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                HitsThisCombo;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StrikesThisCombo;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.RegisterComboCompleted
struct URPOCStagedCombatComponent_RegisterComboCompleted_Params
{
	ECombat_ComboAttackResult                          ComboResult;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                BlocksThisCombo;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.PushCombatStage
struct URPOCStagedCombatComponent_PushCombatStage_Params
{
	class URPOCCombatStageData*                        Stage;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bClearCurrentStages;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Token;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	ECombatStageMovementOptions                        Positioning;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class ATargetPoint*                                Target;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.PlayStageSequence
struct URPOCStagedCombatComponent_PlayStageSequence_Params
{
	class AWKNDPlayerPawn*                             NewOpponent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCCombatSequence*                         InStageSequence;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.OverrideAttackSpeedMultipliers
struct URPOCStagedCombatComponent_OverrideAttackSpeedMultipliers_Params
{
	float                                              NewAttackSpeedMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewWindUpSpeedMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.OnStrike
struct URPOCStagedCombatComponent_OnStrike_Params
{
};

// Function WKND.RPOCStagedCombatComponent.OnDeath
struct URPOCStagedCombatComponent_OnDeath_Params
{
	struct FWKNDDamageInfo                             DamageInfo;                                               // (Parm)
};

// Function WKND.RPOCStagedCombatComponent.NotifySaberPickedUp
struct URPOCStagedCombatComponent_NotifySaberPickedUp_Params
{
	class AWKNDMotionController*                       Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.IsVulnerable
struct URPOCStagedCombatComponent_IsVulnerable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.IsStaggered
struct URPOCStagedCombatComponent_IsStaggered_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.IsInCombatSequence
struct URPOCStagedCombatComponent_IsInCombatSequence_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.IsAtTargetMoveLocationAndYaw
struct URPOCStagedCombatComponent_IsAtTargetMoveLocationAndYaw_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.IsAtTargetMoveLocation
struct URPOCStagedCombatComponent_IsAtTargetMoveLocation_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.GetTargetLocation
struct URPOCStagedCombatComponent_GetTargetLocation_Params
{
	struct FVector                                     IdealLocation;                                            // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     ClippedLocation;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.GetStageDebugInfo
struct URPOCStagedCombatComponent_GetStageDebugInfo_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.RPOCStagedCombatComponent.GetHealth
struct URPOCStagedCombatComponent_GetHealth_Params
{
	int                                                HitPoints;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.GetDistanceToOpponent
struct URPOCStagedCombatComponent_GetDistanceToOpponent_Params
{
	float                                              FoundDistance;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.GetDamageable
struct URPOCStagedCombatComponent_GetDamageable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.GetCombatStatistics
struct URPOCStagedCombatComponent_GetCombatStatistics_Params
{
	struct FStagedCombatStatistics                     Enemy;                                                    // (Parm, OutParm, IsPlainOldData)
	struct FStagedCombatStatistics                     Player;                                                   // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.EndCombatStage
struct URPOCStagedCombatComponent_EndCombatStage_Params
{
	ECombatStageType                                   StageType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.CurrentActiveStage
struct URPOCStagedCombatComponent_CurrentActiveStage_Params
{
	ECombatStageType                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.ConfigurePersonalCombatData
struct URPOCStagedCombatComponent_ConfigurePersonalCombatData_Params
{
	class UWKNDEnemyCombatData*                        NewPersonalCombatData;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewAttackSpeedMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewWindUpSpeedMultiplier;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStagedCombatComponent.CheckDamagedArmourPiece
struct URPOCStagedCombatComponent_CheckDamagedArmourPiece_Params
{
	struct FVector                                     StrikeLocation;                                           // (Parm, IsPlainOldData)
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.RPOCStrikePredictionComponent.InitNewOpponent
struct URPOCStrikePredictionComponent_InitNewOpponent_Params
{
	class AWKNDPlayerPawn*                             NewOpponent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.RPOCStrikePredictionComponent.HasOuterCapsuleOverlap
struct URPOCStrikePredictionComponent_HasOuterCapsuleOverlap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStrikePredictionComponent.HasIncomingStrike
struct URPOCStrikePredictionComponent_HasIncomingStrike_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStrikePredictionComponent.GetHasNewInnerCollision
struct URPOCStrikePredictionComponent_GetHasNewInnerCollision_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCStrikePredictionComponent.CheckForStrike
struct URPOCStrikePredictionComponent_CheckForStrike_Params
{
	struct FCompleteStrikeData                         ActiveStrike;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.Use_Release
struct URPOCUsageInterface_Use_Release_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.Use_Press
struct URPOCUsageInterface_Use_Press_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.Trigger_UnTouch
struct URPOCUsageInterface_Trigger_UnTouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.Trigger_Touch
struct URPOCUsageInterface_Trigger_Touch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.Trigger_Release
struct URPOCUsageInterface_Trigger_Release_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.Trigger_Press
struct URPOCUsageInterface_Trigger_Press_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.Stick_UnTouch
struct URPOCUsageInterface_Stick_UnTouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.Stick_Touch
struct URPOCUsageInterface_Stick_Touch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.FaceTopButton_UnTouch
struct URPOCUsageInterface_FaceTopButton_UnTouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.FaceTopButton_Touch
struct URPOCUsageInterface_FaceTopButton_Touch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.FaceTopButton_Release
struct URPOCUsageInterface_FaceTopButton_Release_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.FaceTopButton_Press
struct URPOCUsageInterface_FaceTopButton_Press_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.FaceBottomButton_UnTouch
struct URPOCUsageInterface_FaceBottomButton_UnTouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.FaceBottomButton_Touch
struct URPOCUsageInterface_FaceBottomButton_Touch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.FaceBottomButton_Release
struct URPOCUsageInterface_FaceBottomButton_Release_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.RPOCUsageInterface.FaceBottomButton_Press
struct URPOCUsageInterface_FaceBottomButton_Press_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SliceableChain.SpawnDestroyedLink
struct ASliceableChain_SpawnDestroyedLink_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableChain.SpawnCuttingVFX
struct ASliceableChain_SpawnCuttingVFX_Params
{
	struct FVector                                     CutLocation;                                              // (Parm, IsPlainOldData)
};

// Function WKND.SliceableChain.SetDissolveParameter
struct ASliceableChain_SetDissolveParameter_Params
{
	class UStaticMeshComponent*                        DestroyedMesh;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              DissolveTime;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableChain.ReceiveOnUpdateCut
struct ASliceableChain_ReceiveOnUpdateCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableChain.ReceiveOnStartCut
struct ASliceableChain_ReceiveOnStartCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableChain.ReceiveOnMeshSliced
struct ASliceableChain_ReceiveOnMeshSliced_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableChain.ReceiveOnEndCut
struct ASliceableChain_ReceiveOnEndCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableChain.PlaySlicedAudio
struct ASliceableChain_PlaySlicedAudio_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function WKND.SliceableChain.PlayDestroyedAudio
struct ASliceableChain_PlayDestroyedAudio_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function WKND.SliceableChain.OnTouched
struct ASliceableChain_OnTouched_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EHandTouch                                         TouchType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     ContactVelocity;                                          // (Parm, IsPlainOldData)
};

// Function WKND.SliceableChain.OnHitAudio
struct ASliceableChain_OnHitAudio_Params
{
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitImpulse;                                               // (Parm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
};

// Function WKND.SliceableChain.OnHit
struct ASliceableChain_OnHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableCloth.ReceiveOnUpdateCut
struct ASliceableCloth_ReceiveOnUpdateCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableCloth.ReceiveOnStartCut
struct ASliceableCloth_ReceiveOnStartCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableCloth.ReceiveOnMeshSliced
struct ASliceableCloth_ReceiveOnMeshSliced_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableCloth.ReceiveOnEndCut
struct ASliceableCloth_ReceiveOnEndCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.UpdateCut
struct USliceableMeshComponent_UpdateCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutEntryLocation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     CutExitLocation;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.StartDissolveOut
struct USliceableMeshComponent_StartDissolveOut_Params
{
};

// Function WKND.SliceableMeshComponent.StartCut
struct USliceableMeshComponent_StartCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.StampVFX
struct USliceableMeshComponent_StampVFX_Params
{
	struct FVector2D                                   CollisionUV;                                              // (ConstParm, Parm, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.SliceFromBladeCollision
struct USliceableMeshComponent_SliceFromBladeCollision_Params
{
	class AActor*                                      Lightsaber;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UProceduralMeshComponent*                    OutOtherHalfProcMesh;                                     // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EProcMeshSliceCapOption                            CapOption;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          CapMat;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SplitSpeedMultiplier;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bColorCutEdgeWhite;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.OnTouched
struct USliceableMeshComponent_OnTouched_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EHandTouch                                         TouchType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     ContactVelocity;                                          // (Parm, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.OnHit
struct USliceableMeshComponent_OnHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.OnAsyncPhysicsCookFinished
struct USliceableMeshComponent_OnAsyncPhysicsCookFinished_Params
{
};

// Function WKND.SliceableMeshComponent.IsFadingOut
struct USliceableMeshComponent_IsFadingOut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.HasBeenCut
struct USliceableMeshComponent_HasBeenCut_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.GetMeshBounds
struct USliceableMeshComponent_GetMeshBounds_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.GetDissolveStartTime
struct USliceableMeshComponent_GetDissolveStartTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.FinaliseCut
struct USliceableMeshComponent_FinaliseCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BladePointingDirection;                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.EstimateVolume
struct USliceableMeshComponent_EstimateVolume_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SliceableMeshComponent.EstimateCentre
struct USliceableMeshComponent_EstimateCentre_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.UpdateCut
struct ASliceableSkeleton_UpdateCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.StopRagdoll
struct ASliceableSkeleton_StopRagdoll_Params
{
};

// Function WKND.SliceableSkeleton.StartCut
struct ASliceableSkeleton_StartCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.ReceiveStopRagdoll
struct ASliceableSkeleton_ReceiveStopRagdoll_Params
{
};

// Function WKND.SliceableSkeleton.ReceiveRagdoll
struct ASliceableSkeleton_ReceiveRagdoll_Params
{
	bool                                               bApplySliceImpulse;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.ReceiveOnUpdateCut
struct ASliceableSkeleton_ReceiveOnUpdateCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutLocation;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.ReceiveOnStartCut
struct ASliceableSkeleton_ReceiveOnStartCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.ReceiveOnSkeletonCut
struct ASliceableSkeleton_ReceiveOnSkeletonCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutCentre;                                                // (Parm, IsPlainOldData)
	struct FVector                                     CutNormal;                                                // (Parm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.ReceiveOnEndCut
struct ASliceableSkeleton_ReceiveOnEndCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BladePointingDirection;                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.ReceiveKill
struct ASliceableSkeleton_ReceiveKill_Params
{
	bool                                               bApplySliceImpulse;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.ReceiveDissolveAndDestroy
struct ASliceableSkeleton_ReceiveDissolveAndDestroy_Params
{
};

// Function WKND.SliceableSkeleton.Ragdoll
struct ASliceableSkeleton_Ragdoll_Params
{
	bool                                               bApplySliceImpulse;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.PlaySlicedVFX
struct ASliceableSkeleton_PlaySlicedVFX_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, IsPlainOldData)
	float                                              DistanceFromBone;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChildBoneName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.OverrideChildBone
struct ASliceableSkeleton_OverrideChildBone_Params
{
	struct FName                                       ChildBoneName;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.OnTouched
struct ASliceableSkeleton_OnTouched_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EHandTouch                                         TouchType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     ContactVelocity;                                          // (Parm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.OnMeshSliced
struct ASliceableSkeleton_OnMeshSliced_Params
{
	struct FVector                                     CentreOfSlice;                                            // (Parm, IsPlainOldData)
	TArray<struct FVector>                             CutPoints;                                                // (Parm, ZeroConstructor)
	class UParticleSystem*                             SliceBurstPFX;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class USliceableMeshComponent*                     MeshA;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USliceableMeshComponent*                     MeshB;                                                    // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.OnHitAudio
struct ASliceableSkeleton_OnHitAudio_Params
{
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitImpulse;                                               // (Parm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.OnHit
struct ASliceableSkeleton_OnHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.Kill
struct ASliceableSkeleton_Kill_Params
{
	bool                                               bApplySliceImpulse;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.IsBoneSliceable
struct ASliceableSkeleton_IsBoneSliceable_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.GetSkeletonOrientation
struct ASliceableSkeleton_GetSkeletonOrientation_Params
{
	TEnumAsByte<ESkeletonOrientation>                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SliceableSkeleton.EndCut
struct ASliceableSkeleton_EndCut_Params
{
	class AActor*                                      CuttingActor;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BladePointingDirection;                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableSkeletonPart.ReceiveRagdoll
struct ASliceableSkeletonPart_ReceiveRagdoll_Params
{
};

// Function WKND.SliceableSkeletonPart.ReceiveDissolveAndDestroy
struct ASliceableSkeletonPart_ReceiveDissolveAndDestroy_Params
{
};

// Function WKND.SliceableSkeletonPart.Ragdoll
struct ASliceableSkeletonPart_Ragdoll_Params
{
};

// Function WKND.SliceableSkeletonPart.OnTouched
struct ASliceableSkeletonPart_OnTouched_Params
{
	class UPrimitiveComponent*                         TouchedComponent;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EHandTouch                                         TouchType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     ContactVelocity;                                          // (Parm, IsPlainOldData)
};

// Function WKND.SliceableSkeletonPart.OnHitAudio
struct ASliceableSkeletonPart_OnHitAudio_Params
{
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HitImpulse;                                               // (Parm, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (Parm, IsPlainOldData)
};

// Function WKND.SliceableSkeletonPart.OnHit
struct ASliceableSkeletonPart_OnHit_Params
{
	class UPrimitiveComponent*                         HitComp;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.SliceableSkeletonPart.CopyPoseFromSkeletalMesh
struct ASliceableSkeletonPart_CopyPoseFromSkeletalMesh_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshToCopy;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.SlicingPort.SlicingToolUnsocketed
struct USlicingPort_SlicingToolUnsocketed_Params
{
	class AActor*                                      SocketedForceItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SlicingPort.SlicingToolSocketed
struct USlicingPort_SlicingToolSocketed_Params
{
	class AActor*                                      SocketedForceItem;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SlicingPort.SetPoseableMeshComponent
struct USlicingPort_SetPoseableMeshComponent_Params
{
	class UPoseableMeshComponent*                      PoseableMesh;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.SlicingPort.GetPoseableMeshComponent
struct USlicingPort_GetPoseableMeshComponent_Params
{
	class UPoseableMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.SMMenuButtonComponent.SetMaterialBasedOnState
struct USMMenuButtonComponent_SetMaterialBasedOnState_Params
{
};

// Function WKND.SplineFlightComponent.SetLoopSpline
struct USplineFlightComponent_SetLoopSpline_Params
{
	class USplineComponent*                            Loop;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.SplineFlightComponent.SetCustomSplineComponents
struct USplineFlightComponent_SetCustomSplineComponents_Params
{
	class USplineComponent*                            A;                                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            R;                                                        // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.SplineFlightComponent.QueueStartAttack
struct USplineFlightComponent_QueueStartAttack_Params
{
	struct FVector                                     Loc;                                                      // (Parm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SplineFlightComponent.QueueLaunchToLoopSpline
struct USplineFlightComponent_QueueLaunchToLoopSpline_Params
{
	class USplineComponent*                            Loop;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SplineFlightComponent.QueueFlyToLoopSplineWithCustomPath
struct USplineFlightComponent_QueueFlyToLoopSplineWithCustomPath_Params
{
	class USplineComponent*                            Loop;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            customPath;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SplineFlightComponent.QueueFlyToLoopSpline
struct USplineFlightComponent_QueueFlyToLoopSpline_Params
{
	class USplineComponent*                            Loop;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SquadAttack.OnAllMembersReadyToAttack
struct ASquadAttack_OnAllMembersReadyToAttack_Params
{
};

// Function WKND.SquadAttack.GetAttackSquadRequests
struct ASquadAttack_GetAttackSquadRequests_Params
{
	TArray<struct FAttackSquadEnemyRequest>            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.SquadAttack.AttackEnds
struct ASquadAttack_AttackEnds_Params
{
};

// Function WKND.SquadAttack.AttackAboutToEnd
struct ASquadAttack_AttackAboutToEnd_Params
{
};

// Function WKND.SquadAttack.AddNewRequest
struct ASquadAttack_AddNewRequest_Params
{
	TArray<struct FAttackSquadEnemyRequest>            RequestArray;                                             // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FScriptDelegate                             SelectionPredicate;                                       // (Parm, ZeroConstructor)
	int                                                MinEnemiesToRequest;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxEnemiesToRequest;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SquadOrders.ValidateSquad
struct USquadOrders_ValidateSquad_Params
{
};

// Function WKND.SquadOrders.TickSquad
struct USquadOrders_TickSquad_Params
{
	float                                              deltatTime;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SquadOrders.StopSquadOrders
struct USquadOrders_StopSquadOrders_Params
{
};

// Function WKND.SquadOrders.StartSquadOrders
struct USquadOrders_StartSquadOrders_Params
{
};

// Function WKND.SquadOrders.SpawnAIFromClass
struct USquadOrders_SpawnAIFromClass_Params
{
	class ATargetPoint*                                spawnTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      PawnClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UBehaviorTree*                               BehaviorTree;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SquadOrders.ShowSphere
struct USquadOrders_ShowSphere_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      col;                                                      // (Parm, IsPlainOldData)
};

// Function WKND.SquadOrders.RemoveFromSquad
struct USquadOrders_RemoveFromSquad_Params
{
	class AActor*                                      toRemove;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SquadOrders.OnRemoved
struct USquadOrders_OnRemoved_Params
{
	class AActor*                                      removed;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SquadOrders.OnAdded
struct USquadOrders_OnAdded_Params
{
	class AActor*                                      added;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.SquadOrders.GetSquadMembers
struct USquadOrders_GetSquadMembers_Params
{
	TArray<class AActor*>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function WKND.SquadOrders.GetSquadMember
struct USquadOrders_GetSquadMember_Params
{
	int                                                Index;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SquadOrders.GetRandomSquadMember
struct USquadOrders_GetRandomSquadMember_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SquadOrders.GetClosestSquadMemberTo
struct USquadOrders_GetClosestSquadMemberTo_Params
{
	class ATargetPoint*                                TargetPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SquadOrders.CountSquadSize
struct USquadOrders_CountSquadSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.SquadOrders.AddToSquad
struct USquadOrders_AddToSquad_Params
{
	class AActor*                                      toAdd;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.StartMenuActor.OnRestartGameButtonPressed
struct AStartMenuActor_OnRestartGameButtonPressed_Params
{
	struct FPressedButtonComponent                     RestartButton;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.StartMenuActor.OnPlayGameButtonPressed
struct AStartMenuActor_OnPlayGameButtonPressed_Params
{
	struct FPressedButtonComponent                     PlayButton;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.TelemetryManager.RegisterWaveStarted
struct UTelemetryManager_RegisterWaveStarted_Params
{
	struct FName                                       WaveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.TelemetryManager.RegisterWaveFailed
struct UTelemetryManager_RegisterWaveFailed_Params
{
	struct FName                                       WaveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.TelemetryManager.RegisterWaveCompleted
struct UTelemetryManager_RegisterWaveCompleted_Params
{
	struct FName                                       WaveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.TelemetryManager.RegisterTimeLimitExceeded
struct UTelemetryManager_RegisterTimeLimitExceeded_Params
{
};

// Function WKND.TelemetryManager.RegisterDeath
struct UTelemetryManager_RegisterDeath_Params
{
	class AActor*                                      DeadActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.TelemetryManager.RegisterDamage
struct UTelemetryManager_RegisterDamage_Params
{
	class AActor*                                      HurtActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ToolbeltSlotCollisionComponent.OnToolbeltSlotOverlapEnd
struct UToolbeltSlotCollisionComponent_OnToolbeltSlotOverlapEnd_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.ToolbeltSlotCollisionComponent.OnToolbeltSlotOverlapBegin
struct UToolbeltSlotCollisionComponent_OnToolbeltSlotOverlapBegin_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.TransformBufferManager.Update
struct UTransformBufferManager_Update_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  CurrentTransform;                                         // (Parm, IsPlainOldData)
};

// Function WKND.TransformBufferManager.GetTotalTranslation
struct UTransformBufferManager_GetTotalTranslation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.TransformBufferManager.GetStartEndTranslation
struct UTransformBufferManager_GetStartEndTranslation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.TransformBufferManager.GetRegressedVelocity
struct UTransformBufferManager_GetRegressedVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.TransformBufferManager.GetRegressedAngularVelocity
struct UTransformBufferManager_GetRegressedAngularVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.TransformBufferManager.GetPointAlongBufferPath
struct UTransformBufferManager_GetPointAlongBufferPath_Params
{
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.TransformBufferManager.GetLastFrameVelocity
struct UTransformBufferManager_GetLastFrameVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.TransformBufferManager.GetDirectTranslation
struct UTransformBufferManager_GetDirectTranslation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.TransformBufferManager.ClearBuffers
struct UTransformBufferManager_ClearBuffers_Params
{
	bool                                               Location;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Velocity;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AngularVelocity;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.VaderCell_INPControllerComponent.SetCellState
struct UVaderCell_INPControllerComponent_SetCellState_Params
{
	TEnumAsByte<EVaderCell_State>                      NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.VaderCell_INPControllerComponent.GetCellState
struct UVaderCell_INPControllerComponent_GetCellState_Params
{
	TEnumAsByte<EVaderCell_State>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VaderCell_INPControllerComponent.EanbleRePosition
struct UVaderCell_INPControllerComponent_EanbleRePosition_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.VaderCell_INPControllerComponent.EanbleReOrient
struct UVaderCell_INPControllerComponent_EanbleReOrient_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.VelocityTrackerBase.GetAverageVelocity
struct UVelocityTrackerBase_GetAverageVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.VelocityTrackerBase.GetAverageSpeedAwayFromTarget
struct UVelocityTrackerBase_GetAverageSpeedAwayFromTarget_Params
{
	struct FVector                                     Target;                                                   // (Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRForceMotionController.PrepareToForceGrabItem
struct UVRForceMotionController_PrepareToForceGrabItem_Params
{
	class UForceItemComponentBase*                     ForceItem;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.VRForceMotionController.PickBestTransformToGrabItem
struct UVRForceMotionController_PickBestTransformToGrabItem_Params
{
	class UForceItemComponentBase*                     ForceItem;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.VRForceMotionController.IsNearGrabbableObject
struct UVRForceMotionController_IsNearGrabbableObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRForceMotionController.IsHoldingParticularObject
struct UVRForceMotionController_IsHoldingParticularObject_Params
{
	class UForceItemComponentBase*                     ForceItem;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRForceMotionController.IsHoldingObject
struct UVRForceMotionController_IsHoldingObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRForceMotionController.IsControllerTracking
struct UVRForceMotionController_IsControllerTracking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRForceMotionController.GetVelocityTracker
struct UVRForceMotionController_GetVelocityTracker_Params
{
	class UVelocityTrackerBase*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.VRForceMotionController.GetMotionControllerHand
struct UVRForceMotionController_GetMotionControllerHand_Params
{
	EControllerHand                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRForceMotionController.GetGrabberRotation
struct UVRForceMotionController_GetGrabberRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.VRForceMotionController.GetGrabberLocation
struct UVRForceMotionController_GetGrabberLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.VRForceMotionController.GetForcePowerAim
struct UVRForceMotionController_GetForcePowerAim_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.VRForceMotionController.ControllerInputIndicatesGrab
struct UVRForceMotionController_ControllerInputIndicatesGrab_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRForcePawn.GetMotionControllerForHand
struct UVRForcePawn_GetMotionControllerForHand_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRForcePawn.GetForcePowerComponent
struct UVRForcePawn_GetForcePowerComponent_Params
{
	class UForcePowerComponentBase*                    ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.VRLocomotionComponent.SetTeleportVector
struct UVRLocomotionComponent_SetTeleportVector_Params
{
	struct FVector                                     InTeleportVector;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     OutResultingWorldTargetLocation;                          // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRLocomotionComponent.SetAimTarget
struct UVRLocomotionComponent_SetAimTarget_Params
{
	class USceneComponent*                             Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       TargetSocket;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.VRLocomotionComponent.DoTeleport
struct UVRLocomotionComponent_DoTeleport_Params
{
};

// Function WKND.VRLocomotionComponent.ClearAimTarget
struct UVRLocomotionComponent_ClearAimTarget_Params
{
};

// Function WKND.VRUtils.StartQuestShaderPrecompile
struct UVRUtils_StartQuestShaderPrecompile_Params
{
};

// Function WKND.VRUtils.GetQuestShaderPrecompilePercent
struct UVRUtils_GetQuestShaderPrecompilePercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRUtils.GetMotionControllerTrackingStatus
struct UVRUtils_GetMotionControllerTrackingStatus_Params
{
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	ETrackingStatus                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRUtils.GetMotionControllerOrientationAndPosition
struct UVRUtils_GetMotionControllerOrientationAndPosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRUtils.GetHeadsetWorldTransform
struct UVRUtils_GetHeadsetWorldTransform_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               allowToRevertToPlayerCamera;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.VRUtils.GetHeadsetWorldOrientationAndPosition
struct UVRUtils_GetHeadsetWorldOrientationAndPosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               allowToRevertToPlayerCamera;                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRUtils.GetHeadsetOrientationAndPosition
struct UVRUtils_GetHeadsetOrientationAndPosition_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Orientation;                                              // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRUtils.GetHeadsetLocalTransform
struct UVRUtils_GetHeadsetLocalTransform_Params
{
	class UObject*                                     WorldContextObject;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PlayerIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.VRUtils.EnableFoveatedRenderMask
struct UVRUtils_EnableFoveatedRenderMask_Params
{
};

// Function WKND.VRUtils.DisableFoveatedRenderMask
struct UVRUtils_DisableFoveatedRenderMask_Params
{
};

// Function WKND.VRWidgetInterface.Touch
struct UVRWidgetInterface_Touch_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRWidgetInterface.StartHover
struct UVRWidgetInterface_StartHover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.VRWidgetInterface.EndHover
struct UVRWidgetInterface_EndHover_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WeaponInteractivityInterface.UsesCuttingFX
struct UWeaponInteractivityInterface_UsesCuttingFX_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WeaponInteractivityInterface.OnUpdateCut
struct UWeaponInteractivityInterface_OnUpdateCut_Params
{
	class AActor*                                      CuttingActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         CutComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     CutEntryLocation;                                         // (Parm, IsPlainOldData)
	struct FVector                                     CutEntryNormal;                                           // (Parm, IsPlainOldData)
	struct FVector2D                                   CollisionUV;                                              // (Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutExitLocation;                                          // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WeaponInteractivityInterface.OnStartCut
struct UWeaponInteractivityInterface_OnStartCut_Params
{
	class AActor*                                      CuttingActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         CutComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CutEntryLocation;                                         // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WeaponInteractivityInterface.OnEndCut
struct UWeaponInteractivityInterface_OnEndCut_Params
{
	class AActor*                                      CuttingActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         CutComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     BladeDirection;                                           // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WeaponMotionComponent.GetIsEnabled
struct UWeaponMotionComponent_GetIsEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WeaponMotionComponent.Enable
struct UWeaponMotionComponent_Enable_Params
{
	class ULightsaberBladeComponent*                   Blade;                                                    // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.WeaponMotionComponent.Disable
struct UWeaponMotionComponent_Disable_Params
{
};

// Function WKND.WKNDAnimInstance.GetElbows
struct UWKNDAnimInstance_GetElbows_Params
{
	struct FTransform                                  LeftWrist;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  RightWrist;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LeftElbow;                                                // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     RightElbow;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function WKND.WKNDAttackPattern.OnAttackPatternStopped
struct UWKNDAttackPattern_OnAttackPatternStopped_Params
{
};

// Function WKND.WKNDAttackPattern.OnAttackPatternStarted
struct UWKNDAttackPattern_OnAttackPatternStarted_Params
{
};

// Function WKND.WKNDAttackPattern.EndAttackPattern
struct UWKNDAttackPattern_EndAttackPattern_Params
{
};

// Function WKND.WKNDAttackPattern.DrawSphere
struct UWKNDAttackPattern_DrawSphere_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Segments;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FColor                                      col;                                                      // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDAttackPatternComponent.StopAttackPattern
struct UWKNDAttackPatternComponent_StopAttackPattern_Params
{
};

// Function WKND.WKNDAttackPatternComponent.StartAttackPattern
struct UWKNDAttackPatternComponent_StartAttackPattern_Params
{
	class UClass*                                      pattern;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDAttackPatternComponent.HasAttackPattern
struct UWKNDAttackPatternComponent_HasAttackPattern_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGunComponent.ShootAtVector
struct UWKNDGunComponent_ShootAtVector_Params
{
	struct FVector                                     targetVector;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	TEnumAsByte<EShotSpecifier>                        specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGunComponent.ShootAtActor
struct UWKNDGunComponent_ShootAtActor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShotSpecifier>                        specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActorSide>                            side;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGunComponent.CancelPendingShots
struct UWKNDGunComponent_CancelPendingShots_Params
{
};

// Function WKND.WKNDBlasterShot.StartStretch
struct AWKNDBlasterShot_StartStretch_Params
{
};

// Function WKND.WKNDCameraComponent.ToggleForcePosition
struct UWKNDCameraComponent_ToggleForcePosition_Params
{
};

// Function WKND.WKNDCameraComponent.SetPlayerPosition
struct UWKNDCameraComponent_SetPlayerPosition_Params
{
	struct FVector                                     Position;                                                 // (Parm, IsPlainOldData)
};

// Function WKND.WKNDCameraComponent.SetForcePosition
struct UWKNDCameraComponent_SetForcePosition_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDCameraComponent.ResetVR
struct UWKNDCameraComponent_ResetVR_Params
{
};

// Function WKND.WKNDCheckpointTeleporter.SetTeleporterState
struct AWKNDCheckpointTeleporter_SetTeleporterState_Params
{
	ECheckpointTeleporterState                         NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDCheckpointTeleporter.PerformTeleport
struct AWKNDCheckpointTeleporter_PerformTeleport_Params
{
};

// Function WKND.WKNDCheckpointTeleporter.OnTeleportDone
struct AWKNDCheckpointTeleporter_OnTeleportDone_Params
{
};

// Function WKND.WKNDCheckpointTeleporter.OnCheckpointLevelSetupDone
struct AWKNDCheckpointTeleporter_OnCheckpointLevelSetupDone_Params
{
	class ALevelScriptActor*                           LevelScriptActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDCheckpointTeleporter.IsValidCheckpoint
struct AWKNDCheckpointTeleporter_IsValidCheckpoint_Params
{
	class UWKNDProgressionCheckpointData*              CheckpointData;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDCheckpointTeleporter.InvokeCheckpointTeleport
struct AWKNDCheckpointTeleporter_InvokeCheckpointTeleport_Params
{
	class UWKNDProgressionCheckpointData*              CheckpointName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ATargetPoint*                                PlayerTargetPointOverride;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLoadingScreen;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDCheckpointTeleporter.GetTargetPointFromCheckpoint
struct AWKNDCheckpointTeleporter_GetTargetPointFromCheckpoint_Params
{
	class UWKNDProgressionCheckpointData*              Checkpoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFound;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ATargetPoint*                                PlayerTargetPoint;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class ATargetPoint*                                ZoeTargetPoint;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDCheckpointTeleporter.GetNextDebugCheckpoint
struct AWKNDCheckpointTeleporter_GetNextDebugCheckpoint_Params
{
	int                                                CurrentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncrementIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FoundIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FCheckpoint                                 FoundCheckpoint;                                          // (Parm, OutParm)
};

// Function WKND.WKNDCheckpointTeleporter.GetNextChapterCheckpoint
struct AWKNDCheckpointTeleporter_GetNextChapterCheckpoint_Params
{
	int                                                CurrentIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIncrementIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                FoundIndex;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FCheckpoint                                 FoundCheckpoint;                                          // (Parm, OutParm)
};

// Function WKND.WKNDCheckpointTeleporter.GetCheckpointByTargetPoint
struct AWKNDCheckpointTeleporter_GetCheckpointByTargetPoint_Params
{
	class ATargetPoint*                                TargetPoint;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UWKNDProgressionCheckpointData*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDCheckpointTeleporter.GetCheckpointByName
struct AWKNDCheckpointTeleporter_GetCheckpointByName_Params
{
	struct FString                                     NameString;                                               // (Parm, ZeroConstructor)
	class UWKNDProgressionCheckpointData*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDCheckpointTeleporter.DoCheckpointTeleport
struct AWKNDCheckpointTeleporter_DoCheckpointTeleport_Params
{
	class UWKNDProgressionCheckpointData*              DesiredCheckpoint;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboDetectionComponent.ReportFinishedStrike
struct UWKNDComboDetectionComponent_ReportFinishedStrike_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDComboDetectionComponent.GetStrikingProperties
struct UWKNDComboDetectionComponent_GetStrikingProperties_Params
{
	struct FCompleteStrikeData                         CurrentStrike;                                            // (Parm, OutParm)
};

// Function WKND.WKNDComboDetectionComponent.GetCurrentStrikeId
struct UWKNDComboDetectionComponent_GetCurrentStrikeId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDComboDetectionComponent.ExternalComboReset
struct UWKNDComboDetectionComponent_ExternalComboReset_Params
{
};

// Function WKND.WKNDComboDetectionComponent.CompareStrikes
struct UWKNDComboDetectionComponent_CompareStrikes_Params
{
	struct FVector2D                                   StrikeOne;                                                // (Parm, IsPlainOldData)
	struct FVector2D                                   StrikeTwo;                                                // (Parm, IsPlainOldData)
	float                                              AngleDifferenceReqd;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EComboAngleCheck                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.VisualReset
struct AWKNDComboTutor_VisualReset_Params
{
};

// Function WKND.WKNDComboTutor.UpdateVisibilityStatus
struct AWKNDComboTutor_UpdateVisibilityStatus_Params
{
};

// Function WKND.WKNDComboTutor.UpdatePoseProgress
struct AWKNDComboTutor_UpdatePoseProgress_Params
{
};

// Function WKND.WKNDComboTutor.SetNewTutorial
struct AWKNDComboTutor_SetNewTutorial_Params
{
	class UWKNDTutorialData*                           NewTutorial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.SetNewStudent
struct AWKNDComboTutor_SetNewStudent_Params
{
	class AWKNDPlayerPawn*                             NewStudent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.SetInTutorialArea
struct AWKNDComboTutor_SetInTutorialArea_Params
{
	bool                                               bInArea;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.ResetPostPose
struct AWKNDComboTutor_ResetPostPose_Params
{
};

// Function WKND.WKNDComboTutor.ResetPostCombo
struct AWKNDComboTutor_ResetPostCombo_Params
{
};

// Function WKND.WKNDComboTutor.ResetCurrentTutorial
struct AWKNDComboTutor_ResetCurrentTutorial_Params
{
	bool                                               bResetStage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.ProgressStrike
struct AWKNDComboTutor_ProgressStrike_Params
{
};

// Function WKND.WKNDComboTutor.PreviewStrike
struct AWKNDComboTutor_PreviewStrike_Params
{
	int                                                UpcomingStrikeIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.PreStrikePauseComplete
struct AWKNDComboTutor_PreStrikePauseComplete_Params
{
};

// Function WKND.WKNDComboTutor.PostStrikePauseStart
struct AWKNDComboTutor_PostStrikePauseStart_Params
{
};

// Function WKND.WKNDComboTutor.PostStrikeCheck
struct AWKNDComboTutor_PostStrikeCheck_Params
{
};

// Function WKND.WKNDComboTutor.NotifyComboStrikeStarted_Pose
struct AWKNDComboTutor_NotifyComboStrikeStarted_Pose_Params
{
	class UWKNDPlayerComboData*                        Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWKNDPlayerStrikeData*                       Strike;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StrikeIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxStrikeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.NotifyComboStrikeStarted_Combo
struct AWKNDComboTutor_NotifyComboStrikeStarted_Combo_Params
{
	class UWKNDPlayerComboData*                        Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWKNDPlayerStrikeData*                       Strike;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StrikeIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxStrikeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.NotifyComboStrikeEnded_Combo
struct AWKNDComboTutor_NotifyComboStrikeEnded_Combo_Params
{
	class UWKNDPlayerComboData*                        Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWKNDPlayerStrikeData*                       Strike;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                StrikeIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                MaxStrikeIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	bool                                               bValid;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.NotifyComboPoseLost_Pose
struct AWKNDComboTutor_NotifyComboPoseLost_Pose_Params
{
	class UWKNDPlayerPoseData*                         Pose;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.NotifyComboPoseFound_Pose
struct AWKNDComboTutor_NotifyComboPoseFound_Pose_Params
{
	class UWKNDPlayerPoseData*                         Pose;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.NotifyComboAttemptStarted_Pose
struct AWKNDComboTutor_NotifyComboAttemptStarted_Pose_Params
{
	class UWKNDPlayerPoseData*                         Pose;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.NotifyComboAttemptStarted_Combo
struct AWKNDComboTutor_NotifyComboAttemptStarted_Combo_Params
{
	class UWKNDPlayerPoseData*                         Pose;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.NotifyComboAttemptEnded_Pose
struct AWKNDComboTutor_NotifyComboAttemptEnded_Pose_Params
{
	EComboEndType                                      EndType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UWKNDPlayerComboData*                        Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.NotifyComboAttemptEnded_Combo
struct AWKNDComboTutor_NotifyComboAttemptEnded_Combo_Params
{
	EComboEndType                                      EndType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UWKNDPlayerComboData*                        Combo;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.EndPoseTracking
struct AWKNDComboTutor_EndPoseTracking_Params
{
	class UWKNDPlayerPoseData*                         Pose;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDComboTutor.CompletedPoseForTutorial
struct AWKNDComboTutor_CompletedPoseForTutorial_Params
{
};

// Function WKND.WKNDComboTutor.BeginPoseTracking
struct AWKNDComboTutor_BeginPoseTracking_Params
{
	class UWKNDPlayerPoseData*                         Pose;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDControllerTutorComponent.StartNewTutorial_Component
struct UWKNDControllerTutorComponent_StartNewTutorial_Component_Params
{
	int                                                NewTutorial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             TgtComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ArrowFadeWhenCloserThanDist;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArrowTotalFadeDist;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDControllerTutorComponent.StartNewTutorial
struct UWKNDControllerTutorComponent_StartNewTutorial_Params
{
	int                                                NewTutorial;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TgtActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArrowFadeWhenCloserThanDist;                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ArrowTotalFadeDist;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDControllerTutorComponent.SetTutorialVisible
struct UWKNDControllerTutorComponent_SetTutorialVisible_Params
{
	bool                                               bNewVisible;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDControllerTutorComponent.GetButtonMesh
struct UWKNDControllerTutorComponent_GetButtonMesh_Params
{
	TEnumAsByte<ETutorialButton>                       FetchButton;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDControllerTutorComponent.CompleteTutorial
struct UWKNDControllerTutorComponent_CompleteTutorial_Params
{
	int                                                CompletedTutorial;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDDamageComponent.GetDamageAmount
struct UWKNDDamageComponent_GetDamageAmount_Params
{
	EDamageType                                        DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	EDamageStrength                                    DamageStrength;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDDialogueManager.WouldPlayNow
struct AWKNDDialogueManager_WouldPlayNow_Params
{
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowConcurrent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDDialogueManager.WaitForNewNagInCurrentSequence
struct AWKNDDialogueManager_WaitForNewNagInCurrentSequence_Params
{
	bool                                               ProtectAgainstMultipleCalls;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function WKND.WKNDDialogueManager.WaitForDialogueToStart
struct AWKNDDialogueManager_WaitForDialogueToStart_Params
{
	struct FNTPlayingEvent                             PlayingEvent;                                             // (Parm)
	bool                                               ProtectAgainstMultipleCalls;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function WKND.WKNDDialogueManager.WaitForDialogueEvent
struct AWKNDDialogueManager_WaitForDialogueEvent_Params
{
	struct FNTPlayingEvent                             PlayingEvent;                                             // (Parm)
	bool                                               ProtectAgainstMultipleCalls;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function WKND.WKNDDialogueManager.WaitForCurrentNagSequence
struct AWKNDDialogueManager_WaitForCurrentNagSequence_Params
{
	bool                                               ProtectAgainstMultipleCalls;                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

// Function WKND.WKNDDialogueManager.UpdateSpeakingActorTable
struct AWKNDDialogueManager_UpdateSpeakingActorTable_Params
{
};

// Function WKND.WKNDDialogueManager.StopNagDialogue
struct AWKNDDialogueManager_StopNagDialogue_Params
{
	bool                                               StopCurrentNag;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDDialogueManager.StopDialogue
struct AWKNDDialogueManager_StopDialogue_Params
{
	int                                                StopPriority;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDDialogueManager.StaticDialogueDebug
struct AWKNDDialogueManager_StaticDialogueDebug_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function WKND.WKNDDialogueManager.StartNagDialogue
struct AWKNDDialogueManager_StartNagDialogue_Params
{
	struct FNagSequence                                NagSequence;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	class AActor*                                      DefaultNagActorOverride;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNTPlayingEvent                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.WKNDDialogueManager.SetDialogueSocket
struct AWKNDDialogueManager_SetDialogueSocket_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpeakingBone;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDDialogueManager.MakeDialogueRequest
struct AWKNDDialogueManager_MakeDialogueRequest_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PostPlayDelay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowConcurrent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Queueable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SilentCueTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDialogueRequest                            ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.WKNDDialogueManager.IsNagging
struct AWKNDDialogueManager_IsNagging_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDDialogueManager.GetSpeakingActor
struct AWKNDDialogueManager_GetSpeakingActor_Params
{
	struct FName                                       RoleName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpeakingBone;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDDialogueManager.GetCurrentNag
struct AWKNDDialogueManager_GetCurrentNag_Params
{
	struct FNagInfo                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.WKNDDialogueManager.DialogueDebug
struct AWKNDDialogueManager_DialogueDebug_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function WKND.WKNDDialogueManager.AddSpeakingActorInfo
struct AWKNDDialogueManager_AddSpeakingActorInfo_Params
{
	struct FName                                       RoleName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpeakingBone;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      CurrentActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDDialogueManager.AddDialogueRequestStruct
struct AWKNDDialogueManager_AddDialogueRequestStruct_Params
{
	struct FDialogueRequest                            DialogueRequest;                                          // (Parm, OutParm)
	struct FName                                       SpeakingBone;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNTPlayingEvent                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.WKNDDialogueManager.AddDialogueRequest
struct AWKNDDialogueManager_AddDialogueRequest_Params
{
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              PostPlayDelay;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowConcurrent;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Queueable;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpeakingBone;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SilentCueTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNTPlayingEvent                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.WKNDDroidInstrumentFoleyComponent.GetInstrumentSpeed
struct UWKNDDroidInstrumentFoleyComponent_GetInstrumentSpeed_Params
{
	struct FName                                       instrumentName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDEnemyProjectileMovementComponent.TestDeflectionAgainstDesiredDirection
struct UWKNDEnemyProjectileMovementComponent_TestDeflectionAgainstDesiredDirection_Params
{
	struct FVector                                     DeflectionVelocity;                                       // (Parm, IsPlainOldData)
	struct FVector                                     DesiredDirection;                                         // (Parm, IsPlainOldData)
	bool                                               bFlatAngleTest;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTolerance;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutAngle;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDEnemyProjectileMovementComponent.SetTargetOpponent
struct UWKNDEnemyProjectileMovementComponent_SetTargetOpponent_Params
{
	class AActor*                                      NewTargetOpponent;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActorSide>                            side;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDEnemyProjectileMovementComponent.SetSpeedAdjustProperties
struct UWKNDEnemyProjectileMovementComponent_SetSpeedAdjustProperties_Params
{
	bool                                               bNewActive;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   NewAdjustDistance;                                        // (Parm, IsPlainOldData)
	struct FVector2D                                   NewAdjustSpeed;                                           // (Parm, IsPlainOldData)
};

// Function WKND.WKNDEnemyProjectileMovementComponent.SelectNewTargetLocation
struct UWKNDEnemyProjectileMovementComponent_SelectNewTargetLocation_Params
{
	TEnumAsByte<EActorSide>                            side;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDEnemyProjectileMovementComponent.ResolvePasses
struct UWKNDEnemyProjectileMovementComponent_ResolvePasses_Params
{
	struct FTransform                                  CurrentTransform;                                         // (Parm, IsPlainOldData)
};

// Function WKND.WKNDEnemyProjectileMovementComponent.ResolveHits
struct UWKNDEnemyProjectileMovementComponent_ResolveHits_Params
{
	struct FTransform                                  PreviousTransform;                                        // (Parm, IsPlainOldData)
	struct FTransform                                  CurrentTransform;                                         // (Parm, IsPlainOldData)
};

// Function WKND.WKNDEnemyProjectileMovementComponent.PerformSpeedAdjust
struct UWKNDEnemyProjectileMovementComponent_PerformSpeedAdjust_Params
{
};

// Function WKND.WKNDEnemyProjectileMovementComponent.GetTargetLocationFromActor
struct UWKNDEnemyProjectileMovementComponent_GetTargetLocationFromActor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDEnemyProjectileMovementComponent.DeflectProjectile
struct UWKNDEnemyProjectileMovementComponent_DeflectProjectile_Params
{
	struct FHitResult                                  HitResult;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AWKNDPlayerPawn*                             DeflectingPlayerPawn;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDFloatingMovementComponent.StopDistanceKeeping
struct UWKNDFloatingMovementComponent_StopDistanceKeeping_Params
{
};

// Function WKND.WKNDFloatingMovementComponent.StartDistanceKeeping
struct UWKNDFloatingMovementComponent_StartDistanceKeeping_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFloatingMovementComponent.PushMovementType
struct UWKNDFloatingMovementComponent_PushMovementType_Params
{
	EBuddyAIMovementType                               MovementType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFloatingMovementComponent.PopMovementType
struct UWKNDFloatingMovementComponent_PopMovementType_Params
{
};

// Function WKND.WKNDFloatingMovementComponent.GetPointAtRange
struct UWKNDFloatingMovementComponent_GetPointAtRange_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, IsPlainOldData)
	struct FVector                                     centerPoint;                                              // (Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.UpdatePlayerClimbing
struct UWKNDFoleySoundManager_UpdatePlayerClimbing_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EWKNDHands                                         Handedness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SmoothedSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNTPlayingEvent                             PlayingSound;                                             // (Parm)
};

// Function WKND.WKNDFoleySoundManager.StartClimbingSoundEvent
struct UWKNDFoleySoundManager_StartClimbingSoundEvent_Params
{
	EWKNDHands                                         Handedness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.SetVolume
struct UWKNDFoleySoundManager_SetVolume_Params
{
	ESoundChannel                                      Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.OnStopAll
struct UWKNDFoleySoundManager_OnStopAll_Params
{
};

// Function WKND.WKNDFoleySoundManager.OnSliceableCollision
struct UWKNDFoleySoundManager_OnSliceableCollision_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              RawImpactStrength;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NormalizedImpactStrength;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ImpactSound;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              EstimatedVolume;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.OnReturnToMainMenu
struct UWKNDFoleySoundManager_OnReturnToMainMenu_Params
{
};

// Function WKND.WKNDFoleySoundManager.OnQuestHeadPhoneChange
struct UWKNDFoleySoundManager_OnQuestHeadPhoneChange_Params
{
	bool                                               PluggedIn;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.OnPlayerFootStep
struct UWKNDFoleySoundManager_OnPlayerFootStep_Params
{
	class AWKNDPlayerPawn*                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GroundHit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	class UAkAudioEvent*                               Footstep;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EMovementContext                                   MovementContext;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.OnPlayerClimbing
struct UWKNDFoleySoundManager_OnPlayerClimbing_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EWKNDHands                                         Handedness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SmoothedSpeed;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.OnPauseStart
struct UWKNDFoleySoundManager_OnPauseStart_Params
{
};

// Function WKND.WKNDFoleySoundManager.OnPauseEnd
struct UWKNDFoleySoundManager_OnPauseEnd_Params
{
};

// Function WKND.WKNDFoleySoundManager.OnLevelStartFadeUp
struct UWKNDFoleySoundManager_OnLevelStartFadeUp_Params
{
	float                                              FadeTime;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.OnHandHit
struct UWKNDFoleySoundManager_OnHandHit_Params
{
	class URPOCHandEnvironmentInteractionComponent*    HandComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	EPlayerHandImpact                                  ImpactType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     ImpactVel;                                                // (Parm, IsPlainOldData)
	float                                              NormalisedImpactSpeed;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      HeldObject;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkEvent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.OnFootStep
struct UWKNDFoleySoundManager_OnFootStep_Params
{
	bool                                               GroundHit;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	class UAkAudioEvent*                               Footstep;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EMovementContext                                   MovementContext;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.OnCollision
struct UWKNDFoleySoundManager_OnCollision_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	float                                              RawImpactStrength;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NormalizedImpactStrength;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ImpactSound;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool                                               IsMeshPart;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.MenuSound_OnVolumeChange
struct UWKNDFoleySoundManager_MenuSound_OnVolumeChange_Params
{
	struct FVector                                     ComponentLocation;                                        // (Parm, IsPlainOldData)
	bool                                               ValueIncreased;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	ESoundChannel                                      Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.MenuSound_OnTabChange
struct UWKNDFoleySoundManager_MenuSound_OnTabChange_Params
{
	struct FVector                                     ComponentLocation;                                        // (Parm, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.MenuSound_OnScrollContainerSelectionChange
struct UWKNDFoleySoundManager_MenuSound_OnScrollContainerSelectionChange_Params
{
	struct FVector                                     ComponentLocation;                                        // (Parm, IsPlainOldData)
	bool                                               bIssuedFromConsole;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.MenuSound_OnRadioButtonSelectionChange
struct UWKNDFoleySoundManager_MenuSound_OnRadioButtonSelectionChange_Params
{
	struct FVector                                     ComponentLocation;                                        // (Parm, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.MenuSound_OnConsoleButtonPress
struct UWKNDFoleySoundManager_MenuSound_OnConsoleButtonPress_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLocation;                                        // (Parm, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.MenuSound_OnConsoleBackButtonPress
struct UWKNDFoleySoundManager_MenuSound_OnConsoleBackButtonPress_Params
{
	struct FVector                                     ComponentLocation;                                        // (Parm, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.MenuSound_OnButtonPress
struct UWKNDFoleySoundManager_MenuSound_OnButtonPress_Params
{
	bool                                               bPressed;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ComponentLocation;                                        // (Parm, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.MenuSound_OnBackButtonPress
struct UWKNDFoleySoundManager_MenuSound_OnBackButtonPress_Params
{
	struct FVector                                     ComponentLocation;                                        // (Parm, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.GetParamsForFootStep
struct UWKNDFoleySoundManager_GetParamsForFootStep_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EQueryResult                                       OutResult;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.GetLastButtonPressLocation
struct UWKNDFoleySoundManager_GetLastButtonPressLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.DoFootStepSkelMesh
struct UWKNDFoleySoundManager_DoFootStepSkelMesh_Params
{
	class USkeletalMeshComponent*                      Skelmesh;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               Footstep;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EMovementContext                                   MovementContext;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.DoFootStepPlayer
struct UWKNDFoleySoundManager_DoFootStepPlayer_Params
{
	class AWKNDPlayerPawn*                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseNavPos;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NavPosition;                                              // (Parm, IsPlainOldData)
	class UAkAudioEvent*                               Footstep;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.DebugMessage
struct UWKNDFoleySoundManager_DebugMessage_Params
{
	EWKNDHands                                         Handedness;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
	float                                              HeightOffset;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.CallMeshPartCollision
struct UWKNDFoleySoundManager_CallMeshPartCollision_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Impulse;                                                  // (Parm, IsPlainOldData)
	struct FHitResult                                  HitResult;                                                // (Parm, IsPlainOldData)
	class UAkAudioEvent*                               ImpactSound;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDFoleySoundManager.AudioDebugToLog
struct UWKNDFoleySoundManager_AudioDebugToLog_Params
{
	struct FString                                     Prefix;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function WKND.WKNDGameInstance.ToggleVRMode
struct UWKNDGameInstance_ToggleVRMode_Params
{
	EVRModeEnum                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.ToggleVisualCombatAssist
struct UWKNDGameInstance_ToggleVisualCombatAssist_Params
{
	EVisualCombatAssistEnum                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.ToggleSubtitles
struct UWKNDGameInstance_ToggleSubtitles_Params
{
	ESubtitlesEnum                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.Toggle360CombatEnabled
struct UWKNDGameInstance_Toggle360CombatEnabled_Params
{
	E360CombatEnum                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetVRMode
struct UWKNDGameInstance_SetVRMode_Params
{
	EVRModeEnum                                        VRModeEnum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetVolumeSetting
struct UWKNDGameInstance_SetVolumeSetting_Params
{
	ESoundChannel                                      Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetVisualCombatAssist
struct UWKNDGameInstance_SetVisualCombatAssist_Params
{
	EVisualCombatAssistEnum                            VCAEnum;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetVignetteDuringMotion
struct UWKNDGameInstance_SetVignetteDuringMotion_Params
{
	bool                                               vignette;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetupOculusLoadingScreen
struct UWKNDGameInstance_SetupOculusLoadingScreen_Params
{
};

// Function WKND.WKNDGameInstance.SetTeleportTurn
struct UWKNDGameInstance_SetTeleportTurn_Params
{
	bool                                               teleturn;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetSwapThrottleHands
struct UWKNDGameInstance_SetSwapThrottleHands_Params
{
	bool                                               Swap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetSubtitles
struct UWKNDGameInstance_SetSubtitles_Params
{
	ESubtitlesEnum                                     SubtitlesEnum;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetSnapTurnsInstant
struct UWKNDGameInstance_SetSnapTurnsInstant_Params
{
	EVRInstantSnapTurns                                Snap;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetSlowFalling
struct UWKNDGameInstance_SetSlowFalling_Params
{
	bool                                               bSetSlowFalling;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetSkipClimb
struct UWKNDGameInstance_SetSkipClimb_Params
{
	bool                                               bSetSkipClimb;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetSafeClimbing
struct UWKNDGameInstance_SetSafeClimbing_Params
{
	bool                                               bSetSafeClimbing;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetRequestedDojoWave
struct UWKNDGameInstance_SetRequestedDojoWave_Params
{
	struct FName                                       RequestedWave;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetQuestShaderPrecompileComplete
struct UWKNDGameInstance_SetQuestShaderPrecompileComplete_Params
{
};

// Function WKND.WKNDGameInstance.SetPlayerTargetPointOverride
struct UWKNDGameInstance_SetPlayerTargetPointOverride_Params
{
};

// Function WKND.WKNDGameInstance.SetLocomotionMode
struct UWKNDGameInstance_SetLocomotionMode_Params
{
	ELocomotionModeEnum                                LocomotionModeEnum;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetLanguageIndex
struct UWKNDGameInstance_SetLanguageIndex_Params
{
	unsigned char                                      LanguageIndex;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetHasSeenComfortPrompt
struct UWKNDGameInstance_SetHasSeenComfortPrompt_Params
{
	bool                                               bSetSeenState;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetGraphicsSetting
struct UWKNDGameInstance_SetGraphicsSetting_Params
{
	EGraphicsSetting                                   SelectedGraphicsSetting;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetFadeOutDuringAcceleration
struct UWKNDGameInstance_SetFadeOutDuringAcceleration_Params
{
	bool                                               fade;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetDamageIndicatorSetting
struct UWKNDGameInstance_SetDamageIndicatorSetting_Params
{
	EComfortDamageIndicatorEnum                        ComfortDamageIndicatorEnum;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetComfortLevel
struct UWKNDGameInstance_SetComfortLevel_Params
{
	EComfortLevelEnum                                  ComfortLevelEnum;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.SetCameraShakes
struct UWKNDGameInstance_SetCameraShakes_Params
{
	EVRCameraShakeEnum                                 CameraShakeOption;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.Set360CombatEnabled
struct UWKNDGameInstance_Set360CombatEnabled_Params
{
	E360CombatEnum                                     C360Enum;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.ResetProgressionCheckpointAndSave
struct UWKNDGameInstance_ResetProgressionCheckpointAndSave_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.RegisterUnlockedExtendedDojoWaveAndSave
struct UWKNDGameInstance_RegisterUnlockedExtendedDojoWaveAndSave_Params
{
	struct FName                                       WaveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.RegisterUnlockedExtendedDojoWave
struct UWKNDGameInstance_RegisterUnlockedExtendedDojoWave_Params
{
	struct FName                                       WaveName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.RegisterProgressionCheckpointAndSave
struct UWKNDGameInstance_RegisterProgressionCheckpointAndSave_Params
{
	class UWKNDProgressionCheckpointData*              CheckpointObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.RegisterProgressionCheckpoint
struct UWKNDGameInstance_RegisterProgressionCheckpoint_Params
{
	class UWKNDProgressionCheckpointData*              CheckpointObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.RegisterCheckpointTeleporter
struct UWKNDGameInstance_RegisterCheckpointTeleporter_Params
{
	class AWKNDCheckpointTeleporter*                   NewCheckpointTeleporter;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.LowLevelLog
struct UWKNDGameInstance_LowLevelLog_Params
{
	struct FString                                     TextToLog;                                                // (Parm, ZeroConstructor)
};

// Function WKND.WKNDGameInstance.LogPerformanceLabel
struct UWKNDGameInstance_LogPerformanceLabel_Params
{
	struct FString                                     Label;                                                    // (Parm, ZeroConstructor)
	bool                                               bIsSceneDivider;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.LoadNewLevel
struct UWKNDGameInstance_LoadNewLevel_Params
{
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShowLoadingScreen;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.IsQuestShaderPrecompileRequired
struct UWKNDGameInstance_IsQuestShaderPrecompileRequired_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.IsCheckpointUnlocked
struct UWKNDGameInstance_IsCheckpointUnlocked_Params
{
	class UWKNDProgressionCheckpointData*              CheckpointObject;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UWKNDCheckpointProgressionOrder*             UsedOrderData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.HasSeenComfortPrompt
struct UWKNDGameInstance_HasSeenComfortPrompt_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetWorldsManager
struct UWKNDGameInstance_GetWorldsManager_Params
{
	class UWKNDWorldsManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetVRMode
struct UWKNDGameInstance_GetVRMode_Params
{
	EVRModeEnum                                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetVolumeSetting
struct UWKNDGameInstance_GetVolumeSetting_Params
{
	ESoundChannel                                      Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Volume;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetVisualCombatAssist
struct UWKNDGameInstance_GetVisualCombatAssist_Params
{
	EVisualCombatAssistEnum                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetVignetteDuringMotion
struct UWKNDGameInstance_GetVignetteDuringMotion_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetTeleportTurn
struct UWKNDGameInstance_GetTeleportTurn_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetSwapThrottleHands
struct UWKNDGameInstance_GetSwapThrottleHands_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetSubtitles
struct UWKNDGameInstance_GetSubtitles_Params
{
	ESubtitlesEnum                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetSnapTurnsInstant
struct UWKNDGameInstance_GetSnapTurnsInstant_Params
{
	EVRInstantSnapTurns                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetSlowFalling
struct UWKNDGameInstance_GetSlowFalling_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetSkipClimb
struct UWKNDGameInstance_GetSkipClimb_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetSaveGame
struct UWKNDGameInstance_GetSaveGame_Params
{
	class UWKNDSaveGame*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetSavedProgressionCheckpoint
struct UWKNDGameInstance_GetSavedProgressionCheckpoint_Params
{
	class UWKNDProgressionCheckpointData*              CheckpointObject;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetSafeClimbing
struct UWKNDGameInstance_GetSafeClimbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetRequestedDojoWave
struct UWKNDGameInstance_GetRequestedDojoWave_Params
{
	bool                                               bIsWaveRequested;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RequestedWave;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetPlayerTargetPointOverride
struct UWKNDGameInstance_GetPlayerTargetPointOverride_Params
{
};

// Function WKND.WKNDGameInstance.GetLocomotionMode
struct UWKNDGameInstance_GetLocomotionMode_Params
{
	ELocomotionModeEnum                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetLastUnlockedExtendedDojoWave
struct UWKNDGameInstance_GetLastUnlockedExtendedDojoWave_Params
{
	struct FName                                       WaveName;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetLanguageIndex
struct UWKNDGameInstance_GetLanguageIndex_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetHighestUnlockedProgressionCheckpoint
struct UWKNDGameInstance_GetHighestUnlockedProgressionCheckpoint_Params
{
	class UWKNDProgressionCheckpointData*              CheckpointObject;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetGraphicsSetting
struct UWKNDGameInstance_GetGraphicsSetting_Params
{
	EGraphicsSetting                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetFadeOutDuringAcceleration
struct UWKNDGameInstance_GetFadeOutDuringAcceleration_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetDamageIndicatorSetting
struct UWKNDGameInstance_GetDamageIndicatorSetting_Params
{
	EComfortDamageIndicatorEnum                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetComfortLevel
struct UWKNDGameInstance_GetComfortLevel_Params
{
	EComfortLevelEnum                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetCheckpointTeleporter
struct UWKNDGameInstance_GetCheckpointTeleporter_Params
{
	class AWKNDCheckpointTeleporter*                   RegisteredCheckpointTeleporter;                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.GetCameraShakes
struct UWKNDGameInstance_GetCameraShakes_Params
{
	EVRCameraShakeEnum                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.Get360CombatEnabled
struct UWKNDGameInstance_Get360CombatEnabled_Params
{
	E360CombatEnum                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.CompareProgressionCheckpoint
struct UWKNDGameInstance_CompareProgressionCheckpoint_Params
{
	class UWKNDProgressionCheckpointData*              CheckpointObjectA;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UWKNDProgressionCheckpointData*              CheckpointObjectB;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UWKNDCheckpointProgressionOrder*             UsedOrderData;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.ClearRequestedDojoWave
struct UWKNDGameInstance_ClearRequestedDojoWave_Params
{
};

// Function WKND.WKNDGameInstance.ClearOculusLoadingScreen
struct UWKNDGameInstance_ClearOculusLoadingScreen_Params
{
};

// Function WKND.WKNDGameInstance.AttemptSaveGameSettings
struct UWKNDGameInstance_AttemptSaveGameSettings_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.AttemptSaveGame
struct UWKNDGameInstance_AttemptSaveGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameInstance.AttemptLoadGame
struct UWKNDGameInstance_AttemptLoadGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameMode.TogglePause
struct AWKNDGameMode_TogglePause_Params
{
};

// Function WKND.WKNDGameMode.ToggleHaptics
struct AWKNDGameMode_ToggleHaptics_Params
{
};

// Function WKND.WKNDGameMode.IsGameWorldReady
struct AWKNDGameMode_IsGameWorldReady_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameMode.IsAnAnimatingPose
struct AWKNDGameMode_IsAnAnimatingPose_Params
{
	struct FAnimTypeDropdown                           PoseName;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameMode.InitDialogueManagerWithSpeakingActors
struct AWKNDGameMode_InitDialogueManagerWithSpeakingActors_Params
{
	class AWKNDDialogueManager*                        DM;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameMode.GetSaberManager
struct AWKNDGameMode_GetSaberManager_Params
{
	class ARPOCSaberManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameMode.GetPauseManager
struct AWKNDGameMode_GetPauseManager_Params
{
	class AWKNDPauseManager*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameMode.GetHapticsManager
struct AWKNDGameMode_GetHapticsManager_Params
{
	class UNTHapticManagerComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDGameMode.GetFoleySoundManager
struct AWKNDGameMode_GetFoleySoundManager_Params
{
	class UWKNDFoleySoundManager*                      ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDGameMode.GetDialogueManager
struct AWKNDGameMode_GetDialogueManager_Params
{
	class AWKNDDialogueManager*                        ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameMode.GetCoordinator
struct AWKNDGameMode_GetCoordinator_Params
{
	class ARICEAICoordinator*                          ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGameMode.EnableConsoleMenu
struct AWKNDGameMode_EnableConsoleMenu_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGameMode.DestroyPauseMenu
struct AWKNDGameMode_DestroyPauseMenu_Params
{
};

// Function WKND.WKNDGrabbableComponent.SetPrimitiveComponent
struct UWKNDGrabbableComponent_SetPrimitiveComponent_Params
{
	class UPrimitiveComponent*                         Prim;                                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.SetLooseCarry
struct UWKNDGrabbableComponent_SetLooseCarry_Params
{
	bool                                               shouldBeLoose;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.SetGrabbablePrimitive
struct UWKNDGrabbableComponent_SetGrabbablePrimitive_Params
{
	class UPrimitiveComponent*                         inGrabbablePrimitive;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.SetDroppable
struct UWKNDGrabbableComponent_SetDroppable_Params
{
	bool                                               CanDrop;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.SetDisabled
struct UWKNDGrabbableComponent_SetDisabled_Params
{
	bool                                               Disabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DisabledBy;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.SetCurrentHandPosition
struct UWKNDGrabbableComponent_SetCurrentHandPosition_Params
{
	EHandPosition                                      nextHandPosition;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.SetActorDroppable
struct UWKNDGrabbableComponent_SetActorDroppable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanDrop;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.RemoveGrabLocators
struct UWKNDGrabbableComponent_RemoveGrabLocators_Params
{
	TArray<class URPOCGrabLocatorComponent*>           toRemove;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function WKND.WKNDGrabbableComponent.Release
struct UWKNDGrabbableComponent_Release_Params
{
	bool                                               preventImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.RegisterGrabLocator
struct UWKNDGrabbableComponent_RegisterGrabLocator_Params
{
	class URPOCGrabLocatorComponent*                   GrabLocator;                                              // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.OnOwnerCollision
struct UWKNDGrabbableComponent_OnOwnerCollision_Params
{
	class AActor*                                      SelfActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.IsLooseCarry
struct UWKNDGrabbableComponent_IsLooseCarry_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.IsHeld
struct UWKNDGrabbableComponent_IsHeld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.IsDroppable
struct UWKNDGrabbableComponent_IsDroppable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.IsActorDroppable
struct UWKNDGrabbableComponent_IsActorDroppable_Params
{
	class AActor*                                      Actor;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.InitReposition
struct UWKNDGrabbableComponent_InitReposition_Params
{
	struct FTransform                                  HandTransform;                                            // (Parm, IsPlainOldData)
	float                                              RepositioningTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepRelativeRotation;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.Grab
struct UWKNDGrabbableComponent_Grab_Params
{
	class UWKNDGrabberComponent*                       grabber;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FPickupData                                 PickupData;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class URPOCGrabLocatorComponent*                   Locator;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.GetRegressedVelocity
struct UWKNDGrabbableComponent_GetRegressedVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.GetRegressedAngularVelocity
struct UWKNDGrabbableComponent_GetRegressedAngularVelocity_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.GetPrimitiveComponent
struct UWKNDGrabbableComponent_GetPrimitiveComponent_Params
{
	class URPOCGrabLocatorComponent*                   Locator;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.GetLatestVelocityFromBuffer
struct UWKNDGrabbableComponent_GetLatestVelocityFromBuffer_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.GetHoldingActor
struct UWKNDGrabbableComponent_GetHoldingActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.GetGrabLocatorArray
struct UWKNDGrabbableComponent_GetGrabLocatorArray_Params
{
	TArray<class URPOCGrabLocatorComponent*>           ReturnValue;                                              // (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function WKND.WKNDGrabbableComponent.GetGrabLocator
struct UWKNDGrabbableComponent_GetGrabLocator_Params
{
	struct FVector                                     GrabShapeLocation;                                        // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EGrabHand                                          Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Main;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RangedOnly;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreMaxRange;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.GetGrabbedLocator
struct UWKNDGrabbableComponent_GetGrabbedLocator_Params
{
	class URPOCGrabLocatorComponent*                   ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.GetAnimType
struct UWKNDGrabbableComponent_GetAnimType_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.EnablePhysicsSimulation
struct UWKNDGrabbableComponent_EnablePhysicsSimulation_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.CanBePickedUp
struct UWKNDGrabbableComponent_CanBePickedUp_Params
{
	struct FVector                                     GrabSphereLoc;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     outGrabDirection;                                         // (Parm, OutParm, IsPlainOldData)
	float                                              outDistance;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.ApplyImpulseOnRelease
struct UWKNDGrabbableComponent_ApplyImpulseOnRelease_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGrabbableComponent.AddGrabLocators
struct UWKNDGrabbableComponent_AddGrabLocators_Params
{
	TArray<class URPOCGrabLocatorComponent*>           toAdd;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WKND.WKNDGrabberComponentWithPhysics.SetPhysicsHandleParams
struct UWKNDGrabberComponentWithPhysics_SetPhysicsHandleParams_Params
{
	struct FNTPhysicsHandleParams                      Settings;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.WKNDGrabberComponentWithPhysics.Drop
struct UWKNDGrabberComponentWithPhysics_Drop_Params
{
	bool                                               GoIntoRecoveryState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               preventImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDGunnerComponent.ShootAtActor
struct UWKNDGunnerComponent_ShootAtActor_Params
{
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EShotSpecifier>                        specifier;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EActorSide>                            side;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGunnerComponent.EquipWeapon
struct UWKNDGunnerComponent_EquipWeapon_Params
{
	class AActor*                                      weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDGunnerComponent.ClearWeapon
struct UWKNDGunnerComponent_ClearWeapon_Params
{
	class AActor*                                      weapon;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDHapticFeedbackComponent.SetOuterBounds
struct UWKNDHapticFeedbackComponent_SetOuterBounds_Params
{
	class UPrimitiveComponent*                         CollisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDHapticFeedbackComponent.SetInnerBounds
struct UWKNDHapticFeedbackComponent_SetInnerBounds_Params
{
	class UPrimitiveComponent*                         CollisionComponent;                                       // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDHapticFeedbackComponent.OnOwnerEndOverlap
struct UWKNDHapticFeedbackComponent_OnOwnerEndOverlap_Params
{
	class AActor*                                      ThisActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDHapticFeedbackComponent.OnOuterBoundsBeginOverlap
struct UWKNDHapticFeedbackComponent_OnOuterBoundsBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.WKNDHapticFeedbackComponent.OnInnerBoundsEndOverlap
struct UWKNDHapticFeedbackComponent_OnInnerBoundsEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDHapticFeedbackComponent.OnInnerBoundsBeginOverlap
struct UWKNDHapticFeedbackComponent_OnInnerBoundsBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.WKNDHealthComponent.TakeDamage
struct UWKNDHealthComponent_TakeDamage_Params
{
	struct FWKNDDamageInfo                             Info;                                                     // (Parm, OutParm, ReferenceParm)
};

// Function WKND.WKNDHealthComponent.SetInitialHealth
struct UWKNDHealthComponent_SetInitialHealth_Params
{
	int                                                NewInitialHealth;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bRestoreCurrentHealth;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDHealthComponent.RestoreHealth
struct UWKNDHealthComponent_RestoreHealth_Params
{
};

// Function WKND.WKNDHealthComponent.RequestInvulnerableStateChangeWithReason
struct UWKNDHealthComponent_RequestInvulnerableStateChangeWithReason_Params
{
	bool                                               bInvulnerable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // (Parm, ZeroConstructor)
};

// Function WKND.WKNDHealthComponent.RequestInvulnerableStateChange
struct UWKNDHealthComponent_RequestInvulnerableStateChange_Params
{
	bool                                               bInvulnerable;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDHealthComponent.IsInvulnerable
struct UWKNDHealthComponent_IsInvulnerable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDHealthComponent.IsDead
struct UWKNDHealthComponent_IsDead_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDHealthComponent.IsAlive
struct UWKNDHealthComponent_IsAlive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDHealthComponent.GetHealthLevel
struct UWKNDHealthComponent_GetHealthLevel_Params
{
	int                                                MaxHealthLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                RemainingHealth;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDHealthComponent.GetCustomHealthLevel
struct UWKNDHealthComponent_GetCustomHealthLevel_Params
{
	int                                                MaxHealthLevel;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDHealthComponent.GetCurrentHealthLevel
struct UWKNDHealthComponent_GetCurrentHealthLevel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDHealthComponent.GetCurrentHealth
struct UWKNDHealthComponent_GetCurrentHealth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDHitResponseInterface.ReceiveMynockHit
struct UWKNDHitResponseInterface_ReceiveMynockHit_Params
{
	class AActor*                                      StrikingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDHitResponseInterface.ReceiveBlasterHit
struct UWKNDHitResponseInterface_ReceiveBlasterHit_Params
{
	class AActor*                                      StrikingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDHitResponseInterface.ReceiveBladeHit
struct UWKNDHitResponseInterface_ReceiveBladeHit_Params
{
	class AActor*                                      StrikingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDHitResponseInterface.DeflectProjectile
struct UWKNDHitResponseInterface_DeflectProjectile_Params
{
	class AActor*                                      Projectile;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bParried;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDHolsterableComponent.OnInteraction
struct UWKNDHolsterableComponent_OnInteraction_Params
{
	EXLABInteractionEventType                          InteractionEventType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDHolsterableComponent.GetHolsterSocketName
struct UWKNDHolsterableComponent_GetHolsterSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDHolsterableExtension.OnAttachedToToolbelt
struct UWKNDHolsterableExtension_OnAttachedToToolbelt_Params
{
};

// Function WKND.WKNDHolsterableExtension.GetHolsterSocketName
struct UWKNDHolsterableExtension_GetHolsterSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDHolsterComponent.Grab
struct UWKNDHolsterComponent_Grab_Params
{
	class AActor*                                      actorToGrab;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   Locator;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDHolsterComponent.Drop
struct UWKNDHolsterComponent_Drop_Params
{
	bool                                               GoIntoRecoveryState;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               preventImpulse;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.WidgetRelease
struct AWKNDMotionController_WidgetRelease_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.WidgetInteract
struct AWKNDMotionController_WidgetInteract_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.UpdateTouchData
struct AWKNDMotionController_UpdateTouchData_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.UpdateHandAwarenessAnims
struct AWKNDMotionController_UpdateHandAwarenessAnims_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.UpdateClimber
struct AWKNDMotionController_UpdateClimber_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ToggleTeleportOnClimb
struct AWKNDMotionController_ToggleTeleportOnClimb_Params
{
};

// Function WKND.WKNDMotionController.ToggleSnapTurnLocks
struct AWKNDMotionController_ToggleSnapTurnLocks_Params
{
};

// Function WKND.WKNDMotionController.ToggleDebugNavMagnets
struct AWKNDMotionController_ToggleDebugNavMagnets_Params
{
};

// Function WKND.WKNDMotionController.StopDisarmMontage
struct AWKNDMotionController_StopDisarmMontage_Params
{
};

// Function WKND.WKNDMotionController.StartWeaponHitLag
struct AWKNDMotionController_StartWeaponHitLag_Params
{
	float                                              startDelay;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              lagDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              lagStrength;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.StartClimbShock
struct AWKNDMotionController_StartClimbShock_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.Squeeze
struct AWKNDMotionController_Squeeze_Params
{
	float                                              RawPinchAmount;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              RawGrabAmount;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ShowTeleportDestination
struct AWKNDMotionController_ShowTeleportDestination_Params
{
	bool                                               alsoShowArcEndpoint;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ShouldDisplayNavMagnetVisualization
struct AWKNDMotionController_ShouldDisplayNavMagnetVisualization_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ShouldDisplayHandAnimationInfo
struct AWKNDMotionController_ShouldDisplayHandAnimationInfo_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetTriggerAxisValue
struct AWKNDMotionController_SetTriggerAxisValue_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetTeleportDestination
struct AWKNDMotionController_SetTeleportDestination_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetTeleportArcColour
struct AWKNDMotionController_SetTeleportArcColour_Params
{
	ETeleportUIState                                   teleportUIState;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetSnapTurnEnabled
struct AWKNDMotionController_SetSnapTurnEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetPlayerHeight
struct AWKNDMotionController_SetPlayerHeight_Params
{
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetPinHand
struct AWKNDMotionController_SetPinHand_Params
{
	bool                                               Val;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetOtherController
struct AWKNDMotionController_SetOtherController_Params
{
	class AWKNDMotionController*                       Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetIsPointing
struct AWKNDMotionController_SetIsPointing_Params
{
	bool                                               bPoint;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetGripState
struct AWKNDMotionController_SetGripState_Params
{
	EGripState                                         NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetGrabRadius
struct AWKNDMotionController_SetGrabRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetEnvironmentCollisionMode
struct AWKNDMotionController_SetEnvironmentCollisionMode_Params
{
	EHandEnvironmentInteractionMode                    InteractionMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetEnvironmentCollisionEnabled
struct AWKNDMotionController_SetEnvironmentCollisionEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetEnableVRWidgetInteraction
struct AWKNDMotionController_SetEnableVRWidgetInteraction_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SetControllerHand
struct AWKNDMotionController_SetControllerHand_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.SendUMGClick
struct AWKNDMotionController_SendUMGClick_Params
{
};

// Function WKND.WKNDMotionController.RequestHandPose
struct AWKNDMotionController_RequestHandPose_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNTAnimVarStruct                            animData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               lockReadyPosers;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ReleaseUMGClick
struct AWKNDMotionController_ReleaseUMGClick_Params
{
};

// Function WKND.WKNDMotionController.ReleaseClimbHold
struct AWKNDMotionController_ReleaseClimbHold_Params
{
	bool                                               Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WithFallBehaviour;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ReleaseActor_Internal
struct AWKNDMotionController_ReleaseActor_Internal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ReceiveOnNotHeldInBothHands
struct AWKNDMotionController_ReceiveOnNotHeldInBothHands_Params
{
};

// Function WKND.WKNDMotionController.ReceiveOnNewGripState
struct AWKNDMotionController_ReceiveOnNewGripState_Params
{
};

// Function WKND.WKNDMotionController.ReceiveOnIndexFingerEndOverlap
struct AWKNDMotionController_ReceiveOnIndexFingerEndOverlap_Params
{
};

// Function WKND.WKNDMotionController.ReceiveOnIndexFingerBeginOverlap
struct AWKNDMotionController_ReceiveOnIndexFingerBeginOverlap_Params
{
};

// Function WKND.WKNDMotionController.ReceiveOnHitLagStarted
struct AWKNDMotionController_ReceiveOnHitLagStarted_Params
{
	float                                              lagDuration;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              lagStrength;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ReceiveOnHeldInBothHands
struct AWKNDMotionController_ReceiveOnHeldInBothHands_Params
{
};

// Function WKND.WKNDMotionController.ReceiveOnDropSaber
struct AWKNDMotionController_ReceiveOnDropSaber_Params
{
};

// Function WKND.WKNDMotionController.ReceiveManuallyUpdateHandPosition
struct AWKNDMotionController_ReceiveManuallyUpdateHandPosition_Params
{
};

// Function WKND.WKNDMotionController.ReceiveLockPosers
struct AWKNDMotionController_ReceiveLockPosers_Params
{
	bool                                               lock;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ReceiveInitializeMotionController
struct AWKNDMotionController_ReceiveInitializeMotionController_Params
{
};

// Function WKND.WKNDMotionController.ReceiveDeactivateTeleporter
struct AWKNDMotionController_ReceiveDeactivateTeleporter_Params
{
};

// Function WKND.WKNDMotionController.ReceiveActivateTeleporter
struct AWKNDMotionController_ReceiveActivateTeleporter_Params
{
};

// Function WKND.WKNDMotionController.ReAttachWidgetIntearact
struct AWKNDMotionController_ReAttachWidgetIntearact_Params
{
};

// Function WKND.WKNDMotionController.RangedGrabSuccess
struct AWKNDMotionController_RangedGrabSuccess_Params
{
	class AActor*                                      GrabbedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              GrabbedRange;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.OnSqueezeReleased
struct AWKNDMotionController_OnSqueezeReleased_Params
{
};

// Function WKND.WKNDMotionController.OnSqueezeActivated
struct AWKNDMotionController_OnSqueezeActivated_Params
{
};

// Function WKND.WKNDMotionController.OnSecondHandRelease
struct AWKNDMotionController_OnSecondHandRelease_Params
{
};

// Function WKND.WKNDMotionController.OnSecondHandGrab
struct AWKNDMotionController_OnSecondHandGrab_Params
{
};

// Function WKND.WKNDMotionController.OnReverseGrip
struct AWKNDMotionController_OnReverseGrip_Params
{
};

// Function WKND.WKNDMotionController.OnIndexFingerEndOverlap
struct AWKNDMotionController_OnIndexFingerEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.OnIndexFingerBeginOverlap
struct AWKNDMotionController_OnIndexFingerBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.OnHoverFingerEndOverlap
struct AWKNDMotionController_OnHoverFingerEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.OnHoverFingerBeginOverlap
struct AWKNDMotionController_OnHoverFingerBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.OnGripShift
struct AWKNDMotionController_OnGripShift_Params
{
};

// Function WKND.WKNDMotionController.OnForeGrip
struct AWKNDMotionController_OnForeGrip_Params
{
};

// Function WKND.WKNDMotionController.OnDenyVRWidgetInput
struct AWKNDMotionController_OnDenyVRWidgetInput_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.OnAllowVRWidgetInput
struct AWKNDMotionController_OnAllowVRWidgetInput_Params
{
	struct FName                                       TokenName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.OnActorReleased
struct AWKNDMotionController_OnActorReleased_Params
{
	class AActor*                                      droppedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.IsGrabbed
struct AWKNDMotionController_IsGrabbed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.HideTeleportDestination
struct AWKNDMotionController_HideTeleportDestination_Params
{
};

// Function WKND.WKNDMotionController.GrabActor_Internal
struct AWKNDMotionController_GrabActor_Internal_Params
{
	class AActor*                                      NearestActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   Locator;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               forceNotReversed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GrabbingFromOtherHand;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGrabResult>                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GrabActor
struct AWKNDMotionController_GrabActor_Params
{
	class AActor*                                      actorToGrab;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   Locator;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetWeaponToWrist
struct AWKNDMotionController_GetWeaponToWrist_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetWeaponSocketTransform
struct AWKNDMotionController_GetWeaponSocketTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetThumbTouch
struct AWKNDMotionController_GetThumbTouch_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetSnapEnabled
struct AWKNDMotionController_GetSnapEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetPoseAwareness
struct AWKNDMotionController_GetPoseAwareness_Params
{
	struct FPoseAlphaData                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function WKND.WKNDMotionController.GetNearestRecenteringPoint
struct AWKNDMotionController_GetNearestRecenteringPoint_Params
{
	struct FVector                                     PlayerLocation;                                           // (Parm, IsPlainOldData)
	struct FRotator                                    PlayerRotation;                                           // (Parm, IsPlainOldData)
	struct FTransform                                  outTransform;                                             // (Parm, OutParm, IsPlainOldData)
	int                                                outIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               outFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetMotionGripTransform
struct AWKNDMotionController_GetMotionGripTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetHandSocket
struct AWKNDMotionController_GetHandSocket_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetGrabSocket
struct AWKNDMotionController_GetGrabSocket_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetGrabbableAtRange
struct AWKNDMotionController_GetGrabbableAtRange_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetDotToTarget
struct AWKNDMotionController_GetDotToTarget_Params
{
	struct FVector                                     grabDirection;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetBoneName
struct AWKNDMotionController_GetBoneName_Params
{
	EXLABHandlerBoneType                               BoneType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.GetActorNearHand
struct AWKNDMotionController_GetActorNearHand_Params
{
	bool                                               bCheckForGrab;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Debug;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.FinishedGripShift
struct AWKNDMotionController_FinishedGripShift_Params
{
};

// Function WKND.WKNDMotionController.EnableFrontendInteraction
struct AWKNDMotionController_EnableFrontendInteraction_Params
{
};

// Function WKND.WKNDMotionController.DoHandRepositioning
struct AWKNDMotionController_DoHandRepositioning_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.DisableFrontendInteraction
struct AWKNDMotionController_DisableFrontendInteraction_Params
{
};

// Function WKND.WKNDMotionController.DetachWidgetIntearact
struct AWKNDMotionController_DetachWidgetIntearact_Params
{
};

// Function WKND.WKNDMotionController.DeactivateTeleporter
struct AWKNDMotionController_DeactivateTeleporter_Params
{
};

// Function WKND.WKNDMotionController.CheckForReverseGrip
struct AWKNDMotionController_CheckForReverseGrip_Params
{
	struct FName                                       SocketName;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   GrabComponent;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               forceNotReversed;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.CheckForceUseStatus
struct AWKNDMotionController_CheckForceUseStatus_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ChannelForceOnActorStart
struct AWKNDMotionController_ChannelForceOnActorStart_Params
{
	class AActor*                                      GrabbedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ChannelForceOnActorComplete
struct AWKNDMotionController_ChannelForceOnActorComplete_Params
{
	class AActor*                                      GrabbedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.ChannelForceOnActorBroken
struct AWKNDMotionController_ChannelForceOnActorBroken_Params
{
	class AActor*                                      GrabbedItem;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMotionController.AttachHandLocatorToHeldObject
struct AWKNDMotionController_AttachHandLocatorToHeldObject_Params
{
	TScriptInterface<class URPOCPickupActorInterface>  PickupInterface;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   ForSecondaryHold;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               JustHandLocator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDMotionController.AttachHandLocatorToController
struct AWKNDMotionController_AttachHandLocatorToController_Params
{
};

// Function WKND.WKNDMotionController.ActivateTeleporter
struct AWKNDMotionController_ActivateTeleporter_Params
{
};

// Function WKND.WKNDMynock.StartAttacking
struct AWKNDMynock_StartAttacking_Params
{
	class ATargetPoint*                                Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDMynock.OnReturnedToLoop
struct AWKNDMynock_OnReturnedToLoop_Params
{
};

// Function WKND.WKNDMynock.OnAttackStarted
struct AWKNDMynock_OnAttackStarted_Params
{
};

// Function WKND.WKNDMynock.OnAttackFinished
struct AWKNDMynock_OnAttackFinished_Params
{
};

// Function WKND.WKNDMynock.FlyToLoopSpline
struct AWKNDMynock_FlyToLoopSpline_Params
{
	class USplineComponent*                            spline;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDPauseContainer.TeleportToContainer
struct AWKNDPauseContainer_TeleportToContainer_Params
{
};

// Function WKND.WKNDPauseContainer.ReturnPlayer
struct AWKNDPauseContainer_ReturnPlayer_Params
{
};

// Function WKND.WKNDPauseManager.UnPauseGame
struct AWKNDPauseManager_UnPauseGame_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPauseManager.PauseGame
struct AWKNDPauseManager_PauseGame_Params
{
	bool                                               bShowPauseMenu;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForcePause;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPauseManager.IssueBackToMainMenuCall
struct AWKNDPauseManager_IssueBackToMainMenuCall_Params
{
};

// Function WKND.WKNDPauseManager.IsGamePaused
struct AWKNDPauseManager_IsGamePaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPerformanceCapturer.StopPerformanceCapture
struct AWKNDPerformanceCapturer_StopPerformanceCapture_Params
{
};

// Function WKND.WKNDPerformanceCapturer.StartPerformanceCapture
struct AWKNDPerformanceCapturer_StartPerformanceCapture_Params
{
};

// Function WKND.WKNDPerformanceCapturer.PerformanceCaptureIsRunning
struct AWKNDPerformanceCapturer_PerformanceCaptureIsRunning_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerCameraManager.PlayCameraShake
struct AWKNDPlayerCameraManager_PlayCameraShake_Params
{
	class UClass*                                      ShakeClass;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    UserPlaySpaceRot;                                         // (Parm, IsPlainOldData)
	class UCameraShake*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerCameraManager.EnableCameraShake
struct AWKNDPlayerCameraManager_EnableCameraShake_Params
{
};

// Function WKND.WKNDPlayerCameraManager.DisableCameraShake
struct AWKNDPlayerCameraManager_DisableCameraShake_Params
{
};

// Function WKND.WKNDPlayerController.ProjectWorldLocationToScreenNormalised
struct AWKNDPlayerController_ProjectWorldLocationToScreenNormalised_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	struct FVector2D                                   ScreenLocationNormalised;                                 // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerController.IsWorldLocationOnScreen
struct AWKNDPlayerController_IsWorldLocationOnScreen_Params
{
	struct FVector                                     WorldLocation;                                            // (Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerController.GetHandInputData
struct AWKNDPlayerController_GetHandInputData_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHandInputData                              ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.WasRecentlyHit
struct AWKNDPlayerPawn_WasRecentlyHit_Params
{
	float                                              NumSeconds;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OutLocation;                                              // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     OutDirection;                                             // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.UsingOutOfBoundsTeleport
struct AWKNDPlayerPawn_UsingOutOfBoundsTeleport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.UsingHeightAdjust
struct AWKNDPlayerPawn_UsingHeightAdjust_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.UseOldTeleportStyle
struct AWKNDPlayerPawn_UseOldTeleportStyle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.UpdateClimbing
struct AWKNDPlayerPawn_UpdateClimbing_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               AllowMovement;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.UnlockCameraBlackout
struct AWKNDPlayerPawn_UnlockCameraBlackout_Params
{
};

// Function WKND.WKNDPlayerPawn.UnFreezeCameraLocomotion
struct AWKNDPlayerPawn_UnFreezeCameraLocomotion_Params
{
};

// Function WKND.WKNDPlayerPawn.UnDisableLocomotion
struct AWKNDPlayerPawn_UnDisableLocomotion_Params
{
	struct FName                                       locoReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.ToggleVRMode
struct AWKNDPlayerPawn_ToggleVRMode_Params
{
};

// Function WKND.WKNDPlayerPawn.TogglePause
struct AWKNDPlayerPawn_TogglePause_Params
{
};

// Function WKND.WKNDPlayerPawn.ToggleOverloadOnBurn
struct AWKNDPlayerPawn_ToggleOverloadOnBurn_Params
{
};

// Function WKND.WKNDPlayerPawn.StopAnimMontage
struct AWKNDPlayerPawn_StopAnimMontage_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SnapTurnFinished
struct AWKNDPlayerPawn_SnapTurnFinished_Params
{
};

// Function WKND.WKNDPlayerPawn.Snap
struct AWKNDPlayerPawn_Snap_Params
{
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetUseOutOfBoundsTeleport
struct AWKNDPlayerPawn_SetUseOutOfBoundsTeleport_Params
{
	bool                                               boundsTeleport;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetUseOldTeleport
struct AWKNDPlayerPawn_SetUseOldTeleport_Params
{
	bool                                               oldTeleport;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetUseHeightAdjust
struct AWKNDPlayerPawn_SetUseHeightAdjust_Params
{
	bool                                               heightAdjust;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetSnapTurnEnabled
struct AWKNDPlayerPawn_SetSnapTurnEnabled_Params
{
	bool                                               Enabled;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	EWKNDHands                                         hands;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetRecenterAnchor
struct AWKNDPlayerPawn_SetRecenterAnchor_Params
{
	class AActor*                                      Anchor;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetMovementContext
struct AWKNDPlayerPawn_SetMovementContext_Params
{
	EMovementContext                                   nextMovementContext;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetManualBlackoutDistances
struct AWKNDPlayerPawn_SetManualBlackoutDistances_Params
{
	float                                              StartDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CompleteDistance;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetEnvironmentCollisionMode
struct AWKNDPlayerPawn_SetEnvironmentCollisionMode_Params
{
	EHandEnvironmentInteractionMode                    InteractionMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetEnvironmentCollisionEnabled
struct AWKNDPlayerPawn_SetEnvironmentCollisionEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetDeflectionToleranceMultiplierActive
struct AWKNDPlayerPawn_SetDeflectionToleranceMultiplierActive_Params
{
	bool                                               newActive;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetDeflectionToleranceMultiplier
struct AWKNDPlayerPawn_SetDeflectionToleranceMultiplier_Params
{
	float                                              NewMultiplier;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetCameraConstraintDistances
struct AWKNDPlayerPawn_SetCameraConstraintDistances_Params
{
	float                                              StartDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.SetAllowHandBurns
struct AWKNDPlayerPawn_SetAllowHandBurns_Params
{
	bool                                               allow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.ResetVR
struct AWKNDPlayerPawn_ResetVR_Params
{
};

// Function WKND.WKNDPlayerPawn.ReleaseClimbHolds
struct AWKNDPlayerPawn_ReleaseClimbHolds_Params
{
	bool                                               WithFallBehaviour;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.RegisterDeflectionResult
struct AWKNDPlayerPawn_RegisterDeflectionResult_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.RecenterPlayerIfPossible
struct AWKNDPlayerPawn_RecenterPlayerIfPossible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.RecenterCameraDuringTurns
struct AWKNDPlayerPawn_RecenterCameraDuringTurns_Params
{
};

// Function WKND.WKNDPlayerPawn.ReceiveOnTeleport
struct AWKNDPlayerPawn_ReceiveOnTeleport_Params
{
	class AWKNDMotionController*                       MotionController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.ReceiveOnBurntHand
struct AWKNDPlayerPawn_ReceiveOnBurntHand_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FVector                                     Normal;                                                   // (Parm, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, IsPlainOldData)
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.PlayDisarmMontage
struct AWKNDPlayerPawn_PlayDisarmMontage_Params
{
	EDisarmType                                        DisarmedHand;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.OnEnemySaberStrike
struct AWKNDPlayerPawn_OnEnemySaberStrike_Params
{
	class ARPOCPickup_Lightsaber*                      AttackingSaber;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerWasStruckBeforeBlock;                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.LockCameraConstraint
struct AWKNDPlayerPawn_LockCameraConstraint_Params
{
	bool                                               lock;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnLocation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.LockCameraBlackout
struct AWKNDPlayerPawn_LockCameraBlackout_Params
{
	struct FVector                                     InitialImpact;                                            // (Parm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.LockAllPlayerItems
struct AWKNDPlayerPawn_LockAllPlayerItems_Params
{
	bool                                               lock;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.IsPlayerHoldingLightsaber
struct AWKNDPlayerPawn_IsPlayerHoldingLightsaber_Params
{
	bool                                               bIsHolding;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.IsPlayerHoldingHydrospanner
struct AWKNDPlayerPawn_IsPlayerHoldingHydrospanner_Params
{
	bool                                               bIsHolding;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.IsPlayerHoldingActor
struct AWKNDPlayerPawn_IsPlayerHoldingActor_Params
{
	class AActor*                                      ActorToCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHolding;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.IsNavMagnetCameraConstraintEnabled
struct AWKNDPlayerPawn_IsNavMagnetCameraConstraintEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.IsMotionControllerTracked
struct AWKNDPlayerPawn_IsMotionControllerTracked_Params
{
	EControllerHand                                    ControllerType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.IsMandatedPointBlue
struct AWKNDPlayerPawn_IsMandatedPointBlue_Params
{
	int                                                pointIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.IsLockedAtAStoryPoint
struct AWKNDPlayerPawn_IsLockedAtAStoryPoint_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.IsFrontendInteractionEnabled
struct AWKNDPlayerPawn_IsFrontendInteractionEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.IsClimbing
struct AWKNDPlayerPawn_IsClimbing_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.IsCameraCollisionActor
struct AWKNDPlayerPawn_IsCameraCollisionActor_Params
{
	class AActor*                                      CheckActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.InvalidateRecenterTransform
struct AWKNDPlayerPawn_InvalidateRecenterTransform_Params
{
};

// Function WKND.WKNDPlayerPawn.HidePlayerItemsAndHands
struct AWKNDPlayerPawn_HidePlayerItemsAndHands_Params
{
	bool                                               bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.HidePlayerItems
struct AWKNDPlayerPawn_HidePlayerItems_Params
{
	bool                                               bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.HidePlayerHands
struct AWKNDPlayerPawn_HidePlayerHands_Params
{
	bool                                               bHide;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetThrottledDistance
struct AWKNDPlayerPawn_GetThrottledDistance_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetStoryPointLocation
struct AWKNDPlayerPawn_GetStoryPointLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetSnapTurnEnabled
struct AWKNDPlayerPawn_GetSnapTurnEnabled_Params
{
	EWKNDHands                                         hands;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetSidewaysSpeed
struct AWKNDPlayerPawn_GetSidewaysSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetSeatedCameraOffset
struct AWKNDPlayerPawn_GetSeatedCameraOffset_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetRecenter
struct AWKNDPlayerPawn_GetRecenter_Params
{
	struct FTransform                                  recenterTansform;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetPlayerLightsaber
struct AWKNDPlayerPawn_GetPlayerLightsaber_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetPlayerItems
struct AWKNDPlayerPawn_GetPlayerItems_Params
{
	struct FPlayerItems                                outItems;                                                 // (Parm, OutParm)
};

// Function WKND.WKNDPlayerPawn.GetMovementContext
struct AWKNDPlayerPawn_GetMovementContext_Params
{
	EMovementContext                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetMotionController
struct AWKNDPlayerPawn_GetMotionController_Params
{
	EControllerHand                                    ControllerType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AWKNDMotionController*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetLastValidLocationBeforeBlackout
struct AWKNDPlayerPawn_GetLastValidLocationBeforeBlackout_Params
{
	struct FVector                                     LastValidLocation;                                        // (Parm, OutParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetHandBones
struct AWKNDPlayerPawn_GetHandBones_Params
{
	struct FWKNDHandBones                              ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function WKND.WKNDPlayerPawn.GetForwardSpeed
struct AWKNDPlayerPawn_GetForwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetDeflectionToleranceMultiplierActive
struct AWKNDPlayerPawn_GetDeflectionToleranceMultiplierActive_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetDeflectionToleranceMultiplier
struct AWKNDPlayerPawn_GetDeflectionToleranceMultiplier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetCurrentCameraConstraintPoint
struct AWKNDPlayerPawn_GetCurrentCameraConstraintPoint_Params
{
	struct FVector                                     ConstraintPoint;                                          // (Parm, OutParm, IsPlainOldData)
	float                                              StartDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetClosestRecenteringPoint
struct AWKNDPlayerPawn_GetClosestRecenteringPoint_Params
{
	struct FVector                                     CheckLocation;                                            // (Parm, IsPlainOldData)
	struct FTransform                                  outTransform;                                             // (Parm, OutParm, IsPlainOldData)
	int                                                outIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetClosestMandatedPoint
struct AWKNDPlayerPawn_GetClosestMandatedPoint_Params
{
	struct FVector                                     CheckLocation;                                            // (Parm, IsPlainOldData)
	struct FTransform                                  outTransform;                                             // (Parm, OutParm, IsPlainOldData)
	int                                                outIndex;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetClimbDistanceThisFrame
struct AWKNDPlayerPawn_GetClimbDistanceThisFrame_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetCameraConstraintReturnPoint
struct AWKNDPlayerPawn_GetCameraConstraintReturnPoint_Params
{
	struct FVector                                     ReturnPoint;                                              // (Parm, OutParm, IsPlainOldData)
	float                                              DistanceFromReturn;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetCameraCollisionActor
struct AWKNDPlayerPawn_GetCameraCollisionActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetBackwardSpeed
struct AWKNDPlayerPawn_GetBackwardSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetAudioMovementContext
struct AWKNDPlayerPawn_GetAudioMovementContext_Params
{
	EMovementContext                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.GetActorsToIgnoreForLocomotion
struct AWKNDPlayerPawn_GetActorsToIgnoreForLocomotion_Params
{
	TArray<class AActor*>                              ignorables;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function WKND.WKNDPlayerPawn.FreezeCameraLocomotionInPlace
struct AWKNDPlayerPawn_FreezeCameraLocomotionInPlace_Params
{
};

// Function WKND.WKNDPlayerPawn.EndFallingTimeline
struct AWKNDPlayerPawn_EndFallingTimeline_Params
{
};

// Function WKND.WKNDPlayerPawn.EnablePlayerGrab
struct AWKNDPlayerPawn_EnablePlayerGrab_Params
{
	bool                                               bDisableGhosting;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.EnableNavMagnetCameraConstraint
struct AWKNDPlayerPawn_EnableNavMagnetCameraConstraint_Params
{
	struct FVector                                     InNavMagnetConstraintCenter;                              // (Parm, IsPlainOldData)
	float                                              EnageAtDistance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlackoutBeginFraction;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlackoutEndFraction;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.EnableLocomotion
struct AWKNDPlayerPawn_EnableLocomotion_Params
{
	struct FName                                       locoReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.EnableHandGhosting
struct AWKNDPlayerPawn_EnableHandGhosting_Params
{
};

// Function WKND.WKNDPlayerPawn.EnableFrontendInteraction
struct AWKNDPlayerPawn_EnableFrontendInteraction_Params
{
	EControllerHand                                    ControllerHand;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.EnableCameraConstraintAuto
struct AWKNDPlayerPawn_EnableCameraConstraintAuto_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.DropHeldObject
struct AWKNDPlayerPawn_DropHeldObject_Params
{
	class AActor*                                      ObjectToDrop;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.Disarm
struct AWKNDPlayerPawn_Disarm_Params
{
	class AActor*                                      Enemy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EDisarmType                                        DisarmedHand;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Force;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.DisablePlayerGrab
struct AWKNDPlayerPawn_DisablePlayerGrab_Params
{
	bool                                               bEnableGhosting;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.DisableNavMagnetCameraConstraint
struct AWKNDPlayerPawn_DisableNavMagnetCameraConstraint_Params
{
};

// Function WKND.WKNDPlayerPawn.DisableLocomotion
struct AWKNDPlayerPawn_DisableLocomotion_Params
{
	struct FName                                       locoReason;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.DisableFrontendInteraction
struct AWKNDPlayerPawn_DisableFrontendInteraction_Params
{
	EControllerHand                                    ControllerHand;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.DetermineNavigationGround
struct AWKNDPlayerPawn_DetermineNavigationGround_Params
{
	struct FVector                                     projectedToNavmesh;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     navigationGround;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               navigationGroundInit;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               locationInvalid;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.ControlsLimitedBySaberHold
struct AWKNDPlayerPawn_ControlsLimitedBySaberHold_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.ConstrainCameraToRadiusWhenImmobile
struct AWKNDPlayerPawn_ConstrainCameraToRadiusWhenImmobile_Params
{
	bool                                               constrain;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.ConstrainCameraToRadius
struct AWKNDPlayerPawn_ConstrainCameraToRadius_Params
{
};

// Function WKND.WKNDPlayerPawn.ClimbShock
struct AWKNDPlayerPawn_ClimbShock_Params
{
	float                                              Magnitude;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.ClearBonusDamage
struct AWKNDPlayerPawn_ClearBonusDamage_Params
{
};

// Function WKND.WKNDPlayerPawn.ChangeVRMode
struct AWKNDPlayerPawn_ChangeVRMode_Params
{
	EVRModeEnum                                        VRMode;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.CameraTeleport
struct AWKNDPlayerPawn_CameraTeleport_Params
{
	struct FVector                                     Location;                                                 // (Parm, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // (Parm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.CameraShouldRecenterDuringTurns
struct AWKNDPlayerPawn_CameraShouldRecenterDuringTurns_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.CameraIsFrozenForAllMovement
struct AWKNDPlayerPawn_CameraIsFrozenForAllMovement_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.CameraIsConstrainedToRadius
struct AWKNDPlayerPawn_CameraIsConstrainedToRadius_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.CameraConstraintVolumeFound
struct AWKNDPlayerPawn_CameraConstraintVolumeFound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.CameraConstraintUpdate
struct AWKNDPlayerPawn_CameraConstraintUpdate_Params
{
};

// Function WKND.WKNDPlayerPawn.CameraConstraintTeleport
struct AWKNDPlayerPawn_CameraConstraintTeleport_Params
{
	struct FVector                                     cameraConstraintPoint;                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.CameraConstraintDebugDraw
struct AWKNDPlayerPawn_CameraConstraintDebugDraw_Params
{
	bool                                               DrawConstraintPoint;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ConstraintPoint;                                          // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              StartDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.CalculateManualBlackout
struct AWKNDPlayerPawn_CalculateManualBlackout_Params
{
	float                                              DistanceFromReturn;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartBlackoutDistance;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CompleteBlackoutDistance;                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.BroadcastMandatedSlideAsTeleport
struct AWKNDPlayerPawn_BroadcastMandatedSlideAsTeleport_Params
{
	class AWKNDMotionController*                       teleportingController;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.BeginFallHaptics
struct AWKNDPlayerPawn_BeginFallHaptics_Params
{
	float                                              FallDistance;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.AssignRecenterTransform
struct AWKNDPlayerPawn_AssignRecenterTransform_Params
{
	struct FTransform                                  RCTransform;                                              // (Parm, IsPlainOldData)
};

// Function WKND.WKNDPlayerPawn.AssignRecenterAtFeet
struct AWKNDPlayerPawn_AssignRecenterAtFeet_Params
{
};

// Function WKND.WKNDSaveGame.SetCustomizationSettings
struct UWKNDSaveGame_SetCustomizationSettings_Params
{
	struct FCustomizationSettings                      NewCustomizationSettings;                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function WKND.WKNDSaveGame.SaveLightsaberHiltSetting
struct UWKNDSaveGame_SaveLightsaberHiltSetting_Params
{
	struct FName                                       SelectedLightsaberHilt;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSaveGame.SaveLightsaberHiltAndColorSettings
struct UWKNDSaveGame_SaveLightsaberHiltAndColorSettings_Params
{
	struct FName                                       SelectedLightsaberHilt;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SelectedLightsaberColor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSaveGame.SaveLightsaberColorSetting
struct UWKNDSaveGame_SaveLightsaberColorSetting_Params
{
	struct FName                                       SelectedLightsaberColor;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSaveGame.SaveDojoEnvironmentSetting
struct UWKNDSaveGame_SaveDojoEnvironmentSetting_Params
{
	struct FName                                       SelectedDojoEnvironment;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DojoEnvironmentLevelName;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSaveGame.GetCustomizationSettings
struct UWKNDSaveGame_GetCustomizationSettings_Params
{
	struct FCustomizationSettings                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.WKNDSnapRotationComponent.UpdateVRCameraOffset
struct UWKNDSnapRotationComponent_UpdateVRCameraOffset_Params
{
};

// Function WKND.WKNDSnapRotationComponent.Snap
struct UWKNDSnapRotationComponent_Snap_Params
{
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSnapRotationComponent.ResetVRCameraOffset
struct UWKNDSnapRotationComponent_ResetVRCameraOffset_Params
{
};

// Function WKND.WKNDSnapRotationComponent.ResetInitialRotation
struct UWKNDSnapRotationComponent_ResetInitialRotation_Params
{
	struct FRotator                                    NewInitialRotation;                                       // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.WKNDSnapRotationComponent.ResetDesiredOffsetStack
struct UWKNDSnapRotationComponent_ResetDesiredOffsetStack_Params
{
};

// Function WKND.WKNDSnapRotationComponent.PushRotationOffset
struct UWKNDSnapRotationComponent_PushRotationOffset_Params
{
};

// Function WKND.WKNDSnapRotationComponent.PopRotationOffset
struct UWKNDSnapRotationComponent_PopRotationOffset_Params
{
};

// Function WKND.WKNDSnapRotationComponent.InstantUpdateSnap
struct UWKNDSnapRotationComponent_InstantUpdateSnap_Params
{
};

// Function WKND.WKNDSnapRotationComponent.GetTurnDelta
struct UWKNDSnapRotationComponent_GetTurnDelta_Params
{
	struct FRotator                                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData)
};

// Function WKND.WKNDSnapRotationComponent.GetFadeOutTime
struct UWKNDSnapRotationComponent_GetFadeOutTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSnapRotationComponent.GetDesiredRotationOffset
struct UWKNDSnapRotationComponent_GetDesiredRotationOffset_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSnapRotationComponent.ApplySnapRotation
struct UWKNDSnapRotationComponent_ApplySnapRotation_Params
{
};

// Function WKND.WKNDSquadLeader.StopSquad
struct UWKNDSquadLeader_StopSquad_Params
{
	class USquadName*                                  SquadName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSquadLeader.StopActionCooldown
struct UWKNDSquadLeader_StopActionCooldown_Params
{
};

// Function WKND.WKNDSquadLeader.StartSquad
struct UWKNDSquadLeader_StartSquad_Params
{
	class USquadName*                                  SquadName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSquadLeader.StartActionCooldown
struct UWKNDSquadLeader_StartActionCooldown_Params
{
	float                                              cooldown;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSquadLeader.RemoveFromSquad
struct UWKNDSquadLeader_RemoveFromSquad_Params
{
	class AActor*                                      toRemove;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class USquadName*                                  SquadName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSquadLeader.OpenSquad
struct UWKNDSquadLeader_OpenSquad_Params
{
	class USquadName*                                  SquadName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class USquadOrders*                                SquadOrders;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EAISquadAction                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSquadLeader.OpenNewSquad
struct UWKNDSquadLeader_OpenNewSquad_Params
{
	class USquadName*                                  SquadName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ordersClass;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class USquadOrders*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSquadLeader.OnAction
struct UWKNDSquadLeader_OnAction_Params
{
};

// Function WKND.WKNDSquadLeader.GetRandomCombatant
struct UWKNDSquadLeader_GetRandomCombatant_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSquadLeader.GetActionCooldown
struct UWKNDSquadLeader_GetActionCooldown_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSquadLeader.CountSquadSize
struct UWKNDSquadLeader_CountSquadSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSquadLeader.CloseSquad
struct UWKNDSquadLeader_CloseSquad_Params
{
	class USquadName*                                  SquadName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EAISquadAction                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSquadLeader.AddToSquad
struct UWKNDSquadLeader_AddToSquad_Params
{
	class AActor*                                      toAdd;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class USquadName*                                  SquadName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSubtitle.UpdateTransform
struct AWKNDSubtitle_UpdateTransform_Params
{
	float                                              DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSubtitle.SplitOverflowText
struct AWKNDSubtitle_SplitOverflowText_Params
{
	struct FText                                       InText;                                                   // (Parm)
	struct FText                                       outOverflowText;                                          // (Parm, OutParm)
	int                                                outTextWordCount;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.WKNDSubtitle.ShowSubtitle
struct AWKNDSubtitle_ShowSubtitle_Params
{
	struct FLinearColor                                TextColor;                                                // (Parm, IsPlainOldData)
	class AActor*                                      speakingActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       SubtitleText;                                             // (Parm)
	struct FText                                       SpeakerName;                                              // (Parm)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSubtitle.ShiftText
struct AWKNDSubtitle_ShiftText_Params
{
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSubtitle.SetScreenPositionOffset
struct AWKNDSubtitle_SetScreenPositionOffset_Params
{
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSubtitle.OnShowSubtitle
struct AWKNDSubtitle_OnShowSubtitle_Params
{
};

// Function WKND.WKNDSubtitle.OnHidden
struct AWKNDSubtitle_OnHidden_Params
{
};

// Function WKND.WKNDSubtitle.HideSubtitle
struct AWKNDSubtitle_HideSubtitle_Params
{
};

// Function WKND.WKNDSubtitle.HasPendingText
struct AWKNDSubtitle_HasPendingText_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSubtitle.GetVerticalSize
struct AWKNDSubtitle_GetVerticalSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSubtitle.GetTargetTransform
struct AWKNDSubtitle_GetTargetTransform_Params
{
	struct FVector                                     outPos;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    outRot;                                                   // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     outScale;                                                 // (Parm, OutParm, IsPlainOldData)
	float                                              outAngleToPlayer;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSubtitle.GetApproximateDuration
struct AWKNDSubtitle_GetApproximateDuration_Params
{
	struct FText                                       InText;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSubtitle.FormatLineSpacing
struct AWKNDSubtitle_FormatLineSpacing_Params
{
	struct FText                                       InText;                                                   // (Parm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WKND.WKNDSubtitleManager.TryAddSubtitleByEventName
struct AWKNDSubtitleManager_TryAddSubtitleByEventName_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSubtitleManager.TryAddSubtitle
struct AWKNDSubtitleManager_TryAddSubtitle_Params
{
	class UAkAudioEvent*                               AudioEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSubtitleManager.SubtitleSpawnedEvent
struct AWKNDSubtitleManager_SubtitleSpawnedEvent_Params
{
	class AWKNDSubtitle*                               spawnedSubtitle;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSubtitleManager.SubtitleHiddenEvent
struct AWKNDSubtitleManager_SubtitleHiddenEvent_Params
{
	class AWKNDSubtitle*                               HiddenSubtitle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSubtitleManager.SetSubtitlesEnabled
struct AWKNDSubtitleManager_SetSubtitlesEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSubtitleManager.SetManagerInstance
struct AWKNDSubtitleManager_SetManagerInstance_Params
{
	class AWKNDSubtitleManager*                        ManagerInstance;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSubtitleManager.OnSubtitleHidden
struct AWKNDSubtitleManager_OnSubtitleHidden_Params
{
	class AWKNDSubtitle*                               HiddenSubtitle;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSubtitleManager.GetSubtitleManager
struct AWKNDSubtitleManager_GetSubtitleManager_Params
{
	class AWKNDSubtitleManager*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSubtitleManager.GetSubtitle
struct AWKNDSubtitleManager_GetSubtitle_Params
{
	class AWKNDSubtitle*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDSubtitleManager.DestroySubtitlePool
struct AWKNDSubtitleManager_DestroySubtitlePool_Params
{
};

// Function WKND.WKNDSubtitleManager.ClearAllSubtitles
struct AWKNDSubtitleManager_ClearAllSubtitles_Params
{
};

// Function WKND.WKNDSubtitleManager.BuildSubtitlePool
struct AWKNDSubtitleManager_BuildSubtitlePool_Params
{
};

// Function WKND.WKNDSubtitleManager.AddSubtitleByEventName
struct AWKNDSubtitleManager_AddSubtitleByEventName_Params
{
	struct FString                                     EventName;                                                // (Parm, ZeroConstructor)
	class AActor*                                      Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDSubtitleManager.AddSubtitle
struct AWKNDSubtitleManager_AddSubtitle_Params
{
	class UAkAudioEvent*                               AudioEvent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Speaker;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDToolbeltComponent.Unassign
struct UWKNDToolbeltComponent_Unassign_Params
{
	TScriptInterface<class UXLABInteractiveGroup>      Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDToolbeltComponent.SetEnableAssignedItems
struct UWKNDToolbeltComponent_SetEnableAssignedItems_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDToolbeltComponent.HasFreeSlots
struct UWKNDToolbeltComponent_HasFreeSlots_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDToolbeltComponent.Assign
struct UWKNDToolbeltComponent_Assign_Params
{
	TScriptInterface<class UXLABInteractiveGroup>      Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UWKNDToolbeltSlotComponent*                  ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function WKND.WKNDToolbeltSlotComponent.OnInteraction
struct UWKNDToolbeltSlotComponent_OnInteraction_Params
{
	EXLABInteractionEventType                          InteractionEventType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDToolbeltSlotComponent.GetAttachedActor
struct UWKNDToolbeltSlotComponent_GetAttachedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDToolbeltSlotComponent.GetAssignedActor
struct UWKNDToolbeltSlotComponent_GetAssignedActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDToolbeltSlotComponent.ForceAttachAssignedActor
struct UWKNDToolbeltSlotComponent_ForceAttachAssignedActor_Params
{
};

// Function WKND.WKNDToolbeltSlotComponent.Assign
struct UWKNDToolbeltSlotComponent_Assign_Params
{
	TScriptInterface<class UXLABInteractiveGroup>      Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDTrainingDroidComponent.UpdatePlayerAdjustment
struct UWKNDTrainingDroidComponent_UpdatePlayerAdjustment_Params
{
	class AWKNDPlayerPawn*                             Player;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDTrainingDroidComponent.UpdateLookAt
struct UWKNDTrainingDroidComponent_UpdateLookAt_Params
{
	struct FName                                       InSocketName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDTrainingDroidComponent.UpdateGrille
struct UWKNDTrainingDroidComponent_UpdateGrille_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AttackSpin;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDTrainingDroidComponent.UpdateDamage
struct UWKNDTrainingDroidComponent_UpdateDamage_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDTrainingDroidComponent.UpdateBob
struct UWKNDTrainingDroidComponent_UpdateBob_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDTrainingDroidComponent.SetDamageState
struct UWKNDTrainingDroidComponent_SetDamageState_Params
{
	int                                                InState;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDTrainingDroidComponent.EnableGrille
struct UWKNDTrainingDroidComponent_EnableGrille_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDVisionManager.StopVisionRendering
struct AWKNDVisionManager_StopVisionRendering_Params
{
};

// Function WKND.WKNDVisionManager.StartVisionRendering
struct AWKNDVisionManager_StartVisionRendering_Params
{
};

// Function WKND.WKNDWaitForMontageEnd.NotifyEnded
struct UWKNDWaitForMontageEnd_NotifyEnded_Params
{
};

// Function WKND.WKNDWaitForMontageEnd.CreateMontageEndProxy
struct UWKNDWaitForMontageEnd_CreateMontageEndProxy_Params
{
	class URPOCStagedCombatComponent*                  Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              WaitToStartPlaying;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class UWKNDWaitForMontageEnd*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDWorldsManager.OnPreLoadMap
struct UWKNDWorldsManager_OnPreLoadMap_Params
{
	struct FString                                     LoadingMap;                                               // (Parm, ZeroConstructor)
};

// Function WKND.WKNDWorldsManager.OnPostLoadMap
struct UWKNDWorldsManager_OnPostLoadMap_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDWorldsManager.DestroyCurrentWorld
struct UWKNDWorldsManager_DestroyCurrentWorld_Params
{
};

// Function WKND.WKNDWorldsManager.CreateWorld
struct UWKNDWorldsManager_CreateWorld_Params
{
	struct FString                                     Level;                                                    // (Parm, ZeroConstructor)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDZoeyCharacterMovementComponent.SetMoveType
struct UWKNDZoeyCharacterMovementComponent_SetMoveType_Params
{
	class AActor*                                      Zoe;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	EBuddyAIMovementType                               moveType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDZoeyDroidCharacter.WanderEnable
struct AWKNDZoeyDroidCharacter_WanderEnable_Params
{
};

// Function WKND.WKNDZoeyDroidCharacter.WanderDisable
struct AWKNDZoeyDroidCharacter_WanderDisable_Params
{
};

// Function WKND.WKNDZoeyDroidCharacter.PlayerSaberCut
struct AWKNDZoeyDroidCharacter_PlayerSaberCut_Params
{
	class ARPOCPickup_Lightsaber*                      Saber;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDZoeyDroidCharacter.OnReachedTarget
struct AWKNDZoeyDroidCharacter_OnReachedTarget_Params
{
};

// Function WKND.WKNDZoeyDroidCharacter.IsMovingToActor
struct AWKNDZoeyDroidCharacter_IsMovingToActor_Params
{
	class AActor*                                      GoalActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WKND.WKNDZoeyDroidCharacter.AnimProxy_ObjectThrow
struct AWKNDZoeyDroidCharacter_AnimProxy_ObjectThrow_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              throwDistance;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDZoeyDroidCharacter.AnimProxy_ObjectPickup
struct AWKNDZoeyDroidCharacter_AnimProxy_ObjectPickup_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDZoeyDroidCharacter.AnimProxy_ObjectLetGo
struct AWKNDZoeyDroidCharacter_AnimProxy_ObjectLetGo_Params
{
};

// Function WKND.WKNDZoeyDroidCharacter.AnimProxy_ObjectHandOver
struct AWKNDZoeyDroidCharacter_AnimProxy_ObjectHandOver_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDZoeyDroidCharacter.AnimProxy_ObjectCatchSuccess
struct AWKNDZoeyDroidCharacter_AnimProxy_ObjectCatchSuccess_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              catchAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDZoeyDroidCharacter.AnimProxy_ObjectCatchReady
struct AWKNDZoeyDroidCharacter_AnimProxy_ObjectCatchReady_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              catchAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WKND.WKNDZoeyDroidCharacter.AnimProxy_ObjectCatchFail
struct AWKNDZoeyDroidCharacter_AnimProxy_ObjectCatchFail_Params
{
	bool                                               oneHand;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
