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

// Function BP_HoverController.BP_HoverController_C.LoadPreset
struct UBP_HoverController_C_LoadPreset_Params
{
	struct FHoverSettings                              HoverPreset;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_HoverController.BP_HoverController_C.UpdateHover
struct UBP_HoverController_C_UpdateHover_Params
{
};

// Function BP_HoverController.BP_HoverController_C.ReceiveTick
struct UBP_HoverController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_HoverController.BP_HoverController_C.Event TeleportHover
struct UBP_HoverController_C_Event_TeleportHover_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_HoverController.BP_HoverController_C.ExecuteUbergraph_BP_HoverController
struct UBP_HoverController_C_ExecuteUbergraph_BP_HoverController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
