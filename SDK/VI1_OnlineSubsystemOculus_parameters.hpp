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

// Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
struct UOculusCreateSessionCallbackProxy_CreateSession_Params
{
	int                                                PublicConnections;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OculusMatchmakingPool;                                    // (Parm, ZeroConstructor)
	class UOculusCreateSessionCallbackProxy*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
struct UOculusEntitlementCallbackProxy_VerifyEntitlement_Params
{
	class UOculusEntitlementCallbackProxy*             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
struct UOculusFindSessionsCallbackProxy_FindModeratedSessions_Params
{
	int                                                MaxResults;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UOculusFindSessionsCallbackProxy*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
struct UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Params
{
	int                                                MaxResults;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OculusMatchmakingPool;                                    // (Parm, ZeroConstructor)
	class UOculusFindSessionsCallbackProxy*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
struct UOculusIdentityCallbackProxy_GetOculusIdentity_Params
{
	int                                                LocalUserNum;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UOculusIdentityCallbackProxy*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
struct UOculusUpdateSessionCallbackProxy_SetSessionEnqueue_Params
{
	bool                                               bShouldEnqueueInMatchmakingPool;                          // (Parm, ZeroConstructor, IsPlainOldData)
	class UOculusUpdateSessionCallbackProxy*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
