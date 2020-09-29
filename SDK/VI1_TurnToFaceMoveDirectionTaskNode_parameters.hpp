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

// Function TurnToFaceMoveDirectionTaskNode.TurnToFaceMoveDirectionTaskNode_C.ReceiveTick
struct UTurnToFaceMoveDirectionTaskNode_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TurnToFaceMoveDirectionTaskNode.TurnToFaceMoveDirectionTaskNode_C.ExecuteUbergraph_TurnToFaceMoveDirectionTaskNode
struct UTurnToFaceMoveDirectionTaskNode_C_ExecuteUbergraph_TurnToFaceMoveDirectionTaskNode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
