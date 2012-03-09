/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSError, NSArray;

@interface SUInputSourceInputStream : NSInputStream  {
    int (*_clientCallback)();
    struct { 
        int version; 
        void *info; 
        int (*retain)(); 
        int (*release)(); 
        int (*copyDescription)(); 
    } _clientContext;
    id _delegate;
    NSArray *_inputSources;
    int _inputSourceIndex;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    BOOL _sentAtEndEvent;
    BOOL _sentOpenEvent;
    NSError *_streamError;
    unsigned int _streamStatus;
}

@property(readonly) NSArray * inputSources;


- (id)init;
- (void)dealloc;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { }*)arg1 forMode:(struct __CFString { }*)arg2;
- (BOOL)_setCFClientFlags:(unsigned long)arg1 callback:(int (*)())arg2 context:(struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg3;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)arg1 length:(unsigned int*)arg2;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2;
- (id)streamError;
- (unsigned int)streamStatus;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)initWithFileAtPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)close;
- (id)initWithData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)open;
- (id)inputSources;
- (void)_streamEventCallback;
- (void)_scheduleCallback;
- (void)_setStreamError:(id)arg1;
- (id)_currentInputSource;
- (void)_close;
- (id)initWithInputSources:(id)arg1;

@end
