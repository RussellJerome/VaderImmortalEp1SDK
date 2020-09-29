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

// WidgetBlueprintGeneratedClass BPW_SelectableItem.BPW_SelectableItem_C
// 0x0028 (0x0230 - 0x0208)
class UBPW_SelectableItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	struct FLinearColor                                HighlightedTextColor;                                     // 0x0210(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                DefaultTextColor;                                         // 0x0220(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_SelectableItem.BPW_SelectableItem_C");
		return ptr;
	}


	void SetActiveIndicatorVisibility(bool Visible);
	void GetItemText(class UTextBlock** text);
	void SetItemText(const struct FText& text);
	void SetHighlight(bool ShouldHighlight, class UTextBlock* text, class UImage* HighlightBackground);
	void HighlightItem();
	void UnHighlightItem();
	void ExecuteUbergraph_BPW_SelectableItem(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
