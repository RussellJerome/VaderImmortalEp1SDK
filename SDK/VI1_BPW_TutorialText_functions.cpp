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

// Function BPW_TutorialText.BPW_TutorialText_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            TextColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_TutorialText_C::SetText(const struct FText& InText, const struct FLinearColor& TextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TutorialText.BPW_TutorialText_C.SetText");

	UBPW_TutorialText_C_SetText_Params params;
	params.InText = InText;
	params.TextColor = TextColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_TutorialText.BPW_TutorialText_C.ExecuteUbergraph_BPW_TutorialText
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_TutorialText_C::ExecuteUbergraph_BPW_TutorialText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_TutorialText.BPW_TutorialText_C.ExecuteUbergraph_BPW_TutorialText");

	UBPW_TutorialText_C_ExecuteUbergraph_BPW_TutorialText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
