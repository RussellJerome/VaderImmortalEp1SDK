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

// BlueprintGeneratedClass BP_MainWidgetMenu.BP_MainWidgetMenu_C
// 0x0050 (0x0550 - 0x0500)
class ABP_MainWidgetMenu_C : public AMainMenuActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0500(0x0008) (Transient, DuplicateTransient)
	class UMenuButtonComponent*                        Custom;                                                   // 0x0508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Comfort;                                                  // 0x0510(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuButtonComponent*                        Standard;                                                 // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenuBaseComponent*                          FirstComfortScreen;                                       // 0x0520(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMenu_C*                                     MenuWidget;                                               // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               bFirstTimePlay;                                           // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class UBP_WKNDGameInstance_C*                      WKNDGameInstance;                                         // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AConsoleMenuActor*                           ConsoleMenuActor;                                         // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ABP_OptionsWidgetMenu_C*                     OptionsMenu;                                              // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MainWidgetMenu.BP_MainWidgetMenu_C");
		return ptr;
	}


	void GetWidgetFromConsole(class UMenu_C** OutWidget);
	void SetConsoleButtonConfig(int ButtonConfigID);
	void UserConstructionScript();
	void Button3_Press();
	void Button4_Press();
	void BackButton_Press();
	void Button1_Press();
	void ReceiveBeginPlay();
	void ReceiveMenuActivated();
	void OnConfirmationPromptCalled(struct FText* WarningText);
	void BndEvt__Standard_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__Comfort_K2Node_ComponentBoundEvent_2_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void ShowFirstTimeComfortPrompt();
	void ShowMainMenu();
	void Button2_Press();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__ConfirmationButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void SetupScreen();
	void BndEvt__Custom_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void ExecuteUbergraph_BP_MainWidgetMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
