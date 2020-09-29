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

// Function BP_SaberManager.BP_SaberManager_C.InitClashHistory
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SaberManager_C::InitClashHistory()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.InitClashHistory");

	ABP_SaberManager_C_InitClashHistory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.ReportClashInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bReportingActive               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bClashStarting                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARPOCPickup_Lightsaber*  Lightsaber1                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARPOCPickup_Lightsaber*  Lightsaber2                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SaberManager_C::ReportClashInfo(bool bReportingActive, bool bClashStarting, class ARPOCPickup_Lightsaber* Lightsaber1, class ARPOCPickup_Lightsaber* Lightsaber2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.ReportClashInfo");

	ABP_SaberManager_C_ReportClashInfo_Params params;
	params.bReportingActive = bReportingActive;
	params.bClashStarting = bClashStarting;
	params.Lightsaber1 = Lightsaber1;
	params.Lightsaber2 = Lightsaber2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.UpdateFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSaberClashData         ClashData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SaberManager_C::UpdateFX(const struct FSaberClashData& ClashData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.UpdateFX");

	ABP_SaberManager_C_UpdateFX_Params params;
	params.ClashData = ClashData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SaberManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.UserConstructionScript");

	ABP_SaberManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.Clash Duration Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_SaberManager_C::Clash_Duration_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.Clash Duration Timeline__FinishedFunc");

	ABP_SaberManager_C_Clash_Duration_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.Clash Duration Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_SaberManager_C::Clash_Duration_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.Clash Duration Timeline__UpdateFunc");

	ABP_SaberManager_C_Clash_Duration_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SaberManager_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.ReceiveTick");

	ABP_SaberManager_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SaberManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.ReceiveBeginPlay");

	ABP_SaberManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.OnSaberContactStart
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           clashMask                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARPOCPickup_Lightsaber** Saber1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARPOCPickup_Lightsaber** Saber2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SaberManager_C::OnSaberContactStart(int* clashMask, class ARPOCPickup_Lightsaber** Saber1, class ARPOCPickup_Lightsaber** Saber2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.OnSaberContactStart");

	ABP_SaberManager_C_OnSaberContactStart_Params params;
	params.clashMask = clashMask;
	params.Saber1 = Saber1;
	params.Saber2 = Saber2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.OnSaberContactStop
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           clashMask                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARPOCPickup_Lightsaber** Saber1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARPOCPickup_Lightsaber** Saber2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SaberManager_C::OnSaberContactStop(int* clashMask, class ARPOCPickup_Lightsaber** Saber1, class ARPOCPickup_Lightsaber** Saber2)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.OnSaberContactStop");

	ABP_SaberManager_C_OnSaberContactStop_Params params;
	params.clashMask = clashMask;
	params.Saber1 = Saber1;
	params.Saber2 = Saber2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.OnSaberSweepHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class ARPOCPickup_Lightsaber** Saber1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARPOCPickup_Lightsaber** Saber2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         RewindTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSaberClashData*        Clash                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_SaberManager_C::OnSaberSweepHit(class ARPOCPickup_Lightsaber** Saber1, class ARPOCPickup_Lightsaber** Saber2, float* RewindTime, struct FSaberClashData* Clash)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.OnSaberSweepHit");

	ABP_SaberManager_C_OnSaberSweepHit_Params params;
	params.Saber1 = Saber1;
	params.Saber2 = Saber2;
	params.RewindTime = RewindTime;
	params.Clash = Clash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.ExecuteUbergraph_BP_SaberManager
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SaberManager_C::ExecuteUbergraph_BP_SaberManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.ExecuteUbergraph_BP_SaberManager");

	ABP_SaberManager_C_ExecuteUbergraph_BP_SaberManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SaberManager.BP_SaberManager_C.ClashStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ARPOCPickup_Lightsaber*  Saber1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ARPOCPickup_Lightsaber*  Saber2                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RewindTime                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSaberClashData         Clash                          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SaberManager_C::ClashStart__DelegateSignature(class ARPOCPickup_Lightsaber* Saber1, class ARPOCPickup_Lightsaber* Saber2, float RewindTime, const struct FSaberClashData& Clash)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SaberManager.BP_SaberManager_C.ClashStart__DelegateSignature");

	ABP_SaberManager_C_ClashStart__DelegateSignature_Params params;
	params.Saber1 = Saber1;
	params.Saber2 = Saber2;
	params.RewindTime = RewindTime;
	params.Clash = Clash;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
