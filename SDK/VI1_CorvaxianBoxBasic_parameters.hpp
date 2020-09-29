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

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.ForceDropBox
struct ACorvaxianBoxBasic_C_ForceDropBox_Params
{
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.UserConstructionScript
struct ACorvaxianBoxBasic_C_UserConstructionScript_Params
{
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.RampOnBoxGlow__FinishedFunc
struct ACorvaxianBoxBasic_C_RampOnBoxGlow__FinishedFunc_Params
{
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.RampOnBoxGlow__UpdateFunc
struct ACorvaxianBoxBasic_C_RampOnBoxGlow__UpdateFunc_Params
{
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.Timeline_0__FinishedFunc
struct ACorvaxianBoxBasic_C_Timeline_0__FinishedFunc_Params
{
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.Timeline_0__UpdateFunc
struct ACorvaxianBoxBasic_C_Timeline_0__UpdateFunc_Params
{
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.ReceiveTick
struct ACorvaxianBoxBasic_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionContactEvent__DelegateSignature
struct ACorvaxianBoxBasic_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_1_InteractionContactEvent__DelegateSignature_Params
{
	struct FName                                       InteractionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ContactComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_2_InteractionContactEvent__DelegateSignature
struct ACorvaxianBoxBasic_C_BndEvt__PhysicsInteractions_K2Node_ComponentBoundEvent_2_InteractionContactEvent__DelegateSignature_Params
{
	struct FName                                       InteractionName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         ContactComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.ReceiveBeginPlay
struct ACorvaxianBoxBasic_C_ReceiveBeginPlay_Params
{
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.On BoxGrab Interaction
struct ACorvaxianBoxBasic_C_On_BoxGrab_Interaction_Params
{
	EXLABInteractionEventType                          InteractionEventType;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.TurnOnBoxGlow
struct ACorvaxianBoxBasic_C_TurnOnBoxGlow_Params
{
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.TurnOffBoxGlow
struct ACorvaxianBoxBasic_C_TurnOffBoxGlow_Params
{
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.FadeOutLight
struct ACorvaxianBoxBasic_C_FadeOutLight_Params
{
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.FadeInLight
struct ACorvaxianBoxBasic_C_FadeInLight_Params
{
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.ExecuteUbergraph_CorvaxianBoxBasic
struct ACorvaxianBoxBasic_C_ExecuteUbergraph_CorvaxianBoxBasic_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorvaxianBoxBasic.CorvaxianBoxBasic_C.OnBoxGrabbed__DelegateSignature
struct ACorvaxianBoxBasic_C_OnBoxGrabbed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
