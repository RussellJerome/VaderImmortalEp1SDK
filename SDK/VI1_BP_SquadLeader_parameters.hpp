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

// Function BP_SquadLeader.BP_SquadLeader_C.SetActionCooldown
struct UBP_SquadLeader_C_SetActionCooldown_Params
{
	float                                              CooldownController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Output_Get;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SquadLeader.BP_SquadLeader_C.GetActionCooldown
struct UBP_SquadLeader_C_GetActionCooldown_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_SquadLeader.BP_SquadLeader_C.OnAction
struct UBP_SquadLeader_C_OnAction_Params
{
};

// Function BP_SquadLeader.BP_SquadLeader_C.ReceiveTick
struct UBP_SquadLeader_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SquadLeader.BP_SquadLeader_C.ExecuteUbergraph_BP_SquadLeader
struct UBP_SquadLeader_C_ExecuteUbergraph_BP_SquadLeader_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
