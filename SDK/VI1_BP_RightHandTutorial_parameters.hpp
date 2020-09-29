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

// Function BP_RightHandTutorial.BP_RightHandTutorial_C.UpdateTutorialText
struct ABP_RightHandTutorial_C_UpdateTutorialText_Params
{
	struct FString                                     inString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_RightHandTutorial.BP_RightHandTutorial_C.GetTargetLocation
struct ABP_RightHandTutorial_C_GetTargetLocation_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_RightHandTutorial.BP_RightHandTutorial_C.InitMaterials
struct ABP_RightHandTutorial_C_InitMaterials_Params
{
};

// Function BP_RightHandTutorial.BP_RightHandTutorial_C.UserConstructionScript
struct ABP_RightHandTutorial_C_UserConstructionScript_Params
{
};

// Function BP_RightHandTutorial.BP_RightHandTutorial_C.ReceiveTick
struct ABP_RightHandTutorial_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_RightHandTutorial.BP_RightHandTutorial_C.ReceiveBeginPlay
struct ABP_RightHandTutorial_C_ReceiveBeginPlay_Params
{
};

// Function BP_RightHandTutorial.BP_RightHandTutorial_C.ExecuteUbergraph_BP_RightHandTutorial
struct ABP_RightHandTutorial_C_ExecuteUbergraph_BP_RightHandTutorial_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
