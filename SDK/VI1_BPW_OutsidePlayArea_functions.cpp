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

// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeInWarningText
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBPW_OutsidePlayArea_C::FadeInWarningText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeInWarningText");

	UBPW_OutsidePlayArea_C_FadeInWarningText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeInAngleIndicatorImage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBPW_OutsidePlayArea_C::FadeInAngleIndicatorImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeInAngleIndicatorImage");

	UBPW_OutsidePlayArea_C_FadeInAngleIndicatorImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.Init
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBPW_OutsidePlayArea_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.Init");

	UBPW_OutsidePlayArea_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.SetAngleIndicatorRotation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_OutsidePlayArea_C::SetAngleIndicatorRotation(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.SetAngleIndicatorRotation");

	UBPW_OutsidePlayArea_C_SetAngleIndicatorRotation_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBPW_OutsidePlayArea_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.OnAnimationFinished");

	UBPW_OutsidePlayArea_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeOutAngleIndicatorImage
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBPW_OutsidePlayArea_C::FadeOutAngleIndicatorImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeOutAngleIndicatorImage");

	UBPW_OutsidePlayArea_C_FadeOutAngleIndicatorImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeOutWarningText
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBPW_OutsidePlayArea_C::FadeOutWarningText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.FadeOutWarningText");

	UBPW_OutsidePlayArea_C_FadeOutWarningText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.ExecuteUbergraph_BPW_OutsidePlayArea
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_OutsidePlayArea_C::ExecuteUbergraph_BPW_OutsidePlayArea(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_OutsidePlayArea.BPW_OutsidePlayArea_C.ExecuteUbergraph_BPW_OutsidePlayArea");

	UBPW_OutsidePlayArea_C_ExecuteUbergraph_BPW_OutsidePlayArea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
