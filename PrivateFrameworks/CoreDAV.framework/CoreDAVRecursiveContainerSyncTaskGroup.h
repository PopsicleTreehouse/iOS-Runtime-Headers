/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL, <CoreDAVLocalDBTreeInfoProvider>, NSMutableArray, NSDictionary, NSString, NSMutableSet, NSMutableDictionary, NSArray;

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate> {
    int _phase;
    NSURL *_folderURL;
    NSString *_previousCTag;
    NSString *_nextCTag;
    NSString *_previousSyncToken;
    NSString *_nextSyncToken;
    NSString *_previousPTag;
    NSString *_nextPTag;
    NSArray *_actions;
    void *_context;
    unsigned int _multiGetBatchSize;
    NSMutableArray *_unsubmittedTasks;
    NSURL *_addMemberURL;
    BOOL _useMultiGet;
    NSMutableSet *_syncReportDeletedURLs;
    NSMutableDictionary *_leafURLToETag;
    NSMutableArray *_childCollectionURL;
    Class _appSpecificDataItemClass;
    Class _appSpecificContainerItemClass;
    BOOL _syncItemOrder;
    NSMutableDictionary *_folderURLToChildrenURLOrder;
    BOOL _preflightCTag;
}

@property(readonly) NSURL * folderURL;
@property(readonly) NSString * previousCTag;
@property BOOL preflightCTag;
@property(retain) NSString * previousSyncToken;
@property(readonly) void* context;
@property unsigned int multiGetBatchSize;
@property <CoreDAVLocalDBTreeInfoProvider> * delegate;
@property(readonly) NSDictionary * folderURLToChildrenURLOrder;
@property(retain) NSString * nextCTag;


- (id)description;
- (void)dealloc;
- (id)folderURLToChildrenURLOrder;
- (void)setPreflightCTag:(BOOL)arg1;
- (BOOL)preflightCTag;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(BOOL)arg6 context:(void*)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;
- (void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2;
- (BOOL)shouldSyncChildWithResourceType:(id)arg1;
- (void)_folderModTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;
- (void)_getTopFolderTags;
- (id)copyFolderMultiGetTaskWithURLs:(id)arg1;
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)arg1;
- (void)_getItemTags;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)mkcolTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;
- (id)previousSyncToken;
- (id)previousCTag;
- (id)folderURL;
- (void)setMultiGetBatchSize:(unsigned int)arg1;
- (unsigned int)multiGetBatchSize;
- (void)syncAway;
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (void)setNextCTag:(id)arg1;
- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 error:(id)arg3;
- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;
- (id)nextCTag;
- (void)setPreviousSyncToken:(id)arg1;
- (BOOL)isWhitelistedError:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (void)_getDataPayloads;
- (void)_pushActions;
- (id)dataContentType;
- (unsigned int)_submitTasks;
- (void)cancelTaskGroup;
- (void)_tearDownAllUnsubmittedTasks;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (void)startTaskGroup;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)bailWithError:(id)arg1;
- (id)_copyContainerParserMappings;
- (void*)context;

@end
