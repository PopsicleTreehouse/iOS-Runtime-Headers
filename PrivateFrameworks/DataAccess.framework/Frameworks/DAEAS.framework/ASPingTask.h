/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSSet;

@interface ASPingTask : ASTask  {
    NSSet *_folders;
    NSSet *_oldFolders;
    int _seconds;
    int _oldSeconds;
}


- (double)timeoutInterval;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)loadRequest:(id)arg1;
- (BOOL)shouldReportTimeInNetwork;
- (int)interfaceBinding;
- (id)initWithHeartbeat:(int)arg1 folders:(id)arg2 oldHeartbeat:(int)arg3 oldFolders:(id)arg4;
- (int)heartbeat;
- (id)folders;
- (BOOL)shouldForceNetworking;
- (BOOL)shouldHoldPowerAssertion;
- (void)requestCancelTaskWithReason:(int)arg1;
- (BOOL)processContext:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)requestBody;
- (int)commandCode;
- (int)taskStatusForExchangeStatus:(int)arg1;

@end
