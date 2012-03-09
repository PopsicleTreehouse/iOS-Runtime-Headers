/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSTimer, NSMutableSet;

@interface MKCountdownTimer : NSObject  {
    NSTimer *timer;
    NSMutableSet *observers;
}

+ (id)sharedTimer;

- (void)removeObserver:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)timerFired;
- (id)initOnce;
- (void)applicationResumed:(id)arg1;

@end
