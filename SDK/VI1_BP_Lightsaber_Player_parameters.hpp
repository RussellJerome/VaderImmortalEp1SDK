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

// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.GetHolsterSocketName
struct ABP_Lightsaber_Player_C_GetHolsterSocketName_Params
{
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.UserConstructionScript
struct ABP_Lightsaber_Player_C_UserConstructionScript_Params
{
};

// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.OnAttachedToToolbelt
struct ABP_Lightsaber_Player_C_OnAttachedToToolbelt_Params
{
};

// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ReceiveOnInHand
struct ABP_Lightsaber_Player_C_ReceiveOnInHand_Params
{
};

// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ReceiveTick
struct ABP_Lightsaber_Player_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ReceiveBeginPlay
struct ABP_Lightsaber_Player_C_ReceiveBeginPlay_Params
{
};

// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.OnInteraction
struct ABP_Lightsaber_Player_C_OnInteraction_Params
{
	EXLABInteractionEventType                          InteractionEventType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.SetDeflectionScale
struct ABP_Lightsaber_Player_C_SetDeflectionScale_Params
{
	float*                                             NewScale;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ExecuteUbergraph_BP_Lightsaber_Player
struct ABP_Lightsaber_Player_C_ExecuteUbergraph_BP_Lightsaber_Player_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
