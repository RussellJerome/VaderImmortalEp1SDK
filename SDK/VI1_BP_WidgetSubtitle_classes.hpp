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

// BlueprintGeneratedClass BP_WidgetSubtitle.BP_WidgetSubtitle_C
// 0x0078 (0x0450 - 0x03D8)
class ABP_WidgetSubtitle_C : public AWKNDSubtitle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (Transient, DuplicateTransient)
	class UWidgetComponent*                            TextWidget;                                               // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ShiftLerp_PosAlpha_98E18A6449ECE6153C0B04BC8C5CAF83;      // 0x03F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    ShiftLerp__Direction_98E18A6449ECE6153C0B04BC8C5CAF83;    // 0x03F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          ShiftLerp;                                                // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OpFadeOut_Alpha_2CC953C1428CA12A235B81AA8E59E3AC;         // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OpFadeOut__Direction_2CC953C1428CA12A235B81AA8E59E3AC;    // 0x0404(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OpFadeOut;                                                // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              OpFadeIn_Alpha_5457A1CA46F7F5B7491672B4A5AB946A;          // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    OpFadeIn__Direction_5457A1CA46F7F5B7491672B4A5AB946A;     // 0x0414(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OpFadeIn;                                                 // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBPW_SubtitleText_C*                         SubtitleTextWidget;                                       // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               HasBeenRendered;                                          // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0429(0x0003) MISSED OFFSET
	float                                              ApproxCharsPerLine;                                       // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CharHeight;                                               // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SmoothShift;                                              // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	struct FVector                                     LocalStartPos;                                            // 0x0438(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LocalShiftPos;                                            // 0x0444(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WidgetSubtitle.BP_WidgetSubtitle_C");
		return ptr;
	}


	void SetSubtitleText(const struct FText& InText, struct FText* DisplayedText);
	float GetVerticalSize();
	void UserConstructionScript();
	void OpFadeOut__FinishedFunc();
	void OpFadeOut__UpdateFunc();
	void OpFadeIn__FinishedFunc();
	void OpFadeIn__UpdateFunc();
	void ShiftLerp__FinishedFunc();
	void ShiftLerp__UpdateFunc();
	void OnShowSubtitle();
	void ShiftText(float* Offset);
	void ReceiveBeginPlay();
	void OnHidden();
	void SetScreenPositionOffset(int* Offset);
	void ExecuteUbergraph_BP_WidgetSubtitle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
