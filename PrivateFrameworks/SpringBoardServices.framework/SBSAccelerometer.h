/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class <SBSAccelerometerDelegate>, NSThread, NSLock;

@interface SBSAccelerometer : NSObject  {
    <SBSAccelerometerDelegate> *_delegate;
    struct __CFRunLoopSource { } *_accelerometerEventsSource;
    struct __CFRunLoop { } *_accelerometerEventsRunLoop;
    double _interval;
    NSLock *_lock;
    BOOL _orientationEventsEnabled;
    int _orientationEventsToken;
    NSThread *_orientationEventsThread;
    float _xThreshold;
    float _yThreshold;
    float _zThreshold;
}

@property BOOL accelerometerEventsEnabled;
@property double updateInterval;
@property float xThreshold;
@property float yThreshold;
@property float zThreshold;
@property BOOL orientationEventsEnabled;
@property <SBSAccelerometerDelegate> * delegate;


- (id)init;
- (void)dealloc;
- (void)_checkIn;
- (float)xThreshold;
- (float)yThreshold;
- (float)zThreshold;
- (BOOL)orientationEventsEnabled;
- (BOOL)accelerometerEventsEnabled;
- (void)_checkOut;
- (void)_serverWasRestarted;
- (void)_orientationDidChange;
- (id)_orientationEventsThread;
- (void)setZThreshold:(float)arg1;
- (void)setYThreshold:(float)arg1;
- (void)setXThreshold:(float)arg1;
- (void)setUpdateInterval:(double)arg1;
- (double)updateInterval;
- (void)setAccelerometerEventsEnabled:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)currentDeviceOrientation;
- (void)setOrientationEventsEnabled:(BOOL)arg1;

@end
