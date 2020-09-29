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

// BlueprintGeneratedClass BP_HoloDrone_Controller.BP_HoloDrone_Controller_C
// 0x00C4 (0x04E4 - 0x0420)
class ABP_HoloDrone_Controller_C : public AWKNDHoloDroneAIController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0420(0x0008) (Transient, DuplicateTransient)
	float                                              HeightAboveGround;                                        // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EHoloDroneState>                       HoloDroneState;                                           // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	float                                              FlatDistanceFromPlayer;                                   // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnLocation;                                            // 0x0434(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Deceleration;                                             // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartTime;                                                // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeAccelerationDone;                                     // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeDecelerationStart;                                    // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ArrivalTime;                                              // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x0460(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     StartLocation;                                            // 0x046C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TravelDirection;                                          // 0x0478(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              ActualMaxSpeed;                                           // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HUD_DisplayLocation_Front;                                // 0x0488(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     HUD_DisplayLocation_Back;                                 // 0x0494(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVAdjustCounter;                                         // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FOVAdjustCap;                                             // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FOVAdjust;                                                // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	struct FHolodroneDisplayPoints                     DisplayPoints;                                            // 0x04B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              JumbotronPathRatio;                                       // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReachedJumbotronPathCheckpoint;                         // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FVector                                     ClampLocation;                                            // 0x04D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_HoloDrone_Controller.BP_HoloDrone_Controller_C");
		return ptr;
	}


	void SetJumbotronPathCheckpoint(float Path_Ratio);
	void SetDisplayPoints(const struct FHolodroneDisplayPoints& DisplayPoints);
	bool HasReachedJumbotronPathCheckpoint();
	void SelectDisplayLocation(struct FVector* DisplayLoc);
	void CheckFOV(float DeltaTime);
	void EndState();
	void DoManualPositionUpdate();
	void GetManualPositionUpdateLocation(struct FVector* Location);
	void StartManualPositionUpdate(const struct FVector& TargetLocation);
	void SetState(TEnumAsByte<EHoloDroneState> NewHoloDroneState);
	void HandleRotation();
	void HandlePositioning();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnPossess(class APawn** PossessedPawn);
	void OnAIMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> Result);
	void RequestDisplayNextRound();
	void ResetJumbotronCheckpoint();
	void CheckPositionFromJumbotronCheckpoint();
	void CloseJumbotronPathCheckpoint();
	void ExecuteUbergraph_BP_HoloDrone_Controller(int EntryPoint);
	void OnReachedJumbotronPathCheckpoint__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
