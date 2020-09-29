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

// Function BPW_DojoReward.BPW_DojoReward_C.GetItemText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTextBlock*              text                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_DojoReward_C::GetItemText(class UTextBlock** text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoReward.BPW_DojoReward_C.GetItemText");

	UBPW_DojoReward_C_GetItemText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (text != nullptr)
		*text = params.text;
}


// Function BPW_DojoReward.BPW_DojoReward_C.SetItemText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_DojoReward_C::SetItemText(struct FText* text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoReward.BPW_DojoReward_C.SetItemText");

	UBPW_DojoReward_C_SetItemText_Params params;
	params.text = text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DojoReward.BPW_DojoReward_C.SetActiveIndicatorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DojoReward_C::SetActiveIndicatorVisibility(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoReward.BPW_DojoReward_C.SetActiveIndicatorVisibility");

	UBPW_DojoReward_C_SetActiveIndicatorVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DojoReward.BPW_DojoReward_C.HighlightItem
// (BlueprintCallable, BlueprintEvent)

void UBPW_DojoReward_C::HighlightItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoReward.BPW_DojoReward_C.HighlightItem");

	UBPW_DojoReward_C_HighlightItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DojoReward.BPW_DojoReward_C.UnHighlightItem
// (BlueprintCallable, BlueprintEvent)

void UBPW_DojoReward_C::UnHighlightItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoReward.BPW_DojoReward_C.UnHighlightItem");

	UBPW_DojoReward_C_UnHighlightItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DojoReward.BPW_DojoReward_C.ExecuteUbergraph_BPW_DojoReward
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DojoReward_C::ExecuteUbergraph_BPW_DojoReward(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoReward.BPW_DojoReward_C.ExecuteUbergraph_BPW_DojoReward");

	UBPW_DojoReward_C_ExecuteUbergraph_BPW_DojoReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
