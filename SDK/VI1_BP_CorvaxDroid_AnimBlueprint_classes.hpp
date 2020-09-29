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

// AnimBlueprintGeneratedClass BP_CorvaxDroid_AnimBlueprint.BP_CorvaxDroid_AnimBlueprint_C
// 0x0970 (0x0D30 - 0x03C0)
class UBP_CorvaxDroid_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_47F14F244FD4616A484C279A52756411;// 0x03C8(0x0078)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CC4F42A544333D55F6534A8FDCA2205B;      // 0x0440(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B72F12A747780DF389960082F07B0821;      // 0x04A8(0x0068)
	struct FAnimNode_Root                              AnimGraphNode_Root_04DA35474CB95F4A3F6BE1B0E88A9E6C;      // 0x0510(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0558(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F58C7DE842E7ED4F6E66B68820D86112;    // 0x0560(0x01A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_EF5F42884DD2F186ADD7319C66FD5FB5;// 0x0700(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_30B756E344E4B7E9695E8DBDF1AC4725;// 0x0748(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DAC508C1406FECC25BE4A58A09228C4C;// 0x0790(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0F95A659449710A581D876B560057FF6;// 0x0838(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_468414B84D517EE34FA670A06F9364D1;// 0x0888(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_17F5ED70419FFEDDCD29E1ACC92EEBB8;      // 0x08D8(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_129620EF429B2A145C878887709AB79A;// 0x0940(0x0070)
	struct FAnimationDockingNode                       AnimationDockingGraphNode_2939CC204A4EC41EB4D25D846D63211F;// 0x09B0(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8AB68CE3466A852B84F44B8BE1CCE754;      // 0x0A10(0x0068)
	struct FAnimationDockingNode                       AnimationDockingGraphNode_0C5665F444D47E69649367A9D9367B2D;// 0x0A78(0x0060)
	float                                              SequenceBlendInterp;                                      // 0x0AD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0ADC(0x0004) MISSED OFFSET
	struct FMotionFieldTarget                          request;                                                  // 0x0AE0(0x0200) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               StrikeDebug;                                              // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0CE1(0x0007) MISSED OFFSET
	class ABP_CorvaxDroid_C*                           Droid;                                                    // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x0CF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<struct FName>                               TagMoltenTrail;                                           // 0x0CF8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                     LookAtTargetLocation;                                     // 0x0D08(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LocoPlayRate;                                             // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookAtWeight;                                             // 0x0D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTimeX;                                               // 0x0D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtWeightInterpSpeed;                                  // 0x0D20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtModifiedWeight;                                     // 0x0D24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_Lightsaber_CorvaxDroid_C*                Saber;                                                    // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_CorvaxDroid_AnimBlueprint.BP_CorvaxDroid_AnimBlueprint_C");
		return ptr;
	}


	void SetLookAtTargetWeight();
	void SetLookAtTargetLocation();
	void DrawSaber(bool Drwa, const struct FLinearColor& Color, float Thickness);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CorvaxDroid_AnimBlueprint_AnimGraphNode_TwoWayBlend_47F14F244FD4616A484C279A52756411();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_CorvaxDroid_AnimBlueprint_AnimGraphNode_LookAt_F58C7DE842E7ED4F6E66B68820D86112();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_AllowBlock();
	void AnimNotify_AllowStopBlade();
	void AnimNotify_EndAllowStopBlade();
	void AnimNotify_EndAllowBlock();
	void AnimNotify_DoRagdoll();
	void AnimNotify_StartTrail();
	void AnimNotify_EndTrail();
	void AnimNotify_GlowUp();
	void AnimNotify_FadeInSaber();
	void AnimNotify_FadeOutSaber();
	void AnimNotify_DeadDestroy();
	void AnimNotify_Land();
	void AnimNotify_Footstep_shake();
	void AnimNotify_Destroyed();
	void AnimNotify_Footstep_gentle();
	void AnimNotify_StartDestroyCorvaxDroid();
	void AnimNotify_DockStart();
	void AnimNotify_DockEnd();
	void ExecuteUbergraph_BP_CorvaxDroid_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
