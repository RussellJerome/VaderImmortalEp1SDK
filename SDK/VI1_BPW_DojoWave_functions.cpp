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

// Function BPW_DojoWave.BPW_DojoWave_C.SetRatingImage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Unlocked_                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DojoWave_C::SetRatingImage(class UImage* Image, bool Unlocked_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoWave.BPW_DojoWave_C.SetRatingImage");

	UBPW_DojoWave_C_SetRatingImage_Params params;
	params.Image = Image;
	params.Unlocked_ = Unlocked_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DojoWave.BPW_DojoWave_C.SetRating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERating                        NewRating                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DojoWave_C::SetRating(ERating NewRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoWave.BPW_DojoWave_C.SetRating");

	UBPW_DojoWave_C_SetRating_Params params;
	params.NewRating = NewRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DojoWave.BPW_DojoWave_C.GetItemText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UTextBlock*              text                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_DojoWave_C::GetItemText(class UTextBlock** text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoWave.BPW_DojoWave_C.GetItemText");

	UBPW_DojoWave_C_GetItemText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (text != nullptr)
		*text = params.text;
}


// Function BPW_DojoWave.BPW_DojoWave_C.SetItemText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UBPW_DojoWave_C::SetItemText(struct FText* text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoWave.BPW_DojoWave_C.SetItemText");

	UBPW_DojoWave_C_SetItemText_Params params;
	params.text = text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DojoWave.BPW_DojoWave_C.SetActiveIndicatorVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DojoWave_C::SetActiveIndicatorVisibility(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoWave.BPW_DojoWave_C.SetActiveIndicatorVisibility");

	UBPW_DojoWave_C_SetActiveIndicatorVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DojoWave.BPW_DojoWave_C.HighlightItem
// (BlueprintCallable, BlueprintEvent)

void UBPW_DojoWave_C::HighlightItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoWave.BPW_DojoWave_C.HighlightItem");

	UBPW_DojoWave_C_HighlightItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DojoWave.BPW_DojoWave_C.UnHighlightItem
// (BlueprintCallable, BlueprintEvent)

void UBPW_DojoWave_C::UnHighlightItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoWave.BPW_DojoWave_C.UnHighlightItem");

	UBPW_DojoWave_C_UnHighlightItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_DojoWave.BPW_DojoWave_C.ExecuteUbergraph_BPW_DojoWave
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_DojoWave_C::ExecuteUbergraph_BPW_DojoWave(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_DojoWave.BPW_DojoWave_C.ExecuteUbergraph_BPW_DojoWave");

	UBPW_DojoWave_C_ExecuteUbergraph_BPW_DojoWave_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
