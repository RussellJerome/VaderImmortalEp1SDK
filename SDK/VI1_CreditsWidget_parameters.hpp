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

// Function CreditsWidget.CreditsWidget_C.PreConstruct
struct UCreditsWidget_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreditsWidget.CreditsWidget_C.Construct
struct UCreditsWidget_C_Construct_Params
{
};

// Function CreditsWidget.CreditsWidget_C.Tick
struct UCreditsWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CreditsWidget.CreditsWidget_C.StartCredits
struct UCreditsWidget_C_StartCredits_Params
{
};

// Function CreditsWidget.CreditsWidget_C.CustomEvent_2
struct UCreditsWidget_C_CustomEvent_2_Params
{
};

// Function CreditsWidget.CreditsWidget_C.CustomEvent_3
struct UCreditsWidget_C_CustomEvent_3_Params
{
};

// Function CreditsWidget.CreditsWidget_C.ExecuteUbergraph_CreditsWidget
struct UCreditsWidget_C_ExecuteUbergraph_CreditsWidget_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
