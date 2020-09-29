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

// BlueprintGeneratedClass CorvaxianBoxBasic.CorvaxianBoxBasic_C
// 0x0084 (0x039C - 0x0318)
class ACorvaxianBoxBasic_C : public ACorvaxianBoxBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               Box;                                                      // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PointLight;                                               // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_PuzBoxOPT_LOD2;                                        // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    P_Glow;                                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_center;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDGrabbableComponent*                     WKNDGrabbable;                                            // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   BoxGrabLocator;                                           // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPoseableMeshComponent*                      PoseableMesh;                                             // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Timeline_0_Time_1_0__DBE53A7344C3A1ECDE7033B3BDEDDD5E;    // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_DBE53A7344C3A1ECDE7033B3BDEDDD5E;   // 0x0364(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              RampOnBoxGlow_Glow_76787B434121B35BE41798B529F57CFB;      // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    RampOnBoxGlow__Direction_76787B434121B35BE41798B529F57CFB;// 0x0374(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	class UTimelineComponent*                          RampOnBoxGlow;                                            // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnBoxGrabbed;                                             // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UMaterialExpressionCollectionParameter*      MPC_FX;                                                   // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Light_Intensity;                                          // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CorvaxianBoxBasic.CorvaxianBoxBasic_C");
		return ptr;
	}


	void ForceDropBox();
	void UserConstructionScript();
	void RampOnBoxGlow__FinishedFunc();
	void RampOnBoxGlow__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionContactEvent__DelegateSignature(const struct FName& InteractionName, class UPrimitiveComponent* ContactComponent);
	void BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_2_InteractionContactEvent__DelegateSignature(const struct FName& InteractionName, class UPrimitiveComponent* ContactComponent);
	void ReceiveBeginPlay();
	void On_BoxGrab_Interaction(EXLABInteractionEventType InteractionEventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive);
	void TurnOnBoxGlow();
	void TurnOffBoxGlow();
	void FadeOutLight();
	void FadeInLight();
	void ExecuteUbergraph_CorvaxianBoxBasic(int EntryPoint);
	void OnBoxGrabbed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
