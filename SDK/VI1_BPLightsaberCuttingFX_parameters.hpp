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

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.GetCuttingEffect
struct ABPLightsaberCuttingFX_C_GetCuttingEffect_Params
{
	class UAkAudioEvent*                               Audio_Event;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.Burst
struct ABPLightsaberCuttingFX_C_Burst_Params
{
	struct FVector                                     SpawnLoc;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.PickGlowMesh
struct ABPLightsaberCuttingFX_C_PickGlowMesh_Params
{
	class UInstancedStaticMeshComponent*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateVFX
struct ABPLightsaberCuttingFX_C_UpdateVFX_Params
{
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateCutAudio
struct ABPLightsaberCuttingFX_C_UpdateCutAudio_Params
{
	class UAudioComponent*                             StabCutAudio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StopCutAudio
struct ABPLightsaberCuttingFX_C_StopCutAudio_Params
{
	class UAudioComponent*                             StabCutAudio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              FadeOutTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StartCutAudio
struct ABPLightsaberCuttingFX_C_StartCutAudio_Params
{
	class UAudioComponent*                             StabCutAudio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StopLight
struct ABPLightsaberCuttingFX_C_StopLight_Params
{
	class UPointLightComponent*                        Light;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateSmoke
struct ABPLightsaberCuttingFX_C_UpdateSmoke_Params
{
	int                                                SpawnFrequencyFrom;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnFrequencyTo;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnIndexMin;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnIndexMax;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UpdateLight
struct ABPLightsaberCuttingFX_C_UpdateLight_Params
{
	class UPointLightComponent*                        Light;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              TimeScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlickerMax;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlickerMin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeOffset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeOffsetScale;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.UserConstructionScript
struct ABPLightsaberCuttingFX_C_UserConstructionScript_Params
{
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StabCutPitchDown__FinishedFunc
struct ABPLightsaberCuttingFX_C_StabCutPitchDown__FinishedFunc_Params
{
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.StabCutPitchDown__UpdateFunc
struct ABPLightsaberCuttingFX_C_StabCutPitchDown__UpdateFunc_Params
{
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveBeginPlay
struct ABPLightsaberCuttingFX_C_ReceiveBeginPlay_Params
{
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnUpdateCut
struct ABPLightsaberCuttingFX_C_ReceiveOnUpdateCut_Params
{
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnStartCut
struct ABPLightsaberCuttingFX_C_ReceiveOnStartCut_Params
{
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnStartGlance
struct ABPLightsaberCuttingFX_C_ReceiveOnStartGlance_Params
{
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveOnEndCut
struct ABPLightsaberCuttingFX_C_ReceiveOnEndCut_Params
{
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.PitchDown
struct ABPLightsaberCuttingFX_C_PitchDown_Params
{
	class UAudioComponent*                             StabCutAudio;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ReceiveTick
struct ABPLightsaberCuttingFX_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPLightsaberCuttingFX.BPLightsaberCuttingFX_C.ExecuteUbergraph_BPLightsaberCuttingFX
struct ABPLightsaberCuttingFX_C_ExecuteUbergraph_BPLightsaberCuttingFX_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
