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

// Enum OculusMR.EOculusMR_BoundaryType
enum class EOculusMR_BoundaryType : uint8_t
{
	BT_OuterBoundary               = 0,
	BT_PlayArea                    = 1,
	BT_MAX                         = 2
};


// Enum OculusMR.EOculusMR_DepthQuality
enum class EOculusMR_DepthQuality : uint8_t
{
	DQ_Low                         = 0,
	DQ_Medium                      = 1,
	DQ_High                        = 2,
	DQ_MAX                         = 3
};


// Enum OculusMR.EOculusMR_VirtualGreenScreenType
enum class EOculusMR_VirtualGreenScreenType : uint8_t
{
	VGS_Off                        = 0,
	VGS_OuterBoundary              = 1,
	VGS_PlayArea                   = 2,
	VGS_MAX                        = 3
};


// Enum OculusMR.EOculusMR_ClippingReference
enum class EOculusMR_ClippingReference : uint8_t
{
	CR_TrackingReference           = 0,
	CR_Head                        = 1,
	CR_MAX                         = 2
};


// Enum OculusMR.EOculusMR_CameraDeviceEnum
enum class EOculusMR_CameraDeviceEnum : uint8_t
{
	CD_None                        = 0,
	CD_WebCamera0                  = 1,
	CD_WebCamera1                  = 2,
	CD_ZEDCamera                   = 3,
	CD_MAX                         = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OculusMR.TrackedCamera
// 0x0058
struct FTrackedCamera
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              FieldOfView;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SizeX;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ETrackedDeviceType                                 AttachedTrackedDevice;                                    // 0x0024(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FRotator                                    CalibratedRotation;                                       // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     CalibratedOffset;                                         // 0x0034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    UserRotation;                                             // 0x0040(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     UserOffset;                                               // 0x004C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct OculusMR.OculusMR_PlaneMeshTriangle
// 0x003C
struct FOculusMR_PlaneMeshTriangle
{
	struct FVector                                     Vertex0;                                                  // 0x0000(0x000C) (IsPlainOldData)
	struct FVector2D                                   UV0;                                                      // 0x000C(0x0008) (IsPlainOldData)
	struct FVector                                     Vertex1;                                                  // 0x0014(0x000C) (IsPlainOldData)
	struct FVector2D                                   UV1;                                                      // 0x0020(0x0008) (IsPlainOldData)
	struct FVector                                     Vertex2;                                                  // 0x0028(0x000C) (IsPlainOldData)
	struct FVector2D                                   UV2;                                                      // 0x0034(0x0008) (IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
