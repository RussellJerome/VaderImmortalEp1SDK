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

// BlueprintGeneratedClass BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C
// 0x013C (0x085C - 0x0720)
class ABP_Stormtrooper_CIN_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        DropShdwPlane;                                            // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_CorvaxSaberHitFlash;                                    // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LookAtController_C*                      BP_LookAtController;                                      // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor_Blaster;                                       // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematicBlendingComponent*                 CinematicBlending;                                        // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_EnemyE11_C*                              Blaster;                                                  // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanFireBlaster;                                           // 0x0760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowAimAtPlayer;                                         // 0x0761(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0762(0x0006) MISSED OFFSET
	class AActor*                                      AimAtActor;                                               // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               AccurateShot;                                             // 0x0770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0771(0x0003) MISSED OFFSET
	struct FVector                                     ShotSpread;                                               // 0x0774(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	class ABP_WKNDPlayerPawn_C*                        PlayerPawn;                                               // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0788(0x0008) MISSED OFFSET
	struct FTransform                                  HeadAnimatedBaseTransform;                                // 0x0790(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PelvisAnimatedBaseTransform;                              // 0x07C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtFadeTime;                                           // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LookAtDistanceLimits;                                     // 0x07F4(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               LookAtActive;                                             // 0x07FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x07FD(0x0003) MISSED OFFSET
	struct FCharacterPerformanceLookAtStruct           CharacterPerformanceLookAtSettings;                       // 0x0800(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UDecalComponent*>                     DecalList;                                                // 0x0848(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bStartTickEnabled;                                        // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldTick_;                                              // 0x0859(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDropShadowEnabled;                                       // 0x085A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableRootMotionCorrection;                               // 0x085B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Stormtrooper_CIN.BP_Stormtrooper_CIN_C");
		return ptr;
	}


	void GetNpcChestLocation(struct FVector* Location);
	void GetAnimInstance(class UAnimInstance** AnimInstance);
	void AimAtActor_(class AActor** Actor);
	void ShouldAimAtPlayer_(bool* Result);
	void Temp_OffsetBlaster();
	void OffsetBlaster();
	void ShowBlaster();
	void HideBlaster();
	void SetSequenceBlendWeight(float Interp);
	void UserConstructionScript();
	void BlueprintAnimationRateOptimization(bool Enable);
	void SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings);
	void RequestSetSequencerBlendWeight(float Weight);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void FireBlaster();
	void BlueprintTick(bool Enable);
	void Hide_Blaster(bool Show);
	void ToggleDropShadow(bool Enable);
	void Decals___SpawnStab();
	void Decals___SpawnSlash();
	void Decals___SpawnHit();
	void Decals___Delete();
	void ExecuteUbergraph_BP_Stormtrooper_CIN(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
