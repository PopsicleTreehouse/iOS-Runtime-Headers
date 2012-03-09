/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class UIView;

@interface SBUISlidingFullscreenAlertController : SBUIFullscreenAlertController  {
    UIView *_topBar;
    UIView *_bottomBar;
    BOOL _animatingIn;
    BOOL _animatingOut;
}

@property(readonly) UIView * bottomBar;
@property(readonly) UIView * topBar;


- (void)dealloc;
- (id)topBar;
- (id)newTopBar;
- (id)newBottomBar;
- (BOOL)shouldShowBottomBar;
- (void)prepareToAnimateDisplayIn;
- (void)performAnimateDisplayIn;
- (BOOL)_animatingToHomescreenWallpaper;
- (BOOL)isShowingWallpaper;
- (void)animateDisplayIn:(float)arg1 middleDelay:(float)arg2;
- (BOOL)displaysAboveStatusBar;
- (void)viewWillAnimateOut;
- (void)animateViewOut;
- (void)finishedAnimatingIn;
- (void)finishedAnimatingOut;
- (BOOL)viewIsReadyToBeRemoved;
- (BOOL)isSlidingViewController;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)viewDidLoad;
- (id)backgroundView;
- (id)bottomBar;
- (void)_fadeOutCompleted:(id)arg1;

@end
