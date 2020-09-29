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

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsReleasingTrigger
struct UBP_PlayerHandAudioComponent_C_IsReleasingTrigger_Params
{
	bool                                               IsReleasingGrip;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsPressingTrigger
struct UBP_PlayerHandAudioComponent_C_IsPressingTrigger_Params
{
	bool                                               IsPressingTrigger;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.UpdateTrigger
struct UBP_PlayerHandAudioComponent_C_UpdateTrigger_Params
{
};

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsReleasingGrip
struct UBP_PlayerHandAudioComponent_C_IsReleasingGrip_Params
{
	bool                                               IsReleasingGrip;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.IsPressingGrip
struct UBP_PlayerHandAudioComponent_C_IsPressingGrip_Params
{
	bool                                               IsPressingGrip;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.UpdateGrip
struct UBP_PlayerHandAudioComponent_C_UpdateGrip_Params
{
};

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.ReceiveTick
struct UBP_PlayerHandAudioComponent_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.ReceiveBeginPlay
struct UBP_PlayerHandAudioComponent_C_ReceiveBeginPlay_Params
{
};

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.OnBoneStartedMoving
struct UBP_PlayerHandAudioComponent_C_OnBoneStartedMoving_Params
{
	struct FName                                       fing2CDEF;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.OnBoneStoppedMoving
struct UBP_PlayerHandAudioComponent_C_OnBoneStoppedMoving_Params
{
	struct FName                                       fing2CDEF;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_PlayerHandAudioComponent.BP_PlayerHandAudioComponent_C.ExecuteUbergraph_BP_PlayerHandAudioComponent
struct UBP_PlayerHandAudioComponent_C_ExecuteUbergraph_BP_PlayerHandAudioComponent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
