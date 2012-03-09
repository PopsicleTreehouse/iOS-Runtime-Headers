/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSDictionary;

@interface MCRestrictionManager : NSObject  {
    NSMutableDictionary *_defaultRestrictions;
    NSMutableDictionary *_restrictions;
    NSMutableDictionary *_profileRestrictions;
    NSMutableDictionary *_clientRestrictions;
    NSDictionary *_userSettings;
    NSDictionary *_effectiveUserSettings;
    NSDictionary *_clientTypeLoaders;
    struct __CFDictionary { } *_clientTypeToLoaderClass;
    struct __CFDictionary { } *_clientTypeToLoaderSelector;
    struct __CFDictionary { } *_clientTypeToRecomputeComplianceSelector;
    struct dispatch_queue_s { } *_syncQueue;
    struct dispatch_queue_s { } *_nagMetaQueue;
    int _senderPID;
}

@property int senderPID;

+ (void)_setPathsRestrictionsFilePath:(id)arg1 defaultRestrictionsFilePath:(id)arg2 clientTypeLoadersFilePath:(id)arg3 profileRestrictionsFilePath:(id)arg4 clientRestrictionsFilePath:(id)arg5 userSettingsFilePath:(id)arg6 effectiveUserSettingsFilePath:(id)arg7;
+ (id)filterRestrictionDictionaryForPublicUse:(id)arg1;
+ (id)defaultParametersForBoolSetting:(id)arg1;
+ (id)defaultParametersForValueSetting:(id)arg1;
+ (int)defaultBoolValueForSetting:(id)arg1;
+ (id)defaultValueForSetting:(id)arg1;
+ (int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (BOOL)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (BOOL)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (BOOL)_isDictionary:(id)arg1 differentFromDictionary:(id)arg2;
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg1 toRestrictionsDictionary:(id)arg2 outChangeDetected:(BOOL*)arg3 outError:(id*)arg4;
+ (id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 profileRestrictions:(id)arg3 clientRestrictions:(id)arg4 outRestrictionsChanged:(BOOL*)arg5 outError:(id*)arg6;
+ (id)objectForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (id)defaultSettingsDict;
+ (int)restrictedBoolForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (id)valueForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (BOOL)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (BOOL)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)sharedManager;

- (id)description;
- (void)dealloc;
- (id)defaultRestrictionsDictionary;
- (BOOL)setProfileRestrictions:(id)arg1 outRestrictionsChanged:(BOOL*)arg2 outEffectiveSettingsChanged:(BOOL*)arg3 outRecomputedNag:(BOOL*)arg4 outError:(id*)arg5;
- (id)clientRestrictionsForClientUUID:(id)arg1;
- (id)allClientUUIDsForClientType:(id)arg1;
- (BOOL)setAllClientRestrictions:(id)arg1 outRestrictionsChanged:(BOOL*)arg2 outEffectiveSettingsChanged:(BOOL*)arg3 outRecomputedNag:(BOOL*)arg4 outError:(id*)arg5;
- (BOOL)setClientRestrictions:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarning:(id)arg5 outRestrictionsChanged:(BOOL*)arg6 outEffectiveSettingsChanged:(BOOL*)arg7 outRecomputedNag:(BOOL*)arg8 outError:(id*)arg9;
- (BOOL)removeOrphanedClientRestrictions;
- (void)setShowNagMessage;
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1;
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg1 outChangeDetected:(BOOL*)arg2 outError:(id*)arg3;
- (int)restrictedBoolForFeature:(id)arg1;
- (id)objectForFeature:(id)arg1;
- (id)userSettings;
- (void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2;
- (int)effectiveRestrictedBoolForSetting:(id)arg1;
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isValueSettingLockedDownByRestrictions:(id)arg1;
- (void)removeBoolSetting:(id)arg1;
- (void)removeValueSetting:(id)arg1;
- (void)resetAllSettingsToDefaults;
- (int)senderPID;
- (void)setSenderPID:(int)arg1;
- (id)_defaultRestrictionsDictionary;
- (id)_currentRestrictionsDictionary;
- (id)_profileRestrictions;
- (id)profileRestrictions;
- (id)_clientRestrictions;
- (void)_setRestrictions:(id)arg1;
- (id)_effectiveUserSettings;
- (BOOL)_recomputeEffectiveUserSettings;
- (id)_clientRestrictionsForClientUUID:(id)arg1;
- (id)_userInfoForClientUUID:(id)arg1;
- (void)_setClientRestrictionsWithoutNotifications:(id)arg1;
- (BOOL)_setAllClientRestrictions:(id)arg1 outRestrictionsChanged:(BOOL*)arg2 outEffectiveSettingsChanged:(BOOL*)arg3 outError:(id*)arg4;
- (id)_clientTypeForClientUUID:(id)arg1;
- (id)_loadClientLoaders;
- (id)_liveClientUUIDsForClientType:(id)arg1;
- (id)combinedProfileRestrictions;
- (id)clientRestrictions;
- (id)_userSettings;
- (BOOL)setParametersForSettingsByType:(id)arg1;
- (BOOL)_setEffectiveUserSettings:(id)arg1;
- (BOOL)_setUserSettings:(id)arg1;
- (id)effectiveUserSettings;
- (id)effectiveParametersForBoolSetting:(id)arg1;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (id)_defaultSettingsDictionary;
- (BOOL)recomputeNagMetadata;
- (void)notifyClientsToRecomputeCompliance;
- (id)currentRestrictionsDictionary;
- (id)valueForFeature:(id)arg1;
- (void)invalidateRestrictions;
- (void)invalidateSettings;
- (id)_init;
- (id)effectiveValueForSetting:(id)arg1;
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2;
- (id)userInfoForClientUUID:(id)arg1;

@end
