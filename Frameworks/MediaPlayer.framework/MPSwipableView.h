/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPSwipeGestureRecognizer, MPTapGestureRecognizer, MPActivityGestureRecognizer, UIPinchGestureRecognizer, <MPSwipableViewDelegate>;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate> {
    int _enabledGestureTypes;
    int _simultaneousGestureTypes;
    <MPSwipableViewDelegate> *_swipeDelegate;
    MPTapGestureRecognizer *_tapGestureRecognizer;
    MPSwipeGestureRecognizer *_swipeGestureRecognizer;
    MPActivityGestureRecognizer *_activityGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
}

@property int enabledGestureTypes;
@property int simultaneousGestureTypes;
@property <MPSwipableViewDelegate> * swipeDelegate;


- (void)dealloc;
- (void)setSimultaneousGestureTypes:(int)arg1;
- (int)enabledGestureTypes;
- (id)swipeDelegate;
- (void)_activityGestureRecognized:(id)arg1;
- (void)_pinchGestureRecognized:(id)arg1;
- (void)_swipeGestureRecognized:(id)arg1;
- (int)simultaneousGestureTypes;
- (void)_updateGestureRecognizersForEnabledTypes;
- (void)setEnabledGestureTypes:(int)arg1;
- (void)setSwipeDelegate:(id)arg1;
- (void)_tapGestureRecognized:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)addGestureRecognizer:(id)arg1;
- (void)removeGestureRecognizer:(id)arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
