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

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.GetCuttingEffect
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAkAudioEvent*           Audio_Event                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPLightsaberCuttingFX_C::GetCuttingEffect(class UAkAudioEvent** Audio_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.GetCuttingEffect");

	ABPLightsaberCuttingFX_C_GetCuttingEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Audio_Event != nullptr)
		*Audio_Event = params.Audio_Event;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.Burst
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnLoc                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABPLightsaberCuttingFX_C::Burst(const struct FVector& SpawnLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.Burst");

	ABPLightsaberCuttingFX_C_Burst_Params params;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.PickGlowMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInstancedStaticMeshComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UInstancedStaticMeshComponent* ABPLightsaberCuttingFX_C::PickGlowMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.PickGlowMesh");

	ABPLightsaberCuttingFX_C_PickGlowMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPLightsaberCuttingFX_C::UpdateVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateVFX");

	ABPLightsaberCuttingFX_C_UpdateVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateCutAudio
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         StabCutAudio                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void ABPLightsaberCuttingFX_C::UpdateCutAudio(class UAudioComponent** StabCutAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateCutAudio");

	ABPLightsaberCuttingFX_C_UpdateCutAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StabCutAudio != nullptr)
		*StabCutAudio = params.StabCutAudio;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StopCutAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         StabCutAudio                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          FadeOutTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPLightsaberCuttingFX_C::StopCutAudio(float FadeOutTime, class UAudioComponent** StabCutAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StopCutAudio");

	ABPLightsaberCuttingFX_C_StopCutAudio_Params params;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StabCutAudio != nullptr)
		*StabCutAudio = params.StabCutAudio;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StartCutAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         StabCutAudio                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          PitchMultiplier                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPLightsaberCuttingFX_C::StartCutAudio(float PitchMultiplier, class UAudioComponent** StabCutAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StartCutAudio");

	ABPLightsaberCuttingFX_C_StartCutAudio_Params params;
	params.PitchMultiplier = PitchMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StabCutAudio != nullptr)
		*StabCutAudio = params.StabCutAudio;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StopLight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPointLightComponent*    Light                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void ABPLightsaberCuttingFX_C::StopLight(class UPointLightComponent** Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StopLight");

	ABPLightsaberCuttingFX_C_StopLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Light != nullptr)
		*Light = params.Light;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateSmoke
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SpawnFrequencyFrom             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnFrequencyTo               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnIndexMin                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnIndexMax                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPLightsaberCuttingFX_C::UpdateSmoke(int SpawnFrequencyFrom, int SpawnFrequencyTo, int SpawnIndexMin, int SpawnIndexMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateSmoke");

	ABPLightsaberCuttingFX_C_UpdateSmoke_Params params;
	params.SpawnFrequencyFrom = SpawnFrequencyFrom;
	params.SpawnFrequencyTo = SpawnFrequencyTo;
	params.SpawnIndexMin = SpawnIndexMin;
	params.SpawnIndexMax = SpawnIndexMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateLight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPointLightComponent*    Light                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          TimeScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FlickerMax                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FlickerMin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffsetScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPLightsaberCuttingFX_C::UpdateLight(float TimeScale, float FlickerMax, float FlickerMin, float TimeOffset, float TimeOffsetScale, class UPointLightComponent** Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateLight");

	ABPLightsaberCuttingFX_C_UpdateLight_Params params;
	params.TimeScale = TimeScale;
	params.FlickerMax = FlickerMax;
	params.FlickerMin = FlickerMin;
	params.TimeOffset = TimeOffset;
	params.TimeOffsetScale = TimeOffsetScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Light != nullptr)
		*Light = params.Light;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPLightsaberCuttingFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UserConstructionScript");

	ABPLightsaberCuttingFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StabCutPitchDown__FinishedFunc
// (BlueprintEvent)

void ABPLightsaberCuttingFX_C::StabCutPitchDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StabCutPitchDown__FinishedFunc");

	ABPLightsaberCuttingFX_C_StabCutPitchDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StabCutPitchDown__UpdateFunc
// (BlueprintEvent)

void ABPLightsaberCuttingFX_C::StabCutPitchDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StabCutPitchDown__UpdateFunc");

	ABPLightsaberCuttingFX_C_StabCutPitchDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPLightsaberCuttingFX_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveBeginPlay");

	ABPLightsaberCuttingFX_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnUpdateCut
// (Event, Public, BlueprintEvent)

void ABPLightsaberCuttingFX_C::ReceiveOnUpdateCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnUpdateCut");

	ABPLightsaberCuttingFX_C_ReceiveOnUpdateCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnStartCut
// (Event, Public, BlueprintEvent)

void ABPLightsaberCuttingFX_C::ReceiveOnStartCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnStartCut");

	ABPLightsaberCuttingFX_C_ReceiveOnStartCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnStartGlance
// (Event, Public, BlueprintEvent)

void ABPLightsaberCuttingFX_C::ReceiveOnStartGlance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnStartGlance");

	ABPLightsaberCuttingFX_C_ReceiveOnStartGlance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnEndCut
// (Event, Public, BlueprintEvent)

void ABPLightsaberCuttingFX_C::ReceiveOnEndCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnEndCut");

	ABPLightsaberCuttingFX_C_ReceiveOnEndCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.PitchDown
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         StabCutAudio                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void ABPLightsaberCuttingFX_C::PitchDown(class UAudioComponent* StabCutAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.PitchDown");

	ABPLightsaberCuttingFX_C_PitchDown_Params params;
	params.StabCutAudio = StabCutAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPLightsaberCuttingFX_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveTick");

	ABPLightsaberCuttingFX_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ExecuteUbergraph_BPLightsaberCuttingFX
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPLightsaberCuttingFX_C::ExecuteUbergraph_BPLightsaberCuttingFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ExecuteUbergraph_BPLightsaberCuttingFX");

	ABPLightsaberCuttingFX_C_ExecuteUbergraph_BPLightsaberCuttingFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
