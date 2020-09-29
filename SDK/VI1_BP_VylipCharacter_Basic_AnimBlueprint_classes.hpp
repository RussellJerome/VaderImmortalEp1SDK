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

// AnimBlueprintGeneratedClass BP_VylipCharacter_Basic_AnimBlueprint.BP_VylipCharacter_Basic_AnimBlueprint_C
// 0x14AC (0x186C - 0x03C0)
class UBP_VylipCharacter_Basic_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_185557F940CDD9178329028BF85AC613;      // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_54B08B744EBED8662D4D65B288731FB0;// 0x0410(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_3AC0B7A74B9AF1ED786E8C87095A31DC;// 0x0448(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CB5895554C7348CC247BF3A85E14B712;// 0x04C0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F0792D8A443DCCAB572E0E825511BF18;// 0x0510(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E222F57E47189117483F1896BBCCD0B0;      // 0x0560(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AD49C1FB455041CBEA8C1C84EF2F1B22;      // 0x05C8(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E0709DB543E23C0D800A77A885185203;// 0x0630(0x00A8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_092241CB416D3FE1E7202386DB3F4FD9;      // 0x06D8(0x0068)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_DistanceBodyAdjustment_000493514DEC5C89D0BF368905D92DBC;// 0x0740(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   __SUBINSTANCE_BlinkTimeRandomLimits_000493514DEC5C89D0BF368905D92DBC;// 0x0748(0x0008) (IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkMovementSensitivity_000493514DEC5C89D0BF368905D92DBC;// 0x0750(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseProceduralBlink_000493514DEC5C89D0BF368905D92DBC;// 0x0754(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0755(0x0003) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadPivotSocketName_000493514DEC5C89D0BF368905D92DBC;// 0x0758(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseTargetSpeedBlink_000493514DEC5C89D0BF368905D92DBC;// 0x0760(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0761(0x0003) MISSED OFFSET
	float                                              __SUBINSTANCE_BlinkMovementSpeedScale_000493514DEC5C89D0BF368905D92DBC;// 0x0764(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkTimerSpeedScale_000493514DEC5C89D0BF368905D92DBC;// 0x0768(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x076C(0x0004) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadSocketName_000493514DEC5C89D0BF368905D92DBC;// 0x0770(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Distance_000493514DEC5C89D0BF368905D92DBC;// 0x0778(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink__Additive__000493514DEC5C89D0BF368905D92DBC;// 0x0780(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink_000493514DEC5C89D0BF368905D92DBC;  // 0x0788(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Eyes_000493514DEC5C89D0BF368905D92DBC;// 0x0790(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Body_000493514DEC5C89D0BF368905D92DBC;// 0x0798(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_000493514DEC5C89D0BF368905D92DBC;// 0x07A0(0x00C8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BA5118F7441E51CFC8271F819E0EBC30;// 0x0868(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_633A488748ABE0C31B84B08F7F943FD0;// 0x08B0(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_1B502BC04EA19DF96192ABB056706918;// 0x08F8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9A2AD2BC40AFB6CC3C66ACA9263D6CCF;// 0x0B78(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7B0404114FD64A7FE1B980B174D25B76;// 0x0DF8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_2C70AA0249C6F8532DE8BA8F35F4933C;// 0x1078(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_EC02B5B640C8E6C869473BAC23ADCCB9;// 0x12F8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9EBC3C1845EE6A736C11EFB34E431093;// 0x1578(0x0280)
	float                                              SequenceBlendInterp;                                      // 0x17F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x17FC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFireBlasterAnimNotify;                                  // 0x1800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               UseProceduralBlink;                                       // 0x1810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseTargetSpeedBlink;                                      // 0x1811(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x1812(0x0006) MISSED OFFSET
	class UAnimSequenceBase*                           AS_Blink;                                                 // 0x1818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AS_Blink__Additive_;                                      // 0x1820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkMovementSpeedScale;                                  // 0x1828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkTimerSpeedScale;                                     // 0x182C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Body;                                           // 0x1830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Eyes;                                           // 0x1838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Distance;                                       // 0x1840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadSocketName;                                           // 0x1848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadPivotSocketName;                                      // 0x1850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkMovementSensitivity;                                 // 0x1858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BlinkTimeRandomLimits;                                    // 0x185C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTimeX;                                               // 0x1864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimDynamicsWeight;                                       // 0x1868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_VylipCharacter_Basic_AnimBlueprint.BP_VylipCharacter_Basic_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VylipCharacter_Basic_AnimBlueprint_AnimGraphNode_AnimDynamics_9A2AD2BC40AFB6CC3C66ACA9263D6CCF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VylipCharacter_Basic_AnimBlueprint_AnimGraphNode_AnimDynamics_7B0404114FD64A7FE1B980B174D25B76();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VylipCharacter_Basic_AnimBlueprint_AnimGraphNode_AnimDynamics_2C70AA0249C6F8532DE8BA8F35F4933C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VylipCharacter_Basic_AnimBlueprint_AnimGraphNode_AnimDynamics_EC02B5B640C8E6C869473BAC23ADCCB9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VylipCharacter_Basic_AnimBlueprint_AnimGraphNode_AnimDynamics_9EBC3C1845EE6A736C11EFB34E431093();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VylipCharacter_Basic_AnimBlueprint_AnimGraphNode_AnimDynamics_1B502BC04EA19DF96192ABB056706918();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VylipCharacter_Basic_AnimBlueprint_AnimGraphNode_TwoWayBlend_3AC0B7A74B9AF1ED786E8C87095A31DC();
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_VylipCharacter_Basic_AnimBlueprint_AnimGraphNode_SubInstance_000493514DEC5C89D0BF368905D92DBC();
	void AnimNotify_FireBlaster();
	void SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings);
	void RequestSetSequencerBlendWeight(float Weight);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BP_VylipCharacter_Basic_AnimBlueprint(int EntryPoint);
	void OnFireBlasterAnimNotify__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
