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

// BlueprintGeneratedClass BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C
// 0x0110 (0x0620 - 0x0510)
class ABP_TrainingRemote_Extended_C : public ABP_TrainingRemote_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UWKNDDamageComponent*                        WKNDDamage;                                               // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Shield;                                                   // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               BladeCollision;                                           // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            LightsaberCollider;                                       // 0x0530(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              BladeHeatUp_BladeHeat_A13A7CBB4DA9CF81201913A590E4503C;   // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    BladeHeatUp__Direction_A13A7CBB4DA9CF81201913A590E4503C;  // 0x053C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x053D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BladeHeatUp;                                              // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShieldOnOff_ScaleMultiplier_2EB9F6034F6598C752C954ADE485D28D;// 0x0548(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShieldOnOff__Direction_2EB9F6034F6598C752C954ADE485D28D;  // 0x054C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x054D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShieldOnOff;                                              // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsCurrentlyAttacking;                                     // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0559(0x0003) MISSED OFFSET
	int                                                NumShotsPerBarrage;                                       // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAttackComplete;                                         // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsCurrentlyMoving;                                        // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0571(0x0003) MISSED OFFSET
	float                                              IdleAnimationSpeed;                                       // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ActorVelocity;                                            // 0x0578(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousActorLocation;                                    // 0x0584(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SplitHalvesScale;                                         // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SplitHalvesExtraImpulse;                                  // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldTimer;                                              // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinNumBladeStrikes;                                       // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumBladeStrikes;                                       // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WasFirstTimeShieldActivated;                              // 0x05A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShieldDisabled;                                          // 0x05A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x05A6(0x0002) MISSED OFFSET
	struct FVector                                     LastDestination;                                          // 0x05A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	class ACombatPointManager*                         OpponentCombatPointManager;                               // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSpawnComplete;                                          // 0x05C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                MinNumSpawnAnimationPoints;                               // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumSpawnAnimationPoints;                               // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnAnimationRadius;                                     // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnAnimationSpeed;                                      // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultMaxSpeed;                                          // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ENPCCombatType                                     SelectedAttackType;                                       // 0x05E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05E5(0x0003) MISSED OFFSET
	float                                              RangedTelegraphTime;                                      // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeBetweenBlasterShots;                                  // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                        // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMesh*                                 SplitTopMesh;                                             // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 SplitBottomMesh;                                          // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ShieldScale;                                              // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnBladePieces;                                         // 0x0614(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0615(0x0003) MISSED OFFSET
	class UHapticFeedbackEffect_Base*                  SplitHapticCurve;                                         // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrainingRemote_Extended.BP_TrainingRemote_Extended_C");
		return ptr;
	}


	bool CanOccupyCombatPoint(const struct FKFCircleCombatPoint& CombatPoint);
	int GetPreferredCombatPoint(TArray<struct FKFCircleCombatPoint> AvailableCombatPoints);
	bool OnAssignedToCombatPoint(const struct FKFCircleCombatPoint& CombatPoint);
	bool OnRemovedFromCombatSquad(class ACombatSquad* Squad);
	bool OnAddedToCombatSquad(class ACombatSquad* Squad);
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
	void SelectAttackType();
	void EnqueueSpawnAnimationPoints();
	void SplitBallInTwo(class ARPOCPickup_Lightsaber* Lightsaber);
	void UserConstructionScript();
	void ShieldOnOff__FinishedFunc();
	void ShieldOnOff__UpdateFunc();
	void BladeHeatUp__FinishedFunc();
	void BladeHeatUp__UpdateFunc();
	void OnNotifyEnd_6FBF44DB478B9F3E761D76A7D9AC2CD0(const struct FName& NotifyName);
	void OnNotifyBegin_6FBF44DB478B9F3E761D76A7D9AC2CD0(const struct FName& NotifyName);
	void OnInterrupted_6FBF44DB478B9F3E761D76A7D9AC2CD0(const struct FName& NotifyName);
	void OnBlendOut_6FBF44DB478B9F3E761D76A7D9AC2CD0(const struct FName& NotifyName);
	void OnCompleted_6FBF44DB478B9F3E761D76A7D9AC2CD0(const struct FName& NotifyName);
	void SquadBehaviour_Move(const struct FVector& Destination);
	void ReceiveTick(float* DeltaSeconds);
	void TurnOnShield();
	void TurnOffShield();
	void OnShieldTimerEnd();
	void BndEvt__BladeCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ApplyBlasterDamage(class AActor** Hit_Actor);
	void PlayBackToIdle();
	void StartMeleeAttack();
	void StartRangedAttack();
	void PlayTelegraph();
	void DoAttack(ENPCCombatType AttackType, int NumAttacks);
	void VisualAssist();
	void ReceiveBeginPlay();
	void BndEvt__LightsaberCollider_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void PlaySpawnAnimation();
	void ExecuteUbergraph_BP_TrainingRemote_Extended(int EntryPoint);
	void OnSpawnComplete__DelegateSignature(class ABP_TrainingRemote_C* TrainingRemote);
	void OnAttackComplete__DelegateSignature(const TScriptInterface<class UCombatSquadBehaviourInterface>& Attacker);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
