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

// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetNameFromStruct
struct UNTAnimationBlueprintFunctionLibrary_GetNameFromStruct_Params
{
	struct FName                                       AnimTypeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetListFromName
struct UNTAnimationBlueprintFunctionLibrary_GetListFromName_Params
{
	class UClass*                                      AnimSetClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ListName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ListClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UNTAnimList*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetFrameRequest
struct UNTAnimationBlueprintFunctionLibrary_GetFrameRequest_Params
{
	struct FName                                       FrameRequestName;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetAnimType
struct UNTAnimationBlueprintFunctionLibrary_GetAnimType_Params
{
	struct FName                                       AnimTypeName;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.GetAnimAction
struct UNTAnimationBlueprintFunctionLibrary_GetAnimAction_Params
{
	class UClass*                                      AnimAction;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTAnimation.NTAnimationBlueprintFunctionLibrary.ContainsAnimType
struct UNTAnimationBlueprintFunctionLibrary_ContainsAnimType_Params
{
	TArray<struct FName>                               List;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	EContainsResult                                    Branches;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTAnimation.NTAnimComponent.UpdateAnimGraphVars
struct UNTAnimComponent_UpdateAnimGraphVars_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NTAnimation.NTAnimComponent.PlayAnimMontage
struct UNTAnimComponent_PlayAnimMontage_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AnimScale;                                                // (Parm, IsPlainOldData)
	float                                              PlayRate;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsFromAction;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              BlendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreCombatSlots;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               NoFlipSlot;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTAnimation.NTAnimComponent.GetMeshComponent
struct UNTAnimComponent_GetMeshComponent_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function NTAnimation.NTAnimGraphInterface.StartNewSpecialMovementType
struct UNTAnimGraphInterface_StartNewSpecialMovementType_Params
{
	TArray<struct FName>                               NewTypes;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               OldTypes;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FName                                       Tag;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NTAnimation.NTAnimGraphInterface.StartNewAnimatedMovement
struct UNTAnimGraphInterface_StartNewAnimatedMovement_Params
{
	struct FName                                       NewType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NTAnimation.NTAnimGraphInterface.SendRequest
struct UNTAnimGraphInterface_SendRequest_Params
{
	struct FName                                       NewRequest;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NTAnimation.NTAnimSet.GetListFromName
struct UNTAnimSet_GetListFromName_Params
{
	class UClass*                                      AnimSetClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ListName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ListClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UNTAnimList*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTAnimation.NTAnimRequestComponent.SetAnimInstance
struct UNTAnimRequestComponent_SetAnimInstance_Params
{
	class UAnimInstance*                               instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NTAnimation.NTAnimRequestComponent.RequestHandPose
struct UNTAnimRequestComponent_RequestHandPose_Params
{
	class UAnimMontage*                                AnimMontage;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FNTAnimVarStruct                            animData;                                                 // (ConstParm, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
