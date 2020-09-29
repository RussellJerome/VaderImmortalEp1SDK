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

// AnimBlueprintGeneratedClass BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C
// 0x0949 (0x0D09 - 0x03C0)
class UBP_VaderCharacter_Basic_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DBB5894745F7C6B58DD6839F914E6C3A;// 0x03C8(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0AAF18BB461AAE99D78A6A9D5CAB650D;      // 0x0418(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E960566C41EE5F463CC66193D797E3CE;// 0x0480(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EAF65C8140963C9E84088EB1FC1D3200;      // 0x0528(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_82E8292E4175CE3509D786AE63490A83;      // 0x0590(0x0068)
	bool                                               __SUBINSTANCE_UseSantaCruzAssetAlternatePath_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x05F8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_DistanceBodyAdjustment_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0600(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   __SUBINSTANCE_BlinkTimeRandomLimits_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0608(0x0008) (IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkMovementSensitivity_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0610(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseProceduralBlink_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0614(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0615(0x0003) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadPivotSocketName_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0618(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseTargetSpeedBlink_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0620(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0621(0x0003) MISSED OFFSET
	float                                              __SUBINSTANCE_BlinkMovementSpeedScale_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0624(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkTimerSpeedScale_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0628(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x062C(0x0004) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadSocketName_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0630(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Distance_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0638(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink__Additive__09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0640(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink_09A7E2094DB5E05D7C0EF1AD9956830C;  // 0x0648(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Eyes_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0650(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Body_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0658(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_09A7E2094DB5E05D7C0EF1AD9956830C;// 0x0660(0x00C8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_95A55AEF403FD92B090A8F8D425E75A5;// 0x0728(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0405235F4167CE2DC65F73ABBA4A54B4;// 0x0770(0x0050)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_C6894AAC436321807C84C983A180759E;// 0x07C0(0x00E8)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_E3BB84D94483ACD2C4C2B6A95D6496C9;// 0x08A8(0x0078)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_80A15F874AA9E37E98CCC1BADFC74BF7;// 0x0920(0x0048)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_CACCE86445A97D322C1915A518D84C05;// 0x0968(0x00E8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_A14557D94DAE1D28372AB291D01A2140;// 0x0A50(0x00E8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2BD521064042FEEC5035E4932E620EA0;// 0x0B38(0x00E8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C0F201F5421228EC1335BD94E47982C3;// 0x0C20(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_Root_F81855B044200DCBE668D7AE94D5361D;      // 0x0C58(0x0048)
	float                                              SequenceBlendInterp;                                      // 0x0CA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtCurrentWeight;                                      // 0x0CA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtYaw;                                                // 0x0CA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtPitch;                                              // 0x0CAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Body;                                           // 0x0CB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BlinkTimeRandomLimits;                                    // 0x0CB8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkMovementSensitivity;                                 // 0x0CC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseProceduralBlink;                                       // 0x0CC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0CC5(0x0003) MISSED OFFSET
	struct FName                                       HeadPivotSocketName;                                      // 0x0CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseTargetSpeedBlink;                                      // 0x0CD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0CD1(0x0003) MISSED OFFSET
	float                                              BlinkMovementSpeedScale;                                  // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkTimerSpeedScale;                                     // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0CDC(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AS_Blink;                                                 // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Eyes;                                           // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AS_Blink__Additive_;                                      // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Distance;                                       // 0x0CF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadSocketName;                                           // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SantaCruzAsset;                                           // 0x0D08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_VaderCharacter_Basic_AnimBlueprint.BP_VaderCharacter_Basic_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint_AnimGraphNode_TwoWayBlend_E3BB84D94483ACD2C4C2B6A95D6496C9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint_AnimGraphNode_SubInstance_09A7E2094DB5E05D7C0EF1AD9956830C();
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings);
	void RequestSetSequencerBlendWeight(float Weight);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_BP_VaderCharacter_Basic_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
