/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask  {
    NSString *_previousSyncToken;
    NSString *_nextSyncToken;
    BOOL _moreToSync;
    BOOL _wasInvalidSyncToken;
}

@property(readonly) NSString * nextSyncToken;
@property(readonly) BOOL moreToSync;
@property(readonly) BOOL wasInvalidSyncToken;


- (id)description;
- (void)dealloc;
- (id)nextSyncToken;
- (BOOL)moreToSync;
- (id)notFoundHREFs;
- (BOOL)wasInvalidSyncToken;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)requestBody;

@end
