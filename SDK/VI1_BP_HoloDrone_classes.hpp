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

// BlueprintGeneratedClass BP_HoloDrone.BP_HoloDrone_C
// 0x0240 (0x05B8 - 0x0378)
class ABP_HoloDrone_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Jumbotron_Background;                                  // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Minitron_Background;                                   // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        HologramProjectionBeam;                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AkMain;                                                   // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             UI_Root;                                                  // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      HolodroneMesh;                                            // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshActorMovementComponent*         SkeletalMeshActorMovement;                                // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_screen_R;                                      // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_screen_L;                                      // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_line;                                          // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_time_lower;                                    // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_time_upper;                                    // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_FillReplayButton;                                      // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_FillNextButton;                                        // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               ReplayButtonCollider;                                     // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ReplayWaveButton;                                         // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ReplayButtonRoot;                                         // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NextWaveButtonCollider;                                   // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        NextWaveButton;                                           // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             NextButtonRoot;                                           // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_LiveRating;                                    // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_Timer;                                         // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_PlayerHealth;                                  // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_Reward;                                        // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_RightMedal;                                    // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_CenterMedal;                                   // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             sfxLocator_LeftMedal;                                     // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_HolodroneJumbotronComponent_C*           Widget_Jumbotron;                                         // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_holo;                                                  // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_HolodroneMinitronComponent_C*            Widget_Minitron;                                          // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDHealthComponent*                        HealthComponent;                                          // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_ScaleButtons_value_F8BDFE04447A2376201010A7B5EB9F0F;// 0x0480(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_ScaleButtons__Direction_F8BDFE04447A2376201010A7B5EB9F0F;// 0x0484(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_ScaleButtons;                                    // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_ReplayButtonMeter_threshold_1D70D74B4EA509C3D98BC5A40B4B77E5;// 0x0490(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_ReplayButtonMeter__Direction_1D70D74B4EA509C3D98BC5A40B4B77E5;// 0x0494(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0495(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_ReplayButtonMeter;                               // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_NextButtonMeter_threshold_86FEE90A4A1CB18900B08C81C3A82280;// 0x04A0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_NextButtonMeter__Direction_86FEE90A4A1CB18900B08C81C3A82280;// 0x04A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04A5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_NextButtonMeter;                                 // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_ScaleMinitron_VerticalScale_795C28A0450585917F6AD59B10CA7559;// 0x04B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_ScaleMinitron_HorizontalScale_795C28A0450585917F6AD59B10CA7559;// 0x04B4(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_ScaleMinitron__Direction_795C28A0450585917F6AD59B10CA7559;// 0x04B8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04B9(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_ScaleMinitron;                                   // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_ScaleJumbotron_VerticalScale_616A88B94DEE31F9D6E726913F6BD7C1;// 0x04C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_ScaleJumbotron_HorizontalScale_616A88B94DEE31F9D6E726913F6BD7C1;// 0x04CC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_ScaleJumbotron__Direction_616A88B94DEE31F9D6E726913F6BD7C1;// 0x04D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Timeline_ScaleJumbotron;                                  // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_HologramProjection_Alpha_BB1A03C04B70439F089AFEAC0EC5C30E;// 0x04E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_HologramProjection__Direction_BB1A03C04B70439F089AFEAC0EC5C30E;// 0x04E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_HologramProjection;                              // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Amplitude;                                                // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Period;                                                   // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Phase;                                                    // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsWaving;                                                 // 0x04FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x04FD(0x0003) MISSED OFFSET
	float                                              WaveStartTime;                                            // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    M_NextButton;                                             // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    M_ReplayButton;                                           // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_ExDojoWaveManager_C*                     ExDojoWaveManager;                                        // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentRoundNumber;                                       // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0524(0x0004) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DynamicMat_HologramBeam;                                  // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Velocity;                                                 // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0534(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_Voice;                                                // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_HoloDrone_Controller_C*                  HolodroneController;                                      // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumCutSpeed;                                          // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0554(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               SFX_StartFillingButton;                                   // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_StopFillingButton;                                    // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAkAudioEvent*                               SFX_ButtonFillCompete;                                    // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FastfowardCooldownDuration;                               // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DojoActive;                                               // 0x0574(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBeginDisplayRound;                                      // 0x0578(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FLinearColor                                Color_HologramBeam_Blue;                                  // 0x0588(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Color_HologramBeam_Red;                                   // 0x0598(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsOnFinalWave;                                            // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	class ARPOCPickup_Lightsaber*                      PlayerSaber;                                              // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoloDrone.BP_HoloDrone_C");
		return ptr;
	}


	bool OnEndCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& BladeDirection);
	bool OnStartCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FName& BoneName, const struct FVector& CutEntryLocation);
	bool OnUpdateCut(class AActor* CuttingActor, class UPrimitiveComponent* CutComponent, const struct FVector& CutEntryLocation, const struct FVector& CutEntryNormal, const struct FVector2D& CollisionUV, const struct FName& BoneName, const struct FVector& CutExitLocation);
	bool UsesCuttingFX();
	void ChangeHolographicButtonColors(TEnumAsByte<EnemyWaveType> WaveType);
	void ChangeHologramBeamColor(TEnumAsByte<EnemyWaveType> WaveType);
	float GetFastFillValue(class UTimelineComponent* Timeline);
	bool DoesCutExceedsMinimumCutSpeed(class ULightsaberBladeComponent* LightsaberBladeComponent);
	void SetJumbotronDisplayPointAndCheckpoint(const struct FHolodroneDisplayPoints& DisplayPoints, float PathRatio);
	void HandleJumbotronCheckpointReached();
	float GetCurrentWaveParameter();
	void StopWaving();
	void StartWaving();
	void UserConstructionScript();
	void Timeline_ScaleJumbotron__FinishedFunc();
	void Timeline_ScaleJumbotron__UpdateFunc();
	void Timeline_ScaleMinitron__FinishedFunc();
	void Timeline_ScaleMinitron__UpdateFunc();
	void Timeline_NextButtonMeter__FinishedFunc();
	void Timeline_NextButtonMeter__UpdateFunc();
	void Timeline_ReplayButtonMeter__FinishedFunc();
	void Timeline_ReplayButtonMeter__UpdateFunc();
	void Timeline_ReplayButtonMeter__myeventrack__EventFunc();
	void Timeline_ScaleButtons__FinishedFunc();
	void Timeline_ScaleButtons__UpdateFunc();
	void Timeline_HologramProjection__FinishedFunc();
	void Timeline_HologramProjection__UpdateFunc();
	void OnNotifyEnd_75BFFA3F40D715D72C24AB8E495AADC5(const struct FName& NotifyName);
	void OnNotifyBegin_75BFFA3F40D715D72C24AB8E495AADC5(const struct FName& NotifyName);
	void OnInterrupted_75BFFA3F40D715D72C24AB8E495AADC5(const struct FName& NotifyName);
	void OnBlendOut_75BFFA3F40D715D72C24AB8E495AADC5(const struct FName& NotifyName);
	void OnCompleted_75BFFA3F40D715D72C24AB8E495AADC5(const struct FName& NotifyName);
	void PlayJumbotronAnim(bool Forward_);
	void PlayMinitronAnim(bool Forward_);
	void SetVoiceToneFromPerformance();
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void HandleButtonFillCompleted(bool HasSelectedNext);
	void ReverseNextButton();
	void ReverseReplayButton();
	void ResetButtonProgress();
	void SetButtonsEnabled(bool Enable);
	void PlayButtonEnableAnimation(bool Enable);
	void BeginReplayButtonProgress();
	void EndReplayButtonProgress();
	void BeginNextButtonProgress();
	void EndNextButtonProgress();
	void FastforwardNextButton();
	void FastforwardReplayButton();
	void InitHologramBeam();
	void ShowHologramBeam();
	void HideHologramBeam();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnStateChanged(TEnumAsByte<EHoloDroneState> NewState);
	void RequestRoundDisplay();
	void HandleBeginSpawn();
	void HandleBeginDespawn();
	void ForceDestroy();
	void BndEvt__Widget_Minitron_K2Node_ComponentBoundEvent_1_OnAllRewardsDisplayed__DelegateSignature();
	void ExecuteUbergraph_BP_HoloDrone(int EntryPoint);
	void OnBeginDisplayRound__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
