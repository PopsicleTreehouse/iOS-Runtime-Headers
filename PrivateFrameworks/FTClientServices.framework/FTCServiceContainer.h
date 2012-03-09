/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject  {
    FTCServiceMonitor *_monitor;
    NSMutableSet *_listeners;
}

@property(retain) FTCServiceMonitor * monitor;
@property(readonly) NSMutableSet * listeners;


- (void)setMonitor:(id)arg1;
- (id)monitor;
- (void)dealloc;
- (id)initWithServiceType:(int)arg1;
- (BOOL)removeListenerID:(id)arg1;
- (id)listeners;
- (BOOL)addListenerID:(id)arg1;
- (BOOL)hasListenerID:(id)arg1;

@end
