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

// BlueprintGeneratedClass BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C
// 0x0090 (0x0408 - 0x0378)
class ABP_WKNDPausePlayerPawn_C : public APawn
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	class UVelocityTracker_C*                          VelocityTrackerRight;                                     // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVelocityTracker_C*                          VelocityTrackerLeft;                                      // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           RightFingerCollision;                                     // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           LeftFingerCollision;                                      // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXLABInteractionHandlerComponent*            RightHandler;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UXLABInteractionHandlerComponent*            LeftHandler;                                              // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FOculusTouchData                            LeftTouchData;                                            // 0x03C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FOculusTouchData                            RightTouchData;                                           // 0x03D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LeftRunningAverageLocations;                              // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     RightRunningAverageLocations;                             // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LeftRunningAverageVelocity;                               // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     RightRunningAverageVelocity;                              // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WKNDPausePlayerPawn.BP_WKNDPausePlayerPawn_C");
		return ptr;
	}


	TScriptInterface<class UXLABInteractionHandler> GetHandlerForHand(EControllerHand Hand);
	class UForcePowerComponentBase* GetForcePowerComponent();
	class AActor* GetMotionControllerForHand(EControllerHand Hand);
	void SetComponentTicksAndVisible(bool Enabled);
	void GetInputData(class AWKNDPlayerController* PlayerController, EControllerHand Hand, struct FOculusTouchData* TouchData);
	void IsCloseToButton(EControllerHand Hand, bool* Result);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_WKNDPausePlayerPawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
