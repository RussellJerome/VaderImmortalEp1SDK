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

// AnimBlueprintGeneratedClass SK_Priestess_Skeleton_AnimBlueprint.SK_Priestess_Skeleton_AnimBlueprint_C
// 0x1EAC (0x226C - 0x03C0)
class USK_Priestess_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DA1D81BF460EDBE0210FCA9B9DA1C504;      // 0x03C8(0x0048)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_57748D6A42FC129B1B12A19022704890;// 0x0410(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0D3837E940CCA383F39E8E99C8F4A05A;// 0x0488(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_17386B8E4DEBCE383902DC809C37E21B;// 0x04D8(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DAAC8E3B43857DD852E313BFCC7C1C20;      // 0x0528(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D6926E55413AD0D5AF7A89BAB75798C7;      // 0x0590(0x0068)
	struct FVector2D                                   __SUBINSTANCE_BlinkTimeRandomLimits_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x05F8(0x0008) (IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkMovementSensitivity_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0600(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseProceduralBlink_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0604(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0605(0x0003) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadPivotSocketName_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0608(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               __SUBINSTANCE_UseTargetSpeedBlink_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0610(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0611(0x0003) MISSED OFFSET
	float                                              __SUBINSTANCE_BlinkMovementSpeedScale_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0614(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              __SUBINSTANCE_BlinkTimerSpeedScale_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0618(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x061C(0x0004) MISSED OFFSET
	struct FName                                       __SUBINSTANCE_HeadSocketName_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0620(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Distance_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0628(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink__Additive__9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0630(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           __SUBINSTANCE_AS_Blink_9CDC6B8243D15EA55D8A3195C83E2B15;  // 0x0638(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Eyes_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0640(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             __SUBINSTANCE_AO_LookAt_Body_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0648(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FAnimNode_SubInstance                       AnimGraphNode_SubInstance_9CDC6B8243D15EA55D8A3195C83E2B15;// 0x0650(0x00C8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_51FBD09B46148D6C998DAAB5A91CDB37;// 0x0718(0x0280)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_70F658E84F8D4C56930540892AC2FF19;// 0x0998(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_500CE8DE4D73C14D1026A49F56CDD060;// 0x09E0(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_40E954A04AA21EFC3CBFAB8BF4D01405;// 0x0A28(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_746C5F8A45EB17D754F1CFB2D68DD581;// 0x0CA8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_56A7368545E19B491AD770B23365AF37;// 0x0F28(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9781F34E4C42E501050CADBD8418BD90;// 0x11A8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A497A0B74317621C2EC3798E457E0A43;// 0x1428(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_8058D74C40A0182D9E3188AC5DC01543;// 0x16A8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D4ED2B9343D366069B6882B1B578430C;// 0x1928(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_A3FBF1D240BA51B43DB8E2BE276A789F;// 0x1BA8(0x0280)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6BF4924840AA659A6758D7B108548B91;// 0x1E28(0x00B8)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_FE28C09A4C218D718E8AC292C67CC238; // 0x1EE0(0x01C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5D3B9E084760765486319C90AB71C93D;// 0x20A0(0x0038)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B3C4C5184ED1A7DE69889AA917FEDFE8;// 0x20D8(0x00A8)
	float                                              SequenceBlendInterp;                                      // 0x2180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x2184(0x0004) MISSED OFFSET
	class UBlendSpaceBase*                             AO_LookAt_Body;                                           // 0x2188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Eyes;                                           // 0x2190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AS_Blink;                                                 // 0x2198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           AS_Blink__Additive_;                                      // 0x21A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Distance;                                       // 0x21A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HeadSocketName;                                           // 0x21B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkTimerSpeedScale;                                     // 0x21B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkMovementSpeedScale;                                  // 0x21BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseTargetSpeedBlink;                                      // 0x21C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x21C1(0x0007) MISSED OFFSET
	struct FName                                       HeadPivotSocketName;                                      // 0x21C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseProceduralBlink;                                       // 0x21D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x21D1(0x0003) MISSED OFFSET
	float                                              BlinkMovementSensitivity;                                 // 0x21D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BlinkTimeRandomLimits;                                    // 0x21D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PelvisVelocity;                                           // 0x21E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PelvisLocation;                                           // 0x21EC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AnimDynamicsWeight;                                       // 0x21F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RArmMaxDistance;                                          // 0x21FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerCameraLocation;                                     // 0x2200(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RHandOrientation;                                         // 0x220C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RHandLocation;                                            // 0x2218(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x2224(0x0004) MISSED OFFSET
	struct FName                                       RArmBoneName;                                             // 0x2228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RHandIkWeight;                                            // 0x2230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x2234(0x0004) MISSED OFFSET
	struct FName                                       RHandBoneName;                                            // 0x2238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x2240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FName                                       PelvisBoneName;                                           // 0x2248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTimeX;                                               // 0x2250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PelvisPhysicalVelocity;                                   // 0x2254(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              UpperBody_AnimDynamicsWeight;                             // 0x2260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrontSkirt_AnimDynamicsWeight;                            // 0x2264(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Cape_AnimDynamicsWeight;                                  // 0x2268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Priestess_Skeleton_AnimBlueprint.SK_Priestess_Skeleton_AnimBlueprint_C");
		return ptr;
	}


	void SetAnimDynamicsWeights();
	void FindInitialRightArmLength(class USceneComponent* SkeletalMesh);
	void SetPelvisPhysicalVelocity();
	void RHandIk();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_9781F34E4C42E501050CADBD8418BD90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_A497A0B74317621C2EC3798E457E0A43();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_8058D74C40A0182D9E3188AC5DC01543();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_D4ED2B9343D366069B6882B1B578430C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_A3FBF1D240BA51B43DB8E2BE276A789F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_6BF4924840AA659A6758D7B108548B91();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_TwoBoneIK_FE28C09A4C218D718E8AC292C67CC238();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_51FBD09B46148D6C998DAAB5A91CDB37();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_SubInstance_9CDC6B8243D15EA55D8A3195C83E2B15();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_TwoWayBlend_57748D6A42FC129B1B12A19022704890();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_56A7368545E19B491AD770B23365AF37();
	void RequestSetSequencerBlendWeight(float Weight);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_746C5F8A45EB17D754F1CFB2D68DD581();
	void SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint_AnimGraphNode_AnimDynamics_40E954A04AA21EFC3CBFAB8BF4D01405();
	void ExecuteUbergraph_SK_Priestess_Skeleton_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
