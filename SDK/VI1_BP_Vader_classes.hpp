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

// BlueprintGeneratedClass BP_Vader.BP_Vader_C
// 0x00AF (0x0968 - 0x08B9)
class ABP_Vader_C : public ABP_MotionFieldCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x08B9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	class UCinematicBlendingComponent*                 CinematicBlending;                                        // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Vader_Effort_Hit;                                         // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVectorFieldComponent*                       VectorField;                                              // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VaderThrow;                                               // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VaderBlocked;                                             // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VaderChoke;                                               // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             VaderBreath;                                              // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ThrowLocation;                                            // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCForceThrowComponent*                    RPOCForceThrow;                                           // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              VerbSend_Send_Level_39C62F7D47287364D7C51199959C4F02;     // 0x0918(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    VerbSend__Direction_39C62F7D47287364D7C51199959C4F02;     // 0x091C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x091D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          VerbSend;                                                 // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_SliceableWeapon_C*                       CurrentThrownObject;                                      // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LowestDistance;                                           // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class ABP_ThrowManager_C*                          ClosestPoint;                                             // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanThrow;                                                 // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0941(0x0003) MISSED OFFSET
	struct FVector                                     Start_VR_Origin_Location;                                 // 0x0944(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     End_VR_Origin_Location;                                   // 0x0950(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChoking;                                                // 0x095C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x095D(0x0003) MISSED OFFSET
	class UAnimMontage*                                HitRecoil;                                                // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Vader.BP_Vader_C");
		return ptr;
	}


	void SetSequenceBlendWeight(float Interp);
	void MoveAndFaceCharacter(class AActor* NewTargetFaceActor);
	void UserConstructionScript();
	void VerbSend__FinishedFunc();
	void VerbSend__UpdateFunc();
	void Tick_UpdateVFX();
	void LookAtStatus(bool On);
	void OnThrowItem(class ARPOCForceThrowLocation** ThrowLocation, class ASliceableActor** Item);
	void ForceCombatStage(ECombatStageType StartStage);
	void OnValidHit(int* Hit_Count, struct FVector* Location, struct FVector* Direction, class UStaticMeshComponent** ArmourPiece, bool* Two_Handed_Strike);
	void BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature(const struct FMotionFieldTarget& MotionFieldTarget);
	void PoseVerbSends_Vader_ON();
	void PoseVerbSends_Vader_OFF();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyComboCompletedSig__DelegateSignature(ECombat_ComboAttackResult bFinalMoveBlocked, int BlocksThisCombo);
	void ExecuteUbergraph_BP_Vader(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
