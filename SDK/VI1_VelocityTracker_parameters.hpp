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

// Function VelocityTracker.VelocityTracker_C.Debug Output
struct UVelocityTracker_C_Debug_Output_Params
{
};

// Function VelocityTracker.VelocityTracker_C.ReceiveTick
struct UVelocityTracker_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VelocityTracker.VelocityTracker_C.ExecuteUbergraph_VelocityTracker
struct UVelocityTracker_C_ExecuteUbergraph_VelocityTracker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
