// VaderImmortal_1 (236956) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            PublicConnections              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OculusMatchmakingPool          (Parm, ZeroConstructor)
// class UOculusCreateSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOculusCreateSessionCallbackProxy* UOculusCreateSessionCallbackProxy::STATIC_CreateSession(int PublicConnections, const struct FString& OculusMatchmakingPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession");

	UOculusCreateSessionCallbackProxy_CreateSession_Params params;
	params.PublicConnections = PublicConnections;
	params.OculusMatchmakingPool = OculusMatchmakingPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UOculusEntitlementCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOculusEntitlementCallbackProxy* UOculusEntitlementCallbackProxy::STATIC_VerifyEntitlement()
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement");

	UOculusEntitlementCallbackProxy_VerifyEntitlement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData)
// class UOculusFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::STATIC_FindModeratedSessions(int MaxResults)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions");

	UOculusFindSessionsCallbackProxy_FindModeratedSessions_Params params;
	params.MaxResults = MaxResults;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxResults                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OculusMatchmakingPool          (Parm, ZeroConstructor)
// class UOculusFindSessionsCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOculusFindSessionsCallbackProxy* UOculusFindSessionsCallbackProxy::STATIC_FindMatchmakingSessions(int MaxResults, const struct FString& OculusMatchmakingPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions");

	UOculusFindSessionsCallbackProxy_FindMatchmakingSessions_Params params;
	params.MaxResults = MaxResults;
	params.OculusMatchmakingPool = OculusMatchmakingPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            LocalUserNum                   (Parm, ZeroConstructor, IsPlainOldData)
// class UOculusIdentityCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOculusIdentityCallbackProxy* UOculusIdentityCallbackProxy::STATIC_GetOculusIdentity(int LocalUserNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity");

	UOculusIdentityCallbackProxy_GetOculusIdentity_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           bShouldEnqueueInMatchmakingPool (Parm, ZeroConstructor, IsPlainOldData)
// class UOculusUpdateSessionCallbackProxy* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOculusUpdateSessionCallbackProxy* UOculusUpdateSessionCallbackProxy::STATIC_SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool)
{
	static auto fn = UObject::FindObject<UFunction>("Function OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue");

	UOculusUpdateSessionCallbackProxy_SetSessionEnqueue_Params params;
	params.bShouldEnqueueInMatchmakingPool = bShouldEnqueueInMatchmakingPool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
