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

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ControllerInputIndicatesGrab
struct ABP_WKNDMotionController_C_ControllerInputIndicatesGrab_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetGrabberLocation
struct ABP_WKNDMotionController_C_GetGrabberLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetGrabberRotation
struct ABP_WKNDMotionController_C_GetGrabberRotation_Params
{
	struct FRotator                                    ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsHoldingObject
struct ABP_WKNDMotionController_C_IsHoldingObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsHoldingParticularObject
struct ABP_WKNDMotionController_C_IsHoldingParticularObject_Params
{
	class UForceItemComponentBase*                     ForceItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsNearGrabbableObject
struct ABP_WKNDMotionController_C_IsNearGrabbableObject_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.PickBestTransformToGrabItem
struct ABP_WKNDMotionController_C_PickBestTransformToGrabItem_Params
{
	class UForceItemComponentBase*                     ForceItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetForcePowerAim
struct ABP_WKNDMotionController_C_GetForcePowerAim_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetMotionControllerHand
struct ABP_WKNDMotionController_C_GetMotionControllerHand_Params
{
	EControllerHand                                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetVelocityTracker
struct ABP_WKNDMotionController_C_GetVelocityTracker_Params
{
	class UVelocityTrackerBase*                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsControllerTracking
struct ABP_WKNDMotionController_C_IsControllerTracking_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReenableLastClimbObject
struct ABP_WKNDMotionController_C_ReenableLastClimbObject_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ClearClosestMandatedLocation
struct ABP_WKNDMotionController_C_ClearClosestMandatedLocation_Params
{
	struct FVector                                     PlayerLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.DebugVisualizeMandatedLocations
struct ABP_WKNDMotionController_C_DebugVisualizeMandatedLocations_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.Get Closest Recentering Point
struct ABP_WKNDMotionController_C_Get_Closest_Recentering_Point_Params
{
	struct FVector                                     Player_Location;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Player_Rotation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FTransform                                  Out_Transform;                                            // (Parm, OutParm, IsPlainOldData)
	int                                                Out_Index;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.FindGroundAtLocation
struct ABP_WKNDMotionController_C_FindGroundAtLocation_Params
{
	struct FVector                                     WorldLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Ground_at_Location;                                       // (Parm, OutParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsZoeBlocking
struct ABP_WKNDMotionController_C_IsZoeBlocking_Params
{
	struct FVector                                     NavLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateDebugHandAnimationText
struct ABP_WKNDMotionController_C_UpdateDebugHandAnimationText_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetTeleportArcGrowthTime
struct ABP_WKNDMotionController_C_GetTeleportArcGrowthTime_Params
{
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetTeleportLaunchSpeed
struct ABP_WKNDMotionController_C_GetTeleportLaunchSpeed_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetArrowRotation
struct ABP_WKNDMotionController_C_SetArrowRotation_Params
{
	struct FVector                                     Destination;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    OutRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.HandleTeleportArc
struct ABP_WKNDMotionController_C_HandleTeleportArc_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ETeleportUIState                                   TeleportState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetThumbstickAngle
struct ABP_WKNDMotionController_C_GetThumbstickAngle_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.CheckMandatedLocation
struct ABP_WKNDMotionController_C_CheckMandatedLocation_Params
{
	struct FVector                                     TargetLocation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    TargetRotation;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               FoundSnapPoint;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ResolvedLocation;                                         // (Parm, OutParm, IsPlainOldData)
	int                                                MandatedId;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ResolvedRotation;                                         // (Parm, OutParm, IsPlainOldData)
	bool                                               ActiveRotation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               BlueSnapPoint;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.RemoveMandatedLocation
struct ABP_WKNDMotionController_C_RemoveMandatedLocation_Params
{
	int                                                NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.IsMandatedLocationActive
struct ABP_WKNDMotionController_C_IsMandatedLocationActive_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bIsActive;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetMandatedLocationActive
struct ABP_WKNDMotionController_C_SetMandatedLocationActive_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               newActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSuccess;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.AddMandatedLocation
struct ABP_WKNDMotionController_C_AddMandatedLocation_Params
{
	int                                                NewId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              NewSnappingRange;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bStartActive;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               UseRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BlueSnapPoint;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetWeaponToWrist
struct ABP_WKNDMotionController_C_GetWeaponToWrist_Params
{
	struct FTransform                                  ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateBlockLag
struct ABP_WKNDMotionController_C_UpdateBlockLag_Params
{
	float                                              Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.XLABInteractionHandlerIsSlicingTool
struct ABP_WKNDMotionController_C_XLABInteractionHandlerIsSlicingTool_Params
{
	bool                                               Is_Slicing_Tool;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetMandatedProperties
struct ABP_WKNDMotionController_C_SetMandatedProperties_Params
{
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              NewSnappingRange;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SnapId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               UseRotation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateGrabToWrist
struct ABP_WKNDMotionController_C_UpdateGrabToWrist_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateClashLag
struct ABP_WKNDMotionController_C_UpdateClashLag_Params
{
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ApplyResistance
struct ABP_WKNDMotionController_C_ApplyResistance_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetControllerWithClashBlend
struct ABP_WKNDMotionController_C_GetControllerWithClashBlend_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateHandTransform
struct ABP_WKNDMotionController_C_UpdateHandTransform_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InitSaberManager
struct ABP_WKNDMotionController_C_InitSaberManager_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.TestForDisengage
struct ABP_WKNDMotionController_C_TestForDisengage_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetOffsetWeaponTransform
struct ABP_WKNDMotionController_C_GetOffsetWeaponTransform_Params
{
	struct FTransform                                  WeaponTransform;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetBlockAngle
struct ABP_WKNDMotionController_C_GetBlockAngle_Params
{
	struct FVector                                     ClashLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               Clash;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delta_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetHandToBlade
struct ABP_WKNDMotionController_C_GetHandToBlade_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateHandToBlade
struct ABP_WKNDMotionController_C_UpdateHandToBlade_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetTransformWithNoise
struct ABP_WKNDMotionController_C_SetTransformWithNoise_Params
{
	class USceneComponent*                             Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.CacheTransforms_Cutting
struct ABP_WKNDMotionController_C_CacheTransforms_Cutting_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SyncIntentBladeToActualBlade
struct ABP_WKNDMotionController_C_SyncIntentBladeToActualBlade_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.DropSaber
struct ABP_WKNDMotionController_C_DropSaber_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetABPHandTransform
struct ABP_WKNDMotionController_C_SetABPHandTransform_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.PickupSaber
struct ABP_WKNDMotionController_C_PickupSaber_Params
{
	class ABP_Lightsaber_C*                            Saber;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.PositionFingerCollision
struct ABP_WKNDMotionController_C_PositionFingerCollision_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnInitMotionController
struct ABP_WKNDMotionController_C_OnInitMotionController_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.Teleport
struct ABP_WKNDMotionController_C_Teleport_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateHandToWrist
struct ABP_WKNDMotionController_C_UpdateHandToWrist_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.GetTeleportDestination
struct ABP_WKNDMotionController_C_GetTeleportDestination_Params
{
	struct FVector                                     Location;                                                 // (Parm, OutParm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateArcEndpoint
struct ABP_WKNDMotionController_C_UpdateArcEndpoint_Params
{
	struct FVector                                     NewLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool                                               ValidLocationFound;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RotateArrow;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UpdateArcSpline
struct ABP_WKNDMotionController_C_UpdateArcSpline_Params
{
	bool                                               FoundValidLocation;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             SplinePoints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.TraceTeleportDestination
struct ABP_WKNDMotionController_C_TraceTeleportDestination_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IncompleteArc;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TraceLocation;                                            // (Parm, OutParm, IsPlainOldData)
	TArray<struct FVector>                             TracePoints;                                              // (Parm, OutParm, ZeroConstructor)
	struct FVector                                     NavMeshLocation;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.DisableTeleporter
struct ABP_WKNDMotionController_C_DisableTeleporter_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.UserConstructionScript
struct ABP_WKNDMotionController_C_UserConstructionScript_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_C_K2Node_InputKeyEvent_5
struct ABP_WKNDMotionController_C_InpActEvt_C_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_One_K2Node_InputKeyEvent_4
struct ABP_WKNDMotionController_C_InpActEvt_One_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_Two_K2Node_InputKeyEvent_3
struct ABP_WKNDMotionController_C_InpActEvt_Two_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_Three_K2Node_InputKeyEvent_2
struct ABP_WKNDMotionController_C_InpActEvt_Three_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.InpActEvt_Four_K2Node_InputKeyEvent_1
struct ABP_WKNDMotionController_C_InpActEvt_Four_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
struct ABP_WKNDMotionController_C_BndEvt__ControllerMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveBeginPlay
struct ABP_WKNDMotionController_C_ReceiveBeginPlay_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveTick
struct ABP_WKNDMotionController_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.RumbleController
struct ABP_WKNDMotionController_C_RumbleController_Params
{
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_WKNDMotionController_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveActivateTeleporter
struct ABP_WKNDMotionController_C_ReceiveActivateTeleporter_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveDeactivateTeleporter
struct ABP_WKNDMotionController_C_ReceiveDeactivateTeleporter_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveOnHeldInBothHands
struct ABP_WKNDMotionController_C_ReceiveOnHeldInBothHands_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveOnNotHeldInBothHands
struct ABP_WKNDMotionController_C_ReceiveOnNotHeldInBothHands_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.RangedGrabSuccess
struct ABP_WKNDMotionController_C_RangedGrabSuccess_Params
{
	class AActor**                                     GrabbedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             GrabbedRange;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ChannelForceOnActorStart
struct ABP_WKNDMotionController_C_ChannelForceOnActorStart_Params
{
	class AActor**                                     GrabbedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ChannelForceOnActorComplete
struct ABP_WKNDMotionController_C_ChannelForceOnActorComplete_Params
{
	class AActor**                                     GrabbedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ChannelForceOnActorBroken
struct ABP_WKNDMotionController_C_ChannelForceOnActorBroken_Params
{
	class AActor**                                     GrabbedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnReverseGrip
struct ABP_WKNDMotionController_C_OnReverseGrip_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnForeGrip
struct ABP_WKNDMotionController_C_OnForeGrip_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnGripShift
struct ABP_WKNDMotionController_C_OnGripShift_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__GrabSphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ABP_WKNDMotionController_C_BndEvt__GrabSphere_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnSecondHandGrab
struct ABP_WKNDMotionController_C_OnSecondHandGrab_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.OnSecondHandRelease
struct ABP_WKNDMotionController_C_OnSecondHandRelease_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BlinkStart
struct ABP_WKNDMotionController_C_BlinkStart_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BlinkFinished
struct ABP_WKNDMotionController_C_BlinkFinished_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveManuallyUpdateHandPosition
struct ABP_WKNDMotionController_C_ReceiveManuallyUpdateHandPosition_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.StopDisarmMontage
struct ABP_WKNDMotionController_C_StopDisarmMontage_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetPinHand
struct ABP_WKNDMotionController_C_SetPinHand_Params
{
	bool*                                              Val;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ReceiveInitializeMotionController
struct ABP_WKNDMotionController_C_ReceiveInitializeMotionController_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.PrepareToForceGrabItem
struct ABP_WKNDMotionController_C_PrepareToForceGrabItem_Params
{
	class UForceItemComponentBase*                     ForceItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_1_GrabbedItemSig__DelegateSignature
struct ABP_WKNDMotionController_C_BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_1_GrabbedItemSig__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_2_DroppedItemSig__DelegateSignature
struct ABP_WKNDMotionController_C_BndEvt__GrabberComponent_K2Node_ComponentBoundEvent_2_DroppedItemSig__DelegateSignature_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SnapStart
struct ABP_WKNDMotionController_C_SnapStart_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SnapStop
struct ABP_WKNDMotionController_C_SnapStop_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ShowTeleportDestination
struct ABP_WKNDMotionController_C_ShowTeleportDestination_Params
{
	bool*                                              alsoShowArcEndpoint;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.HideTeleportDestination
struct ABP_WKNDMotionController_C_HideTeleportDestination_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetTeleportDestination
struct ABP_WKNDMotionController_C_SetTeleportDestination_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.SetTeleportArcColour
struct ABP_WKNDMotionController_C_SetTeleportArcColour_Params
{
	ETeleportUIState*                                  teleportUIState;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.ExecuteUbergraph_BP_WKNDMotionController
struct ABP_WKNDMotionController_C_ExecuteUbergraph_BP_WKNDMotionController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.TeleportedToMandatedLocation__DelegateSignature
struct ABP_WKNDMotionController_C_TeleportedToMandatedLocation__DelegateSignature_Params
{
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.DroppedWeapon__DelegateSignature
struct ABP_WKNDMotionController_C_DroppedWeapon__DelegateSignature_Params
{
	class ARPOCPickupWeapon*                           weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_WKNDMotionController.BP_WKNDMotionController_C.PickedUpWeapon__DelegateSignature
struct ABP_WKNDMotionController_C_PickedUpWeapon__DelegateSignature_Params
{
	class ARPOCPickupWeapon*                           weapon;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
