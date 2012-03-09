/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CoreDAVAccountInfoProvider>, BookmarkDAVSyncData, NSDictionary, NSMutableSet, <CoreDAVTaskManager>, NSURL, NSString;

@interface BookmarkDAVSyncDriver : NSObject <CoreDAVLocalDBTreeInfoProvider, CoreDAVDeleteTaskDelegate, CoreDAVGetAccountPropertiesTaskGroupDelegate, CoreDAVContainerInfoTaskGroupDelegate> {
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    <CoreDAVTaskManager> *_taskManager;
    NSMutableSet *_outstandingTaskGroups;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _getAccountPropertiesHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _syncHandler;

    void *_changeToken;
    NSURL *_homeURL;
    NSString *_pushKey;
    NSDictionary *_pushTransport;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _openDBBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _getDBBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _saveDBBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _closeDBBlock;

    BookmarkDAVSyncData *_topLevelSyncData;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _registerForPush;

    BOOL _forceSafariOrdering;
    BOOL _forceSave;
}

@property(readonly) <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property(readonly) unsigned int outstandingActionCount;
@property(retain) NSString * pushKey;
@property(retain) NSDictionary * pushTransport;
@property(retain) NSURL * homeURL;
@property(copy) id getAccountPropertiesHandler;
@property(copy) id syncHandler;
@property(readonly) BookmarkDAVSyncData * topLevelSyncData;


- (void)dealloc;
- (void)setPushTransport:(id)arg1;
- (id)pushTransport;
- (id)homeURL;
- (void)recursiveContainerSyncTask:(id)arg1 receivedAddedOrModifiedFolder:(id)arg2;
- (BOOL)setLocalETag:(id)arg1 forItemWithURL:(id)arg2;
- (void)notePutToURL:(id)arg1 withDataPayload:(id)arg2 finishedWithIgnoredError:(id)arg3;
- (void)recursiveContainerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
- (id)copyLocalETagsForURLs:(id)arg1;
- (void)recursiveContainerSyncTask:(id)arg1 completedSyncOfFolderWithURL:(id)arg2 newCTag:(id)arg3 newPTag:(id)arg4 addedOrModified:(id)arg5 removed:(id)arg6 error:(id)arg7;
- (void)recursiveContainerSyncTask:(id)arg1 completedFullSyncWithNewCTag:(id)arg2 newPTag:(id)arg3 newSyncToken:(id)arg4 error:(id)arg5;
- (void)getAccountPropertiesTask:(id)arg1 completedWithError:(id)arg2;
- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;
- (id)accountInfoProvider;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)setPushKey:(id)arg1;
- (id)pushKey;
- (BOOL)_applyReturnedBookmarks:(id)arg1 withPushedBookmarks:(struct __CFArray { }*)arg2;
- (id)_bookmarkXBELDataForBookmarkChanges:(struct __CFArray { }*)arg1 pushedBookmarks:(struct __CFArray { }*)arg2 maxResources:(int)arg3 maxSize:(int)arg4;
- (void)_setRootCTag:(id)arg1 rootSyncToken:(id)arg2 knownOrderings:(id)arg3;
- (void)_removeTempIdsFromFoldersInDict:(struct __CFDictionary { }*)arg1;
- (BOOL)_applyReturnedFolders:(id)arg1 parentToArrayOfChildrenFolders:(struct __CFDictionary { }*)arg2 topmostFolders:(struct __CFArray { }*)arg3 postedToURL:(id)arg4;
- (id)_folderXBELDataForTopmostFolderChanges:(struct __CFArray { }*)arg1 foldersToAddByServerId:(struct __CFDictionary { }*)arg2 parentToArrayOfChildrenFolderChanges:(struct __CFDictionary { }*)arg3 pushedParentToArrayOfChildrenFolders:(struct __CFDictionary { }*)arg4 pushedTopmostFolders:(struct __CFArray { }*)arg5 maxResources:(int)arg6 maxSize:(int)arg7;
- (BOOL)_applyUnmatchedParsedFolders:(id)arg1;
- (BOOL)_matchParsedFolders:(id)arg1 toPushedFolders:(struct __CFDictionary { }*)arg2 unmatchedParsedFolders:(id)arg3 parsedSetsOfChildrenFoldersByParentURL:(id)arg4 arraysOfChildrenByNameByParent:(struct __CFDictionary { }*)arg5;
- (BOOL)_handleErrorItem:(id)arg1 forBAItem:(void*)arg2;
- (BOOL)_addChange:(void*)arg1 toData:(id)arg2 numActionsP:(int*)arg3 runningSizeP:(int*)arg4 maxResources:(int)arg5 maxSize:(int)arg6 foldersToAddByServerId:(struct __CFDictionary { }*)arg7 parentToArrayOfChildrenFolderChanges:(struct __CFDictionary { }*)arg8 pushedParentToArrayOfChildrenFolders:(struct __CFDictionary { }*)arg9;
- (id)syncHandler;
- (id)getAccountPropertiesHandler;
- (unsigned int)outstandingActionCount;
- (void)syncWithRemoteChanges:(BOOL)arg1 completionHandler:(id)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 openDBBlock:(id)arg3 getDBBlock:(id)arg4 saveDBBlock:(id)arg5 closeDBBlock:(id)arg6 registerForPush:(id)arg7 forceSafariOrdering:(BOOL)arg8;
- (BOOL)getCTag:(id*)arg1 pTag:(id*)arg2 forFolderWithURL:(id)arg3;
- (void)_finishInitialSyncShouldPushChanges:(BOOL)arg1;
- (void)_setChildrenOrder:(id)arg1 forFolderURL:(id)arg2;
- (void)_handleAddsOrModifies:(id)arg1 removes:(id)arg2;
- (void)_makeBookmarkFromDAVNode:(id)arg1;
- (void)_makeFolderFromContainer:(id)arg1;
- (int)_clientOrderOfItemPrecedingItemAtServerOrder:(int)arg1 inParentWithURL:(id)arg2;
- (void)_saveDB;
- (id)_copyDAVFolderFromFolderRef:(void*)arg1;
- (int)_serverOrderForChange:(void*)arg1;
- (id)_copyDAVBookmarkFromBookmarkRef:(void*)arg1;
- (void)_setServerIdOnItem:(void*)arg1 isBookmark:(BOOL)arg2;
- (void)getAccountPropertiesWithCompletionHandler:(id)arg1;
- (void)_syncWithRemoteChanges:(BOOL)arg1 completionHandler:(id)arg2 skipAddChanges:(BOOL)arg3;
- (void)setSyncHandler:(id)arg1;
- (id)_dbRelativeString:(id)arg1;
- (void)setGetAccountPropertiesHandler:(id)arg1;
- (void)_closeDBAndSave:(BOOL)arg1;
- (void)setHomeURL:(id)arg1;
- (id)topLevelSyncData;
- (void)_invokeAndNilGetAccountPropertiesHandlerWithSuccess:(BOOL)arg1 error:(id)arg2;

@end
