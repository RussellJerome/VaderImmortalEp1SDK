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

// BlueprintGeneratedClass BP_PriestessCharacter_Basic.BP_PriestessCharacter_Basic_C
// 0x00F1 (0x0811 - 0x0720)
class ABP_PriestessCharacter_Basic_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (Transient, DuplicateTransient)
	class UBP_LookAtController_C*                      BP_LookAtController;                                      // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_respirator;                                            // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematicBlendingComponent*                 CinematicBlending;                                        // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCharacterPerformanceLookAtStruct           CharacterPerformanceLookAtSettings;                       // 0x0748(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LookAtActive;                                             // 0x0790(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0791(0x0003) MISSED OFFSET
	float                                              LookAtFadeTime;                                           // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LookAtDistanceLimits;                                     // 0x0798(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABP_WKNDPlayerPawn_C*                        PlayerPawn;                                               // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x07A8(0x0008) MISSED OFFSET
	struct FTransform                                  HeadAnimatedBaseTransform;                                // 0x07B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PelvisAnimatedBaseTransform;                              // 0x07E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableRootMotionCorrection;                               // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PriestessCharacter_Basic.BP_PriestessCharacter_Basic_C");
		return ptr;
	}


	void ShouldAimAtPlayer_(bool* Result);
	void AimAtActor_(class AActor** Actor);
	void GetAnimInstance(class UAnimInstance** AnimInstance);
	void GetNpcChestLocation(struct FVector* Location);
	bool OnEndCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& BladeDirection);
	bool OnStartCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FName& BoneName, const struct FVector& CutEntryLocation);
	bool OnUpdateCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& CutEntryLocation, const struct FVector& CutEntryNormal, const struct FVector2D& CollisionUV, const struct FName& BoneName, const struct FVector& CutExitLocation);
	bool UsesCuttingFX();
	void SetSequenceBlendWeight(float Interp);
	void UserConstructionScript();
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
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void ReceiveTick(float* DeltaSeconds);
	void Decals___Delete();
	void FireBlaster();
	void ExecuteUbergraph_BP_PriestessCharacter_Basic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
