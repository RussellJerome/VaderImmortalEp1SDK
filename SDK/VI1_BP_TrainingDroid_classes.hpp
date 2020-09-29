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

// BlueprintGeneratedClass BP_TrainingDroid.BP_TrainingDroid_C
// 0x0449 (0x0D02 - 0x08B9)
class ABP_TrainingDroid_C : public ABP_MotionFieldCharacter_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x08B9(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x08C0(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                SFX_Main;                                                 // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDTrainingDroidComponent*                 TrainingDroid;                                            // 0x08D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_TDroid_NearDeath;                                     // 0x08D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_TDroidHit_Medium_TwoHanded;                           // 0x08E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_TDroidHit_Small_TwoHanded;                            // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DeflectionTarget;                                         // 0x08F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_TDroid_LargeTwoHanded;                                // 0x08F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_TDroid_Dazed;                                         // 0x0900(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                        // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_DroidDamageStates;                                    // 0x0910(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_ElectricStunRed;                                      // 0x0918(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_FX_HologramProjection;                                 // 0x0920(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_1_NewTrack_0_6DE63114428308DCF563E08EA7F3D0B3;   // 0x0928(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_6DE63114428308DCF563E08EA7F3D0B3;   // 0x092C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x092D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0930(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_3_IntensityLight_60D7C837458F3DB7295DB5A6458660F8;// 0x0938(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_60D7C837458F3DB7295DB5A6458660F8;   // 0x093C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x093D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x0940(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_2_Emmissive_Color_I_1D5AEA3643F42C3F8390A69F03E80BA9;// 0x0948(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_IntensityLight_1D5AEA3643F42C3F8390A69F03E80BA9;// 0x094C(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_1D5AEA3643F42C3F8390A69F03E80BA9;   // 0x0950(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0951(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0958(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_NewTrack_0_5818480D4848B9EC9D72A0ADA6A2F794;   // 0x0960(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_5818480D4848B9EC9D72A0ADA6A2F794;   // 0x0964(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Projection_opacity_904ECB964D9200092D7B9CA978F1E0C8;      // 0x0970(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Projection__Direction_904ECB964D9200092D7B9CA978F1E0C8;   // 0x0974(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0975(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Projection;                                               // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    CompletedCombatSequenceLoop;                              // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UAnimMontage*                                HitRecoil;                                                // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               RagdollMode;                                              // 0x0998(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0999(0x0003) MISSED OFFSET
	struct FVector                                     TargetHologramWorldLoc;                                   // 0x099C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                hitcounter;                                               // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              hitspacer;                                                // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Damagable;                                                // 0x09B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x09B1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    HasRagdolled;                                             // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DamageStateCounter;                                       // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               ArmPhysicsToggle;                                         // 0x09D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x09D9(0x0007) MISSED OFFSET
	struct FName                                       BoneSimulatePhyiscs;                                      // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NeedsBurn;                                                // 0x09E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x09E9(0x0007) MISSED OFFSET
	class UMaterialInterface*                          BurnDecalMaterial;                                        // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BurnDecalSizeMin;                                         // 0x09F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BurnDecalSizeMax;                                         // 0x0A04(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BurnDecalFadeDelay;                                       // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurnDecalFadeTime;                                        // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BurnReactionSound;                                        // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundBase*                                  BurnSound;                                                // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurnCooldown;                                             // 0x0A28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentCooldownTime;                                      // 0x0A2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Delta;                                                    // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0A34(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    TakenAHit;                                                // 0x0A38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              timeDown;                                                 // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              boneMinDist;                                              // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              distanceToSlide;                                          // 0x0A50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FXHitLocation;                                            // 0x0A54(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       boneOveride;                                              // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumArmsBlownOff;                                          // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0A6C(0x0004) MISSED OFFSET
	TArray<int>                                        ArmsNumberArray;                                          // 0x0A70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimSequence*                               Deactivate;                                               // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    InRestowPosition;                                         // 0x0A88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       FailSafeTarget;                                           // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    TwoHandedBlockFail;                                       // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HitByDeflectedBlaster;                                    // 0x0AB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    HasRestowed;                                              // 0x0AC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               TutorialDroid;                                            // 0x0AD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0AD1(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    DeathSequenceStarted;                                     // 0x0AD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TMap<struct FString, class UMaterialInstance*>     DissolveMaterialMap;                                      // 0x0AE8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              ArmSkelMeshes;                                            // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UDecalComponent*>                     DecalList;                                                // 0x0B48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               isExtendedVers;                                           // 0x0B58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0B59(0x0003) MISSED OFFSET
	struct FVector                                     FXHitDirection;                                           // 0x0B5C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UBP_TrainingDroid_AnimBlueprint_C*           TrainingDroidAnimBP;                                      // 0x0B68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MiddleSpinYaw;                                            // 0x0B70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MiddleSpinYawRate;                                        // 0x0B74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              eyeFlickerTS;                                             // 0x0B78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                nearDeathThreshold;                                       // 0x0B7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            EmitterList;                                              // 0x0B80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              HeadYaw;                                                  // 0x0B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadSpinRate;                                             // 0x0B94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_GrillSpin_lp;                                         // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_HeadSpin_lp;                                          // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_RecoilRecover;                                        // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_DamageState_lp;                                       // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Recoil_lp;                                            // 0x0BB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_WeaponRecoil;                                         // 0x0BC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSantaCruz;                                              // 0x0BC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0BC9(0x0007) MISSED OFFSET
	TMap<struct FString, class UMaterialInstance*>     ArmMaterialMap;                                           // 0x0BD0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                ArmStaticMeshes;                                          // 0x0C20(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAkAudioEvent*                               SFX_TDroid_finalHit;                                      // 0x0C30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Recoil_lp_stop;                                       // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Droid_lp;                                             // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Droid_lp_stop;                                        // 0x0C48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_TDroid_explode;                                       // 0x0C50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_DamageState_lp_stop;                                  // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Destroyed;                                            // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UStaticMesh*>                         BrokenArmMeshes;                                          // 0x0C68(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               VulnerableState;                                          // 0x0C78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0C79(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    DeathSequenceFinished;                                    // 0x0C80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTransform                                  RestowPosition;                                           // 0x0C90(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               NearDeathSocketNames;                                     // 0x0CC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               HasHitLocation;                                           // 0x0CD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0CD1(0x0003) MISSED OFFSET
	struct FVector                                     ImpactNormal;                                             // 0x0CD4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasDirectionalSparks;                                     // 0x0CE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasDecals;                                                // 0x0CE1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasHitCountFX;                                            // 0x0CE2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ForceStandardDamage;                                      // 0x0CE3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isWeak;                                                   // 0x0CE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0CE5(0x0003) MISSED OFFSET
	int                                                ExplosionCnt;                                             // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxFXCCHits;                                              // 0x0CEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      HitFXTimestamps;                                          // 0x0CF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               HasDamageStateFX;                                         // 0x0D00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasNearDeathFX;                                           // 0x0D01(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrainingDroid.BP_TrainingDroid_C");
		return ptr;
	}


	class UAkComponent* GetComponent(const struct FName& AttachPointName);
	void UpdateHitFXTimestamps();
	void PlayValidHitFX(const struct FWKNDDamageInfo& DamageInfo, int HitCount);
	void PlayHitFX(class UAkAudioEvent* SFX, bool IsTwoHanded, class UParticleSystemComponent* TwoHandedVFX, class UParticleSystem* OneHandedVFX, bool isWeak, class UAkAudioEvent* TwoHandedSFX, class UAkAudioEvent* WeakSFX);
	void UpdateVulnerabilitySFX();
	bool OnEndCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* BladeDirection);
	bool OnStartCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FName* BoneName, struct FVector* CutEntryLocation);
	bool OnUpdateCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* CutEntryLocation, struct FVector* CutEntryNormal, struct FVector2D* CollisionUV, struct FName* BoneName, struct FVector* CutExitLocation);
	bool UsesCuttingFX();
	void UpdateHeadSpinRate(float DeltaTime);
	void UpdateMiddleSpinRate(float DeltaTime);
	void DroidCleanUp();
	int CheckHealth();
	void SetAsDeflectionTarget(bool Status);
	void OnBurnt(const struct FVector& Location, const struct FVector& Normal, const struct FVector& DirectionX, const struct FName& BoneName, bool SparksOnly);
	void UserConstructionScript();
	void Projection__FinishedFunc();
	void Projection__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void OnReachedLocationAndYaw_3A3A6E494A53F1904798658209DD81B7(class AActor* MovedActor);
	void OnReachedLocation_3A3A6E494A53F1904798658209DD81B7(class AActor* MovedActor);
	void OnReachedLocationAndYaw_4883F11F4CFBFB700901E29EE6FBD497(class AActor* MovedActor);
	void OnReachedLocation_4883F11F4CFBFB700901E29EE6FBD497(class AActor* MovedActor);
	void OnDeathAnimStarted(struct FWKNDDamageInfo* DamageInfo);
	void OnDeathAnimEnded();
	void DoRagdoll(TArray<struct FRagdollInfo>* BonesToRagdoll);
	void RagdollBones(TArray<struct FRagdollInfo> Array);
	void OnRagdollComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Explode();
	void Ragdoll_TD();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_20_NewMotionFieldTargetSig__DelegateSignature(const struct FMotionFieldTarget& MotionFieldTarget);
	void BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_CombatStageCompletedSig__DelegateSignature(ECombatStageType CompletedStage, const struct FName& Token, int RemainingStageCount);
	void StartProjection();
	void StopProjection();
	void audio_ActivateDroidHover();
	void audio_DroidVoice_Activated();
	void ChargeStatus(bool NewParam);
	void WeaponMalfunction(bool NewParam);
	void DetachSaber();
	void CombatStageStarted_Event_1(ECombatStageType StartingStage, const struct FName& Token);
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void BreakArm(const struct FVector& DirectionStrike);
	void PowerAttackGlow();
	void DamagedGlow();
	void RestowDroid();
	void BndEvt__RPOCEnemyAttack_K2Node_ComponentBoundEvent_0_NotifyTwoHandedBlockFailedSig__DelegateSignature();
	void ReceiveBlasterHit(class AActor** StrikingActor);
	void RestowFinished();
	void Droid_Dissolve();
	void DamageState(int State);
	void SpawnHitDecal(const struct FVector& Direction);
	void OrientHitVel(class UParticleSystemComponent* PFX);
	void EyeFlickerTicker();
	void OnComponentAttached_Event_1(class USceneComponent* NewlyAttachedComponent);
	void GoToRestowPosition();
	void BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo);
	void PlayEffectsForStrength(const struct FWKNDDamageInfo& DamageInfo, int HitCount);
	void ExecuteUbergraph_BP_TrainingDroid(int EntryPoint);
	void DeathSequenceFinished__DelegateSignature(class ABP_TrainingDroid_C* TrainingDroid);
	void DeathSequenceStarted__DelegateSignature(class ABP_TrainingDroid_C* Droid);
	void HasRestowed__DelegateSignature();
	void HitByDeflectedBlaster__DelegateSignature(class ABP_TrainingDroid_C* Droid);
	void TwoHandedBlockFail__DelegateSignature();
	void InRestowPosition__DelegateSignature();
	void TakenAHit__DelegateSignature(class ABP_TrainingDroid_C* Droid);
	void DamageStateCounter__DelegateSignature(int Hits);
	void HasRagdolled__DelegateSignature();
	void CompletedCombatSequenceLoop__DelegateSignature(ECombatStageType NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
