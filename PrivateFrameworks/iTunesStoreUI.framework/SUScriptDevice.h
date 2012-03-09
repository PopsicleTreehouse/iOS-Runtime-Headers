/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSString, NSNumber, NSMutableArray;

@interface SUScriptDevice : SUScriptObject  {
    NSMutableArray *_scriptFunctions;
}

@property(readonly) int activeNetworkType;
@property(readonly) NSArray * automaticDownloadMediaTypes;
@property(readonly) NSNumber * diskSpaceAvailable;
@property(readonly) int hardwareType;
@property(readonly) NSNumber * mainScreenScale;
@property(readonly) NSString * capabilityNameEmail;
@property(readonly) NSString * capabilityNameExplicitMedia;
@property(readonly) NSString * capabilityNameHDVideo;
@property(readonly) NSString * capabilityNameHDVideo1080p;
@property(readonly) NSString * capabilityNameHDVideo720p;
@property(readonly) NSString * capabilityNamePodcasts;
@property(readonly) NSString * capabilityNameWiFi;
@property(readonly) int freeSpaceEffortLevelDoNothing;
@property(readonly) int freeSpaceEffortLevelAutomaticOnly;
@property(readonly) int freeSpaceEffortLevelManualSpaceManagement;
@property(readonly) int freeSpaceEffortLevelPromptUser;
@property(readonly) NSString * freeSpaceOptionEffortLevel;
@property(readonly) int hardwareTypeIPadJ1;
@property(readonly) int hardwareTypeIPadJ2;
@property(readonly) int hardwareTypeIPadJ2a;
@property(readonly) int hardwareTypeIPadK93;
@property(readonly) int hardwareTypeIPadK93a;
@property(readonly) int hardwareTypeIPadK94;
@property(readonly) int hardwareTypeIPadK95;
@property(readonly) int hardwareTypeIPhoneM68;
@property(readonly) int hardwareTypeIPhoneN82;
@property(readonly) int hardwareTypeIPhoneN88;
@property(readonly) int hardwareTypeIPhoneN90;
@property(readonly) int hardwareTypeIPhoneN92;
@property(readonly) int hardwareTypeIPhoneN94;
@property(readonly) int hardwareTypeIPodTouchN45;
@property(readonly) int hardwareTypeIPodTouchN72;
@property(readonly) int hardwareTypeIPodTouchN18;
@property(readonly) int hardwareTypeIPodTouchN81;
@property(readonly) int hardwareTypeIPodTouchN81a;
@property(readonly) int hardwareTypeUnknown;
@property(readonly) int hardwareTypeWildcatK48;
@property(readonly) int networkTypeNone;
@property(readonly) int networkType2G;
@property(readonly) int networkType3G;
@property(readonly) int networkType4G;
@property(readonly) int networkType5G;
@property(readonly) int networkType6G;
@property(readonly) int networkType7G;
@property(readonly) int networkType8G;
@property(readonly) int networkType9G;
@property(readonly) int networkTypeWiFi;
@property(readonly) NSString * orientationStringLandscapeLeft;
@property(readonly) NSString * orientationStringLandscapeRight;
@property(readonly) NSString * orientationStringPortrait;
@property(readonly) NSString * orientationStringPortraitUpsideDown;
@property(readonly) int restrictionBoolNo;
@property(readonly) int restrictionBoolNoData;
@property(readonly) int restrictionBoolYes;
@property(readonly) NSString * restrictionAccountModificationAllowed;
@property(readonly) NSString * restrictionAllowGlobalBackgroundFetchWhenRoaming;
@property(readonly) NSString * restrictionAllowVoiceDialing;
@property(readonly) NSString * restrictionAppInstallationAllowed;
@property(readonly) NSString * restrictionAppRemovalAllowed;
@property(readonly) NSString * restrictionCameraAllowed;
@property(readonly) NSString * restrictionCellularHDUploadsAllowed;
@property(readonly) NSString * restrictionITunesAllowed;
@property(readonly) NSString * restrictionITunesSocialAllowed;
@property(readonly) NSString * restrictionMultiplayerGamingAllowed;
@property(readonly) NSString * restrictionSafariAllowed;
@property(readonly) NSString * restrictionScreenShotAllowed;
@property(readonly) NSString * restrictionVideoConferencingAllowed;
@property(readonly) NSString * restrictionYouTubeAllowed;
@property(readonly) NSString * restrictionTypeApplications;
@property(readonly) NSString * restrictionTypeMovies;
@property(readonly) NSString * restrictionTypeTelevision;
@property(readonly) NSString * UTIImage;
@property(readonly) NSString * UTIMovie;
@property(readonly) NSString * UTIText;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)init;
- (void)dealloc;
- (id)attributeKeys;
- (id)UTIText;
- (id)UTIMovie;
- (id)UTIImage;
- (id)restrictionYouTubeAllowed;
- (id)restrictionVideoConferencingAllowed;
- (id)restrictionScreenShotAllowed;
- (id)restrictionSafariAllowed;
- (id)restrictionMultiplayerGamingAllowed;
- (id)restrictionITunesSocialAllowed;
- (id)restrictionITunesAllowed;
- (id)restrictionCellularHDUploadsAllowed;
- (id)restrictionCameraAllowed;
- (id)restrictionAppRemovalAllowed;
- (id)restrictionAppInstallationAllowed;
- (id)restrictionAllowVoiceDialing;
- (id)restrictionAllowGlobalBackgroundFetchWhenRoaming;
- (id)restrictionAccountModificationAllowed;
- (int)restrictionBoolYes;
- (int)restrictionBoolNoData;
- (int)restrictionBoolNo;
- (int)freeSpaceEffortLevelPromptUser;
- (int)freeSpaceEffortLevelManualSpaceManagement;
- (int)freeSpaceEffortLevelAutomaticOnly;
- (int)freeSpaceEffortLevelDoNothing;
- (id)orientationStringPortraitUpsideDown;
- (id)orientationStringPortrait;
- (id)orientationStringLandscapeRight;
- (id)orientationStringLandscapeLeft;
- (id)mainScreenScale;
- (id)automaticDownloadMediaTypes;
- (id)valueForRestriction:(id)arg1;
- (id)UTIForURL:(id)arg1;
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionHandler:(id)arg2;
- (id)restrictionLevelForType:(id)arg1;
- (void)requestFreeSpaceWithBytes:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
- (int)boolValueForRestriction:(id)arg1;
- (id)applicationsForUTI:(id)arg1;
- (id)capabilityNameWiFi;
- (id)capabilityNameHDVideo720p;
- (id)capabilityNameHDVideo1080p;
- (id)capabilityNameHDVideo;
- (int)hardwareTypeUnknown;
- (int)hardwareTypeWildcatK48;
- (int)hardwareTypeIPodTouchN81a;
- (int)hardwareTypeIPodTouchN81;
- (int)hardwareTypeIPodTouchN18;
- (int)hardwareTypeIPodTouchN72;
- (int)hardwareTypeIPodTouchN45;
- (int)hardwareTypeIPhoneN94;
- (int)hardwareTypeIPhoneN92;
- (int)hardwareTypeIPhoneN90;
- (int)hardwareTypeIPhoneN88;
- (int)hardwareTypeIPhoneN82;
- (int)hardwareTypeIPhoneM68;
- (int)hardwareTypeIPadK95;
- (int)hardwareTypeIPadK94;
- (int)hardwareTypeIPadK93a;
- (int)hardwareTypeIPadK93;
- (int)hardwareTypeIPadJ2a;
- (int)hardwareTypeIPadJ2;
- (int)hardwareTypeIPadJ1;
- (int)networkTypeNone;
- (int)networkTypeWiFi;
- (int)networkType9G;
- (int)networkType8G;
- (int)networkType7G;
- (int)networkType6G;
- (int)networkType5G;
- (int)networkType4G;
- (int)networkType3G;
- (int)networkType2G;
- (id)restrictionTypeTelevision;
- (id)restrictionTypeMovies;
- (id)restrictionTypeApplications;
- (void)_removeScriptFunction:(id)arg1;
- (id)freeSpaceOptionEffortLevel;
- (void)_addScriptFunction:(id)arg1;
- (int)_deviceCapabilityForString:(id)arg1;
- (void)_showDialogForCapabilities:(id)arg1 mismatches:(id)arg2;
- (void)_autoDownloadKindsChangedNotification:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)capabilityNameExplicitMedia;
- (int)hardwareType;
- (id)diskSpaceAvailable;
- (id)capabilityNameEmail;
- (id)hasCapability:(id)arg1;
- (id)capabilityNamePodcasts;
- (int)activeNetworkType;
- (id)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(BOOL)arg2;

@end
