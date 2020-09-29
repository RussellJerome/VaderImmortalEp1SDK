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

// Function ILMxLABAnim.AnimationDebugComponent.OnBecomeLocalPlayer
struct UAnimationDebugComponent_OnBecomeLocalPlayer_Params
{
};

// Function ILMxLABAnim.AnimationDockingComponent.UpdateDocking
struct UAnimationDockingComponent_UpdateDocking_Params
{
	struct FDockingRequestHandle                       Handle;                                                   // (Parm)
	struct FTransform                                  destTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ILMxLABAnim.AnimationDockingComponent.SetRelevantAnimInStateDockDestinationByTime
struct UAnimationDockingComponent_SetRelevantAnimInStateDockDestinationByTime_Params
{
	struct FName                                       StateName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              dockStartTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dockEndTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       dockBone;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                dockingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parallelDockingRootComponents;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              parallelDockingRootComponentsDockTime;                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      destParentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDockingRequestHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ILMxLABAnim.AnimationDockingComponent.SetRelevantAnimInStateDockDestinationByEvent
struct UAnimationDockingComponent_SetRelevantAnimInStateDockDestinationByEvent_Params
{
	struct FName                                       StateName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       dockStartEvent;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       dockEndEvent;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       dockBone;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                dockingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parallelDockingRootComponents;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              parallelDockingRootComponentsDockTime;                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      destParentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDockingRequestHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ILMxLABAnim.AnimationDockingComponent.SetMontageDockDestinationByTime
struct UAnimationDockingComponent_SetMontageDockDestinationByTime_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              dockStartTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dockEndTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       dockBone;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                dockingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parallelDockingRootComponents;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              parallelDockingRootComponentsDockTime;                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      destParentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDockingRequestHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ILMxLABAnim.AnimationDockingComponent.SetMontageDockDestinationByEvent
struct UAnimationDockingComponent_SetMontageDockDestinationByEvent_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       dockStartEvent;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       dockEndEvent;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       dockBone;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                dockingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parallelDockingRootComponents;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              parallelDockingRootComponentsDockTime;                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      destParentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDockingRequestHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ILMxLABAnim.AnimationDockingComponent.SetDockDestinationByTime
struct UAnimationDockingComponent_SetDockDestinationByTime_Params
{
	struct FName                                       AssetName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              dockStartTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dockEndTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       dockBone;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                dockingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parallelDockingRootComponents;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              parallelDockingRootComponentsDockTime;                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      destParentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDockingRequestHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ILMxLABAnim.AnimationDockingComponent.SetDockDestinationByEvent
struct UAnimationDockingComponent_SetDockDestinationByEvent_Params
{
	struct FName                                       AssetName;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       dockStartEvent;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       dockEndEvent;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       dockBone;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                dockingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parallelDockingRootComponents;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              parallelDockingRootComponentsDockTimeAActor;              // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      destParentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDockingRequestHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ILMxLABAnim.AnimationDockingComponent.SetBlendSpaceDockDestinationByTime
struct UAnimationDockingComponent_SetBlendSpaceDockDestinationByTime_Params
{
	class UBlendSpaceBase*                             BlendSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              dockStartTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dockEndTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       dockBone;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                dockingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parallelDockingRootComponents;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              parallelDockingRootComponentsDockTime;                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      destParentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDockingRequestHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ILMxLABAnim.AnimationDockingComponent.SetBlendSpaceDockDestinationByEvent
struct UAnimationDockingComponent_SetBlendSpaceDockDestinationByEvent_Params
{
	class UBlendSpaceBase*                             BlendSpace;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       dockStartEvent;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       dockEndEvent;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       dockBone;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                dockingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parallelDockingRootComponents;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              parallelDockingRootComponentsDockTime;                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      destParentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDockingRequestHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ILMxLABAnim.AnimationDockingComponent.SetAnimSequenceDockDestinationByTime
struct UAnimationDockingComponent_SetAnimSequenceDockDestinationByTime_Params
{
	class UAnimSequence*                               AnimSeq;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              dockStartTime;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              dockEndTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       dockBone;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                dockingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parallelDockingRootComponents;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              parallelDockingRootComponentsDockTime;                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      destParentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDockingRequestHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ILMxLABAnim.AnimationDockingComponent.SetAnimSequenceDockDestinationByEvent
struct UAnimationDockingComponent_SetAnimSequenceDockDestinationByEvent_Params
{
	class UAnimSequence*                               AnimSeq;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  destTransform;                                            // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FName                                       dockStartEvent;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       dockEndEvent;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FName                                       dockBone;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                dockingFlags;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                parallelDockingRootComponents;                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              parallelDockingRootComponentsDockTime;                    // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      destParentActor;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDockingRequestHandle                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ILMxLABAnim.AnimationDockingComponent.RootComponentsToInt
struct UAnimationDockingComponent_RootComponentsToInt_Params
{
	TEnumAsByte<ERootComponentFlags>                   flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ILMxLABAnim.AnimationDockingComponent.RequestHandleValid
struct UAnimationDockingComponent_RequestHandleValid_Params
{
	struct FDockingRequestHandle                       Handle;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ILMxLABAnim.AnimationDockingComponent.IsDocking
struct UAnimationDockingComponent_IsDocking_Params
{
	struct FDockingRequestHandle                       Handle;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ILMxLABAnim.AnimationDockingComponent.GetDockPercentage
struct UAnimationDockingComponent_GetDockPercentage_Params
{
	struct FDockingRequestHandle                       Handle;                                                   // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ILMxLABAnim.AnimationDockingComponent.DockingFlagToInt
struct UAnimationDockingComponent_DockingFlagToInt_Params
{
	TEnumAsByte<EDockingFlags>                         flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ILMxLABAnim.AnimationDockingComponent.ClearAllDocking
struct UAnimationDockingComponent_ClearAllDocking_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
