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

// BlueprintGeneratedClass BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C
// 0x00C4 (0x04CC - 0x0408)
class ABP_WidgetConsoleMenu_C : public AConsoleMenuActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class UTextRenderComponent*                        CL;                                                       // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box7;                                                     // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box5;                                                     // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box4;                                                     // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box3;                                                     // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box2;                                                     // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box1;                                                     // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicsInteractionsComponent*               PhysicsInteractions;                                      // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   RPOCGrabLocator1;                                         // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               MenuCollider;                                             // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCGrabLocatorComponent*                   RPOCGrabLocator;                                          // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWidgetComponent*                            MenuWidget;                                               // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak_lightUp;                                               // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                emt_MainMenu_comp_hum_lp;                                 // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box6;                                                     // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Emitter;                                                  // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    StartLevel;                                               // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	int                                                LastDialMaterialValue;                                    // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ToPlayerCameraHeightOffset;                               // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPassDownConsoleButtonHoverEvents;                        // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAdjustConsoleHeight;                                     // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LerpToLocation;                                           // 0x04B2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LerpToRotation;                                           // 0x04B3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // 0x04B4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x04C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WidgetConsoleMenu.BP_WidgetConsoleMenu_C");
		return ptr;
	}


	void UpDownButtonsActive(bool* Active);
	void PlayHapticFeedback(class UFrontendInteractionController* InteractionController);
	void GetWidget(class UMenu_C** MenuWidget);
	void PassDownConsoleButtonHoverEvent(const struct FChangedMenuComponent& HoveredComponent, bool bHoverBegin);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void AdjustConsoleHeight();
	void AdjustRotation();
	void BndEvt__Button1_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__Button3_Console_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__Button4_Console_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__BackButton_Console_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__UpButton_Console_K2Node_ComponentBoundEvent_3_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__DownButton_Console_K2Node_ComponentBoundEvent_4_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void AdjustConsoleLocation();
	void BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature(const struct FName& InteractionName);
	void BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionEvent__DelegateSignature(const struct FName& InteractionName);
	void ExecuteUbergraph_BP_WidgetConsoleMenu(int EntryPoint);
	void StartLevel__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
