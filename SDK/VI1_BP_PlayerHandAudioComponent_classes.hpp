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

// BlueprintGeneratedClass BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C
// 0x0020 (0x01A8 - 0x0188)
class UBP_PlayerHandAudioComponent_C : public UPlayerHandAudioComponentBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0188(0x0008) (Transient, DuplicateTransient)
	float                                              Grip;                                                     // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Trigger;                                                  // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GripTimestamp;                                            // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerTimestamp;                                         // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GripDelta;                                                // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TriggerDelta;                                             // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C");
		return ptr;
	}


	void IsReleasingTrigger(bool* IsReleasingGrip);
	void IsPressingTrigger(bool* IsPressingTrigger);
	void UpdateTrigger();
	void IsReleasingGrip(bool* IsReleasingGrip);
	void IsPressingGrip(bool* IsPressingGrip);
	void UpdateGrip();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void OnBoneStartedMoving(const struct FName& fing2CDEF);
	void OnBoneStoppedMoving(const struct FName& fing2CDEF);
	void ExecuteUbergraph_BP_PlayerHandAudioComponent(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
