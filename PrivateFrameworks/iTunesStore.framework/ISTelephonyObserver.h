/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, NSRecursiveLock;

@interface ISTelephonyObserver : NSObject <ISSingleton> {
    struct __CTServerConnection { } *_connection;
    struct __CFMachPort { } *_connectionPort;
    struct __CFRunLoopSource { } *_connectionRunLoopSource;
    NSString *_dataStatusIndicator;
    NSRecursiveLock *_lock;
    NSString *_operatorName;
    struct __CFRunLoop { } *_runLoop;
}

@property(readonly) NSString * dataStatusIndicator;
@property(readonly) NSString * operatorName;

+ (id)sharedInstance;
+ (void)setSharedInstance:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_handleServerInvalidated;
- (void)_handleNotificationWithName:(struct __CFString { }*)arg1 userInfo:(struct __CFDictionary { }*)arg2;
- (void)_handleMessage:(void*)arg1 withSize:(long)arg2;
- (BOOL)_establishServerConnection;
- (void)_invalidateServerConnection;
- (id)dataStatusIndicator;
- (id)operatorName;
- (void)_registerForNotifications;
- (BOOL)beginObservingOnRunLoop:(struct __CFRunLoop { }*)arg1;

@end
