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

// BlueprintGeneratedClass SlicingToolTest.SlicingToolTest_C
// 0x0084 (0x03AC - 0x0328)
class ASlicingToolTest_C : public AWKNDHydrospanner
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0328(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                Ak_button;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_spinner;                                               // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGhostingTriggerComponent*                   GhostingTrigger;                                          // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDHolsterableComponent*                   WKNDHolsterable;                                          // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           SlicingSocketOverlap;                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Sparks;                                                 // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        BrokenMesh;                                               // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_handle;                                                // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Socket_Point_Origin;                                      // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   RPOCGrabLocator;                                          // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDGrabbableComponent*                     WKNDGrabbable;                                            // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UForceItemComponent_C*                       ForceItemComponent;                                       // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               PreviousGrabbableEnabled;                                 // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    PickupMeshMaterial;                                       // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HapticEffectID;                                           // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SlicingToolTest.SlicingToolTest_C");
		return ptr;
	}


	void EndSpinHaptics();
	void StartSpinHaptics();
	bool FaceBottomButton_Press();
	bool FaceBottomButton_Release();
	bool FaceBottomButton_Touch();
	bool FaceBottomButton_UnTouch();
	bool FaceTopButton_Press();
	bool FaceTopButton_Release();
	bool FaceTopButton_Touch();
	bool FaceTopButton_UnTouch();
	bool Stick_Touch();
	bool Stick_UnTouch();
	bool Trigger_Press();
	bool Trigger_Release();
	bool Trigger_Touch();
	bool Trigger_UnTouch();
	bool Use_Press();
	bool Use_Release();
	struct FName GetHolsterSocketName();
	void DisplayBrokenState();
	void UserConstructionScript();
	void SFX_grabbed(class AActor* grabber);
	void SFX_released();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnAttachedToToolbelt();
	void BndEvt__ForceItemComponent_K2Node_ComponentBoundEvent_0_SocketingEvent__DelegateSignature(class UForceSocketComponent* Socket);
	void BndEvt__ForceItemComponent_K2Node_ComponentBoundEvent_1_SocketingEvent__DelegateSignature(class UForceSocketComponent* Socket);
	void ExecuteUbergraph_SlicingToolTest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
