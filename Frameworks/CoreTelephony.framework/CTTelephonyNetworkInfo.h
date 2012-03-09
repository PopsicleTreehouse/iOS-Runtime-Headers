/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CTCarrier;

@interface CTTelephonyNetworkInfo : NSObject  {
    void *_internal;
    CTCarrier *_subscriberCellularProvider;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _subscriberCellularProviderDidUpdateNotifier;

}

@property(retain) CTCarrier * subscriberCellularProvider;
@property(copy) id subscriberCellularProviderDidUpdateNotifier;


- (id)init;
- (void)dealloc;
- (void)handleNotificationFromConnection:(void*)arg1 ofType:(id)arg2 withInfo:(id)arg3;
- (id)subscriberCellularProviderDidUpdateNotifier;
- (void)reestablishServerConnectionIfNeeded;
- (void)setSubscriberCellularProvider:(id)arg1;
- (id)subscriberCellularProvider;
- (BOOL)getAllowsVOIP:(BOOL*)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (BOOL)getMobileNetworkCode:(id)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (BOOL)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 withCTError:(struct { int x1; int x2; }*)arg3;
- (BOOL)getCarrierName:(id)arg1 withCTError:(struct { int x1; int x2; }*)arg2;
- (void)cleanUpServerConnection;
- (BOOL)updateNetworkInfoAndShouldNotifyClient:(BOOL*)arg1;
- (void)postUpdatesIfNecessary;
- (void)cleanUpServerConnectionNoLock;
- (BOOL)setUpServerConnection;
- (void)setSubscriberCellularProviderDidUpdateNotifier:(id)arg1;

@end
