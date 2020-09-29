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

// Function NTLibsEngine.NTAnimationSet.GetListFromName
struct UNTAnimationSet_GetListFromName_Params
{
	class UClass*                                      AnimSetClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ListName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ListClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UNTAnimationList*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Vector
struct UNTTestBlueprint_SubmitMetric_Vector_Params
{
	struct FString                                     MetricName;                                               // (Parm, ZeroConstructor)
	struct FVector                                     Value;                                                    // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function NTLibsEngine.NTTestBlueprint.SubmitMetric_String
struct UNTTestBlueprint_SubmitMetric_String_Params
{
	struct FString                                     MetricName;                                               // (Parm, ZeroConstructor)
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
};

// Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Int32
struct UNTTestBlueprint_SubmitMetric_Int32_Params
{
	struct FString                                     MetricName;                                               // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Float
struct UNTTestBlueprint_SubmitMetric_Float_Params
{
	struct FString                                     MetricName;                                               // (Parm, ZeroConstructor)
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NTLibsEngine.NTTestBlueprint.SubmitMetric_Bool
struct UNTTestBlueprint_SubmitMetric_Bool_Params
{
	struct FString                                     MetricName;                                               // (Parm, ZeroConstructor)
	bool                                               bValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NTLibsEngine.NTTestBlueprint.SetTestState
struct UNTTestBlueprint_SetTestState_Params
{
	bool                                               bInTestState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LogMessage;                                               // (Parm, ZeroConstructor)
};

// Function NTLibsEngine.NTTestBlueprint.SetTestAction
struct UNTTestBlueprint_SetTestAction_Params
{
	struct FScriptDelegate                             Command;                                                  // (Parm, ZeroConstructor)
};

// Function NTLibsEngine.NTTestBlueprint.OnRunTest
struct UNTTestBlueprint_OnRunTest_Params
{
	struct FString                                     Parameters;                                               // (Parm, ZeroConstructor)
};

// Function NTLibsEngine.NTTestBlueprint.LoadMap
struct UNTTestBlueprint_LoadMap_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
