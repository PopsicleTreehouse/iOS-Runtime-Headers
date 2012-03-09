/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSMutableSet;

@interface DADConnection : NSObject <AccountNotificationProtocol> {
    struct _xpc_connection_s { } *_conn;
    struct dispatch_queue_s { } *_muckingWithConn;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _statusReportBlock;

    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_defaultContainerIDCache;
}

+ (void)accountDidChange:(id)arg1 forDataclass:(id)arg2;
+ (void)accountWillChange:(id)arg1 forDataclass:(id)arg2;
+ (void)noteAccountChanges:(id)arg1;
+ (void)setShouldIgnoreAccountChanges;
+ (id)sharedConnectionIfServerIsRunning;
+ (id)sharedConnection;

- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 ignoreThrottleTimer:(BOOL)arg3;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2;
- (id)init;
- (void)dealloc;
- (id)statusReports;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (void)requestDaemonStartMonitoringAgents_Sync;
- (void)_requestDaemonStopMonitoringAgents_Sync;
- (void)_downloadFinished:(void*)arg1;
- (void)_downloadProgress:(void*)arg1;
- (void)_getStatusReportsFromClient:(void*)arg1;
- (void)_folderChangeFinished:(void*)arg1;
- (void)_serverContactsSearchQueryFinished:(void*)arg1;
- (void)_logDataAccessStatus:(void*)arg1;
- (void)_policyKeyChanged:(void*)arg1;
- (void)resetTimersAndWarnings;
- (void)_registerForAppResumedNotification;
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(id)arg2;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3 isUserRequested:(BOOL)arg4;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(BOOL)arg3;
- (void)_resetThrottleTimersForAccountId:(id)arg1;
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg1 waitForReply:(BOOL)arg2;
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(BOOL)arg3;
- (void)_serverDiedWithReason:(void*)arg1;
- (void)_reallyRegisterForInterrogation;
- (void)_tearDownInFlightObjects;
- (void)handleURL:(id)arg1;
- (BOOL)registerForInterrogationWithBlock:(id)arg1;
- (void)removeStoresForAccountWithID:(id)arg1;
- (void)requestDaemonShutdown;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(struct dispatch_queue_s { }*)arg3 progressBlock:(id)arg4 completionBlock:(id)arg5;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;
- (BOOL)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;
- (void)cancelServerContactsSearch:(id)arg1;
- (struct _xpc_connection_s { }*)_connection;
- (id)_init;
- (void*)_createReplyToRequest:(void*)arg1 withProperties:(id)arg2;
- (void)_dispatchMessage:(void*)arg1;
- (id)defaultContainerIdentifierForAccountID:(id)arg1 andDataclass:(int)arg2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2 isUserRequested:(BOOL)arg3;
- (void)requestDaemonStopMonitoringAgents;
- (void)requestDaemonStartMonitoringAgents;
- (BOOL)requestPolicyUpdateForAccountID:(id)arg1;
- (void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 andAccountWithID:(id)arg3;
- (BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;
- (BOOL)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (void)applyNewAccountProperties:(id)arg1 onAccountWithId:(id)arg2 forceSave:(BOOL)arg3;
- (BOOL)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (BOOL)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (void)_foldersUpdated:(void*)arg1;

@end
