/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class NSDate, NSString;

@interface PCScheduleSystemWakeOperation : NSOperation  {
    BOOL _scheduleOrCancel;
    NSDate *_wakeDate;
    NSString *_serviceIdentifier;
    void *_unqiueIdentifier;
}


- (void)main;
- (void)dealloc;
- (id)initForScheduledWake:(BOOL)arg1 wakeDate:(id)arg2 serviceIdentifier:(id)arg3 uniqueIdentifier:(void*)arg4;

@end
