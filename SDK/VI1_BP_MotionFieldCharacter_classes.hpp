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

// BlueprintGeneratedClass BP_MotionFieldCharacter.BP_MotionFieldCharacter_C
// 0x0169 (0x08B9 - 0x0750)
class ABP_MotionFieldCharacter_C : public AMotionFieldCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0750(0x0008) (Transient, DuplicateTransient)
	class UWKNDHealthComponent*                        Health_Component;                                         // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCEnemyAttackComponent*                   RPOCEnemyAttack;                                          // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCStrikePredictionComponent*              RPOCStrikePrediction;                                     // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCStagedCombatComponent*                  RPOCStagedCombat;                                         // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IdleMovement8_DirectionOffset_2B34F9C14D3C58FEAFDEC0B90A639255;// 0x0778(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    IdleMovement8__Direction_2B34F9C14D3C58FEAFDEC0B90A639255;// 0x077C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IdleMovement8;                                            // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IdleMovement7_DirectionOffset_A381ED584E698496F193BBADA0ECA7E1;// 0x0788(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    IdleMovement7__Direction_A381ED584E698496F193BBADA0ECA7E1;// 0x078C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x078D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IdleMovement7;                                            // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IdleMovement6_DirectionOffset_3C2FD1384D72AF778740048918CE2A8F;// 0x0798(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    IdleMovement6__Direction_3C2FD1384D72AF778740048918CE2A8F;// 0x079C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x079D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IdleMovement6;                                            // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IdleMovement5_DirectionOffset_76D9F0034B77E01623606E811B0DD836;// 0x07A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    IdleMovement5__Direction_76D9F0034B77E01623606E811B0DD836;// 0x07AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IdleMovement5;                                            // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IdleMovement4_DirectionOffset_7FD5978146C1DB271BC3C5A5B284B321;// 0x07B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    IdleMovement4__Direction_7FD5978146C1DB271BC3C5A5B284B321;// 0x07BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x07BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IdleMovement4;                                            // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IdleMovement3_DirectionOffset_69F7888B407395CE3C0F3E9EE088521C;// 0x07C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    IdleMovement3__Direction_69F7888B407395CE3C0F3E9EE088521C;// 0x07CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x07CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IdleMovement3;                                            // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IdleMovement2_DirectionOffset_D179C60E4A304943B40D21828592C671;// 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    IdleMovement2__Direction_D179C60E4A304943B40D21828592C671;// 0x07DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07DD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IdleMovement2;                                            // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IdleMovement1_DirectionOffset_F2D92769444A4376857CF59E7D464550;// 0x07E8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    IdleMovement1__Direction_F2D92769444A4376857CF59E7D464550;// 0x07EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x07ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          IdleMovement1;                                            // 0x07F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCBladeSweepComponent*                    BladeSweeper_Left;                                        // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class URPOCBladeSweepComponent*                    BladeSweeper_Right;                                       // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UAnimInstance*                               AnimBlueprint;                                            // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugCapsule;                                             // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0811(0x0007) MISSED OFFSET
	class ABP_Lightsaber_Vader_C*                      Saber;                                                    // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             VROrigin;                                                 // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bBladeCanBeBlocked;                                       // 0x0828(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBladeCanBeStopped;                                       // 0x0829(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x082A(0x0002) MISSED OFFSET
	int                                                CurrentBlockWindow;                                       // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BlocksThisCombo;                                          // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBlockBeforeNotify;                                       // 0x0834(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0835(0x0003) MISSED OFFSET
	class ABP_Dummysaber_C*                            Dummy_Saber;                                              // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ARPOCSaberManager*                           SaberManager;                                             // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SaberTag;                                                 // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      SaberSpawnClass;                                          // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    InvalidHit;                                               // 0x0858(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       SaberAttachBoneName;                                      // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTimelineComponent*                          CurrentTimeline;                                          // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bDelayedWeaponSpawn;                                      // 0x0878(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0879(0x0003) MISSED OFFSET
	float                                              AngleOffset;                                              // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimMontage*                                Current_Montage;                                          // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Loop;                                                     // 0x0888(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IdleLock;                                                 // 0x0889(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RunningOnQuest;                                           // 0x088A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x5];                                       // 0x088B(0x0005) MISSED OFFSET
	TArray<class UAnimMontage*>                        IdleAnimMontages;                                         // 0x0890(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                BackoffAnimMontage;                                       // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FDeathAnimationInfo>                 DeathAnimMontages;                                        // 0x08A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	EEnemyType                                         CombatantType;                                            // 0x08B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MotionFieldCharacter.BP_MotionFieldCharacter_C");
		return ptr;
	}


	void GetEnemyType(EEnemyType* EnemyType);
	void GetRelevantDeathAnimation(const struct FWKNDDamageInfo& DamageInfo, class UAnimMontage** Result);
	bool CanPlayIdle();
	void DrawAKComponents(bool DrawComponents);
	void SetNewOpponent(class AWKNDPlayerPawn* NewOpponent);
	void ResetSaber();
	void OnValidHit(int Hit_Count, const struct FVector& Location, const struct FVector& Direction, class UStaticMeshComponent* ArmourPiece, bool Two_Handed_Strike);
	void SwapToDummy(class ABP_Dummysaber_C* Dummy_Saber);
	void SwapToSaber(class ABP_Lightsaber_Vader_C* Vader_Saber);
	void VaderLookAtTarget();
	void UserConstructionScript();
	void IdleMovement1__FinishedFunc();
	void IdleMovement1__UpdateFunc();
	void IdleMovement2__FinishedFunc();
	void IdleMovement2__UpdateFunc();
	void IdleMovement3__FinishedFunc();
	void IdleMovement3__UpdateFunc();
	void IdleMovement4__FinishedFunc();
	void IdleMovement4__UpdateFunc();
	void IdleMovement5__FinishedFunc();
	void IdleMovement5__UpdateFunc();
	void IdleMovement6__FinishedFunc();
	void IdleMovement6__UpdateFunc();
	void IdleMovement7__FinishedFunc();
	void IdleMovement7__UpdateFunc();
	void IdleMovement8__FinishedFunc();
	void IdleMovement8__UpdateFunc();
	void OnNotifyEnd_EABA1FA349E1B983FB3E5E85EB55CE32(const struct FName& NotifyName);
	void OnNotifyBegin_EABA1FA349E1B983FB3E5E85EB55CE32(const struct FName& NotifyName);
	void OnInterrupted_EABA1FA349E1B983FB3E5E85EB55CE32(const struct FName& NotifyName);
	void OnBlendOut_EABA1FA349E1B983FB3E5E85EB55CE32(const struct FName& NotifyName);
	void OnCompleted_EABA1FA349E1B983FB3E5E85EB55CE32(const struct FName& NotifyName);
	void Begin_Idle(int AnimIndex, float StartFraction, bool Backoff);
	void EndIdle();
	void Open_Gate();
	void Idle_Anim();
	void Close_Gate();
	void Back_off();
	void BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_HitWhileVulnerableSig__DelegateSignature(int HitCount, EComboAngleCheck AngleCheckHitResult, const struct FVector& HitLocation, const struct FVector& HitDirection, class UStaticMeshComponent* HitArmourPiece, bool bTwoHandedStrike);
	void Tick_DrawDebug();
	void Begin_AllowDebugInput();
	void StartLightSaber();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveDestroyed();
	void Suspend();
	void BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnDeathWithDamageInfo__DelegateSignature(const struct FWKNDDamageInfo& DamageInfo);
	void OnDeathAnimEnded();
	void OnDeathAnimStarted(const struct FWKNDDamageInfo& DamageInfo);
	void DestroySaber();
	void OnDeath(const struct FWKNDDamageInfo& DamageInfo);
	void ExecuteUbergraph_BP_MotionFieldCharacter(int EntryPoint);
	void InvalidHit__DelegateSignature(EComboAngleCheck FailureReason);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
