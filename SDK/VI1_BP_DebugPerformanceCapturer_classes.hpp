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

// BlueprintGeneratedClass BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C
// 0x0098 (0x03C8 - 0x0330)
class ABP_DebugPerformanceCapturer_C : public AWKNDPerformanceCapturer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class UTextRenderComponent*                        PerformanceCaptureText;                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bMenuOpen;                                                // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseDebugList;                                            // 0x034A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x034B(0x0005) MISSED OFFSET
	struct FText                                       RunningText;                                              // 0x0350(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       NotRunningText;                                           // 0x0368(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StoppingText;                                             // 0x0380(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StartingText;                                             // 0x0398(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       StoppedText;                                              // 0x03B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugPerformanceCapturer.BP_DebugPerformanceCapturer_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_MotionController_Left_Trigger_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void UpdatePerformanceCaptureStatus();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_DebugPerformanceCapturer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
