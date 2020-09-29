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

// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.IsOnFinalWave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           IsFinalWave                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::IsOnFinalWave(bool* IsFinalWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.IsOnFinalWave");

	ABP_ExDojoWaveManager_C_IsOnFinalWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsFinalWave != nullptr)
		*IsFinalWave = params.IsFinalWave;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.SetPlayerVulnerability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldBeVulnerable             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::SetPlayerVulnerability(bool ShouldBeVulnerable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.SetPlayerVulnerability");

	ABP_ExDojoWaveManager_C_SetPlayerVulnerability_Params params;
	params.ShouldBeVulnerable = ShouldBeVulnerable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.FindCombatMusicVariantForWave
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TMap<int, struct FExtendedDojoCombatMusicData> CombatMusicVariants            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           VariantFound_                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FExtendedDojoCombatMusicData CombatMusicData                (Parm, OutParm)

void ABP_ExDojoWaveManager_C::FindCombatMusicVariantForWave(int Index, TMap<int, struct FExtendedDojoCombatMusicData> CombatMusicVariants, bool* VariantFound_, struct FExtendedDojoCombatMusicData* CombatMusicData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.FindCombatMusicVariantForWave");

	ABP_ExDojoWaveManager_C_FindCombatMusicVariantForWave_Params params;
	params.Index = Index;
	params.CombatMusicVariants = CombatMusicVariants;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VariantFound_ != nullptr)
		*VariantFound_ = params.VariantFound_;
	if (CombatMusicData != nullptr)
		*CombatMusicData = params.CombatMusicData;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetWaveTypeForRequestedWave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<EnemyWaveType>     Wave_Type                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::GetWaveTypeForRequestedWave(TEnumAsByte<EnemyWaveType>* Wave_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetWaveTypeForRequestedWave");

	ABP_ExDojoWaveManager_C_GetWaveTypeForRequestedWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Wave_Type != nullptr)
		*Wave_Type = params.Wave_Type;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.FindCombatMusicDataForWave
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FExtendedDojoCombatMusicData CombatMusicData                (Parm, OutParm)

void ABP_ExDojoWaveManager_C::FindCombatMusicDataForWave(int WaveIndex, struct FExtendedDojoCombatMusicData* CombatMusicData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.FindCombatMusicDataForWave");

	ABP_ExDojoWaveManager_C_FindCombatMusicDataForWave_Params params;
	params.WaveIndex = WaveIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CombatMusicData != nullptr)
		*CombatMusicData = params.CombatMusicData;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetNumberOfUnleashedWavesPassed
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NumUnleashedWavesPassed        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::GetNumberOfUnleashedWavesPassed(int Index, int* NumUnleashedWavesPassed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetNumberOfUnleashedWavesPassed");

	ABP_ExDojoWaveManager_C_GetNumberOfUnleashedWavesPassed_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumUnleashedWavesPassed != nullptr)
		*NumUnleashedWavesPassed = params.NumUnleashedWavesPassed;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetCurrentWaveIndex
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            CurrentWaveIndex               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::GetCurrentWaveIndex(int* CurrentWaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetCurrentWaveIndex");

	ABP_ExDojoWaveManager_C_GetCurrentWaveIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentWaveIndex != nullptr)
		*CurrentWaveIndex = params.CurrentWaveIndex;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HideRewards
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_ExDojoWaveManager_C::HideRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HideRewards");

	ABP_ExDojoWaveManager_C_HideRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.DisplayRewards
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_ExDojoWaveManager_C::DisplayRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.DisplayRewards");

	ABP_ExDojoWaveManager_C_DisplayRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.FindHoloDronePod
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class ABP_HoloDronePod_C*      HoloDronePod                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool ABP_ExDojoWaveManager_C::FindHoloDronePod(class ABP_HoloDronePod_C** HoloDronePod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.FindHoloDronePod");

	ABP_ExDojoWaveManager_C_FindHoloDronePod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HoloDronePod != nullptr)
		*HoloDronePod = params.HoloDronePod;

	return params.ReturnValue;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.InitWaveManager
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ExDojoWaveManager_C::InitWaveManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.InitWaveManager");

	ABP_ExDojoWaveManager_C_InitWaveManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.SetRequestedWave
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RequestedWaveName              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void ABP_ExDojoWaveManager_C::SetRequestedWave(const struct FName& RequestedWaveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.SetRequestedWave");

	ABP_ExDojoWaveManager_C_SetRequestedWave_Params params;
	params.RequestedWaveName = RequestedWaveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetNextWave
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FName                   CurrentWaveName                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName                   NextWaveName                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NextWaveIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::GetNextWave(const struct FName& CurrentWaveName, struct FName* NextWaveName, int* NextWaveIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.GetNextWave");

	ABP_ExDojoWaveManager_C_GetNextWave_Params params;
	params.CurrentWaveName = CurrentWaveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextWaveName != nullptr)
		*NextWaveName = params.NextWaveName;
	if (NextWaveIndex != nullptr)
		*NextWaveIndex = params.NextWaveIndex;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.LogPerformance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::LogPerformance(const struct FName& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.LogPerformance");

	ABP_ExDojoWaveManager_C_LogPerformance_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.SaveWave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CurrentWaveName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::SaveWave(const struct FName& CurrentWaveName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.SaveWave");

	ABP_ExDojoWaveManager_C_SaveWave_Params params;
	params.CurrentWaveName = CurrentWaveName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.BeginWaveManager
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success_                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::BeginWaveManager(bool* Success_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.BeginWaveManager");

	ABP_ExDojoWaveManager_C_BeginWaveManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success_ != nullptr)
		*Success_ = params.Success_;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ExDojoWaveManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.UserConstructionScript");

	ABP_ExDojoWaveManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Request Next Wave
// (BlueprintCallable, BlueprintEvent)

void ABP_ExDojoWaveManager_C::Request_Next_Wave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Request Next Wave");

	ABP_ExDojoWaveManager_C_Request_Next_Wave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Request Replay Current Wave
// (BlueprintCallable, BlueprintEvent)

void ABP_ExDojoWaveManager_C::Request_Replay_Current_Wave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Request Replay Current Wave");

	ABP_ExDojoWaveManager_C_Request_Replay_Current_Wave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ExDojoWaveManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.ReceiveBeginPlay");

	ABP_ExDojoWaveManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Handle Begin Wave Manager
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Loaded_Wave_Name               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Loaded_Wave_Index              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::Handle_Begin_Wave_Manager(const struct FName& Loaded_Wave_Name, int Loaded_Wave_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Handle Begin Wave Manager");

	ABP_ExDojoWaveManager_C_Handle_Begin_Wave_Manager_Params params;
	params.Loaded_Wave_Name = Loaded_Wave_Name;
	params.Loaded_Wave_Index = Loaded_Wave_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Begin Requested Wave
// (BlueprintCallable, BlueprintEvent)

void ABP_ExDojoWaveManager_C::Begin_Requested_Wave()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.Begin Requested Wave");

	ABP_ExDojoWaveManager_C_Begin_Requested_Wave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HandleAbortWave
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEnemyWaveData*         WaveData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsFinalWave                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::HandleAbortWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HandleAbortWave");

	ABP_ExDojoWaveManager_C_HandleAbortWave_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;
	params.WaveData = WaveData;
	params.IsFinalWave = IsFinalWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.OnHolodroneDisplayRound
// (BlueprintCallable, BlueprintEvent)

void ABP_ExDojoWaveManager_C::OnHolodroneDisplayRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.OnHolodroneDisplayRound");

	ABP_ExDojoWaveManager_C_OnHolodroneDisplayRound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HandleBeginWave
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEnemyWaveData*         WaveData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsFinalWave                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::HandleBeginWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HandleBeginWave");

	ABP_ExDojoWaveManager_C_HandleBeginWave_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;
	params.WaveData = WaveData;
	params.IsFinalWave = IsFinalWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HandleEndWave
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  WaveName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           WaveIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FEnemyWaveData*         WaveData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          IsFinalWave                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::HandleEndWave(struct FName* WaveName, int* WaveIndex, struct FEnemyWaveData* WaveData, bool* IsFinalWave)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.HandleEndWave");

	ABP_ExDojoWaveManager_C_HandleEndWave_Params params;
	params.WaveName = WaveName;
	params.WaveIndex = WaveIndex;
	params.WaveData = WaveData;
	params.IsFinalWave = IsFinalWave;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.ExecuteUbergraph_BP_ExDojoWaveManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::ExecuteUbergraph_BP_ExDojoWaveManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.ExecuteUbergraph_BP_ExDojoWaveManager");

	ABP_ExDojoWaveManager_C_ExecuteUbergraph_BP_ExDojoWaveManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.WaveFailed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ExDojoWaveManager_C::WaveFailed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.WaveFailed__DelegateSignature");

	ABP_ExDojoWaveManager_C_WaveFailed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.WavesComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ExDojoWaveManager_C::WavesComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.WavesComplete__DelegateSignature");

	ABP_ExDojoWaveManager_C_WavesComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.NewWaveStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ExDojoWaveManager_C::NewWaveStarted__DelegateSignature(const struct FName& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ExDojoWaveManager.BP_ExDojoWaveManager_C.NewWaveStarted__DelegateSignature");

	ABP_ExDojoWaveManager_C_NewWaveStarted__DelegateSignature_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
