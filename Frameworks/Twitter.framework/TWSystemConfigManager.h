/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Twitter.framework/Twitter
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TWSystemConfigManager : NSObject  {
    void *_prefs;
    BOOL _notifyForExternalChangeOnly;
    int _applySkipCount;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void*)getValueForKey:(id)arg1;
- (void)notifyTarget:(unsigned int)arg1;
- (void)initializeSCPrefs:(id)arg1;
- (void)setCallback:(int (*)())arg1 withContext:(struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)refresh;
- (void)setTweetSheetPermissionCacheState:(int)arg1;
- (void)keepAlive;
- (int)tweetSheetPermissionCacheState;
- (void)tearDown;
- (void)synchronize;
- (void)setValue:(void*)arg1 forKey:(id)arg2;

@end
