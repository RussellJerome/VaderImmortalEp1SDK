#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CorvaxianBox.CorvaxianBox_C.LockSideButton
struct ACorvaxianBox_C_LockSideButton_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.LockSideButtons
struct ACorvaxianBox_C_LockSideButtons_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.InitializeLattice
struct ACorvaxianBox_C_InitializeLattice_Params
{
	class UChildActorComponent*                        Child_Actor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       Bone_Prefix;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.InitializeLattices
struct ACorvaxianBox_C_InitializeLattices_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SetPointLightAttr
struct ACorvaxianBox_C_SetPointLightAttr_Params
{
	class UChildActorComponent*                        Point_Light_Input;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Light_Intensity;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Light_Visibility;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.SetSmokeAttrs
struct ACorvaxianBox_C_SetSmokeAttrs_Params
{
	bool                                               Set_Values;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              BasicSmoke_EmissionGain;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Smoke_EmissionGain;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Smoke_VelGain;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Smoke_ColorGain;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Smoke_AlphaGain;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.SetDustSpawnRate
struct ACorvaxianBox_C_SetDustSpawnRate_Params
{
	float                                              Spawn_Rate_Input;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.SetSideAreaLights
struct ACorvaxianBox_C_SetSideAreaLights_Params
{
	float                                              Light_Intensity;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Light_Visibility;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Light_Gain;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.SetRecAreaLightAttr
struct ACorvaxianBox_C_SetRecAreaLightAttr_Params
{
	class UChildActorComponent*                        Rect_Area_Light_Input;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Light_Intensity;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Light_Visibility;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.SetupHaptics
struct ACorvaxianBox_C_SetupHaptics_Params
{
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.TranslateDoors
struct ACorvaxianBox_C_TranslateDoors_Params
{
	float                                              DoorNgX_X;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DoorX_X;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DoorNgY_Y;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DoorY_Y;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Doors_Z;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.SetAllLatticeButtonInteractionEnabled
struct ACorvaxianBox_C_SetAllLatticeButtonInteractionEnabled_Params
{
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.SetLatticeButtonInteractionEnabled
struct ACorvaxianBox_C_SetLatticeButtonInteractionEnabled_Params
{
	class UChildActorComponent*                        Lattice;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.ForceDropBox
struct ACorvaxianBox_C_ForceDropBox_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.RetractAllPistonsAllLattices
struct ACorvaxianBox_C_RetractAllPistonsAllLattices_Params
{
	float                                              extension;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.RetractAllPistons
struct ACorvaxianBox_C_RetractAllPistons_Params
{
	class UChildActorComponent*                        Lattice;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              extension;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.ExtendAllPistonsAllLattices
struct ACorvaxianBox_C_ExtendAllPistonsAllLattices_Params
{
	float                                              extension;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.ExtendAllPistons
struct ACorvaxianBox_C_ExtendAllPistons_Params
{
	class UChildActorComponent*                        Lattice;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              extension;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.RetractSideButtons
struct ACorvaxianBox_C_RetractSideButtons_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.RetractSideButton
struct ACorvaxianBox_C_RetractSideButton_Params
{
	class UChildActorComponent*                        Lattice;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Side_Id;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.EnableSideButtons
struct ACorvaxianBox_C_EnableSideButtons_Params
{
	bool                                               Should_Enable;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.ExtendSideButton
struct ACorvaxianBox_C_ExtendSideButton_Params
{
	class UChildActorComponent*                        Lattice;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              extension;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SideId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.ExtendSideButtons
struct ACorvaxianBox_C_ExtendSideButtons_Params
{
	float                                              extension;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.PlayRandomPatternAnimations
struct ACorvaxianBox_C_PlayRandomPatternAnimations_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.PlayRandomPatternAnimation
struct ACorvaxianBox_C_PlayRandomPatternAnimation_Params
{
	class UChildActorComponent*                        Lattice;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.UserConstructionScript
struct ACorvaxianBox_C_UserConstructionScript_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Retract Button__FinishedFunc
struct ACorvaxianBox_C_Retract_Button__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Retract Button__UpdateFunc
struct ACorvaxianBox_C_Retract_Button__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Doors Translate__FinishedFunc
struct ACorvaxianBox_C_Doors_Translate__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Doors Translate__UpdateFunc
struct ACorvaxianBox_C_Doors_Translate__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Doors Rotate__FinishedFunc
struct ACorvaxianBox_C_Doors_Rotate__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Doors Rotate__UpdateFunc
struct ACorvaxianBox_C_Doors_Rotate__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Extend Button__FinishedFunc
struct ACorvaxianBox_C_Extend_Button__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Extend Button__UpdateFunc
struct ACorvaxianBox_C_Extend_Button__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Doors Close__FinishedFunc
struct ACorvaxianBox_C_Doors_Close__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Doors Close__UpdateFunc
struct ACorvaxianBox_C_Doors_Close__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Doors Retract__FinishedFunc
struct ACorvaxianBox_C_Doors_Retract__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Doors Retract__UpdateFunc
struct ACorvaxianBox_C_Doors_Retract__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Timeline_0__FinishedFunc
struct ACorvaxianBox_C_Timeline_0__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Timeline_0__UpdateFunc
struct ACorvaxianBox_C_Timeline_0__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.ToButtonLgtPulse__FinishedFunc
struct ACorvaxianBox_C_ToButtonLgtPulse__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.ToButtonLgtPulse__UpdateFunc
struct ACorvaxianBox_C_ToButtonLgtPulse__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.TopButtonLgtRampOn__FinishedFunc
struct ACorvaxianBox_C_TopButtonLgtRampOn__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.TopButtonLgtRampOn__UpdateFunc
struct ACorvaxianBox_C_TopButtonLgtRampOn__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampIn__FinishedFunc
struct ACorvaxianBox_C_SideWallLightRampIn__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampIn__UpdateFunc
struct ACorvaxianBox_C_SideWallLightRampIn__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampOut__FinishedFunc
struct ACorvaxianBox_C_SideWallLightRampOut__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SideWallLightRampOut__UpdateFunc
struct ACorvaxianBox_C_SideWallLightRampOut__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.CrystalPulse__FinishedFunc
struct ACorvaxianBox_C_CrystalPulse__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.CrystalPulse__UpdateFunc
struct ACorvaxianBox_C_CrystalPulse__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Init_TL__FinishedFunc
struct ACorvaxianBox_C_SmokeBurst_Init_TL__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Init_TL__UpdateFunc
struct ACorvaxianBox_C_SmokeBurst_Init_TL__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Sec_TL__FinishedFunc
struct ACorvaxianBox_C_SmokeBurst_Sec_TL__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SmokeBurst_Sec_TL__UpdateFunc
struct ACorvaxianBox_C_SmokeBurst_Sec_TL__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.RampSmokeDownEnd__FinishedFunc
struct ACorvaxianBox_C_RampSmokeDownEnd__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.RampSmokeDownEnd__UpdateFunc
struct ACorvaxianBox_C_RampSmokeDownEnd__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.InitCrystalGlow__FinishedFunc
struct ACorvaxianBox_C_InitCrystalGlow__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.InitCrystalGlow__UpdateFunc
struct ACorvaxianBox_C_InitCrystalGlow__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SparkleBurst__FinishedFunc
struct ACorvaxianBox_C_SparkleBurst__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SparkleBurst__UpdateFunc
struct ACorvaxianBox_C_SparkleBurst__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.RampOffTopButtonLgt__FinishedFunc
struct ACorvaxianBox_C_RampOffTopButtonLgt__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.RampOffTopButtonLgt__UpdateFunc
struct ACorvaxianBox_C_RampOffTopButtonLgt__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.RampOnBoxGlow__FinishedFunc
struct ACorvaxianBox_C_RampOnBoxGlow__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.RampOnBoxGlow__UpdateFunc
struct ACorvaxianBox_C_RampOnBoxGlow__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.RampSmokeOn__FinishedFunc
struct ACorvaxianBox_C_RampSmokeOn__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.RampSmokeOn__UpdateFunc
struct ACorvaxianBox_C_RampSmokeOn__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SideButtonPulse__FinishedFunc
struct ACorvaxianBox_C_SideButtonPulse__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.SideButtonPulse__UpdateFunc
struct ACorvaxianBox_C_SideButtonPulse__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.EnableBoxEmissive__FinishedFunc
struct ACorvaxianBox_C_EnableBoxEmissive__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.EnableBoxEmissive__UpdateFunc
struct ACorvaxianBox_C_EnableBoxEmissive__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Timeline_1__FinishedFunc
struct ACorvaxianBox_C_Timeline_1__FinishedFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Timeline_1__UpdateFunc
struct ACorvaxianBox_C_Timeline_1__UpdateFunc_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.ReceiveTick
struct ACorvaxianBox_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionContactEvent__DelegateSignature
struct ACorvaxianBox_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionContactEvent__DelegateSignature_Params
{
	struct FName                                       InteractionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ContactComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_2_InteractionContactEvent__DelegateSignature
struct ACorvaxianBox_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_2_InteractionContactEvent__DelegateSignature_Params
{
	struct FName                                       InteractionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ContactComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.ReceiveBeginPlay
struct ACorvaxianBox_C_ReceiveBeginPlay_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.On BoxGrab Interaction
struct ACorvaxianBox_C_On_BoxGrab_Interaction_Params
{
	EXLABInteractionEventType                          InteractionEventType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.Play Opening Animation
struct ACorvaxianBox_C_Play_Opening_Animation_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Top Button Pressed
struct ACorvaxianBox_C_Top_Button_Pressed_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Side Button Pressed
struct ACorvaxianBox_C_Side_Button_Pressed_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.OnButtonPressed
struct ACorvaxianBox_C_OnButtonPressed_Params
{
	struct FName                                       ButtonName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.FadeOutLight
struct ACorvaxianBox_C_FadeOutLight_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.FadeInLight
struct ACorvaxianBox_C_FadeInLight_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature
struct ACorvaxianBox_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_0_InteractionEvent__DelegateSignature_Params
{
	struct FName                                       InteractionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.Show_Complete_Box
struct ACorvaxianBox_C_Show_Complete_Box_Params
{
	bool                                               DisableEffects;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.HideEffects
struct ACorvaxianBox_C_HideEffects_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Corvaxian_LookAtStart
struct ACorvaxianBox_C_Corvaxian_LookAtStart_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.StartModulatingCrystalEmissive
struct ACorvaxianBox_C_StartModulatingCrystalEmissive_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.StopModulatingCrystalEmissive
struct ACorvaxianBox_C_StopModulatingCrystalEmissive_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Disable All VFX Emissve
struct ACorvaxianBox_C_Disable_All_VFX_Emissve_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.TurnOnBoxGlow
struct ACorvaxianBox_C_TurnOnBoxGlow_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.TurnOffBoxGlow
struct ACorvaxianBox_C_TurnOffBoxGlow_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.Disable
struct ACorvaxianBox_C_Disable_Params
{
	bool                                               Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.ExecuteUbergraph_CorvaxianBox
struct ACorvaxianBox_C_ExecuteUbergraph_CorvaxianBox_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBox.CorvaxianBox_C.OnSideButtonPressed__DelegateSignature
struct ACorvaxianBox_C_OnSideButtonPressed__DelegateSignature_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.OnPuzzleInteractionsDone__DelegateSignature
struct ACorvaxianBox_C_OnPuzzleInteractionsDone__DelegateSignature_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.OnTopButtonPressed__DelegateSignature
struct ACorvaxianBox_C_OnTopButtonPressed__DelegateSignature_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.OnPuzzleComplete__DelegateSignature
struct ACorvaxianBox_C_OnPuzzleComplete__DelegateSignature_Params
{
};

// Function CorvaxianBox.CorvaxianBox_C.OnBoxGrabbed__DelegateSignature
struct ACorvaxianBox_C_OnBoxGrabbed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
