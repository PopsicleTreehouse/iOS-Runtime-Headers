/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMachPort : NSPort  {
    id _delegate;
    unsigned int _flags;
    unsigned int _machPort;
    unsigned int _reserved;
}

+ (void)_fixNSMachPortLeak;
+ (id)portWithMachPort:(unsigned int)arg1 options:(unsigned int)arg2;
+ (void)resetAllPorts;
+ (BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned int)arg7;
+ (id)portWithMachPort:(unsigned int)arg1;
+ (id)port;

- (BOOL)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (id)initWithMachPort:(unsigned int)arg1 options:(unsigned int)arg2;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (unsigned int)machPort;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (id)initWithMachPort:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (unsigned int)retainCount;
- (id)retain;
- (oneway void)release;
- (id)init;
- (void)dealloc;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (unsigned long)_cfTypeID;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)finalize;
- (BOOL)isValid;
- (void)invalidate;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
