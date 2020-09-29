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

// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.UserConstructionScript
struct ABP_AkAudioDoorTrigger_C_UserConstructionScript_Params
{
};

// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.QueueRedside
struct ABP_AkAudioDoorTrigger_C_QueueRedside_Params
{
};

// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.QueueBlueside
struct ABP_AkAudioDoorTrigger_C_QueueBlueside_Params
{
};

// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_AkAudioDoorTrigger_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.ReceiveBeginPlay
struct ABP_AkAudioDoorTrigger_C_ReceiveBeginPlay_Params
{
};

// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.ManualTrigger
struct ABP_AkAudioDoorTrigger_C_ManualTrigger_Params
{
	bool                                               Redside_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AkAudioDoorTrigger.BP_AkAudioDoorTrigger_C.ExecuteUbergraph_BP_AkAudioDoorTrigger
struct ABP_AkAudioDoorTrigger_C_ExecuteUbergraph_BP_AkAudioDoorTrigger_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
