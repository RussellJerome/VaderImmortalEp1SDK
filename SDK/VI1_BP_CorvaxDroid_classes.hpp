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

// BlueprintGeneratedClass BP_CorvaxDroid.BP_CorvaxDroid_C
// 0x01C7 (0x0A80 - 0x08B9)
class ABP_CorvaxDroid_C : public ABP_MotionFieldCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x08B9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	class UAnimationDockingComponent*                  AnimationDocking;                                         // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_TDroidHit_Small_TwoHanded;                            // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_TDroidHit_Large_TwoHanded;                            // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_TDroidHit_Medium_TwoHanded;                           // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_chest;                                                 // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematicBlendingComponent*                 CinematicBlending;                                        // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ThrowLocation;                                            // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_FullBodyRagdoll_Weight_9750E98D421A8DAF907C4A9D24C8FA00;// 0x0908(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_FullBodyRagdoll__Direction_9750E98D421A8DAF907C4A9D24C8FA00;// 0x090C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x090D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_FullBodyRagdoll;                                 // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_UpperBodyRagdoll_Weight_55B838DC40B5F8B7E52D8D9A7BB56CE1;// 0x0918(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_UpperBodyRagdoll__Direction_55B838DC40B5F8B7E52D8D9A7BB56CE1;// 0x091C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x091D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_UpperBodyRagdoll;                                // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_SliceableWeapon_C*                       CurrentThrownObject;                                      // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LowestDistance;                                           // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	class ABP_ThrowManager_C*                          ClosestPoint;                                             // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanThrow;                                                 // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0941(0x0003) MISSED OFFSET
	struct FVector                                     Start_VR_Origin_Location;                                 // 0x0944(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     End_VR_Origin_Location;                                   // 0x0950(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChoking;                                                // 0x095C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x095D(0x0003) MISSED OFFSET
	class UAnimMontage*                                HitRecoil;                                                // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    HasRagdolled;                                             // 0x0968(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ValidHit;                                                 // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsArmourDroid;                                            // 0x0988(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0989(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ArmourHit;                                                // 0x0990(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              Direction;                                                // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Offset;                                                   // 0x09A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Hit_Location;                                             // 0x09A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x09B4(0x0004) MISSED OFFSET
	struct FName                                       BoneOverride;                                             // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Landed;                                                   // 0x09C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Footstep;                                                 // 0x09D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Destroyed;                                                // 0x09E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              LocomotionPlayRate;                                       // 0x09F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x09F4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    Footstep_gentle;                                          // 0x09F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     Hit_Direction;                                            // 0x0A08(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               VulnerableState;                                          // 0x0A14(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0A15(0x0003) MISSED OFFSET
	int                                                VaderDeathMontageIndex;                                   // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0A1C(0x0004) MISSED OFFSET
	struct FName                                       AkSwitchName;                                             // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_CorvaxDroid_AnimBlueprint_C*             MyAnimBlueprint;                                          // 0x0A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDockingRequestHandle                       DockingHandle;                                            // 0x0A30(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0A34(0x0004) MISSED OFFSET
	struct FName                                       DockStartEventName;                                       // 0x0A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DockEndEventName;                                         // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       DockBoneName;                                             // 0x0A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DockingActive;                                            // 0x0A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0A51(0x0007) MISSED OFFSET
	class UMaterialInterface*                          DissolveMaterial;                                         // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          DissolveMaterialLOD3;                                     // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasDirectionalSparks;                                     // 0x0A68(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasDecals;                                                // 0x0A69(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasHitCountFX;                                            // 0x0A6A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x1];                                       // 0x0A6B(0x0001) MISSED OFFSET
	float                                              DissolveEffectDelay;                                      // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayDeathEndVFX;                                          // 0x0A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0A71(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               sfx_sparks_lp;                                            // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CorvaxDroid.BP_CorvaxDroid_C");
		return ptr;
	}


	class UAkComponent* GetComponent(const struct FName& AttachPointName);
	void PlayDockingMontage__Yaw_only_(class UAnimMontage* MontageToPlay, const struct FTransform& destTransform, bool SplitDockingComp__Yaw_, float* AnimationDuration);
	void CombatStanceLocationAdjustment(bool* ShouldResolveDockedLocation);
	struct FVector FindStrafeVectorToCombatOpponent(bool UseStrafing, const struct FRotator& InRot, bool RightSide);
	void GetCombatOpponentLocation(struct FVector* ClippedLocation);
	struct FVector FindMovementForwardTowardsCombatComponent();
	struct FRotator FindLookAtRotationToCombatOpponent__Yaw_();
	bool IsCombatOpponentTooClose_();
	void IsCombatOpponentTooWide_(bool* WideRight, bool* WideLeft, bool* Strafing, class UAnimMontage** Montage);
	bool IsCombatOpponentTooFar_();
	void PlayDockingMontage(class UAnimMontage* MontageToPlay, const struct FTransform& destTransform, bool SplitDockingComp__Yaw_, float* AnimationDuration);
	void UpdateVulnerabilityCollision();
	void RagdollActivate(const struct FVector& InputPin, const struct FName& BoneName, class UTimelineComponent* Timeline, float ImpulseRadius, float ImpulseStrength);
	void UpdateVulnerabilitySFX();
	void SetupStandardAK(class UAkComponent* AK_Component);
	void HandleArmourHit(int HitCount, const struct FVector& Location, const struct FVector& Direction, class UStaticMeshComponent* Armour_Piece);
	void SetSequenceBlendWeight(float Interp);
	void MoveAndFaceCharacter(class AActor* NewTargetFaceActor);
	void UserConstructionScript();
	void Timeline_UpperBodyRagdoll__FinishedFunc();
	void Timeline_UpperBodyRagdoll__UpdateFunc();
	void Timeline_FullBodyRagdoll__FinishedFunc();
	void Timeline_FullBodyRagdoll__UpdateFunc();
	void OnNotifyEnd_60968CF544682BE721930C9FB97EC81D(const struct FName& NotifyName);
	void OnNotifyBegin_60968CF544682BE721930C9FB97EC81D(const struct FName& NotifyName);
	void OnInterrupted_60968CF544682BE721930C9FB97EC81D(const struct FName& NotifyName);
	void OnBlendOut_60968CF544682BE721930C9FB97EC81D(const struct FName& NotifyName);
	void OnCompleted_60968CF544682BE721930C9FB97EC81D(const struct FName& NotifyName);
	void VaderForceKill(int Index);
	void OnDeath(struct FWKNDDamageInfo* DamageInfo);
	void Ragdoll_CVD();
	void OnComponentHit_Event_1(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void OnDeathAnimStarted(struct FWKNDDamageInfo* DamageInfo);
	void DestroySaber();
	void OnDeathAnimEnded();
	void ForceDestroy();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature(const struct FMotionFieldTarget& MotionFieldTarget);
	void FTH_UpdateCharIndirectLighting();
	void Landed_Event_1();
	void Footsteps();
	void Droid_Destroyed();
	void OnComponentAttached_Event_1(class USceneComponent* NewlyAttachedComponent);
	void footsteps_gentle();
	void OrientHitVel(class UParticleSystemComponent* PFX);
	void Event_UpperBodyRagdoll(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Event_FullBodyRagdoll(const struct FVector& HitLocation, const struct FVector& HitNormal);
	void Event_RepositionCombatStance(class UAnimMontage* Montage, const struct FTransform& destTransform, bool SplitDockingComp__Yaw_);
	void Event_UpdateActiveDocking(const struct FTransform& destTransform);
	void BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo);
	void UpdateHitEffectFlags(EDamageStrength DamageStrength);
	void ExecuteUbergraph_BP_CorvaxDroid(int EntryPoint);
	void Footstep_gentle__DelegateSignature();
	void Destroyed__DelegateSignature();
	void Footstep__DelegateSignature();
	void Landed__DelegateSignature();
	void ArmourHit__DelegateSignature(float TotalArmour, float Armour_Pieces_Remaining);
	void ValidHit__DelegateSignature(int HitPointsRemaining);
	void HasRagdolled__DelegateSignature(class ABP_CorvaxDroid_C* DroidHandle);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
