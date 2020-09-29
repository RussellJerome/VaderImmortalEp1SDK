#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum VRHandInteraction.EXLABInteractionEventType
enum class EXLABInteractionEventType : uint8_t
{
	Grab                           = 0,
	Release                        = 1,
	EXLABInteractionEventType_MAX  = 2
};


// Enum VRHandInteraction.EXLABInteractionState
enum class EXLABInteractionState : uint8_t
{
	None                           = 0,
	Hover                          = 1,
	Grabbing                       = 2,
	Grabbed                        = 3,
	EXLABInteractionState_MAX      = 4
};


// Enum VRHandInteraction.EXLABAngularRestrictionType
enum class EXLABAngularRestrictionType : uint8_t
{
	XART_RelativeToInteractiveTransform = 0,
	XART_RelativeToDefaultTransform = 1,
	XART_RelativeToFacingTransform = 2,
	XART_MAX                       = 3
};


// Enum VRHandInteraction.EXLABHandFlags
enum class EXLABHandFlags : uint8_t
{
	XHF_Right                      = 0,
	XHF_Left                       = 1,
	XHF_MAX                        = 2
};


// Enum VRHandInteraction.EXLABValueCalculatingMethod
enum class EXLABValueCalculatingMethod : uint8_t
{
	AccountForStrength             = 0,
	AccountForTrigger              = 1,
	EXLABValueCalculatingMethod_MAX = 2
};


// Enum VRHandInteraction.EXLABHandlerBoneType
enum class EXLABHandlerBoneType : uint8_t
{
	HandRoot                       = 0,
	MotionController               = 1,
	HeldItem                       = 2,
	Fingertip                      = 3,
	EXLABHandlerBoneType_MAX       = 4
};


// Enum VRHandInteraction.EXLABInteractionBehaviorFlags
enum class EXLABInteractionBehaviorFlags : uint8_t
{
	Grabbable                      = 0,
	AnimationFromDistance          = 1,
	AnimationFromTrigger           = 2,
	LerpFromDistance               = 3,
	LerpFromTrigger                = 4,
	MaxLerpWhenGrabbing            = 5,
	EXLABInteractionBehaviorFlags_MAX = 6
};


// Enum VRHandInteraction.EXLABInteractionRangeMarkerType
enum class EXLABInteractionRangeMarkerType : uint8_t
{
	Outer                          = 0,
	Inner                          = 1,
	Object                         = 2,
	Custom                         = 3,
	CustomBetweenInnerAndOuter     = 4,
	EXLABInteractionRangeMarkerType_MAX = 5
};


// Enum VRHandInteraction.EXLABInteractionReleaseMethod
enum class EXLABInteractionReleaseMethod : uint8_t
{
	InputControlled                = 0,
	Manual                         = 1,
	HandTransferOnly               = 2,
	EXLABInteractionReleaseMethod_MAX = 3
};


// Enum VRHandInteraction.EXLABHandlerBoneSpace
enum class EXLABHandlerBoneSpace : uint8_t
{
	Raw                            = 0,
	VisualMesh                     = 1,
	EXLABHandlerBoneSpace_MAX      = 2
};


// Enum VRHandInteraction.EXLABLockedDataType
enum class EXLABLockedDataType : uint8_t
{
	GrabbingOnly                   = 0,
	GrabbedOnly                    = 1,
	Both                           = 2,
	EXLABLockedDataType_MAX        = 3
};


// Enum VRHandInteraction.EXLABBoxSurfaces
enum class EXLABBoxSurfaces : uint8_t
{
	PlusZ                          = 0,
	MinusZ                         = 1,
	PlusX                          = 2,
	MinusX                         = 3,
	PlusY                          = 4,
	MinusY                         = 5,
	All                            = 6,
	EXLABBoxSurfaces_MAX           = 7
};


// Enum VRHandInteraction.EXLABRotationModificationType
enum class EXLABRotationModificationType : uint8_t
{
	NoChange                       = 0,
	SnapToDefaultRotation          = 1,
	SnapToHandlerRotation          = 2,
	EXLABRotationModificationType_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VRHandInteraction.XLABHandSolverBoneData
// 0x0010
struct FXLABHandSolverBoneData
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCompensateForILMRotation;                                // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct VRHandInteraction.XLABHandBones
// 0x0050
struct FXLABHandBones
{
	struct FXLABHandSolverBoneData                     MotionControllerBoneData;                                 // 0x0000(0x0010) (Edit, BlueprintVisible)
	struct FXLABHandSolverBoneData                     HandRootBoneData;                                         // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FXLABHandSolverBoneData                     HeldItemBoneData;                                         // 0x0020(0x0010) (Edit, BlueprintVisible)
	struct FXLABHandSolverBoneData                     FingertipBoneData;                                        // 0x0030(0x0010) (Edit, BlueprintVisible)
	struct FXLABHandSolverBoneData                     CollisionRootBoneData;                                    // 0x0040(0x0010) (Edit, BlueprintVisible)
};

// ScriptStruct VRHandInteraction.XLABShapeRelativeValueCalculator
// 0x0038
struct FXLABShapeRelativeValueCalculator
{
	float                                              InterpSpeed;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x0004(0x0034) MISSED OFFSET
};

// ScriptStruct VRHandInteraction.XLABInteractionValueMap
// 0x0004
struct FXLABInteractionValueMap
{
	float                                              InnerVolumeRelativeRadius;                                // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRHandInteraction.XLABInteractionRangeMarker
// 0x0008
struct FXLABInteractionRangeMarker
{
	EXLABInteractionRangeMarkerType                    MarkerType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CustomValue;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRHandInteraction.XLABInteractionThreshold
// 0x0008 (0x000C - 0x0004)
struct FXLABInteractionThreshold : public FXLABInteractionValueMap
{
	struct FXLABInteractionRangeMarker                 Threshold;                                                // 0x0004(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct VRHandInteraction.XLABInteractionRange
// 0x0010 (0x0014 - 0x0004)
struct FXLABInteractionRange : public FXLABInteractionValueMap
{
	struct FXLABInteractionRangeMarker                 Min;                                                      // 0x0004(0x0008) (Edit, BlueprintVisible)
	struct FXLABInteractionRangeMarker                 Max;                                                      // 0x000C(0x0008) (Edit, BlueprintVisible)
};

// ScriptStruct VRHandInteraction.XLABBestInteractiveData
// 0x0020
struct FXLABBestInteractiveData
{
	TScriptInterface<class UXLABInteractiveGroup>      Group;                                                    // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct VRHandInteraction.XLABLockedInteractionData
// 0x0060
struct FXLABLockedInteractionData
{
	TScriptInterface<class UXLABInteractionHandler>    Handler;                                                  // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractive>           Interactive;                                              // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UXLABInteractiveGroup>      Group;                                                    // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
};

// ScriptStruct VRHandInteraction.XLABTimestampedExecutionData
// 0x00B0
struct FXLABTimestampedExecutionData
{
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0000(0x00B0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
