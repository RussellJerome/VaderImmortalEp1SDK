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

// Enum WKND.ENTHapticHands
enum class ENTHapticHands : uint8_t
{
	NTHapticHands_Left             = 0,
	NTHapticHands_Right            = 1,
	NTHapticHands_Both             = 2,
	NTHapticHands_MAX              = 3
};


// Enum WKND.ETriggeredInteractionResult
enum class ETriggeredInteractionResult : uint8_t
{
	InteractionAccepted            = 0,
	AlreadyInteracting             = 1,
	WrongInteractableType          = 2,
	InteractableNotEnabled         = 3,
	InteractableAlreadyUsed        = 4,
	InteractableInCooldown         = 5,
	InvalidInteraction             = 6,
	ETriggeredInteractionResult_MAX = 7
};


// Enum WKND.EDamageStrength
enum class EDamageStrength : uint8_t
{
	Cosmetic                       = 0,
	Weak                           = 1,
	Standard                       = 2,
	Critical                       = 3,
	Lethal                         = 4,
	EDamageStrength_MAX            = 5
};


// Enum WKND.EDamageType
enum class EDamageType : uint8_t
{
	Melee                          = 0,
	Ranged                         = 1,
	ForceChoke                     = 2,
	EDamageType_MAX                = 3
};


// Enum WKND.EComboEndType
enum class EComboEndType : uint8_t
{
	ECET_PoseStopped               = 0,
	ECET_ComboAborted              = 1,
	ECET_ComboSuccess              = 2,
	ECET_ComboFailed               = 3,
	ECET_MAX                       = 4
};


// Enum WKND.EComboAngleCheck
enum class EComboAngleCheck : uint8_t
{
	ECAC_Success                   = 0,
	ECAC_TooSimilar                = 1,
	ECAC_TooSimilarReverse         = 2,
	ECAC_TooStabLike               = 3,
	ECAC_FailedToResolve           = 4,
	ECAC_Undefined                 = 5,
	ECAC_MAX                       = 6
};


// Enum WKND.EContestedClashResult
enum class EContestedClashResult : uint8_t
{
	None                           = 0,
	Pushback                       = 1,
	FailedInitialBlock             = 2,
	Timeout                        = 3,
	Overpivot                      = 4,
	ClashReleased                  = 5,
	TargetLost                     = 6,
	HiltClash                      = 7,
	EContestedClashResult_MAX      = 8
};


// Enum WKND.EParryResult
enum class EParryResult : uint8_t
{
	Success                        = 0,
	Early                          = 1,
	Late                           = 2,
	Slow                           = 3,
	EParryResult_MAX               = 4
};


// Enum WKND.ECombat_ComboAttackResult
enum class ECombat_ComboAttackResult : uint8_t
{
	None                           = 0,
	ComboSuccess                   = 1,
	ComboBlocked                   = 2,
	ComboOverPowered               = 3,
	ComboParried                   = 4,
	ECombat_MAX                    = 5
};


// Enum WKND.ECombatStageType
enum class ECombatStageType : uint8_t
{
	Undefined                      = 0,
	Attack                         = 1,
	Block                          = 2,
	Defend                         = 3,
	Duel                           = 4,
	Evade                          = 5,
	Exposition                     = 6,
	Idle                           = 7,
	Move                           = 8,
	Parry                          = 9,
	Reaction                       = 10,
	Throw                          = 11,
	ECombatStageType_MAX           = 12
};


// Enum WKND.ETutorialDisplayType
enum class ETutorialDisplayType : uint8_t
{
	ETDT_FullOff                   = 0,
	ETDT_NoTutorial                = 1,
	ETDT_CurrentTutorial           = 2,
	ETDT_InAreaError               = 3,
	ETDT_MAX                       = 4
};


// Enum WKND.ENTSnapDirection
enum class ENTSnapDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	ENTSnapDirection_MAX           = 2
};


// Enum WKND.ETelemetryEventType
enum class ETelemetryEventType : uint8_t
{
	DamageTaken                    = 0,
	HealthLevelChange              = 1,
	Death                          = 2,
	WaveStarted                    = 3,
	WaveCompleted                  = 4,
	WaveFailed                     = 5,
	TimeLimitExceeded              = 6,
	ETelemetryEventType_MAX        = 7
};


// Enum WKND.ERating
enum class ERating : uint8_t
{
	NotYetRated                    = 0,
	NoMedal                        = 1,
	Bronze                         = 2,
	Silver                         = 3,
	Gold                           = 4,
	ERating_MAX                    = 5
};


// Enum WKND.EForceSocketState
enum class EForceSocketState : uint8_t
{
	Empty                          = 0,
	Capturing                      = 1,
	Occupied                       = 2,
	Releasing                      = 3,
	EForceSocketState_MAX          = 4
};


// Enum WKND.ECorvaxianBoxAnimationMode
enum class ECorvaxianBoxAnimationMode : uint8_t
{
	Off                            = 0,
	RandomPattern                  = 1,
	ExtendSinglePiston             = 2,
	RetractSinglePiston            = 3,
	ExtendAllPistons               = 4,
	RetractAllPistons              = 5,
	ECorvaxianBoxAnimationMode_MAX = 6
};


// Enum WKND.EAIStatusCheckType
enum class EAIStatusCheckType : uint8_t
{
	BranchOnError                  = 0,
	BranchOnSuccess                = 1,
	EAIStatusCheckType_MAX         = 2
};


// Enum WKND.EAIAlignComponent
enum class EAIAlignComponent : uint8_t
{
	AlignActorRoot                 = 0,
	AlignMeshComponent             = 1,
	EAIAlignComponent_MAX          = 2
};


// Enum WKND.EAIMovementOverride
enum class EAIMovementOverride : uint8_t
{
	AutoSelect                     = 0,
	TankTurns                      = 1,
	SwingTurn                      = 2,
	SlideTurn                      = 3,
	MoveNoTurn                     = 4,
	FlyTo                          = 5,
	AlignLinear                    = 6,
	AlignSmooth                    = 7,
	EAIMovementOverride_MAX        = 8
};


// Enum WKND.EAIPatrolCorners
enum class EAIPatrolCorners : uint8_t
{
	StopAndTurn                    = 0,
	Continious                     = 1,
	EAIPatrolCorners_MAX           = 2
};


// Enum WKND.EAIPatrolStart
enum class EAIPatrolStart : uint8_t
{
	UseEarliest                    = 0,
	UseClosest                     = 1,
	EAIPatrolStart_MAX             = 2
};


// Enum WKND.EAIPatrolEnd
enum class EAIPatrolEnd : uint8_t
{
	StopAfterPatrol                = 0,
	LoopAfterPatrol                = 1,
	PingPongPatrol                 = 2,
	EAIPatrolEnd_MAX               = 3
};


// Enum WKND.EAIThrowSelection
enum class EAIThrowSelection : uint8_t
{
	ShortThrow                     = 0,
	LongThrow                      = 1,
	DetermineThrowFromDistance     = 2,
	EAIThrowSelection_MAX          = 3
};


// Enum WKND.EIdleBehaviourSelectionPolicy
enum class EIdleBehaviourSelectionPolicy : uint8_t
{
	Random                         = 0,
	Sequential                     = 1,
	EIdleBehaviourSelectionPolicy_MAX = 2
};


// Enum WKND.EInteractableUsedPoint
enum class EInteractableUsedPoint : uint8_t
{
	AtInteractionStart             = 0,
	AtInteractionEnd               = 1,
	AtInteractionEndAlways         = 2,
	AtUsedInstruction              = 3,
	AtUsedInstructionAlways        = 4,
	EInteractableUsedPoint_MAX     = 5
};


// Enum WKND.EBuddyInteractableType
enum class EBuddyInteractableType : uint8_t
{
	PointOfInterest                = 0,
	PlayerTriggered                = 1,
	EBuddyInteractableType_MAX     = 2
};


// Enum WKND.EBuddyAIMovementType
enum class EBuddyAIMovementType : uint8_t
{
	NoneSelected                   = 0,
	Creep                          = 1,
	Walk                           = 2,
	Run                            = 3,
	Sprint                         = 4,
	EBuddyAIMovementType_MAX       = 5
};


// Enum WKND.ENPCNavigationSystemType
enum class ENPCNavigationSystemType : uint8_t
{
	Unreal                         = 0,
	NT_AI_Instruction              = 1,
	NT_Staged_Combat               = 2,
	Other                          = 3,
	ENPCNavigationSystemType_MAX   = 4
};


// Enum WKND.ENPCCombatType
enum class ENPCCombatType : uint8_t
{
	Melee                          = 0,
	Ranged                         = 1,
	Mixed                          = 2,
	ENPCCombatType_MAX             = 3
};


// Enum WKND.EConstructType
enum class EConstructType : uint8_t
{
	ConstructType_Both             = 0,
	ConstructType_Build            = 1,
	ConstructType_Unbuild          = 2,
	ConstructType_MAX              = 3
};


// Enum WKND.ECuttabilityType
enum class ECuttabilityType : uint8_t
{
	Uncuttable                     = 0,
	Cuttable                       = 1,
	TriviallyCuttable              = 2,
	ECuttabilityType_MAX           = 3
};


// Enum WKND.EForceItemState
enum class EForceItemState : uint8_t
{
	Inert                          = 0,
	Vibrating                      = 1,
	StartFloating                  = 2,
	Floating                       = 3,
	ForceGrab                      = 4,
	Held                           = 5,
	UnderSocketInfluence           = 6,
	EForceItemState_MAX            = 7
};


// Enum WKND.EForceSocketCaptureConstraint
enum class EForceSocketCaptureConstraint : uint8_t
{
	ExactRotation                  = 0,
	AllowRotationAroundY           = 1,
	AllowRotationAroundZ           = 2,
	EForceSocketCaptureConstraint_MAX = 3
};


// Enum WKND.EForceSocketType
enum class EForceSocketType : uint8_t
{
	None                           = 0,
	PhysicsConstraint              = 1,
	LockedUntilReleased            = 2,
	EForceSocketType_MAX           = 3
};


// Enum WKND.EInteractionMethodEnum
enum class EInteractionMethodEnum : uint8_t
{
	IME_LaserPointer               = 0,
	IME_Hand                       = 1,
	IME_MAX                        = 2
};


// Enum WKND.EGhostingMode
enum class EGhostingMode : uint8_t
{
	Instant                        = 0,
	DistanceBased                  = 1,
	TimeBased                      = 2,
	EGhostingMode_MAX              = 3
};


// Enum WKND.EGhostingReason
enum class EGhostingReason : uint8_t
{
	Overlap                        = 0,
	Force                          = 1,
	Environment                    = 2,
	EGhostingReason_MAX            = 3
};


// Enum WKND.EAllowedRotationDirection
enum class EAllowedRotationDirection : uint8_t
{
	Any                            = 0,
	IncreasingOnly                 = 1,
	DecreasingOnly                 = 2,
	EAllowedRotationDirection_MAX  = 3
};


// Enum WKND.EClimbPrimaryToken
enum class EClimbPrimaryToken : uint8_t
{
	ClimbPrimaryToken_This         = 0,
	ClimbPrimaryToken_Other        = 1,
	ClimbPrimaryToken_None         = 2,
	ClimbPrimaryToken_MAX          = 3
};


// Enum WKND.EClimbState
enum class EClimbState : uint8_t
{
	ClimbState_Released            = 0,
	ClimbState_IsClimbingDelimeter = 1,
	ClimbState_Climbing            = 2,
	ClimbState_ShockWax            = 3,
	ClimbState_ShockWane           = 4,
	ClimbState_MAX                 = 5
};


// Enum WKND.EVRCameraTransitionType
enum class EVRCameraTransitionType : uint8_t
{
	Invalid                        = 0,
	CameraRotate                   = 1,
	CameraTeleport                 = 2,
	CameraGravity                  = 3,
	TOTAL                          = 4,
	EVRCameraTransitionType_MAX    = 5
};


// Enum WKND.EHotSpotType
enum class EHotSpotType : uint8_t
{
	Melee                          = 0,
	Ranged                         = 1,
	EHotSpotType_MAX               = 2
};


// Enum WKND.EHandInteractionType
enum class EHandInteractionType : uint8_t
{
	HandInteraction_Left           = 0,
	HandInteraction_Right          = 1,
	HandInteraction_Either         = 2,
	HandInteraction_None           = 3,
	HandInteraction_MAX            = 4
};


// Enum WKND.EBoxInteractionType
enum class EBoxInteractionType : uint8_t
{
	BoxInteraction_Hand            = 0,
	BoxInteraction_Head            = 1,
	BoxInteraction_Both            = 2,
	BoxInteraction_MAX             = 3
};


// Enum WKND.EHandSyncState
enum class EHandSyncState : uint8_t
{
	SyncState_Ready                = 0,
	SyncState_Syncing              = 1,
	SyncState_Interacting          = 2,
	SyncState_MAX                  = 3
};


// Enum WKND.ESyncDirection
enum class ESyncDirection : uint8_t
{
	SyncDirection_None             = 0,
	SyncDirection_To               = 1,
	SyncDirection_From             = 2,
	SyncDirection_Both             = 3,
	SyncDirection_Break            = 4,
	SyncDirection_MAX              = 5
};


// Enum WKND.ESyncInterpType
enum class ESyncInterpType : uint8_t
{
	Interp_Snap                    = 0,
	Interp_Linear                  = 1,
	Interp_Quadratic               = 2,
	Interp_Linear_TwoStep          = 3,
	Interp_MAX                     = 4
};


// Enum WKND.EInteractionType
enum class EInteractionType : uint8_t
{
	Interaction_None               = 0,
	Interaction_Once               = 1,
	Interaction_Continuous         = 2,
	Interaction_MAX                = 3
};


// Enum WKND.EWKNDLocomotionControlScheme
enum class EWKNDLocomotionControlScheme : uint8_t
{
	LocomoteWithUserSettings       = 0,
	OriginalWKNDScheme             = 1,
	OculusScheme                   = 2,
	NewWKNDScheme                  = 3,
	SlideLocomotion                = 4,
	ThrottleLocomotion             = 5,
	EWKNDLocomotionControlScheme_MAX = 6
};


// Enum WKND.ELookAtFadeType
enum class ELookAtFadeType : uint8_t
{
	Hermite                        = 0,
	Linear                         = 1,
	Leaky                          = 2,
	ELookAtFadeType_MAX            = 3
};


// Enum WKND.ELookAtTargetType
enum class ELookAtTargetType : uint8_t
{
	Static_Pos                     = 0,
	Dynamic_HMD_Pos                = 1,
	Dynamic_HMD_Relative_Pos       = 2,
	Dynamic_Actor_Pos              = 3,
	Dynamic_Actor_Relative_Pos     = 4,
	Dynamic_Skeletal_Bone_Pos      = 5,
	Dynamic_Skeletal_Bone_Relative_Pos = 6,
	ELookAtTargetType_MAX          = 7
};


// Enum WKND.EButtonState
enum class EButtonState : uint8_t
{
	VE_IDLE                        = 0,
	VE_PRESSED                     = 1,
	VE_MAX                         = 2
};


// Enum WKND.EMenuButtonState
enum class EMenuButtonState : uint8_t
{
	BSE_IDLE                       = 0,
	BSE_PRESSED                    = 1,
	BSE_MAX                        = 2
};


// Enum WKND.ETickState
enum class ETickState : uint8_t
{
	VE_UNTICKED                    = 0,
	VE_TICKED                      = 1,
	VE_MAX                         = 2
};


// Enum WKND.ENTHapticEventType
enum class ENTHapticEventType : uint8_t
{
	NTAxisEvent_Enter              = 0,
	NTAxisEvent_Exit               = 1,
	NTAxisEvent_Both               = 2,
	NTAxisEvent_MAX                = 3
};


// Enum WKND.ENTHapticAxisType
enum class ENTHapticAxisType : uint8_t
{
	NTAxisHapticAxisType_Increment = 0,
	NTAxisHapticAxisType_Stretch   = 1,
	NTAxisHapticAxisType_Delta     = 2,
	NTAxisHapticAxisType_Delta_Stretch = 3,
	NTAxisHapticAxisType_MAX       = 4
};


// Enum WKND.ENTHapticAxis
enum class ENTHapticAxis : uint8_t
{
	NTAxis_X                       = 0,
	NTAxis_Y                       = 1,
	NTAxis_Z                       = 2,
	NTAxis_Yaw                     = 3,
	NTAxis_Pitch                   = 4,
	NTAxis_Roll                    = 5,
	NTAxis_FreeMode                = 6,
	NTAxis_MAX                     = 7
};


// Enum WKND.ENTHapticBlendType
enum class ENTHapticBlendType : uint8_t
{
	HapticBlend_Accumulate         = 0,
	HapticBlend_Highest            = 1,
	HapticBlend_Mean               = 2,
	HapticBlend_MAX                = 3
};


// Enum WKND.EPlayerClimbState
enum class EPlayerClimbState : uint8_t
{
	CLIMB_NotClimbing              = 0,
	CLIMB_OneHanded                = 1,
	CLIMB_TwoHanded                = 2,
	CLIMB_TransitionOneHand        = 3,
	CLIMB_TransitionTwoHand        = 4,
	CLIMB_MAX                      = 5
};


// Enum WKND.EConditionComparisonType
enum class EConditionComparisonType : uint8_t
{
	Equal                          = 0,
	Different                      = 1,
	HigherThan                     = 2,
	HigherThanOrEqualTo            = 3,
	LowerThan                      = 4,
	LowerThanOrEqualTo             = 5,
	EConditionComparisonType_MAX   = 6
};


// Enum WKND.EWaveMedalConditionType
enum class EWaveMedalConditionType : uint8_t
{
	RemainingPlayerHealthLevels    = 0,
	PlayerHitReceived              = 1,
	WaveCompletionTime             = 2,
	RemoteDronesDestroyed          = 3,
	TrainingDroidsDestroyed        = 4,
	CorvaxDroidsDestroyed          = 5,
	TotalDestroyed                 = 6,
	EWaveMedalConditionType_MAX    = 7
};


// Enum WKND.EEnemyType
enum class EEnemyType : uint8_t
{
	Unknown                        = 0,
	RemoteDrone                    = 1,
	TrainingDroid                  = 2,
	CorvaxDroid                    = 3,
	AssassinDroid                  = 4,
	EEnemyType_MAX                 = 5
};


// Enum WKND.ERewardType
enum class ERewardType : uint8_t
{
	KyberCrystal                   = 0,
	LightsaberHilt                 = 1,
	Environment                    = 2,
	Tip                            = 3,
	Achievement                    = 4,
	ERewardType_MAX                = 5
};


// Enum WKND.EGrabResult
enum class EGrabResult : uint8_t
{
	GrabResult_Success             = 0,
	GrabResult_Failure             = 1,
	GrabResult_Failed_Already_Holding = 2,
	GrabResult_Failed_Invalid_Pickup = 3,
	GrabResult_Failed_Pickup_Refused = 4,
	GrabResult_MAX                 = 5
};


// Enum WKND.ECombatStageStatus
enum class ECombatStageStatus : uint8_t
{
	Invalid                        = 0,
	Ready                          = 1,
	Active                         = 2,
	ECombatStageStatus_MAX         = 3
};


// Enum WKND.ECombatStage_Duel_Reaction
enum class ECombatStage_Duel_Reaction : uint8_t
{
	NoReaction                     = 0,
	Taunt                          = 1,
	Recoil                         = 2,
	ECombatStage_Duel_MAX          = 3
};


// Enum WKND.EParryMode
enum class EParryMode : uint8_t
{
	NotParriable                   = 0,
	OnlyHeavyAttacksParriable      = 1,
	AllAttacksParriable            = 2,
	EParryMode_MAX                 = 3
};


// Enum WKND.ECombatComboWeight
enum class ECombatComboWeight : uint8_t
{
	Light                          = 0,
	Heavy                          = 1,
	Clash                          = 2,
	Undefined                      = 3,
	ECombatComboWeight_MAX         = 4
};


// Enum WKND.EGripAdjustType
enum class EGripAdjustType : uint8_t
{
	FullFreedom                    = 0,
	Axis_X                         = 1,
	Axis_Y                         = 2,
	Axis_Z                         = 3,
	EGripAdjustType_MAX            = 4
};


// Enum WKND.EGrabHand
enum class EGrabHand : uint8_t
{
	GrabHand_Left                  = 0,
	GrabHand_Right                 = 1,
	GrabHand_Buddy                 = 2,
	GrabHand_Any                   = 3,
	GrabHand_MAX                   = 4
};


// Enum WKND.EGrabType
enum class EGrabType : uint8_t
{
	GrabType_Pickup                = 0,
	GrabType_Climb                 = 1,
	GrabType_Max                   = 2
};


// Enum WKND.ESearchType
enum class ESearchType : uint8_t
{
	Regular                        = 0,
	KeepLatest                     = 1,
	Disabled                       = 2,
	ButtonsOnly                    = 3,
	InteractionsOnly               = 4,
	ESearchType_MAX                = 5
};


// Enum WKND.EHandOrientationAxis
enum class EHandOrientationAxis : uint8_t
{
	PositiveX                      = 0,
	PositiveY                      = 1,
	PositiveZ                      = 2,
	NegativeX                      = 3,
	NegativeY                      = 4,
	NegativeZ                      = 5,
	EHandOrientationAxis_MAX       = 6
};


// Enum WKND.EHandEnvironmentInteractionMode
enum class EHandEnvironmentInteractionMode : uint8_t
{
	IgnoreWhenEmptyHanded          = 0,
	GhostSimple                    = 1,
	GhostPrecise                   = 2,
	Block                          = 3,
	Ignore                         = 4,
	EHandEnvironmentInteractionMode_MAX = 5
};


// Enum WKND.EIntersectRepelantTarget
enum class EIntersectRepelantTarget : uint8_t
{
	IntersectRepelantTarget_Controller = 0,
	IntersectRepelantTarget_Socket = 1,
	IntersectRepelantTarget_MAX    = 2
};


// Enum WKND.EIntersectRepelantStart
enum class EIntersectRepelantStart : uint8_t
{
	IntersectRepelantType_Eye      = 0,
	IntersectRepelantType_Socket   = 1,
	IntersectRepelantType_MAX      = 2
};


// Enum WKND.ERPOCMappingType
enum class ERPOCMappingType : uint8_t
{
	Action                         = 0,
	Axis                           = 1,
	ERPOCMappingType_MAX           = 2
};


// Enum WKND.ESaberGameState
enum class ESaberGameState : uint8_t
{
	ESaberGameState_NoChange       = 0,
	SaberGameState_Off             = 1,
	SaberGameState_On              = 2,
	SaberState_Max                 = 3,
	ESaberGameState_MAX            = 4
};


// Enum WKND.ELightsaberState
enum class ELightsaberState : uint8_t
{
	SaberState_NoChange            = 0,
	SaberState_PowerOff            = 1,
	SaberState_PowerDown           = 2,
	SaberState_PowerDelimeter      = 3,
	SaberState_PowerUp             = 4,
	SaberState_PowerOn             = 5,
	SaberState_Max                 = 6
};


// Enum WKND.EPickupMode
enum class EPickupMode : uint8_t
{
	Sticky                         = 0,
	HoldToCarry                    = 1,
	EPickupMode_MAX                = 2
};


// Enum WKND.EDeviceType
enum class EDeviceType : uint8_t
{
	SaberPartType_CrossGuard       = 0,
	SaberPartType_Crystal          = 1,
	SaberPartType_Directors        = 2,
	SaberPartType_MAX              = 3
};


// Enum WKND.EStagedCombat_StageCompleteBehaviour
enum class EStagedCombat_StageCompleteBehaviour : uint8_t
{
	EndStage                       = 0,
	MaintainPosition               = 1,
	Idle                           = 2,
	EStagedCombat_MAX              = 3
};


// Enum WKND.ECombatStageMovementOptions
enum class ECombatStageMovementOptions : uint8_t
{
	Default                        = 0,
	FacePlayer                     = 1,
	IgnorePosition                 = 2,
	ECombatStageMovementOptions_MAX = 3
};


// Enum WKND.ECombatStage_Taunt
enum class ECombatStage_Taunt : uint8_t
{
	NoTaunt                        = 0,
	Short                          = 1,
	Long                           = 2,
	ECombatStage_MAX               = 3
};


// Enum WKND.ECombatStage_Duel_Phase
enum class ECombatStage_Duel_Phase : uint8_t
{
	Undefined                      = 0,
	Attack                         = 1,
	Block                          = 2,
	Damaged                        = 3,
	Evade                          = 4,
	Regroup                        = 5,
	Stunned                        = 6,
	SuperStunned                   = 7,
	Taunt                          = 8,
	Vulnerable                     = 9,
	ECombatStage_Duel_MAX          = 10
};


// Enum WKND.EDebugType
enum class EDebugType : uint8_t
{
	None                           = 0,
	SingleBone                     = 1,
	AllBones                       = 2,
	EDebugType_MAX                 = 3
};


// Enum WKND.ESkeletonOrientation
enum class ESkeletonOrientation : uint8_t
{
	UpForward                      = 0,
	UpLeft                         = 1,
	UpRight                        = 2,
	UpBackward                     = 3,
	DownForward                    = 4,
	DownLeft                       = 5,
	DownRight                      = 6,
	DownBackward                   = 7,
	ESkeletonOrientation_MAX       = 8
};


// Enum WKND.ESliceableBoneAxis
enum class ESliceableBoneAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NX                             = 3,
	NY                             = 4,
	NZ                             = 5,
	TOTAL                          = 6,
	ESliceableBoneAxis_MAX         = 7
};


// Enum WKND.ESplineFlightProgress
enum class ESplineFlightProgress : uint8_t
{
	Perching                       = 0,
	FlyingToLoop                   = 1,
	Looping                        = 2,
	FlyingToAttack                 = 3,
	Attacking                      = 4,
	NoChange                       = 5,
	ESplineFlightProgress_MAX      = 6
};


// Enum WKND.EVaderCell_State
enum class EVaderCell_State : uint8_t
{
	None                           = 0,
	StartSequence                  = 1,
	EnterCell                      = 2,
	InCell_Idle                    = 3,
	InCell_Turn                    = 4,
	InCell_Step                    = 5,
	ExitCell                       = 6,
	EVaderCell_MAX                 = 7
};


// Enum WKND.ETrackedBoneParent
enum class ETrackedBoneParent : uint8_t
{
	DirectParent                   = 0,
	World                          = 1,
	UseParentBoneName              = 2,
	ETrackedBoneParent_MAX         = 3
};


// Enum WKND.ECheckpointTeleporterState
enum class ECheckpointTeleporterState : uint8_t
{
	Idle                           = 0,
	InvokedTeleport                = 1,
	WaitingForLevelLoad            = 2,
	WaitingForLevelResponse        = 3,
	WaitingForTextureStreaming     = 4,
	ECheckpointTeleporterState_MAX = 5
};


// Enum WKND.ETutorialStage
enum class ETutorialStage : uint8_t
{
	ETTS_StepByStep                = 0,
	ETTS_WholeFlow                 = 1,
	ETTS_MAX                       = 2
};


// Enum WKND.ETutorialButton
enum class ETutorialButton : uint8_t
{
	ETB_None                       = 0,
	ETB_Casing                     = 1,
	ETB_Grip                       = 2,
	ETB_Trigger                    = 3,
	ETB_Face1                      = 4,
	ETB_Face2                      = 5,
	ETB_Home                       = 6,
	ETB_Thumbstick                 = 7,
	ETB_Thumbstick_ArrowLeft       = 8,
	ETB_Thumbstick_ArrowRight      = 9,
	ETB_Thumbstick_ArrowUp         = 10,
	ETB_Thumbstick_ArrowDown       = 11,
	ETB_MAX                        = 12
};


// Enum WKND.EWKNDEnemyRoutePlanner_PathSegmentBehaviour
enum class EWKNDEnemyRoutePlanner_PathSegmentBehaviour : uint8_t
{
	Default                        = 0,
	Defensive                      = 1,
	EWKNDEnemyRoutePlanner_MAX     = 2
};


// Enum WKND.EWKNDEnemyRoutePlanner_PathSegmentType
enum class EWKNDEnemyRoutePlanner_PathSegmentType : uint8_t
{
	Straight                       = 0,
	Circle                         = 1,
	Spiral                         = 2,
	Spin                           = 3,
	EWKNDEnemyRoutePlanner_MAX     = 4
};


// Enum WKND.ETeleportUIState
enum class ETeleportUIState : uint8_t
{
	Inactive                       = 0,
	Disabled                       = 1,
	Incomplete                     = 2,
	Invalid                        = 3,
	Valid                          = 4,
	SnapPoint                      = 5,
	Story                          = 6,
	ETeleportUIState_MAX           = 7
};


// Enum WKND.EMovementContext
enum class EMovementContext : uint8_t
{
	None                           = 0,
	Creep                          = 1,
	Walk                           = 2,
	Run                            = 3,
	EMovementContext_MAX           = 4
};


// Enum WKND.EGraphicsSetting
enum class EGraphicsSetting : uint8_t
{
	GSE_Minimum                    = 0,
	GSE_Recommended                = 1,
	GSE_MAX                        = 2
};


// Enum WKND.ESoundChannel
enum class ESoundChannel : uint8_t
{
	ESC_Master                     = 0,
	ESC_Voice                      = 1,
	ESC_Music                      = 2,
	ESC_SFX                        = 3,
	ESC_MAX                        = 4
};


// Enum WKND.EComfortDamageIndicatorEnum
enum class EComfortDamageIndicatorEnum : uint8_t
{
	CDIE_Reduced                   = 0,
	CDIE_Standard                  = 1,
	CDIE_MAX                       = 2
};


// Enum WKND.EVRInstantSnapTurns
enum class EVRInstantSnapTurns : uint8_t
{
	SnapTurns_Instant              = 0,
	SnapTurns_Lerp                 = 1,
	SnapTurns_MAX                  = 2
};


// Enum WKND.EVRCameraShakeEnum
enum class EVRCameraShakeEnum : uint8_t
{
	CameraShake_Prevented          = 0,
	CameraShake_Allowed            = 1,
	CameraShake_MAX                = 2
};


// Enum WKND.ESubtitlesEnum
enum class ESubtitlesEnum : uint8_t
{
	SubtitlesE_On                  = 0,
	SubtitlesE_Off                 = 1,
	SubtitlesE_MAX                 = 2
};


// Enum WKND.E360CombatEnum
enum class E360CombatEnum : uint8_t
{
	E360CE_On                      = 0,
	E360CE_Off                     = 1,
	E360CE_MAX                     = 2
};


// Enum WKND.EVisualCombatAssistEnum
enum class EVisualCombatAssistEnum : uint8_t
{
	VCAE_On                        = 0,
	VCAE_Off                       = 1,
	VCAE_MAX                       = 2
};


// Enum WKND.EVRModeEnum
enum class EVRModeEnum : uint8_t
{
	VME_Seated                     = 0,
	VME_Standing                   = 1,
	VME_MAX                        = 2
};


// Enum WKND.ELocomotionModeEnum
enum class ELocomotionModeEnum : uint8_t
{
	LME_Teleport                   = 0,
	LME_Throttle                   = 1,
	LME_MAX                        = 2
};


// Enum WKND.EComfortLevelEnum
enum class EComfortLevelEnum : uint8_t
{
	CLE_Comfortable                = 0,
	CLE_Standard                   = 1,
	CLE_Custom                     = 2,
	CLE_MAX                        = 3
};


// Enum WKND.EWKNDHands
enum class EWKNDHands : uint8_t
{
	Hands_Left                     = 0,
	Hands_Right                    = 1,
	Hands_Both                     = 2,
	Hands_MAX                      = 3
};


// Enum WKND.EDisarmType
enum class EDisarmType : uint8_t
{
	DisarmType_Left                = 0,
	DisarmType_Right               = 1,
	DisarmType_Both                = 2,
	DisarmType_MAX                 = 3
};


// Enum WKND.EHandPosition
enum class EHandPosition : uint8_t
{
	MainRight                      = 0,
	MainLeft                       = 1,
	OffRight                       = 2,
	OffLeft                        = 3,
	None                           = 4,
	EHandPosition_MAX              = 5
};


// Enum WKND.EHoldType
enum class EHoldType : uint8_t
{
	Default                        = 0,
	SimpleGun                      = 1,
	EHoldType_MAX                  = 2
};


// Enum WKND.EWeaponType
enum class EWeaponType : uint8_t
{
	Melee                          = 0,
	Ranged                         = 1,
	Throwing                       = 2,
	EWeaponType_MAX                = 3
};


// Enum WKND.EQueryResult
enum class EQueryResult : uint8_t
{
	EQR_Failed                     = 0,
	EQR_Success                    = 1,
	EQR_MAX                        = 2
};


// Enum WKND.EPlayerHandImpact
enum class EPlayerHandImpact : uint8_t
{
	EPHI_Hand                      = 0,
	EPHI_Saber                     = 1,
	EPHI_Tool                      = 2,
	EPHI_Other                     = 3,
	EPHI_MAX                       = 4
};


// Enum WKND.EGrabbableCategory
enum class EGrabbableCategory : uint8_t
{
	EGC_None                       = 0,
	EGC_Saber                      = 1,
	EGC_Chalice                    = 2,
	EGC_MAX                        = 3
};


// Enum WKND.EGrabbingState
enum class EGrabbingState : uint8_t
{
	EGS_EmptyHanded                = 0,
	EGS_PickingUp                  = 1,
	EGS_Holding                    = 2,
	EGS_Recovering                 = 3,
	EGS_MAX                        = 4
};


// Enum WKND.EActorSide
enum class EActorSide : uint8_t
{
	EAS_Random                     = 0,
	EAS_Left                       = 1,
	EAS_Right                      = 2,
	EAS_MAX                        = 3
};


// Enum WKND.EShotSpecifier
enum class EShotSpecifier : uint8_t
{
	ESS_ShootNormal                = 0,
	ESS_ShootInstant               = 1,
	ESS_MAX                        = 2
};


// Enum WKND.EWKNDGrabType
enum class EWKNDGrabType : uint8_t
{
	Grip                           = 0,
	Pinch                          = 1,
	Both                           = 2,
	EWKNDGrabType_MAX              = 3
};


// Enum WKND.EHandAttachState
enum class EHandAttachState : uint8_t
{
	EHAS_NotAttached               = 0,
	EHAS_Controller                = 1,
	EHAS_HeldObject                = 2,
	EHAS_MAX                       = 3
};


// Enum WKND.EHapticType
enum class EHapticType : uint8_t
{
	EShort                         = 0,
	ELong                          = 1,
	ECrescendo                     = 2,
	EDiminishing                   = 3,
	EPeak                          = 4,
	ERhythmic                      = 5,
	ESubtle                        = 6,
	EHapticType_MAX                = 7
};


// Enum WKND.EGripState
enum class EGripState : uint8_t
{
	Open                           = 0,
	CanGrab                        = 1,
	CanRelease                     = 2,
	Grab                           = 3,
	TwoHandGrab                    = 4,
	Squeeze                        = 5,
	Backhand                       = 6,
	EGripState_MAX                 = 7
};


// Enum WKND.EControllerState
enum class EControllerState : uint8_t
{
	ECS_EmptyHanded                = 0,
	ECS_Interacting                = 1,
	ECS_Climbing                   = 2,
	ECS_Recovering                 = 3,
	ECS_ForceGrabbbing             = 4,
	ECS_HoldingDelimiter           = 5,
	ECS_HoldingAsPrimaryHand       = 6,
	ECS_HoldingAsSecondaryHand     = 7,
	ECS_MAX                        = 8
};


// Enum WKND.ECameraMobility
enum class ECameraMobility : uint8_t
{
	Mobile                         = 0,
	FullyFrozen                    = 1,
	RecenterOnRotate               = 2,
	ConstrainedToRadius            = 3,
	ECameraMobility_MAX            = 4
};


// Enum WKND.EControllerType
enum class EControllerType : uint8_t
{
	Oculus                         = 0,
	Vive                           = 1,
	XBox                           = 2,
	SteamPad                       = 3,
	PS4Move                        = 4,
	PS4GamePad                     = 5,
	Unknown                        = 6,
	TOTAL                          = 7,
	EControllerType_MAX            = 8
};


// Enum WKND.EAISquadAction
enum class EAISquadAction : uint8_t
{
	SquadOpened                    = 0,
	SquadAlreadyOpen               = 1,
	EmptySquadClosed               = 2,
	ActiveSquadClosed              = 3,
	SquadNotFound                  = 4,
	EAISquadAction_MAX             = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WKND.PickupData
// 0x0028
struct FPickupData
{
	EGrabHand                                          Hand;                                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class USceneComponent*                             AttachTo;                                                 // 0x0008(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               RangeLimitedGrab;                                         // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapToHand;                                               // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              maximumGrabRange;                                         // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReverseGrip;                                              // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Ranged;                                                   // 0x0021(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Swap;                                                     // 0x0022(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x0023(0x0005) MISSED OFFSET
};

// ScriptStruct WKND.MovementParams
// 0x0010
struct FMovementParams
{
	float                                              MaxVelocity;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAcceleration;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDeceleration;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AcceptanceRadius;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.AutomatedPerformanceCaptureLocation
// 0x0058
struct FAutomatedPerformanceCaptureLocation
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WKND.AutomatedPerformanceCaptureLocation.TargetPoint
	class UWKNDProgressionCheckpointData*              CheckpointData;                                           // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     LocationNameOverride;                                     // 0x0030(0x0010) (Edit, ZeroConstructor)
	bool                                               bForceIgnoreZoe;                                          // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLeavePlayerAndCameraUnchangedAfterTeleport;              // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	TArray<class UAutomatedPerformanceCaptureUserCommand*> UserCommands;                                             // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct WKND.BuddyIdleAnim
// 0x0020
struct FBuddyIdleAnim
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAnimMontage*                                Montage;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Dialogue;                                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               ReplayAllowed;                                            // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               OverrideCooldownDuration;                                 // 0x0019(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              CooldownDuration;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.MeshWithSocket
// 0x0010
struct FMeshWithSocket
{
	class USceneComponent*                             Mesh;                                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct WKND.PressedButtonComponent
// 0x0018
struct FPressedButtonComponent
{
	class UMenuButtonComponent*                        PressedButtonComponent;                                   // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFrontendInteractionController*              Controller;                                               // 0x0008(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPlayAudioOnChange;                                       // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIssuedFromConsole;                                       // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
};

// ScriptStruct WKND.ChangedMenuComponent
// 0x0010
struct FChangedMenuComponent
{
	class UMenuBaseComponent*                          ChangedComponent;                                         // 0x0000(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPlayAudioOnChange;                                       // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIssuedFromConsole;                                       // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x000A(0x0006) MISSED OFFSET
};

// ScriptStruct WKND.AttachedMenuElement
// 0x0010
struct FAttachedMenuElement
{
	class UMenuBaseComponent*                          MenuComponent;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                HierarchyNumber;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.OneToOnePair
// 0x0008
struct FOneToOnePair
{
	float                                              OneToOneness;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EffectsNegative;                                          // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct WKND.KFCircleCombatPoint
// 0x0048
struct FKFCircleCombatPoint
{
	int                                                ID;                                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0004(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WKND.KFCircleCombatPoint.TargetPoint
	float                                              Angle;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RangedDistanceOffset;                                     // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RangedHeightOffset;                                       // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENPCCombatType                                     NPCCombatType;                                            // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UObject>                      CurrentOwner;                                             // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.WKNDDamageInfo
// 0x0038
struct FWKNDDamageInfo
{
	EDamageType                                        Type;                                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDamageStrength                                    Strength;                                                 // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     HitLocation;                                              // 0x0004(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     HitDirection;                                             // 0x0010(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UStaticMeshComponent*                        HitArmorPiece;                                            // 0x0020(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bTwoHandedHit;                                            // 0x0028(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	class AActor*                                      HitActor;                                                 // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.CorvaxianBoxPiston
// 0x0020
struct FCorvaxianBoxPiston
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	ECorvaxianBoxAnimationMode                         Mode;                                                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              CurrentProgress;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartingLocation;                                         // 0x0010(0x000C) (IsPlainOldData)
	float                                              SpeedMultiplier;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.TrackingData
// 0x0030
struct FTrackingData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct WKND.MotionMonitorData
// 0x0020
struct FMotionMonitorData
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct WKND.ForceItemCandidate
// 0x0028
struct FForceItemCandidate
{
	bool                                               IsValid;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UForceItemComponentBase*                     ForceItem;                                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EControllerHand                                    Hand;                                                     // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              MinControllerDistanceFromHeadset;                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxControllerDistanceFromHeadset;                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Score;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DurationActive;                                           // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.GhostMaterialStruct
// 0x0010
struct FGhostMaterialStruct
{
	class UMaterialInterface*                          GhostMaterial;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaterialSlot;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.GrabbableCrankingPoint
// 0x00B0
struct FGrabbableCrankingPoint
{
	struct FName                                       EmitterTag;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ConstrainRotationalAngle;                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector2D                                   MinMaxAngleConstraint;                                    // 0x0014(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneRotationalAxis;                                       // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAllowedRotationDirection                          AllowedRotationDirection;                                 // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               FreezeHandRotationDuringCrank;                            // 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x001F(0x0001) MISSED OFFSET
	class USceneComponent*                             Emitter;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    InteractionHandler;                                       // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               IsGrabbed;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsLockedAtCurrentRotation;                                // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FQuat                                       BoneRotationAtBeginPlay;                                  // 0x0040(0x0010) (IsPlainOldData)
	struct FQuat                                       StartingBoneRotationOnGrab;                               // 0x0050(0x0010) (IsPlainOldData)
	struct FQuat                                       StartingEmitterRotationOnGrab;                            // 0x0060(0x0010) (IsPlainOldData)
	struct FVector                                     BoneRotationalAxisVector;                                 // 0x0070(0x000C) (IsPlainOldData)
	struct FVector                                     BoneLocation;                                             // 0x007C(0x000C) (IsPlainOldData)
	float                                              StartingAngle;                                            // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartingHandLocation;                                     // 0x008C(0x000C) (IsPlainOldData)
	struct FVector                                     StartingHandRotationalCenter;                             // 0x0098(0x000C) (IsPlainOldData)
	float                                              LastFrameOffsetAngle;                                     // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AccumulatedCrankAngle;                                    // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.GrabbableDeformerPoint
// 0x0130
struct FGrabbableDeformerPoint
{
	struct FName                                       EmitterTag;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MorphTargetName;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          ControllerTranslationToEmitterTranslation;                // 0x0010(0x0078) (Edit, BlueprintVisible)
	struct FRuntimeFloatCurve                          EmitterTranslationToDeformityCurve;                       // 0x0088(0x0078) (Edit, BlueprintVisible)
	float                                              BreakAwayDistance;                                        // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
	class USceneComponent*                             Emitter;                                                  // 0x0108(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x0110(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CurrentEmitterDistance;                                   // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentDeformationAmount;                                 // 0x011C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
};

// ScriptStruct WKND.GrabbableMoverPoint
// 0x0068
struct FGrabbableMoverPoint
{
	struct FName                                       EmitterTag;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneAxis;                                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector2D                                   MinMaxTranslationConstraint;                              // 0x0014(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class USceneComponent*                             Emitter;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    InteractionHandler;                                       // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               IsGrabbed;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsLockedAtCurrentLocation;                                // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	struct FVector                                     StartingEmitterLocation;                                  // 0x003C(0x000C) (IsPlainOldData)
	struct FVector                                     StartingControllerLocation;                               // 0x0048(0x000C) (IsPlainOldData)
	struct FVector                                     StartingBoneLocation;                                     // 0x0054(0x000C) (IsPlainOldData)
	float                                              StartingBoneDistance;                                     // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.GrabbableSpinnerPoint
// 0x00D8
struct FGrabbableSpinnerPoint
{
	struct FName                                       EmitterTag;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 RotationalAxis;                                           // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              RotationalFriction;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumValidRotationalStops;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringStrengthUnheld;                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxVelocityToStopAtStop;                                  // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RotationLocked;                                           // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FRuntimeFloatCurve                          RotationDeltaByAngle;                                     // 0x0028(0x0078) (Edit, BlueprintVisible)
	float                                              RotationDeltaByAngleMultiplier;                           // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	class USceneComponent*                             Emitter;                                                  // 0x00A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    InteractionHandler;                                       // 0x00B0(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               IsGrabbed;                                                // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              Radius;                                                   // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AngularMomentum;                                          // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RawBoneRotation;                                          // 0x00CC(0x000C) (IsPlainOldData)
};

// ScriptStruct WKND.GrabbableTouchPoint
// 0x0030
struct FGrabbableTouchPoint
{
	struct FName                                       EmitterTag;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Emitter;                                                  // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TScriptInterface<class UXLABInteractionHandler>    InteractionHandler;                                       // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               IsGrabbed;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              TimeGrabbed;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               CompletedGrab;                                            // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct WKND.GrabbableTwisterPoint
// 0x0120
struct FGrabbableTwisterPoint
{
	struct FName                                       EmitterTag;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          TwistDeltaByAngle;                                        // 0x0010(0x0078) (Edit, BlueprintVisible)
	TArray<float>                                      SnapAngles;                                               // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               TwisterPointEnabled;                                      // 0x0098(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ConstrainRotationAngle;                                   // 0x0099(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	struct FVector2D                                   MinMaxAngleConstraint;                                    // 0x009C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               SnapToClosestSnapAngleWhenReleased;                       // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	class USceneComponent*                             Emitter;                                                  // 0x00A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UArrowComponent*                             Arrow;                                                    // 0x00B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneRotationalAxis;                                       // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 HandRotationalAxis;                                       // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReverseRotationalDirection;                               // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TwistDeltaByAngleCurveRepeats;                            // 0x00BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartingNormalizedAngleBetweenLowAndHighWaterMarks;       // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngleDifferenceLowAndHighWaterMarks;                      // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentHighWaterAngle;                                    // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentLowWaterAngle;                                     // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RunningBoneAngle;                                         // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InitializedLowAndHighWaterMarks;                          // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET
	TScriptInterface<class UXLABInteractionHandler>    InteractionHandler;                                       // 0x00D8(0x0010) (ZeroConstructor, IsPlainOldData)
	bool                                               IsGrabbed;                                                // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00E9(0x0003) MISSED OFFSET
	float                                              StartingTwistOnGrab;                                      // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       StartingBoneRotationOnGrab;                               // 0x00F0(0x0010) (IsPlainOldData)
	bool                                               BoneNameOverriden;                                        // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	struct FName                                       BoneNameOverride;                                         // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsLockedAtCurrentRotation;                                // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               FirstFrameAfterGrab;                                      // 0x0111(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               CrossedConstraintBoundry;                                 // 0x0112(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0113(0x0001) MISSED OFFSET
	float                                              ConstraintBoundry;                                        // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HaveBoneAngleLastFrame;                                   // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BoneAngleLastFrame;                                       // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.VRTransitionAsset
// 0x0028
struct FVRTransitionAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty WKND.VRTransitionAsset.AssetRef
};

// ScriptStruct WKND.LightsaberCuttingPlane
// 0x0018
struct FLightsaberCuttingPlane
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
	struct FVector                                     Normal;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, IsPlainOldData)
};

// ScriptStruct WKND.ListOfEmitters
// 0x0010
struct FListOfEmitters
{
	TArray<struct FName>                               Emitters;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct WKND.ListOfMeshes
// 0x0010
struct FListOfMeshes
{
	TArray<class UStaticMesh*>                         Meshes;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct WKND.WeaponBladeCollisionPoint
// 0x00C8
struct FWeaponBladeCollisionPoint
{
	class AActor*                                      HitActor;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         HitComponent;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0018(0x000C) (IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0024(0x000C) (IsPlainOldData)
	float                                              Time;                                                     // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DistanceFromTip;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
	bool                                               bHasMatchingPoint;                                        // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FHitResult                                  HitResult;                                                // 0x0040(0x0088) (IsPlainOldData)
};

// ScriptStruct WKND.LookAtTarget
// 0x0028
struct FLookAtTarget
{
	TEnumAsByte<ELookAtTargetType>                     LookAtTargetType;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     LookAtTargetPos;                                          // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LookAtTargetActor;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USkeletalMeshComponent>       LookAtTargetSkeleton;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       LookAtTargetBone;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.MeshMaterialData
// 0x0010
struct FMeshMaterialData
{
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct WKND.ContainerSlot
// 0x0040
struct FContainerSlot
{
	class AMenuElement*                                SlotElement;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  SlotTransform;                                            // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct WKND.TabSlot
// 0x0010
struct FTabSlot
{
	class AMenuBaseButton*                             TabButton;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AMenuContainer*                              TabContainer;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.NTCharacterHapticSet
// 0x0028 (0x0030 - 0x0008)
struct FNTCharacterHapticSet : public FTableRowBase
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	class USoundCue*                                   HitSound;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   FricSound;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  HitHapticEvent;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UHapticFeedbackEffect_Base*                  FricHapticEvent;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.NTHapticData
// 0x0018
struct FNTHapticData
{
	class UHapticFeedbackEffect_Base*                  HapticCurve;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ENTHapticHands                                     HapticHands;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              HapticScale;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HapticLoop;                                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct WKND.NTAxisHapticEvent
// 0x0028
struct FNTAxisHapticEvent
{
	struct FNTHapticData                               HapticData;                                               // 0x0000(0x0018) (Edit, BlueprintVisible)
	ENTHapticEventType                                 AxisEventType;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              LowerBound;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpperBound;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.NTAxisHaptics
// 0x0060
struct FNTAxisHaptics
{
	ENTHapticAxisType                                  AxisHapticType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ENTHapticAxis                                      AxisHaptic;                                               // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class USceneComponent*                             SceneNode;                                                // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Increment;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDelta;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StretchRange;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FNTAxisHapticEvent>                  HapticAxisEvents;                                         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
};

// ScriptStruct WKND.NTHapticValueByHand
// 0x000C
struct FNTHapticValueByHand
{
	ENTHapticHands                                     hands;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Frequency;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Amplitude;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.NTHapticSequenceEvent
// 0x0028
struct FNTHapticSequenceEvent
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              CurrentTime;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	ENTHapticHands                                     hands;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	class UHapticFeedbackEffect_Base*                  Effect;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Loop;                                                     // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct WKND.NTAdaptiveLowPassFilterParams
// 0x000C
struct FNTAdaptiveLowPassFilterParams
{
	float                                              FCMin;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Beta;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FDXMin;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.SquadAttackInfo
// 0x0020
struct FSquadAttackInfo
{
	class ASquadAttack*                                Attack;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeightMultiplier;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeightDegradation;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              WeightRegeneration;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinimumWeight;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct WKND.WKNDPhysicsInteractionData
// 0x00F0
struct FWKNDPhysicsInteractionData
{
	struct FName                                       ButtonName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     ShapeComponentName;                                       // 0x0010(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              Min;                                                      // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max;                                                      // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Step;                                                     // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PressedEventThreshold;                                    // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityEventThreshold;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpringBackSpeed;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     CollisionChannel;                                         // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FString                                     SkinnedMeshComponentName;                                 // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       SocketName;                                               // 0x0050(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UShapeComponent*                             ShapeComponent;                                           // 0x0058(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class USkinnedMeshComponent*                       SkinnedMeshComponent;                                     // 0x0060(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x88];                                      // 0x0068(0x0088) MISSED OFFSET
};

// ScriptStruct WKND.TrackedBoneData
// 0x0050
struct FTrackedBoneData
{
	ETrackedBoneParent                                 TrackedBoneParentType;                                    // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       ParentBoneName;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VelocityThresholdOverride;                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0014(0x003C) MISSED OFFSET
};

// ScriptStruct WKND.TelemetryEvent
// 0x0018
struct FTelemetryEvent
{
	ETelemetryEventType                                EventType;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class AActor*                                      RelevantActor;                                            // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RelevantName;                                             // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.WaveMedalCondition
// 0x0008
struct FWaveMedalCondition
{
	EWaveMedalConditionType                            ConditionType;                                            // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EConditionComparisonType                           ComparisonType;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Value;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.RatingData
// 0x0030 (0x0038 - 0x0008)
struct FRatingData : public FTableRowBase
{
	TArray<struct FWaveMedalCondition>                 BronzeMedalConditions;                                    // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FWaveMedalCondition>                 SilverMedalConditions;                                    // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FWaveMedalCondition>                 GoldMedalConditions;                                      // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct WKND.MedalCollection
// 0x000C
struct FMedalCollection
{
	int                                                NumBronzeMedals;                                          // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSilverMedals;                                          // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumGoldMedals;                                            // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.RewardData
// 0x0068
struct FRewardData
{
	struct FName                                       RewardName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERewardType                                        RewardType;                                               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                NumMedalsRequired;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       WaveCompletionRequired;                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWKNDProgressionCheckpointData*              CheckpointRequired;                                       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDataTableRowHandle                         RewardDetails;                                            // 0x0020(0x0010) (Edit, BlueprintVisible)
	struct FString                                     RewardDisplayName;                                        // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RewardDescription;                                        // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     RewardUnlockHint;                                         // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture*                                    RewardIcon;                                               // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.HotspotZone
// 0x0018
struct FHotspotZone
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct WKND.AIPositioningAIData
// 0x0024
struct FAIPositioningAIData
{
	struct FVector                                     StartingLocation;                                         // 0x0000(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     AssignedLocation;                                         // 0x000C(0x000C) (Transient, IsPlainOldData)
	int                                                AssignedHotPoint;                                         // 0x0018(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                assignedZoneID;                                           // 0x001C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bLocationAssigned;                                        // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct WKND.ClashData
// 0x0034
struct FClashData
{
	struct FVector                                     ClosestPoint;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MidPoint;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BladeDirection;                                           // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Distance;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.BladeData
// 0x0020
struct FBladeData
{
	bool                                               BladeOn;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     BladeBase;                                                // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BladeTip;                                                 // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               BladeOn_Lastframe;                                        // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct WKND.StagedCombatBlockSelectionData
// 0x0040 (0x0048 - 0x0008)
struct FStagedCombatBlockSelectionData : public FTableRowBase
{
	struct FName                                       Label;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartAngle;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndAngle;                                                 // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MidpointAngle;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       BlendGroup;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PrimaryPose;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FVector                                     GuardLocation;                                            // 0x002C(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     TipLocation;                                              // 0x0038(0x000C) (Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.BlockSwitchData
// 0x0018
struct FBlockSwitchData
{
	struct FName                                       FromPose;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ToPose;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PoseTransitionTime;                                       // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.StagedCombatEvadeSelectionData
// 0x0028 (0x0030 - 0x0008)
struct FStagedCombatEvadeSelectionData : public FTableRowBase
{
	class UAnimSequence*                               Sequence;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartTime;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x001C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FVector                                     DeltaLocation;                                            // 0x0020(0x000C) (Transient, IsPlainOldData)
	float                                              DeltaYaw;                                                 // 0x002C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct WKND.StagedCombatParrySelectionData
// 0x0038 (0x0040 - 0x0008)
struct FStagedCombatParrySelectionData : public FTableRowBase
{
	class UAnimSequence*                               Sequence;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       StartPose;                                                // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       EndPose;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       ParryLabel;                                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartTime;                                                // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BreakOutTime;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumPlayRate;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaximumPlayRate;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClockwise;                                               // 0x003C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPose;                                                    // 0x003D(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x003E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRateLimits;                                           // 0x003F(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct WKND.FlinchAnims
// 0x0040
struct FFlinchAnims
{
	TArray<class UAnimMontage*>                        LeftAnticlockwiseAnim;                                    // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UAnimMontage*>                        LeftClockwiseAnim;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<class UAnimMontage*>                        RightAnticlockwiseAnim;                                   // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<class UAnimMontage*>                        RightClockwiseAnim;                                       // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct WKND.DamagedAnims
// 0x0040
struct FDamagedAnims
{
	TArray<class UAnimMontage*>                        LeftAnim;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UAnimMontage*>                        LeftTwoHandedAnim;                                        // 0x0010(0x0010) (Edit, ZeroConstructor)
	TArray<class UAnimMontage*>                        RightAnim;                                                // 0x0020(0x0010) (Edit, ZeroConstructor)
	TArray<class UAnimMontage*>                        RightTwoHandedAnim;                                       // 0x0030(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct WKND.DeathAnims
// 0x0020
struct FDeathAnims
{
	TArray<class UAnimMontage*>                        LeftAnim;                                                 // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<class UAnimMontage*>                        RightAnim;                                                // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct WKND.CombatStageConfig_Attack
// 0x0038
struct FCombatStageConfig_Attack
{
	class URPOCEnemyAttackComponent*                   EnemyAttackComponent;                                     // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URPOCEnemyComboStageSetData*                 OrderedCombosInStage;                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class URPOCEnemyComboStageSetData*                 RandomisedCombosInStage;                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CombatStartAnim;                                          // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CombatStopAnim;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState_Attack
// 0x0060
struct FCombatStageState_Attack
{
	class UAnimMontage*                                VulnerableAnim;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0008(0x0058) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageConfig_Block
// 0x0010
struct FCombatStageConfig_Block
{
	class ARPOCSaberManager*                           SaberManager;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState_Block
// 0x0050
struct FCombatStageState_Block
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageConfig_Defence
// 0x0038
struct FCombatStageConfig_Defence
{
	class ARPOCSaberManager*                           SaberManager;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0008(0x0030) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState_Defence
// 0x0030
struct FCombatStageState_Defence
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageConfig_Duel
// 0x00E8
struct FCombatStageConfig_Duel
{
	class ARPOCSaberManager*                           SaberManager;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      OwnedSaber;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      OpponentSaber;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class URPOCEnemyComboStageSetData*                 OrderedCombosInStage;                                     // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class URPOCEnemyComboStageSetData*                 RandomisedCombosInStage;                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnBlocked;                                       // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationOnNotBlocked;                                    // 0x0030(0x0010) (ZeroConstructor)
	TArray<class USoundBase*>                          DialogueOnNotBlocked;                                     // 0x0040(0x0010) (ZeroConstructor)
	class UAnimMontage*                                AnimationOnTakeDamageLeft;                                // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnTakeDamageRight;                               // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnTakeHeavyDamageLeft;                           // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnTakeHeavyDamageRight;                          // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnTakeFinalDamageLeft;                           // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnTakeFinalDamageRight;                          // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnStartReaction;                                 // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchLeft;                                    // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchRight;                                   // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StrikesPerCombo;                                          // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	TArray<int>                                        StrikeDamageReceived;                                     // 0x00A0(0x0010) (ZeroConstructor)
	int                                                FinalStrikeDamageReceived_2H_Bonus;                       // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x00B4(0x0034) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState_Duel
// 0x0038
struct FCombatStageState_Duel
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageConfig_Evade
// 0x0008
struct FCombatStageConfig_Evade
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState_Evade
// 0x0038
struct FCombatStageState_Evade
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageConfig_Exposition
// 0x0010
struct FCombatStageConfig_Exposition
{
	class UAnimMontage*                                Animation;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState_Exposition
// 0x0010
struct FCombatStageState_Exposition
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageConfig_Idle
// 0x0001
struct FCombatStageConfig_Idle
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState_Idle
// 0x0002
struct FCombatStageState_Idle
{
	unsigned char                                      UnknownData00[0x2];                                       // 0x0000(0x0002) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageConfig_Parry
// 0x0028
struct FCombatStageConfig_Parry
{
	class ARPOCSaberManager*                           SaberManager;                                             // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0008(0x0020) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState_Parry
// 0x0078
struct FCombatStageState_Parry
{
	unsigned char                                      UnknownData00[0x78];                                      // 0x0000(0x0078) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageConfig_Reaction
// 0x0098
struct FCombatStageConfig_Reaction
{
	class URPOCStrikePredictionComponent*              StrikePredictionComponent;                                // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimMontage*                                AnimationOnStartReaction;                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnComboLeft;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnComboRight;                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchLeft;                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchLeftArmoured;                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchRight;                                   // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchRightArmoured;                           // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StrikesPerCombo;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	TArray<int>                                        StrikeDamageReceived;                                     // 0x0048(0x0010) (ZeroConstructor)
	int                                                FinalStrikeDamageReceived_2H_Bonus;                       // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x005C(0x003C) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState_Reaction
// 0x0058
struct FCombatStageState_Reaction
{
	class UAnimMontage*                                DelayedReaction;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0008(0x0050) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageConfig_Throw
// 0x0018
struct FCombatStageConfig_Throw
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState_Throw
// 0x0014
struct FCombatStageState_Throw
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct WKND.ContestedClashParams
// 0x0014
struct FContestedClashParams
{
	float                                              CreepPercentage;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WobblePeriodMS;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WobbleAmountMS;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxFwdMovementMS;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxBckMovementMS;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.BlockBounceParams
// 0x0080
struct FBlockBounceParams
{
	float                                              ReboundTimeMS;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReboundMaxMovementMS;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRuntimeFloatCurve                          ReboundModeration;                                        // 0x0008(0x0078) (Edit)
};

// ScriptStruct WKND.SaberBlockingInfo
// 0x0018
struct FSaberBlockingInfo
{
	struct FVector                                     Guard;                                                    // 0x0000(0x000C) (IsPlainOldData)
	struct FVector                                     Tip;                                                      // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct WKND.SaberClashData
// 0x007C
struct FSaberClashData
{
	int                                                ID;                                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Clashing;                                                 // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FVector                                     ClashLocation;                                            // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     ClashNormal;                                              // 0x0014(0x000C) (IsPlainOldData)
	struct FVector                                     ClashLocation_Last;                                       // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TWeakObjectPtr<class ARPOCPickup_Lightsaber>       Saber1;                                                   // 0x002C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ARPOCPickup_Lightsaber>       Saber2;                                                   // 0x0034(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClashEffectsCooldown;                                     // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bParrying;                                                // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bParryClashing;                                           // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	struct FVector                                     ParryLocation;                                            // 0x0044(0x000C) (IsPlainOldData)
	struct FSaberBlockingInfo                          BlockingInfo;                                             // 0x0050(0x0018)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0068(0x0008) MISSED OFFSET
	float                                              ClashDistOnPlayerBlade;                                   // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0074(0x0008) MISSED OFFSET
};

// ScriptStruct WKND.RiceDetectedGesture
// 0x0018
struct FRiceDetectedGesture
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Probability;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.HandOrientationStrengthModifiers
// 0x0018
struct FHandOrientationStrengthModifiers
{
	float                                              Palm;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Backhand;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pointing;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ReversePointing;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Chop;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ThumbChop;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.HandMovementPositionalStrengthModifiers
// 0x0018
struct FHandMovementPositionalStrengthModifiers
{
	float                                              PushAway;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PullTowards;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SwipeAcross;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SwipeBack;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PushDown;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PushUp;                                                   // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.HandMovementDirectionalStrengthModifiers
// 0x0010
struct FHandMovementDirectionalStrengthModifiers
{
	float                                              Forwards;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Backwards;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Left;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.HandMeshOrientation
// 0x0003
struct FHandMeshOrientation
{
	EHandOrientationAxis                               PointingDirection;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EHandOrientationAxis                               ThumbDirection;                                           // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EHandOrientationAxis                               PalmDirection;                                            // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.GrabData
// 0x0038
struct FGrabData
{
	TScriptInterface<class URPOCCanGrabInterface>      GrabHand;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FPickupData                                 PickupData;                                               // 0x0010(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct WKND.SaberDragProperties
// 0x0008
struct FSaberDragProperties
{
	float                                              CurrentSaberWeight;                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LagAlpha;                                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.PickupStateData
// 0x0003
struct FPickupStateData
{
	bool                                               PickedUp;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TwoHanded;                                                // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Repositioning;                                            // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.SaberPathData
// 0x0160
struct FSaberPathData
{
	float                                              ClashHalfHeight;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FTransform                                  BladeHiltTransform;                                       // 0x0010(0x0030) (IsPlainOldData)
	struct FTransform                                  BladeHiltTransform_Last;                                  // 0x0040(0x0030) (IsPlainOldData)
	struct FTransform                                  BladeGuardTransform;                                      // 0x0070(0x0030) (IsPlainOldData)
	struct FTransform                                  BladeGuardTransform_Last;                                 // 0x00A0(0x0030) (IsPlainOldData)
	struct FTransform                                  BladeTipTransform;                                        // 0x00D0(0x0030) (IsPlainOldData)
	struct FTransform                                  BladeTipTransform_Last;                                   // 0x0100(0x0030) (IsPlainOldData)
	struct FVector                                     LocalBladeTip;                                            // 0x0130(0x000C) (IsPlainOldData)
	struct FVector                                     HiltLocalBladeTip;                                        // 0x013C(0x000C) (IsPlainOldData)
	float                                              BladeLength;                                              // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BlinkCooldown;                                            // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0154(0x000C) MISSED OFFSET
};

// ScriptStruct WKND.CompleteStrikeData
// 0x0150
struct FCompleteStrikeData
{
	int                                                StrikeId;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MapStart;                                                 // 0x0004(0x0008) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) MISSED OFFSET
	struct FVector2D                                   MapEnd;                                                   // 0x0014(0x0008) (BlueprintVisible, IsPlainOldData)
	float                                              StrikeStartTime;                                          // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeEndTime;                                            // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTwoHandedHold;                                           // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bVelocityValid;                                           // 0x0025(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDirectionValid;                                          // 0x0026(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStabbingMotion;                                          // 0x0027(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x128];                                     // 0x0028(0x0128) MISSED OFFSET
};

// ScriptStruct WKND.IncomingStrikeData
// 0x0280
struct FIncomingStrikeData
{
	bool                                               bOpponentSaberActive;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOuterCapsuleBreached;                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOuterStrikeAnticipated;                                  // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInnerStrikeAnticipated;                                  // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTorsoStrikeActive;                                       // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEvadeStrikeAnticipated;                                  // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEvade_Reworked_StrikeAnticipated;                        // 0x0006(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bParryStrikeAnticipated;                                  // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FCompleteStrikeData                         ActiveStrikeData;                                         // 0x0010(0x0150) (Edit, BlueprintVisible)
	float                                              OuterStrikeTime;                                          // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InnerStrikeTime;                                          // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EvadeStrikeTime;                                          // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikePhaseLocation;                                      // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StrikePhaseOrigin;                                        // 0x0170(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     StrikePhaseSample;                                        // 0x017C(0x000C) (Transient, IsPlainOldData)
	bool                                               bBlockPositionReached;                                    // 0x0188(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0189(0x0003) MISSED OFFSET
	struct FVector                                     BladeGuardLocation;                                       // 0x018C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BladeGuardVelocity;                                       // 0x0198(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BladeTipLocation;                                         // 0x01A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BladeTipVelocity;                                         // 0x01B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BladeMidPoint;                                            // 0x01BC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BladeMidDirection;                                        // 0x01C8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET
	struct FVector                                     TorsoStrikePoint;                                         // 0x01D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OuterStrikePoint;                                         // 0x01E4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OuterStrikeDirection;                                     // 0x01F0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EvadeStrikePoint;                                         // 0x01FC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EvadeStrikeDirection;                                     // 0x0208(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     FinalStrikePoint;                                         // 0x0214(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     FinalStrikeDirection;                                     // 0x0220(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bClashing;                                                // 0x022C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x022D(0x0003) MISSED OFFSET
	struct FVector                                     ClashPoint;                                               // 0x0230(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              BladeDistance;                                            // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BladeFraction;                                            // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OpponentBladeFraction;                                    // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWKNDDamageInfo                             DamageInfo;                                               // 0x0248(0x0038) (BlueprintVisible)
};

// ScriptStruct WKND.RPOCCombatStageSummary
// 0x0280
struct FRPOCCombatStageSummary
{
	unsigned char                                      UnknownData00[0x280];                                     // 0x0000(0x0280) MISSED OFFSET
};

// ScriptStruct WKND.StagedCombatStatistics
// 0x0024
struct FStagedCombatStatistics
{
	int                                                CombosStarted;                                            // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CombosBlocked;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CombosLanded;                                             // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CombosParried;                                            // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CombosCompleted;                                          // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageDealt;                                              // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StrikesBlocked;                                           // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StrikesLanded;                                            // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                StrikesIntended;                                          // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.StrikePredictionKinematicData
// 0x0040
struct FStrikePredictionKinematicData
{
	TArray<struct FVector>                             GuardPath;                                                // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             GuardVelocity;                                            // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             TipPath;                                                  // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FVector>                             TipVelocity;                                              // 0x0030(0x0010) (ZeroConstructor)
};

// ScriptStruct WKND.DroidBoneData
// 0x0028
struct FDroidBoneData
{
	ESliceableBoneAxis                                 AxisAlongBone;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       OverrideBone;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       ChildBone;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               MeshToSpawn;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UVIndex;                                                  // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideChild;                                           // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct WKND.SlicingPortRing
// 0x0028
struct FSlicingPortRing
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAxis>                                 BoneAxis;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              Rotations;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayBeforeRotate;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationDuration;                                         // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0018(0x0010) MISSED OFFSET
};

// ScriptStruct WKND.AttackSquadEnemyRequest
// 0x0018
struct FAttackSquadEnemyRequest
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct WKND.PendingShot
// 0x0028
struct FPendingShot
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct WKND.Checkpoint
// 0x0018
struct FCheckpoint
{
	class UWKNDProgressionCheckpointData*              CheckpointData;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ATargetPoint*                                PlayerTargetPoint;                                        // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class ATargetPoint*                                ZoeTargetPoint;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.StrikeFrameData
// 0x0110
struct FStrikeFrameData
{
	unsigned char                                      UnknownData00[0x110];                                     // 0x0000(0x0110) MISSED OFFSET
};

// ScriptStruct WKND.WKNDAttackDamage
// 0x000C
struct FWKNDAttackDamage
{
	int                                                WeakDamage;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                StandardDamage;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CriticalDamage;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.DialogueRequest
// 0x0038
struct FDialogueRequest
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UAkAudioEvent*                               AkEvent;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SilentCueTime;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostPlayDelay;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowConcurrentPlaying;                                   // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AllowQueueing;                                            // 0x0025(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FNTPlayingEvent                             PlayingEvent;                                             // 0x0028(0x0010)
};

// ScriptStruct WKND.NagRequest
// 0x0028
struct FNagRequest
{
	class UAkAudioEvent*                               AkEvent;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           SuggestedAnim;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SilentCue;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.NagSequence
// 0x0038
struct FNagSequence
{
	int                                                Priority;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RepeatingNagChosenRandomly;                               // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class AActor*                                      DefaultActor;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialDelay;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	TArray<struct FNagRequest>                         InitialNags;                                              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FNagRequest>                         RepeatingNags;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct WKND.NagInfo
// 0x0058
struct FNagInfo
{
	struct FNagRequest                                 NagRequest;                                               // 0x0000(0x0028) (BlueprintVisible, BlueprintReadOnly)
	bool                                               IsAnInitialNag;                                           // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                NagNumber;                                                // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                UnifiedNagNumber;                                         // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class AActor*                                      Nagger;                                                   // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           SuggestedAnim;                                            // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FNTPlayingEvent                             PlayingEvent;                                             // 0x0048(0x0010) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct WKND.SpeakingActorInfo
// 0x0018
struct FSpeakingActorInfo
{
	struct FName                                       RoleName;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       SpeakingBone;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.Instrument
// 0x0030
struct FInstrument
{
	struct FName                                       uniqueInstrumentName;                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       firstSocket;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       secondSocket;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              peakSpeed;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET
};

// ScriptStruct WKND.ComboOptions
// 0x0010
struct FComboOptions
{
	class URPOCEnemyComboStageSetData*                 Combos;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Weighting;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.EnemyOverrideMaterial
// 0x0010
struct FEnemyOverrideMaterial
{
	class UMaterialInterface*                          CurrentMaterial;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          OverrideMaterial;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.WKNDEnemyRoutePlannerConfig
// 0x00E0
struct FWKNDEnemyRoutePlannerConfig
{
	class UWorld*                                      World;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0008(0x00D8) MISSED OFFSET
};

// ScriptStruct WKND.WKNDEnemyRoutePlannerState
// 0x002C
struct FWKNDEnemyRoutePlannerState
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct WKND.KinematicData
// 0x002C
struct FKinematicData
{
	unsigned char                                      UnknownData00[0x2C];                                      // 0x0000(0x002C) MISSED OFFSET
};

// ScriptStruct WKND.WKNDEnemyRoutePlanner_PathSegmentData
// 0x00D0
struct FWKNDEnemyRoutePlanner_PathSegmentData
{
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0000(0x00D0) MISSED OFFSET
};

// ScriptStruct WKND.NTClimbingSoundFoleyInfo
// 0x0FD8
struct FNTClimbingSoundFoleyInfo
{
	float                                              SmoothedClimbingSpeed;                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ClimbingSpeed;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AWKNDMotionController*                       ClimbingHand;                                             // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkComponent*                                AkComponent;                                              // 0x0010(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FNTPlayingEvent                             ClimbingSoundEvent;                                       // 0x0018(0x0010) (BlueprintVisible)
	unsigned char                                      UnknownData00[0xFB0];                                     // 0x0028(0x0FB0) MISSED OFFSET
};

// ScriptStruct WKND.ImpactRecord
// 0x0010
struct FImpactRecord
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct WKND.ComponentImpactRecord
// 0x0018
struct FComponentImpactRecord
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct WKND.LocomotionSettings
// 0x0005
struct FLocomotionSettings
{
	ELocomotionModeEnum                                LocomotionMode;                                           // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTeleportTurns;                                           // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVRInstantSnapTurns                                InstantSnapTurns;                                         // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSwapThrottleHands;                                       // 0x0003(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSafeClimbing;                                            // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.ComfortSettings
// 0x0008
struct FComfortSettings
{
	EComfortLevelEnum                                  ComfortLevel;                                             // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVRCameraShakeEnum                                 VRCameraShake;                                            // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EComfortDamageIndicatorEnum                        ComfortDamageIndicator;                                   // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bVignettedMovement;                                       // 0x0003(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHideAcceleration;                                        // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipClimb;                                               // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSlowFalling;                                             // 0x0006(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasSeenComfortPrompt;                                    // 0x0007(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.AccessibilitySettings
// 0x0007
struct FAccessibilitySettings
{
	EVRModeEnum                                        VRMode;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EVisualCombatAssistEnum                            VisualCombatAssist;                                       // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	E360CombatEnum                                     E360CombatEnabled;                                        // 0x0002(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESubtitlesEnum                                     Subtitles;                                                // 0x0003(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LanguageIndex;                                            // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDegrees_181;                                             // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bLimitedMobilty;                                          // 0x0006(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.AudioVideoSettings
// 0x0058
struct FAudioVideoSettings
{
	TMap<ESoundChannel, float>                         SoundVolumes;                                             // 0x0000(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EGraphicsSetting                                   GraphicsSetting;                                          // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct WKND.NTPhysicsHandleParams
// 0x0010
struct FNTPhysicsHandleParams
{
	float                                              LinearStiffness;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LinearDamping;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularStiffness;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AngularDamping;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.HapticData
// 0x0010
struct FHapticData
{
	EHapticType                                        HapticType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UHapticFeedbackEffect_Base*                  HapticEffect;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.BlendPair
// 0x0010
struct FBlendPair
{
	struct FName                                       Typename;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Alpha;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.PoseAlphaData
// 0x0030
struct FPoseAlphaData
{
	float                                              FistClench;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FBlendPair                                  AlphaA;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible)
	struct FBlendPair                                  AlphaB;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible)
	float                                              AlphaAB;                                                  // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              AlphaAPropThrough;                                        // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.OculusTouchData
// 0x0010
struct FOculusTouchData
{
	bool                                               OculusTouch;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGripState                                         GripState;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              Trigger;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Thumb;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Grip;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.ForceGrabData
// 0x0050
struct FForceGrabData
{
	float                                              GestureTimeReqd;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GestureStartTime;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       GrabbingActor;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              MinimumPitchReqd;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumXYDistanceReqd;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       GrabbableTag;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              GrabRange;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinimumDotValue;                                          // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDebugForceGrab;                                          // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UCurveFloat>                  JiggleStrength;                                           // 0x002C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LowerLeftJiggleOffset;                                    // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     UpperRightJiggleOffset;                                   // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.MappedRange
// 0x0008
struct FMappedRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.MandatedLocation
// 0x0024
struct FMandatedLocation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SnappingRange;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActive;                                                  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               UseRotation;                                              // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BlueSnapPoint;                                            // 0x0021(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnabled;                                                 // 0x0022(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0023(0x0001) MISSED OFFSET
};

// ScriptStruct WKND.HandInputData
// 0x000C
struct FHandInputData
{
	float                                              Grip;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Trigger;                                                  // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Thumb;                                                    // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.WKNDHandBones
// 0x00A0
struct FWKNDHandBones
{
	struct FXLABHandBones                              LeftHandBones;                                            // 0x0000(0x0050) (Edit, BlueprintVisible)
	struct FXLABHandBones                              RightHandBones;                                           // 0x0050(0x0050) (Edit, BlueprintVisible)
};

// ScriptStruct WKND.PlayerItems
// 0x0020
struct FPlayerItems
{
	class AActor*                                      LeftHand;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      RightHand;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              Holstered;                                                // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct WKND.RequiredLevel
// 0x0010
struct FRequiredLevel
{
	struct FName                                       LevelName;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bManualLevelLoad;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct WKND.WaveTelemetryData
// 0x0068
struct FWaveTelemetryData
{
	int                                                NumPlayerHitsReceived;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RemainingPlayerHealthLevels;                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RemainingPlayerHealth;                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TMap<EEnemyType, int>                              NumEnemiesDestroyedByType;                                // 0x0010(0x0050) (ZeroConstructor)
	float                                              WaveCompletionTime;                                       // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.CustomizationSettings
// 0x0020
struct FCustomizationSettings
{
	struct FName                                       SelectedLightsaberColor;                                  // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SelectedLightsaberHilt;                                   // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SelectedDojoEnvironment;                                  // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       DojoEnvironmentLevelName;                                 // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.ReadyCombatant
// 0x000C
struct FReadyCombatant
{
	TWeakObjectPtr<class AActor>                       combatant;                                                // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.TrainingDroidBob
// 0x0018
struct FTrainingDroidBob
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
	float                                              HeightAdjustment;                                         // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pendulum;                                                 // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.TrainingDroidDamage
// 0x0014
struct FTrainingDroidDamage
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              WobbleAmplitude;                                          // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WobblePlaySpeed;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamagedState;                                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTwitchStage;                                             // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWobbleStage;                                             // 0x0011(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayTwitch;                                              // 0x0012(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0013(0x0001) MISSED OFFSET
};

// ScriptStruct WKND.TrainingDroidGrille
// 0x000C
struct FTrainingDroidGrille
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	float                                              Angle;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0008(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.TrainingDroidLookAt
// 0x0004
struct FTrainingDroidLookAt
{
	float                                              WorldYaw;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.WKNDWorldInfo
// 0x0020
struct FWKNDWorldInfo
{
	class UWorld*                                      World;                                                    // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0008(0x0018) MISSED OFFSET
};

// ScriptStruct WKND.GrabStateData
// 0x0002
struct FGrabStateData
{
	bool                                               Left;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Right;                                                    // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.HandSyncData
// 0x0020
struct FHandSyncData
{
	ESyncInterpType                                    SyncInterpType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class URPOCGrabLocatorComponent*                   InteractLocator;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             SecondaryLocator;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LocationOnly;                                             // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HeadBlend;                                                // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct WKND.NameDropdown
// 0x0010
struct FNameDropdown
{
	struct FName                                       Source;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.NameFromBPEnum
// 0x0008
struct FNameFromBPEnum
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.NTSurfaceHapticPair
// 0x0038 (0x0040 - 0x0008)
struct FNTSurfaceHapticPair : public FTableRowBase
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FNTCharacterHapticSet                       HapticSet;                                                // 0x0010(0x0030) (Edit, BlueprintVisible)
};

// ScriptStruct WKND.HotspotData
// 0x0010
struct FHotspotData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct WKND.StagedCombatEvadeInitData
// 0x0048
struct FStagedCombatEvadeInitData
{
	class UDataTable*                                  Evades;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FStagedCombatEvadeSelectionData>     EvadeData;                                                // 0x0008(0x0010) (ZeroConstructor)
	float                                              BlendTime;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       EvadePose;                                                // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StrikeLength;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EvadeTimeout;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectionAwayWeight;                                      // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DirectionOrthogonalWeight;                                // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceWeight;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceClamp;                                            // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpponentFaceTolerance;                                    // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState
// 0x0300
struct FCombatStageState
{
	unsigned char                                      UnknownData00[0x300];                                     // 0x0000(0x0300) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageConfig
// 0x0068
struct FCombatStageConfig
{
	class ACharacter*                                  Owner;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class URPOCStagedCombatComponent*                  OwnerComponent;                                           // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AWKNDPlayerPawn*                             TargetOpponent;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMotionFieldMovementComponent*               MFMComponent;                                             // 0x0018(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimInstance*                               AnimInstance;                                             // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      OwnedSaber;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class ARPOCPickup_Lightsaber*                      OpponentSaber;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0038(0x0030) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageState_Movement
// 0x0098
struct FCombatStageState_Movement
{
	unsigned char                                      UnknownData00[0x98];                                      // 0x0000(0x0098) MISSED OFFSET
};

// ScriptStruct WKND.CombatStageConfig_Movement
// 0x00A8
struct FCombatStageConfig_Movement
{
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0000(0x00A8) MISSED OFFSET
};

// ScriptStruct WKND.RPOCStageData
// 0x0018
struct FRPOCStageData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct WKND.RPOCStageData_Attack
// 0x0080
struct FRPOCStageData_Attack
{
	class URPOCEnemyComboStageSetData*                 OrderedCombosInStage;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class URPOCEnemyComboStageSetData*                 RandomisedCombosInStage;                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CombatStartAnim;                                          // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CombatStopAnim;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                VulnerableAnim;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationOnBlocked;                                       // 0x0028(0x0010) (ZeroConstructor)
	TArray<class USoundBase*>                          DialogueOnBlocked;                                        // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0048(0x0038) MISSED OFFSET
};

// ScriptStruct WKND.RPOCStageData_Defence
// 0x0030
struct FRPOCStageData_Defence
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct WKND.RPOCStageData_Duel
// 0x00D0
struct FRPOCStageData_Duel
{
	class URPOCEnemyComboStageSetData*                 OrderedCombosInStage;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class URPOCEnemyComboStageSetData*                 RandomisedCombosInStage;                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnBlocked;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnStartReaction;                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchLeft;                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchRight;                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnTakeDamageLeft;                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnTakeDamageRight;                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnTakeHeavyDamageLeft;                           // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnTakeHeavyDamageRight;                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationOnNotBlocked;                                    // 0x0050(0x0010) (ZeroConstructor)
	TArray<class USoundBase*>                          DialogueOnNotBlocked;                                     // 0x0060(0x0010) (ZeroConstructor)
	int                                                StrikesPerCombo;                                          // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
	TArray<int>                                        StrikeDamageReceived;                                     // 0x0078(0x0010) (ZeroConstructor)
	int                                                FinalStrikeDamageReceived_2H_Bonus;                       // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x44];                                      // 0x008C(0x0044) MISSED OFFSET
};

// ScriptStruct WKND.RPOCStageData_Exposition
// 0x0020
struct FRPOCStageData_Exposition
{
	class UAnimMontage*                                Animation;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  Dialogue;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0010(0x0010) MISSED OFFSET
};

// ScriptStruct WKND.RPOCStageData_Idle
// 0x0001
struct FRPOCStageData_Idle
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct WKND.RPOCStageData_Movement
// 0x0060
struct FRPOCStageData_Movement
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
};

// ScriptStruct WKND.RPOCStageData_Reaction
// 0x0048
struct FRPOCStageData_Reaction
{
	class UAnimMontage*                                AnimationOnStartReactionOverride;                         // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchLeftOverride;                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AnimationOnFlinchRightOverride;                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                StrikesPerCombo;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<int>                                        StrikeDamageReceived;                                     // 0x0020(0x0010) (ZeroConstructor)
	int                                                FinalStrikeDamageReceived_2H_Bonus;                       // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x0034(0x0014) MISSED OFFSET
};

// ScriptStruct WKND.RPOCStageData_Throw
// 0x000C
struct FRPOCStageData_Throw
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct WKND.EnemyAttackData
// 0x0018
struct FEnemyAttackData
{
	class UAnimMontage*                                AttackAnim;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                MovingAttackAnim;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimPlayRate;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct WKND.RPOCKeyMapping
// 0x0090 (0x0098 - 0x0008)
struct FRPOCKeyMapping : public FTableRowBase
{
	struct FName                                       Name;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ERPOCMappingType                                   Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FKey>                                Key_Vive;                                                 // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                Key_Rift;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                Key_SantaCruz;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                Key_Default;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                Key_PSVR;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                Key_GearVR;                                               // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                Key_GoogleVR;                                             // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FKey>                                Key_Generic;                                              // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct WKND.RPOCInputMapSet
// 0x0020
struct FRPOCInputMapSet
{
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct WKND.SliceableActorPair
// 0x0010
struct FSliceableActorPair
{
	class USliceableMeshComponent*                     Closest;                                                  // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USliceableMeshComponent*                     Farthest;                                                 // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct WKND.GrabPlatform
// 0x0020
struct FGrabPlatform
{
	TArray<class URPOCGrabLocatorComponent*>           PrimaryGrabLeft;                                          // 0x0000(0x0010) (ExportObject, ZeroConstructor)
	TArray<class URPOCGrabLocatorComponent*>           PrimaryGrabRight;                                         // 0x0010(0x0010) (ExportObject, ZeroConstructor)
};

// ScriptStruct WKND.DeviceData
// 0x0003
struct FDeviceData
{
	EDeviceType                                        DeviceType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Installed;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Required;                                                 // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.BroadcastDatum
// 0x0030
struct FBroadcastDatum
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct WKND.MotionFieldStageProperties
// 0x0008
struct FMotionFieldStageProperties
{
	float                                              MinPlayerDistance;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPlayerDistance;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.CombatStageProperties
// 0x0010
struct FCombatStageProperties
{
	ECombatStageType                                   StageType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                RequiredElements;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RequiredDuration;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleteOnFirstSuccess;                                  // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MatchStageForDuration;                                    // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ExternalStage;                                            // 0x000E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x000F(0x0001) MISSED OFFSET
};

// ScriptStruct WKND.FlightState
// 0x0010
struct FFlightState
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct WKND.EnemyWaveDefinitionData
// 0x0038 (0x0040 - 0x0008)
struct FEnemyWaveDefinitionData : public FTableRowBase
{
	int                                                MeleeEnemiesReqd;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RangedEnemiesReqd;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWKNDEnemyCombatData*                        PrimaryEnemyConfig;                                       // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWKNDEnemyCombatData*                        SecondaryEnemyConfig;                                     // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWKNDEnemyCombatData*                        TertiaryEnemyConfig;                                      // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PrimaryEnemySpeedMultiplier;                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryEnemySpeedMultiplier;                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TertiaryEnemySpeedMultiplier;                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PrimaryEnemyWindupSpeedMultiplier;                        // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondaryEnemyWindupSpeedMultiplier;                      // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TertiaryEnemyWindupSpeedMultiplier;                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.HandAnimData
// 0x0008
struct FHandAnimData
{
	bool                                               Grabbed;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Spread;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct WKND.DialogDataRow
// 0x0038 (0x0040 - 0x0008)
struct FDialogDataRow : public FTableRowBase
{
	struct FText                                       SubtitleText;                                             // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       SpeakerName;                                              // 0x0020(0x0018) (Edit, BlueprintVisible)
	int                                                ScreenPositionOffset;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
