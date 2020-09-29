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

// BlueprintGeneratedClass BP_Lightsaber_Player.BP_Lightsaber_Player_C
// 0x0073 (0x0B48 - 0x0AD5)
class ABP_Lightsaber_Player_C : public ABP_Lightsaber_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AD5(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0AD8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Button;                                                   // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           DeflectionVolume;                                         // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DeflectionOffset;                                         // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   GrabLocator_Off;                                          // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   GrabLocator_Main;                                         // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            GrabObject;                                               // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_grab_secondary;                                        // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGhostingTriggerComponent*                   GhostingTrigger;                                          // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWKNDHolsterableComponent*                   WKNDHolsterable;                                          // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    PickupMeshMaterial;                                       // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreviousGrabbableEnabled;                                 // 0x0B30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0B31(0x0007) MISSED OFFSET
	class UGhostingTriggerComponent*                   GhostingTrigger_1;                                        // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Button_Mesh_Material;                                     // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lightsaber_Player.BP_Lightsaber_Player_C");
		return ptr;
	}


	struct FName GetHolsterSocketName();
	void UserConstructionScript();
	void OnAttachedToToolbelt();
	void ReceiveOnInHand();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnInteraction(EXLABInteractionEventType InteractionEventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive);
	void SetDeflectionScale(float* NewScale);
	void ExecuteUbergraph_BP_Lightsaber_Player(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
