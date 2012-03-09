/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow, UISnapshotView, UIView;

@interface UIClientRotationContext : NSObject  {
    UIView *_headerView;
    UIView *_footerView;
    UIView *_contentView;
    UIView *_rotatingSnapshotView;
    UIView *_footerStartSnapshotView;
    UIView *_footerEndSnapshotView;
    BOOL _headerWasHidden;
    BOOL _footerWasHidden;
    BOOL _contentWasHidden;
    BOOL _orderKeyboardInAfterRotating;
    BOOL _skipFooterRotation;
    BOOL _skipHeaderRotation;
    int _fromOrientation;
    int _toOrientation;
    float _duration;
    UISnapshotView *_headerSnapshotViewStart;
    UISnapshotView *_footerSnapshotViewStart;
    UISnapshotView *_contentSnapshotViewStart;
    float _contentTopAdjustmentStart;
    id _rotatingClient;
    struct { 
        BOOL animateContentRotation; 
        BOOL preserveHeight; 
        BOOL avoidFadingBottomOfContent; 
        BOOL skipSnapshotOfEndState; 
        float contentStretchRightEdgeInset; 
        int edgeClip; 
    } _rotationSettings;
    float contentBottomInset;
    UIWindow *_window;
}

@property(readonly) id rotatingClient;
@property(readonly) UIView * contentView;
@property(readonly) float duration;
@property(readonly) int fromOrientation;
@property(readonly) int toOrientation;


- (void)dealloc;
- (void)_slideFooterWithStartSnapshot:(id)arg1 endSnapshot:(id)arg2 duration:(double)arg3;
- (BOOL)_isFooterTranslucent;
- (BOOL)_isHeaderTranslucent;
- (void)finishFullRotateUsingOnePartAnimation:(BOOL)arg1;
- (int)fromOrientation;
- (void)finishFirstHalfRotation;
- (int)toOrientation;
- (void)rotateSnapshots;
- (void)setupRotationOrderingKeyboardInAfterRotation:(BOOL)arg1;
- (void)slideHeaderViewAndFooterViewOffScreen:(BOOL)arg1 forInterfaceOrientation:(int)arg2;
- (id)rotatingClient;
- (id)contentView;
- (id)initWithClient:(id)arg1 toOrientation:(int)arg2 duration:(float)arg3 andWindow:(id)arg4;
- (void)_slideHeaderView:(id)arg1 andFooterView:(id)arg2 offScreen:(BOOL)arg3 forInterfaceOrientation:(int)arg4;
- (void)_positionHeaderView:(id)arg1 andFooterView:(id)arg2 outsideContentViewForInterfaceOrientation:(int)arg3;
- (float)duration;

@end
