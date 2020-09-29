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

// BlueprintGeneratedClass BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C
// 0x0074 (0x0544 - 0x04D0)
class ABP_ExtrasWidgetMenu_C : public AExtrasMenuActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04D0(0x0008) (Transient, DuplicateTransient)
	class UChapterSelectMenuItem*                      ChapterSelectMenuItem;                                    // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      JumpToDojoButton;                                         // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USMMenuButtonComponent*                      UnlockAllWavesDebugButton;                                // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    ExtrasMenu_PlayCredits;                                   // 0x04F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<class UBoxComponent*>                       BoxCollisionComps;                                        // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UTextRenderComponent*>                TextRenderComps;                                          // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UWKNDProgressionCheckpointData*              UnlockDojoCheckpoint;                                     // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWKNDCheckpointProgressionOrder*             UsedCheckpointProgressionOrder;                           // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockExtendedDojoBasedOnProgression;                      // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0531(0x0007) MISSED OFFSET
	class UMenu_C*                                     MenuWidget;                                               // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	int                                                CurrentDojoIndex;                                         // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ExtrasWidgetMenu.BP_ExtrasWidgetMenu_C");
		return ptr;
	}


	void SetConsoleButtonConfig(int ButtonConfigID);
	void GetWidgetFromConsole(class UMenu_C** OutWidget);
	void UserConstructionScript();
	void BackButton_Press();
	void BndEvt__CreditsButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent);
	void DownButton_Press();
	void Button1_Press();
	void BndEvt__DojoButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void UpButton_Press();
	void BndEvt__PlayWaveButton_K2Node_ComponentBoundEvent_0_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void Button4_Press();
	void BndEvt__JumpToDojoButton_K2Node_ComponentBoundEvent_1_MenuButtonPressDelegate__DelegateSignature(const struct FPressedButtonComponent& PressedButtonComponent);
	void Button2_Press();
	void Button3_Press();
	void BndEvt__TrophiesButton_K2Node_ComponentBoundEvent_1_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent);
	void BndEvt__ExtrasTab_K2Node_ComponentBoundEvent_2_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent);
	void ReceiveMenuActivated();
	void SpawnVisualWaveItems();
	void UpButton_Release();
	void DownButton_Release();
	void BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentValueChangedDelegate__DelegateSignature(const struct FChangedMenuComponent& ChangedMenuComponent);
	void ReceiveAllWavesUnlocked();
	void BndEvt__WaveScrollComponent_K2Node_ComponentBoundEvent_0_MenuComponentVisibilityChangedDelegate__DelegateSignature();
	void Button1Surrogate();
	void DojoWaveSubMenuSurrogate();
	void ForcePlayCredits();
	void PlaySelectedWaveSurrogate();
	void ExecuteUbergraph_BP_ExtrasWidgetMenu(int EntryPoint);
	void ExtrasMenu_PlayCredits__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
