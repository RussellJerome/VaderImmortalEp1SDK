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

// Class OculusMR.OculusMR_BoundaryActor
// 0x0008 (0x0320 - 0x0318)
class AOculusMR_BoundaryActor : public AActor
{
public:
	class UOculusMR_BoundaryMeshComponent*             BoundaryMeshComponent;                                    // 0x0318(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_BoundaryActor");
		return ptr;
	}

};


// Class OculusMR.OculusMR_BoundaryMeshComponent
// 0x0020 (0x06D0 - 0x06B0)
class UOculusMR_BoundaryMeshComponent : public UMeshComponent
{
public:
	float                                              TopZ;                                                     // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06B4(0x0004) MISSED OFFSET
	class UMaterial*                                   WhiteMaterial;                                            // 0x06B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOculusMR_CastingCameraActor*                CastingCameraActor;                                       // 0x06C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x06C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_BoundaryMeshComponent");
		return ptr;
	}

};


// Class OculusMR.OculusMR_CastingCameraActor
// 0x0170 (0x0A00 - 0x0890)
class AOculusMR_CastingCameraActor : public ACastingCameraActor
{
public:
	struct FTrackedCamera                              TrackedCamera;                                            // 0x0890(0x0058) (Edit, BlueprintVisible)
	class USceneComponent*                             TrackingReferenceComponent;                               // 0x08E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bFollowTrackingReference;                                 // 0x08F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTrackedCameraResolution;                              // 0x08F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x08F2(0x0002) MISSED OFFSET
	int                                                WidthPerView;                                             // 0x08F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HeightPerView;                                            // 0x08F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EOculusMR_CameraDeviceEnum                         CapturingCamera;                                          // 0x08FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08FD(0x0003) MISSED OFFSET
	float                                              CastingLatency;                                           // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandPoseStateLatency;                                     // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      ChromaKeyColor;                                           // 0x0908(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ChromaKeySimilarity;                                      // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChromaKeySmoothRange;                                     // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChromaKeySpillRange;                                      // 0x0914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EOculusMR_VirtualGreenScreenType                   VirtualGreenScreenType;                                   // 0x0918(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDynamicLighting;                                      // 0x0919(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EOculusMR_DepthQuality                             DepthQuality;                                             // 0x091A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x091B(0x0001) MISSED OFFSET
	float                                              DynamicLightingDepthSmoothFactor;                         // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DynamicLightingDepthVariationClampingValue;               // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	class UOculusMR_CastingWindowComponent*            CastingWindowComponent;                                   // 0x0928(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVRNotificationsComponent*                   VRNotificationComponent;                                  // 0x0930(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  CameraColorTexture;                                       // 0x0938(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  CameraDepthTexture;                                       // 0x0940(0x0008) (ZeroConstructor, IsPlainOldData)
	class UOculusMR_PlaneMeshComponent*                PlaneMeshComponent;                                       // 0x0948(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterial*                                   ChromaKeyMaterial;                                        // 0x0950(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   ChromaKeyLitMaterial;                                     // 0x0958(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterial*                                   OpaqueColoredMaterial;                                    // 0x0960(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ChromaKeyMaterialInstance;                                // 0x0968(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ChromaKeyLitMaterialInstance;                             // 0x0970(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CameraFrameMaterialInstance;                              // 0x0978(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    BackdropMaterialInstance;                                 // 0x0980(0x0008) (ZeroConstructor, IsPlainOldData)
	class AOculusMR_BoundaryActor*                     BoundaryActor;                                            // 0x0988(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASceneCapture2D*                             BoundarySceneCaptureActor;                                // 0x0990(0x0008) (ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  DefaultTexture_White;                                     // 0x0998(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x60];                                      // 0x09A0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_CastingCameraActor");
		return ptr;
	}


	void ToggleCastingWindow();
	void RequestTrackedCameraCalibration();
	void OpenCastingWindow();
	void OnHMDRecentered();
	bool HasCastingWindowOpened();
	void CloseCastingWindow();
	void BindToTrackedCameraIndexIfAvailable(int InTrackedCameraIndex);
};


// Class OculusMR.OculusMR_CastingWindowComponent
// 0x0090 (0x0180 - 0x00F0)
class UOculusMR_CastingWindowComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x00F0(0x0020) MISSED OFFSET
	class UCastingViewportClient*                      CastingViewportClient;                                    // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0118(0x0010) MISSED OFFSET
	class UOculusMR_CompositionViewportClient*         CompositionViewportClient;                                // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0130(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_CastingWindowComponent");
		return ptr;
	}

};


// Class OculusMR.OculusMR_CompositionViewportClient
// 0x0038 (0x0060 - 0x0028)
class UOculusMR_CompositionViewportClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	class UTexture2D*                                  CameraColorTexture;                                       // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_CompositionViewportClient");
		return ptr;
	}

};


// Class OculusMR.OculusMR_PlaneMeshComponent
// 0x0010 (0x06C0 - 0x06B0)
class UOculusMR_PlaneMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x06B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMR_PlaneMeshComponent");
		return ptr;
	}


	bool SetCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FOculusMR_PlaneMeshTriangle> Triangles);
};


// Class OculusMR.OculusMRFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UOculusMRFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OculusMR.OculusMRFunctionLibrary");
		return ptr;
	}


	TArray<struct FVector> STATIC_GetPlayAreaPoints();
	TArray<struct FVector> STATIC_GetOuterBoundaryPoints();
	void STATIC_GetAllTrackedCamera(bool bCalibratedOnly, TArray<struct FTrackedCamera>* TrackedCameras);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
