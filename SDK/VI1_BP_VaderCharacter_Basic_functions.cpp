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

// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ShouldAimAtPlayer?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::ShouldAimAtPlayer_(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ShouldAimAtPlayer?");

	ABP_VaderCharacter_Basic_C_ShouldAimAtPlayer__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.AimAtActor?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::AimAtActor_(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.AimAtActor?");

	ABP_VaderCharacter_Basic_C_AimAtActor__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actor != nullptr)
		*Actor = params.Actor;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetAnimInstance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*           AnimInstance                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::GetAnimInstance(class UAnimInstance** AnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetAnimInstance");

	ABP_VaderCharacter_Basic_C_GetAnimInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimInstance != nullptr)
		*AnimInstance = params.AnimInstance;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetNpcChestLocation
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::GetNpcChestLocation(struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetNpcChestLocation");

	ABP_VaderCharacter_Basic_C_GetNpcChestLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SetupLookAtSettings
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::SetupLookAtSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SetupLookAtSettings");

	ABP_VaderCharacter_Basic_C_SetupLookAtSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.UpdateLookAtTick
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::UpdateLookAtTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.UpdateLookAtTick");

	ABP_VaderCharacter_Basic_C_UpdateLookAtTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.UpdateWindTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bDebug                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::UpdateWindTransform(bool bDebug)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.UpdateWindTransform");

	ABP_VaderCharacter_Basic_C_UpdateWindTransform_Params params;
	params.bDebug = bDebug;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.StartWindTimeline
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::StartWindTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.StartWindTimeline");

	ABP_VaderCharacter_Basic_C_StartWindTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.CreateLocalWind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::CreateLocalWind()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.CreateLocalWind");

	ABP_VaderCharacter_Basic_C_CreateLocalWind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.StoreOnLoadMinLod
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::StoreOnLoadMinLod()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.StoreOnLoadMinLod");

	ABP_VaderCharacter_Basic_C_StoreOnLoadMinLod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetWKNDRMotionController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_WKNDMotionController_C* MotionController               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::GetWKNDRMotionController(class ABP_WKNDMotionController_C** MotionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetWKNDRMotionController");

	ABP_VaderCharacter_Basic_C_GetWKNDRMotionController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MotionController != nullptr)
		*MotionController = params.MotionController;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetWKNDLMotionController
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_WKNDMotionController_C* MotionController               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::GetWKNDLMotionController(class ABP_WKNDMotionController_C** MotionController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GetWKNDLMotionController");

	ABP_VaderCharacter_Basic_C_GetWKNDLMotionController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MotionController != nullptr)
		*MotionController = params.MotionController;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.DrawDebugOrientation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform              Orientation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           Saber                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::DrawDebugOrientation(const struct FTransform& Orientation, bool Saber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.DrawDebugOrientation");

	ABP_VaderCharacter_Basic_C_DrawDebugOrientation_Params params;
	params.Orientation = Orientation;
	params.Saber = Saber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SaberToBelt
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::SaberToBelt()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SaberToBelt");

	ABP_VaderCharacter_Basic_C_SaberToBelt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SaberToRHand
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::SaberToRHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SaberToRHand");

	ABP_VaderCharacter_Basic_C_SaberToRHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.HideSaber
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::HideSaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.HideSaber");

	ABP_VaderCharacter_Basic_C_HideSaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ShowSaber
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::ShowSaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ShowSaber");

	ABP_VaderCharacter_Basic_C_ShowSaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.DeactivateSaber
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::DeactivateSaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.DeactivateSaber");

	ABP_VaderCharacter_Basic_C_DeactivateSaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ActivateSaber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IncludeGrabbedSaber_           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::ActivateSaber(bool IncludeGrabbedSaber_)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ActivateSaber");

	ABP_VaderCharacter_Basic_C_ActivateSaber_Params params;
	params.IncludeGrabbedSaber_ = IncludeGrabbedSaber_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SetSequenceBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Interp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::SetSequenceBlendWeight(float Interp)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SetSequenceBlendWeight");

	ABP_VaderCharacter_Basic_C_SetSequenceBlendWeight_Params params;
	params.Interp = Interp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.UserConstructionScript");

	ABP_VaderCharacter_Basic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Timeline_WindSpeed__FinishedFunc
// (BlueprintEvent)

void ABP_VaderCharacter_Basic_C::Timeline_WindSpeed__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Timeline_WindSpeed__FinishedFunc");

	ABP_VaderCharacter_Basic_C_Timeline_WindSpeed__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Timeline_WindSpeed__UpdateFunc
// (BlueprintEvent)

void ABP_VaderCharacter_Basic_C::Timeline_WindSpeed__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Timeline_WindSpeed__UpdateFunc");

	ABP_VaderCharacter_Basic_C_Timeline_WindSpeed__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.FireBlaster
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::FireBlaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.FireBlaster");

	ABP_VaderCharacter_Basic_C_FireBlaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - Delete
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::Decals___Delete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - Delete");

	ABP_VaderCharacter_Basic_C_Decals___Delete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - SpawnHit
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::Decals___SpawnHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - SpawnHit");

	ABP_VaderCharacter_Basic_C_Decals___SpawnHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - SpawnStab
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::Decals___SpawnStab()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - SpawnStab");

	ABP_VaderCharacter_Basic_C_Decals___SpawnStab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - SpawnSlash
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::Decals___SpawnSlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Decals - SpawnSlash");

	ABP_VaderCharacter_Basic_C_Decals___SpawnSlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Hide Blaster
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::Hide_Blaster(bool Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Hide Blaster");

	ABP_VaderCharacter_Basic_C_Hide_Blaster_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.BlueprintAnimationRateOptimization
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::BlueprintAnimationRateOptimization(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.BlueprintAnimationRateOptimization");

	ABP_VaderCharacter_Basic_C_BlueprintAnimationRateOptimization_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ToggleDropShadow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::ToggleDropShadow(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ToggleDropShadow");

	ABP_VaderCharacter_Basic_C_ToggleDropShadow_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SetAnimationReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterPerformanceLookAtStruct Settings                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_VaderCharacter_Basic_C::SetAnimationReferences(const struct FCharacterPerformanceLookAtStruct& Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SetAnimationReferences");

	ABP_VaderCharacter_Basic_C_SetAnimationReferences_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.RequestSetSequencerBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Weight                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::RequestSetSequencerBlendWeight(float Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.RequestSetSequencerBlendWeight");

	ABP_VaderCharacter_Basic_C_RequestSetSequencerBlendWeight_Params params;
	params.Weight = Weight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ReceiveBeginPlay");

	ABP_VaderCharacter_Basic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SpawnPuzzleBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LeftHand                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Basic_Box                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::SpawnPuzzleBox(bool LeftHand, bool Basic_Box)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.SpawnPuzzleBox");

	ABP_VaderCharacter_Basic_C_SpawnPuzzleBox_Params params;
	params.LeftHand = LeftHand;
	params.Basic_Box = Basic_Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GrabActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  GrabActor                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::GrabActor(class AActor* GrabActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.GrabActor");

	ABP_VaderCharacter_Basic_C_GrabActor_Params params;
	params.GrabActor = GrabActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Reclaim Corvaxian Sphere
// (BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::Reclaim_Corvaxian_Sphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Reclaim Corvaxian Sphere");

	ABP_VaderCharacter_Basic_C_Reclaim_Corvaxian_Sphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.DestroyCorvaxBox
// (BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::DestroyCorvaxBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.DestroyCorvaxBox");

	ABP_VaderCharacter_Basic_C_DestroyCorvaxBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ForceGrabPuzzleBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACorvaxianBox_C*         Box                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::ForceGrabPuzzleBox(class ACorvaxianBox_C* Box)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ForceGrabPuzzleBox");

	ABP_VaderCharacter_Basic_C_ForceGrabPuzzleBox_Params params;
	params.Box = Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ReceiveTick");

	ABP_VaderCharacter_Basic_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ForceGrabSaber
// (BlueprintCallable, BlueprintEvent)

void ABP_VaderCharacter_Basic_C::ForceGrabSaber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ForceGrabSaber");

	ABP_VaderCharacter_Basic_C_ForceGrabSaber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Event TemporaryWindBlast
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::Event_TemporaryWindBlast(float Force, float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Event TemporaryWindBlast");

	ABP_VaderCharacter_Basic_C_Event_TemporaryWindBlast_Params params;
	params.Force = Force;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Disable LookAt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TransitionDuration             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               DistanceLimits                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          HeadLookAtStrength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EyeLookAtStrength              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BodyLookAtStrength             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::Disable_LookAt(bool Enable, float TransitionDuration, const struct FVector2D& DistanceLimits, float HeadLookAtStrength, float EyeLookAtStrength, float BodyLookAtStrength)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.Disable LookAt");

	ABP_VaderCharacter_Basic_C_Disable_LookAt_Params params;
	params.Enable = Enable;
	params.TransitionDuration = TransitionDuration;
	params.DistanceLimits = DistanceLimits;
	params.HeadLookAtStrength = HeadLookAtStrength;
	params.EyeLookAtStrength = EyeLookAtStrength;
	params.BodyLookAtStrength = BodyLookAtStrength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.BlueprintTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::BlueprintTick(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.BlueprintTick");

	ABP_VaderCharacter_Basic_C_BlueprintTick_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ExecuteUbergraph_BP_VaderCharacter_Basic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaderCharacter_Basic_C::ExecuteUbergraph_BP_VaderCharacter_Basic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VaderCharacter_Basic.BP_VaderCharacter_Basic_C.ExecuteUbergraph_BP_VaderCharacter_Basic");

	ABP_VaderCharacter_Basic_C_ExecuteUbergraph_BP_VaderCharacter_Basic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
