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

// BlueprintGeneratedClass BP_LookAtController.BP_LookAtController_C
// 0x0258 (0x0348 - 0x00F0)
class UBP_LookAtController_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      MySkeletalMesh;                                           // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              LookAtStrength;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtEyeStrength;                                        // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      TargetSkeletalMesh;                                       // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             TargetSceneComponent;                                     // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     HeadLookTarget;                                           // 0x0118(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EyeLookTarget;                                            // 0x0124(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseEyeDart;                                               // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0131(0x0003) MISSED OFFSET
	float                                              EyeDartWidth;                                             // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeDartHeight;                                            // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinEyeRetargetTime;                                       // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxEyeRetargetTime;                                       // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeRetargetTimer;                                         // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeRetargetTime;                                          // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EyeTransitionTime;                                        // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeTransitionTimer;                                       // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrEyeTargetOffset;                                      // 0x0154(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     NextEyeTargetOffset;                                      // 0x0160(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x016C(0x0004) MISSED OFFSET
	struct FName                                       HeadSocketName;                                           // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadLookStrength;                                         // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BodyLookStrength;                                         // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeadToTargetAngle;                                     // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRetargetingHead;                                        // 0x0184(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0185(0x0003) MISSED OFFSET
	float                                              CurrRetargetTimer;                                        // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinHeadRetargetSpeed;                                     // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHeadRetargetSpeed;                                     // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrRetargetSpeed;                                        // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastHeadTarget;                                           // 0x0198(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EEasingFunc>                           HeadRetargetEaseFunc;                                     // 0x01A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	float                                              PassiveFollowSpeed;                                       // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PassiveFollowDelay;                                       // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrPassiveFollowDelayTimer;                              // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RetargetFinishThresholdAngle;                             // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocalOffset;                                        // 0x01B8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              LastLookStrength;                                         // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FocusedLookTarget;                                        // 0x01C8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtAlpha;                                              // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                LookAtFadeOutRoutine;                                     // 0x01D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                LookAtFadeInRoutine;                                      // 0x01E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       ChestSocketName;                                          // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeTime;                                                 // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeTimer;                                                // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowDebugEyeRays;                                         // 0x01F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebugHeadRay;                                         // 0x01F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x01FA(0x0006) MISSED OFFSET
	struct FName                                       EyeLeftSocketName;                                        // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       EyeRightSocketName;                                       // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowDebugVisionCone;                                      // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0211(0x0003) MISSED OFFSET
	struct FVector                                     Previous_Target_Location;                                 // 0x0214(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<float>                                      TargetSpeedSamples;                                       // 0x0220(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SmoothedTargetSpeed;                                      // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedThreshold;                                           // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EyeDartHeightDistanceThreshold;                           // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LookAtActive;                                             // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x023D(0x0003) MISSED OFFSET
	struct FTransform                                  HeadBaseLookAtTransform;                                  // 0x0240(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ClampLimitsAlphaFromYawAngle;                             // 0x0270(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0278(0x0008) MISSED OFFSET
	struct FTransform                                  PelvisBaseLookAtTransform;                                // 0x0280(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               LookAtByAimSightActive;                                   // 0x02B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x02B1(0x0003) MISSED OFFSET
	int                                                EyeTrackType;                                             // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Previous_Target_EyeLookLocation;                          // 0x02B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Target_RHand_Location;                                    // 0x02C4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Target_LHand_Location;                                    // 0x02D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Previous_Target_RHandLocation;                            // 0x02DC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Previous_Target_LHandLocation;                            // 0x02E8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               FavorEyeDartRight;                                        // 0x02F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x02F5(0x0003) MISSED OFFSET
	struct FVector                                     LastFocusedTarget;                                        // 0x02F8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              WeightedFocus;                                            // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PreviousFocused_Target_RHandLocation;                     // 0x0308(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PreviousFocused_Target_LHandLocation;                     // 0x0314(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              DeltaTimeX;                                               // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Target_Head_Location;                                     // 0x0324(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    My_Head_Rotation;                                         // 0x0330(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     My_Head_Location;                                         // 0x033C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LookAtController.BP_LookAtController_C");
		return ptr;
	}


	void TrackLocations();
	struct FTransform GetSocketTransform(class USceneComponent* Target, const struct FName& SocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
	void OptimizeTick(bool Enable);
	void StoreLastHeadLocationFromHeadForward();
	struct FVector GetFocusedTargetLocation();
	void GetTargetAltitude(float* Angle);
	void GetTargetAzimuth(float* Angle);
	void DeactivateHeadLookAt(float FadeTime);
	void ActivateHeadLookAt(float FadeTime);
	void RecordTargetPos();
	void GetTargetAngularSpeed(const struct FVector& OffsetHeadTarget, float* AngularSpeed);
	void DrawDebugHeadInfo();
	void DrawDebugEyeRays();
	void FadeInHeadLook();
	void FadeOutHeadLook();
	void ToggleHeadLookAt();
	void Initialize(class USkeletalMeshComponent* Skeleton, class USceneComponent* SceneTarget, class USkeletalMeshComponent* SceneTargetSkeletalMesh);
	void UpdateHeadLookAt();
	void GetHeadToTargetAngle(float* Angle);
	void UpdateEyeDart();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_LookAtController(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
