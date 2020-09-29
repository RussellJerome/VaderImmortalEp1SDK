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

// AnimBlueprintGeneratedClass ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C
// 0x29DC (0x2D9C - 0x03C0)
class UABP_HumanBiped_New_LookAtSG_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E692DB9A4E86C8A2F8F9EF9EFF612FE2;// 0x03C8(0x00A8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A0D36CE24780A6A6505E3BA431D434CF;// 0x0470(0x0080)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5FE05BEC457875570606BE977AB053C4;// 0x04F0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FEEEADFB4A594D1B153239A30945C0F6;// 0x0540(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_F0DE01E24457AF5BEB937FBC4CD9EA21;// 0x0588(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0B2C5FF349E741B2B06F55960EC8EA08;// 0x05D8(0x0070)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_C6812185487C64182292C09EE53C05DC;// 0x0648(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_4176EED84ED8E339CBE687871BE88804;// 0x0728(0x00E0)
	struct FAnimNode_ApplyMeshSpaceAdditive            AnimGraphNode_ApplyMeshSpaceAdditive_9CFEE9814D51184EC1F4FA9D50026131;// 0x0808(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_20C213F84CAFFF66A07B0588D079B947;// 0x0880(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D3AB73CD40A67E987E9C80885AB09C23;// 0x08F0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_91198EFE40F4AC220DA91991B8273398;// 0x0960(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_8154E8A143B29BEB732CE7B2E3C6CA7D;// 0x09A8(0x00D8)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_DDBA1BDE4251A724C3AA36A1ECE809D3;// 0x0A80(0x0158)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AEF61F9B4F552184E796A099BFB611F3;// 0x0BD8(0x00D0)
	struct FAnimNode_SubInput                          AnimGraphNode_SubInput_B932EC1F4DEF007F4E13F687CC4B211A;  // 0x0CA8(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_5E0F073441651466EAE9D48AD9688BC3;// 0x0D10(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_9071045A4BE36BF9FDBE32854A9E6396;// 0x0DF0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3A9CD94D4F991D5F6BDA6CB1EEEC9FD2;// 0x0E98(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_956BC5FF4B3F5E9C5F9407A9AAA954CB;// 0x0EE8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_898AAC374748369E712B4BB7BA20F21E;// 0x0F90(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CDC75BD847B275850346BE88F8959327;// 0x0FE0(0x0050)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_6F6AF8154543C848C48BA38048D4AD13;// 0x1030(0x00E0)
	struct FAnimationSaveBoneTransformNode             AnimationSaveBoneTransformGraphNode_C45B98FC4DC2597C3D4E97BC19A4570E;// 0x1110(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F9B5DA454469D615783DF3BAE6E5DBC5;// 0x1168(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_064F2A494EA8ADDA4B4A978927A3F7BA;// 0x1238(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B783DC284DAB1AEEFEDA9BA5E9EA95F5;// 0x1288(0x0050)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_3726B2CF4CFC2FE0B3655F909CF0706D;// 0x12D8(0x0158)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_77E30DBC46E70244D4E1FD95C1440359;// 0x1430(0x0050)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_6F2DBF11459022C6220C6D80D362A392;    // 0x1480(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_129211544BAC357FA5C9A6A1F59A0C25;    // 0x1620(0x01A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_848D3F6B4141F011ED009FB94FCB19D1;// 0x17C0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_57BC8D0349BAFB6918CF4AB860C7C90C;// 0x1808(0x0048)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_28DFBAF0472BFEF61552B1BF1E080642;// 0x1850(0x0158)
	unsigned char                                      UnknownData00[0x8];                                       // 0x19A8(0x0008) MISSED OFFSET
	struct FAnimNode_AimOffsetLookAt                   AnimGraphNode_AimOffsetLookAt_12101A5E446DE74BA4650FAEE60455C8;// 0x19B0(0x0210)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3D6A6BAF4E50C4F2B9C966A1CCD5CF9B;// 0x1BC0(0x00D0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_049C2FA540A7BC22FFA1818738F0AD99;// 0x1C90(0x0050)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_99F7902C4528A83D21E6B5AA99ED700C;// 0x1CE0(0x0158)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1E38(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A5825706429C735E237EF1A32464C5CC;    // 0x1E40(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_966B39A74C40EED0CB35B1AD8B16A272;    // 0x1FE0(0x01A0)
	struct FAnimNode_AimOffsetLookAt                   AnimGraphNode_AimOffsetLookAt_2B012AB94704FB1465F196B7D7C6707E;// 0x2180(0x0210)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_01FED5AC49CAA2A088AA029B561944F8;    // 0x2390(0x01A0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FFAED949400967A79962F18A73BB5DA1;// 0x2530(0x00B8)
	unsigned char                                      UnknownData02[0x8];                                       // 0x25E8(0x0008) MISSED OFFSET
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_843922F5476797C65E19A5A3A49CF143; // 0x25F0(0x01C0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_766C54F5496E356F1E8625B4A655D162; // 0x27B0(0x01C0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_4D0102EA460B4C6E86C71E9B55804935;// 0x2970(0x0038)
	unsigned char                                      UnknownData03[0x8];                                       // 0x29A8(0x0008) MISSED OFFSET
	struct FAnimNode_AimOffsetLookAt                   AnimGraphNode_AimOffsetLookAt_C51B6DF845C8E70181334DB5DA06918E;// 0x29B0(0x0210)
	struct FAnimNode_Root                              AnimGraphNode_Root_A855C90442C6FF559EBA148C91B65089;      // 0x2BC0(0x0048)
	float                                              LookAtCurrentWeight;                                      // 0x2C08(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadLookAtTargetDistance;                                 // 0x2C0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BlinkActive;                                              // 0x2C10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2C11(0x0003) MISSED OFFSET
	struct FVector                                     EyeLookAtTargetLocation;                                  // 0x2C14(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeLookAtWeight;                                          // 0x2C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HeadLookAtTargetLocation;                                 // 0x2C24(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SequenceBlendInterp;                                      // 0x2C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x2C34(0x0004) MISSED OFFSET
	class UBlendSpaceBase*                             AO_LookAt_Body;                                           // 0x2C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Eyes;                                           // 0x2C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkPlayRateScale;                                       // 0x2C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x2C4C(0x0004) MISSED OFFSET
	class UAnimSequenceBase*                           AS_Blink;                                                 // 0x2C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AS_Blink__Additive_;                                      // 0x2C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AO_LookAt_Distance;                                       // 0x2C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTimeX;                                               // 0x2C68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x2C6C(0x0004) MISSED OFFSET
	class UBP_LookAtController_C*                      LookAtController;                                         // 0x2C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     HeadLookAtTargetPrevious;                                 // 0x2C78(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x2C84(0x0004) MISSED OFFSET
	struct FName                                       HeadSocketName;                                           // 0x2C88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTimerHandle                                BlinkTimeHandle;                                          // 0x2C90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BlinkTimerSpeedScale;                                     // 0x2C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlinkMovementSpeedScale;                                  // 0x2C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseTargetSpeedBlink;                                      // 0x2CA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x2CA1(0x0007) MISSED OFFSET
	struct FName                                       HeadPivotSocketName;                                      // 0x2CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseProceduralBlink;                                       // 0x2CB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x2CB1(0x0003) MISSED OFFSET
	float                                              BlinkMovementSensitivity;                                 // 0x2CB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BodyLookAtWeight;                                         // 0x2CB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   BlinkTimeRandomLimits;                                    // 0x2CBC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x2CC4(0x0004) MISSED OFFSET
	class UBlendSpaceBase*                             AO_LookAtFocus;                                           // 0x2CC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadLookAtWeight;                                         // 0x2CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RHandLookAtTargetLocationWeight;                          // 0x2CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TimerBlink;                                               // 0x2CD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x2CD9(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             AO_LookAt_DistanceBodyAdjustment;                         // 0x2CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseLookAtByWeaponSight;                                   // 0x2CE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x2CE9(0x0007) MISSED OFFSET
	struct FName                                       RWeaponSocketName;                                        // 0x2CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseSantaCruzAssetAlternatePath;                           // 0x2CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x2CF9(0x0003) MISSED OFFSET
	float                                              LHandLookAtTargetLocationWeight;                          // 0x2CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAtTargetLocation;                                     // 0x2D00(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAtTargetLocationPrevious;                             // 0x2D0C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtEyeCurrentWeight;                                   // 0x2D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StickLeftArmToRightArmWeight;                             // 0x2D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkComponent*                                AkBlinkComponent;                                         // 0x2D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     EyeLookAtTargetLocationPrevious;                          // 0x2D28(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RElbowIkJointLocation;                                    // 0x2D34(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LElbowIkJointLocation;                                    // 0x2D40(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               UseBlinkPose;                                             // 0x2D4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x2D4D(0x0003) MISSED OFFSET
	struct FVector                                     _WeaponSight;                                             // 0x2D50(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceBodyAdjustmentWeight;                             // 0x2D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAtLowerArmTargetLocation;                             // 0x2D60(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAtHandTargetLocation;                                 // 0x2D6C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtLLowerArmWeight;                                    // 0x2D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtLHandWeight;                                        // 0x2D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtRLowerArmWeight;                                    // 0x2D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtRHandArmWeight;                                     // 0x2D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAt_Stick_LHand_To_RHand_Weight;                       // 0x2D88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkPlayRateScale__AdditiveAnim_;                        // 0x2D8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GunHeightAdjustmentLocation;                              // 0x2D90(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_HumanBiped_New_LookAtSG.ABP_HumanBiped_New_LookAtSG_C");
		return ptr;
	}


	void BlinkAkAudioEvent();
	void FindAkBlinkComponent();
	void AdjustIkGunHeight(float InterpSpeed, const struct FVector2D& DistanceFromHead__Remapped_Input_, const struct FVector2D& AdjustmentToHeight__Remapped_Output_);
	void FastMovingTargetBlink();
	void SetLookAtParameters();
	float InterpolateLookAtWeight(bool ShowDebug, const struct FTransform& HeadBaseTransform, const struct FTransform& PelvisBaseTransform, const struct FVector& TargetLocation, float TargetWeight, const struct FVector2D& AngleClampLimits, float* ReturnValue1);
	bool DetectFastTargetMovementChange_();
	float GetDistanceToTarget();
	void FindLookAtController();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_6F2DBF11459022C6220C6D80D362A392();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_129211544BAC357FA5C9A6A1F59A0C25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_28DFBAF0472BFEF61552B1BF1E080642();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_AimOffsetLookAt_12101A5E446DE74BA4650FAEE60455C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_BlendListByBool_3D6A6BAF4E50C4F2B9C966A1CCD5CF9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_99F7902C4528A83D21E6B5AA99ED700C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_A5825706429C735E237EF1A32464C5CC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_966B39A74C40EED0CB35B1AD8B16A272();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_AimOffsetLookAt_2B012AB94704FB1465F196B7D7C6707E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LookAt_01FED5AC49CAA2A088AA029B561944F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_ModifyBone_FFAED949400967A79962F18A73BB5DA1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_TwoBoneIK_843922F5476797C65E19A5A3A49CF143();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_TwoBoneIK_766C54F5496E356F1E8625B4A655D162();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_AimOffsetLookAt_C51B6DF845C8E70181334DB5DA06918E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LayeredBoneBlend_5E0F073441651466EAE9D48AD9688BC3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_3726B2CF4CFC2FE0B3655F909CF0706D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_BlendListByBool_F9B5DA454469D615783DF3BAE6E5DBC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_BlendListByBool_AEF61F9B4F552184E796A099BFB611F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_RotationOffsetBlendSpace_DDBA1BDE4251A724C3AA36A1ECE809D3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_LayeredBoneBlend_6F6AF8154543C848C48BA38048D4AD13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_SequencePlayer_D3AB73CD40A67E987E9C80885AB09C23();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_SequencePlayer_20C213F84CAFFF66A07B0588D079B947();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_SequencePlayer_0B2C5FF349E741B2B06F55960EC8EA08();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG_AnimGraphNode_TransitionResult_A0D36CE24780A6A6505E3BA431D434CF();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_StopLookAt();
	void AnimNotify_startLookAt();
	void BlueprintInitializeAnimation();
	void Event_Blink();
	void ExecuteUbergraph_ABP_HumanBiped_New_LookAtSG(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
