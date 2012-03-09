/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSMutableArray, NSLock, ASFolderHierarchy, ASTaskManager, NSMutableSet, ASProtocol, ASAutodiscoverTask;

@interface ASAccount : DAAccount <AccountSettingsUIAccount> {
    ASFolderHierarchy *_folderHierarchy;
    ASTaskManager *_taskManager;
    ASProtocol *_protocol;
    NSMutableSet *_searchTaskSet;
    NSMutableArray *_autodiscoveryServersToTry;
    NSLock *_autodiscoverTaskLock;
    ASAutodiscoverTask *_autodiscoverTask;
    BOOL _useHTTPForTesting;
    BOOL _useLocalhostForAutodiscoveryTesting;
    BOOL _isValidating;
}

@property int mailNumberOfPastDaysToSync;
@property(readonly) int mailNumberOfPastDaysToSyncUpperLimit;
@property(setter=setASAccountVersion:) int asAccountVersion;

+ (id)supportedDataclasses;
+ (Class)clientClass;
+ (id)defaultProperties;
+ (Class)accountClass;
+ (void)cleanUpFilesForAccountWithId:(id)arg1;
+ (id)displayedAccountTypeString;
+ (id)displayedShortAccountTypeString;
+ (id)allowedDataclasses;
+ (Class)detailControllerClass;
+ (Class)syncControllerClass;
+ (void*)createSyncDataSourceForDataclass:(id)arg1 options:(id)arg2;

- (void)setHost:(id)arg1;
- (int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 consumer:(id)arg8 context:(void*)arg9;
- (id)inboxFolder;
- (id)sentItemsFolder;
- (id)deletedItemsFolder;
- (BOOL)isHotmailAccount;
- (BOOL)enabledForDADataclass:(int)arg1;
- (id)emailAddress;
- (int)supportsMailboxSearch;
- (int)mailNumberOfPastDaysToSync;
- (void)cancelTaskWithID:(int)arg1;
- (int)supportsEmailFlagging;
- (void)performSearchQuery:(id)arg1;
- (void)cancelSearchQuery:(id)arg1;
- (id)signingIdentityPersistentReference;
- (void)setSigningIdentityPersistentReference:(id)arg1;
- (id)encryptionIdentityPersistentReference;
- (void)setEncryptionIdentityPersistentReference:(id)arg1;
- (BOOL)supportsDADataclass:(int)arg1;
- (id)supportedDataclasses;
- (void)setPort:(int)arg1;
- (void)dealloc;
- (void)setEmailAddresses:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (id)emailAddresses;
- (void)setEmailAddress:(id)arg1;
- (id)displayName;
- (id)initWithProperties:(id)arg1;
- (id)protocol;
- (int)port;
- (id)host;
- (id)localizedInvalidPasswordMessage;
- (id)localizedIdenticalAccountFailureMessage;
- (BOOL)isEqualToAccount:(id)arg1;
- (BOOL)isActiveSyncAccount;
- (void)setSavedFolderPathsThatClientsCareAbout:(id)arg1;
- (id)savedFolderPathsThatClientsCareAbout;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (void)cancelAutodiscovery;
- (void)setUseLocalhostForAutodiscoveryTesting:(BOOL)arg1;
- (void)setUseHTTPForTesting:(BOOL)arg1;
- (void)moveItemsTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 movedItems:(id)arg4;
- (void*)_copyDefaultExchangeEventsCalendar:(BOOL)arg1;
- (void)sendMailTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3;
- (BOOL)folderItemsSyncTask:(id)arg1 hasPartialAdded:(id)arg2 removed:(id)arg3 modified:(id)arg4 addedResponse:(id)arg5 modifiedResponse:(id)arg6 removedResponse:(id)arg7 fetchedResponse:(id)arg8 moreAvailable:(BOOL)arg9;
- (BOOL)folderItemsSyncTask:(id)arg1 handleStreamOperation:(int)arg2 forCodePage:(int)arg3 tag:(int)arg4 withParentItem:(id)arg5 withData:(char *)arg6 dataLength:(int)arg7;
- (void)folderItemsSyncTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 newSyncKey:(id)arg4 added:(id)arg5 removed:(id)arg6 modified:(id)arg7 addedResponse:(id)arg8 modifiedResponse:(id)arg9 removedResponse:(id)arg10 fetchedResponse:(id)arg11;
- (BOOL)shouldFixOnDiskDeviceId;
- (id)defaultContainerIdentifierForDADataclass:(int)arg1;
- (id)asFolderHierarchyTaskManager:(id)arg1;
- (id)toDosFolders;
- (id)eventsFolders;
- (id)contactsFolders;
- (int)sniffableTypeForFolder:(id)arg1;
- (id)visibleFolders;
- (id)shortTypeString;
- (void)getOptionsTask:(id)arg1 completedWithStatus:(int)arg2 supportedCommands:(id)arg3 supportedVersions:(id)arg4 error:(id)arg5;
- (void)checkValidityWithConsumer:(id)arg1;
- (id)usernameWithoutDomain;
- (id)domainOnly;
- (void)accountDidUpdateProtocolVersion;
- (void)setLastKnownProtocolVersion:(id)arg1;
- (void)upgradeWithProtocolVersion:(id)arg1;
- (void)setLastKnownProtocolVersion:(id)arg1 save:(BOOL)arg2;
- (BOOL)_shouldSaveLastKnownProtocolVersion;
- (BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;
- (id)lastKnownProtocolVersion;
- (int)mailNumberOfPastDaysToSyncUpperLimit;
- (void)setUseSSL:(BOOL)arg1;
- (void)_startAutodiscoverTaskWithConsumer:(id)arg1;
- (BOOL)_generateAutodiscoverURLsForEmailAddress:(id)arg1;
- (void*)_copyExchangeCalendarStore:(BOOL)arg1;
- (void)_fillOutActionsArray:(id)arg1 responseArray:(id)arg2 withTask:(id)arg3 added:(id)arg4 removed:(id)arg5 modified:(id)arg6 perserved:(id)arg7 addedResponse:(id)arg8 modifiedResponse:(id)arg9 removedResponse:(id)arg10 fetchedResponse:(id)arg11;
- (void)_removeInvitationsForMailboxFolderID:(id)arg1;
- (void)_getContextElementsForItemChangeType:(int)arg1 dataclass:(int)arg2 nativeContext:(id)arg3 outContext:(id*)arg4 outServerId:(id*)arg5;
- (id)defaultToDosFolder;
- (id)defaultEventsFolder;
- (id)defaultContactsFolder;
- (id)asFolderWithId:(id)arg1;
- (id)_defaultMailFolderWithDefaultType:(int)arg1 fallbackType:(int)arg2 fallbackName:(id)arg3;
- (id)folderWithId:(id)arg1;
- (id)_visibleASFolders;
- (id)_folderHierarchy;
- (void)setEnabled:(BOOL)arg1 forDADataclass:(int)arg2 changeType:(int)arg3;
- (BOOL)accountNeedsUpgrade;
- (void)setASAccountVersion:(int)arg1;
- (BOOL)_upgradeSelfFromVersion:(int)arg1 superClassUpgraded:(BOOL)arg2;
- (int)asAccountVersion;
- (BOOL)upgradeAccount;
- (void)resetAccountID;
- (BOOL)_needsNewAccountIDForOldVersion:(int)arg1;
- (id)_oldURLsForKeychain;
- (id)typeString;
- (BOOL)isGoogleAccount;
- (id)stateString;
- (id)_newPolicyManager;
- (void)blowAwayFolderCache;
- (void)cleanupAccountFiles;
- (void)saveAccountSettings;
- (struct __CFString { }*)passwordIsKnownGoodNotificationName;
- (void)itemOperationsTask:(id)arg1 completedWithStatus:(int)arg2 error:(id)arg3 responses:(id)arg4;
- (BOOL)itemOperationsTask:(id)arg1 hasPartialResponses:(id)arg2;
- (BOOL)itemOperationsTask:(id)arg1 handleStreamOperation:(int)arg2 forCodePage:(int)arg3 tag:(int)arg4 withParentItem:(id)arg5 withData:(char *)arg6 dataLength:(int)arg7;
- (void)searchTask:(id)arg1 finishedWithError:(id)arg2;
- (void)searchTask:(id)arg1 returnedTotalCount:(id)arg2;
- (void)searchTask:(id)arg1 returnedResults:(id)arg2;
- (id)addressBookConstraintsPath;
- (id)calendarConstraintsPath;
- (BOOL)useSSL;
- (void)fetchAttachmentTask:(id)arg1 receivedData:(id)arg2 ofContentType:(id)arg3;
- (void)fetchAttachmentTask:(id)arg1 completedWithStatus:(int)arg2 dataWasBase64:(BOOL)arg3 error:(id)arg4;
- (void)autodiscoverTask:(id)arg1 completedWithStatus:(int)arg2 accountInfo:(id)arg3 shouldRetryWithEmail:(id)arg4 error:(id)arg5;
- (id)taskManager;
- (void)setShouldFailAllTasks:(BOOL)arg1;
- (id)policyManager;
- (id)existingTaskManager;
- (struct __CFString { }*)passwordChangedNotificationName;
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)arg1;
- (id)folderIdsThatExternalClientsCareAbout;
- (id)foldersTag;
- (void)applyNewAccountProperties:(id)arg1 forceSave:(BOOL)arg2;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
- (void)setMailNumberOfPastDaysToSync:(int)arg1;
- (BOOL)searchQueriesRunning;
- (void)cancelAllSearchQueries;
- (id)uniqueId;
- (BOOL)supportsPush;
- (id)enabledDataclasses;
- (BOOL)otherAccountEnabledForDataclass:(id)arg1;
- (BOOL)isOwnedByPayload:(id)arg1;
- (id)accountInfoUsername;
- (id)_sortedVisibleASMailFolders;
- (id)_sortASFolders:(id)arg1 startingAtID:(id)arg2;

@end
