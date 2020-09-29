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

// BlueprintGeneratedClass BP_ZoeyCharacter.BP_ZoeyCharacter_C
// 0x01C5 (0x0945 - 0x0780)
class ABP_ZoeyCharacter_C : public AWKNDZoeyDroidCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0780(0x0008) (Transient, DuplicateTransient)
	class UPhysicalAnimationComponent*                 PhysicalAnimation;                                        // 0x0788(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_Eyes;                                                  // 0x0790(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             LookAtTarget;                                             // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Zoe_ArmLeft;                                              // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AK_Head;                                                  // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AK_Main;                                                  // 0x07B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Zoe_ArmRight;                                             // 0x07B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LookAtController_C*                      BP_LookAtController;                                      // 0x07C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_HoverController_C*                       BP_HoverController;                                       // 0x07C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDDroidInstrumentFoleyComponent*          WKNDDroidInstrumentFoley;                                 // 0x07D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematicBlendingComponent*                 CinematicBlending;                                        // 0x07D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x07E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDGrabberComponentWithAttach*             WKNDGrabberComponentWithAttach;                           // 0x07E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               ZoeMesh;                                                  // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBP_ZoeyDroid_AnimBlueprint_C*               ZoeyAnimBlueprint;                                        // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCharacterPerformanceLookAtStruct           CharacterPerformanceLookAtSettings;                       // 0x0800(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               LookAtActive;                                             // 0x0848(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0849(0x0003) MISSED OFFSET
	float                                              LookAtFadeTime;                                           // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   LookAtDistanceLimits;                                     // 0x0850(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               RunningOnQuest;                                           // 0x0858(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0859(0x0007) MISSED OFFSET
	class UAkAudioEvent*                               SFX_Hover_lp;                                             // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Neck;                                                 // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               Shoulder;                                                 // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Neck_lp;                                              // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Arm_R_lp;                                             // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Arm_L_lp;                                             // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_WKNDPlayerPawn_C*                        PlayerPawn;                                               // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0898(0x0008) MISSED OFFSET
	struct FTransform                                  HeadAnimatedBaseTransform;                                // 0x08A0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  PelvisAnimatedBaseTransform;                              // 0x08D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               FollowingPlayer;                                          // 0x0900(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0901(0x000F) MISSED OFFSET
	struct FTransform                                  HeadAnimatedBaseTransformHover;                           // 0x0910(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PhysicalAnimationWeight;                                  // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableRootMotionCorrection;                               // 0x0944(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ZoeyCharacter.BP_ZoeyCharacter_C");
		return ptr;
	}


	void ShouldAimAtPlayer_(bool* Result);
	void AimAtActor_(class AActor** Actor);
	void GetAnimInstance(class UAnimInstance** AnimInstance);
	void GetNpcChestLocation(struct FVector* Location);
	class UAkComponent* GetComponent(const struct FName& AttachPointName);
	void AutoOptimizeCollisionSettingsByPlayerDistance();
	void DebugDrawPredictedStoppingLocation();
	bool OnEndCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* BladeDirection);
	bool OnStartCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FName* BoneName, struct FVector* CutEntryLocation);
	bool OnUpdateCut(class AActor** CuttingActor, class UPrimitiveComponent** CutComponent, struct FVector* CutEntryLocation, struct FVector* CutEntryNormal, struct FVector2D* CollisionUV, struct FName* BoneName, struct FVector* CutExitLocation);
	bool UsesCuttingFX();
	void DrawAKComponents(bool DrawComponents);
	void SetSequenceBlendWeight(float Interp);
	void UserConstructionScript();
	void FireBlaster();
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
	void AnimProxy_ObjectThrow(bool* oneHand, float* throwDistance);
	void AnimProxy_ObjectPickup(bool* oneHand, float* Height);
	void AnimProxy_ObjectHandOver(bool* oneHand);
	void AnimProxy_ObjectCatchSuccess(bool* oneHand, float* catchAngle);
	void AnimProxy_ObjectCatchReady(bool* oneHand, float* catchAngle);
	void AnimProxy_ObjectCatchFail(bool* oneHand);
	void AnimProxy_ObjectLetGo();
	void ReceiveTick(float* DeltaSeconds);
	void TickInstrumentFoleyUpdate();
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void ReceiveBeginPlay();
	void Set_Zoe_indirect_lighting();
	void Event_PhysicalAnimation(bool Enable, float Weight);
	void Fortress_TurnOffUnneededComps();
	void ExecuteUbergraph_BP_ZoeyCharacter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
