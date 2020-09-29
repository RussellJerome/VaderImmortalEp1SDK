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

// BlueprintGeneratedClass BP_VylipCharacter_Basic.BP_VylipCharacter_Basic_C
// 0x0115 (0x0835 - 0x0720)
class ABP_VylipCharacter_Basic_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (Transient, DuplicateTransient)
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                        // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DropShdwPlane;                                            // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      LoreTotem;                                                // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LookAtController_C*                      BP_LookAtController;                                      // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_respirator;                                            // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor_Blaster;                                       // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematicBlendingComponent*                 CinematicBlending;                                        // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_EnemyE11_C*                              Blaster;                                                  // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               LookAtActive;                                             // 0x0770(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0771(0x0003) MISSED OFFSET
	float                                              LookAtFadeTime;                                           // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LookAtDistanceLimits;                                     // 0x0778(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FCharacterPerformanceLookAtStruct           CharacterPerformanceLookAtSettings;                       // 0x0780(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_WKNDPlayerPawn_C*                        PlayerPawn;                                               // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  HeadAnimatedBaseTransform;                                // 0x07D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PelvisAnimatedBaseTransform;                              // 0x0800(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              PhysicalAnimationWeight;                                  // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableRootMotionCorrection;                               // 0x0834(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VylipCharacter_Basic.BP_VylipCharacter_Basic_C");
		return ptr;
	}


	bool OnEndCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& BladeDirection);
	bool OnStartCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FName& BoneName, const struct FVector& CutEntryLocation);
	bool OnUpdateCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& CutEntryLocation, const struct FVector& CutEntryNormal, const struct FVector2D& CollisionUV, const struct FName& BoneName, const struct FVector& CutExitLocation);
	bool UsesCuttingFX();
	void GetNpcChestLocation(struct FVector* Location);
	void GetAnimInstance(class UAnimInstance** AnimInstance);
	void AimAtActor_(class AActor** Actor);
	void ShouldAimAtPlayer_(bool* Result);
	void SwapLoreTotemToChestSocket();
	void SwapLoreTotemToWeaponSocket();
	void HideLoreTotem();
	void ShowLoreTotem();
	void ShowBlaster();
	void HideBlaster();
	void SetSequenceBlendWeight(float Interp);
	void UserConstructionScript();
	void Decals___Delete();
	void Decals___SpawnHit();
	void Decals___SpawnStab();
	void Decals___SpawnSlash();
	void BlueprintTick(bool Enable);
	void Hide_Blaster(bool Show);
	void BlueprintAnimationRateOptimization(bool Enable);
	void ToggleDropShadow(bool Enable);
	void SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings);
	void RequestSetSequencerBlendWeight(float Weight);
	void ReceiveBeginPlay();
	void OnFireBlasterAnimNotify();
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void ReceiveTick(float* DeltaSeconds);
	void Event_PhysicalAnimation(bool Enable, float Weight);
	void FireBlaster();
	void ExecuteUbergraph_BP_VylipCharacter_Basic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
