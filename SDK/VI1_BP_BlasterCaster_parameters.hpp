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

// Function BP_BlasterCaster.BP_BlasterCaster_C.UserConstructionScript
struct ABP_BlasterCaster_C_UserConstructionScript_Params
{
};

// Function BP_BlasterCaster.BP_BlasterCaster_C.FireBlaster
struct ABP_BlasterCaster_C_FireBlaster_Params
{
	bool                                               AccurateShot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccurateShotPosition;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ShotSpread;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_BlasterCaster.BP_BlasterCaster_C.ExecuteUbergraph_BP_BlasterCaster
struct ABP_BlasterCaster_C_ExecuteUbergraph_BP_BlasterCaster_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
