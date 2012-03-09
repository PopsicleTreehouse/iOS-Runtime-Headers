/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSTimer, UIImageView;

@interface PLCameraZoomSlider : UISlider  {
    BOOL _isZoomingFromMin;
    BOOL _isZoomingFromMax;
    BOOL _autorotationEnabled;
    BOOL _watchingOrientationChanges;
    int _orientation;
    NSTimer *_visibilityTimer;
    UIImageView *_minImageView;
    UIImageView *_maxImageView;
}

@property BOOL isZoomingFromMin;
@property BOOL isZoomingFromMax;
@property BOOL autorotationEnabled;


- (void)dealloc;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)setOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_postHideZoomSliderAnimation;
- (void)hideZoomSlider:(id)arg1;
- (void)startWatchingDeviceOrientationChanges;
- (void)clearZoomingFromEndcap;
- (int)locationOfTouch:(id)arg1;
- (void)setIsZoomingFromMax:(BOOL)arg1;
- (void)setIsZoomingFromMin:(BOOL)arg1;
- (BOOL)isZoomingFromEndcap;
- (BOOL)isZoomingFromMax;
- (BOOL)isZoomingFromMin;
- (void)makeInvisible;
- (void)makeVisible;
- (void)addEndCapImageViewsWithMinImage:(id)arg1 maxImage:(id)arg2;
- (void)stopVisibilityTimer;
- (void)startVisibilityTimer;
- (BOOL)visibilityTimerIsValid;
- (void)stopWatchingDeviceOrientationChanges;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_rotationTransformForDeviceOrientation:(int)arg1;
- (void)setAutorotationEnabled:(BOOL)arg1;
- (BOOL)autorotationEnabled;
- (void)_setDeviceOrientation:(int)arg1 animated:(BOOL)arg2;

@end
