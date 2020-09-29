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

// Function SimStream.AssetManagementUtilsLibrary.GetOrderedDeltaCacheFiles
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UAssetManagementUtilsLibrary::STATIC_GetOrderedDeltaCacheFiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.AssetManagementUtilsLibrary.GetOrderedDeltaCacheFiles");

	UAssetManagementUtilsLibrary_GetOrderedDeltaCacheFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SimStream.HttpDownloadManager.GetAssetURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Asset                          (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UHttpDownloadManager::GetAssetURL(const struct FString& Asset)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.GetAssetURL");

	UHttpDownloadManager_GetAssetURL_Params params;
	params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SimStream.HttpDownloadManager.GetAssets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UHttpDownloadManager::GetAssets()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.GetAssets");

	UHttpDownloadManager_GetAssets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SimStream.HttpDownloadManager.FetchManifestURLs
// (Final, Native, Public, BlueprintCallable)

void UHttpDownloadManager::FetchManifestURLs()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.FetchManifestURLs");

	UHttpDownloadManager_FetchManifestURLs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimStream.HttpDownloadManager.DownloadProgressUpdated
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// float                          Percent                        (Parm, ZeroConstructor, IsPlainOldData)

void UHttpDownloadManager::DownloadProgressUpdated(const struct FString& URL, float Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.DownloadProgressUpdated");

	UHttpDownloadManager_DownloadProgressUpdated_Params params;
	params.URL = URL;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimStream.HttpDownloadManager.DownloadFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           bWasSuccessful                 (Parm, ZeroConstructor, IsPlainOldData)

void UHttpDownloadManager::DownloadFinished(const struct FString& URL, bool bWasSuccessful)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.DownloadFinished");

	UHttpDownloadManager_DownloadFinished_Params params;
	params.URL = URL;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimStream.HttpDownloadManager.DownloadAvailability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           bIsAvailable                   (Parm, ZeroConstructor, IsPlainOldData)

void UHttpDownloadManager::DownloadAvailability(const struct FString& URL, bool bIsAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.DownloadAvailability");

	UHttpDownloadManager_DownloadAvailability_Params params;
	params.URL = URL;
	params.bIsAvailable = bIsAvailable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimStream.HttpDownloadManager.Download
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UHttpDownloadManager::Download(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.Download");

	UHttpDownloadManager_Download_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimStream.HttpDownloadManager.DeltaCacheManifestUpdated
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHttpDownloadManager::DeltaCacheManifestUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.DeltaCacheManifestUpdated");

	UHttpDownloadManager_DeltaCacheManifestUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimStream.HttpDownloadManager.Cleanup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UHttpDownloadManager::Cleanup(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.Cleanup");

	UHttpDownloadManager_Cleanup_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimStream.HttpDownloadManager.CheckDownloadAvailability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UHttpDownloadManager::CheckDownloadAvailability(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.CheckDownloadAvailability");

	UHttpDownloadManager_CheckDownloadAvailability_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimStream.HttpDownloadManager.Cancel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UHttpDownloadManager::Cancel(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.Cancel");

	UHttpDownloadManager_Cancel_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SimStream.HttpDownloadManager.AlreadyDownloaded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHttpDownloadManager::AlreadyDownloaded(const struct FString& URL)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.HttpDownloadManager.AlreadyDownloaded");

	UHttpDownloadManager_AlreadyDownloaded_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SimStream.SimStreamActor.SetFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            FrameIndex                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          InterpFrac                     (Parm, ZeroConstructor, IsPlainOldData)

void ASimStreamActor::SetFrame(int FrameIndex, float InterpFrac)
{
	static auto fn = UObject::FindObject<UFunction>("Function SimStream.SimStreamActor.SetFrame");

	ASimStreamActor_SetFrame_Params params;
	params.FrameIndex = FrameIndex;
	params.InterpFrac = InterpFrac;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
