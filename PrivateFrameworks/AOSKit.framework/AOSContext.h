/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSThread;

@interface AOSContext : NSObject <NSPortDelegate> {
    struct AOSAccount { } *_account;
    struct AOSTransaction { } *_transaction;
    int (*_callback)();
    NSThread *_callbackThread;
    id _info;
}

+ (id)contextWithAccount:(struct AOSAccount { }*)arg1 andTransaction:(struct AOSTransaction { }*)arg2;

- (void)setAccount:(struct AOSAccount { }*)arg1;
- (struct AOSAccount { }*)account;
- (id)init;
- (void)dealloc;
- (BOOL)scheduleCallback;
- (void)setTransaction:(struct AOSTransaction { }*)arg1;
- (struct AOSTransaction { }*)transaction;
- (id)_callbackThread;
- (void)_performCallback;
- (id)info;
- (void)setInfo:(id)arg1;

@end
