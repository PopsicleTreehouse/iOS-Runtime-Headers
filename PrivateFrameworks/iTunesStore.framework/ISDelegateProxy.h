/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSLock;

@interface ISDelegateProxy : NSObject  {
    id _delegate;
    NSLock *_lock;
    BOOL _shouldMessageMainThread;
}


- (BOOL)respondsToSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;
- (void)sendInvocationToDelegate:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldMessageMainThread:(BOOL)arg1;

@end
