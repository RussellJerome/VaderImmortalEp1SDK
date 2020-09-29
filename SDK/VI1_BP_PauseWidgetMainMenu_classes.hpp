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

// BlueprintGeneratedClass BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C
// 0x0028 (0x04C8 - 0x04A0)
class ABP_PauseWidgetMainMenu_C : public APauseMainMenuActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (Transient, DuplicateTransient)
	class USMMenuButtonComponent*                      Options;                                                  // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      Recenter;                                                 // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AOptionsMenuActor*                           OptionsMenu;                                              // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMenu_C*                                     MenuWidget;                                               // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PauseWidgetMainMenu.BP_PauseWidgetMainMenu_C");
		return ptr;
	}


	void SetConsoleButtonConfig(int ButtonConfigID);
	void GetWidgetFromConsole(class UMenu_C** OutWidget);
	void SetOptionsMenu(class AOptionsMenuActor* OptionsMenu);
	void UserConstructionScript();
	void ReceiveConfirmationPromptCalled(struct FText* WarningText);
	void ReceiveConfirmationPromptClosed();
	void BndEvt__Recenter_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__Options_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void Button1_Press();
	void Button2_Press();
	void Button3_Press();
	void Button4_Press();
	void BackButton_Press();
	void ReceiveMenuActivated();
	void BndEvt__QuitGameMenuButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void BndEvt__BackToMainMenuButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void ExecuteUbergraph_BP_PauseWidgetMainMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
