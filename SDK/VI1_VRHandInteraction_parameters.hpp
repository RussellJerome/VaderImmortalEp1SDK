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

// Function VRHandInteraction.XLABInteractionModifier.OnInteraction
struct UXLABInteractionModifier_OnInteraction_Params
{
	EXLABInteractionEventType                          InteractionEventType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionModifier.ModifyTransform
struct UXLABInteractionModifier_ModifyTransform_Params
{
	struct FTransform                                  OriginalTransform;                                        // (Parm, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionModifier.ModifyStrength
struct UXLABInteractionModifier_ModifyStrength_Params
{
	float                                              OriginalStrength;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABHandSolver.SetHandler
struct UXLABHandSolver_SetHandler_Params
{
	TScriptInterface<class UXLABInteractionHandler>    InHandler;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABHandSolver.IsSolvedHandNearlyDoneLerping
struct UXLABHandSolver_IsSolvedHandNearlyDoneLerping_Params
{
	float                                              Threshold;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABHandSolver.IsSolvedHandDoneLerping
struct UXLABHandSolver_IsSolvedHandDoneLerping_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABHandSolver.IsSolvedHandDoneAnimating
struct UXLABHandSolver_IsSolvedHandDoneAnimating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABHandSolver.IsHandInPositionForGrab
struct UXLABHandSolver_IsHandInPositionForGrab_Params
{
	float                                              Tolerance;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABHandSolver.GetInteractionToHandTransformDelta
struct UXLABHandSolver_GetInteractionToHandTransformDelta_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABHandSolver.GetHandler
struct UXLABHandSolver_GetHandler_Params
{
	TScriptInterface<class UXLABInteractionHandler>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABHandSolver.GetDesiredTransform
struct UXLABHandSolver_GetDesiredTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABDefaultHandSolver.GetAnimationAssetForInteractive
struct UXLABDefaultHandSolver_GetAnimationAssetForInteractive_Params
{
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class UAnimationAsset*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABItemSolver.SetCanMove
struct UXLABItemSolver_SetCanMove_Params
{
	bool                                               bInCanMove;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABItemSolver.OnInteraction
struct UXLABItemSolver_OnInteraction_Params
{
	EXLABInteractionEventType                          InteractionEventType;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABItemSolver.IsHeldBy
struct UXLABItemSolver_IsHeldBy_Params
{
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABItemSolver.IsBeingHeld
struct UXLABItemSolver_IsBeingHeld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABItemSolver.GetNumGrabbers
struct UXLABItemSolver_GetNumGrabbers_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABItemSolver.GetHeldInteractive
struct UXLABItemSolver_GetHeldInteractive_Params
{
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABItemSolver.GetHandlerIndex
struct UXLABItemSolver_GetHandlerIndex_Params
{
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABItemSolver.GetHandlerByIndex
struct UXLABItemSolver_GetHandlerByIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABItemSolver.GetCanMove
struct UXLABItemSolver_GetCanMove_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionAnimInstance.SetHandSolver
struct UXLABInteractionAnimInstance_SetHandSolver_Params
{
	class UXLABHandSolver*                             InHandSolver;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandler.GetReferenceActor
struct UXLABInteractionHandler_GetReferenceActor_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandler.GetMotionControllerPipeline
struct UXLABInteractionHandler_GetMotionControllerPipeline_Params
{
	class UXLABMotionControllerPipeline*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandler.GetInteractionState
struct UXLABInteractionHandler_GetInteractionState_Params
{
	EXLABInteractionState                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandler.GetHandSolver
struct UXLABInteractionHandler_GetHandSolver_Params
{
	class UXLABHandSolver*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandler.GetHandlerWorldTransform
struct UXLABInteractionHandler_GetHandlerWorldTransform_Params
{
	EXLABHandlerBoneType                               BoneType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EXLABHandlerBoneSpace                              BoneSpace;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandler.GetHandlerData
struct UXLABInteractionHandler_GetHandlerData_Params
{
	class UXLABHandlerData*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandler.GetGrabberComponent
struct UXLABInteractionHandler_GetGrabberComponent_Params
{
	class USceneComponent*                             ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandler.GetGrabbedInteractive
struct UXLABInteractionHandler_GetGrabbedInteractive_Params
{
	struct FXLABBestInteractiveData                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRHandInteraction.XLABInteractionHandler.GetGrabAmount
struct UXLABInteractionHandler_GetGrabAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandler.GetBestInteractive
struct UXLABInteractionHandler_GetBestInteractive_Params
{
	struct FXLABBestInteractiveData                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRHandInteraction.XLABInteractionHandler.ForceRelease
struct UXLABInteractionHandler_ForceRelease_Params
{
};

// Function VRHandInteraction.XLABInteractionHandler.ForceGrab
struct UXLABInteractionHandler_ForceGrab_Params
{
};

// Function VRHandInteraction.XLABInteractionHandlerComponent.SetGrabAmount
struct UXLABInteractionHandlerComponent_SetGrabAmount_Params
{
	float                                              InGrabAmount;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandlerComponent.InitializeGrabbing
struct UXLABInteractionHandlerComponent_InitializeGrabbing_Params
{
	class USceneComponent*                             InGrabberComp;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       InGrabberSocketName;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandlerComponent.GetInteractionState
struct UXLABInteractionHandlerComponent_GetInteractionState_Params
{
	EXLABInteractionState                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandlerComponent.GetGrabbedInteractive
struct UXLABInteractionHandlerComponent_GetGrabbedInteractive_Params
{
	struct FXLABBestInteractiveData                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRHandInteraction.XLABInteractionHandlerComponent.GetGrabAmount
struct UXLABInteractionHandlerComponent_GetGrabAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionHandlerComponent.GetBestInteractive
struct UXLABInteractionHandlerComponent_GetBestInteractive_Params
{
	struct FXLABBestInteractiveData                    ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function VRHandInteraction.XLABInteractionHandlerComponent.ForceRelease
struct UXLABInteractionHandlerComponent_ForceRelease_Params
{
};

// Function VRHandInteraction.XLABInteractionHandlerComponent.ForceGrab
struct UXLABInteractionHandlerComponent_ForceGrab_Params
{
};

// Function VRHandInteraction.XLABInteractionHandlerComponent.CanGrab
struct UXLABInteractionHandlerComponent_CanGrab_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionItemComponent.SetPrimitive
struct UXLABInteractionItemComponent_SetPrimitive_Params
{
	class UPrimitiveComponent*                         InGrabbableComp;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionManager.UnregisterInteractiveGroup
struct AXLABInteractionManager_UnregisterInteractiveGroup_Params
{
	TScriptInterface<class UXLABInteractiveGroup>      InteractiveGroup;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionManager.UnregisterInteractive
struct AXLABInteractionManager_UnregisterInteractive_Params
{
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionManager.RegisterInteractiveGroup
struct AXLABInteractionManager_RegisterInteractiveGroup_Params
{
	TScriptInterface<class UXLABInteractiveGroup>      InteractiveGroup;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionManager.RegisterInteractive
struct AXLABInteractionManager_RegisterInteractive_Params
{
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionManager.GetStrongestInteractive
struct AXLABInteractionManager_GetStrongestInteractive_Params
{
	TScriptInterface<class UXLABInteractiveGroup>      Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionManager.GetInteractionDataForInteractive
struct AXLABInteractionManager_GetInteractionDataForInteractive_Params
{
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	EXLABLockedDataType                                LockedDataType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FXLABLockedInteractionData>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VRHandInteraction.XLABInteractionManager.GetInteractionDataForHandler
struct AXLABInteractionManager_GetInteractionDataForHandler_Params
{
	TScriptInterface<class UXLABInteractionHandler>    InHandler;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FXLABLockedInteractionData                  OutData;                                                  // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionManager.GetInteractionDataForGroup
struct AXLABInteractionManager_GetInteractionDataForGroup_Params
{
	TScriptInterface<class UXLABInteractiveGroup>      Group;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	EXLABLockedDataType                                LockedDataType;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FXLABLockedInteractionData>          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function VRHandInteraction.XLABInteractionManager.GetGroupForInteractive
struct AXLABInteractionManager_GetGroupForInteractive_Params
{
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractiveGroup>      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnTorus
struct UXLABInteractionMathUtils_GetClosestPointOnTorus_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TorusCenter;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     TorusNormal;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              TorusRadius;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              TorusWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSquare
struct UXLABInteractionMathUtils_GetClosestPointOnSquare_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     CenterOfPlane;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    PlaneOrientation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   LocalHalfExtents;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSphere
struct UXLABInteractionMathUtils_GetClosestPointOnSphere_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     sphereCenter;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              SphereRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSegmentWithStartAndEnd
struct UXLABInteractionMathUtils_GetClosestPointOnSegmentWithStartAndEnd_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     SegmentStart;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     SegmentEnd;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnSegment
struct UXLABInteractionMathUtils_GetClosestPointOnSegment_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     SegmentCenter;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     SegmentDirection;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              SegmentHalfLength;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnOpenCylinder
struct UXLABInteractionMathUtils_GetClosestPointOnOpenCylinder_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     CylinderCenter;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     CylinderAxis;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              CylinderRadius;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CylinderHalfHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnOpenCone
struct UXLABInteractionMathUtils_GetClosestPointOnOpenCone_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ConeTip;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ConeDirection;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ConeHalfAngleDegrees;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ConeLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnInfinitePlane
struct UXLABInteractionMathUtils_GetClosestPointOnInfinitePlane_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PointOnPlane;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PlaneNormal;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnInfiniteLine
struct UXLABInteractionMathUtils_GetClosestPointOnInfiniteLine_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     PointOnLine;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LineDirection;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnDisc
struct UXLABInteractionMathUtils_GetClosestPointOnDisc_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     DiscCenter;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     DiscNormal;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              DiscRadius;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnClosedCylinder
struct UXLABInteractionMathUtils_GetClosestPointOnClosedCylinder_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     CylinderCenter;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     CylinderAxis;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              CylinderRadius;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              CylinderHalfHeight;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnClosedCone
struct UXLABInteractionMathUtils_GetClosestPointOnClosedCone_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ConeTip;                                                  // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ConeDirection;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              ConeHalfAngleDegrees;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ConeLength;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnCircle
struct UXLABInteractionMathUtils_GetClosestPointOnCircle_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     circleCenter;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     CircleNormal;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              circleRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnBox
struct UXLABInteractionMathUtils_GetClosestPointOnBox_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BoxCenter;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    BoxOrientation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LocalBoxHalfExtents;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EXLABBoxSurfaces                                   Surfaces;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestPointOnBoundedPlane
struct UXLABInteractionMathUtils_GetClosestPointOnBoundedPlane_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     CenterOfPlane;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    PlaneOrientation;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   LocalHalfExtents;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionMathUtils.GetClosestFaceCenterOnBox
struct UXLABInteractionMathUtils_GetClosestFaceCenterOnBox_Params
{
	struct FVector                                     Point;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     BoxCenter;                                                // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator                                    BoxOrientation;                                           // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector                                     LocalBoxHalfExtents;                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EXLABBoxSurfaces                                   Surfaces;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionUtils.GetRotationAngleAroundAxis
struct UXLABInteractionUtils_GetRotationAngleAroundAxis_Params
{
	struct FTransform                                  Transform;                                                // (Parm, IsPlainOldData)
	TEnumAsByte<EAxis>                                 RotationAxis;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionUtils.GetInteractionManager
struct UXLABInteractionUtils_GetInteractionManager_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	class AXLABInteractionManager*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractionUtils.DrawDebugString
struct UXLABInteractionUtils_DrawDebugString_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TextLocation;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FString                                     text;                                                     // (Parm, ZeroConstructor)
	float                                              FontScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TestBaseActor;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // (Parm, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawShadow;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractive.SetReleaseMethod
struct UXLABInteractive_SetReleaseMethod_Params
{
	EXLABInteractionReleaseMethod                      ReleaseMethod;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractive.SetEnabled
struct UXLABInteractive_SetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractive.GetReleaseMethod
struct UXLABInteractive_GetReleaseMethod_Params
{
	EXLABInteractionReleaseMethod                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractive.GetInteractionTransform
struct UXLABInteractive_GetInteractionTransform_Params
{
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractive.GetInteractionStrength
struct UXLABInteractive_GetInteractionStrength_Params
{
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractive.GetInteractionData
struct UXLABInteractive_GetInteractionData_Params
{
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UXLABInteractionData*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractive.GetEnabled
struct UXLABInteractive_GetEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractiveActor.SetPrimitive
struct AXLABInteractiveActor_SetPrimitive_Params
{
	class UPrimitiveComponent*                         InGrabbableComp;                                          // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractiveActor.IsBeingHeld
struct AXLABInteractiveActor_IsBeingHeld_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractiveActor.GetPrimitive
struct AXLABInteractiveActor_GetPrimitive_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractiveAreaComponent.GetInteractionTransform
struct UXLABInteractiveAreaComponent_GetInteractionTransform_Params
{
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractiveGroup.SetEnabled
struct UXLABInteractiveGroup_SetEnabled_Params
{
	bool                                               bEnabled;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractiveGroup.GetPrimitive
struct UXLABInteractiveGroup_GetPrimitive_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractiveGroup.GetGroupSolver
struct UXLABInteractiveGroup_GetGroupSolver_Params
{
	class UXLABItemSolver*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABInteractiveGroup.GetEnabled
struct UXLABInteractiveGroup_GetEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function VRHandInteraction.XLABTwoHandedVRPawn.GetHandlerForHand
struct UXLABTwoHandedVRPawn_GetHandlerForHand_Params
{
	EControllerHand                                    Hand;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
