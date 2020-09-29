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

// BlueprintGeneratedClass BP_DebugTeleporterAudioTriggerRedirector.BP_DebugTeleporterAudioTriggerRedirector_C
// 0x0031 (0x0121 - 0x00F0)
class UBP_DebugTeleporterAudioTriggerRedirector_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F0(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x28];                                      // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BP_DebugTeleporterAudioTriggerRedirector.BP_DebugTeleporterAudioTriggerRedirector_C.AudioDoorTriggerRedirector
	bool                                               Redside_;                                                 // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DebugTeleporterAudioTriggerRedirector.BP_DebugTeleporterAudioTriggerRedirector_C");
		return ptr;
	}


	void TriggerAudio();
	void ExecuteUbergraph_BP_DebugTeleporterAudioTriggerRedirector(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
