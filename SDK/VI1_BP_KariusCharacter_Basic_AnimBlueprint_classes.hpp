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

// AnimBlueprintGeneratedClass BP_KariusCharacter_Basic_AnimBlueprint.BP_KariusCharacter_Basic_AnimBlueprint_C
// 0x0721 (0x0AE1 - 0x03C0)
class UBP_KariusCharacter_Basic_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_CFB7A76F4AC420264C049EA173EA7E81;// 0x03C8(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_EEC63EFA45CCD32BD5F6BD9943D0183A;// 0x0440(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D844FEE84B9D2F0671C3D4ABE1747910;// 0x0490(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BA26F9EC4C1417BD17448B8B98F1DBEC;      // 0x04E0(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A3B5A1A3475EDDE0509A4B9FBFC1DEA6;      // 0x0548(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_7A9D7A9B4FE724B04FD675854556DDBF;// 0x05B0(0x00A8)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5BD8D3A94DFC502676770BB219A35465;// 0x0658(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_Root_47C8E91E4765CB31D35000B1201F1087;      // 0x0690(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_65CFBE3E42B71028D47598B3035F7DE7;      // 0x06D8(0x0068)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_DistanceBodyAdjustment_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0740(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   __SUBINSTANCE_BlinkTimeRandomLimits_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0748(0x0008) (IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkMovementSensitivity_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0750(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseProceduralBlink_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0754(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadPivotSocketName_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0758(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseTargetSpeedBlink_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0760(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0761(0x0003) MISSED OFFSET
	float                                              __SUBINSTANCE_BlinkMovementSpeedScale_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0764(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkTimerSpeedScale_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0768(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x076C(0x0004) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadSocketName_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0770(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Distance_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0778(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink__Additive__FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0780(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink_FE4AADC74B5E77C5C8F8ADAF892F7AF6;  // 0x0788(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Eyes_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0790(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Body_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x0798(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_FE4AADC74B5E77C5C8F8ADAF892F7AF6;// 0x07A0(0x00C8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1A5E4F9A467A3D154BC75683A311A2EF;// 0x0868(0x00A8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4F79B87A488DF00DE382EFA475577F67;// 0x0910(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BABCA2674DF692BE1DEC3AA5D599265E;// 0x09E0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_08751B09427340BB6F5C8DA9B77251E4;// 0x0A30(0x0050)
	float                                              SequenceBlendInterp;                                      // 0x0A80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkMovementSpeedScale;                                  // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkTimerSpeedScale;                                     // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0A8C(0x0004) MISSED OFFSET
	class UBlendSpaceBase*                             AO_LookAt_Body;                                           // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Eyes;                                           // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AS_Blink;                                                 // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AS_Blink__Additive_;                                      // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Distance;                                       // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadSocketName;                                           // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseTargetSpeedBlink;                                      // 0x0AC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0AC1(0x0007) MISSED OFFSET
	struct FName                                       HeadPivotSocketName;                                      // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseProceduralBlink;                                       // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0AD1(0x0003) MISSED OFFSET
	float                                              BlinkMovementSensitivity;                                 // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BlinkTimeRandomLimits;                                    // 0x0AD8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               ValidSkeletalMesh;                                        // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_KariusCharacter_Basic_AnimBlueprint.BP_KariusCharacter_Basic_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_KariusCharacter_Basic_AnimBlueprint_AnimGraphNode_SubInstance_FE4AADC74B5E77C5C8F8ADAF892F7AF6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_KariusCharacter_Basic_AnimBlueprint_AnimGraphNode_BlendListByBool_4F79B87A488DF00DE382EFA475577F67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_KariusCharacter_Basic_AnimBlueprint_AnimGraphNode_TwoWayBlend_CFB7A76F4AC420264C049EA173EA7E81();
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings);
	void RequestSetSequencerBlendWeight(float Weight);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BP_KariusCharacter_Basic_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
