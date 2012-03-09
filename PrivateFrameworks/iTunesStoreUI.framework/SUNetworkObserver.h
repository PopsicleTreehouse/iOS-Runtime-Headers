/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSTimer, ISStoreURLOperation, NSString;

@interface SUNetworkObserver : NSObject <ISSingleton, ISStoreURLOperationDelegate> {
    ISStoreURLOperation *_partnerDetectOperation;
    BOOL _partnersEnabled;
    NSString *_partnerIdentifier;
    NSTimer *_startupTimer;
}

@property(retain) NSString * partnerIdentifier;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)startNetworkAvailabilityTimer;
- (void)checkPartnerAvailability;
- (void)setPartnerIdentifier:(id)arg1;
- (void)_updateNetworkActivityIndicator;
- (void)_mainThreadScheduleNetworkActivityUpdate;
- (void)_mainThreadHandleNetworkTypeChange:(id)arg1;
- (void)_mainThreadSetPartnerIdentifier:(id)arg1;
- (void)_handleUsingNetworkChange:(id)arg1;
- (void)_handleNetworkTypeChange:(id)arg1;
- (void)setPartnersEnabled:(BOOL)arg1;
- (void)_startupTimer:(id)arg1;
- (void)_cancelPartnerDetect;
- (void)_cancelStartupTimer;
- (void)_networkUsageStateChanged:(id)arg1;
- (void)_networkTypeChanged:(id)arg1;
- (void)_partnerHeaderChanged:(id)arg1;
- (void)operationFinished:(id)arg1;
- (id)partnerIdentifier;
- (void)operation:(id)arg1 failedWithError:(id)arg2;

@end
