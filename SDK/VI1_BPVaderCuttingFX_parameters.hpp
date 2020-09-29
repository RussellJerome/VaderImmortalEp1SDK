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

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.SetLightVisibility
struct ABPVaderCuttingFX_C_SetLightVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.Burst
struct ABPVaderCuttingFX_C_Burst_Params
{
	struct FVector                                     SpawnLoc;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.PickGlowMesh
struct ABPVaderCuttingFX_C_PickGlowMesh_Params
{
	class UInstancedStaticMeshComponent*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateVFX
struct ABPVaderCuttingFX_C_UpdateVFX_Params
{
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateCutAudio
struct ABPVaderCuttingFX_C_UpdateCutAudio_Params
{
	class UAudioComponent*                             StabCutAudio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.StopCutAudio
struct ABPVaderCuttingFX_C_StopCutAudio_Params
{
	class UAudioComponent*                             StabCutAudio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              FadeOutTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.StartCutAudio
struct ABPVaderCuttingFX_C_StartCutAudio_Params
{
	class UAudioComponent*                             StabCutAudio;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              PitchMultiplier;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.StopLight
struct ABPVaderCuttingFX_C_StopLight_Params
{
	class UPointLightComponent*                        Light;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateSmoke
struct ABPVaderCuttingFX_C_UpdateSmoke_Params
{
	int                                                SpawnFrequencyFrom;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnFrequencyTo;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnIndexMin;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SpawnIndexMax;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.UpdateLight
struct ABPVaderCuttingFX_C_UpdateLight_Params
{
	class UPointLightComponent*                        Light;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
	float                                              TimeScale;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlickerMax;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              FlickerMin;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeOffset;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TimeOffsetScale;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.UserConstructionScript
struct ABPVaderCuttingFX_C_UserConstructionScript_Params
{
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.StabCutPitchDown__FinishedFunc
struct ABPVaderCuttingFX_C_StabCutPitchDown__FinishedFunc_Params
{
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.StabCutPitchDown__UpdateFunc
struct ABPVaderCuttingFX_C_StabCutPitchDown__UpdateFunc_Params
{
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.PitchDown
struct ABPVaderCuttingFX_C_PitchDown_Params
{
	class UAudioComponent*                             StabCutAudio;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnEndCut
struct ABPVaderCuttingFX_C_ReceiveOnEndCut_Params
{
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnUpdateCut
struct ABPVaderCuttingFX_C_ReceiveOnUpdateCut_Params
{
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnStartGlance
struct ABPVaderCuttingFX_C_ReceiveOnStartGlance_Params
{
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.ReceiveOnStartCut
struct ABPVaderCuttingFX_C_ReceiveOnStartCut_Params
{
};

// Function BPVaderCuttingFX.BPVaderCuttingFX_C.ExecuteUbergraph_BPVaderCuttingFX
struct ABPVaderCuttingFX_C_ExecuteUbergraph_BPVaderCuttingFX_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
