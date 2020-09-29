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

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.SetFirstTimeLanguage
struct AConsoleMainMenuLevel_C_SetFirstTimeLanguage_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.CheckForControllers
struct AConsoleMainMenuLevel_C_CheckForControllers_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.GetHMDWorldLocation
struct AConsoleMainMenuLevel_C_GetHMDWorldLocation_Params
{
	struct FVector                                     HMD;                                                      // (Parm, OutParm, IsPlainOldData)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.ReCenterPlayer_wConstraint
struct AConsoleMainMenuLevel_C_ReCenterPlayer_wConstraint_Params
{
	float                                              AngleConstraint;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.CheckLocation
struct AConsoleMainMenuLevel_C_CheckLocation_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.CheckHeight
struct AConsoleMainMenuLevel_C_CheckHeight_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.CheckRotation
struct AConsoleMainMenuLevel_C_CheckRotation_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.LerpLocationAndRotation
struct AConsoleMainMenuLevel_C_LerpLocationAndRotation_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.ReCenterPlayer
struct AConsoleMainMenuLevel_C_ReCenterPlayer_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.MoveTitle__FinishedFunc
struct AConsoleMainMenuLevel_C_MoveTitle__FinishedFunc_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.MoveTitle__UpdateFunc
struct AConsoleMainMenuLevel_C_MoveTitle__UpdateFunc_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.MoveTitle__StartFade__EventFunc
struct AConsoleMainMenuLevel_C_MoveTitle__StartFade__EventFunc_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.SubLogoFade__FinishedFunc
struct AConsoleMainMenuLevel_C_SubLogoFade__FinishedFunc_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.SubLogoFade__UpdateFunc
struct AConsoleMainMenuLevel_C_SubLogoFade__UpdateFunc_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.OnFailure_A766D8314959727FEDBEE1A3890A7AA4
struct AConsoleMainMenuLevel_C_OnFailure_A766D8314959727FEDBEE1A3890A7AA4_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.OnSuccess_A766D8314959727FEDBEE1A3890A7AA4
struct AConsoleMainMenuLevel_C_OnSuccess_A766D8314959727FEDBEE1A3890A7AA4_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.OnFailure_E0B88DFE4610FBE7DE5B3BBF16032E88
struct AConsoleMainMenuLevel_C_OnFailure_E0B88DFE4610FBE7DE5B3BBF16032E88_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.OnSuccess_E0B88DFE4610FBE7DE5B3BBF16032E88
struct AConsoleMainMenuLevel_C_OnSuccess_E0B88DFE4610FBE7DE5B3BBF16032E88_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.OnFailure_020F2A8644893EAE0CBF2C884B01EDDF
struct AConsoleMainMenuLevel_C_OnFailure_020F2A8644893EAE0CBF2C884B01EDDF_Params
{
	struct FName                                       WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.OnSuccess_020F2A8644893EAE0CBF2C884B01EDDF
struct AConsoleMainMenuLevel_C_OnSuccess_020F2A8644893EAE0CBF2C884B01EDDF_Params
{
	struct FName                                       WrittenAchievementName;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              WrittenProgress;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                WrittenUserTag;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.OnFailure_E72598634775F93060DC27ABFE8C06DB
struct AConsoleMainMenuLevel_C_OnFailure_E72598634775F93060DC27ABFE8C06DB_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.OnSuccess_E72598634775F93060DC27ABFE8C06DB
struct AConsoleMainMenuLevel_C_OnSuccess_E72598634775F93060DC27ABFE8C06DB_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.OnFailure_F14794B2460291612E60A7B7539D36E0
struct AConsoleMainMenuLevel_C_OnFailure_F14794B2460291612E60A7B7539D36E0_Params
{
	struct FString                                     OculusId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OculusName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OculusLocale;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.OnSuccess_F14794B2460291612E60A7B7539D36E0
struct AConsoleMainMenuLevel_C_OnSuccess_F14794B2460291612E60A7B7539D36E0_Params
{
	struct FString                                     OculusId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OculusName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     OculusLocale;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_26
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_26_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_25
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_25_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_24
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_24_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_23
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_23_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_22
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_22_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_21
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_21_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_20
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_20_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_19
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_19_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_18
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_18_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_17
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_17_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_16
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_16_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_15
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_15_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_14
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_14_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_13
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_13_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_12
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_12_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_11
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_11_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_10
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_10_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_9
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_9_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_8
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_7
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_6
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_5
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_4
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_3
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_2
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_1
struct AConsoleMainMenuLevel_C_InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.ReceiveBeginPlay
struct AConsoleMainMenuLevel_C_ReceiveBeginPlay_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.MainMenu_EndCredits
struct AConsoleMainMenuLevel_C_MainMenu_EndCredits_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.ExtrasMenu_PlayCredits
struct AConsoleMainMenuLevel_C_ExtrasMenu_PlayCredits_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.DisableCreditSkip
struct AConsoleMainMenuLevel_C_DisableCreditSkip_Params
{
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.ReceiveTick
struct AConsoleMainMenuLevel_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ConsoleMainMenuLevel.ConsoleMainMenuLevel_C.ExecuteUbergraph_ConsoleMainMenuLevel
struct AConsoleMainMenuLevel_C_ExecuteUbergraph_ConsoleMainMenuLevel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
