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

// Function BP_LeftHandTutorial.BP_LeftHandTutorial_C.GetTargetLocation
struct ABP_LeftHandTutorial_C_GetTargetLocation_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_LeftHandTutorial.BP_LeftHandTutorial_C.UserConstructionScript
struct ABP_LeftHandTutorial_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
