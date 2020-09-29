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

// BlueprintGeneratedClass BP_WKNDMotionController.BP_WKNDMotionController_C
// 0x0488 (0x0E08 - 0x0980)
class ABP_WKNDMotionController_C : public AWKNDMotionController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0980(0x0008) (Transient, DuplicateTransient)
	class UVelocityTracker_C*                          VelocityTrackerIndex;                                     // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           HandCollision;                                            // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           KnuckleCollision;                                         // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           IndexCollision;                                           // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVelocityTracker_C*                          VelocityTracker;                                          // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ClashRotationGuide;                                       // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCBladeSweepComponent*                    RPOCBladeSweep;                                           // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ArcEndPoint;                                              // 0x09C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             ArcDirection;                                             // 0x09C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            ArcSpline;                                                // 0x09D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        TeleportCylinder;                                         // 0x09D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Arrow;                                                    // 0x09E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Ring;                                                     // 0x09E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // 0x09F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLastFrameValidDestination;                               // 0x09F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsRoomScale;                                              // 0x09F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsValidTeleportDestination;                               // 0x09F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TeleportRotation_1;                                       // 0x09F4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    InitialControllerRotation;                                // 0x0A00(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0A0C(0x0004) MISSED OFFSET
	class ABP_Lightsaber_C*                            Lightsaber;                                               // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0A18(0x0008) MISSED OFFSET
	struct FTransform                                  HandTransform;                                            // 0x0A20(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  HandToWrist2;                                             // 0x0A50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  ControllerTransform;                                      // 0x0A80(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               PinHand;                                                  // 0x0AB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0AB1(0x0003) MISSED OFFSET
	float                                              DeltaTime;                                                // 0x0AB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StabVectorGlobal;                                         // 0x0AB8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               CutStarted;                                               // 0x0AC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0AC5(0x0003) MISSED OFFSET
	class AActor*                                      GrabbableActor;                                           // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GrabbableLocation;                                        // 0x0AD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              GrabbableDistance;                                        // 0x0ADC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    PickedUpWeapon;                                           // 0x0AE0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DroppedWeapon;                                            // 0x0AF0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               CutIndicator;                                             // 0x0B00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0B01(0x0007) MISSED OFFSET
	class UCameraComponent*                            Camera;                                                   // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           ClashCapsule;                                             // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Clash;                                                    // 0x0B18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0B19(0x0003) MISSED OFFSET
	float                                              Clash_BreakDistanceSq;                                    // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Clash_Alpha;                                              // 0x0B20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Clash_Alpha_Last;                                         // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Clash_MinDistance;                                        // 0x0B28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HandTransform_New;                                        // 0x0B2C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                SaberLagNoise;                                            // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Clashed;                                                  // 0x0B40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0B41(0x0003) MISSED OFFSET
	struct FVector                                     HandLocationCache;                                        // 0x0B44(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                SaberLagNoiseIdle;                                        // 0x0B50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstHit;                                                 // 0x0B58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BladeSweep;                                               // 0x0B59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ResetClashParticleSystem;                                 // 0x0B5A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               JustBlinked;                                              // 0x0B5B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0B5C(0x0004) MISSED OFFSET
	struct FTransform                                  BladeTransform;                                           // 0x0B60(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  BladeTransform_Controller;                                // 0x0B90(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  HandToBladeTransform;                                     // 0x0BC0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                ClashSweepSteps;                                          // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0xC];                                       // 0x0BF4(0x000C) MISSED OFFSET
	struct FTransform                                  WeaponPommelOffset;                                       // 0x0C00(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                Count_Test;                                               // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Clash_DisengageThreshold;                                 // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ARPOCSaberManager*                           SaberManager;                                             // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ClashHandPositionAlpha;                                   // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0xC];                                       // 0x0C44(0x000C) MISSED OFFSET
	struct FTransform                                  ControllerWithClashBlend;                                 // 0x0C50(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ClashHandPositionAlpha_Rot;                               // 0x0C80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClashLag;                                                 // 0x0C84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClashLagTimer;                                            // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClashLag_Rot;                                             // 0x0C8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ForcePull_AttkSel;                                        // 0x0C90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromItem_Vol;                                     // 0x0C94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromItem_FadeOut;                                 // 0x0C98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceFromItem_Absolute;                                // 0x0C9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  WeaponTipOffset;                                          // 0x0CA0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  WeaponGuardOffset;                                        // 0x0CD0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugIdeals;                                              // 0x0D00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0D01(0x0007) MISSED OFFSET
	class UAudioComponent*                             ForcePullSound;                                           // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              ClashPivot_Alpha;                                         // 0x0D10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClashPivot_Alpha_DecayTime;                               // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             ClimbGrab;                                                // 0x0D18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     NewLoc;                                                   // 0x0D20(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverlapClimbable;                                         // 0x0D2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMandateLocation;                                         // 0x0D2D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0D2E(0x0002) MISSED OFFSET
	struct FVector                                     MandatedLocation;                                         // 0x0D30(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MandatedSnappingRange;                                    // 0x0D3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSnappingLocationToMandate;                               // 0x0D40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x0D41(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    TeleportedToMandatedLocation;                             // 0x0D48(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UPrimitiveComponent*                         XLabGrabbedPrimitive;                                     // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bLock;                                                    // 0x0D60(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0D61(0x0003) MISSED OFFSET
	float                                              BlockLag;                                                 // 0x0D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockLag_Delta;                                           // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockLag_Start;                                           // 0x0D6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  WeaponTransform_Old;                                      // 0x0D70(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CurrentFilter;                                            // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MandateIds;                                               // 0x0DA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCine;                                                    // 0x0DAC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SnappingMandatedRotation;                                 // 0x0DAD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x0DAE(0x0002) MISSED OFFSET
	struct FRotator                                    TeleportDsetinationRotation;                              // 0x0DB0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LegalAngleToSnapPoint;                                    // 0x0DBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	ETeleportUIState                                   TeleportState;                                            // 0x0DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0DC1(0x0007) MISSED OFFSET
	class ABP_WKNDPlayerPawn_C*                        WKNDPlayerPawn;                                           // 0x0DC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TeleportDestinationLocation;                              // 0x0DD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportArcAge;                                           // 0x0DDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bForceOffTeleportUI;                                      // 0x0DE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0DE1(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         DebugTeleportCollidedObject;                              // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Debug_ShowCollidedObject;                                 // 0x0DF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0DF1(0x0007) MISSED OFFSET
	class USplineMeshComponent*                        ArcSplineMesh;                                            // 0x0DF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AClimbObject*                                LastClimbObject;                                          // 0x0E00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WKNDMotionController.BP_WKNDMotionController_C");
		return ptr;
	}


	bool ControllerInputIndicatesGrab();
	struct FVector GetGrabberLocation();
	struct FRotator GetGrabberRotation();
	bool IsHoldingObject();
	bool IsHoldingParticularObject(class UForceItemComponentBase* ForceItem);
	bool IsNearGrabbableObject();
	struct FTransform PickBestTransformToGrabItem(class UForceItemComponentBase* ForceItem);
	class UPrimitiveComponent* GetForcePowerAim();
	EControllerHand GetMotionControllerHand();
	class UVelocityTrackerBase* GetVelocityTracker();
	bool IsControllerTracking();
	void ReenableLastClimbObject();
	void ClearClosestMandatedLocation(const struct FVector& PlayerLocation);
	void DebugVisualizeMandatedLocations();
	void Get_Closest_Recentering_Point(const struct FVector& Player_Location, const struct FRotator& Player_Rotation, struct FTransform* Out_Transform, int* Out_Index, bool* found);
	void FindGroundAtLocation(const struct FVector& WorldLocation, struct FVector* Ground_at_Location);
	bool IsZoeBlocking(const struct FVector& NavLocation);
	void UpdateDebugHandAnimationText();
	void GetTeleportArcGrowthTime(float* Time);
	void GetTeleportLaunchSpeed(float* Speed);
	void SetArrowRotation(const struct FVector& Destination, struct FRotator* OutRotation);
	void HandleTeleportArc(float DeltaTime, ETeleportUIState* TeleportState);
	float GetThumbstickAngle();
	void CheckMandatedLocation(const struct FVector& TargetLocation, const struct FRotator& TargetRotation, bool* FoundSnapPoint, struct FVector* ResolvedLocation, int* MandatedId, struct FRotator* ResolvedRotation, bool* ActiveRotation, bool* BlueSnapPoint);
	void RemoveMandatedLocation(int NewId);
	void IsMandatedLocationActive(int ID, bool* bIsActive);
	void SetMandatedLocationActive(int ID, bool newActive, bool* bSuccess);
	void AddMandatedLocation(int NewId, const struct FVector& NewLocation, float NewSnappingRange, bool bStartActive, const struct FRotator& Rotation, bool UseRotation, bool BlueSnapPoint);
	struct FTransform GetWeaponToWrist();
	void UpdateBlockLag(float Delta_Time);
	void XLABInteractionHandlerIsSlicingTool(bool* Is_Slicing_Tool);
	void SetMandatedProperties(const struct FVector& NewLocation, float NewSnappingRange, bool bEnabled, int SnapId, const struct FRotator& Rotation, bool UseRotation);
	void UpdateGrabToWrist();
	void UpdateClashLag(float DeltaTime);
	void ApplyResistance();
	void GetControllerWithClashBlend();
	void UpdateHandTransform();
	void InitSaberManager();
	void TestForDisengage();
	void GetOffsetWeaponTransform(struct FTransform* WeaponTransform);
	void GetBlockAngle(const struct FVector& ClashLocation, bool Clash, float Delta_Time);
	void GetHandToBlade();
	void UpdateHandToBlade();
	void SetTransformWithNoise(class USceneComponent* Component, const struct FVector& Location, const struct FRotator& Rotation);
	void CacheTransforms_Cutting();
	void SyncIntentBladeToActualBlade();
	void DropSaber();
	void SetABPHandTransform();
	void PickupSaber(class ABP_Lightsaber_C* Saber);
	void PositionFingerCollision();
	void OnInitMotionController();
	void Teleport();
	void UpdateHandToWrist();
	void GetTeleportDestination(struct FVector* Location, struct FRotator* Rotation);
	void UpdateArcEndpoint(const struct FVector& NewLocation, bool ValidLocationFound, bool RotateArrow);
	void UpdateArcSpline(bool FoundValidLocation, TArray<struct FVector>* SplinePoints);
	void TraceTeleportDestination(bool* Success, bool* IncompleteArc, struct FVector* TraceLocation, TArray<struct FVector>* TracePoints, struct FVector* NavMeshLocation);
	void DisableTeleporter();
	void UserConstructionScript();
	void InpActEvt_C_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_One_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Three_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Four_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void RumbleController(float Intensity);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveActivateTeleporter();
	void ReceiveDeactivateTeleporter();
	void ReceiveOnHeldInBothHands();
	void ReceiveOnNotHeldInBothHands();
	void RangedGrabSuccess(class AActor** GrabbedItem, float* GrabbedRange);
	void ChannelForceOnActorStart(class AActor** GrabbedItem);
	void ChannelForceOnActorComplete(class AActor** GrabbedItem);
	void ChannelForceOnActorBroken(class AActor** GrabbedItem);
	void OnReverseGrip();
	void OnForeGrip();
	void OnGripShift();
	void BndEvt__GrabSphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnSecondHandGrab();
	void OnSecondHandRelease();
	void BlinkStart();
	void BlinkFinished();
	void ReceiveManuallyUpdateHandPosition();
	void StopDisarmMontage();
	void SetPinHand(bool* Val);
	void ReceiveInitializeMotionController();
	void PrepareToForceGrabItem(class UForceItemComponentBase* ForceItem);
	void BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_1_GrabbedItemSig__DelegateSignature(class AActor* Actor);
	void BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_2_DroppedItemSig__DelegateSignature();
	void SnapStart();
	void SnapStop();
	void ShowTeleportDestination(bool* alsoShowArcEndpoint);
	void HideTeleportDestination();
	void SetTeleportDestination(struct FVector* Location, struct FRotator* Rotation);
	void SetTeleportArcColour(ETeleportUIState* teleportUIState);
	void ExecuteUbergraph_BP_WKNDMotionController(int EntryPoint);
	void TeleportedToMandatedLocation__DelegateSignature();
	void DroppedWeapon__DelegateSignature(class ARPOCPickupWeapon* weapon);
	void PickedUpWeapon__DelegateSignature(class ARPOCPickupWeapon* weapon);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
