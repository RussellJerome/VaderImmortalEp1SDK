// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_WaveDataProvider_DataTable.BP_WaveDataProvider_DataTable_C.GetWaveData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WaveExists                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FEnemyWaveData          Wave                           (Parm, OutParm)

void UBP_WaveDataProvider_DataTable_C::GetWaveData(struct FName* WaveName, bool* WaveExists, struct FEnemyWaveData* Wave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaveDataProvider_DataTable.BP_WaveDataProvider_DataTable_C.GetWaveData");

	UBP_WaveDataProvider_DataTable_C_GetWaveData_Params params;
	params.WaveName = WaveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaveExists != nullptr)
		*WaveExists = params.WaveExists;
	if (Wave != nullptr)
		*Wave = params.Wave;
}


// Function BP_WaveDataProvider_DataTable.BP_WaveDataProvider_DataTable_C.GetAllWaveNames
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           WaveNames                      (Parm, OutParm, ZeroConstructor)

void UBP_WaveDataProvider_DataTable_C::GetAllWaveNames(TArray<struct FName>* WaveNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaveDataProvider_DataTable.BP_WaveDataProvider_DataTable_C.GetAllWaveNames");

	UBP_WaveDataProvider_DataTable_C_GetAllWaveNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WaveNames != nullptr)
		*WaveNames = params.WaveNames;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
