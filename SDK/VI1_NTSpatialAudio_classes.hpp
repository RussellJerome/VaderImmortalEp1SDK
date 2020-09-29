#pragma once

// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NTSpatialAudio.ListenerTracker
// 0x0010 (0x0328 - 0x0318)
class AListenerTracker : public AActor
{
public:
	class USplineComponent*                            SplineComponent;                                          // 0x0318(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UListenerTrackerComponent*                   ListenerTrackerComponent;                                 // 0x0320(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTSpatialAudio.ListenerTracker");
		return ptr;
	}

};


// Class NTSpatialAudio.ListenerTrackerComponent
// 0x0020 (0x0110 - 0x00F0)
class UListenerTrackerComponent : public UActorComponent
{
public:
	class USplineComponent*                            TrackingSpline;                                           // 0x00F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FTrackingActor>                      TrackingActors;                                           // 0x00F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bDebugListenerTrackers;                                   // 0x0108(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0109(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NTSpatialAudio.ListenerTrackerComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
