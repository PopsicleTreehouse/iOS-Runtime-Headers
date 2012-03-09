/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSMutableSet, NSSet, NSMutableArray, NSURL;

@interface CalDAVGetDelegatesBaseTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate, CoreDAVTaskGroupDelegate> {
    BOOL _serverSupportsExpandPropertyReport;
    NSURL *_principalURL;
    NSMutableArray *_readPrincipalURLs;
    NSMutableArray *_writePrincipalURLs;
    NSMutableSet *_writeDetails;
    NSMutableSet *_readDetails;
}

@property(retain,readonly) NSSet * readOnlyPrincipalDetails;
@property(retain,readonly) NSSet * readWritePrincipalDetails;
@property(retain) NSMutableSet * readDetails;
@property(retain) NSMutableSet * writeDetails;
@property(retain) NSMutableArray * writePrincipalURLs;
@property(retain) NSMutableArray * readPrincipalURLs;
@property(retain) NSURL * principalURL;
@property BOOL serverSupportsExpandPropertyReport;


- (void)dealloc;
- (id)principalURL;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)setPrincipalURL:(id)arg1;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (id)readOnlyPrincipalDetails;
- (id)readWritePrincipalDetails;
- (void)setServerSupportsExpandPropertyReport:(BOOL)arg1;
- (void)setReadDetails:(id)arg1;
- (void)setWriteDetails:(id)arg1;
- (void)setReadPrincipalURLs:(id)arg1;
- (void)setWritePrincipalURLs:(id)arg1;
- (id)_mappingsForPrincipalDetails;
- (id)_popFromArray:(id)arg1;
- (void)_getPrincipalDetailsForURL:(id)arg1;
- (id)readPrincipalURLs;
- (id)writePrincipalURLs;
- (BOOL)serverSupportsExpandPropertyReport;
- (void)_processDetailsFromMultiStatus:(id)arg1 allowWrite:(BOOL)arg2;
- (id)writeDetails;
- (id)readDetails;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;

@end
