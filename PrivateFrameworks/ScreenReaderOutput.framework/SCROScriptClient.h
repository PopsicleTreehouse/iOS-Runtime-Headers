/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class SCROConnection, SCRCTargetSelectorTimer, NSLock;

@interface SCROScriptClient : NSObject  {
    NSLock *_lock;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_timer;
    BOOL _isReady;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedScriptClient;
+ (void)initialize;

- (unsigned int)retainCount;
- (id)retain;
- (void)release;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (id)init;
- (BOOL)runScriptFile:(id)arg1;
- (void)_killConnection;
- (BOOL)_isReady;
- (void)handleCallback:(id)arg1;
- (id)_lazyConnection;

@end
