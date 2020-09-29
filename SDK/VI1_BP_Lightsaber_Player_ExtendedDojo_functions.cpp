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

// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.SetHiltMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*             NewMesh                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Player_ExtendedDojo_C::SetHiltMesh(class UStaticMesh* NewMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.SetHiltMesh");

	ABP_Lightsaber_Player_ExtendedDojo_C_SetHiltMesh_Params params;
	params.NewMesh = NewMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.UpdateLightsaberCustomization
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   NewLightsaberColorName         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   NewLightsaberHiltName          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Player_ExtendedDojo_C::UpdateLightsaberCustomization(const struct FName& NewLightsaberColorName, const struct FName& NewLightsaberHiltName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.UpdateLightsaberCustomization");

	ABP_Lightsaber_Player_ExtendedDojo_C_UpdateLightsaberCustomization_Params params;
	params.NewLightsaberColorName = NewLightsaberColorName;
	params.NewLightsaberHiltName = NewLightsaberHiltName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lightsaber_Player_ExtendedDojo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.UserConstructionScript");

	ABP_Lightsaber_Player_ExtendedDojo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Lightsaber_Player_ExtendedDojo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.ReceiveBeginPlay");

	ABP_Lightsaber_Player_ExtendedDojo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.OnCustomizationSettingsChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCustomizationSettings  CustomizationSettings          (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Lightsaber_Player_ExtendedDojo_C::OnCustomizationSettingsChanged(const struct FCustomizationSettings& CustomizationSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.OnCustomizationSettingsChanged");

	ABP_Lightsaber_Player_ExtendedDojo_C_OnCustomizationSettingsChanged_Params params;
	params.CustomizationSettings = CustomizationSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.ExecuteUbergraph_BP_Lightsaber_Player_ExtendedDojo
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lightsaber_Player_ExtendedDojo_C::ExecuteUbergraph_BP_Lightsaber_Player_ExtendedDojo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lightsaber_Player_ExtendedDojo.BP_Lightsaber_Player_ExtendedDojo_C.ExecuteUbergraph_BP_Lightsaber_Player_ExtendedDojo");

	ABP_Lightsaber_Player_ExtendedDojo_C_ExecuteUbergraph_BP_Lightsaber_Player_ExtendedDojo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
