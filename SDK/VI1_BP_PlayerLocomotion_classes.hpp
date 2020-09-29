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

// BlueprintGeneratedClass BP_PlayerLocomotion.BP_PlayerLocomotion_C
// 0x0189 (0x0291 - 0x0108)
class UBP_PlayerLocomotion_C : public UPlayerLocomotion
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0108(0x0008) (Transient, DuplicateTransient)
	class ABP_WKNDMotionController_C*                  teleportingController;                                    // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  Left_Controller;                                          // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  Right_Controller;                                         // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              StrideLength_Run;                                         // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrideLength_Walk;                                        // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkSpeed;                                                // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunSpeed;                                                 // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentMoveSpeed;                                         // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAlpha;                                                 // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentStrideLength;                                      // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TeleportDestination;                                      // 0x0144(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    TeleportRotation;                                         // 0x0150(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Origin;                                                   // 0x015C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportStartTime;                                        // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OriginRotation;                                           // 0x016C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	int                                                NumSteps;                                                 // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraFadeTime;                                           // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       NavAgent;                                                 // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AAIController*                               AgentController;                                          // 0x0188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FVector>                             NavPathPoints;                                            // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                IDX;                                                      // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalDistance;                                            // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxNavigableJump;                                         // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        vignette;                                                 // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class ABP_WKNDPlayerPawn_C*                        PlayerPawn;                                               // 0x01B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ReportLastLocomote;                                       // 0x01C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReportStartLocomote;                                      // 0x01D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              TeleportRequestTime;                                      // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ValidPlayerLocation;                                      // 0x01E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ValidTeleportDestination;                                 // 0x01F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               DrawLocomotionDebug;                                      // 0x01FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x01FD(0x0003) MISSED OFFSET
	int                                                TeleportFootstepsRemaining;                               // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToNextFootstep;                                       // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastFootstepLocation;                                     // 0x0208(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkTime_Creep;                                          // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkMaxTime_Creep;                                       // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkTime_Walk;                                           // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkMaxTime_Walk;                                        // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkTime_Run;                                            // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkMaxTime_Run;                                         // 0x0228(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeToBlack_Creep;                                        // 0x022C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeToBlack_Walk;                                         // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeToBlack_Run;                                          // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeToGame_Creep;                                         // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeToGame_Walk;                                          // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadeToGame_Run;                                           // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceOfTeleport;                                       // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportLongDistance;                                     // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrideLength;                                             // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcSize_Run;                                              // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcSize_Walk;                                             // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArcSize_Creep;                                            // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	struct FTimerHandle                                RecoverFromFadeTimer;                                     // 0x0260(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              StepInterval_Run;                                         // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StepInterval_Creep;                                       // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StepInterval_Walk;                                        // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleStepDistance_Creep;                               // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleStepDistance_Run;                                 // 0x0278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ThrottleStepDistance_Walk;                                // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FootstepDistanceWalked;                                   // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PostTeleportCameraLocation;                               // 0x0284(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               SnappingLocationToMandate;                                // 0x0290(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerLocomotion.BP_PlayerLocomotion_C");
		return ptr;
	}


	void GetSafeNavigationGround(struct FVector* lastNavigableGround, bool* groundInit);
	void RecoverFromFading();
	void TickThrottleFootstepAudio(float DeltaTime);
	void TriggerTeleportFootsteps(const struct FVector& TravelVector);
	void TickTeleportFootstepAudio(float DeltaTime);
	void GetPlayerFeet(struct FTransform* NewParam);
	void SetTeleportTransform(const struct FVector& TeleportLocation, const struct FRotator& TeleportRotation);
	void GetFadeTime(bool IsFadeStart, float* CameraFadeTime);
	void GetFadeColor(struct FLinearColor* TeleportFadeColor);
	void LerpBetweenPoints(const struct FVector& LocationStart, const struct FVector& LocationEnd, float TimeToLerp, float StartTime, bool* Complete, float* DistanceTraveledThisFrame);
	void BuildNavPathPoints();
	void DoStepAudio(float TotalDistanceMoved, float StrideLength);
	void MovePlayerOverTime(float ProjectedMoveTime, float StrideLength, const struct FVector& Destination, const struct FVector& Origin, bool* Complete);
	void TryTeleport(class AWKNDMotionController* Motion_Controller, class ABP_WKNDMotionController_C* In_Left_Controller, class ABP_WKNDMotionController_C* In_Right_Controller);
	void ReceiveTick(float* DeltaSeconds);
	void CompleteLocomote();
	void VignetteOn();
	void VignetteOff();
	void ReceiveBeginPlay();
	void StartLocomote(struct FVector* Location, struct FRotator* Rotation, bool* SnapToMandated);
	void ExecuteUbergraph_BP_PlayerLocomotion(int EntryPoint);
	void ReportStartLocomote__DelegateSignature();
	void ReportLastLocomote__DelegateSignature(const struct FVector& StartLocation, const struct FVector& EndLocation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
