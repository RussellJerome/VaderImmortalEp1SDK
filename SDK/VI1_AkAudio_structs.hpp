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

// Enum AkAudio.AkAcousticPortalState
enum class EAkAcousticPortalState : uint8_t
{
	Closed                         = 0,
	Open                           = 1,
	AkAcousticPortalState_MAX      = 2
};


// Enum AkAudio.AkMultiPositionType
enum class EAkMultiPositionType : uint8_t
{
	SingleSource                   = 0,
	MultiSources                   = 1,
	MultiDirections                = 2,
	AkMultiPositionType_MAX        = 3
};


// Enum AkAudio.AkChannelConfiguration
enum class EAkChannelConfiguration : uint8_t
{
	Ak_Parent                      = 0,
	Ak_LFE                         = 1,
	Ak_1                           = 2,
	Ak_2                           = 3,
	Ak_201                         = 4,
	Ak_3                           = 5,
	Ak_301                         = 6,
	Ak_4                           = 7,
	Ak_401                         = 8,
	Ak_5                           = 9,
	Ak_501                         = 10,
	Ak_7                           = 11,
	Ak_5_1                         = 12,
	Ak_7_1                         = 13,
	Ak_7_101                       = 14,
	Ak_Auro_9                      = 15,
	Ak_Auro_10                     = 16,
	Ak_Auro_11                     = 17,
	Ak_Auro_13                     = 18,
	Ak_Ambisonics_1st_order        = 19,
	Ak_Ambisonics_2nd_order        = 20,
	Ak_Ambisonics_3rd_order        = 21,
	Ak_MAX                         = 22
};


// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
	Wall                           = 0,
	Ceiling                        = 1,
	Floor                          = 2,
	EReflectionFilterBits_MAX      = 3
};


// Enum AkAudio.PanningRule
enum class EPanningRule : uint8_t
{
	PanningRule_Speakers           = 0,
	PanningRule_Headphones         = 1,
	PanningRule_MAX                = 2
};


// Enum AkAudio.ENTCurveInterpolation
enum class ENTCurveInterpolation : uint8_t
{
	ECI_CurveInterpolation_Log3    = 0,
	ECI_CurveInterpolation_Sine    = 1,
	ECI_CurveInterpolation_Log1    = 2,
	ECI_CurveInterpolation_InvSCurve = 3,
	ECI_CurveInterpolation_Linear  = 4,
	ECI_CurveInterpolation_SCurve  = 5,
	ECI_CurveInterpolation_Exp1    = 6,
	ECI_CurveInterpolation_SineRecip = 7,
	ECI_CurveInterpolation_Exp3    = 8,
	ECI_CurveInterpolation_LastFadeCurve = 9,
	ECI_CurveInterpolation_Constant = 10,
	ECI_CurveInterpolation_MAX     = 11
};


// Enum AkAudio.ENTActionOnEventType
enum class ENTActionOnEventType : uint8_t
{
	EAOET_Stop                     = 0,
	EAOET_Pause                    = 1,
	EAOET_Resume                   = 2,
	EAOET_Break                    = 3,
	EAOET_ReleaseEnvelope          = 4,
	EAOET_MAX                      = 5
};


// Enum AkAudio.EPlayingEventState
enum class EPlayingEventState : uint8_t
{
	EPS_Okay                       = 0,
	EPS_Posted                     = 1,
	EPS_Completed                  = 2,
	EPS_Error                      = 3,
	EPS_Cancelled                  = 4,
	EPS_MAX                        = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.AkBoolPropertyToControl
// 0x0010
struct FAkBoolPropertyToControl
{
	struct FString                                     ItemProperty;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkWwiseObjectDetails
// 0x0030
struct FAkWwiseObjectDetails
{
	struct FString                                     ItemName;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ItemPath;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     ItemId;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkWwiseItemToControl
// 0x0040
struct FAkWwiseItemToControl
{
	struct FAkWwiseObjectDetails                       ItemPicked;                                               // 0x0000(0x0030) (Edit, EditConst)
	struct FString                                     ItemPath;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkPropertyToControl
// 0x0010
struct FAkPropertyToControl
{
	struct FString                                     ItemProperty;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkPoly
// 0x0010
struct FAkPoly
{
	class UAkAcousticTexture*                          Texture;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnableSurface;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct AkAudio.AkWaapiSubscriptionId
// 0x0008
struct FAkWaapiSubscriptionId
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct AkAudio.AKWaapiJsonObject
// 0x0010
struct FAKWaapiJsonObject
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AkAudio.AkWaapiUri
// 0x0010
struct FAkWaapiUri
{
	struct FString                                     Uri;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkWaapiFieldNames
// 0x0010
struct FAkWaapiFieldNames
{
	struct FString                                     FieldName;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.AkAudioEventTrackKey
// 0x0020
struct FAkAudioEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	class UAkAudioEvent*                               AkAudioEvent;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     EventName;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst)
};

// ScriptStruct AkAudio.NTPlayingEvent
// 0x0010
struct FNTPlayingEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
// 0x0001
struct FAkAmbSoundCheckpointRecord
{
	bool                                               bCurrentlyPlaying;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct AkAudio.NTBankLoadStatus
// 0x0018
struct FNTBankLoadStatus
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioEventSection*              Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
// 0x0008 (0x0028 - 0x0020)
struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
{
	class UMovieSceneAkAudioRTPCSection*               Section;                                                  // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct AkAudio.MovieSceneAkAudioRTPCSectionData
// 0x0080
struct FMovieSceneAkAudioRTPCSectionData
{
	struct FString                                     RTPCName;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FRichCurve                                  RTPCCurve;                                                // 0x0010(0x0070)
};

// ScriptStruct AkAudio.NTPlayingEventMaster
// 0x0020
struct FNTPlayingEventMaster
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
