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

// BlueprintGeneratedClass BP_PauseWidgetMenu.BP_PauseWidgetMenu_C
// 0x0090 (0x04A0 - 0x0410)
class ABP_PauseWidgetMenu_C : public APauseMenuActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	class USpotLightComponent*                         SpotLight_PauseContainer_key;                             // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         SpotLight_PauseContainer_fill;                            // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UChildActorComponent*                        Actor;                                                    // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        CL;                                                       // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_center;                                                // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   RPOCGrabLocator;                                          // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box6;                                                     // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box5;                                                     // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box4;                                                     // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box3;                                                     // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box2;                                                     // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsInteractionsComponent*               PhysicsInteractions;                                      // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            Widget;                                                   // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ABP_PauseWidgetMainMenu_C*                   MainMenu;                                                 // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOptionsMenuActor*                           OptionsMenu;                                              // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PauseWidgetMenu.BP_PauseWidgetMenu_C");
		return ptr;
	}


	void GetButtonLocation(int ButtonIndex, struct FVector* ButtonLocation);
	void ResetMenuStates();
	void UpDownButtonsActive(bool* Active);
	void GetWidget(class UMenu_C** MenuWidget);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnOptionsMenuClosed();
	void ReceiveMenuActivated();
	void ReceiveMenuDeactivated();
	void BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature(const struct FName& InteractionName);
	void BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature(const struct FName& InteractionName);
	void ExecuteUbergraph_BP_PauseWidgetMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
