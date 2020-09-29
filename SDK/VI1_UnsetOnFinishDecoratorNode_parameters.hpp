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

// Function UnsetOnFinishDecoratorNode.UnsetOnFinishDecoratorNode_C.PerformConditionCheck
struct UUnsetOnFinishDecoratorNode_C_PerformConditionCheck_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnsetOnFinishDecoratorNode.UnsetOnFinishDecoratorNode_C.ReceiveExecutionFinish
struct UUnsetOnFinishDecoratorNode_C_ReceiveExecutionFinish_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EBTNodeResult>*                        NodeResult;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnsetOnFinishDecoratorNode.UnsetOnFinishDecoratorNode_C.ExecuteUbergraph_UnsetOnFinishDecoratorNode
struct UUnsetOnFinishDecoratorNode_C_ExecuteUbergraph_UnsetOnFinishDecoratorNode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
