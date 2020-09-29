// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_PlayerHands.ABP_PlayerHands_C.IsHandSynced
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> Handler                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UABP_PlayerHands_C::IsHandSynced(const TScriptInterface<class UXLABInteractionHandler>& Handler, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.IsHandSynced");

	UABP_PlayerHands_C_IsHandSynced_Params params;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.UpdateElbowTransforms
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_PlayerHands_C::UpdateElbowTransforms()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.UpdateElbowTransforms");

	UABP_PlayerHands_C_UpdateElbowTransforms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.GetLocationAndRotationOffsetsBetweenBones
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Wrist                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocationOffset                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RotationOffset                 (Parm, OutParm, IsPlainOldData)

void UABP_PlayerHands_C::GetLocationAndRotationOffsetsBetweenBones(const struct FName& Wrist, const struct FName& Offset, float* LocationOffset, struct FRotator* RotationOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.GetLocationAndRotationOffsetsBetweenBones");

	UABP_PlayerHands_C_GetLocationAndRotationOffsetsBetweenBones_Params params;
	params.Wrist = Wrist;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationOffset != nullptr)
		*LocationOffset = params.LocationOffset;
	if (RotationOffset != nullptr)
		*RotationOffset = params.RotationOffset;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.PlayGripChangeMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReverseGrip                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_PlayerHands_C::PlayGripChangeMontage(EControllerHand Hand, bool ReverseGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.PlayGripChangeMontage");

	UABP_PlayerHands_C_PlayGripChangeMontage_Params params;
	params.Hand = Hand;
	params.ReverseGrip = ReverseGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.SetMotionControllerRefs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                LeftOrRight                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_WKNDMotionController_C* MotionController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_PlayerHands_C::SetMotionControllerRefs(EControllerHand LeftOrRight, class ABP_WKNDMotionController_C* MotionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.SetMotionControllerRefs");

	UABP_PlayerHands_C_SetMotionControllerRefs_Params params;
	params.LeftOrRight = LeftOrRight;
	params.MotionController = MotionController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.UpdateAnimVars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimVars               animData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UABP_PlayerHands_C::UpdateAnimVars(EControllerHand Hand, const struct FAnimVars& animData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.UpdateAnimVars");

	UABP_PlayerHands_C_UpdateAnimVars_Params params;
	params.Hand = Hand;
	params.animData = animData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.UpdateHand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOculusTouchData        TouchData                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPoseAlphaData          AwareData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UABP_PlayerHands_C::UpdateHand(EControllerHand Hand, const struct FOculusTouchData& TouchData, const struct FPoseAlphaData& AwareData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.UpdateHand");

	UABP_PlayerHands_C_UpdateHand_Params params;
	params.Hand = Hand;
	params.TouchData = TouchData;
	params.AwareData = AwareData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_30391FB341CF1D97E1C8228A6539E328
// (BlueprintEvent)

void UABP_PlayerHands_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_30391FB341CF1D97E1C8228A6539E328()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_30391FB341CF1D97E1C8228A6539E328");

	UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_30391FB341CF1D97E1C8228A6539E328_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.StartNewAnimatedMovement
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   NewType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_PlayerHands_C::StartNewAnimatedMovement(const struct FName& NewType, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.StartNewAnimatedMovement");

	UABP_PlayerHands_C_StartNewAnimatedMovement_Params params;
	params.NewType = NewType;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_350CDAF9454D8655F753678E539CB225
// (BlueprintEvent)

void UABP_PlayerHands_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_350CDAF9454D8655F753678E539CB225()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_350CDAF9454D8655F753678E539CB225");

	UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_350CDAF9454D8655F753678E539CB225_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_PlayerHands_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.BlueprintUpdateAnimation");

	UABP_PlayerHands_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.Debug Prints
// (BlueprintCallable, BlueprintEvent)

void UABP_PlayerHands_C::Debug_Prints()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.Debug Prints");

	UABP_PlayerHands_C_Debug_Prints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.Smooth Hand Rotations
// (BlueprintCallable, BlueprintEvent)

void UABP_PlayerHands_C::Smooth_Hand_Rotations()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.Smooth Hand Rotations");

	UABP_PlayerHands_C_Smooth_Hand_Rotations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_13BDC12546A3ACA766861CB12AE71DE1
// (BlueprintEvent)

void UABP_PlayerHands_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_13BDC12546A3ACA766861CB12AE71DE1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_13BDC12546A3ACA766861CB12AE71DE1");

	UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_13BDC12546A3ACA766861CB12AE71DE1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_PlayerHands_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.BlueprintInitializeAnimation");

	UABP_PlayerHands_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_1DD8C8E849058B35482902A37B03A14B
// (BlueprintEvent)

void UABP_PlayerHands_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_1DD8C8E849058B35482902A37B03A14B()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_1DD8C8E849058B35482902A37B03A14B");

	UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_1DD8C8E849058B35482902A37B03A14B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberStd_Right
// (BlueprintCallable, BlueprintEvent)

void UABP_PlayerHands_C::AnimNotify_SaberStd_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberStd_Right");

	UABP_PlayerHands_C_AnimNotify_SaberStd_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberRev_Right
// (BlueprintCallable, BlueprintEvent)

void UABP_PlayerHands_C::AnimNotify_SaberRev_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberRev_Right");

	UABP_PlayerHands_C_AnimNotify_SaberRev_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberStd_Left
// (BlueprintCallable, BlueprintEvent)

void UABP_PlayerHands_C::AnimNotify_SaberStd_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberStd_Left");

	UABP_PlayerHands_C_AnimNotify_SaberStd_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberRev_Left
// (BlueprintCallable, BlueprintEvent)

void UABP_PlayerHands_C::AnimNotify_SaberRev_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_SaberRev_Left");

	UABP_PlayerHands_C_AnimNotify_SaberRev_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_B90D6B4841E6CA2F21F12BBC75D699F5
// (BlueprintEvent)

void UABP_PlayerHands_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_B90D6B4841E6CA2F21F12BBC75D699F5()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_B90D6B4841E6CA2F21F12BBC75D699F5");

	UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_B90D6B4841E6CA2F21F12BBC75D699F5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.ViewGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_PlayerHands_C::ViewGate(float NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.ViewGate");

	UABP_PlayerHands_C_ViewGate_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_CanGrab_Right
// (BlueprintCallable, BlueprintEvent)

void UABP_PlayerHands_C::AnimNotify_CanGrab_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_CanGrab_Right");

	UABP_PlayerHands_C_AnimNotify_CanGrab_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_CanGrab_Left
// (BlueprintCallable, BlueprintEvent)

void UABP_PlayerHands_C::AnimNotify_CanGrab_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.AnimNotify_CanGrab_Left");

	UABP_PlayerHands_C_AnimNotify_CanGrab_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.SendRequest
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   NewRequest                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_PlayerHands_C::SendRequest(const struct FName& NewRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.SendRequest");

	UABP_PlayerHands_C_SendRequest_Params params;
	params.NewRequest = NewRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.StartNewSpecialMovementType
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FName>           NewTypes                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           OldTypes                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   Tag                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_PlayerHands_C::StartNewSpecialMovementType(TArray<struct FName> NewTypes, TArray<struct FName> OldTypes, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.StartNewSpecialMovementType");

	UABP_PlayerHands_C_StartNewSpecialMovementType_Params params;
	params.NewTypes = NewTypes;
	params.OldTypes = OldTypes;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_E8E5F4B84FB830CE5FEF4D8BE8BC8739
// (BlueprintEvent)

void UABP_PlayerHands_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_E8E5F4B84FB830CE5FEF4D8BE8BC8739()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_E8E5F4B84FB830CE5FEF4D8BE8BC8739");

	UABP_PlayerHands_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_E8E5F4B84FB830CE5FEF4D8BE8BC8739_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UABP_PlayerHands_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.BlueprintBeginPlay");

	UABP_PlayerHands_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateRightHandTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              TransformA                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UABP_PlayerHands_C::RequestUpdateRightHandTransform(const struct FTransform& TransformA)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateRightHandTransform");

	UABP_PlayerHands_C_RequestUpdateRightHandTransform_Params params;
	params.TransformA = TransformA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateLeftHandTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              TransformA                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UABP_PlayerHands_C::RequestUpdateLeftHandTransform(const struct FTransform& TransformA)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateLeftHandTransform");

	UABP_PlayerHands_C_RequestUpdateLeftHandTransform_Params params;
	params.TransformA = TransformA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestSetMotionControllerRefs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ABP_WKNDMotionController_C* MotionController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_PlayerHands_C::RequestSetMotionControllerRefs(EControllerHand Hand, class ABP_WKNDMotionController_C* MotionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.RequestSetMotionControllerRefs");

	UABP_PlayerHands_C_RequestSetMotionControllerRefs_Params params;
	params.Hand = Hand;
	params.MotionController = MotionController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestPlayGripChangeMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReverseGrip                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_PlayerHands_C::RequestPlayGripChangeMontage(EControllerHand Hand, bool ReverseGrip)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.RequestPlayGripChangeMontage");

	UABP_PlayerHands_C_RequestPlayGripChangeMontage_Params params;
	params.Hand = Hand;
	params.ReverseGrip = ReverseGrip;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateAnimVars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimVars               animData                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UABP_PlayerHands_C::RequestUpdateAnimVars(EControllerHand Hand, const struct FAnimVars& animData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateAnimVars");

	UABP_PlayerHands_C_RequestUpdateAnimVars_Params params;
	params.Hand = Hand;
	params.animData = animData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateHand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EControllerHand                Hand                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FOculusTouchData        TouchData                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPoseAlphaData          AwareData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UABP_PlayerHands_C::RequestUpdateHand(EControllerHand Hand, const struct FOculusTouchData& TouchData, const struct FPoseAlphaData& AwareData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.RequestUpdateHand");

	UABP_PlayerHands_C_RequestUpdateHand_Params params;
	params.Hand = Hand;
	params.TouchData = TouchData;
	params.AwareData = AwareData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_PlayerHands.ABP_PlayerHands_C.ExecuteUbergraph_ABP_PlayerHands
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_PlayerHands_C::ExecuteUbergraph_ABP_PlayerHands(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_PlayerHands.ABP_PlayerHands_C.ExecuteUbergraph_ABP_PlayerHands");

	UABP_PlayerHands_C_ExecuteUbergraph_ABP_PlayerHands_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
