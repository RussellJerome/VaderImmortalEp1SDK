// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_SelectableItem.BPW_SelectableItem_C.SetActiveIndicatorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SelectableItem_C::SetActiveIndicatorVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SelectableItem.BPW_SelectableItem_C.SetActiveIndicatorVisibility");

	UBPW_SelectableItem_C_SetActiveIndicatorVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SelectableItem.BPW_SelectableItem_C.GetItemText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTextBlock*              text                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_SelectableItem_C::GetItemText(class UTextBlock** text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SelectableItem.BPW_SelectableItem_C.GetItemText");

	UBPW_SelectableItem_C_GetItemText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (text != nullptr)
		*text = params.text;
}


// Function BPW_SelectableItem.BPW_SelectableItem_C.SetItemText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_SelectableItem_C::SetItemText(const struct FText& text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SelectableItem.BPW_SelectableItem_C.SetItemText");

	UBPW_SelectableItem_C_SetItemText_Params params;
	params.text = text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SelectableItem.BPW_SelectableItem_C.SetHighlight
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldHighlight                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UImage*                  HighlightBackground            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_SelectableItem_C::SetHighlight(bool ShouldHighlight, class UTextBlock* text, class UImage* HighlightBackground)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SelectableItem.BPW_SelectableItem_C.SetHighlight");

	UBPW_SelectableItem_C_SetHighlight_Params params;
	params.ShouldHighlight = ShouldHighlight;
	params.text = text;
	params.HighlightBackground = HighlightBackground;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SelectableItem.BPW_SelectableItem_C.HighlightItem
// (BlueprintCallable, BlueprintEvent)

void UBPW_SelectableItem_C::HighlightItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SelectableItem.BPW_SelectableItem_C.HighlightItem");

	UBPW_SelectableItem_C_HighlightItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SelectableItem.BPW_SelectableItem_C.UnHighlightItem
// (BlueprintCallable, BlueprintEvent)

void UBPW_SelectableItem_C::UnHighlightItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SelectableItem.BPW_SelectableItem_C.UnHighlightItem");

	UBPW_SelectableItem_C_UnHighlightItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_SelectableItem.BPW_SelectableItem_C.ExecuteUbergraph_BPW_SelectableItem
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_SelectableItem_C::ExecuteUbergraph_BPW_SelectableItem(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_SelectableItem.BPW_SelectableItem_C.ExecuteUbergraph_BPW_SelectableItem");

	UBPW_SelectableItem_C_ExecuteUbergraph_BPW_SelectableItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
