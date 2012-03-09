/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSMutableSet;

@interface ATXPCConnection : NSObject  {
    struct _xpc_connection_s { } *_conn;
    struct dispatch_queue_s { } *_eventQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _lockdownHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _messageHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _disconnectHandler;

    NSMutableSet *_outstandingMessages;
    id _context;
}

@property(readonly) NSString * serviceName;
@property(copy) id lockdownHandler;
@property(copy) id messageHandler;
@property(copy) id disconnectHandler;
@property(retain) id context;


- (void)shutdown;
- (void)dealloc;
- (id)serviceName;
- (void)sendMessage:(id)arg1;
- (void)setLockdownHandler:(id)arg1;
- (id)lockdownHandler;
- (void)_handleLockdownMessage:(void*)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void)setDisconnectHandler:(id)arg1;
- (id)disconnectHandler;
- (int)_outstandingMessages;
- (void)_removeMessage:(id)arg1;
- (void)_registerMessage:(id)arg1;
- (id)initWithServiceName:(id)arg1 onQueue:(struct dispatch_queue_s { }*)arg2;
- (void)_handleXPCMessage:(void*)arg1;
- (void)_sendMessage:(id)arg1 handler:(id)arg2;
- (void)_setEventHandlerOnConnection:(struct _xpc_connection_s { }*)arg1;
- (id)initWithXPCConnection:(struct _xpc_connection_s { }*)arg1;
- (void)sendMessage:(id)arg1 withReply:(id)arg2;
- (id)messageHandler;
- (struct dispatch_queue_s { }*)eventQueue;
- (void)_handleXPCError:(void*)arg1;
- (void)setMessageHandler:(id)arg1;

@end
