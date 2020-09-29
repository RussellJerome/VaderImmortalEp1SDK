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

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.GetColorsByRoundType
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EnemyWaveType>     RoundType                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FHolodroneUIColors      Value                          (Parm, OutParm)

void UBPW_HolodroneWidget_C::GetColorsByRoundType(TEnumAsByte<EnemyWaveType> RoundType, struct FHolodroneUIColors* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.GetColorsByRoundType");

	UBPW_HolodroneWidget_C_GetColorsByRoundType_Params params;
	params.RoundType = RoundType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ChangeImageTint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FLinearColor            TintColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_HolodroneWidget_C::ChangeImageTint(class UImage* Image, const struct FLinearColor& TintColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ChangeImageTint");

	UBPW_HolodroneWidget_C_ChangeImageTint_Params params;
	params.Image = Image;
	params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.HandleChangeColorMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnemyWaveType>     NewColorMode                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneWidget_C::HandleChangeColorMode(TEnumAsByte<EnemyWaveType> NewColorMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.HandleChangeColorMode");

	UBPW_HolodroneWidget_C_HandleChangeColorMode_Params params;
	params.NewColorMode = NewColorMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.HandleChangeBackgroundColor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_HolodroneWidget_C::HandleChangeBackgroundColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.HandleChangeBackgroundColor");

	UBPW_HolodroneWidget_C_HandleChangeBackgroundColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.HandleChangeFontColor
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_HolodroneWidget_C::HandleChangeFontColor(const struct FLinearColor& NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.HandleChangeFontColor");

	UBPW_HolodroneWidget_C_HandleChangeFontColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.InitDynamicColors
// (Public, BlueprintCallable, BlueprintEvent)

void UBPW_HolodroneWidget_C::InitDynamicColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.InitDynamicColors");

	UBPW_HolodroneWidget_C_InitDynamicColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ChangeColorMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EnemyWaveType>     NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreCurrentMode              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneWidget_C::ChangeColorMode(TEnumAsByte<EnemyWaveType> NewMode, bool IgnoreCurrentMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ChangeColorMode");

	UBPW_HolodroneWidget_C_ChangeColorMode_Params params;
	params.NewMode = NewMode;
	params.IgnoreCurrentMode = IgnoreCurrentMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ChangeTints
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UImage*>          Images                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLinearColor            TintColor                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UBPW_HolodroneWidget_C::ChangeTints(const struct FLinearColor& TintColor, TArray<class UImage*>* Images)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ChangeTints");

	UBPW_HolodroneWidget_C_ChangeTints_Params params;
	params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Images != nullptr)
		*Images = params.Images;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.UpdateHealthIcons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UImage*>          HealthIcons                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Health                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              HealthIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              MissingHealthIcon              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneWidget_C::UpdateHealthIcons(int Health, class UTexture2D* HealthIcon, class UTexture2D* MissingHealthIcon, TArray<class UImage*>* HealthIcons)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.UpdateHealthIcons");

	UBPW_HolodroneWidget_C_UpdateHealthIcons_Params params;
	params.Health = Health;
	params.HealthIcon = HealthIcon;
	params.MissingHealthIcon = MissingHealthIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HealthIcons != nullptr)
		*HealthIcons = params.HealthIcons;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.GetFormattedTime
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Result                         (Parm, OutParm)

void UBPW_HolodroneWidget_C::GetFormattedTime(float Seconds, struct FText* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.GetFormattedTime");

	UBPW_HolodroneWidget_C_GetFormattedTime_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.Post SFX At Locator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         Locator                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAkAudioEvent*           AkEvent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneWidget_C::Post_SFX_At_Locator(class USceneComponent* Locator, class UAkAudioEvent* AkEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.Post SFX At Locator");

	UBPW_HolodroneWidget_C_Post_SFX_At_Locator_Params params;
	params.Locator = Locator;
	params.AkEvent = AkEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.UpdateRoundDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RoundNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneWidget_C::UpdateRoundDisplay(int RoundNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.UpdateRoundDisplay");

	UBPW_HolodroneWidget_C_UpdateRoundDisplay_Params params;
	params.RoundNumber = RoundNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_HolodroneWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.Construct");

	UBPW_HolodroneWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ExecuteUbergraph_BPW_HolodroneWidget
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_HolodroneWidget_C::ExecuteUbergraph_BPW_HolodroneWidget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ExecuteUbergraph_BPW_HolodroneWidget");

	UBPW_HolodroneWidget_C_ExecuteUbergraph_BPW_HolodroneWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
