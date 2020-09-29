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

// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.GetEnemyType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEnemyType                     EnemyType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::GetEnemyType(EEnemyType* EnemyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.GetEnemyType");

	ABP_MotionFieldCharacter_C_GetEnemyType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyType != nullptr)
		*EnemyType = params.EnemyType;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.GetRelevantDeathAnimation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UAnimMontage*            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::GetRelevantDeathAnimation(const struct FWKNDDamageInfo& DamageInfo, class UAnimMontage** Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.GetRelevantDeathAnimation");

	ABP_MotionFieldCharacter_C_GetRelevantDeathAnimation_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.CanPlayIdle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MotionFieldCharacter_C::CanPlayIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.CanPlayIdle");

	ABP_MotionFieldCharacter_C_CanPlayIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.DrawAKComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DrawComponents                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::DrawAKComponents(bool DrawComponents)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.DrawAKComponents");

	ABP_MotionFieldCharacter_C_DrawAKComponents_Params params;
	params.DrawComponents = DrawComponents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.SetNewOpponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWKNDPlayerPawn*         NewOpponent                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::SetNewOpponent(class AWKNDPlayerPawn* NewOpponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.SetNewOpponent");

	ABP_MotionFieldCharacter_C_SetNewOpponent_Params params;
	params.NewOpponent = NewOpponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ResetSaber
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::ResetSaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ResetSaber");

	ABP_MotionFieldCharacter_C_ResetSaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnValidHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Hit_Count                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UStaticMeshComponent*    ArmourPiece                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Two_Handed_Strike              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::OnValidHit(int Hit_Count, const struct FVector& Location, const struct FVector& Direction, class UStaticMeshComponent* ArmourPiece, bool Two_Handed_Strike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnValidHit");

	ABP_MotionFieldCharacter_C_OnValidHit_Params params;
	params.Hit_Count = Hit_Count;
	params.Location = Location;
	params.Direction = Direction;
	params.ArmourPiece = ArmourPiece;
	params.Two_Handed_Strike = Two_Handed_Strike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.SwapToDummy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Dummysaber_C*        Dummy_Saber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::SwapToDummy(class ABP_Dummysaber_C* Dummy_Saber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.SwapToDummy");

	ABP_MotionFieldCharacter_C_SwapToDummy_Params params;
	params.Dummy_Saber = Dummy_Saber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.SwapToSaber
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Lightsaber_Vader_C*  Vader_Saber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::SwapToSaber(class ABP_Lightsaber_Vader_C* Vader_Saber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.SwapToSaber");

	ABP_MotionFieldCharacter_C_SwapToSaber_Params params;
	params.Vader_Saber = Vader_Saber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.VaderLookAtTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::VaderLookAtTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.VaderLookAtTarget");

	ABP_MotionFieldCharacter_C_VaderLookAtTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.UserConstructionScript");

	ABP_MotionFieldCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement1__FinishedFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement1__FinishedFunc");

	ABP_MotionFieldCharacter_C_IdleMovement1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement1__UpdateFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement1__UpdateFunc");

	ABP_MotionFieldCharacter_C_IdleMovement1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement2__FinishedFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement2__FinishedFunc");

	ABP_MotionFieldCharacter_C_IdleMovement2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement2__UpdateFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement2__UpdateFunc");

	ABP_MotionFieldCharacter_C_IdleMovement2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement3__FinishedFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement3__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement3__FinishedFunc");

	ABP_MotionFieldCharacter_C_IdleMovement3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement3__UpdateFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement3__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement3__UpdateFunc");

	ABP_MotionFieldCharacter_C_IdleMovement3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement4__FinishedFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement4__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement4__FinishedFunc");

	ABP_MotionFieldCharacter_C_IdleMovement4__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement4__UpdateFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement4__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement4__UpdateFunc");

	ABP_MotionFieldCharacter_C_IdleMovement4__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement5__FinishedFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement5__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement5__FinishedFunc");

	ABP_MotionFieldCharacter_C_IdleMovement5__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement5__UpdateFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement5__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement5__UpdateFunc");

	ABP_MotionFieldCharacter_C_IdleMovement5__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement6__FinishedFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement6__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement6__FinishedFunc");

	ABP_MotionFieldCharacter_C_IdleMovement6__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement6__UpdateFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement6__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement6__UpdateFunc");

	ABP_MotionFieldCharacter_C_IdleMovement6__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement7__FinishedFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement7__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement7__FinishedFunc");

	ABP_MotionFieldCharacter_C_IdleMovement7__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement7__UpdateFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement7__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement7__UpdateFunc");

	ABP_MotionFieldCharacter_C_IdleMovement7__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement8__FinishedFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement8__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement8__FinishedFunc");

	ABP_MotionFieldCharacter_C_IdleMovement8__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement8__UpdateFunc
// (BlueprintEvent)

void ABP_MotionFieldCharacter_C::IdleMovement8__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.IdleMovement8__UpdateFunc");

	ABP_MotionFieldCharacter_C_IdleMovement8__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnNotifyEnd_EABA1FA349E1B983FB3E5E85EB55CE32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::OnNotifyEnd_EABA1FA349E1B983FB3E5E85EB55CE32(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnNotifyEnd_EABA1FA349E1B983FB3E5E85EB55CE32");

	ABP_MotionFieldCharacter_C_OnNotifyEnd_EABA1FA349E1B983FB3E5E85EB55CE32_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnNotifyBegin_EABA1FA349E1B983FB3E5E85EB55CE32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::OnNotifyBegin_EABA1FA349E1B983FB3E5E85EB55CE32(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnNotifyBegin_EABA1FA349E1B983FB3E5E85EB55CE32");

	ABP_MotionFieldCharacter_C_OnNotifyBegin_EABA1FA349E1B983FB3E5E85EB55CE32_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnInterrupted_EABA1FA349E1B983FB3E5E85EB55CE32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::OnInterrupted_EABA1FA349E1B983FB3E5E85EB55CE32(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnInterrupted_EABA1FA349E1B983FB3E5E85EB55CE32");

	ABP_MotionFieldCharacter_C_OnInterrupted_EABA1FA349E1B983FB3E5E85EB55CE32_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnBlendOut_EABA1FA349E1B983FB3E5E85EB55CE32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::OnBlendOut_EABA1FA349E1B983FB3E5E85EB55CE32(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnBlendOut_EABA1FA349E1B983FB3E5E85EB55CE32");

	ABP_MotionFieldCharacter_C_OnBlendOut_EABA1FA349E1B983FB3E5E85EB55CE32_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnCompleted_EABA1FA349E1B983FB3E5E85EB55CE32
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::OnCompleted_EABA1FA349E1B983FB3E5E85EB55CE32(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnCompleted_EABA1FA349E1B983FB3E5E85EB55CE32");

	ABP_MotionFieldCharacter_C_OnCompleted_EABA1FA349E1B983FB3E5E85EB55CE32_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Begin Idle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AnimIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartFraction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Backoff                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::Begin_Idle(int AnimIndex, float StartFraction, bool Backoff)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Begin Idle");

	ABP_MotionFieldCharacter_C_Begin_Idle_Params params;
	params.AnimIndex = AnimIndex;
	params.StartFraction = StartFraction;
	params.Backoff = Backoff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.EndIdle
// (BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::EndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.EndIdle");

	ABP_MotionFieldCharacter_C_EndIdle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Open_Gate
// (BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::Open_Gate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Open_Gate");

	ABP_MotionFieldCharacter_C_Open_Gate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Idle_Anim
// (BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::Idle_Anim()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Idle_Anim");

	ABP_MotionFieldCharacter_C_Idle_Anim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Close_Gate
// (BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::Close_Gate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Close_Gate");

	ABP_MotionFieldCharacter_C_Close_Gate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Back_off
// (BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::Back_off()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Back_off");

	ABP_MotionFieldCharacter_C_Back_off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_HitWhileVulnerableSig__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            HitCount                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EComboAngleCheck               AngleCheckHitResult            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 HitDirection                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UStaticMeshComponent*    HitArmourPiece                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bTwoHandedStrike               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_HitWhileVulnerableSig__DelegateSignature(int HitCount, EComboAngleCheck AngleCheckHitResult, const struct FVector& HitLocation, const struct FVector& HitDirection, class UStaticMeshComponent* HitArmourPiece, bool bTwoHandedStrike)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_HitWhileVulnerableSig__DelegateSignature");

	ABP_MotionFieldCharacter_C_BndEvt__RPOCStagedCombat_K2Node_ComponentBoundEvent_0_HitWhileVulnerableSig__DelegateSignature_Params params;
	params.HitCount = HitCount;
	params.AngleCheckHitResult = AngleCheckHitResult;
	params.HitLocation = HitLocation;
	params.HitDirection = HitDirection;
	params.HitArmourPiece = HitArmourPiece;
	params.bTwoHandedStrike = bTwoHandedStrike;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Tick_DrawDebug
// (BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::Tick_DrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Tick_DrawDebug");

	ABP_MotionFieldCharacter_C_Tick_DrawDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Begin_AllowDebugInput
// (BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::Begin_AllowDebugInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Begin_AllowDebugInput");

	ABP_MotionFieldCharacter_C_Begin_AllowDebugInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.StartLightSaber
// (BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::StartLightSaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.StartLightSaber");

	ABP_MotionFieldCharacter_C_StartLightSaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MotionFieldCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ReceiveBeginPlay");

	ABP_MotionFieldCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ReceiveTick");

	ABP_MotionFieldCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_MotionFieldCharacter_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ReceiveDestroyed");

	ABP_MotionFieldCharacter_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Suspend
// (BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::Suspend()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.Suspend");

	ABP_MotionFieldCharacter_C_Suspend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnDeathWithDamageInfo__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MotionFieldCharacter_C::BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnDeathWithDamageInfo__DelegateSignature(const struct FWKNDDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnDeathWithDamageInfo__DelegateSignature");

	ABP_MotionFieldCharacter_C_BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnDeathWithDamageInfo__DelegateSignature_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnDeathAnimEnded
// (BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::OnDeathAnimEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnDeathAnimEnded");

	ABP_MotionFieldCharacter_C_OnDeathAnimEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnDeathAnimStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MotionFieldCharacter_C::OnDeathAnimStarted(const struct FWKNDDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnDeathAnimStarted");

	ABP_MotionFieldCharacter_C_OnDeathAnimStarted_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.DestroySaber
// (BlueprintCallable, BlueprintEvent)

void ABP_MotionFieldCharacter_C::DestroySaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.DestroySaber");

	ABP_MotionFieldCharacter_C_DestroySaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MotionFieldCharacter_C::OnDeath(const struct FWKNDDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.OnDeath");

	ABP_MotionFieldCharacter_C_OnDeath_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ExecuteUbergraph_BP_MotionFieldCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::ExecuteUbergraph_BP_MotionFieldCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.ExecuteUbergraph_BP_MotionFieldCharacter");

	ABP_MotionFieldCharacter_C_ExecuteUbergraph_BP_MotionFieldCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.InvalidHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EComboAngleCheck               FailureReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MotionFieldCharacter_C::InvalidHit__DelegateSignature(EComboAngleCheck FailureReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MotionFieldCharacter.BP_MotionFieldCharacter_C.InvalidHit__DelegateSignature");

	ABP_MotionFieldCharacter_C_InvalidHit__DelegateSignature_Params params;
	params.FailureReason = FailureReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
