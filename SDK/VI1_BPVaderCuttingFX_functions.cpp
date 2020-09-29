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

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.SetLightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPVaderCuttingFX_C::SetLightVisibility(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.SetLightVisibility");

	ABPVaderCuttingFX_C_SetLightVisibility_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.Burst
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 SpawnLoc                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABPVaderCuttingFX_C::Burst(const struct FVector& SpawnLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.Burst");

	ABPVaderCuttingFX_C_Burst_Params params;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.PickGlowMesh
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInstancedStaticMeshComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UInstancedStaticMeshComponent* ABPVaderCuttingFX_C::PickGlowMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.PickGlowMesh");

	ABPVaderCuttingFX_C_PickGlowMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateVFX
// (Public, BlueprintCallable, BlueprintEvent)

void ABPVaderCuttingFX_C::UpdateVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateVFX");

	ABPVaderCuttingFX_C_UpdateVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateCutAudio
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         StabCutAudio                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void ABPVaderCuttingFX_C::UpdateCutAudio(class UAudioComponent** StabCutAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateCutAudio");

	ABPVaderCuttingFX_C_UpdateCutAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StabCutAudio != nullptr)
		*StabCutAudio = params.StabCutAudio;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.StopCutAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         StabCutAudio                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          FadeOutTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPVaderCuttingFX_C::StopCutAudio(float FadeOutTime, class UAudioComponent** StabCutAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.StopCutAudio");

	ABPVaderCuttingFX_C_StopCutAudio_Params params;
	params.FadeOutTime = FadeOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StabCutAudio != nullptr)
		*StabCutAudio = params.StabCutAudio;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.StartCutAudio
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         StabCutAudio                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          PitchMultiplier                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPVaderCuttingFX_C::StartCutAudio(float PitchMultiplier, class UAudioComponent** StabCutAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.StartCutAudio");

	ABPVaderCuttingFX_C_StartCutAudio_Params params;
	params.PitchMultiplier = PitchMultiplier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StabCutAudio != nullptr)
		*StabCutAudio = params.StabCutAudio;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.StopLight
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPointLightComponent*    Light                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void ABPVaderCuttingFX_C::StopLight(class UPointLightComponent** Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.StopLight");

	ABPVaderCuttingFX_C_StopLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Light != nullptr)
		*Light = params.Light;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateSmoke
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SpawnFrequencyFrom             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnFrequencyTo               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnIndexMin                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SpawnIndexMax                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPVaderCuttingFX_C::UpdateSmoke(int SpawnFrequencyFrom, int SpawnFrequencyTo, int SpawnIndexMin, int SpawnIndexMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateSmoke");

	ABPVaderCuttingFX_C_UpdateSmoke_Params params;
	params.SpawnFrequencyFrom = SpawnFrequencyFrom;
	params.SpawnFrequencyTo = SpawnFrequencyTo;
	params.SpawnIndexMin = SpawnIndexMin;
	params.SpawnIndexMax = SpawnIndexMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateLight
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPointLightComponent*    Light                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
// float                          TimeScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FlickerMax                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          FlickerMin                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffset                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TimeOffsetScale                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPVaderCuttingFX_C::UpdateLight(float TimeScale, float FlickerMax, float FlickerMin, float TimeOffset, float TimeOffsetScale, class UPointLightComponent** Light)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateLight");

	ABPVaderCuttingFX_C_UpdateLight_Params params;
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


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPVaderCuttingFX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.UserConstructionScript");

	ABPVaderCuttingFX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.StabCutPitchDown__FinishedFunc
// (BlueprintEvent)

void ABPVaderCuttingFX_C::StabCutPitchDown__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.StabCutPitchDown__FinishedFunc");

	ABPVaderCuttingFX_C_StabCutPitchDown__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.StabCutPitchDown__UpdateFunc
// (BlueprintEvent)

void ABPVaderCuttingFX_C::StabCutPitchDown__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.StabCutPitchDown__UpdateFunc");

	ABPVaderCuttingFX_C_StabCutPitchDown__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.PitchDown
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*         StabCutAudio                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void ABPVaderCuttingFX_C::PitchDown(class UAudioComponent* StabCutAudio)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.PitchDown");

	ABPVaderCuttingFX_C_PitchDown_Params params;
	params.StabCutAudio = StabCutAudio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnEndCut
// (Event, Public, BlueprintEvent)

void ABPVaderCuttingFX_C::ReceiveOnEndCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnEndCut");

	ABPVaderCuttingFX_C_ReceiveOnEndCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnUpdateCut
// (Event, Public, BlueprintEvent)

void ABPVaderCuttingFX_C::ReceiveOnUpdateCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnUpdateCut");

	ABPVaderCuttingFX_C_ReceiveOnUpdateCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnStartGlance
// (Event, Public, BlueprintEvent)

void ABPVaderCuttingFX_C::ReceiveOnStartGlance()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnStartGlance");

	ABPVaderCuttingFX_C_ReceiveOnStartGlance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnStartCut
// (Event, Public, BlueprintEvent)

void ABPVaderCuttingFX_C::ReceiveOnStartCut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnStartCut");

	ABPVaderCuttingFX_C_ReceiveOnStartCut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPVaderCuttingFX.BPVaderCuttingFX_C.ExecuteUbergraph_BPVaderCuttingFX
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPVaderCuttingFX_C::ExecuteUbergraph_BPVaderCuttingFX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPVaderCuttingFX.BPVaderCuttingFX_C.ExecuteUbergraph_BPVaderCuttingFX");

	ABPVaderCuttingFX_C_ExecuteUbergraph_BPVaderCuttingFX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
