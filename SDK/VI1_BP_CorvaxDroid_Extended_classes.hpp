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

// BlueprintGeneratedClass BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C
// 0x0078 (0x0AF8 - 0x0A80)
class ABP_CorvaxDroid_Extended_C : public ABP_CorvaxDroid_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A80(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DeflectionTarget;                                         // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDDamageComponent*                        WKNDDamage;                                               // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAttackCompleted;                                        // 0x0A98(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsCurrentlyAttacking;                                     // 0x0AA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCurrentlyMoving;                                        // 0x0AA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0AAA(0x0002) MISSED OFFSET
	float                                              MoveDirectionTolerance;                                   // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData*                        MovementStage;                                            // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class URPOCCombatStageData*                        AttackStage;                                              // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnMoveCompleted;                                          // 0x0AC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                PreferredCombatPointIndex;                                // 0x0AD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastDirection;                                            // 0x0AD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWKNDEnemyCombatData*                        PersonalCombatData;                                       // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttackSpeedMultiplier;                                    // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindUpSpeedMultiplier;                                    // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ECombatStage_Taunt                                 TauntType;                                                // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasCompletedFirstMove;                                    // 0x0AE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0AEA(0x0006) MISSED OFFSET
	class ABP_AssassinDroidWeapon_Death_C*             DeathSaber;                                               // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CorvaxDroid_Extended.BP_CorvaxDroid_Extended_C");
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
	ENPCCombatType GetNPCCombatType();
	bool IsAttacking();
	bool SetOpponent(class ACombatPointManager* Opponent);
	bool StartAttack(class AActor* Opponent, float DelayBeforeAttack);
	bool StopAttack();
	void PlayIdleAnim();
	void UserConstructionScript();
	void OnDied_F86FFCB247931082EEAD6DB5ABC626BA(class AActor* AttackingActor);
	void OnStaggered_F86FFCB247931082EEAD6DB5ABC626BA(class AActor* AttackingActor);
	void OnFinished_F86FFCB247931082EEAD6DB5ABC626BA(class AActor* AttackingActor);
	void OnReachedLocationAndYaw_6A6F9E1842D129099C955292FE9B2F7B(class AActor* MovedActor);
	void OnReachedLocation_6A6F9E1842D129099C955292FE9B2F7B(class AActor* MovedActor);
	void StartRangedAttack();
	void SquadBehaviour_MoveTowardsDirection(float Direction);
	void BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageAbortedSig__DelegateSignature(ECombatStageType AbortedStage, const struct FName& Token);
	void BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature(ECombatStageType CompletedStage, const struct FName& Token, int RemainingStageCount);
	void OnStageEnds(ECombatStageType StageType);
	void EndAttack();
	void StartMeleeAttack();
	void OnDeathAnimStarted(struct FWKNDDamageInfo* DamageInfo);
	void BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyAttackStartedSig__DelegateSignature();
	void OnDeathAnimEnded();
	void ReceiveBeginPlay();
	void UpdateVulnerabilityCollision();
	void ExecuteUbergraph_BP_CorvaxDroid_Extended(int EntryPoint);
	void OnMoveCompleted__DelegateSignature(class AActor* NPC);
	void OnAttackCompleted__DelegateSignature(const TScriptInterface<class UCombatSquadBehaviourInterface>& CorvaxDroid);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
