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

// Function BP_Credits.BP_Credits_C.ChangeFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextRenderComponent*    Text_Render_Component          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInterface*      Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInterface*      Text_Material                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UFont*                   Font                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Credits_C::ChangeFont(class UTextRenderComponent* Text_Render_Component, class UMaterialInterface* Material, class UMaterialInterface* Text_Material, class UFont* Font)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.ChangeFont");

	ABP_Credits_C_ChangeFont_Params params;
	params.Text_Render_Component = Text_Render_Component;
	params.Material = Material;
	params.Text_Material = Text_Material;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.AdvancePrintHead
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InVec                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_Credits_C::AdvancePrintHead(const struct FVector& InVec)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.AdvancePrintHead");

	ABP_Credits_C_AdvancePrintHead_Params params;
	params.InVec = InVec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Credits.BP_Credits_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Credits_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.UserConstructionScript");

	ABP_Credits_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.PlayCredits
// (BlueprintCallable, BlueprintEvent)

void ABP_Credits_C::PlayCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.PlayCredits");

	ABP_Credits_C_PlayCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.ResetCredits
// (BlueprintCallable, BlueprintEvent)

void ABP_Credits_C::ResetCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.ResetCredits");

	ABP_Credits_C_ResetCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Credits_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.ReceiveBeginPlay");

	ABP_Credits_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Credits_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.ReceiveTick");

	ABP_Credits_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.PauseCredits
// (BlueprintCallable, BlueprintEvent)

void ABP_Credits_C::PauseCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.PauseCredits");

	ABP_Credits_C_PauseCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.StopCredits
// (BlueprintCallable, BlueprintEvent)

void ABP_Credits_C::StopCredits()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.StopCredits");

	ABP_Credits_C_StopCredits_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.ExecuteUbergraph_BP_Credits
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Credits_C::ExecuteUbergraph_BP_Credits(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.ExecuteUbergraph_BP_Credits");

	ABP_Credits_C_ExecuteUbergraph_BP_Credits_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.Event_PauseCredits__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Credits_C::Event_PauseCredits__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.Event_PauseCredits__DelegateSignature");

	ABP_Credits_C_Event_PauseCredits__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.Event_PlayCredits__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Credits_C::Event_PlayCredits__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.Event_PlayCredits__DelegateSignature");

	ABP_Credits_C_Event_PlayCredits__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Credits.BP_Credits_C.Event_StopCredits__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_Credits_C::Event_StopCredits__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Credits.BP_Credits_C.Event_StopCredits__DelegateSignature");

	ABP_Credits_C_Event_StopCredits__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
