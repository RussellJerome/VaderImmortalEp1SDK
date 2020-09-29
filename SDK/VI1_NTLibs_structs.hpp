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

// Enum NTLibs.EDirection
enum class EDirection : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Parallel                       = 2,
	EDirection_MAX                 = 3
};


// Enum NTLibs.EStrikeDirection
enum class EStrikeDirection : uint8_t
{
	Unknown                        = 0,
	Up                             = 1,
	UpRight                        = 2,
	Right                          = 3,
	DownRight                      = 4,
	Down                           = 5,
	DownLeft                       = 6,
	Left                           = 7,
	UpLeft                         = 8,
	Front                          = 9,
	EStrikeDirection_MAX           = 10
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NTLibs.RandomFloatRange
// 0x0008
struct FRandomFloatRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibs.NTSimpleFloatRange
// 0x0008
struct FNTSimpleFloatRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Max;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibs.FloatRect
// 0x0010
struct FFloatRect
{
	float                                              Left;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibs.AcceleratedFloat
// 0x0014
struct FAcceleratedFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Target;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeed;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Acceleration;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibs.AcceleratedFloatParameters
// 0x0014
struct FAcceleratedFloatParameters
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedMultiplier;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationMultiplier;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RealMaxSpeed;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               UseRealMaxSpeed;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct NTLibs.LerpFloat
// 0x000C
struct FLerpFloat
{
	float                                              Value;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeLeft;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct NTLibs.PlayerBladeInfo
// 0x00A0
struct FPlayerBladeInfo
{
	struct FVector                                     GuardLocation;                                            // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     TipLocation;                                              // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     PreviousGuardLocation;                                    // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     PreviousTipLocation;                                      // 0x0024(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     GuardVelocity;                                            // 0x0030(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     TipVelocity;                                              // 0x003C(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	float                                              DeltaTime;                                                // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	struct FTransform                                  CameraTransform;                                          // 0x0050(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     CameraVelocity;                                           // 0x0080(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bWeaponActive;                                            // 0x008C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFullyPopulated;                                          // 0x008D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x008E(0x0002) MISSED OFFSET
	float                                              BladeDistance;                                            // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bClashing;                                                // 0x0094(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0xB];                                       // 0x0095(0x000B) MISSED OFFSET
};

// ScriptStruct NTLibs.NTStrike
// 0x0080
struct FNTStrike
{
	struct FVector                                     GuardLocation;                                            // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     TipLocation;                                              // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     GuardVelocity;                                            // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     TipVelocity;                                              // 0x0024(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FTransform                                  CameraTransform;                                          // 0x0030(0x0030) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	struct FVector                                     CameraVelocity;                                           // 0x0060(0x000C) (BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData)
	bool                                               bWeaponActive;                                            // 0x006C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bFullyPopulated;                                          // 0x006D(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	float                                              BladeDistance;                                            // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bStrikeActive;                                            // 0x0074(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bClashing;                                                // 0x0075(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA];                                       // 0x0076(0x000A) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
