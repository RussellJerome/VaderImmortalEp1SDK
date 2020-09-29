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

// Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnNotifyEnd_F447B6B54B4E4E12115A1C9B6384A08A
struct UPlayMontageTaskNode_C_OnNotifyEnd_F447B6B54B4E4E12115A1C9B6384A08A_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnNotifyBegin_F447B6B54B4E4E12115A1C9B6384A08A
struct UPlayMontageTaskNode_C_OnNotifyBegin_F447B6B54B4E4E12115A1C9B6384A08A_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnInterrupted_F447B6B54B4E4E12115A1C9B6384A08A
struct UPlayMontageTaskNode_C_OnInterrupted_F447B6B54B4E4E12115A1C9B6384A08A_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnBlendOut_F447B6B54B4E4E12115A1C9B6384A08A
struct UPlayMontageTaskNode_C_OnBlendOut_F447B6B54B4E4E12115A1C9B6384A08A_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayMontageTaskNode.PlayMontageTaskNode_C.OnCompleted_F447B6B54B4E4E12115A1C9B6384A08A
struct UPlayMontageTaskNode_C_OnCompleted_F447B6B54B4E4E12115A1C9B6384A08A_Params
{
	struct FName                                       NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayMontageTaskNode.PlayMontageTaskNode_C.ReceiveExecute
struct UPlayMontageTaskNode_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayMontageTaskNode.PlayMontageTaskNode_C.ReceiveTick
struct UPlayMontageTaskNode_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayMontageTaskNode.PlayMontageTaskNode_C.ExecuteUbergraph_PlayMontageTaskNode
struct UPlayMontageTaskNode_C_ExecuteUbergraph_PlayMontageTaskNode_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
