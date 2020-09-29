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

// BlueprintGeneratedClass BP_TrainingDroid_Extended.BP_TrainingDroid_Extended_C
// 0x009E (0x0DA0 - 0x0D02)
class ABP_TrainingDroid_Extended_C : public ABP_TrainingDroid_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0D02(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D08(0x0008) (Transient, DuplicateTransient)
	class UWKNDDamageComponent*                        WKNDDamage;                                               // 0x0D10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    FinishedCleanUp;                                          // 0x0D18(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UWKNDEnemyCombatData*                        PersonalCombatData;                                       // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackSpeedMultiplier;                                    // 0x0D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindUpSpeedMultiplier;                                    // 0x0D34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCurrentlyAttacking;                                     // 0x0D38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCurrentlyMoving;                                        // 0x0D39(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0D3A(0x0006) MISSED OFFSET
	class UClass*                                      LightsaberClass;                                          // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAttackCompleted;                                        // 0x0D48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class URPOCCombatStageData*                        MovementStage;                                            // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData*                        AttackStage;                                              // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MoveDirectionTolerance;                                   // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECombatStage_Taunt                                 TauntType;                                                // 0x0D6C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0D6D(0x0003) MISSED OFFSET
	struct FString                                     AudioSwitchString;                                        // 0x0D70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                PreferredCombatPointIndex;                                // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastMoveDirection;                                        // 0x0D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasCompletedFirstMove;                                    // 0x0D88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0D89(0x0007) MISSED OFFSET
	class UPhysicsAsset*                               RagdollPhysicsAsset;                                      // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_vox_friendlyFire;                                     // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrainingDroid_Extended.BP_TrainingDroid_Extended_C");
		return ptr;
	}


	bool CanOccupyCombatPoint(const struct FKFCircleCombatPoint& CombatPoint);
	int GetPreferredCombatPoint(TArray<struct FKFCircleCombatPoint> AvailableCombatPoints);
	bool OnAssignedToCombatPoint(const struct FKFCircleCombatPoint& CombatPoint);
	bool OnAddedToCombatSquad(class ACombatSquad* Squad);
	bool OnRemovedFromCombatSquad(class ACombatSquad* Squad);
	class UWKNDHealthComponent* GetHealthComponent();
	bool Despawn();
	bool Kill();
	bool BindHandleAttackComplete(const struct FScriptDelegate& HandleAttackCompleteDelegate);
	bool CanAttack();
	bool SetOpponent(class ACombatPointManager* Opponent);
	ENPCCombatType GetNPCCombatType();
	bool IsAttacking();
	bool StartAttack(class AActor* Opponent, float DelayBeforeAttack);
	bool StopAttack();
	void UserConstructionScript();
	void OnReachedLocationAndYaw_A145A9E8480F908E13652B8AFA8BFB1C(class AActor* MovedActor);
	void OnReachedLocation_A145A9E8480F908E13652B8AFA8BFB1C(class AActor* MovedActor);
	void OnDied_6317EED44F77766FD13AEB841812AD47(class AActor* AttackingActor);
	void OnStaggered_6317EED44F77766FD13AEB841812AD47(class AActor* AttackingActor);
	void OnFinished_6317EED44F77766FD13AEB841812AD47(class AActor* AttackingActor);
	void StartRangedAttack();
	void SquadBehaviour_MoveTowardsDirection(float Direction);
	void BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageAbortedSig__DelegateSignature(ECombatStageType AbortedStage, const struct FName& Token);
	void BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_1_CombatStageCompletedSig__DelegateSignature(ECombatStageType CompletedStage, const struct FName& Token, int RemainingStageCount);
	void OnStageEnds(ECombatStageType StageType);
	void OnDeathAnimStarted(struct FWKNDDamageInfo* DamageInfo);
	void OnDeathAnimEnded();
	void AttackEnds();
	void StartMeleeAttack();
	void BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_1_NotifyAttackStartedSig__DelegateSignature();
	void ReceiveBeginPlay();
	void OnComponentAttached(class USceneComponent* NewlyAttachedComponent);
	void PlayEffectsForStrength(struct FWKNDDamageInfo* DamageInfo, int* HitCount);
	void PlayValidHitFX(struct FWKNDDamageInfo* DamageInfo, int* HitCount);
	void ExecuteUbergraph_BP_TrainingDroid_Extended(int EntryPoint);
	void OnAttackCompleted__DelegateSignature(const TScriptInterface<class UCombatSquadBehaviourInterface>& Attacker);
	void FinishedCleanUp__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
