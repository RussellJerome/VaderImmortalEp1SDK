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

// Function BP_CutBladePieces.BP_CutBladePieces_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CutBladePieces_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutBladePieces.BP_CutBladePieces_C.UserConstructionScript");

	ABP_CutBladePieces_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutBladePieces.BP_CutBladePieces_C.AddImpulseToAllPieces
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_CutBladePieces_C::AddImpulseToAllPieces(const struct FVector& Impulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutBladePieces.BP_CutBladePieces_C.AddImpulseToAllPieces");

	ABP_CutBladePieces_C_AddImpulseToAllPieces_Params params;
	params.Impulse = Impulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutBladePieces.BP_CutBladePieces_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CutBladePieces_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutBladePieces.BP_CutBladePieces_C.ReceiveBeginPlay");

	ABP_CutBladePieces_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CutBladePieces.BP_CutBladePieces_C.ExecuteUbergraph_BP_CutBladePieces
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_CutBladePieces_C::ExecuteUbergraph_BP_CutBladePieces(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_CutBladePieces.BP_CutBladePieces_C.ExecuteUbergraph_BP_CutBladePieces");

	ABP_CutBladePieces_C_ExecuteUbergraph_BP_CutBladePieces_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
