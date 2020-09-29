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

// BlueprintGeneratedClass BP_KariusCharacter_Basic.BP_KariusCharacter_Basic_C
// 0x00F4 (0x0814 - 0x0720)
class ABP_KariusCharacter_Basic_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        DropShdwPlane;                                            // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LookAtController_C*                      BP_LookAtController;                                      // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematicBlendingComponent*                 CinematicBlending;                                        // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               LookAtActive;                                             // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0749(0x0003) MISSED OFFSET
	float                                              LookAtFadeTime;                                           // 0x074C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LookAtDistanceLimits;                                     // 0x0750(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FCharacterPerformanceLookAtStruct           CharacterPerformanceLookAtSettings;                       // 0x0758(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               EmissiveOnQuest_;                                         // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07A1(0x0007) MISSED OFFSET
	class ABP_WKNDPlayerPawn_C*                        PlayerPawn;                                               // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  HeadAnimatedBaseTransform;                                // 0x07B0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PelvisAnimatedBaseTransform;                              // 0x07E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShouldTick_;                                              // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStartTickEnabled;                                        // 0x0811(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDropShadowEnabled;                                       // 0x0812(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableRootMotionCorrection;                               // 0x0813(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_KariusCharacter_Basic.BP_KariusCharacter_Basic_C");
		return ptr;
	}


	void GetNpcChestLocation(struct FVector* Location);
	void ShouldAimAtPlayer_(bool* Result);
	void AimAtActor_(class AActor** Actor);
	void GetAnimInstance(class UAnimInstance** AnimInstance);
	void SetSequenceBlendWeight(float Interp);
	void UserConstructionScript();
	void Decals___SpawnHit();
	void Decals___SpawnStab();
	void Decals___SpawnSlash();
	void Hide_Blaster(bool Show);
	void BlueprintAnimationRateOptimization(bool Enable);
	void SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings);
	void RequestSetSequencerBlendWeight(float Weight);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void Decals___Delete();
	void FireBlaster();
	void BlueprintTick(bool Enable);
	void ToggleDropShadow(bool Enable);
	void ExecuteUbergraph_BP_KariusCharacter_Basic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
