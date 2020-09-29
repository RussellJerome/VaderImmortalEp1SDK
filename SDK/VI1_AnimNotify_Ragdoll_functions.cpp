// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotify_Ragdoll.AnimNotify_Ragdoll_C.GetSanitizedBoneList
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkinnedMeshComponent*   MeshComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<struct FRagdollInfo>    BoneList                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FRagdollInfo>    Result                         (Parm, OutParm, ZeroConstructor)

void UAnimNotify_Ragdoll_C::GetSanitizedBoneList(class USkinnedMeshComponent* MeshComponent, TArray<struct FRagdollInfo>* BoneList, TArray<struct FRagdollInfo>* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_Ragdoll.AnimNotify_Ragdoll_C.GetSanitizedBoneList");

	UAnimNotify_Ragdoll_C_GetSanitizedBoneList_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoneList != nullptr)
		*BoneList = params.BoneList;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function AnimNotify_Ragdoll.AnimNotify_Ragdoll_C.Received_Notify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotify_Ragdoll_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_Ragdoll.AnimNotify_Ragdoll_C.Received_Notify");

	UAnimNotify_Ragdoll_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AnimNotify_Ragdoll.AnimNotify_Ragdoll_C.GetNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UAnimNotify_Ragdoll_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_Ragdoll.AnimNotify_Ragdoll_C.GetNotifyName");

	UAnimNotify_Ragdoll_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
