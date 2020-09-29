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

// Function BP_WaveDataProvider_DataTable.BP_WaveDataProvider_DataTable_C.GetWaveData
struct UBP_WaveDataProvider_DataTable_C_GetWaveData_Params
{
	struct FName*                                      WaveName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WaveExists;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FEnemyWaveData                              Wave;                                                     // (Parm, OutParm)
};

// Function BP_WaveDataProvider_DataTable.BP_WaveDataProvider_DataTable_C.GetAllWaveNames
struct UBP_WaveDataProvider_DataTable_C_GetAllWaveNames_Params
{
	TArray<struct FName>                               WaveNames;                                                // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
