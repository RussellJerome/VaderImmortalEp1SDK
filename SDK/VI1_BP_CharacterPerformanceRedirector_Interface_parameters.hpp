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

// Function BP_CharacterPerformanceRedirector_Interface.BP_CharacterPerformanceRedirector_Interface_C.RequestSetSequencerBlendWeight
struct UBP_CharacterPerformanceRedirector_Interface_C_RequestSetSequencerBlendWeight_Params
{
	float                                              Weight;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CharacterPerformanceRedirector_Interface.BP_CharacterPerformanceRedirector_Interface_C.SetAnimationReferences
struct UBP_CharacterPerformanceRedirector_Interface_C_SetAnimationReferences_Params
{
	struct FCharacterPerformanceLookAtStruct           Settings;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_CharacterPerformanceRedirector_Interface.BP_CharacterPerformanceRedirector_Interface_C.Disable LookAt
struct UBP_CharacterPerformanceRedirector_Interface_C_Disable_LookAt_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TransitionDuration;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DistanceLimits;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              HeadLookAtStrength;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EyeLookAtStrength;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BodyLookAtStrength;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
