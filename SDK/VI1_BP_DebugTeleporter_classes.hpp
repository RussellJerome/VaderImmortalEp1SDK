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

// BlueprintGeneratedClass BP_DebugTeleporter.BP_DebugTeleporter_C
// 0x0070 (0x0458 - 0x03E8)
class ABP_DebugTeleporter_C : public AWKNDCheckpointTeleporter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E8(0x0008) (Transient, DuplicateTransient)
	class UTextRenderComponent*                        TeleportText;                                             // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMenuOpen;                                                // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseDebugList;                                            // 0x0402(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresZoe;                                             // 0x0403(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresLightsaber;                                      // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bRequiresMultiTool;                                       // 0x0405(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0406(0x0002) MISSED OFFSET
	int                                                Index;                                                    // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x040C(0x0004) MISSED OFFSET
	class UWKNDProgressionCheckpointData*              ActiveCheckpoint;                                         // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATargetPoint*                                ActiveTarget;                                             // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    TeleportComplete;                                         // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bIncrementIndex;                                          // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseCameraPreciseTeleporting;                             // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0432(0x0002) MISSED OFFSET
	float                                              CameraFadeTime;                                           // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnFadeUpFinished;                                         // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFadeUpStart;                                            // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugTeleporter.BP_DebugTeleporter_C");
		return ptr;
	}


	void TransformDestinationToActor(const struct FVector& TargetLocation, const struct FRotator& TargetRotation, struct FVector* ActorLocation, struct FRotator* ActorRotation);
	void SanitiseIndex();
	void UpdateActiveCheckpoint();
	void TeleportToLocation(const struct FString& LocationName);
	void TriggerAmbientAudio(class ATargetPoint* TargetLocation);
	void DoTeleport(class ATargetPoint* TeleportTargetPlayer, class ATargetPoint* TeleportTargetZoe, bool bRequiresLightsaber, bool bRequiresZoe, bool bRequiresMultiTool);
	void UserConstructionScript();
	void InpActEvt_Down_K2Node_InputKeyEvent_10(const struct FKey& Key);
	void InpActEvt_Down_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_Left_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Trigger_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_MotionController_Right_FaceButton1_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void InpAxisKeyEvt_MotionController_Right_Thumbstick_Y_K2Node_InputAxisKeyEvent_12(float AxisValue);
	void ToggleMenu();
	void DoCheckpointTeleport(class UWKNDProgressionCheckpointData** DesiredCheckpoint);
	void PerformTeleport();
	void OnTeleportFinished();
	void ExecuteUbergraph_BP_DebugTeleporter(int EntryPoint);
	void OnFadeUpStart__DelegateSignature();
	void OnFadeUpFinished__DelegateSignature();
	void TeleportComplete__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
