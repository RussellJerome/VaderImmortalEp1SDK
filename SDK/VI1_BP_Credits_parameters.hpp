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

// Function BP_Credits.BP_Credits_C.ChangeFont
struct ABP_Credits_C_ChangeFont_Params
{
	class UTextRenderComponent*                        Text_Render_Component;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInterface*                          Material;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          Text_Material;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UFont*                                       Font;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Credits.BP_Credits_C.AdvancePrintHead
struct ABP_Credits_C_AdvancePrintHead_Params
{
	struct FVector                                     InVec;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_Credits.BP_Credits_C.UserConstructionScript
struct ABP_Credits_C_UserConstructionScript_Params
{
};

// Function BP_Credits.BP_Credits_C.PlayCredits
struct ABP_Credits_C_PlayCredits_Params
{
};

// Function BP_Credits.BP_Credits_C.ResetCredits
struct ABP_Credits_C_ResetCredits_Params
{
};

// Function BP_Credits.BP_Credits_C.ReceiveBeginPlay
struct ABP_Credits_C_ReceiveBeginPlay_Params
{
};

// Function BP_Credits.BP_Credits_C.ReceiveTick
struct ABP_Credits_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Credits.BP_Credits_C.PauseCredits
struct ABP_Credits_C_PauseCredits_Params
{
};

// Function BP_Credits.BP_Credits_C.StopCredits
struct ABP_Credits_C_StopCredits_Params
{
};

// Function BP_Credits.BP_Credits_C.ExecuteUbergraph_BP_Credits
struct ABP_Credits_C_ExecuteUbergraph_BP_Credits_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Credits.BP_Credits_C.Event_PauseCredits__DelegateSignature
struct ABP_Credits_C_Event_PauseCredits__DelegateSignature_Params
{
};

// Function BP_Credits.BP_Credits_C.Event_PlayCredits__DelegateSignature
struct ABP_Credits_C_Event_PlayCredits__DelegateSignature_Params
{
};

// Function BP_Credits.BP_Credits_C.Event_StopCredits__DelegateSignature
struct ABP_Credits_C_Event_StopCredits__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
