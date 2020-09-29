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

// Function Gaze.Gaze_Attention.UpdateAttention
struct UGaze_Attention_UpdateAttention_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	EAttentionAction                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_Attention.UnForceAttention
struct UGaze_Attention_UnForceAttention_Params
{
};

// Function Gaze.Gaze_Attention.SetFocus
struct UGaze_Attention_SetFocus_Params
{
	struct FAttentionFocus                             nextFocus;                                                // (Parm)
};

// Function Gaze.Gaze_Attention.IsValidFocus
struct UGaze_Attention_IsValidFocus_Params
{
	struct FAttentionFocus                             attn;                                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_Attention.GetWorldSpaceAttention
struct UGaze_Attention_GetWorldSpaceAttention_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_Attention.GetAttention
struct UGaze_Attention_GetAttention_Params
{
	class UGaze_PointOfInterest*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Gaze.Gaze_Attention.ForceAttentionChange
struct UGaze_Attention_ForceAttentionChange_Params
{
	class UGaze_PointOfInterest*                       poi;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gaze.Gaze_Attention.EnableDebugRender
struct UGaze_Attention_EnableDebugRender_Params
{
};

// Function Gaze.Gaze_Attention.DisableDebugRender
struct UGaze_Attention_DisableDebugRender_Params
{
};

// Function Gaze.Gaze_Attention.DebugRender
struct UGaze_Attention_DebugRender_Params
{
};

// Function Gaze.Gaze_Attention.ClearPOIArray
struct UGaze_Attention_ClearPOIArray_Params
{
};

// Function Gaze.Gaze_Attention.ClearAttention
struct UGaze_Attention_ClearAttention_Params
{
};

// Function Gaze.Gaze_Attention.ChooseNewFocus
struct UGaze_Attention_ChooseNewFocus_Params
{
};

// Function Gaze.Gaze_Attention.AddSinglePOIToAttention
struct UGaze_Attention_AddSinglePOIToAttention_Params
{
	class UGaze_PointOfInterest*                       poi;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gaze.Gaze_Attention.AddPOIAndGroupToAttention
struct UGaze_Attention_AddPOIAndGroupToAttention_Params
{
	class UGaze_PointOfInterest*                       poi;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gaze.Gaze_Attention.AddGroupToAttention
struct UGaze_Attention_AddGroupToAttention_Params
{
	class AActor*                                      interestingActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_Attention.AddEntireActorToAttention
struct UGaze_Attention_AddEntireActorToAttention_Params
{
	class AActor*                                      interestingActor;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_BlendSpace.VectorToSpace
struct UGaze_BlendSpace_VectorToSpace_Params
{
	struct FVector                                     lookAtVector;                                             // (Parm, IsPlainOldData)
	struct FVector                                     spaceVector;                                              // (Parm, IsPlainOldData)
	struct FRotator                                    spaceRotator;                                             // (Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_BlendSpace.VectorToHeadingForEyes
struct UGaze_BlendSpace_VectorToHeadingForEyes_Params
{
	struct FVector                                     perceptionFacing;                                         // (Parm, IsPlainOldData)
	struct FVector                                     localLookAt;                                              // (Parm, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_BlendSpace.VectorToHeading
struct UGaze_BlendSpace_VectorToHeading_Params
{
	struct FVector                                     perceptionFacing;                                         // (Parm, IsPlainOldData)
	struct FVector                                     localLookAt;                                              // (Parm, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_BlendSpace.VectorToActorHeading
struct UGaze_BlendSpace_VectorToActorHeading_Params
{
	struct FVector                                     localLookAt;                                              // (Parm, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_BlendSpace.VectorSpaceToHeading
struct UGaze_BlendSpace_VectorSpaceToHeading_Params
{
	struct FVector                                     localLookAt;                                              // (Parm, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_BlendSpace.GetBoneTransform
struct UGaze_BlendSpace_GetBoneTransform_Params
{
	struct FName                                       BoneName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_Daydream.Update
struct UGaze_Daydream_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_Daydream.StopDaydream
struct UGaze_Daydream_StopDaydream_Params
{
};

// Function Gaze.Gaze_Daydream.StartDaydream
struct UGaze_Daydream_StartDaydream_Params
{
};

// Function Gaze.Gaze_Daydream.GetDayDreamAngles
struct UGaze_Daydream_GetDayDreamAngles_Params
{
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_Daydream.GetDayDreamActivity
struct UGaze_Daydream_GetDayDreamActivity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_Daydream.EnableDaydream
struct UGaze_Daydream_EnableDaydream_Params
{
};

// Function Gaze.Gaze_Daydream.DisableDaydream
struct UGaze_Daydream_DisableDaydream_Params
{
};

// Function Gaze.Gaze_EyeVector.Update
struct UGaze_EyeVector_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_EyeVector.TriggerSaccade
struct UGaze_EyeVector_TriggerSaccade_Params
{
};

// Function Gaze.Gaze_EyeVector.SaccadeToWorldspacePoint
struct UGaze_EyeVector_SaccadeToWorldspacePoint_Params
{
	struct FVector                                     worldspacePoint;                                          // (Parm, IsPlainOldData)
};

// Function Gaze.Gaze_EyeVector.SaccadeToPOI
struct UGaze_EyeVector_SaccadeToPOI_Params
{
	class UGaze_PointOfInterest*                       newPOI;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gaze.Gaze_EyeVector.PreUpdate
struct UGaze_EyeVector_PreUpdate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_EyeVector.Linger
struct UGaze_EyeVector_Linger_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_EyeVector.GetPitchAndYaw
struct UGaze_EyeVector_GetPitchAndYaw_Params
{
	float                                              Pitch;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              leftEye;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              rightEye;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_EyeVector.EnableEyeVector
struct UGaze_EyeVector_EnableEyeVector_Params
{
};

// Function Gaze.Gaze_EyeVector.DisableEyeVector
struct UGaze_EyeVector_DisableEyeVector_Params
{
};

// Function Gaze.Gaze_FloatNode.Evaluate
struct UGaze_FloatNode_Evaluate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_FloatConstant.SetValue
struct UGaze_FloatConstant_SetValue_Params
{
	float                                              V;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_FloatConstant.Evaluate
struct UGaze_FloatConstant_Evaluate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_FloatLerp.Set
struct UGaze_FloatLerp_Set_Params
{
	float                                              Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_FloatLerp.Evaluate
struct UGaze_FloatLerp_Evaluate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_FloatSCurve.Set
struct UGaze_FloatSCurve_Set_Params
{
	float                                              Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_FloatSCurve.Evaluate
struct UGaze_FloatSCurve_Evaluate_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.Update_UsingAlertness
struct UGaze_HeadVector_Update_UsingAlertness_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.SetUrgency
struct UGaze_HeadVector_SetUrgency_Params
{
	float                                              Val;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.SetPOILocation
struct UGaze_HeadVector_SetPOILocation_Params
{
	struct FVector                                     poi;                                                      // (Parm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.SetPOI
struct UGaze_HeadVector_SetPOI_Params
{
	class UGaze_PointOfInterest*                       poi;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.ResponseCurve
struct UGaze_HeadVector_ResponseCurve_Params
{
	float                                              In;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.Lerp
struct UGaze_HeadVector_Lerp_Params
{
	float                                              from;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              to;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Amount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.HV2_GetVectorToPOI
struct UGaze_HeadVector_HV2_GetVectorToPOI_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetTurnSign
struct UGaze_HeadVector_GetTurnSign_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetRootToPOI
struct UGaze_HeadVector_GetRootToPOI_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetPTHSign
struct UGaze_HeadVector_GetPTHSign_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetPOILocation
struct UGaze_HeadVector_GetPOILocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetPitchToPOI
struct UGaze_HeadVector_GetPitchToPOI_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetPerceptionToHead
struct UGaze_HeadVector_GetPerceptionToHead_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetNormalisedPitch
struct UGaze_HeadVector_GetNormalisedPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetNormalisdAngle
struct UGaze_HeadVector_GetNormalisdAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetLimitedAngle
struct UGaze_HeadVector_GetLimitedAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetIdealHead
struct UGaze_HeadVector_GetIdealHead_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetHeadYaw
struct UGaze_HeadVector_GetHeadYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetHeadPitch
struct UGaze_HeadVector_GetHeadPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.GetActualHead
struct UGaze_HeadVector_GetActualHead_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.Get_YawToPOI
struct UGaze_HeadVector_Get_YawToPOI_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.Get_normalizedYawToPOI
struct UGaze_HeadVector_Get_normalizedYawToPOI_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.Get_idealYaw
struct UGaze_HeadVector_Get_idealYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.Get_idealPitch
struct UGaze_HeadVector_Get_idealPitch_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.Get_eyeContributionYaw
struct UGaze_HeadVector_Get_eyeContributionYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.Get_actualYaw
struct UGaze_HeadVector_Get_actualYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.EnableDebugDraw
struct UGaze_HeadVector_EnableDebugDraw_Params
{
};

// Function Gaze.Gaze_HeadVector.DisableDebugDraw
struct UGaze_HeadVector_DisableDebugDraw_Params
{
};

// Function Gaze.Gaze_HeadVector.CalculateYawSpaceToPOI
struct UGaze_HeadVector_CalculateYawSpaceToPOI_Params
{
	struct FVector                                     referenceVector;                                          // (Parm, OutParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.CalculateReferenceLocation
struct UGaze_HeadVector_CalculateReferenceLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_HeadVector.CalculateOmegaContribution
struct UGaze_HeadVector_CalculateOmegaContribution_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_Perception.GetSpottedPOIHacks
struct UGaze_Perception_GetSpottedPOIHacks_Params
{
	class UGaze_PointOfInterest*                       ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Gaze.Gaze_Perception.GetSpottedActorHacks
struct UGaze_Perception_GetSpottedActorHacks_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_Perception.EvaluateTargets
struct UGaze_Perception_EvaluateTargets_Params
{
};

// Function Gaze.Gaze_Perception.EnableDebugRender
struct UGaze_Perception_EnableDebugRender_Params
{
};

// Function Gaze.Gaze_Perception.DisableDebugRender
struct UGaze_Perception_DisableDebugRender_Params
{
};

// Function Gaze.Gaze_Perception.DebugRender
struct UGaze_Perception_DebugRender_Params
{
};

// Function Gaze.Gaze_PerceptionPolicy.EnableDebug
struct UGaze_PerceptionPolicy_EnableDebug_Params
{
};

// Function Gaze.Gaze_PerceptionPolicy.Discover
struct UGaze_PerceptionPolicy_Discover_Params
{
	class AActor*                                      perceptionOwner;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     perceptionRoot;                                           // (Parm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (Parm, IsPlainOldData)
	TArray<class UGaze_PointOfInterest*>               pois;                                                     // (Parm, OutParm, ZeroConstructor)
	TArray<struct FPerceivedActor>                     perceived;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_PerceptionPolicy.DisableDebug
struct UGaze_PerceptionPolicy_DisableDebug_Params
{
};

// Function Gaze.Gaze_PerceptionPolicy.DebugDraw
struct UGaze_PerceptionPolicy_DebugDraw_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Root;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (Parm, IsPlainOldData)
};

// Function Gaze.Gaze_PerceptionCone.Discover
struct UGaze_PerceptionCone_Discover_Params
{
	class AActor*                                      perceptionOwner;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     perceptionRoot;                                           // (Parm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (Parm, IsPlainOldData)
	TArray<class UGaze_PointOfInterest*>               pois;                                                     // (Parm, OutParm, ZeroConstructor)
	TArray<struct FPerceivedActor>                     perceived;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_PerceptionCone.DebugDraw
struct UGaze_PerceptionCone_DebugDraw_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Root;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (Parm, IsPlainOldData)
};

// Function Gaze.Gaze_PerceptionRaycastCone.Discover
struct UGaze_PerceptionRaycastCone_Discover_Params
{
	class AActor*                                      perceptionOwner;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     perceptionRoot;                                           // (Parm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (Parm, IsPlainOldData)
	TArray<class UGaze_PointOfInterest*>               pois;                                                     // (Parm, OutParm, ZeroConstructor)
	TArray<struct FPerceivedActor>                     perceived;                                                // (Parm, OutParm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_PerceptionRaycastCone.DebugDraw
struct UGaze_PerceptionRaycastCone_DebugDraw_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Root;                                                     // (Parm, IsPlainOldData)
	struct FVector                                     Facing;                                                   // (Parm, IsPlainOldData)
};

// Function Gaze.Gaze_PointOfInterest.RemoveTag
struct UGaze_PointOfInterest_RemoveTag_Params
{
	struct FName                                       RemoveTag;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_PointOfInterest.Register
struct UGaze_PointOfInterest_Register_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_PointOfInterest.IsInGroup
struct UGaze_PointOfInterest_IsInGroup_Params
{
	struct FName                                       GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_PointOfInterest.GetRadius
struct UGaze_PointOfInterest_GetRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_PointOfInterest.GetPrimaryGroup
struct UGaze_PointOfInterest_GetPrimaryGroup_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_PointOfInterest.Deregister
struct UGaze_PointOfInterest_Deregister_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_PointOfInterest.DebugDraw
struct UGaze_PointOfInterest_DebugDraw_Params
{
	struct FColor                                      col;                                                      // (Parm, IsPlainOldData)
};

// Function Gaze.Gaze_PointOfInterest.ContainsTag
struct UGaze_PointOfInterest_ContainsTag_Params
{
	struct FName                                       checkTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_PointOfInterest.ContainsAnyTags
struct UGaze_PointOfInterest_ContainsAnyTags_Params
{
	TArray<struct FName>                               checkTags;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_PointOfInterest.ContainsAllTags
struct UGaze_PointOfInterest_ContainsAllTags_Params
{
	TArray<struct FName>                               checkTags;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_PointOfInterest.AddTag
struct UGaze_PointOfInterest_AddTag_Params
{
	struct FName                                       AddTag;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_POI.RemoveTag
struct UGaze_POI_RemoveTag_Params
{
	struct FName                                       RemoveTag;                                                // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_POI.Register
struct UGaze_POI_Register_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_POI.IsInGroup
struct UGaze_POI_IsInGroup_Params
{
	struct FName                                       GroupName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_POI.GetRadius
struct UGaze_POI_GetRadius_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_POI.GetPrimaryGroup
struct UGaze_POI_GetPrimaryGroup_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_POI.Deregister
struct UGaze_POI_Deregister_Params
{
	class AGameStateBase*                              GameState;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_POI.DebugDraw
struct UGaze_POI_DebugDraw_Params
{
	struct FColor                                      col;                                                      // (Parm, IsPlainOldData)
};

// Function Gaze.Gaze_POI.ContainsTag
struct UGaze_POI_ContainsTag_Params
{
	struct FName                                       checkTag;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_POI.ContainsAnyTags
struct UGaze_POI_ContainsAnyTags_Params
{
	TArray<struct FName>                               checkTags;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_POI.ContainsAllTags
struct UGaze_POI_ContainsAllTags_Params
{
	TArray<struct FName>                               checkTags;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_POI.AddTag
struct UGaze_POI_AddTag_Params
{
	struct FName                                       AddTag;                                                   // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_POIContainer.RemovePOI
struct UGaze_POIContainer_RemovePOI_Params
{
	class UGaze_PointOfInterest*                       poi;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gaze.Gaze_POIContainer.AddPOI
struct UGaze_POIContainer_AddPOI_Params
{
	class UGaze_PointOfInterest*                       poi;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gaze.Gaze_POI_Visualiser.DebugDraw
struct UGaze_POI_Visualiser_DebugDraw_Params
{
	struct FColor                                      col;                                                      // (Parm, IsPlainOldData)
};

// Function Gaze.Gaze_Task.Update
struct UGaze_Task_Update_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_Task.LookForNewTask
struct UGaze_Task_LookForNewTask_Params
{
};

// Function Gaze.Gaze_VectorNode.Tick
struct UGaze_VectorNode_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorNode.Replace
struct UGaze_VectorNode_Replace_Params
{
	class UGaze_VectorNode*                            Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGaze_VectorNode*                            Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorNode.Evaluate
struct UGaze_VectorNode_Evaluate_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_VectorActor.Tick
struct UGaze_VectorActor_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorActor.SetActor
struct UGaze_VectorActor_SetActor_Params
{
	class AActor*                                      T;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorActor.Evaluate
struct UGaze_VectorActor_Evaluate_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_VectorBlend.Tick
struct UGaze_VectorBlend_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorBlend.SetRange
struct UGaze_VectorBlend_SetRange_Params
{
	class UGaze_VectorNode*                            S;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class UGaze_VectorNode*                            E;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorBlend.SetParent
struct UGaze_VectorBlend_SetParent_Params
{
	class UGaze_VectorNode*                            P;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorBlend.SetFunction
struct UGaze_VectorBlend_SetFunction_Params
{
	class UGaze_FloatNode*                             F;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorBlend.Evaluate
struct UGaze_VectorBlend_Evaluate_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_VectorConstant.Tick
struct UGaze_VectorConstant_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorConstant.SetVector
struct UGaze_VectorConstant_SetVector_Params
{
	struct FVector                                     V;                                                        // (Parm, IsPlainOldData)
};

// Function Gaze.Gaze_VectorConstant.Evaluate
struct UGaze_VectorConstant_Evaluate_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_VectorPOI.Tick
struct UGaze_VectorPOI_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorPOI.SetPOI
struct UGaze_VectorPOI_SetPOI_Params
{
	class UGaze_PointOfInterest*                       poi;                                                      // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Gaze.Gaze_VectorPOI.Evaluate
struct UGaze_VectorPOI_Evaluate_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Gaze.Gaze_VectorReference.Tick
struct UGaze_VectorReference_Tick_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorReference.Replace
struct UGaze_VectorReference_Replace_Params
{
	class UGaze_VectorNode*                            Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UGaze_VectorNode*                            Destination;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gaze.Gaze_VectorReference.Evaluate
struct UGaze_VectorReference_Evaluate_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
