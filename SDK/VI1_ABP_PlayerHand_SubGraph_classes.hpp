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

// AnimBlueprintGeneratedClass ABP_PlayerHand_SubGraph.ABP_PlayerHand_SubGraph_C
// 0x09E4 (0x0DC4 - 0x03E0)
class UABP_PlayerHand_SubGraph_C : public UNTAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_932832E34479DBBB2346BBAF429A4DEE;      // 0x03E8(0x0048)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_ACF431B44DA9BFE6832714BC471D21EE;// 0x0430(0x0130)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_E2A939A14FC9AB9E3EAA64B5D4498C25;// 0x0560(0x0130)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_F5C08E3A4D55399655BDEF82D068B58F;// 0x0690(0x0078)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0A6E0FE5448884C2B59CB6A142E3E161;// 0x0708(0x00D0)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_51B1F6E74CCE4114BDD936A9BD07B9BC;// 0x07D8(0x0130)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_D987FB9148B5FA0DD18CE2B23469F6F0;// 0x0908(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_97E6AC104F91C3A56CEDDCB5FE1CE182;// 0x0980(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5A1ED6704902AB277ADD7796C8533604;// 0x0A28(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D392FB9F40DDD940D60A7FB2B1D08750;// 0x0A78(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_36FB8B26457DCBD7105216B4EC41FB8E;// 0x0AC8(0x00D0)
	struct FAnimNode_BlendSpaceEvaluator               AnimGraphNode_BlendSpaceEvaluator_278D7B8D4BA20024119A4E885A6138BD;// 0x0B98(0x0130)
	float                                              Delta;                                                    // 0x0CC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Debug;                                                    // 0x0CCC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0CCD(0x0003) MISSED OFFSET
	struct FOculusTouchData                            TouchData;                                                // 0x0CD0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	EControllerHand                                    Handed;                                                   // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CE1(0x0003) MISSED OFFSET
	struct FAnimVars                                   AnimVars;                                                 // 0x0CE4(0x0024) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_humanbiped_hands_animList_C*             CurrentAnims;                                             // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_humanbiped_hands_animList_C*             PreviousAnims;                                            // 0x0D10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      AnimSet;                                                  // 0x0D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Initialised;                                              // 0x0D20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0D21(0x0007) MISSED OFFSET
	struct FName                                       ContextCurrent;                                           // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ContextPrevious;                                          // 0x0D30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FAwareBlend                                 AwareBlend;                                               // 0x0D38(0x0028) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       ContextNext;                                              // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              prevGripAlpha;                                            // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              gripBlendSpeed;                                           // 0x0D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwareThroughA;                                            // 0x0D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0D74(0x0004) MISSED OFFSET
	class UBP_humanbiped_hands_animList_C*             DefaultAnimationList;                                     // 0x0D78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasExtraAnimation;                                        // 0x0D80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsingDefaultContext;                                      // 0x0D81(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseAwarenessAnimation;                                    // 0x0D82(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x5];                                       // 0x0D83(0x0005) MISSED OFFSET
	class UBlendSpace*                                 BS_GripOcuCurrAnim;                                       // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 BS_GripOcuExtraCurrAnim;                                  // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 BS_ReadyOcuDefaultAnim;                                   // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpace*                                 BS_GripOcuDefaultAnim;                                    // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AwareBlendRemapped;                                       // 0x0DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0DAC(0x0004) MISSED OFFSET
	class UWKNDHandSolver*                             HandSolver;                                               // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ContextDefaultName;                                       // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraAnimationScrub;                                      // 0x0DC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_PlayerHand_SubGraph.ABP_PlayerHand_SubGraph_C");
		return ptr;
	}


	void FindHandSolver();
	void SetAnimBlendingVariables();
	void SetAnimList(const struct FLinearColor& Debug_Color, bool Debug, class UClass* Anim_Set, const struct FName& Name);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHand_SubGraph_AnimGraphNode_BlendSpaceEvaluator_51B1F6E74CCE4114BDD936A9BD07B9BC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHand_SubGraph_AnimGraphNode_TwoWayBlend_D987FB9148B5FA0DD18CE2B23469F6F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHand_SubGraph_AnimGraphNode_BlendListByBool_36FB8B26457DCBD7105216B4EC41FB8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHand_SubGraph_AnimGraphNode_BlendSpaceEvaluator_278D7B8D4BA20024119A4E885A6138BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHand_SubGraph_AnimGraphNode_BlendSpaceEvaluator_E2A939A14FC9AB9E3EAA64B5D4498C25();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHand_SubGraph_AnimGraphNode_BlendSpaceEvaluator_ACF431B44DA9BFE6832714BC471D21EE();
	void StartNewSpecialMovementType(TArray<struct FName> NewTypes, TArray<struct FName> OldTypes, const struct FName& Tag);
	void StartNewAnimatedMovement(const struct FName& NewType, float StartTime);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHand_SubGraph_AnimGraphNode_BlendListByBool_0A6E0FE5448884C2B59CB6A142E3E161();
	void SendRequest(const struct FName& NewRequest);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void Blend_Interperlation();
	void BlueprintInitializeAnimation();
	void initialiseCurrentAnims();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PlayerHand_SubGraph_AnimGraphNode_TwoWayBlend_F5C08E3A4D55399655BDEF82D068B58F();
	void BlueprintPostEvaluateAnimation();
	void ExecuteUbergraph_ABP_PlayerHand_SubGraph(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
