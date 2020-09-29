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

// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.SetSubtitleText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InText                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   DisplayedText                  (Parm, OutParm)

void ABP_WidgetSubtitle_C::SetSubtitleText(const struct FText& InText, struct FText* DisplayedText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.SetSubtitleText");

	ABP_WidgetSubtitle_C_SetSubtitleText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayedText != nullptr)
		*DisplayedText = params.DisplayedText;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.GetVerticalSize
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_WidgetSubtitle_C::GetVerticalSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.GetVerticalSize");

	ABP_WidgetSubtitle_C_GetVerticalSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WidgetSubtitle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.UserConstructionScript");

	ABP_WidgetSubtitle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeOut__FinishedFunc
// (BlueprintEvent)

void ABP_WidgetSubtitle_C::OpFadeOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeOut__FinishedFunc");

	ABP_WidgetSubtitle_C_OpFadeOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeOut__UpdateFunc
// (BlueprintEvent)

void ABP_WidgetSubtitle_C::OpFadeOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeOut__UpdateFunc");

	ABP_WidgetSubtitle_C_OpFadeOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeIn__FinishedFunc
// (BlueprintEvent)

void ABP_WidgetSubtitle_C::OpFadeIn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeIn__FinishedFunc");

	ABP_WidgetSubtitle_C_OpFadeIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeIn__UpdateFunc
// (BlueprintEvent)

void ABP_WidgetSubtitle_C::OpFadeIn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OpFadeIn__UpdateFunc");

	ABP_WidgetSubtitle_C_OpFadeIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ShiftLerp__FinishedFunc
// (BlueprintEvent)

void ABP_WidgetSubtitle_C::ShiftLerp__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ShiftLerp__FinishedFunc");

	ABP_WidgetSubtitle_C_ShiftLerp__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ShiftLerp__UpdateFunc
// (BlueprintEvent)

void ABP_WidgetSubtitle_C::ShiftLerp__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ShiftLerp__UpdateFunc");

	ABP_WidgetSubtitle_C_ShiftLerp__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OnShowSubtitle
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WidgetSubtitle_C::OnShowSubtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OnShowSubtitle");

	ABP_WidgetSubtitle_C_OnShowSubtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ShiftText
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WidgetSubtitle_C::ShiftText(float* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ShiftText");

	ABP_WidgetSubtitle_C_ShiftText_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WidgetSubtitle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ReceiveBeginPlay");

	ABP_WidgetSubtitle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OnHidden
// (Event, Public, BlueprintEvent)

void ABP_WidgetSubtitle_C::OnHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.OnHidden");

	ABP_WidgetSubtitle_C_OnHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.SetScreenPositionOffset
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Offset                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WidgetSubtitle_C::SetScreenPositionOffset(int* Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.SetScreenPositionOffset");

	ABP_WidgetSubtitle_C_SetScreenPositionOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ExecuteUbergraph_BP_WidgetSubtitle
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WidgetSubtitle_C::ExecuteUbergraph_BP_WidgetSubtitle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WidgetSubtitle.BP_WidgetSubtitle_C.ExecuteUbergraph_BP_WidgetSubtitle");

	ABP_WidgetSubtitle_C_ExecuteUbergraph_BP_WidgetSubtitle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
