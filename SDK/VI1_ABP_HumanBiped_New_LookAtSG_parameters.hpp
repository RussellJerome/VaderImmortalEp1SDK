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

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.BlinkAkAudioEvent
struct UABP_HumanBiped_New_LookAtSG_C_BlinkAkAudioEvent_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.FindAkBlinkComponent
struct UABP_HumanBiped_New_LookAtSG_C_FindAkBlinkComponent_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.AdjustIkGunHeight
struct UABP_HumanBiped_New_LookAtSG_C_AdjustIkGunHeight_Params
{
	float                                              InterpSpeed;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DistanceFromHead__Remapped_Input_;                        // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector2D                                   AdjustmentToHeight__Remapped_Output_;                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.FastMovingTargetBlink
struct UABP_HumanBiped_New_LookAtSG_C_FastMovingTargetBlink_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.SetLookAtParameters
struct UABP_HumanBiped_New_LookAtSG_C_SetLookAtParameters_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.InterpolateLookAtWeight
struct UABP_HumanBiped_New_LookAtSG_C_InterpolateLookAtWeight_Params
{
	bool                                               ShowDebug;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  HeadBaseTransform;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FTransform                                  PelvisBaseTransform;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              TargetWeight;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   AngleClampLimits;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	float                                              ReturnValue1;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.DetectFastTargetMovementChange?
struct UABP_HumanBiped_New_LookAtSG_C_DetectFastTargetMovementChange__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.GetDistanceToTarget
struct UABP_HumanBiped_New_LookAtSG_C_GetDistanceToTarget_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.FindLookAtController
struct UABP_HumanBiped_New_LookAtSG_C_FindLookAtController_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_6F2DBF11459022C6220C6D80D362A392
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_6F2DBF11459022C6220C6D80D362A392_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_129211544BAC357FA5C9A6A1F59A0C25
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_129211544BAC357FA5C9A6A1F59A0C25_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_28DFBAF0472BFEF61552B1BF1E080642
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_28DFBAF0472BFEF61552B1BF1E080642_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_AimOffsetLookAt_12101A5E446DE74BA4650FAEE60455C8
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_AimOffsetLookAt_12101A5E446DE74BA4650FAEE60455C8_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_BlendListByBool_3D6A6BAF4E50C4F2B9C966A1CCD5CF9B
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_BlendListByBool_3D6A6BAF4E50C4F2B9C966A1CCD5CF9B_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_99F7902C4528A83D21E6B5AA99ED700C
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_99F7902C4528A83D21E6B5AA99ED700C_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_A5825706429C735E237EF1A32464C5CC
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_A5825706429C735E237EF1A32464C5CC_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_966B39A74C40EED0CB35B1AD8B16A272
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_966B39A74C40EED0CB35B1AD8B16A272_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_AimOffsetLookAt_2B012AB94704FB1465F196B7D7C6707E
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_AimOffsetLookAt_2B012AB94704FB1465F196B7D7C6707E_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_01FED5AC49CAA2A088AA029B561944F8
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_01FED5AC49CAA2A088AA029B561944F8_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_ModifyBone_FFAED949400967A79962F18A73BB5DA1
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_ModifyBone_FFAED949400967A79962F18A73BB5DA1_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_TwoBoneIK_843922F5476797C65E19A5A3A49CF143
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_TwoBoneIK_843922F5476797C65E19A5A3A49CF143_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_TwoBoneIK_766C54F5496E356F1E8625B4A655D162
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_TwoBoneIK_766C54F5496E356F1E8625B4A655D162_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_AimOffsetLookAt_C51B6DF845C8E70181334DB5DA06918E
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_AimOffsetLookAt_C51B6DF845C8E70181334DB5DA06918E_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LayeredBoneBlend_5E0F073441651466EAE9D48AD9688BC3
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LayeredBoneBlend_5E0F073441651466EAE9D48AD9688BC3_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_3726B2CF4CFC2FE0B3655F909CF0706D
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_3726B2CF4CFC2FE0B3655F909CF0706D_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_BlendListByBool_F9B5DA454469D615783DF3BAE6E5DBC5
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_BlendListByBool_F9B5DA454469D615783DF3BAE6E5DBC5_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_BlendListByBool_AEF61F9B4F552184E796A099BFB611F3
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_BlendListByBool_AEF61F9B4F552184E796A099BFB611F3_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_DDBA1BDE4251A724C3AA36A1ECE809D3
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_DDBA1BDE4251A724C3AA36A1ECE809D3_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LayeredBoneBlend_6F6AF8154543C848C48BA38048D4AD13
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LayeredBoneBlend_6F6AF8154543C848C48BA38048D4AD13_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_SequencePlayer_D3AB73CD40A67E987E9C80885AB09C23
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_SequencePlayer_D3AB73CD40A67E987E9C80885AB09C23_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_SequencePlayer_20C213F84CAFFF66A07B0588D079B947
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_SequencePlayer_20C213F84CAFFF66A07B0588D079B947_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_SequencePlayer_0B2C5FF349E741B2B06F55960EC8EA08
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_SequencePlayer_0B2C5FF349E741B2B06F55960EC8EA08_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_TransitionResult_A0D36CE24780A6A6505E3BA431D434CF
struct UABP_HumanBiped_New_LookAtSG_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_TransitionResult_A0D36CE24780A6A6505E3BA431D434CF_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.BlueprintUpdateAnimation
struct UABP_HumanBiped_New_LookAtSG_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.AnimNotify_StopLookAt
struct UABP_HumanBiped_New_LookAtSG_C_AnimNotify_StopLookAt_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.AnimNotify_startLookAt
struct UABP_HumanBiped_New_LookAtSG_C_AnimNotify_startLookAt_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.BlueprintInitializeAnimation
struct UABP_HumanBiped_New_LookAtSG_C_BlueprintInitializeAnimation_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.Event Blink
struct UABP_HumanBiped_New_LookAtSG_C_Event_Blink_Params
{
};

// Function ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C.ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG
struct UABP_HumanBiped_New_LookAtSG_C_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
