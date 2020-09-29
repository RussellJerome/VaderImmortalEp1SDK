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

// AnimBlueprintGeneratedClass BP_ITOCharacter_Basic_AnimBlueprint.BP_ITOCharacter_Basic_AnimBlueprint_C
// 0x05CD (0x098D - 0x03C0)
class UBP_ITOCharacter_Basic_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E12CF51344547ED1A5EDBD878BB18D89;      // 0x03C8(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_045C6CB24A52CFE2DC8457A1809E5739;// 0x0410(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_EC3E74674C91BF44B90E1E8BC97D49E8;// 0x0448(0x0078)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E9492E4342B82B47D028E7BE9389E521;// 0x04C0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1B5E16A44CDCADCD68CD598468D38DEC;// 0x0510(0x0050)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F9EFFAAC42ED4711C56B23B8BF0F8589;      // 0x0560(0x0068)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D0D5C6F34FA4A5AAC9FDEF8307B85383;      // 0x05C8(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CCA4447748033DEA19AE0BBA44F5BDF0;// 0x0630(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6EF9AA3E494DC4C4C87599BDABDA5C84;// 0x06D8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1292AE374798BC7017F3C7B46E8111BD;// 0x0790(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AB9B2B654BF80BC2E6B8BC92AFB70653;// 0x07D8(0x0048)
	struct FAnimationSaveBoneTransformNode             AnimationSaveBoneTransformGraphNode_5252DF3F44E8DE5E6AE529A2A374372E;// 0x0820(0x0058)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A5173CBB4DDDD4508DFED682DF388DC4;// 0x0878(0x00B8)
	float                                              SequenceBlendInterp;                                      // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class UBP_HoverController_C*                       HoverComponent;                                           // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     PelvisOffset;                                             // 0x0940(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NewVar_1;                                                 // 0x094C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BodyLocation;                                             // 0x0958(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PlayerCameraLocation;                                     // 0x0964(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BodyRotationLookAt;                                       // 0x0970(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerLocationTrackingSpeed;                              // 0x097C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTimeX;                                               // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverPlayerTrackingWeight;                                // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HoverPlayerModificationWeight;                            // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TeleportNeeded;                                           // 0x098C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_ITOCharacter_Basic_AnimBlueprint.BP_ITOCharacter_Basic_AnimBlueprint_C");
		return ptr;
	}


	void ShouldTeleportHoverLocation(float InputPin);
	void FindHoverController();
	void TeleportHoverLocation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ITOCharacter_Basic_AnimBlueprint_AnimGraphNode_ModifyBone_A5173CBB4DDDD4508DFED682DF388DC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ITOCharacter_Basic_AnimBlueprint_AnimGraphNode_ModifyBone_6EF9AA3E494DC4C4C87599BDABDA5C84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_ITOCharacter_Basic_AnimBlueprint_AnimGraphNode_TwoWayBlend_EC3E74674C91BF44B90E1E8BC97D49E8();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_BP_ITOCharacter_Basic_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
