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

// AnimBlueprintGeneratedClass ABP_PlayerHands.ABP_PlayerHands_C
// 0x09D8 (0x0E08 - 0x0430)
class UABP_PlayerHands_C : public UWKNDAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E81BEF644F02B3505822C4A778884590;      // 0x0438(0x0048)
	float                                              __SUBINSTANCE_ExtraAnimationScrub_30391FB341CF1D97E1C8228A6539E328;// 0x0480(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              __SUBINSTANCE_AwareThroughA_30391FB341CF1D97E1C8228A6539E328;// 0x0484(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       __SUBINSTANCE_ContextNext_30391FB341CF1D97E1C8228A6539E328;// 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      __SUBINSTANCE_AnimSet_30391FB341CF1D97E1C8228A6539E328;   // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	EControllerHand                                    __SUBINSTANCE_Handed_30391FB341CF1D97E1C8228A6539E328;    // 0x0498(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	struct FOculusTouchData                            __SUBINSTANCE_TouchData_30391FB341CF1D97E1C8228A6539E328; // 0x049C(0x0010) (IsPlainOldData)
	bool                                               __SUBINSTANCE_debug_30391FB341CF1D97E1C8228A6539E328;     // 0x04AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04AD(0x0003) MISSED OFFSET
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_30391FB341CF1D97E1C8228A6539E328;// 0x04B0(0x00C8)
	float                                              __SUBINSTANCE_ExtraAnimationScrub_E8E5F4B84FB830CE5FEF4D8BE8BC8739;// 0x0578(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              __SUBINSTANCE_AwareThroughA_E8E5F4B84FB830CE5FEF4D8BE8BC8739;// 0x057C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       __SUBINSTANCE_ContextNext_E8E5F4B84FB830CE5FEF4D8BE8BC8739;// 0x0580(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      __SUBINSTANCE_AnimSet_E8E5F4B84FB830CE5FEF4D8BE8BC8739;   // 0x0588(0x0008) (ZeroConstructor, IsPlainOldData)
	EControllerHand                                    __SUBINSTANCE_Handed_E8E5F4B84FB830CE5FEF4D8BE8BC8739;    // 0x0590(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0591(0x0003) MISSED OFFSET
	struct FOculusTouchData                            __SUBINSTANCE_TouchData_E8E5F4B84FB830CE5FEF4D8BE8BC8739; // 0x0594(0x0010) (IsPlainOldData)
	bool                                               __SUBINSTANCE_debug_E8E5F4B84FB830CE5FEF4D8BE8BC8739;     // 0x05A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x05A5(0x0003) MISSED OFFSET
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_E8E5F4B84FB830CE5FEF4D8BE8BC8739;// 0x05A8(0x00C8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_2AEC93C247F15C875BC5CC94C32DD2FB;// 0x0670(0x00E0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F8925CD04CE2E36558E3C2B595CF1E84;// 0x0750(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8654D5A24E3A93904A31A48CEF16849F;// 0x0798(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_30C6B1F34D5792276F9E10B6B299F194;      // 0x07E0(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CC6ACFE14B360362C16B9BAB6B43119F;      // 0x0848(0x0068)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B90D6B4841E6CA2F21F12BBC75D699F5;// 0x08B0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1DD8C8E849058B35482902A37B03A14B;// 0x0968(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13BDC12546A3ACA766861CB12AE71DE1;// 0x0A20(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_350CDAF9454D8655F753678E539CB225;// 0x0AD8(0x00B8)
	struct FTransform                                  Hand_Left;                                                // 0x0B90(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  Hand_Right;                                               // 0x0BC0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0BF1(0x0003) MISSED OFFSET
	struct FOculusTouchData                            OculusData_Left;                                          // 0x0BF4(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FOculusTouchData                            OculusData_Right;                                         // 0x0C04(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FAnimVars                                   AnimVars_Left;                                            // 0x0C14(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAnimVars                                   AnimVars_Right;                                           // 0x0C38(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Delta;                                                    // 0x0C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    R_Rot;                                                    // 0x0C60(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RotInterpSpeed;                                           // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    L_Rot;                                                    // 0x0C70(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SaberRotModifier;                                         // 0x0C7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  MotionController_Left;                                    // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  MotionController_Right;                                   // 0x0C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug_CapLimit;                                           // 0x0C90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0C91(0x0003) MISSED OFFSET
	float                                              FrustrumCol;                                              // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAwareBlend                                 AwareBlend_Left;                                          // 0x0C98(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FAwareBlend                                 AwareBlend_Right;                                         // 0x0CC0(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       Context_Left;                                             // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Context_Right;                                            // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftLocationOffset;                                       // 0x0CF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LeftRotationOffset;                                       // 0x0CFC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RightLocationOffset;                                      // 0x0D08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RightRotationOffset;                                      // 0x0D0C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0D18(0x0008) MISSED OFFSET
	struct FTransform                                  RelativeLeftElbowTransform;                               // 0x0D20(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RelativeRightElbowTransform;                              // 0x0D50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              RightWristLerpStartTime;                                  // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftWristLerpStartTime;                                   // 0x0D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RightHandSynced;                                          // 0x0D88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LeftHandSynced;                                           // 0x0D89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x0D8A(0x0002) MISSED OFFSET
	float                                              WristBlendTime;                                           // 0x0D8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PreviousRelativeLeftElbowTransform;                       // 0x0D90(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PreviousRelativeRightElbowTransform;                      // 0x0DC0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ContextDefaultName;                                       // 0x0DF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwareLerp_Left;                                           // 0x0DF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwareLerp_Right;                                          // 0x0DFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraAnimationScrub_Left;                                 // 0x0E00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraAnimationScrub_Right;                                // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PlayerHands.ABP_PlayerHands_C");
		return ptr;
	}


	void IsHandSynced(const TScriptInterface<class UXLABInteractionHandler>& Handler, bool* Result);
	void UpdateElbowTransforms();
	void GetLocationAndRotationOffsetsBetweenBones(const struct FName& Wrist, const struct FName& Offset, float* LocationOffset, struct FRotator* RotationOffset);
	void PlayGripChangeMontage(EControllerHand Hand, bool ReverseGrip);
	void SetMotionControllerRefs(EControllerHand LeftOrRight, class ABP_WKNDMotionController_C* MotionController);
	void UpdateAnimVars(EControllerHand Hand, const struct FAnimVars& animData);
	void UpdateHand(EControllerHand Hand, const struct FOculusTouchData& TouchData, const struct FPoseAlphaData& AwareData);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_30391FB341CF1D97E1C8228A6539E328();
	void StartNewAnimatedMovement(const struct FName& NewType, float StartTime);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_350CDAF9454D8655F753678E539CB225();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void Debug_Prints();
	void Smooth_Hand_Rotations();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_13BDC12546A3ACA766861CB12AE71DE1();
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_1DD8C8E849058B35482902A37B03A14B();
	void AnimNotify_SaberStd_Right();
	void AnimNotify_SaberRev_Right();
	void AnimNotify_SaberStd_Left();
	void AnimNotify_SaberRev_Left();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_ModifyBone_B90D6B4841E6CA2F21F12BBC75D699F5();
	void ViewGate(float NewParam);
	void AnimNotify_CanGrab_Right();
	void AnimNotify_CanGrab_Left();
	void SendRequest(const struct FName& NewRequest);
	void StartNewSpecialMovementType(TArray<struct FName> NewTypes, TArray<struct FName> OldTypes, const struct FName& Tag);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHands_AnimGraphNode_SubInstance_E8E5F4B84FB830CE5FEF4D8BE8BC8739();
	void BlueprintBeginPlay();
	void RequestUpdateRightHandTransform(const struct FTransform& TransformA);
	void RequestUpdateLeftHandTransform(const struct FTransform& TransformA);
	void RequestSetMotionControllerRefs(EControllerHand Hand, class ABP_WKNDMotionController_C* MotionController);
	void RequestPlayGripChangeMontage(EControllerHand Hand, bool ReverseGrip);
	void RequestUpdateAnimVars(EControllerHand Hand, const struct FAnimVars& animData);
	void RequestUpdateHand(EControllerHand Hand, const struct FOculusTouchData& TouchData, const struct FPoseAlphaData& AwareData);
	void ExecuteUbergraph_ABP_PlayerHands(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
