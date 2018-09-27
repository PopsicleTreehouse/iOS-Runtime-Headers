/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXDataStore : NSObject {
    unsigned long long  _actionHistoryLengthPerAppAction;
    _PASSqliteDatabase * _db;
    PETScalarEventTracker * _dbMigrationTracker;
    _ATXDuetHelper * _duetHelper;
    NSString * _path;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _schemaVersion;
}

@property (nonatomic) unsigned long long actionHistoryLengthPerAppAction;
@property (nonatomic, readonly) _PASSqliteDatabase *db;

+ (void)_simulateCrashForMigrationFailure:(id)arg1;
+ (id)defaultPath;
+ (id)loadDataFromFile:(id)arg1;
+ (bool)pareDownForBackup:(struct sqlite3 { }*)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_databaseSchema;
- (struct _PASDBIterAction_ { bool x1; })_deserializeActionLogRowWithStmt:(id)arg1 invokingBlock:(id /* block */)arg2;
- (void)_disconnectFromDb;
- (void)_enumerateAppInfoAppActionsExecutingBlock:(id /* block */)arg1;
- (void)_enumerateAppInfoBundlesExecutingBlock:(id /* block */)arg1;
- (void)_markBundleIdAsExtension:(id)arg1;
- (void)_markBundleIdsAsExtension:(id)arg1;
- (long long)_regenerateSlotSetKeys;
- (bool)_removeActionsWithoutTitle;
- (void)_removeFeedbackForBundleId:(id)arg1;
- (bool)_reset;
- (void)_testMigrate;
- (void)_testMigrateToSchema:(unsigned long long)arg1;
- (id)_trimMigrationPlan:(id)arg1 toSchema:(unsigned long long)arg2;
- (id)actionAndSlotsForRowId:(id)arg1;
- (id)actionFeedbackLogKeys;
- (id)actionForSlotUUID:(id)arg1;
- (unsigned long long)actionHistoryLengthPerAppAction;
- (id)actionLogKeys;
- (void)addAppActionLaunchForAppAction:(id)arg1 date:(id)arg2;
- (void)addAppInstallForBundleId:(id)arg1 date:(id)arg2 genreId:(id)arg3 subGenreIds:(id)arg4;
- (void)addAppInstallForBundleId:(id)arg1 date:(id)arg2 genreId:(id)arg3 subGenreIds:(id)arg4 app2VecCluster:(id)arg5;
- (void)addAppLaunchForAppLaunchSequence:(id)arg1 date:(id)arg2;
- (void)addAppLaunchForBundleId:(id)arg1 date:(id)arg2 withLaunchType:(long long)arg3;
- (void)addCategoricalHistogramData:(id)arg1 forHistogramOfType:(long long)arg2;
- (void)addExtensionLaunchForBundleId:(id)arg1 date:(id)arg2;
- (void)addHistogramData:(id)arg1 forHistogramOfType:(long long)arg2;
- (bool)allActionsAndSlots:(id)arg1 success:(long long*)arg2;
- (id)appInfoForBundleId:(id)arg1;
- (id)appLaunchSequence;
- (id)averageSecondsBetweenAppActionsForAppAction:(id)arg1;
- (id)blobOfType:(long long)arg1;
- (id)categoricalHistogramDataForHistogramType:(long long)arg1;
- (bool)checkIfInDB:(id)arg1 suggestionType:(long long)arg2;
- (void)clearAppInstallInfo;
- (void)clearAppLaunchInfo;
- (void)clearDatabase;
- (long long)configureDatabase;
- (bool)containsActionType:(id)arg1;
- (long long)currentSchemaVersion;
- (id)db;
- (void)deleteLaunchesFollowingAppAction:(id)arg1;
- (void)deleteLaunchesFollowingBundle:(id)arg1;
- (id)deletionHighWaterMark;
- (void)enumerateActionOfType:(id)arg1 bundleId:(id)arg2 block:(id /* block */)arg3;
- (void)enumerateActionsInUUIDSet:(id)arg1 block:(id /* block */)arg2;
- (void)enumerateAppInfoAppActionsExecutingBlock:(id /* block */)arg1;
- (void)enumerateAppInfoBundlesExecutingBlock:(id /* block */)arg1;
- (void)enumerateFeedbackForActionOfType:(id)arg1 bundleId:(id)arg2 block:(id /* block */)arg3;
- (void)enumerateSlotUuidsOfType:(id)arg1 bundleId:(id)arg2 block:(id /* block */)arg3;
- (void)enumerateStateForApps:(id)arg1 withGlobalBlock:(id /* block */)arg2 thenWithPerAppBlock:(id /* block */)arg3;
- (void)enumerateStateForApps:(id)arg1 withGlobalBlock:(id /* block */)arg2 thenWithPerAppBlock:(id /* block */)arg3 readOnly:(bool)arg4;
- (void)enumerateStateForAppsReadOnly:(id)arg1 withGlobalBlock:(id /* block */)arg2 thenWithPerAppBlock:(id /* block */)arg3;
- (id)filenamesAndDataForBackup;
- (id)getSuggestionResponsesAsStringInDB;
- (bool)hasOrphanSlotSetKeys;
- (id)histogramDataForHistogramType:(long long)arg1;
- (id)init;
- (id)initWithInMemoryDataStore;
- (id)initWithPath:(id)arg1 andDuetHelper:(id)arg2;
- (void)insertSuggestionResponse:(id)arg1 response:(long long)arg2 timestamp:(long long)arg3 suggestionType:(long long)arg4;
- (void)integrityCheckOrAbort;
- (id)lastAppActionLaunchDateForAppAction:(id)arg1;
- (id)lastMessageToRecipient:(id)arg1;
- (long long)launchedAppCount;
- (id)loadAppActionInfo;
- (id)loadAppActionLaunchesFollowing:(id)arg1;
- (id)loadAppActionsFromAppActionInfo;
- (id)loadAppInfo;
- (id)loadLaunchesFollowingBundle:(id)arg1;
- (id)loadTopNAppActionsByPredictions:(unsigned long long)arg1;
- (id)medianSecondsBetweenAppActionsForAppAction:(id)arg1;
- (void)migrate;
- (long long)migrateToVersion:(unsigned long long)arg1 withMigrationPlan:(id)arg2;
- (void)migrateWithMigrationPlan:(id)arg1;
- (void)migrationPre44WriteActionType:(id)arg1 bundleId:(id)arg2 date:(id)arg3 action:(id)arg4 slotSets:(id)arg5 timeZone:(id)arg6 prevLocationUUID:(id)arg7 locationUUID:(id)arg8 weight:(double)arg9 actionUUID:(id)arg10 motionType:(long long)arg11;
- (bool)migrationUpdateOrInsertTimestamp:(long long)arg1 intoColumn:(id)arg2 forBundleId:(id)arg3;
- (long long)migration_AddExtensionInfo;
- (long long)migration_AppLaunchHistogramToTable;
- (long long)migration_DelinkFromCoreLocationVisitMonitoring;
- (long long)migration_DeprecateGenericAppIntentModels;
- (long long)migration_DeprecateIntentForAllAppsHistograms;
- (long long)migration_InstallDateToAppTable;
- (long long)migration_LaunchHistoriesToAppTable;
- (long long)migration_PrefillActionHistograms;
- (long long)migration_RemoveActionsWithoutTitle;
- (long long)migration_RemoveAllSubsequentLaunches;
- (long long)migration_RemoveFeedbackForUninstalledApps;
- (long long)migration_RemoveRestoreUserDefault;
- (long long)migration_SlotSetKeyCreation;
- (long long)migration_SlotSetKeyRegeneration;
- (long long)migration_failForTests;
- (long long)migration_moveCacheFiles;
- (void)pruneMessageRecipientsAddedBefore:(id)arg1;
- (void)recordConfirms:(double)arg1 rejects:(double)arg2 forActionType:(id)arg3 bundleId:(id)arg4 action:(id)arg5 slotSet:(id)arg6 actionUUID:(id)arg7 date:(id)arg8;
- (void)regenerateSlotSetKeyForBundleId:(id)arg1;
- (void)removeActionDataForActionUUID:(id)arg1;
- (void)removeActionDataForBundleId:(id)arg1;
- (void)removeActionsWithoutTitle;
- (void)removeAllAppActionPredictionFeedbackCounts;
- (void)removeAllFeedback;
- (void)removeAllSlotsFromActionFeedback;
- (void)removeAllSlotsFromActionLog;
- (void)removeAllSlotsFromSlotSetKey;
- (void)removeAppInfoForBundleId:(id)arg1;
- (void)removeAppLaunchesForBundleId:(id)arg1;
- (void)removeFeedbackForBundleId:(id)arg1;
- (void)removeInfoForAppAction:(id)arg1;
- (void)resetSuggestionResponses;
- (long long)runMigrationPlan:(id)arg1;
- (void)setActionHistoryLengthPerAppAction:(unsigned long long)arg1;
- (void)setDeletionHighWaterMark:(id)arg1;
- (long long)skipFromZeroSchema;
- (void)swapInDuetHelperStub:(id)arg1;
- (id)totalNumberOfActionTypesForBundleId:(id)arg1;
- (id)totalSlotsInDatastore;
- (void)trimActionHistoryWithAppWhitelist:(id)arg1;
- (long long)updateAlog:(id)arg1 slotsToMigrate:(id)arg2;
- (bool)updateOrInsertApp2VecCluster:(id)arg1 forBundleId:(id)arg2;
- (bool)updateOrInsertAverageSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2;
- (bool)updateOrInsertAverageSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2;
- (bool)updateOrInsertCategoricalHistogramData:(id)arg1 forHistogram:(long long)arg2;
- (bool)updateOrInsertGenreId:(id)arg1 subGenreIds:(id)arg2 forBundleId:(id)arg3;
- (bool)updateOrInsertHistogramData:(id)arg1 forHistogram:(long long)arg2;
- (bool)updateOrInsertInstallTimestamp:(long long)arg1 genreId:(id)arg2 subGenreIds:(id)arg3 app2VecCluster:(id)arg4 forBundleId:(id)arg5 isExtension:(bool)arg6;
- (bool)updateOrInsertMedianSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2;
- (bool)updateOrInsertMedianSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2;
- (bool)updateOrInsertMessageRecipient:(id)arg1 dateMessaged:(id)arg2;
- (bool)updateOrInsertPredictionsAndFeedbackForAppAction:(id)arg1 feedbackReceived:(bool)arg2 forUIType:(id)arg3;
- (bool)updateOrInsertSubsequentAppActionLaunchCountData:(id)arg1 forAppAction:(id)arg2;
- (bool)updateOrInsertSubsequentLaunchCountData:(id)arg1 forBundleId:(id)arg2;
- (bool)updateOrInsertTimestamp:(long long)arg1 forAppAction:(id)arg2;
- (bool)updateOrInsertTimestamp:(long long)arg1 intoColumn:(id)arg2 forBundleId:(id)arg3 isExtension:(bool)arg4;
- (void)updateSchemaVersionNumberTo:(long long)arg1;
- (void)writeActionType:(id)arg1 bundleId:(id)arg2 date:(id)arg3 action:(id)arg4 slotSets:(id)arg5 timeZone:(id)arg6 prevLocationUUID:(id)arg7 locationUUID:(id)arg8 weight:(double)arg9 actionUUID:(id)arg10 motionType:(long long)arg11 appSessionStartDate:(id)arg12 appSessionEndDate:(id)arg13;
- (void)writeApp2VecCluster:(id)arg1 forBundleId:(id)arg2;
- (void)writeAppActionLaunches:(id)arg1 followingAppAction:(id)arg2;
- (void)writeAverageSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2;
- (void)writeAverageSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2;
- (void)writeBlob:(id)arg1 type:(long long)arg2 expirationDate:(id)arg3;
- (void)writeGenreId:(id)arg1 subGenreIds:(id)arg2 forBundleId:(id)arg3;
- (void)writeLaunches:(id)arg1 followingBundle:(id)arg2;
- (void)writeMedianSecondsBetweenAppActions:(id)arg1 forAppAction:(id)arg2;
- (void)writeMedianSecondsBetweenLaunches:(id)arg1 forBundleId:(id)arg2;
- (bool)writeSlotSetKeyParameters:(id)arg1 rowId:(id)arg2 slotSet:(id)arg3 success:(long long*)arg4;

@end