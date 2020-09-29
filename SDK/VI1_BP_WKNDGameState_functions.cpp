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

// Function BP_WKNDGameState.BP_WKNDGameState_C.GetZoeLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_WKNDGameState_C::GetZoeLocation(bool* found, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.GetZoeLocation");

	ABP_WKNDGameState_C_GetZoeLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (found != nullptr)
		*found = params.found;
	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.SetVaderBasicCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VaderCharacter_Basic_C* VaderBasicCharacter_BP         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::SetVaderBasicCharacter(class ABP_VaderCharacter_Basic_C* VaderBasicCharacter_BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.SetVaderBasicCharacter");

	ABP_WKNDGameState_C_SetVaderBasicCharacter_Params params;
	params.VaderBasicCharacter_BP = VaderBasicCharacter_BP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.GetVaderBasicCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VaderCharacter_Basic_C* VaderBasicCharacter_BP         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::GetVaderBasicCharacter(class ABP_VaderCharacter_Basic_C** VaderBasicCharacter_BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.GetVaderBasicCharacter");

	ABP_WKNDGameState_C_GetVaderBasicCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VaderBasicCharacter_BP != nullptr)
		*VaderBasicCharacter_BP = params.VaderBasicCharacter_BP;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.SetChildCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MustafarianChildCharacter_Basic_C* ChildCharacter_BP              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::SetChildCharacter(class ABP_MustafarianChildCharacter_Basic_C* ChildCharacter_BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.SetChildCharacter");

	ABP_WKNDGameState_C_SetChildCharacter_Params params;
	params.ChildCharacter_BP = ChildCharacter_BP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.GetChildCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MustafarianChildCharacter_Basic_C* ChildCharacter_BP              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::GetChildCharacter(class ABP_MustafarianChildCharacter_Basic_C** ChildCharacter_BP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.GetChildCharacter");

	ABP_WKNDGameState_C_GetChildCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChildCharacter_BP != nullptr)
		*ChildCharacter_BP = params.ChildCharacter_BP;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.SetMustafarianCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MustafarianCharacter_Basic_C* MustafarianCharacterBP         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::SetMustafarianCharacter(class ABP_MustafarianCharacter_Basic_C* MustafarianCharacterBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.SetMustafarianCharacter");

	ABP_WKNDGameState_C_SetMustafarianCharacter_Params params;
	params.MustafarianCharacterBP = MustafarianCharacterBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.GetMustafarianCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_MustafarianCharacter_Basic_C* MustafarianCharacterBP         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::GetMustafarianCharacter(class ABP_MustafarianCharacter_Basic_C** MustafarianCharacterBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.GetMustafarianCharacter");

	ABP_WKNDGameState_C_GetMustafarianCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MustafarianCharacterBP != nullptr)
		*MustafarianCharacterBP = params.MustafarianCharacterBP;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.SetPriestessCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PriestessCharacter_Basic_C* PriestessCharacterBP           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::SetPriestessCharacter(class ABP_PriestessCharacter_Basic_C* PriestessCharacterBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.SetPriestessCharacter");

	ABP_WKNDGameState_C_SetPriestessCharacter_Params params;
	params.PriestessCharacterBP = PriestessCharacterBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.GetPriestessCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PriestessCharacter_Basic_C* PriestessCharacterBP           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::GetPriestessCharacter(class ABP_PriestessCharacter_Basic_C** PriestessCharacterBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.GetPriestessCharacter");

	ABP_WKNDGameState_C_GetPriestessCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PriestessCharacterBP != nullptr)
		*PriestessCharacterBP = params.PriestessCharacterBP;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.SetZoeyCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ZoeyCharacter_C*     ZoeyCharacterBP                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::SetZoeyCharacter(class ABP_ZoeyCharacter_C* ZoeyCharacterBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.SetZoeyCharacter");

	ABP_WKNDGameState_C_SetZoeyCharacter_Params params;
	params.ZoeyCharacterBP = ZoeyCharacterBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.GetZoeyCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ZoeyCharacter_C*     ZoeyCharacterBP                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::GetZoeyCharacter(class ABP_ZoeyCharacter_C** ZoeyCharacterBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.GetZoeyCharacter");

	ABP_WKNDGameState_C_GetZoeyCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZoeyCharacterBP != nullptr)
		*ZoeyCharacterBP = params.ZoeyCharacterBP;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.GetVylipCharacter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VylipCharacter_Basic_C* VylipCharacterBP               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::GetVylipCharacter(class ABP_VylipCharacter_Basic_C** VylipCharacterBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.GetVylipCharacter");

	ABP_WKNDGameState_C_GetVylipCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VylipCharacterBP != nullptr)
		*VylipCharacterBP = params.VylipCharacterBP;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.SetVylipCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_VylipCharacter_Basic_C* VylipCharacterBP               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::SetVylipCharacter(class ABP_VylipCharacter_Basic_C* VylipCharacterBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.SetVylipCharacter");

	ABP_WKNDGameState_C_SetVylipCharacter_Params params;
	params.VylipCharacterBP = VylipCharacterBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.SetZoeyPawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ZoeyPawn_C*          NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::SetZoeyPawn(class ABP_ZoeyPawn_C* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.SetZoeyPawn");

	ABP_WKNDGameState_C_SetZoeyPawn_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.GetZoeyPawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_ZoeyPawn_C*          NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::GetZoeyPawn(class ABP_ZoeyPawn_C** NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.GetZoeyPawn");

	ABP_WKNDGameState_C_GetZoeyPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.UserConstructionScript");

	ABP_WKNDGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameState.BP_WKNDGameState_C.ExecuteUbergraph_BP_WKNDGameState
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameState_C::ExecuteUbergraph_BP_WKNDGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameState.BP_WKNDGameState_C.ExecuteUbergraph_BP_WKNDGameState");

	ABP_WKNDGameState_C_ExecuteUbergraph_BP_WKNDGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
