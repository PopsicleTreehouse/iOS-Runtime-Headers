/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableSet, NSDictionary;

@interface ISSpringBoardUtility : NSObject  {
    struct dispatch_queue_s { } *_dispatchQueue;
    NSDictionary *_enabledRemoteNotificationTypes;
    NSMutableSet *_processAssertions;
}

@property(readonly) BOOL hasProcessAssertions;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (struct SBSProcessAssertion { }*)takeProcessAssertionWithIdentifier:(id)arg1 displayIdentifier:(id)arg2 launchOptions:(id)arg3;
- (void)releaseProcessAssertion:(struct SBSProcessAssertion { }*)arg1;
- (void)suspendFrontApplication;
- (void)setBadgeValue:(id)arg1 forIdentifier:(id)arg2;
- (void)resetEnabledRemoteNotificationTypes;
- (void)removeDefaultPNGSnapshotsForIdentifier:(id)arg1;
- (BOOL)hasProcessAssertions;
- (int)enabledRemoteNotificationTypesForBundleIdentifier:(id)arg1;
- (void)cancelDownloadingIconForPurchase:(id)arg1;
- (void)addDownloadingIconWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 softwareType:(id)arg3;
- (void)cancelDownloadingIconForIdentifier:(id)arg1;

@end
