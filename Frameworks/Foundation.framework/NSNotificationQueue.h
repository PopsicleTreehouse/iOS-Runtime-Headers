/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNotificationQueue : NSObject  {
    id _notificationCenter;
    id _asapQueue;
    id _asapObs;
    id _idleQueue;
    id _idleObs;
}

+ (id)defaultQueue;

- (void)dequeueNotificationsMatching:(id)arg1 coalesceMask:(unsigned int)arg2;
- (void)enqueueNotification:(id)arg1 postingStyle:(unsigned int)arg2 coalesceMask:(unsigned int)arg3 forModes:(id)arg4;
- (void)_flushNotificationQueue;
- (id)initWithNotificationCenter:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)enqueueNotification:(id)arg1 postingStyle:(unsigned int)arg2;

@end
