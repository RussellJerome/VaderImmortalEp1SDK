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

// Function ClearWanderOnExitDecoratorNode.ClearWanderOnExitDecoratorNode_C.PerformConditionCheck
struct UClearWanderOnExitDecoratorNode_C_PerformConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ClearWanderOnExitDecoratorNode.ClearWanderOnExitDecoratorNode_C.ReceiveExecutionFinish
struct UClearWanderOnExitDecoratorNode_C_ReceiveExecutionFinish_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTNodeResult>*                        NodeResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClearWanderOnExitDecoratorNode.ClearWanderOnExitDecoratorNode_C.ExecuteUbergraph_ClearWanderOnExitDecoratorNode
struct UClearWanderOnExitDecoratorNode_C_ExecuteUbergraph_ClearWanderOnExitDecoratorNode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
