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

// Function BP_DebugTeleporterAudioTriggerRedirector.BP_DebugTeleporterAudioTriggerRedirector_C.TriggerAudio
// (BlueprintCallable, BlueprintEvent)

void UBP_DebugTeleporterAudioTriggerRedirector_C::TriggerAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporterAudioTriggerRedirector.BP_DebugTeleporterAudioTriggerRedirector_C.TriggerAudio");

	UBP_DebugTeleporterAudioTriggerRedirector_C_TriggerAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DebugTeleporterAudioTriggerRedirector.BP_DebugTeleporterAudioTriggerRedirector_C.ExecuteUbergraph_BP_DebugTeleporterAudioTriggerRedirector
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_DebugTeleporterAudioTriggerRedirector_C::ExecuteUbergraph_BP_DebugTeleporterAudioTriggerRedirector(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DebugTeleporterAudioTriggerRedirector.BP_DebugTeleporterAudioTriggerRedirector_C.ExecuteUbergraph_BP_DebugTeleporterAudioTriggerRedirector");

	UBP_DebugTeleporterAudioTriggerRedirector_C_ExecuteUbergraph_BP_DebugTeleporterAudioTriggerRedirector_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
