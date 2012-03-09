/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSXPCServer, NSMutableArray, NSString;

@interface SSDistributedNotificationCenter : NSObject  {
    struct dispatch_queue_s { } *_dispatchQueue;
    NSMutableArray *_observers;
    NSString *_portName;
    SSXPCServer *_server;
}

@property(readonly) NSString * namedPort;


- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)namedPort;
- (void)_sendRegistrationMessage:(long long)arg1 name:(id)arg2;
- (void)_distributedNotificationMessage:(void*)arg1 connection:(struct _xpc_connection_s { }*)arg2;
- (id)initWithNamedPort:(id)arg1;
- (id)addObserverForName:(id)arg1 queue:(struct dispatch_queue_s { }*)arg2 usingBlock:(id)arg3;

@end
