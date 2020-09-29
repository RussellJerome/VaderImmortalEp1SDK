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

// Function BP_WKNDGameState.BP_WKNDGameState_C.GetZoeLocation
struct ABP_WKNDGameState_C_GetZoeLocation_Params
{
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.SetVaderBasicCharacter
struct ABP_WKNDGameState_C_SetVaderBasicCharacter_Params
{
	class ABP_VaderCharacter_Basic_C*                  VaderBasicCharacter_BP;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.GetVaderBasicCharacter
struct ABP_WKNDGameState_C_GetVaderBasicCharacter_Params
{
	class ABP_VaderCharacter_Basic_C*                  VaderBasicCharacter_BP;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.SetChildCharacter
struct ABP_WKNDGameState_C_SetChildCharacter_Params
{
	class ABP_MustafarianChildCharacter_Basic_C*       ChildCharacter_BP;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.GetChildCharacter
struct ABP_WKNDGameState_C_GetChildCharacter_Params
{
	class ABP_MustafarianChildCharacter_Basic_C*       ChildCharacter_BP;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.SetMustafarianCharacter
struct ABP_WKNDGameState_C_SetMustafarianCharacter_Params
{
	class ABP_MustafarianCharacter_Basic_C*            MustafarianCharacterBP;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.GetMustafarianCharacter
struct ABP_WKNDGameState_C_GetMustafarianCharacter_Params
{
	class ABP_MustafarianCharacter_Basic_C*            MustafarianCharacterBP;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.SetPriestessCharacter
struct ABP_WKNDGameState_C_SetPriestessCharacter_Params
{
	class ABP_PriestessCharacter_Basic_C*              PriestessCharacterBP;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.GetPriestessCharacter
struct ABP_WKNDGameState_C_GetPriestessCharacter_Params
{
	class ABP_PriestessCharacter_Basic_C*              PriestessCharacterBP;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.SetZoeyCharacter
struct ABP_WKNDGameState_C_SetZoeyCharacter_Params
{
	class ABP_ZoeyCharacter_C*                         ZoeyCharacterBP;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.GetZoeyCharacter
struct ABP_WKNDGameState_C_GetZoeyCharacter_Params
{
	class ABP_ZoeyCharacter_C*                         ZoeyCharacterBP;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.GetVylipCharacter
struct ABP_WKNDGameState_C_GetVylipCharacter_Params
{
	class ABP_VylipCharacter_Basic_C*                  VylipCharacterBP;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.SetVylipCharacter
struct ABP_WKNDGameState_C_SetVylipCharacter_Params
{
	class ABP_VylipCharacter_Basic_C*                  VylipCharacterBP;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.SetZoeyPawn
struct ABP_WKNDGameState_C_SetZoeyPawn_Params
{
	class ABP_ZoeyPawn_C*                              NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.GetZoeyPawn
struct ABP_WKNDGameState_C_GetZoeyPawn_Params
{
	class ABP_ZoeyPawn_C*                              NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.UserConstructionScript
struct ABP_WKNDGameState_C_UserConstructionScript_Params
{
};

// Function BP_WKNDGameState.BP_WKNDGameState_C.ExecuteUbergraph_BP_WKNDGameState
struct ABP_WKNDGameState_C_ExecuteUbergraph_BP_WKNDGameState_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
