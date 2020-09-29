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

// BlueprintGeneratedClass BP_TrainingRemote.BP_TrainingRemote_C
// 0x0190 (0x0510 - 0x0380)
class ABP_TrainingRemote_C : public AWKNDTrainingRemotePawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	class UWKNDHealthComponent*                        Health_Component;                                         // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AK_Main;                                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshActorMovementComponent*         SkeletalMeshActorMovement;                                // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDBlasterComponent*                       WKNDBlaster;                                              // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PFX_MarksmanLightshafts;                                  // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SK_MarksmanH;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDAttackPatternComponent*                 WKNDAttackPattern;                                        // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDFloatingMovementComponent*              WKNDFloatingMovement;                                     // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIInstructionComponent*                     AIInstruction;                                            // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FiringRange;                                              // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    Destroyed;                                                // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class ABP_RemoteDronePod_C*                        Pod;                                                      // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ATargetPoint*>                        FlightTargets;                                            // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class APawn*                                       Target_Actor;                                             // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATargetPoint*                                LastChosenTarget;                                         // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATargetPoint*                                CurrentChosenTarget;                                      // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Deflected;                                                // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTimerHandle                                ShotTimeOutTimer;                                         // 0x0428(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ATargetPoint*                                DistanceCheckTarget;                                      // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanShoot;                                                 // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	int                                                Mode;                                                     // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ShotCount;                                                // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DesiredShots;                                             // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              ShotsInPlay;                                              // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               bSuccessfulDeflect;                                       // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0459(0x0003) MISSED OFFSET
	float                                              LastShotTime;                                             // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time_Between_Shots;                                       // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlipFlopMode;                                             // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0465(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    Missed;                                                   // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               SingleBarrage;                                            // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0479(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    SingleBarrageEnded;                                       // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     IdleOrigin;                                               // 0x0490(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_X;                                                    // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Y;                                                    // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumTravelDistance;                                    // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ETrainingRemoteFiringMode>             FiringMode;                                               // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               SFX_Drone_lp;                                             // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Charge;                                               // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Move;                                                 // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Appear;                                               // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x04D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Velocity;                                                 // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RestowLocation;                                           // 0x04E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ReadyForRestow;                                           // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              DeathExplosionScale;                                      // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               SFX_Hit;                                                  // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrainingRemote.BP_TrainingRemote_C");
		return ptr;
	}


	void GetEnemyType(EEnemyType* EnemyType);
	void Explode();
	void IsDestroyed(bool* IsDestroyed);
	void InitSpawned(int MaxHits);
	void SelectPointOnPlane(struct FVector* Point_on_Plane);
	void DebugPrint();
	void FilterShotReports(class AActor* TestShot, bool* bAllAccountedFor);
	void InitAttackSequence(int NewDesiredShots, float Time_Between_Shots, TEnumAsByte<ETrainingRemoteFiringMode> FiringMode);
	void UserConstructionScript();
	void OnNotifyEnd_CD699DB947320AEDEFDC3A98B0E8948C(const struct FName& NotifyName);
	void OnNotifyBegin_CD699DB947320AEDEFDC3A98B0E8948C(const struct FName& NotifyName);
	void OnInterrupted_CD699DB947320AEDEFDC3A98B0E8948C(const struct FName& NotifyName);
	void OnBlendOut_CD699DB947320AEDEFDC3A98B0E8948C(const struct FName& NotifyName);
	void OnCompleted_CD699DB947320AEDEFDC3A98B0E8948C(const struct FName& NotifyName);
	void OnNotifyEnd_F75823894AE21CCDCEFE1288A0F4EDB9(const struct FName& NotifyName);
	void OnNotifyBegin_F75823894AE21CCDCEFE1288A0F4EDB9(const struct FName& NotifyName);
	void OnInterrupted_F75823894AE21CCDCEFE1288A0F4EDB9(const struct FName& NotifyName);
	void OnBlendOut_F75823894AE21CCDCEFE1288A0F4EDB9(const struct FName& NotifyName);
	void OnCompleted_F75823894AE21CCDCEFE1288A0F4EDB9(const struct FName& NotifyName);
	void ReceiveBeginPlay();
	void BndEvt__WKNDBlaster_K2Node_ComponentBoundEvent_0_BlasterShotFiredSignature__DelegateSignature(class AActor* Shooter, class AActor* Projectile, class AActor* TargetActor);
	void DoAttackSequence(int NewDesiredShots, float Time_Between_Shots, TEnumAsByte<ETrainingRemoteFiringMode> FiringMode);
	void ReleaseToMove(class AActor* Shot);
	void ShotTimeOut();
	void BeginShots();
	void ProjDeflected(class AActor* ProjActor, class AActor* DeflectingActor, bool bParried);
	void ProjCollidingHit(class AActor* ProjActor, const struct FHitResult& HitResult);
	void EndBarrage();
	void RecoveredFromHit();
	void StopBarrage();
	void FlightLoop();
	void StopFlightLoop();
	void SpawnHitDecal(const struct FVector& Direction);
	void BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature();
	void GoToRestowPosition();
	void Restow();
	void ApplyBlasterDamage(class AActor* Hit_Actor);
	void BndEvt__Health_Component_K2Node_ComponentBoundEvent_1_OnTakeDamage__DelegateSignature(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo);
	void ExecuteUbergraph_BP_TrainingRemote(int EntryPoint);
	void ReadyForRestow__DelegateSignature();
	void SingleBarrageEnded__DelegateSignature();
	void Missed__DelegateSignature();
	void Deflected__DelegateSignature();
	void Destroyed__DelegateSignature(class ABP_TrainingRemote_C* Remote_Drone);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
