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

// Function CorvaxianBox.CorvaxianBox_C.LockSideButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::LockSideButton(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.LockSideButton");

	ACorvaxianBox_C_LockSideButton_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.LockSideButtons
// (Public, BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::LockSideButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.LockSideButtons");

	ACorvaxianBox_C_LockSideButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.InitializeLattice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Child_Actor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   Bone_Prefix                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::InitializeLattice(class UChildActorComponent* Child_Actor, const struct FName& Bone_Prefix)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.InitializeLattice");

	ACorvaxianBox_C_InitializeLattice_Params params;
	params.Child_Actor = Child_Actor;
	params.Bone_Prefix = Bone_Prefix;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.InitializeLattices
// (Public, BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::InitializeLattices()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.InitializeLattices");

	ACorvaxianBox_C_InitializeLattices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SetPointLightAttr
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Point_Light_Input              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Light_Intensity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Light_Visibility               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::SetPointLightAttr(class UChildActorComponent* Point_Light_Input, float Light_Intensity, bool Light_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SetPointLightAttr");

	ACorvaxianBox_C_SetPointLightAttr_Params params;
	params.Point_Light_Input = Point_Light_Input;
	params.Light_Intensity = Light_Intensity;
	params.Light_Visibility = Light_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SetSmokeAttrs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Set_Values                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BasicSmoke_EmissionGain        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Smoke_EmissionGain             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Smoke_VelGain                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Smoke_ColorGain                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Smoke_AlphaGain                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::SetSmokeAttrs(bool Set_Values, float BasicSmoke_EmissionGain, float Smoke_EmissionGain, float Smoke_VelGain, float Smoke_ColorGain, float Smoke_AlphaGain)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SetSmokeAttrs");

	ACorvaxianBox_C_SetSmokeAttrs_Params params;
	params.Set_Values = Set_Values;
	params.BasicSmoke_EmissionGain = BasicSmoke_EmissionGain;
	params.Smoke_EmissionGain = Smoke_EmissionGain;
	params.Smoke_VelGain = Smoke_VelGain;
	params.Smoke_ColorGain = Smoke_ColorGain;
	params.Smoke_AlphaGain = Smoke_AlphaGain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SetDustSpawnRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Spawn_Rate_Input               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::SetDustSpawnRate(float Spawn_Rate_Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SetDustSpawnRate");

	ACorvaxianBox_C_SetDustSpawnRate_Params params;
	params.Spawn_Rate_Input = Spawn_Rate_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SetSideAreaLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Light_Intensity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Light_Visibility               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Light_Gain                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::SetSideAreaLights(float Light_Intensity, bool Light_Visibility, float Light_Gain)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SetSideAreaLights");

	ACorvaxianBox_C_SetSideAreaLights_Params params;
	params.Light_Intensity = Light_Intensity;
	params.Light_Visibility = Light_Visibility;
	params.Light_Gain = Light_Gain;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SetRecAreaLightAttr
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Rect_Area_Light_Input          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Light_Intensity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Light_Visibility               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::SetRecAreaLightAttr(class UChildActorComponent* Rect_Area_Light_Input, float Light_Intensity, bool Light_Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SetRecAreaLightAttr");

	ACorvaxianBox_C_SetRecAreaLightAttr_Params params;
	params.Rect_Area_Light_Input = Rect_Area_Light_Input;
	params.Light_Intensity = Light_Intensity;
	params.Light_Visibility = Light_Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SetupHaptics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UXLABInteractionHandler> Handler                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::SetupHaptics(const TScriptInterface<class UXLABInteractionHandler>& Handler)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SetupHaptics");

	ACorvaxianBox_C_SetupHaptics_Params params;
	params.Handler = Handler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.TranslateDoors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DoorNgX_X                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DoorX_X                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DoorNgY_Y                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DoorY_Y                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Doors_Z                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::TranslateDoors(float DoorNgX_X, float DoorX_X, float DoorNgY_Y, float DoorY_Y, float Doors_Z)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.TranslateDoors");

	ACorvaxianBox_C_TranslateDoors_Params params;
	params.DoorNgX_X = DoorNgX_X;
	params.DoorX_X = DoorX_X;
	params.DoorNgY_Y = DoorNgY_Y;
	params.DoorY_Y = DoorY_Y;
	params.Doors_Z = Doors_Z;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SetAllLatticeButtonInteractionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::SetAllLatticeButtonInteractionEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SetAllLatticeButtonInteractionEnabled");

	ACorvaxianBox_C_SetAllLatticeButtonInteractionEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SetLatticeButtonInteractionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Lattice                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::SetLatticeButtonInteractionEnabled(class UChildActorComponent* Lattice, bool bEnabled, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SetLatticeButtonInteractionEnabled");

	ACorvaxianBox_C_SetLatticeButtonInteractionEnabled_Params params;
	params.Lattice = Lattice;
	params.bEnabled = bEnabled;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.ForceDropBox
// (Public, BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::ForceDropBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.ForceDropBox");

	ACorvaxianBox_C_ForceDropBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RetractAllPistonsAllLattices
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          extension                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::RetractAllPistonsAllLattices(float extension)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RetractAllPistonsAllLattices");

	ACorvaxianBox_C_RetractAllPistonsAllLattices_Params params;
	params.extension = extension;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RetractAllPistons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Lattice                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          extension                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::RetractAllPistons(class UChildActorComponent* Lattice, float extension)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RetractAllPistons");

	ACorvaxianBox_C_RetractAllPistons_Params params;
	params.Lattice = Lattice;
	params.extension = extension;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.ExtendAllPistonsAllLattices
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          extension                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::ExtendAllPistonsAllLattices(float extension)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.ExtendAllPistonsAllLattices");

	ACorvaxianBox_C_ExtendAllPistonsAllLattices_Params params;
	params.extension = extension;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.ExtendAllPistons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Lattice                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          extension                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::ExtendAllPistons(class UChildActorComponent* Lattice, float extension)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.ExtendAllPistons");

	ACorvaxianBox_C_ExtendAllPistons_Params params;
	params.Lattice = Lattice;
	params.extension = extension;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RetractSideButtons
// (Public, BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::RetractSideButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RetractSideButtons");

	ACorvaxianBox_C_RetractSideButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RetractSideButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Lattice                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            Side_Id                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::RetractSideButton(class UChildActorComponent* Lattice, int Side_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RetractSideButton");

	ACorvaxianBox_C_RetractSideButton_Params params;
	params.Lattice = Lattice;
	params.Side_Id = Side_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.EnableSideButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Should_Enable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::EnableSideButtons(bool Should_Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.EnableSideButtons");

	ACorvaxianBox_C_EnableSideButtons_Params params;
	params.Should_Enable = Should_Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.ExtendSideButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Lattice                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          extension                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            SideId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::ExtendSideButton(class UChildActorComponent* Lattice, float extension, int SideId)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.ExtendSideButton");

	ACorvaxianBox_C_ExtendSideButton_Params params;
	params.Lattice = Lattice;
	params.extension = extension;
	params.SideId = SideId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.ExtendSideButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          extension                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::ExtendSideButtons(float extension)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.ExtendSideButtons");

	ACorvaxianBox_C_ExtendSideButtons_Params params;
	params.extension = extension;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.PlayRandomPatternAnimations
// (Public, BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::PlayRandomPatternAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.PlayRandomPatternAnimations");

	ACorvaxianBox_C_PlayRandomPatternAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.PlayRandomPatternAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UChildActorComponent*    Lattice                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACorvaxianBox_C::PlayRandomPatternAnimation(class UChildActorComponent* Lattice)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.PlayRandomPatternAnimation");

	ACorvaxianBox_C_PlayRandomPatternAnimation_Params params;
	params.Lattice = Lattice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.UserConstructionScript");

	ACorvaxianBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Retract Button__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Retract_Button__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Retract Button__FinishedFunc");

	ACorvaxianBox_C_Retract_Button__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Retract Button__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Retract_Button__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Retract Button__UpdateFunc");

	ACorvaxianBox_C_Retract_Button__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Doors Translate__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Doors_Translate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Doors Translate__FinishedFunc");

	ACorvaxianBox_C_Doors_Translate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Doors Translate__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Doors_Translate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Doors Translate__UpdateFunc");

	ACorvaxianBox_C_Doors_Translate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Doors Rotate__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Doors_Rotate__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Doors Rotate__FinishedFunc");

	ACorvaxianBox_C_Doors_Rotate__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Doors Rotate__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Doors_Rotate__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Doors Rotate__UpdateFunc");

	ACorvaxianBox_C_Doors_Rotate__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Extend Button__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Extend_Button__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Extend Button__FinishedFunc");

	ACorvaxianBox_C_Extend_Button__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Extend Button__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Extend_Button__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Extend Button__UpdateFunc");

	ACorvaxianBox_C_Extend_Button__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Doors Close__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Doors_Close__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Doors Close__FinishedFunc");

	ACorvaxianBox_C_Doors_Close__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Doors Close__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Doors_Close__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Doors Close__UpdateFunc");

	ACorvaxianBox_C_Doors_Close__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Doors Retract__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Doors_Retract__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Doors Retract__FinishedFunc");

	ACorvaxianBox_C_Doors_Retract__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Doors Retract__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Doors_Retract__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Doors Retract__UpdateFunc");

	ACorvaxianBox_C_Doors_Retract__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Timeline_0__FinishedFunc");

	ACorvaxianBox_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Timeline_0__UpdateFunc");

	ACorvaxianBox_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.ToButtonLgtPulse__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::ToButtonLgtPulse__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.ToButtonLgtPulse__FinishedFunc");

	ACorvaxianBox_C_ToButtonLgtPulse__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.ToButtonLgtPulse__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::ToButtonLgtPulse__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.ToButtonLgtPulse__UpdateFunc");

	ACorvaxianBox_C_ToButtonLgtPulse__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.TopButtonLgtRampOn__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::TopButtonLgtRampOn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.TopButtonLgtRampOn__FinishedFunc");

	ACorvaxianBox_C_TopButtonLgtRampOn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.TopButtonLgtRampOn__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::TopButtonLgtRampOn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.TopButtonLgtRampOn__UpdateFunc");

	ACorvaxianBox_C_TopButtonLgtRampOn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampIn__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SideWallLightRampIn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampIn__FinishedFunc");

	ACorvaxianBox_C_SideWallLightRampIn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampIn__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SideWallLightRampIn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampIn__UpdateFunc");

	ACorvaxianBox_C_SideWallLightRampIn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampOut__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SideWallLightRampOut__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampOut__FinishedFunc");

	ACorvaxianBox_C_SideWallLightRampOut__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampOut__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SideWallLightRampOut__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampOut__UpdateFunc");

	ACorvaxianBox_C_SideWallLightRampOut__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.CrystalPulse__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::CrystalPulse__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.CrystalPulse__FinishedFunc");

	ACorvaxianBox_C_CrystalPulse__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.CrystalPulse__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::CrystalPulse__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.CrystalPulse__UpdateFunc");

	ACorvaxianBox_C_CrystalPulse__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Init_TL__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SmokeBurst_Init_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Init_TL__FinishedFunc");

	ACorvaxianBox_C_SmokeBurst_Init_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Init_TL__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SmokeBurst_Init_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Init_TL__UpdateFunc");

	ACorvaxianBox_C_SmokeBurst_Init_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Sec_TL__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SmokeBurst_Sec_TL__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Sec_TL__FinishedFunc");

	ACorvaxianBox_C_SmokeBurst_Sec_TL__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Sec_TL__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SmokeBurst_Sec_TL__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Sec_TL__UpdateFunc");

	ACorvaxianBox_C_SmokeBurst_Sec_TL__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RampSmokeDownEnd__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::RampSmokeDownEnd__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RampSmokeDownEnd__FinishedFunc");

	ACorvaxianBox_C_RampSmokeDownEnd__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RampSmokeDownEnd__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::RampSmokeDownEnd__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RampSmokeDownEnd__UpdateFunc");

	ACorvaxianBox_C_RampSmokeDownEnd__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.InitCrystalGlow__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::InitCrystalGlow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.InitCrystalGlow__FinishedFunc");

	ACorvaxianBox_C_InitCrystalGlow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.InitCrystalGlow__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::InitCrystalGlow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.InitCrystalGlow__UpdateFunc");

	ACorvaxianBox_C_InitCrystalGlow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SparkleBurst__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SparkleBurst__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SparkleBurst__FinishedFunc");

	ACorvaxianBox_C_SparkleBurst__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SparkleBurst__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SparkleBurst__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SparkleBurst__UpdateFunc");

	ACorvaxianBox_C_SparkleBurst__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RampOffTopButtonLgt__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::RampOffTopButtonLgt__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RampOffTopButtonLgt__FinishedFunc");

	ACorvaxianBox_C_RampOffTopButtonLgt__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RampOffTopButtonLgt__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::RampOffTopButtonLgt__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RampOffTopButtonLgt__UpdateFunc");

	ACorvaxianBox_C_RampOffTopButtonLgt__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RampOnBoxGlow__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::RampOnBoxGlow__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RampOnBoxGlow__FinishedFunc");

	ACorvaxianBox_C_RampOnBoxGlow__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RampOnBoxGlow__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::RampOnBoxGlow__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RampOnBoxGlow__UpdateFunc");

	ACorvaxianBox_C_RampOnBoxGlow__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RampSmokeOn__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::RampSmokeOn__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RampSmokeOn__FinishedFunc");

	ACorvaxianBox_C_RampSmokeOn__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.RampSmokeOn__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::RampSmokeOn__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.RampSmokeOn__UpdateFunc");

	ACorvaxianBox_C_RampSmokeOn__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SideButtonPulse__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SideButtonPulse__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SideButtonPulse__FinishedFunc");

	ACorvaxianBox_C_SideButtonPulse__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.SideButtonPulse__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::SideButtonPulse__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.SideButtonPulse__UpdateFunc");

	ACorvaxianBox_C_SideButtonPulse__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.EnableBoxEmissive__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::EnableBoxEmissive__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.EnableBoxEmissive__FinishedFunc");

	ACorvaxianBox_C_EnableBoxEmissive__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.EnableBoxEmissive__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::EnableBoxEmissive__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.EnableBoxEmissive__UpdateFunc");

	ACorvaxianBox_C_EnableBoxEmissive__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Timeline_1__FinishedFunc");

	ACorvaxianBox_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ACorvaxianBox_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Timeline_1__UpdateFunc");

	ACorvaxianBox_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.ReceiveTick");

	ACorvaxianBox_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionContactEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   InteractionName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ContactComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACorvaxianBox_C::BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionContactEvent__DelegateSignature(const struct FName& InteractionName, class UPrimitiveComponent* ContactComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionContactEvent__DelegateSignature");

	ACorvaxianBox_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionContactEvent__DelegateSignature_Params params;
	params.InteractionName = InteractionName;
	params.ContactComponent = ContactComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_2_InteractionContactEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   InteractionName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     ContactComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ACorvaxianBox_C::BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_2_InteractionContactEvent__DelegateSignature(const struct FName& InteractionName, class UPrimitiveComponent* ContactComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_2_InteractionContactEvent__DelegateSignature");

	ACorvaxianBox_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_2_InteractionContactEvent__DelegateSignature_Params params;
	params.InteractionName = InteractionName;
	params.ContactComponent = ContactComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACorvaxianBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.ReceiveBeginPlay");

	ACorvaxianBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.On BoxGrab Interaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EXLABInteractionEventType      InteractionEventType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractionHandler> Handler                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UXLABInteractive> Interactive                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::On_BoxGrab_Interaction(EXLABInteractionEventType InteractionEventType, const TScriptInterface<class UXLABInteractionHandler>& Handler, const TScriptInterface<class UXLABInteractive>& Interactive)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.On BoxGrab Interaction");

	ACorvaxianBox_C_On_BoxGrab_Interaction_Params params;
	params.InteractionEventType = InteractionEventType;
	params.Handler = Handler;
	params.Interactive = Interactive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Play Opening Animation
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::Play_Opening_Animation()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Play Opening Animation");

	ACorvaxianBox_C_Play_Opening_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Top Button Pressed
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::Top_Button_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Top Button Pressed");

	ACorvaxianBox_C_Top_Button_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Side Button Pressed
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::Side_Button_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Side Button Pressed");

	ACorvaxianBox_C_Side_Button_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.OnButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ButtonName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::OnButtonPressed(const struct FName& ButtonName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.OnButtonPressed");

	ACorvaxianBox_C_OnButtonPressed_Params params;
	params.ButtonName = ButtonName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.FadeOutLight
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::FadeOutLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.FadeOutLight");

	ACorvaxianBox_C_FadeOutLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.FadeInLight
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::FadeInLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.FadeInLight");

	ACorvaxianBox_C_FadeInLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FName                   InteractionName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature(const struct FName& InteractionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature");

	ACorvaxianBox_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature_Params params;
	params.InteractionName = InteractionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Show_Complete_Box
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisableEffects                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::Show_Complete_Box(bool DisableEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Show_Complete_Box");

	ACorvaxianBox_C_Show_Complete_Box_Params params;
	params.DisableEffects = DisableEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.HideEffects
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::HideEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.HideEffects");

	ACorvaxianBox_C_HideEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Corvaxian_LookAtStart
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::Corvaxian_LookAtStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Corvaxian_LookAtStart");

	ACorvaxianBox_C_Corvaxian_LookAtStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.StartModulatingCrystalEmissive
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::StartModulatingCrystalEmissive()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.StartModulatingCrystalEmissive");

	ACorvaxianBox_C_StartModulatingCrystalEmissive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.StopModulatingCrystalEmissive
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::StopModulatingCrystalEmissive()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.StopModulatingCrystalEmissive");

	ACorvaxianBox_C_StopModulatingCrystalEmissive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Disable All VFX Emissve
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::Disable_All_VFX_Emissve()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Disable All VFX Emissve");

	ACorvaxianBox_C_Disable_All_VFX_Emissve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.TurnOnBoxGlow
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::TurnOnBoxGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.TurnOnBoxGlow");

	ACorvaxianBox_C_TurnOnBoxGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.TurnOffBoxGlow
// (BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::TurnOffBoxGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.TurnOffBoxGlow");

	ACorvaxianBox_C_TurnOffBoxGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::Disable(bool Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.Disable");

	ACorvaxianBox_C_Disable_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.ExecuteUbergraph_CorvaxianBox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACorvaxianBox_C::ExecuteUbergraph_CorvaxianBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.ExecuteUbergraph_CorvaxianBox");

	ACorvaxianBox_C_ExecuteUbergraph_CorvaxianBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.OnSideButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::OnSideButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.OnSideButtonPressed__DelegateSignature");

	ACorvaxianBox_C_OnSideButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.OnPuzzleInteractionsDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::OnPuzzleInteractionsDone__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.OnPuzzleInteractionsDone__DelegateSignature");

	ACorvaxianBox_C_OnPuzzleInteractionsDone__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.OnTopButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::OnTopButtonPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.OnTopButtonPressed__DelegateSignature");

	ACorvaxianBox_C_OnTopButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.OnPuzzleComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::OnPuzzleComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.OnPuzzleComplete__DelegateSignature");

	ACorvaxianBox_C_OnPuzzleComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CorvaxianBox.CorvaxianBox_C.OnBoxGrabbed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ACorvaxianBox_C::OnBoxGrabbed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function CorvaxianBox.CorvaxianBox_C.OnBoxGrabbed__DelegateSignature");

	ACorvaxianBox_C_OnBoxGrabbed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
