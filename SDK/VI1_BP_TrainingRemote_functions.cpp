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

// Function BP_TrainingRemote.BP_TrainingRemote_C.GetEnemyType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EEnemyType                     EnemyType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::GetEnemyType(EEnemyType* EnemyType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.GetEnemyType");

	ABP_TrainingRemote_C_GetEnemyType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnemyType != nullptr)
		*EnemyType = params.EnemyType;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.Explode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::Explode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.Explode");

	ABP_TrainingRemote_C_Explode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.IsDestroyed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsDestroyed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::IsDestroyed(bool* IsDestroyed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.IsDestroyed");

	ABP_TrainingRemote_C_IsDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsDestroyed != nullptr)
		*IsDestroyed = params.IsDestroyed;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.InitSpawned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MaxHits                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::InitSpawned(int MaxHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.InitSpawned");

	ABP_TrainingRemote_C_InitSpawned_Params params;
	params.MaxHits = MaxHits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.SelectPointOnPlane
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Point_on_Plane                 (Parm, OutParm, IsPlainOldData)

void ABP_TrainingRemote_C::SelectPointOnPlane(struct FVector* Point_on_Plane)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.SelectPointOnPlane");

	ABP_TrainingRemote_C_SelectPointOnPlane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Point_on_Plane != nullptr)
		*Point_on_Plane = params.Point_on_Plane;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.DebugPrint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::DebugPrint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.DebugPrint");

	ABP_TrainingRemote_C_DebugPrint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.FilterShotReports
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TestShot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllAccountedFor               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::FilterShotReports(class AActor* TestShot, bool* bAllAccountedFor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.FilterShotReports");

	ABP_TrainingRemote_C_FilterShotReports_Params params;
	params.TestShot = TestShot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllAccountedFor != nullptr)
		*bAllAccountedFor = params.bAllAccountedFor;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.InitAttackSequence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewDesiredShots                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time_Between_Shots             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrainingRemoteFiringMode> FiringMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::InitAttackSequence(int NewDesiredShots, float Time_Between_Shots, TEnumAsByte<ETrainingRemoteFiringMode> FiringMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.InitAttackSequence");

	ABP_TrainingRemote_C_InitAttackSequence_Params params;
	params.NewDesiredShots = NewDesiredShots;
	params.Time_Between_Shots = Time_Between_Shots;
	params.FiringMode = FiringMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.UserConstructionScript");

	ABP_TrainingRemote_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyEnd_CD699DB947320AEDEFDC3A98B0E8948C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::OnNotifyEnd_CD699DB947320AEDEFDC3A98B0E8948C(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyEnd_CD699DB947320AEDEFDC3A98B0E8948C");

	ABP_TrainingRemote_C_OnNotifyEnd_CD699DB947320AEDEFDC3A98B0E8948C_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyBegin_CD699DB947320AEDEFDC3A98B0E8948C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::OnNotifyBegin_CD699DB947320AEDEFDC3A98B0E8948C(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyBegin_CD699DB947320AEDEFDC3A98B0E8948C");

	ABP_TrainingRemote_C_OnNotifyBegin_CD699DB947320AEDEFDC3A98B0E8948C_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.OnInterrupted_CD699DB947320AEDEFDC3A98B0E8948C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::OnInterrupted_CD699DB947320AEDEFDC3A98B0E8948C(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.OnInterrupted_CD699DB947320AEDEFDC3A98B0E8948C");

	ABP_TrainingRemote_C_OnInterrupted_CD699DB947320AEDEFDC3A98B0E8948C_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.OnBlendOut_CD699DB947320AEDEFDC3A98B0E8948C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::OnBlendOut_CD699DB947320AEDEFDC3A98B0E8948C(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.OnBlendOut_CD699DB947320AEDEFDC3A98B0E8948C");

	ABP_TrainingRemote_C_OnBlendOut_CD699DB947320AEDEFDC3A98B0E8948C_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.OnCompleted_CD699DB947320AEDEFDC3A98B0E8948C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::OnCompleted_CD699DB947320AEDEFDC3A98B0E8948C(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.OnCompleted_CD699DB947320AEDEFDC3A98B0E8948C");

	ABP_TrainingRemote_C_OnCompleted_CD699DB947320AEDEFDC3A98B0E8948C_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyEnd_F75823894AE21CCDCEFE1288A0F4EDB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::OnNotifyEnd_F75823894AE21CCDCEFE1288A0F4EDB9(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyEnd_F75823894AE21CCDCEFE1288A0F4EDB9");

	ABP_TrainingRemote_C_OnNotifyEnd_F75823894AE21CCDCEFE1288A0F4EDB9_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyBegin_F75823894AE21CCDCEFE1288A0F4EDB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::OnNotifyBegin_F75823894AE21CCDCEFE1288A0F4EDB9(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.OnNotifyBegin_F75823894AE21CCDCEFE1288A0F4EDB9");

	ABP_TrainingRemote_C_OnNotifyBegin_F75823894AE21CCDCEFE1288A0F4EDB9_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.OnInterrupted_F75823894AE21CCDCEFE1288A0F4EDB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::OnInterrupted_F75823894AE21CCDCEFE1288A0F4EDB9(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.OnInterrupted_F75823894AE21CCDCEFE1288A0F4EDB9");

	ABP_TrainingRemote_C_OnInterrupted_F75823894AE21CCDCEFE1288A0F4EDB9_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.OnBlendOut_F75823894AE21CCDCEFE1288A0F4EDB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::OnBlendOut_F75823894AE21CCDCEFE1288A0F4EDB9(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.OnBlendOut_F75823894AE21CCDCEFE1288A0F4EDB9");

	ABP_TrainingRemote_C_OnBlendOut_F75823894AE21CCDCEFE1288A0F4EDB9_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.OnCompleted_F75823894AE21CCDCEFE1288A0F4EDB9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::OnCompleted_F75823894AE21CCDCEFE1288A0F4EDB9(const struct FName& NotifyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.OnCompleted_F75823894AE21CCDCEFE1288A0F4EDB9");

	ABP_TrainingRemote_C_OnCompleted_F75823894AE21CCDCEFE1288A0F4EDB9_Params params;
	params.NotifyName = NotifyName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TrainingRemote_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.ReceiveBeginPlay");

	ABP_TrainingRemote_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.BndEvt__WKNDBlaster_K2Node_ComponentBoundEvent_0_BlasterShotFiredSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                  Shooter                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::BndEvt__WKNDBlaster_K2Node_ComponentBoundEvent_0_BlasterShotFiredSignature__DelegateSignature(class AActor* Shooter, class AActor* Projectile, class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.BndEvt__WKNDBlaster_K2Node_ComponentBoundEvent_0_BlasterShotFiredSignature__DelegateSignature");

	ABP_TrainingRemote_C_BndEvt__WKNDBlaster_K2Node_ComponentBoundEvent_0_BlasterShotFiredSignature__DelegateSignature_Params params;
	params.Shooter = Shooter;
	params.Projectile = Projectile;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.DoAttackSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewDesiredShots                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Time_Between_Shots             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETrainingRemoteFiringMode> FiringMode                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::DoAttackSequence(int NewDesiredShots, float Time_Between_Shots, TEnumAsByte<ETrainingRemoteFiringMode> FiringMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.DoAttackSequence");

	ABP_TrainingRemote_C_DoAttackSequence_Params params;
	params.NewDesiredShots = NewDesiredShots;
	params.Time_Between_Shots = Time_Between_Shots;
	params.FiringMode = FiringMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.ReleaseToMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Shot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::ReleaseToMove(class AActor* Shot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.ReleaseToMove");

	ABP_TrainingRemote_C_ReleaseToMove_Params params;
	params.Shot = Shot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.ShotTimeOut
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::ShotTimeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.ShotTimeOut");

	ABP_TrainingRemote_C_ShotTimeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.BeginShots
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::BeginShots()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.BeginShots");

	ABP_TrainingRemote_C_BeginShots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.ProjDeflected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ProjActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DeflectingActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bParried                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::ProjDeflected(class AActor* ProjActor, class AActor* DeflectingActor, bool bParried)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.ProjDeflected");

	ABP_TrainingRemote_C_ProjDeflected_Params params;
	params.ProjActor = ProjActor;
	params.DeflectingActor = DeflectingActor;
	params.bParried = bParried;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.ProjCollidingHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ProjActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitResult                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_TrainingRemote_C::ProjCollidingHit(class AActor* ProjActor, const struct FHitResult& HitResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.ProjCollidingHit");

	ABP_TrainingRemote_C_ProjCollidingHit_Params params;
	params.ProjActor = ProjActor;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.EndBarrage
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::EndBarrage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.EndBarrage");

	ABP_TrainingRemote_C_EndBarrage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.RecoveredFromHit
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::RecoveredFromHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.RecoveredFromHit");

	ABP_TrainingRemote_C_RecoveredFromHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.StopBarrage
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::StopBarrage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.StopBarrage");

	ABP_TrainingRemote_C_StopBarrage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.FlightLoop
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::FlightLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.FlightLoop");

	ABP_TrainingRemote_C_FlightLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.StopFlightLoop
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::StopFlightLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.StopFlightLoop");

	ABP_TrainingRemote_C_StopFlightLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.SpawnHitDecal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_TrainingRemote_C::SpawnHitDecal(const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.SpawnHitDecal");

	ABP_TrainingRemote_C_SpawnHitDecal_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature
// (BlueprintEvent)

void ABP_TrainingRemote_C::BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature");

	ABP_TrainingRemote_C_BndEvt__Health_Component_K2Node_ComponentBoundEvent_0_OnDeath__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.GoToRestowPosition
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::GoToRestowPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.GoToRestowPosition");

	ABP_TrainingRemote_C_GoToRestowPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.Restow
// (BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::Restow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.Restow");

	ABP_TrainingRemote_C_Restow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.ApplyBlasterDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Hit_Actor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::ApplyBlasterDamage(class AActor* Hit_Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.ApplyBlasterDamage");

	ABP_TrainingRemote_C_ApplyBlasterDamage_Params params;
	params.Hit_Actor = Hit_Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_1_OnTakeDamage__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            DamageTaken                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FWKNDDamageInfo         DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_TrainingRemote_C::BndEvt__Health_Component_K2Node_ComponentBoundEvent_1_OnTakeDamage__DelegateSignature(int DamageTaken, const struct FWKNDDamageInfo& DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.BndEvt__Health Component_K2Node_ComponentBoundEvent_1_OnTakeDamage__DelegateSignature");

	ABP_TrainingRemote_C_BndEvt__Health_Component_K2Node_ComponentBoundEvent_1_OnTakeDamage__DelegateSignature_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.ExecuteUbergraph_BP_TrainingRemote
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::ExecuteUbergraph_BP_TrainingRemote(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.ExecuteUbergraph_BP_TrainingRemote");

	ABP_TrainingRemote_C_ExecuteUbergraph_BP_TrainingRemote_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.ReadyForRestow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::ReadyForRestow__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.ReadyForRestow__DelegateSignature");

	ABP_TrainingRemote_C_ReadyForRestow__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.SingleBarrageEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::SingleBarrageEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.SingleBarrageEnded__DelegateSignature");

	ABP_TrainingRemote_C_SingleBarrageEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.Missed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::Missed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.Missed__DelegateSignature");

	ABP_TrainingRemote_C_Missed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.Deflected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_TrainingRemote_C::Deflected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.Deflected__DelegateSignature");

	ABP_TrainingRemote_C_Deflected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TrainingRemote.BP_TrainingRemote_C.Destroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_TrainingRemote_C*    Remote_Drone                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TrainingRemote_C::Destroyed__DelegateSignature(class ABP_TrainingRemote_C* Remote_Drone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TrainingRemote.BP_TrainingRemote_C.Destroyed__DelegateSignature");

	ABP_TrainingRemote_C_Destroyed__DelegateSignature_Params params;
	params.Remote_Drone = Remote_Drone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
