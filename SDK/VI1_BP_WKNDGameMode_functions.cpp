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

// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ToggleLSVs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Streaming                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameMode_C::ToggleLSVs(bool Streaming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ToggleLSVs");

	ABP_WKNDGameMode_C_ToggleLSVs_Params params;
	params.Streaming = Streaming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.SelectBlackoutArrow
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlackoutAngle                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture*                ArrowTexture                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameMode_C::SelectBlackoutArrow(float BlackoutAngle, class UTexture** ArrowTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.SelectBlackoutArrow");

	ABP_WKNDGameMode_C_SelectBlackoutArrow_Params params;
	params.BlackoutAngle = BlackoutAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrowTexture != nullptr)
		*ArrowTexture = params.ArrowTexture;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.CalcBlackholePosition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector ABP_WKNDGameMode_C::CalcBlackholePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.CalcBlackholePosition");

	ABP_WKNDGameMode_C_CalcBlackholePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.UserConstructionScript");

	ABP_WKNDGameMode_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_3__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_3__FinishedFunc");

	ABP_WKNDGameMode_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_3__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_3__UpdateFunc");

	ABP_WKNDGameMode_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_4__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_4__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_4__FinishedFunc");

	ABP_WKNDGameMode_C_Timeline_4__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_4__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_4__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_4__UpdateFunc");

	ABP_WKNDGameMode_C_Timeline_4__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_5__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_5__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_5__FinishedFunc");

	ABP_WKNDGameMode_C_Timeline_5__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_5__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_5__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_5__UpdateFunc");

	ABP_WKNDGameMode_C_Timeline_5__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::ZapTL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__FinishedFunc");

	ABP_WKNDGameMode_C_ZapTL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::ZapTL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__UpdateFunc");

	ABP_WKNDGameMode_C_ZapTL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__StartShake__EventFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::ZapTL__StartShake__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__StartShake__EventFunc");

	ABP_WKNDGameMode_C_ZapTL__StartShake__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__StartFade__EventFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::ZapTL__StartFade__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapTL__StartFade__EventFunc");

	ABP_WKNDGameMode_C_ZapTL__StartFade__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_0__FinishedFunc");

	ABP_WKNDGameMode_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_0__UpdateFunc");

	ABP_WKNDGameMode_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_1__FinishedFunc");

	ABP_WKNDGameMode_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_1__UpdateFunc");

	ABP_WKNDGameMode_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.FadeToBlack__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::FadeToBlack__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.FadeToBlack__FinishedFunc");

	ABP_WKNDGameMode_C_FadeToBlack__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.FadeToBlack__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::FadeToBlack__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.FadeToBlack__UpdateFunc");

	ABP_WKNDGameMode_C_FadeToBlack__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.blackouttime__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::blackouttime__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.blackouttime__FinishedFunc");

	ABP_WKNDGameMode_C_blackouttime__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.blackouttime__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::blackouttime__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.blackouttime__UpdateFunc");

	ABP_WKNDGameMode_C_blackouttime__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_2__FinishedFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_2__FinishedFunc");

	ABP_WKNDGameMode_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_2__UpdateFunc
// (BlueprintEvent)

void ABP_WKNDGameMode_C::Timeline_2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.Timeline_2__UpdateFunc");

	ABP_WKNDGameMode_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameMode_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ReceiveTick");

	ABP_WKNDGameMode_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StartClash
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::StartClash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.StartClash");

	ABP_WKNDGameMode_C_StartClash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.EndClash
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::EndClash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.EndClash");

	ABP_WKNDGameMode_C_EndClash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.PlayerHit
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::PlayerHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.PlayerHit");

	ABP_WKNDGameMode_C_PlayerHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ForceChoke_PPEnable
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::ForceChoke_PPEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ForceChoke_PPEnable");

	ABP_WKNDGameMode_C_ForceChoke_PPEnable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ForceChoke_PPDisable
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::ForceChoke_PPDisable()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ForceChoke_PPDisable");

	ABP_WKNDGameMode_C_ForceChoke_PPDisable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ForcePushed
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::ForcePushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ForcePushed");

	ABP_WKNDGameMode_C_ForcePushed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapOut
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::ZapOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ZapOut");

	ABP_WKNDGameMode_C_ZapOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.PlayerHitTD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            hitNum                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameMode_C::PlayerHitTD(int hitNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.PlayerHitTD");

	ABP_WKNDGameMode_C_PlayerHitTD_Params params;
	params.hitNum = hitNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.InitDialogueManagerWithSpeakingActors
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AWKNDDialogueManager**   DM                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameMode_C::InitDialogueManagerWithSpeakingActors(class AWKNDDialogueManager** DM)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.InitDialogueManagerWithSpeakingActors");

	ABP_WKNDGameMode_C_InitDialogueManagerWithSpeakingActors_Params params;
	params.DM = DM;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StartBlackout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerScreenBlackOutComponent* BlackoutCompoent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WKNDGameMode_C::StartBlackout(class UPlayerScreenBlackOutComponent* BlackoutCompoent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.StartBlackout");

	ABP_WKNDGameMode_C_StartBlackout_Params params;
	params.BlackoutCompoent = BlackoutCompoent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopBlackout
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::StopBlackout()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopBlackout");

	ABP_WKNDGameMode_C_StopBlackout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.BlackoutAutoFadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerScreenBlackOutComponent* BlackoutComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WKNDGameMode_C::BlackoutAutoFadeOut(class UPlayerScreenBlackOutComponent* BlackoutComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.BlackoutAutoFadeOut");

	ABP_WKNDGameMode_C_BlackoutAutoFadeOut_Params params;
	params.BlackoutComponent = BlackoutComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.BlackoutAutoFadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerScreenBlackOutComponent* BlackoutComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABP_WKNDGameMode_C::BlackoutAutoFadeIn(class UPlayerScreenBlackOutComponent* BlackoutComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.BlackoutAutoFadeIn");

	ABP_WKNDGameMode_C_BlackoutAutoFadeIn_Params params;
	params.BlackoutComponent = BlackoutComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.TogglePause
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::TogglePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.TogglePause");

	ABP_WKNDGameMode_C_TogglePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.DestroyPauseMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::DestroyPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.DestroyPauseMenu");

	ABP_WKNDGameMode_C_DestroyPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.EnableConsoleMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameMode_C::EnableConsoleMenu(bool* Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.EnableConsoleMenu");

	ABP_WKNDGameMode_C_EnableConsoleMenu_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.RemovePostProcessingDamage
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::RemovePostProcessingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.RemovePostProcessingDamage");

	ABP_WKNDGameMode_C_RemovePostProcessingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopTimeline4
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::StopTimeline4()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopTimeline4");

	ABP_WKNDGameMode_C_StopTimeline4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopTimeline0
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::StopTimeline0()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopTimeline0");

	ABP_WKNDGameMode_C_StopTimeline0_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopTimeline1
// (BlueprintCallable, BlueprintEvent)

void ABP_WKNDGameMode_C::StopTimeline1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.StopTimeline1");

	ABP_WKNDGameMode_C_StopTimeline1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_WKNDGameMode_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ReceiveBeginPlay");

	ABP_WKNDGameMode_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.OnPlayerTakeDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DamageTaken                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_WKNDGameMode_C::OnPlayerTakeDamage(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.OnPlayerTakeDamage");

	ABP_WKNDGameMode_C_OnPlayerTakeDamage_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.TogglePauseLights
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameMode_C::TogglePauseLights(bool hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.TogglePauseLights");

	ABP_WKNDGameMode_C_TogglePauseLights_Params params;
	params.hidden = hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_WKNDGameMode.BP_WKNDGameMode_C.ExecuteUbergraph_BP_WKNDGameMode
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_WKNDGameMode_C::ExecuteUbergraph_BP_WKNDGameMode(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WKNDGameMode.BP_WKNDGameMode_C.ExecuteUbergraph_BP_WKNDGameMode");

	ABP_WKNDGameMode_C_ExecuteUbergraph_BP_WKNDGameMode_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
