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

// BlueprintGeneratedClass ConsoleMainMenuLevel.ConsoleMainMenuLevel_C
// 0x0168 (0x0488 - 0x0320)
class AConsoleMainMenuLevel_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0320(0x0008) (Transient, DuplicateTransient)
	float                                              SubLogoFade_Fade_E30CF3104AD82ED902B93C9DDEED838F;        // 0x0328(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SubLogoFade__Direction_E30CF3104AD82ED902B93C9DDEED838F;  // 0x032C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SubLogoFade;                                              // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     MoveTitle_Title_Intensity_6C388AE04B19D43C4F5083B049D73A7B;// 0x0338(0x000C) (IsPlainOldData)
	float                                              MoveTitle_AnimLength_6C388AE04B19D43C4F5083B049D73A7B;    // 0x0344(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    MoveTitle__Direction_6C388AE04B19D43C4F5083B049D73A7B;    // 0x0348(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0349(0x0007) MISSED OFFSET
	class UTimelineComponent*                          MoveTitle;                                                // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APlayerCameraManager*                        PlayerCam;                                                // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalDelay;                                            // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InitialDelay;                                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShowSplash;                                               // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0369(0x0007) MISSED OFFSET
	class ABP_WKNDPlayerPawn_C*                        PlayerPawn;                                               // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MenuAdjust_RotationThreshold;                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MenuAdjust_HeightThreshold;                               // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MenuAdjust_LocationThreshold;                             // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MenuAdjust_LocationCenter;                                // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MenuAdjust;                                               // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	float                                              MenuAdjust_HeightCenter;                                  // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMediaPlayer*                                MediaPlayer;                                              // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_Credits_C*                               BP_Credits;                                               // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ControllersDetected;                                      // 0x03A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03A1(0x0003) MISSED OFFSET
	float                                              PlayerYPosition;                                          // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinGuardianDimensionInCm;                                 // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WarningDismissed;                                         // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	struct FName                                       OculusAchievementExperienceCompleteID;                    // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     OculusLocale;                                             // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class ABP_WidgetConsoleMenu_C*                     BP_WidgetConsoleMenu_240_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_ILMxLAB_Logo_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_Text_VaderImmortal_8_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASpotLight*                                  LT_Credits_Rift_sp01_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAkAmbientSound*                             amb_MainMenu_lp_4_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAkAmbientSound*                             Ak_title_vaderImmortal_L_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAkAmbientSound*                             Ak_title_vaderImmortal_R_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_OculusSplashScreen_C*                    BP_OculusSplashScreen_299_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_2dLogoPlane_2_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x0408(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_Oculus2dLogoPlane_5_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_LucasfilmLogo_Movie_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x0418(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATargetPoint*                                CreditSpawnLoc_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_Lucasfilm2dLogo_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAkAmbientSound*                             Ak_title_vaderImmortal_L2_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAkAmbientSound*                             Ak_title_vaderImmortal_R2_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_UpdatingScreen_C*                        BP_UpdatingScreen_236_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_WarningText_C*                           BP_WarningText_122_ExecuteUbergraph_ConsoleMainMenuLevel_RefProperty;// 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerStart*                                PlayerStart_1_EdGraph_0_RefProperty;                      // 0x0450(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_WidgetConsoleMenu_C*                     BP_WidgetConsoleMenu_240_EdGraph_1_RefProperty;           // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_WidgetConsoleMenu_C*                     BP_WidgetConsoleMenu_240_EdGraph_2_RefProperty;           // 0x0460(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_WidgetConsoleMenu_C*                     BP_WidgetConsoleMenu_240_EdGraph_3_RefProperty;           // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_WidgetConsoleMenu_C*                     BP_WidgetConsoleMenu_240_EdGraph_4_RefProperty;           // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData)
	class APlayerStart*                                PlayerStart_1_EdGraph_5_RefProperty;                      // 0x0478(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_WarningText_C*                           BP_WarningText_122_EdGraph_7_RefProperty;                 // 0x0480(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ConsoleMainMenuLevel.ConsoleMainMenuLevel_C");
		return ptr;
	}


	void SetFirstTimeLanguage();
	void CheckForControllers();
	void GetHMDWorldLocation(struct FVector* HMD);
	void ReCenterPlayer_wConstraint(float AngleConstraint);
	void CheckLocation();
	void CheckHeight();
	void CheckRotation();
	void LerpLocationAndRotation();
	void ReCenterPlayer();
	void MoveTitle__FinishedFunc();
	void MoveTitle__UpdateFunc();
	void MoveTitle__StartFade__EventFunc();
	void SubLogoFade__FinishedFunc();
	void SubLogoFade__UpdateFunc();
	void OnFailure_A766D8314959727FEDBEE1A3890A7AA4();
	void OnSuccess_A766D8314959727FEDBEE1A3890A7AA4();
	void OnFailure_E0B88DFE4610FBE7DE5B3BBF16032E88();
	void OnSuccess_E0B88DFE4610FBE7DE5B3BBF16032E88();
	void OnFailure_020F2A8644893EAE0CBF2C884B01EDDF(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnSuccess_020F2A8644893EAE0CBF2C884B01EDDF(const struct FName& WrittenAchievementName, float WrittenProgress, int WrittenUserTag);
	void OnFailure_E72598634775F93060DC27ABFE8C06DB();
	void OnSuccess_E72598634775F93060DC27ABFE8C06DB();
	void OnFailure_F14794B2460291612E60A7B7539D36E0(const struct FString& OculusId, const struct FString& OculusName, const struct FString& OculusLocale);
	void OnSuccess_F14794B2460291612E60A7B7539D36E0(const struct FString& OculusId, const struct FString& OculusName, const struct FString& OculusLocale);
	void InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_26(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_25(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_24(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_23(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Grip1_K2Node_InputKeyEvent_22(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Grip1_K2Node_InputKeyEvent_21(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_20(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_19(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_18(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_17(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_16(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_15(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_14(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_13(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_12(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_11(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton2_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton2_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MotionController_Left_FaceButton1_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void MainMenu_EndCredits();
	void ExtrasMenu_PlayCredits();
	void DisableCreditSkip();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_ConsoleMainMenuLevel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
