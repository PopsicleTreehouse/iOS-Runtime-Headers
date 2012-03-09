/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSMutableDictionary;

@interface SCROBrailleDisplayAutoDetector : NSObject  {
    BOOL _isDetectingDisplays;
    struct IONotificationPort { } *_notificationPort;
    NSMutableDictionary *_iteratorDict;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedDetector;
+ (void)initialize;

- (unsigned int)retainCount;
- (id)retain;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (id)init;
- (void)stopDetectingDisplays;
- (void)detectDisplays;
- (BOOL)isAutoDetectEnabled;

@end
