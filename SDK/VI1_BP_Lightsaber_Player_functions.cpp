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

// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.GetHolsterSocketName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName ABP_Lightsaber_Player_C::GetHolsterSocketName()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.GetHolsterSocketName");

	ABP_Lightsaber_Player_C_GetHolsterSocketName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.UserConstructionScript");

	ABP_Lightsaber_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.OnAttachedToToolbelt
// (Event, Public, BlueprintEvent)

void ABP_Lightsaber_Player_C::OnAttachedToToolbelt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.OnAttachedToToolbelt");

	ABP_Lightsaber_Player_C_OnAttachedToToolbelt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ReceiveOnInHand
// (Event, Public, BlueprintEvent)

void ABP_Lightsaber_Player_C::ReceiveOnInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ReceiveOnInHand");

	ABP_Lightsaber_Player_C_ReceiveOnInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Player_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ReceiveTick");

	ABP_Lightsaber_Player_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Lightsaber_Player_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ReceiveBeginPlay");

	ABP_Lightsaber_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.OnInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EXLABInteractionEventType      InteractionEventType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractionHandler> Handler                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractive> Interactive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Player_C::OnInteraction(EXLABInteractionEventType InteractionEventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.OnInteraction");

	ABP_Lightsaber_Player_C_OnInteraction_Params params;
	params.InteractionEventType = InteractionEventType;
	params.Handler = Handler;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.SetDeflectionScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Player_C::SetDeflectionScale(float* NewScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.SetDeflectionScale");

	ABP_Lightsaber_Player_C_SetDeflectionScale_Params params;
	params.NewScale = NewScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ExecuteUbergraph_BP_Lightsaber_Player
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Player_C::ExecuteUbergraph_BP_Lightsaber_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player.BP_Lightsaber_Player_C.ExecuteUbergraph_BP_Lightsaber_Player");

	ABP_Lightsaber_Player_C_ExecuteUbergraph_BP_Lightsaber_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
