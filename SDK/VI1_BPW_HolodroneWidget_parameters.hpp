#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.GetColorsByRoundType
struct UBPW_HolodroneWidget_C_GetColorsByRoundType_Params
{
	TEnumAsByte<EnemyWaveType>                         RoundType;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FHolodroneUIColors                          Value;                                                    // (Parm, OutParm)
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ChangeImageTint
struct UBPW_HolodroneWidget_C_ChangeImageTint_Params
{
	class UImage*                                      Image;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                TintColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.HandleChangeColorMode
struct UBPW_HolodroneWidget_C_HandleChangeColorMode_Params
{
	TEnumAsByte<EnemyWaveType>                         NewColorMode;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.HandleChangeBackgroundColor
struct UBPW_HolodroneWidget_C_HandleChangeBackgroundColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.HandleChangeFontColor
struct UBPW_HolodroneWidget_C_HandleChangeFontColor_Params
{
	struct FLinearColor                                NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.InitDynamicColors
struct UBPW_HolodroneWidget_C_InitDynamicColors_Params
{
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ChangeColorMode
struct UBPW_HolodroneWidget_C_ChangeColorMode_Params
{
	TEnumAsByte<EnemyWaveType>                         NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreCurrentMode;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ChangeTints
struct UBPW_HolodroneWidget_C_ChangeTints_Params
{
	TArray<class UImage*>                              Images;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLinearColor                                TintColor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.UpdateHealthIcons
struct UBPW_HolodroneWidget_C_UpdateHealthIcons_Params
{
	TArray<class UImage*>                              HealthIcons;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                Health;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  HealthIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  MissingHealthIcon;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.GetFormattedTime
struct UBPW_HolodroneWidget_C_GetFormattedTime_Params
{
	float                                              Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Result;                                                   // (Parm, OutParm)
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.Post SFX At Locator
struct UBPW_HolodroneWidget_C_Post_SFX_At_Locator_Params
{
	class USceneComponent*                             Locator;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkAudioEvent*                               AkEvent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.UpdateRoundDisplay
struct UBPW_HolodroneWidget_C_UpdateRoundDisplay_Params
{
	int                                                RoundNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.Construct
struct UBPW_HolodroneWidget_C_Construct_Params
{
};

// Function BPW_HolodroneWidget.BPW_HolodroneWidget_C.ExecuteUbergraph_BPW_HolodroneWidget
struct UBPW_HolodroneWidget_C_ExecuteUbergraph_BPW_HolodroneWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
