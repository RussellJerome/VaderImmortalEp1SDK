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

// AnimBlueprintGeneratedClass BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C
// 0x22E8 (0x26A8 - 0x03C0)
class UBP_TrainingDroid_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03C0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_82CAA3AD498A3D58F604168EA42386D7;      // 0x03C8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_54DACB9D4E1BE55E9CB114985F98A3AF;// 0x0410(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BDE129C34070C90949F35DBFE4795B99;// 0x04C8(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_20435222490BEAAF9653E0B587A5968C;// 0x0510(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CBE306034F61EAFE914FAEAA9AF401A1;// 0x0558(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1EA6C22C4C75FFFED1BF438C120F1893;// 0x0610(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_BBD9026046C8A2BB7AB03390BEB8E5ED;// 0x0658(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_979AD0F04F792B4A45DA2A988CCD4FA1;// 0x06A0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7621AF8446766144D99156B586BDA86D;// 0x0758(0x00B8)
	struct FAnimNode_NTMotionField                     AnimGraphNode_NTMotionField_338EC61B4EF51FC818BF1B83C7790187;// 0x0810(0x10B0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_784B03054E98BF4B790433B1F0409F85;// 0x18C0(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B67F00304090E6FB407542816D260109;// 0x1978(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E492703C46BD05988C168A88D93EB4AF;// 0x19C0(0x0048)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_42E230FD4723355CE1BC2DA20DD45C09;// 0x1A08(0x0078)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_CB360C304C5248B554F335B4D5B36D3B;// 0x1A80(0x0078)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E8FA5225451DC7D7F3EE72AC76ABC53D;// 0x1AF8(0x0070)
	unsigned char                                      UnknownData00[0x8];                                       // 0x1B68(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_125B05A042BD3A5EF95B1FA2550F3A13;// 0x1B70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F406730C494DE6D4A329208644DBA41A;// 0x1BF0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5D255331407DC8551843A3A3F7AA482E;// 0x1C70(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_82FE69584CED1C89F31912A753153F70;// 0x1CE0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D51419374FAF128E024DD1898E64D98A;// 0x1D28(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3BEC8EDF4C894B2A95D79CADDFFABEE4;// 0x1D98(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FF9A258C49CDE5454496D8900D84F5BD;// 0x1DE0(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_253A7F7647C789D0A6BA64AC0F8E3D0B;// 0x1EB8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BD1EB13A4F7DBF78D399DE9550EF9770;// 0x1F70(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D41CCA6F4DF227C91AE6F89EB2A35BC2;// 0x1FB8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5598A7624FD8E3F1CD6753A5D6529418;// 0x2000(0x00D0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_862E6D374C344F3D8E646DA547928E8D;      // 0x20D0(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_62873A7B4013879F73DC8C9E5914F42A;// 0x2138(0x0070)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DBC354F54467DAFDC7BC2AA444C8B5A4;      // 0x21A8(0x0068)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4CCEDE644041A21C38D2C6AC8C152650;// 0x2210(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6A48378840C2CDFDFED9A39883FBECE9;// 0x22E0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6C04B50B4388424316D1B5881B493E81;// 0x2388(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9875B4DC498917F1B42A6A91061F9021;// 0x23D8(0x0050)
	class ABP_TrainingDroid_C*                         Droid;                                                    // 0x2428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FloatingHeightAdjuster;                                   // 0x2430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrilleAngle;                                              // 0x2434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMeshComponent*                      Mesh;                                                     // 0x2438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Activate;                                                 // 0x2440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2441(0x0003) MISSED OFFSET
	float                                              activate_play;                                            // 0x2444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x2448(0x0008) MISSED OFFSET
	struct FMotionFieldTarget                          request;                                                  // 0x2450(0x0200) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    UnstowAnimFinished;                                       // 0x2650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              PlayerPosAlpha;                                           // 0x2660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamageTwitchStage;                                        // 0x2664(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DamageTwitchPlay;                                         // 0x2665(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x2666(0x0002) MISSED OFFSET
	float                                              DamageWobblePlaySpeed;                                    // 0x2668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageWobbleAmplitude;                                    // 0x266C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ChargeStatus;                                             // 0x2670(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WeaponMalfunction;                                        // 0x2671(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x2672(0x0002) MISSED OFFSET
	float                                              HeadLookAtWorldYaw;                                       // 0x2674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StrikeDebug;                                              // 0x2678(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShortActivateAnim;                                        // 0x2679(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x267A(0x0006) MISSED OFFSET
	struct FScriptMulticastDelegate                    RestowAnimFinished;                                       // 0x2680(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              heightBlend;                                              // 0x2690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasStartedDying;                                          // 0x2694(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x2695(0x0003) MISSED OFFSET
	float                                              HeightAdjustmentWeight;                                   // 0x2698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x269C(0x0004) MISSED OFFSET
	class UAnimMontage*                                SpawnAnimation;                                           // 0x26A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_TrainingDroid_AnimBlueprint.BP_TrainingDroid_AnimBlueprint_C");
		return ptr;
	}


	void GetHeightAdjustment(float* heightBlend);
	void DrawSaber(bool Draw, const struct FLinearColor& col, float Thick);
	void FloatingBob(float Time, float Period, float Amplitude, float* Value);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ApplyAdditive_CB360C304C5248B554F335B4D5B36D3B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ApplyAdditive_42E230FD4723355CE1BC2DA20DD45C09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_784B03054E98BF4B790433B1F0409F85();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_NTMotionField_338EC61B4EF51FC818BF1B83C7790187();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_SequencePlayer_E8FA5225451DC7D7F3EE72AC76ABC53D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_7621AF8446766144D99156B586BDA86D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_979AD0F04F792B4A45DA2A988CCD4FA1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_CBE306034F61EAFE914FAEAA9AF401A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_TransitionResult_125B05A042BD3A5EF95B1FA2550F3A13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_54DACB9D4E1BE55E9CB114985F98A3AF();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_AllowBlock();
	void AnimNotify_AllowStopBlade();
	void AnimNotify_EndAllowStopBlade();
	void AnimNotify_EndAllowBlock();
	void BlueprintBeginPlay();
	void activateDroid();
	void AnimNotify_droidOn();
	void AnimNotify_SaberOn();
	void AnimNotify_AtkChargeOn();
	void AnimNotify_AtkChargeOff();
	void AnimNotify_WeaponMalfunction();
	void AnimNotify_WeaponRestore();
	void AnimNotify_SaberOff();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_BlendListByBool_4CCEDE644041A21C38D2C6AC8C152650();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_BlendListByBool_5598A7624FD8E3F1CD6753A5D6529418();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_ModifyBone_253A7F7647C789D0A6BA64AC0F8E3D0B();
	void AnimNotify_GrillOff();
	void CustomEvent_1();
	void CustomEvent_2(class AActor* Saber);
	void ClashOn(class ARPOCPickup_Lightsaber* Saber1, class ARPOCPickup_Lightsaber* Saber2, float RewindTime, const struct FSaberClashData& Clash);
	void AnimNotify_PowerGlow();
	void Deactivate();
	void AnimNotify_Activate();
	void AnimNotify_Deactivate();
	void AnimNotify_RestowFinished();
	void flinch();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint_AnimGraphNode_TransitionResult_F406730C494DE6D4A329208644DBA41A();
	void AnimNotify_PreRagdoll();
	void AnimNotify_Explode();
	void AnimNotify_DisableMovement();
	void ExecuteUbergraph_BP_TrainingDroid_AnimBlueprint(int EntryPoint);
	void RestowAnimFinished__DelegateSignature();
	void UnstowAnimFinished__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
