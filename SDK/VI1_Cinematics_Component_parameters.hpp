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

// Function Cinematics_Component.Cinematics_Component_C.ReceiveBeginPlay
struct UCinematics_Component_C_ReceiveBeginPlay_Params
{
};

// Function Cinematics_Component.Cinematics_Component_C.Event QueueLodChangeWhenUnrendered
struct UCinematics_Component_C_Event_QueueLodChangeWhenUnrendered_Params
{
	int                                                ForcedLOD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cinematics_Component.Cinematics_Component_C.Event CheckingLodChangeQueue
struct UCinematics_Component_C_Event_CheckingLodChangeQueue_Params
{
};

// Function Cinematics_Component.Cinematics_Component_C.Event ForceLod
struct UCinematics_Component_C_Event_ForceLod_Params
{
	int                                                ForcedLOD;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cinematics_Component.Cinematics_Component_C.ExecuteUbergraph_Cinematics_Component
struct UCinematics_Component_C_ExecuteUbergraph_Cinematics_Component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Cinematics_Component.Cinematics_Component_C.DispatchLodChangeWhenUnrendered__DelegateSignature
struct UCinematics_Component_C_DispatchLodChangeWhenUnrendered__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
