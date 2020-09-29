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

// BlueprintGeneratedClass BP_Credits.BP_Credits_C
// 0x0098 (0x03B0 - 0x0318)
class ABP_Credits_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0318(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            Widget;                                                   // 0x0320(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CreditsPrinterHead;                                       // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Position_Formatting;                                      // 0x0334(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Name_Formatting;                                          // 0x0340(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Line_Spacing;                                             // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScrollSpeed;                                              // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     InitialPosition;                                          // 0x0354(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CreditsLength;                                            // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0364(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    Event_StopCredits;                                        // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              HeadingSize;                                              // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PauseAtEnd;                                               // 0x037C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x037D(0x0003) MISSED OFFSET
	struct FColor                                      TextColour;                                               // 0x0380(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	class UUserWidget*                                 CreditsWidget;                                            // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    Event_PlayCredits;                                        // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Event_PauseCredits;                                       // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Credits.BP_Credits_C");
		return ptr;
	}


	void ChangeFont(class UTextRenderComponent* Text_Render_Component, class UMaterialInterface* Material, class UMaterialInterface* Text_Material, class UFont* Font);
	struct FVector AdvancePrintHead(const struct FVector& InVec);
	void UserConstructionScript();
	void PlayCredits();
	void ResetCredits();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void PauseCredits();
	void StopCredits();
	void ExecuteUbergraph_BP_Credits(int EntryPoint);
	void Event_PauseCredits__DelegateSignature();
	void Event_PlayCredits__DelegateSignature();
	void Event_StopCredits__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
