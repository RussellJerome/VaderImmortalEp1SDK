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

// AnimBlueprintGeneratedClass SK_Mustafarian_Skeleton_AnimBlueprint.SK_Mustafarian_Skeleton_AnimBlueprint_C
// 0x0D38 (0x10F8 - 0x03C0)
class USK_Mustafarian_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CA3CBA964C7B667297C19C92CFADE340;      // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2336323E499682C00C0773B4920653C6;// 0x0410(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_080A5A774A0D980DF3B658959D65E69B;// 0x0448(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0EDEED9246C8BB146F4ED0BEDEA236E1;// 0x04C0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_22DBF3A546C00533D577C29C47F2C858;// 0x0510(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D61744A244DB093425422592D6B12A09;      // 0x0560(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0A343E534E10D3C213FF82812B500907;      // 0x05C8(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7E5AC1824D13E5CA246273AAA25A5BEF;// 0x0630(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1BC75FA24A61636F81464DBB34487667;      // 0x06D8(0x0068)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_DistanceBodyAdjustment_81677B874AF4AD99E23BB6B08E925F5D;// 0x0740(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   __SUBINSTANCE_BlinkTimeRandomLimits_81677B874AF4AD99E23BB6B08E925F5D;// 0x0748(0x0008) (IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkMovementSensitivity_81677B874AF4AD99E23BB6B08E925F5D;// 0x0750(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseProceduralBlink_81677B874AF4AD99E23BB6B08E925F5D;// 0x0754(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadPivotSocketName_81677B874AF4AD99E23BB6B08E925F5D;// 0x0758(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseTargetSpeedBlink_81677B874AF4AD99E23BB6B08E925F5D;// 0x0760(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0761(0x0003) MISSED OFFSET
	float                                              __SUBINSTANCE_BlinkMovementSpeedScale_81677B874AF4AD99E23BB6B08E925F5D;// 0x0764(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkTimerSpeedScale_81677B874AF4AD99E23BB6B08E925F5D;// 0x0768(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x076C(0x0004) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadSocketName_81677B874AF4AD99E23BB6B08E925F5D;// 0x0770(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Distance_81677B874AF4AD99E23BB6B08E925F5D;// 0x0778(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink__Additive__81677B874AF4AD99E23BB6B08E925F5D;// 0x0780(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink_81677B874AF4AD99E23BB6B08E925F5D;  // 0x0788(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Eyes_81677B874AF4AD99E23BB6B08E925F5D;// 0x0790(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Body_81677B874AF4AD99E23BB6B08E925F5D;// 0x0798(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_81677B874AF4AD99E23BB6B08E925F5D;// 0x07A0(0x00C8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DF5813544C7568B1433C6AA995023628;// 0x0868(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_3E2A05F34EB1941BB697558DDE1FD76D;// 0x08B0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_08BCEF7F4BC5A15527A6F08449292063;// 0x0B30(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9E61F7454558C82DBE2B5C9BE39EE166;// 0x0DB0(0x0280)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BF3AC16841A28F464429D681A8A0A2F3;// 0x1030(0x0048)
	float                                              SequenceBlendInterp;                                      // 0x1078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x107C(0x0004) MISSED OFFSET
	class ABP_MustafarianCharacter_Basic_C*            BP_MustafarianCharacter_Basic;                            // 0x1080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Body;                                           // 0x1088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Eyes;                                           // 0x1090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AS_Blink;                                                 // 0x1098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AS_Blink__Additive_;                                      // 0x10A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Distance;                                       // 0x10A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadSocketName;                                           // 0x10B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkTimerSpeedScale;                                     // 0x10B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkMovementSpeedScale;                                  // 0x10BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseTargetSpeedBlink;                                      // 0x10C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x10C1(0x0007) MISSED OFFSET
	struct FName                                       HeadPivotSocketName;                                      // 0x10C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseProceduralBlink;                                       // 0x10D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x10D1(0x0003) MISSED OFFSET
	float                                              BlinkMovementSensitivity;                                 // 0x10D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BlinkTimeRandomLimits;                                    // 0x10D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PelvisLocation;                                           // 0x10E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PelvisVelocity;                                           // 0x10EC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Mustafarian_Skeleton_AnimBlueprint.SK_Mustafarian_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Mustafarian_Skeleton_AnimBlueprint_AnimGraphNode_SubInstance_81677B874AF4AD99E23BB6B08E925F5D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Mustafarian_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_3E2A05F34EB1941BB697558DDE1FD76D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Mustafarian_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_08BCEF7F4BC5A15527A6F08449292063();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Mustafarian_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_9E61F7454558C82DBE2B5C9BE39EE166();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Mustafarian_Skeleton_AnimBlueprint_AnimGraphNode_TwoWayBlend_080A5A774A0D980DF3B658959D65E69B();
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_FireBlaster();
	void SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings);
	void RequestSetSequencerBlendWeight(float Weight);
	void ExecuteUbergraph_SK_Mustafarian_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
