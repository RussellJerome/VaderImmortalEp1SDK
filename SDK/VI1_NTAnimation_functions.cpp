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

// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetNameFromStruct
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   AnimTypeName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UNTAnimationBlueprintFunctionLibrary::STATIC_GetNameFromStruct(const struct FName& AnimTypeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetNameFromStruct");

	UNTAnimationBlueprintFunctionLibrary_GetNameFromStruct_Params params;
	params.AnimTypeName = AnimTypeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetListFromName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  AnimSetClass                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ListName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ListClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UNTAnimList*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNTAnimList* UNTAnimationBlueprintFunctionLibrary::STATIC_GetListFromName(class UClass* AnimSetClass, const struct FName& ListName, class UClass* ListClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetListFromName");

	UNTAnimationBlueprintFunctionLibrary_GetListFromName_Params params;
	params.AnimSetClass = AnimSetClass;
	params.ListName = ListName;
	params.ListClass = ListClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetFrameRequest
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   FrameRequestName               (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UNTAnimationBlueprintFunctionLibrary::STATIC_GetFrameRequest(const struct FName& FrameRequestName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetFrameRequest");

	UNTAnimationBlueprintFunctionLibrary_GetFrameRequest_Params params;
	params.FrameRequestName = FrameRequestName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetAnimType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName                   AnimTypeName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UNTAnimationBlueprintFunctionLibrary::STATIC_GetAnimType(const struct FName& AnimTypeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetAnimType");

	UNTAnimationBlueprintFunctionLibrary_GetAnimType_Params params;
	params.AnimTypeName = AnimTypeName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetAnimAction
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  AnimAction                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UNTAnimationBlueprintFunctionLibrary::STATIC_GetAnimAction(class UClass* AnimAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetAnimAction");

	UNTAnimationBlueprintFunctionLibrary_GetAnimAction_Params params;
	params.AnimAction = AnimAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.ContainsAnimType
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FName>           List                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// EContainsResult                Branches                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UNTAnimationBlueprintFunctionLibrary::STATIC_ContainsAnimType(TArray<struct FName> List, EContainsResult* Branches)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimationBlueprintFunctionLibrary.ContainsAnimType");

	UNTAnimationBlueprintFunctionLibrary_ContainsAnimType_Params params;
	params.List = List;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Branches != nullptr)
		*Branches = params.Branches;

	return params.ReturnValue;
}


// Function NTAnimation.NTAnimComponent.UpdateAnimGraphVars
// (Native, Protected)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UNTAnimComponent::UpdateAnimGraphVars(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimComponent.UpdateAnimGraphVars");

	UNTAnimComponent_UpdateAnimGraphVars_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTAnimation.NTAnimComponent.PlayAnimMontage
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAnimMontage*            Montage                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AnimScale                      (Parm, IsPlainOldData)
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsFromAction                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IgnoreCombatSlots              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NoFlipSlot                     (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* UNTAnimComponent::PlayAnimMontage(class UAnimMontage* Montage, const struct FVector& AnimScale, float PlayRate, bool IsFromAction, float StartTime, float BlendTime, bool IgnoreCombatSlots, bool NoFlipSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimComponent.PlayAnimMontage");

	UNTAnimComponent_PlayAnimMontage_Params params;
	params.Montage = Montage;
	params.AnimScale = AnimScale;
	params.PlayRate = PlayRate;
	params.IsFromAction = IsFromAction;
	params.StartTime = StartTime;
	params.BlendTime = BlendTime;
	params.IgnoreCombatSlots = IgnoreCombatSlots;
	params.NoFlipSlot = NoFlipSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTAnimation.NTAnimComponent.GetMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USkeletalMeshComponent* UNTAnimComponent::GetMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimComponent.GetMeshComponent");

	UNTAnimComponent_GetMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTAnimation.NTAnimGraphInterface.StartNewSpecialMovementType
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<struct FName>           NewTypes                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FName>           OldTypes                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName                   Tag                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UNTAnimGraphInterface::StartNewSpecialMovementType(TArray<struct FName> NewTypes, TArray<struct FName> OldTypes, const struct FName& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimGraphInterface.StartNewSpecialMovementType");

	UNTAnimGraphInterface_StartNewSpecialMovementType_Params params;
	params.NewTypes = NewTypes;
	params.OldTypes = OldTypes;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTAnimation.NTAnimGraphInterface.StartNewAnimatedMovement
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   NewType                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UNTAnimGraphInterface::StartNewAnimatedMovement(const struct FName& NewType, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimGraphInterface.StartNewAnimatedMovement");

	UNTAnimGraphInterface_StartNewAnimatedMovement_Params params;
	params.NewType = NewType;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTAnimation.NTAnimGraphInterface.SendRequest
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   NewRequest                     (Parm, ZeroConstructor, IsPlainOldData)

void UNTAnimGraphInterface::SendRequest(const struct FName& NewRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimGraphInterface.SendRequest");

	UNTAnimGraphInterface_SendRequest_Params params;
	params.NewRequest = NewRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTAnimation.NTAnimSet.GetListFromName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UClass*                  AnimSetClass                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ListName                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ListClass                      (Parm, ZeroConstructor, IsPlainOldData)
// class UNTAnimList*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UNTAnimList* UNTAnimSet::STATIC_GetListFromName(class UClass* AnimSetClass, const struct FName& ListName, class UClass* ListClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimSet.GetListFromName");

	UNTAnimSet_GetListFromName_Params params;
	params.AnimSetClass = AnimSetClass;
	params.ListName = ListName;
	params.ListClass = ListClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NTAnimation.NTAnimRequestComponent.SetAnimInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAnimInstance*           instance                       (Parm, ZeroConstructor, IsPlainOldData)

void UNTAnimRequestComponent::SetAnimInstance(class UAnimInstance* instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimRequestComponent.SetAnimInstance");

	UNTAnimRequestComponent_SetAnimInstance_Params params;
	params.instance = instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NTAnimation.NTAnimRequestComponent.RequestHandPose
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UAnimMontage*            AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FNTAnimVarStruct        animData                       (ConstParm, Parm, OutParm, ReferenceParm)

void UNTAnimRequestComponent::RequestHandPose(class UAnimMontage* AnimMontage, const struct FNTAnimVarStruct& animData)
{
	static auto fn = UObject::FindObject<UFunction>("Function NTAnimation.NTAnimRequestComponent.RequestHandPose");

	UNTAnimRequestComponent_RequestHandPose_Params params;
	params.AnimMontage = AnimMontage;
	params.animData = animData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
