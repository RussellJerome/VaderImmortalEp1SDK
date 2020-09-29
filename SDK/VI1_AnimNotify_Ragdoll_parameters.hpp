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

// Function AnimNotify_Ragdoll.AnimNotify_Ragdoll_C.GetSanitizedBoneList
struct UAnimNotify_Ragdoll_C_GetSanitizedBoneList_Params
{
	class USkinnedMeshComponent*                       MeshComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FRagdollInfo>                        BoneList;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FRagdollInfo>                        Result;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function AnimNotify_Ragdoll.AnimNotify_Ragdoll_C.Received_Notify
struct UAnimNotify_Ragdoll_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AnimNotify_Ragdoll.AnimNotify_Ragdoll_C.GetNotifyName
struct UAnimNotify_Ragdoll_C_GetNotifyName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
