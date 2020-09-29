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

// BlueprintGeneratedClass BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C
// 0x0228 (0x0948 - 0x0720)
class ABP_VaderCharacter_Basic_C : public ACharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0720(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        WaistCollider;                                            // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightSaberBelted_DynamicHL;                               // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LightSaberBelted_LLegCollider;                            // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsConstraintComponent*                 LightSaberBelted_PhysicsConstraint;                       // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        DropShdwPlane;                                            // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LookAtController_C*                      BP_LookAtController;                                      // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        ChildActor_Lightsaber;                                    // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDGrabberComponentWithAttach*             WKNDGrabberComponentWithAttach;                           // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematicBlendingComponent*                 CinematicBlending;                                        // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCinematics_Component_C*                     Cinematics_Component;                                     // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_WindSpeed_NewTrack_0_14D6115E4E97EF91D5C04389F5CA1988;// 0x0778(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_WindSpeed__Direction_14D6115E4E97EF91D5C04389F5CA1988;// 0x077C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x077D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_WindSpeed;                                       // 0x0780(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      GrabbedObject;                                            // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_Lightsaber_Vader_C*                      Saber;                                                    // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACorvaxianBox_C*                             CorvaxianBox;                                             // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PreGrabBoxTransform;                                      // 0x07A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrabbingPuzzleBox;                                        // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x07D1(0x0003) MISSED OFFSET
	float                                              ForceGrabLerpAlpha;                                       // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 ForceGrabCurve;                                           // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GrabbingSaber;                                            // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	class ABP_Lightsaber_C*                            GrabbedSaber;                                             // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  AdjustTransform;                                          // 0x07F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PreGrabSaberTransform;                                    // 0x0820(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UWindDirectionalSourceComponent*             LocalWindComponent;                                       // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              WindSpeed;                                                // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                OnLoadMinLod;                                             // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTimeX;                                               // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WindBlast;                                                // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LookAtActive;                                             // 0x0868(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0869(0x0003) MISSED OFFSET
	float                                              LookAtFadeTime;                                           // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FCharacterPerformanceLookAtStruct           CharacterPerformanceLookAtSettings;                       // 0x0870(0x0048) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector2D                                   Limits;                                                   // 0x08B8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class ABP_WKNDPlayerPawn_C*                        PlayerPawn;                                               // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x08C8(0x0008) MISSED OFFSET
	struct FTransform                                  HeadAnimatedBaseTransform;                                // 0x08D0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  PelvisAnimatedBaseTransform;                              // 0x0900(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                QueueLodChangeTimer;                                      // 0x0930(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               EnableRootMotionCorrection;                               // 0x0938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StartTickEnabled;                                         // 0x0939(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x6];                                       // 0x093A(0x0006) MISSED OFFSET
	class ACorvaxianBoxBasic_C*                        CorvaxianBoxBasic;                                        // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C");
		return ptr;
	}


	void ShouldAimAtPlayer_(bool* Result);
	void AimAtActor_(class AActor** Actor);
	void GetAnimInstance(class UAnimInstance** AnimInstance);
	void GetNpcChestLocation(struct FVector* Location);
	void SetupLookAtSettings();
	void UpdateLookAtTick();
	void UpdateWindTransform(bool bDebug);
	void StartWindTimeline();
	void CreateLocalWind();
	void StoreOnLoadMinLod();
	void GetWKNDRMotionController(class ABP_WKNDMotionController_C** MotionController);
	void GetWKNDLMotionController(class ABP_WKNDMotionController_C** MotionController);
	void DrawDebugOrientation(const struct FTransform& Orientation, bool Saber);
	void SaberToBelt();
	void SaberToRHand();
	void HideSaber();
	void ShowSaber();
	void DeactivateSaber();
	void ActivateSaber(bool IncludeGrabbedSaber_);
	void SetSequenceBlendWeight(float Interp);
	void UserConstructionScript();
	void Timeline_WindSpeed__FinishedFunc();
	void Timeline_WindSpeed__UpdateFunc();
	void FireBlaster();
	void Decals___Delete();
	void Decals___SpawnHit();
	void Decals___SpawnStab();
	void Decals___SpawnSlash();
	void Hide_Blaster(bool Show);
	void BlueprintAnimationRateOptimization(bool Enable);
	void ToggleDropShadow(bool Enable);
	void SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings);
	void RequestSetSequencerBlendWeight(float Weight);
	void ReceiveBeginPlay();
	void SpawnPuzzleBox(bool LeftHand, bool Basic_Box);
	void GrabActor(class AActor* GrabActor);
	void Reclaim_Corvaxian_Sphere();
	void DestroyCorvaxBox();
	void ForceGrabPuzzleBox(class ACorvaxianBox_C* Box);
	void ReceiveTick(float* DeltaSeconds);
	void ForceGrabSaber();
	void Event_TemporaryWindBlast(float Force, float Delay);
	void Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength);
	void BlueprintTick(bool Enable);
	void ExecuteUbergraph_BP_VaderCharacter_Basic(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
