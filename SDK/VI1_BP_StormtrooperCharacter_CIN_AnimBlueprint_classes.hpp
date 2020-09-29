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

// AnimBlueprintGeneratedClass BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C
// 0x0500 (0x08C0 - 0x03C0)
class UBP_StormtrooperCharacter_CIN_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D463934649BDC4AB6B2134BBD4D7E281;      // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_611253BE4D7D1ABC1BB8C09B423E8F98;// 0x0410(0x0038)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4D80968C4207DE1FD8E6B18CEA538441;// 0x0448(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3310DAE14783834B8C473FB4729F32C4;      // 0x0498(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_27C02C2E4B746AFFD4DCEC8D395616AB;// 0x0500(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_27BA047A44FC3EE214ED98BE9EB635A2;      // 0x05A8(0x0068)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_DistanceBodyAdjustment_F26D4A52462EE201910878BA0CB06D65;// 0x0610(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   __SUBINSTANCE_BlinkTimeRandomLimits_F26D4A52462EE201910878BA0CB06D65;// 0x0618(0x0008) (IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkMovementSensitivity_F26D4A52462EE201910878BA0CB06D65;// 0x0620(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseProceduralBlink_F26D4A52462EE201910878BA0CB06D65;// 0x0624(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0625(0x0003) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadPivotSocketName_F26D4A52462EE201910878BA0CB06D65;// 0x0628(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseTargetSpeedBlink_F26D4A52462EE201910878BA0CB06D65;// 0x0630(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0631(0x0003) MISSED OFFSET
	float                                              __SUBINSTANCE_BlinkMovementSpeedScale_F26D4A52462EE201910878BA0CB06D65;// 0x0634(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkTimerSpeedScale_F26D4A52462EE201910878BA0CB06D65;// 0x0638(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x063C(0x0004) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadSocketName_F26D4A52462EE201910878BA0CB06D65;// 0x0640(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Distance_F26D4A52462EE201910878BA0CB06D65;// 0x0648(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink__Additive__F26D4A52462EE201910878BA0CB06D65;// 0x0650(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink_F26D4A52462EE201910878BA0CB06D65;  // 0x0658(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Eyes_F26D4A52462EE201910878BA0CB06D65;// 0x0660(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Body_F26D4A52462EE201910878BA0CB06D65;// 0x0668(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_F26D4A52462EE201910878BA0CB06D65;// 0x0670(0x00C8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_23157F514F8EF140A9B2409DEEF4D85B;// 0x0738(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_420366A14D5B9A28C70B96A225720652;      // 0x07B0(0x0068)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CB1AD0B048A8122563768286A8700D5A;// 0x0818(0x0050)
	float                                              SequenceBlendInterp;                                      // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BlinkTimeRandomLimits;                                    // 0x086C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkMovementSensitivity;                                 // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Distance;                                       // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Eyes;                                           // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Body;                                           // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkTimerSpeedScale;                                     // 0x0890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkMovementSpeedScale;                                  // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AS_Blink__Additive_;                                      // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AS_Blink;                                                 // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseTargetSpeedBlink;                                      // 0x08A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseProceduralBlink;                                       // 0x08A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x08AA(0x0006) MISSED OFFSET
	struct FName                                       HeadSocketName;                                           // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadPivotSocketName;                                      // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_StormtrooperCharacter_CIN_AnimBlueprint.BP_StormtrooperCharacter_CIN_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint_AnimGraphNode_SubInstance_F26D4A52462EE201910878BA0CB06D65();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint_AnimGraphNode_TwoWayBlend_23157F514F8EF140A9B2409DEEF4D85B();
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings);
	void RequestSetSequencerBlendWeight(float Weight);
	void AnimNotify_FireBlaster();
	void ExecuteUbergraph_BP_StormtrooperCharacter_CIN_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
