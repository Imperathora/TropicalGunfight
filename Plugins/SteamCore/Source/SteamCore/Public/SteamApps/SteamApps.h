/**
* Copyright (C) 2017-2021 | eelDev (Dry Eel Development)
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamAppsTypes.h"
#include "SteamApps.generated.h"

UCLASS()
class STEAMCORE_API UApps : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UApps() {SubsystemType = ESteamSubsystem::Apps;}
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Apps|Delegates")
		FOnDLCInstalled DLCInstalled;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Apps|Delegates")
		FOnFileDetailsResultDelegate FileDetailsResultDelegate;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Checks if the active user is subscribed to the current App ID.
	*
	* This will always return true if you're using Steam DRM or calling SteamAPI_RestartAppIfNecessary.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool BIsSubscribed();

	/**
	* Checks if the license owned by the user provides low violence depots.
	*
	* Low violence depots are useful for copies sold in countries that have content restrictions.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool BIsLowViolence();

	/**
	* Checks whether the current App ID is for Cyber Cafes.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool BIsCybercafe();

	/**
	* Returns metadata for a DLC by index.
	*
	* @param	dlc					index of the DLC to get between 0 and GetDLCCount.
	* @param	appID				Returns the App ID of the DLC.
	* @param	bAvailable			Returns whether the DLC is currently available.
	* @param	name				Returns the name of the DLC by copying it into this buffer.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool BGetDLCDataByIndex(int32 dlc, int32& appID, bool& bAvailable, FString& name);

	/**
	* Gets the current language that the user has set.
	*
	* This falls back to the Steam UI language if the user hasn't explicitly picked a language for the title.
	* For the full list of languages see Supported Languages.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static FString GetCurrentGameLanguage();

	/**
	* Gets a comma separated list of the languages the current app supports.
	*
	* For the full list of languages that may be returned see Localization and Languages.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static FString GetAvailableGameLanguages();

	/**
	* Checks if the user owns a specific DLC and if the DLC is installed
	*
	* @param	appID	The App ID of the DLC to check.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool BIsDlcInstalled(int32 appID);

	/**
	* Checks if the user has a VAC ban on their account
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool BIsVACBanned();

	/**
	* Checks if the active user is subscribed to a specified AppId.
	*
	* Only use this if you need to check ownership of another game related to yours, a demo for example.
	*
	* @param	appID	The App ID to check.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool BIsSubscribedApp(int32 appID);

	/**
	* Checks if the active user is accessing the current appID via a temporary Family Shared license owned by another user.
	*
	* If you need to determine the steamID of the permanent owner of the license, use GetAppOwner.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool BIsSubscribedFromFamilySharing();

	/**
	* Checks if the user is subscribed to the current App ID through a free weekend.
	*
	* Before using this please contact a Valve technical account manager via the Steamworks Discussion Board to properly package and secure your free weekend.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool BIsSubscribedFromFreeWeekend();

	/**
	* Gets the install folder for a specific AppID.
	*
	* This works even if the application is not installed, based on where the game would be installed with the default Steam library location.
	*
	* @param	appID			The App ID to get the install dir for.
	* @param	path			The string buffer that the folder path will be copied into.
	* @param	pathMaxLength	The size in bytes of the pchFolder buffer.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static int32 GetAppInstallDir(int32 appID, FString& folder);

	/**
	* Checks if the user is running from a beta branch, and gets the name of the branch if they are.
	*
	* @param	name	The buffer where the beta name will be copied in to.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool GetCurrentBetaName(FString& name);

	/**
	* Gets the number of DLC pieces for the current app.
	*
	* This is typically used to loop through each piece of DLC and get the info about each one with BGetDLCDataByIndex.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static int32 GetDLCCount();

	/**
	* Gets the time of purchase of the specified app in Unix epoch format (time since Jan 1st, 1970).
	*
	* This is useful for rewarding users based on their initial purchase date.
	*
	* @param	appID	The App ID to get the purchase time for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static int32 GetEarliestPurchaseUnixTime(int32 appID);

	/**
	* Gets a list of all installed depots for a given App ID in mount order.
	*
	* @param	appID			The App to list the depots for.
	* @param	maxDepots		The maximum number of depots to obtain, typically the size of pvecDepots.
	* @param	depots			A preallocated array that will be filled with the list of depots.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static int32 GetInstalledDepots(int32 appID, int32 maxDepots, TArray<int32>& depots);
	
	/**
	* Gets the command line if the game was launched via Steam URL, e.g. steam://run/<appid>//<command line>/. 
	*
	* This method is preferable to launching with a command line via the operating system, which can be a security risk.
	* In order for rich presence joins to go through this and not be placed on the OS command line, you must enable "Use launch command line" from the Installation > General page on your app.
	*
	* @param	commandLine			The string buffer that the command line will be copied into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static int GetLaunchCommandLine(FString& commandLine);

	/**
	* Allows you to install an optional DLC.
	*
	* @param	appID	The DLC you want to install.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static void InstallDLC(int32 appID);

	/**
	* Checks if a specific app is installed.
	*
	* The app may not actually be owned by the current user, they may have it left over from a free weekend, etc.
	* This only works for base applications, not Downloadable Content (DLC). Use BIsDlcInstalled for DLC instead.
	*
	* @param	appID	The App ID of the application to check.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool BIsAppInstalled(int32 appID);

	/**
	* Allows you to force verify game content on next launch.
	*
	* If you detect the game is out-of-date (for example, by having the client detect a version mismatch with a server),
	* you can call use MarkContentCorrupt to force a verify, show a message to the user, and then quit.
	*
	* @param	bMissingFilesOnly	Only scan for missing files, don't verify the checksum of each file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool MarkContentCorrupt(bool bMissingFilesOnly);

	/**
	* Allows you to uninstall an optional DLC.
	*
	* @param	appID	The DLC you want to uninstall.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static void UninstallDLC(int32 appID);

	/**
	* Gets the Steam ID of the original owner of the current app. If it's different from the current user then it is borrowed.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static FSteamID GetAppOwner();

	/**
	* Gets the associated launch parameter if the game is run via steam://run/<appid>/?param1=value1;param2=value2;param3=value3 etc.
	*
	* Parameter names starting with the character '@' are reserved for internal use and will always return an empty string.
	* Parameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game, but it is advised that you not param names beginning with an underscore for your own features.
	*
	* @param	key		The launch key to test for. Ex: param1
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static FString GetLaunchQueryParam(FString key);

	/**
	* Gets the download progress for optional DLC.
	*
	* @param	appID				The App ID of the DLC to monitor
	* @param	bytesDownloaded		Returns the number of bytes downloaded.
	* @param	bytesTotal			Returns the total size of the download in bytes.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static bool GetDlcDownloadProgress(int32 appID, int32& bytesDownloaded, int32& bytesTotal);

	/**
	* Gets the buildid of this app, may change at any time based on backend updates to the game.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps")
		static int32 GetAppBuildId();

	/**
	* Asynchronously retrieves metadata details about a specific file in the depot manifest.
	*
	* Currently provides:
	* The file size in bytes.
	* The file's SHA1 hash.
	* The file's flags.
	*
	* @param	fileName	The absolute path and name to the file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Apps", meta = (AutoCreateRefTerm = "callback"))
		void GetFileDetails(const FOnFileDetailsResult& callback, FString fileName);
private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	STEAM_CALLBACK_MANUAL(UApps, OnDLCInstalled, DlcInstalled_t, OnDLCInstalledCallback);
	STEAM_CALLBACK_MANUAL(UApps, OnFileDetailsResult, FileDetailsResult_t, OnOnFileDetailsResultCallback);
};
