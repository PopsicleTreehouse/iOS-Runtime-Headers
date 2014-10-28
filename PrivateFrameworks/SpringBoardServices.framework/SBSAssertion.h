/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSString;

@interface SBSAssertion : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    NSString *_assertionName;
    } _lock;
    unsigned int _port;
    NSString *_reason;
}

@property(readonly) NSString * assertionName;
@property(readonly) NSString * reason;

- (id)assertionName;
- (void)dealloc;
- (id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned int)arg3;
- (void)invalidate;
- (id)reason;

@end