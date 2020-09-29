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

// Function ABP_PlayerHands.ABP_PlayerHands_C.IsHandSynced
struct UABP_PlayerHands_C_IsHandSynced_Params
{
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.UpdateElbowTransforms
struct UABP_PlayerHands_C_UpdateElbowTransforms_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.GetLocationAndRotationOffsetsBetweenBones
struct UABP_PlayerHands_C_GetLocationAndRotationOffsetsBetweenBones_Params
{
	struct FName                                       Wrist;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Offset;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocationOffset;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.PlayGripChangeMontage
struct UABP_PlayerHands_C_PlayGripChangeMontage_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReverseGrip;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.SetMotionControllerRefs
struct UABP_PlayerHands_C_SetMotionControllerRefs_Params
{
	EControllerHand                                    LeftOrRight;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  MotionController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.UpdateAnimVars
struct UABP_PlayerHands_C_UpdateAnimVars_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimVars                                   animData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.UpdateHand
struct UABP_PlayerHands_C_UpdateHand_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOculusTouchData                            TouchData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPoseAlphaData                              AwareData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_30391FB341CF1D97E1C8228A6539E328
struct UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_30391FB341CF1D97E1C8228A6539E328_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.StartNewAnimatedMovement
struct UABP_PlayerHands_C_StartNewAnimatedMovement_Params
{
	struct FName                                       NewType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_350CDAF9454D8655F753678E539CB225
struct UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_350CDAF9454D8655F753678E539CB225_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.BlueprintUpdateAnimation
struct UABP_PlayerHands_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.Debug Prints
struct UABP_PlayerHands_C_Debug_Prints_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.Smooth Hand Rotations
struct UABP_PlayerHands_C_Smooth_Hand_Rotations_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_13BDC12546A3ACA766861CB12AE71DE1
struct UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_13BDC12546A3ACA766861CB12AE71DE1_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.BlueprintInitializeAnimation
struct UABP_PlayerHands_C_BlueprintInitializeAnimation_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_1DD8C8E849058B35482902A37B03A14B
struct UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_1DD8C8E849058B35482902A37B03A14B_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberStd_Right
struct UABP_PlayerHands_C_AnimNotify_SaberStd_Right_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberRev_Right
struct UABP_PlayerHands_C_AnimNotify_SaberRev_Right_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberStd_Left
struct UABP_PlayerHands_C_AnimNotify_SaberStd_Left_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberRev_Left
struct UABP_PlayerHands_C_AnimNotify_SaberRev_Left_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_B90D6B4841E6CA2F21F12BBC75D699F5
struct UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_B90D6B4841E6CA2F21F12BBC75D699F5_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.ViewGate
struct UABP_PlayerHands_C_ViewGate_Params
{
	float                                              NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_CanGrab_Right
struct UABP_PlayerHands_C_AnimNotify_CanGrab_Right_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_CanGrab_Left
struct UABP_PlayerHands_C_AnimNotify_CanGrab_Left_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.SendRequest
struct UABP_PlayerHands_C_SendRequest_Params
{
	struct FName                                       NewRequest;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.StartNewSpecialMovementType
struct UABP_PlayerHands_C_StartNewSpecialMovementType_Params
{
	TArray<struct FName>                               NewTypes;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               OldTypes;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       Tag;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_E8E5F4B84FB830CE5FEF4D8BE8BC8739
struct UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_E8E5F4B84FB830CE5FEF4D8BE8BC8739_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.BlueprintBeginPlay
struct UABP_PlayerHands_C_BlueprintBeginPlay_Params
{
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateRightHandTransform
struct UABP_PlayerHands_C_RequestUpdateRightHandTransform_Params
{
	struct FTransform                                  TransformA;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateLeftHandTransform
struct UABP_PlayerHands_C_RequestUpdateLeftHandTransform_Params
{
	struct FTransform                                  TransformA;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestSetMotionControllerRefs
struct UABP_PlayerHands_C_RequestSetMotionControllerRefs_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  MotionController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestPlayGripChangeMontage
struct UABP_PlayerHands_C_RequestPlayGripChangeMontage_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReverseGrip;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateAnimVars
struct UABP_PlayerHands_C_RequestUpdateAnimVars_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAnimVars                                   animData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateHand
struct UABP_PlayerHands_C_RequestUpdateHand_Params
{
	EControllerHand                                    Hand;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FOculusTouchData                            TouchData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPoseAlphaData                              AwareData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ABP_PlayerHands.ABP_PlayerHands_C.ExecuteUbergraph_ABP_PlayerHands
struct UABP_PlayerHands_C_ExecuteUbergraph_ABP_PlayerHands_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
