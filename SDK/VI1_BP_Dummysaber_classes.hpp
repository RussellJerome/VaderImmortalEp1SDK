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

// BlueprintGeneratedClass BP_Dummysaber.BP_Dummysaber_C
// 0x00B0 (0x0590 - 0x04E0)
class ABP_Dummysaber_C : public ARPOCPickupActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E0(0x0008) (Transient, DuplicateTransient)
	class URPOCGrabLocatorComponent*                   GrabLocator_Off;                                          // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   GrabLocator_Main;                                         // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVectorFieldComponent*                       VectorField;                                              // 0x04F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           FlexCloth_Collision;                                      // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Saber_Roll_Concrete;                                      // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             Saber_HandGrab;                                           // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            GrabObject;                                               // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Button;                                                   // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	class USkeletalMeshComponent*                      Hand_Mesh;                                                // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Grabbed;                                                  // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0539(0x0003) MISSED OFFSET
	float                                              DeltaTime;                                                // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_WKNDMotionController_C*                  MotionController;                                         // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OldTipLocation;                                           // 0x0548(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentTipLocation;                                       // 0x0554(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SaberMass;                                                // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0564(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    PickedUp;                                                 // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class USourceEffectChorusPreset*                   SaberWhoosh_ChorusEffect;                                 // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USourceEffectWaveShaperPreset*               SaberWhoosh_WaveShaperEffect;                             // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USubmixEffectSubmixEQPreset*                 SaberPose_EQEffect;                                       // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Dummysaber.BP_Dummysaber_C");
		return ptr;
	}


	void OutputText(const struct FString& text, float Duration);
	void UserConstructionScript();
	void ReceiveOnPickedUp(class AActor** CurrentInstigator);
	void ReceiveOnReleased(class AActor** PreviousInstigator);
	void ReceiveOnInHand();
	void Tick2();
	void CallTestDoorBasic(class ATestDoorBasic_C* TestDoorBasic);
	void DoorHit(const struct FVector& HitLocation, const struct FVector& NormalImpulse);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void BndEvt__HandleCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveOnBeenDisarmed();
	void ExecuteUbergraph_BP_Dummysaber(int EntryPoint);
	void PickedUp__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
