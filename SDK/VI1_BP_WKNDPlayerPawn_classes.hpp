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

// BlueprintGeneratedClass BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C
// 0x0310 (0x0B60 - 0x0850)
class ABP_WKNDPlayerPawn_C : public AWKNDPlayerPawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0850(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        VignetteOverlay;                                          // 0x0858(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDHealthComponent*                        WKNDHealth;                                               // 0x0860(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        VisionPlane;                                              // 0x0868(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                AKFootsteps;                                              // 0x0870(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_PlayerDamagePlane;                                     // 0x0878(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        RightHandTutorial;                                        // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        LeftHandTutorial;                                         // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_feet;                                                  // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sweeper;                                                  // 0x0898(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDComboDetectionComponent*                WKNDComboDetection;                                       // 0x08A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_PlayerLocomotion_C*                      BP_PlayerLocomotion;                                      // 0x08A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDirectionTrackingComponent*                 DirectionTracking;                                        // 0x08B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RangedTarget_Right;                                       // 0x08B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RangedTarget_Left;                                        // 0x08C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UForcePowerComponent_C*                      ForcePowerComponent;                                      // 0x08C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Timeline_3_col_E5C9F5EF479C2EE47B2487A511C5D262;          // 0x08D0(0x000C) (IsPlainOldData)
	float                                              Timeline_3_BB_E5C9F5EF479C2EE47B2487A511C5D262;           // 0x08DC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_3_base_E5C9F5EF479C2EE47B2487A511C5D262;         // 0x08E0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_3__Direction_E5C9F5EF479C2EE47B2487A511C5D262;   // 0x08E4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x08E5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_4;                                               // 0x08E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Timeline_4_col_A28007AC4C6810AA7E1A6F8E59B51BE8;          // 0x08F0(0x000C) (IsPlainOldData)
	float                                              Timeline_4_BB_A28007AC4C6810AA7E1A6F8E59B51BE8;           // 0x08FC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_4_base_A28007AC4C6810AA7E1A6F8E59B51BE8;         // 0x0900(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_4__Direction_A28007AC4C6810AA7E1A6F8E59B51BE8;   // 0x0904(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0905(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_5;                                               // 0x0908(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Timeline_2_col_CC444C8F4A30A42FB9E188B813D9C840;          // 0x0910(0x000C) (IsPlainOldData)
	float                                              Timeline_2_BB_CC444C8F4A30A42FB9E188B813D9C840;           // 0x091C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_2_base_CC444C8F4A30A42FB9E188B813D9C840;         // 0x0920(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_2__Direction_CC444C8F4A30A42FB9E188B813D9C840;   // 0x0924(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0925(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_3;                                               // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Timeline_1_col_C20D683F4F60F9CD0DC041BA2B543A6D;          // 0x0930(0x000C) (IsPlainOldData)
	float                                              Timeline_1_BB_C20D683F4F60F9CD0DC041BA2B543A6D;           // 0x093C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_base_C20D683F4F60F9CD0DC041BA2B543A6D;         // 0x0940(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_C20D683F4F60F9CD0DC041BA2B543A6D;   // 0x0944(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0945(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0948(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Timeline_0_col_6653E58A461AA5CA1E3BF5AA3C432019;          // 0x0950(0x000C) (IsPlainOldData)
	float                                              Timeline_0_BB_6653E58A461AA5CA1E3BF5AA3C432019;           // 0x095C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_base_6653E58A461AA5CA1E3BF5AA3C432019;         // 0x0960(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_6653E58A461AA5CA1E3BF5AA3C432019;   // 0x0964(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  LeftController;                                           // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  RightController;                                          // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsClimbingActive;                                         // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    ClimbStart_R;                                             // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClimbEnd_R;                                               // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClimbStart_L;                                             // 0x09A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClimbEnd_L;                                               // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsPlayerOnElevator;                                       // 0x09C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTeleporting;                                            // 0x09C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x6];                                       // 0x09CA(0x0006) MISSED OFFSET
	class ABP_WKNDMotionController_C*                  teleportingController;                                    // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TeleportFadeColor;                                        // 0x09D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportPhaseTime;                                        // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsThumbRightPressed;                                      // 0x09EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsThumbLeftPressed;                                       // 0x09ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x09EE(0x0002) MISSED OFFSET
	struct FScriptMulticastDelegate                    DebugStart;                                               // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UPrimitiveComponent*                         OverlappedComponent;                                      // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PlayerHitEvent;                                           // 0x0A10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       BurntBone;                                                // 0x0A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PoseFound;                                                // 0x0A28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               IsInComboMode;                                            // 0x0A38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0A39(0x0007) MISSED OFFSET
	class ACharacter*                                  EnemyOpponent;                                            // 0x0A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    NewMoveSuccessful;                                        // 0x0A48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PoseLost;                                                 // 0x0A58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                StrikeIndex;                                              // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaxStrikeIndex;                                           // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DebugPressCount;                                          // 0x0A70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DebugPressesReqd;                                         // 0x0A74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugShowControllers;                                     // 0x0A78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0A79(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    PickedUpMultiTool;                                        // 0x0A80(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UNTHapticManagerComponent*                   HapticManager;                                            // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FTimerHandle                                QueuePlayerHitTimer;                                      // 0x0A98(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    TakeSaberHit;                                             // 0x0AA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bGripLeftPressed;                                         // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bGripRightPressed;                                        // 0x0AB1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bButton1LeftPressed;                                      // 0x0AB2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bButton2LeftPressed;                                      // 0x0AB3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bButton1RightPressed;                                     // 0x0AB4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bButton2RightPressed;                                     // 0x0AB5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NavigationGroundValid;                                    // 0x0AB6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x0AB7(0x0001) MISSED OFFSET
	struct FVector                                     CameraToGround;                                           // 0x0AB8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceIntoTheUnknown;                                   // 0x0AC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportToNavigationAccumulator;                          // 0x0AC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               navigationGroundInit;                                     // 0x0ACC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0ACD(0x0003) MISSED OFFSET
	struct FVector                                     PreviousActorLocation;                                    // 0x0AD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0ADC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    TakeBlasterHit;                                           // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               AllowMovement;                                            // 0x0AF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrackThrottledDistance;                                   // 0x0AF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0AF2(0x0002) MISSED OFFSET
	float                                              AccumulatedThrottleDistance;                              // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              comfortScalar;                                            // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ParentRelativeNavWorldLocation;                           // 0x0AFC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseParentRelativePosition;                                // 0x0B08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Invulnerable;                                             // 0x0B09(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x0B0A(0x0002) MISSED OFFSET
	float                                              DamageDelay;                                              // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForceRecenterMainMenu;                                    // 0x0B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0B11(0x0003) MISSED OFFSET
	float                                              PlayerInterestingSide;                                    // 0x0B14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayerLookAtWeightedSide;                                 // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0B1C(0x0004) MISSED OFFSET
	struct FTransform                                  NewVar_1;                                                 // 0x0B20(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              NavMeshToGroundAverage;                                   // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsingDirectionalHalo;                                     // 0x0B54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ExtendedDojoActive;                                       // 0x0B55(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0B56(0x0002) MISSED OFFSET
	class ABP_PlayerCombatPointManager_C*              CombatPointManager;                                       // 0x0B58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WKNDPlayerPawn.BP_WKNDPlayerPawn_C");
		return ptr;
	}


	void UseDirectionalHalo();
	void GetHitAudioEvent(class AActor* weapon, EDamageType DamageType, class UAkAudioEvent** AudioEvent);
	void GetPlayerFloorPosition(struct FVector* NewParam);
	void GetClosestRecenteringPoint(struct FVector* CheckLocation, struct FTransform* outTransform, int* outIndex, bool* found);
	void UpdatePlayerLookAtSideFocus(float DeltaTime);
	void StartButtonTutorialComponent(EControllerHand Hand, int Tutorial, class USceneComponent* TargetComponent, const struct FText& TutorialText, float Arrow_fades_when_closer_than_dist, float Arrow_Totally_Fade_Dist);
	void ForceOffTeleportUI(bool bForceOff);
	void DrawLocomotionDebug();
	bool IsMandatedPointBlue(int* pointIndex);
	void BroadcastThrottleAsTeleport();
	void GetClosestMandatedPoint(struct FVector* CheckLocation, struct FTransform* outTransform, int* outIndex, bool* found);
	void SpawnLightsaber();
	void SpawnMultiTool();
	void SetNavigationRoot(float DeltaTime);
	void GetBlackoutWarningTextTransform(struct FTransform* SpawnTransform);
	void GetLightsaberToolbeltSlot(class UWKNDToolbeltSlotComponent** RightToolbeltSlot);
	void PickupDispatch(class AActor* Actor, EControllerHand Hand);
	void SetNavFilter(class UClass* NewParam);
	void CompleteButtonTutorial(EControllerHand Hand, int Tutorial);
	void StartButtonTutorial(EControllerHand Hand, int Tutorial, const struct FText& TutorialText, class AActor* Target_Actor, float Arrow_fades_when_closer_than_dist, float Arrow_Totally_Fade_Dist);
	void SetNewFacingRotation(const struct FRotator& DesiredRotation);
	void SetComboDetectionWeapon(class ARPOCPickupWeapon* weapon, EControllerHand Hand);
	void SetupComboDetection();
	void UserConstructionScript();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_30(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_29(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_28(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_27(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_K_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void OnNotifyEnd_402E9D8A4E83FBFB9E6B6AB21A3B3155(const struct FName& NotifyName);
	void OnNotifyBegin_402E9D8A4E83FBFB9E6B6AB21A3B3155(const struct FName& NotifyName);
	void OnInterrupted_402E9D8A4E83FBFB9E6B6AB21A3B3155(const struct FName& NotifyName);
	void OnBlendOut_402E9D8A4E83FBFB9E6B6AB21A3B3155(const struct FName& NotifyName);
	void OnCompleted_402E9D8A4E83FBFB9E6B6AB21A3B3155(const struct FName& NotifyName);
	void OnNotifyEnd_10F73EF14C1DB8ADE521A89279BC3383(const struct FName& NotifyName);
	void OnNotifyBegin_10F73EF14C1DB8ADE521A89279BC3383(const struct FName& NotifyName);
	void OnInterrupted_10F73EF14C1DB8ADE521A89279BC3383(const struct FName& NotifyName);
	void OnBlendOut_10F73EF14C1DB8ADE521A89279BC3383(const struct FName& NotifyName);
	void OnCompleted_10F73EF14C1DB8ADE521A89279BC3383(const struct FName& NotifyName);
	void InpActEvt_C_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Four_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void UpdateDamagePlane();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void VisualAssistHalo(const struct FVector& Location);
	void ReceiveOnTeleport(class AWKNDMotionController** MotionController);
	void StopAllDamageEffects();
	void BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnHealthRestored__DelegateSignature();
	void PlayDisarmMontage(EDisarmType* DisarmedHand);
	void PickedUpWeaponRight(class ARPOCPickupWeapon* weapon);
	void DroppedWeaponRight(class ARPOCPickupWeapon* weapon);
	void PickedUpWeaponLeft(class ARPOCPickupWeapon* weapon);
	void DroppedWeaponLeft(class ARPOCPickupWeapon* weapon);
	void UpdatePlayerDamageEffect(float Base, float BB, const struct FVector& col);
	void ReceiveOnBurntHand(struct FVector* Location, struct FVector* Normal, struct FVector* Direction, struct FName* BoneName);
	void QuitToMenuLevel();
	void StartBlockLag();
	void OnHitGround_Event(float Distance);
	void OnFallStart_Event();
	void BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_0_NTSnapSignature__DelegateSignature(TEnumAsByte<ENTSnapDirection> Direction);
	void BndEvt__SnapRotationComponent_K2Node_ComponentBoundEvent_1_NTSnapFinishedSignature__DelegateSignature();
	void EndLocomotion(const struct FVector& StartLocation, const struct FVector& EndLocation);
	void BndEvt__WKNDHealth_K2Node_ComponentBoundEvent_0_OnTakeDamage__DelegateSignature(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo);
	void StartLocomotion();
	void AbortPlayerDamage(class ARPOCPickup_Lightsaber* Saber1, class ARPOCPickup_Lightsaber* Saber2, float RewindTime, const struct FSaberClashData& Clash);
	void BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_3_BlackoutEndedDelegate__DelegateSignature();
	void BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_5_BlackoutStartedDelegate__DelegateSignature();
	void BroadcastMandatedSlideAsTeleport(class AWKNDMotionController** teleportingController);
	void OnGamePaused(bool bShowPauseMenu);
	void OnGameUnPaused(bool bShowPauseMenu);
	void BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_4_BlackoutStateChangedDelegate__DelegateSignature();
	void BndEvt__PlayerScreenBlackOutComponent_K2Node_ComponentBoundEvent_0_BlackoutStateChangedDelegate__DelegateSignature();
	void CameraTeleport(struct FVector* Location, struct FRotator* Rotator);
	void BndEvt__VRNotificationComponent_K2Node_ComponentBoundEvent_0_VRNotificationsDelegate__DelegateSignature();
	void BeginFallHaptics(float* FallDistance);
	void DeflectProjectile(class AActor** Projectile, bool* bParried);
	void ExecuteUbergraph_BP_WKNDPlayerPawn(int EntryPoint);
	void TakeBlasterHit__DelegateSignature();
	void TakeSaberHit__DelegateSignature(class AActor* Saber);
	void PickedUpMultiTool__DelegateSignature(EControllerHand Hand);
	void PoseLost__DelegateSignature(const struct FName& PoseName);
	void NewMoveSuccessful__DelegateSignature(const struct FName& MoveName);
	void PoseFound__DelegateSignature(const struct FName& PoseName);
	void PlayerHitEvent__DelegateSignature();
	void DebugStart__DelegateSignature();
	void ClimbEnd_L__DelegateSignature();
	void ClimbStart_L__DelegateSignature();
	void ClimbEnd_R__DelegateSignature();
	void ClimbStart_R__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
