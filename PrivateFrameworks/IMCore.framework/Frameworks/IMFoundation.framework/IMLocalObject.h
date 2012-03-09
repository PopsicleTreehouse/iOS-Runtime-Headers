/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString, NSMachPort;

@interface IMLocalObject : NSObject  {
    id _internal;
}

@property id target;
@property(readonly) NSString * portName;
@property(readonly) NSMachPort * port;
@property(readonly) unsigned int mach_port;
@property int pid;
@property(readonly) BOOL isValid;

+ (void)_unregisterIMLocalObject:(id)arg1;
+ (void)_registerIMLocalObject:(id)arg1;
+ (id)_registeredIMLocalObjectForPort:(unsigned int)arg1;
+ (void)initialize;

- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (void)setTarget:(id)arg1;
- (id)description;
- (id)target;
- (void)dealloc;
- (void)setPortName:(id)arg1;
- (void)_systemShutdown:(id)arg1;
- (id)initWithTarget:(id)arg1 portName:(id)arg2 protocol:(id)arg3;
- (id)portName;
- (void)_enqueueComponents:(id)arg1;
- (void)_noteNewInvocation;
- (BOOL)handleInvocation:(id)arg1;
- (void)_popInvocation;
- (id)_peekInvocation;
- (BOOL)_handleInvocation:(id)arg1;
- (BOOL)isValidSelector:(SEL)arg1;
- (void)terminated;
- (void)_clearPort:(BOOL)arg1;
- (void)_portDidBecomeInvalid;
- (void)_cancelHandlerCompleted;
- (void)_handleNewInvocations;
- (id)initWithTarget:(id)arg1 port:(unsigned int)arg2 protocol:(id)arg3;
- (id)initWithTarget:(id)arg1 portName:(id)arg2 checkInPort:(BOOL)arg3 protocol:(id)arg4;
- (void)handleHeaderData:(unsigned long long*)arg1 headerLength:(unsigned int)arg2 data:(char *)arg3 dataLength:(unsigned int)arg4 fromPid:(int)arg5;
- (unsigned int)mach_port;
- (unsigned int)_port;
- (int)pid;
- (void)setPid:(int)arg1;
- (id)port;
- (BOOL)isValid;
- (void)invalidate;

@end
