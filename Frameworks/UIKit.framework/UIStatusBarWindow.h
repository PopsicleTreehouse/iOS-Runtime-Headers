/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarCorners, UIStatusBar;

@interface UIStatusBarWindow : UIWindow  {
    UIStatusBar *_statusBar;
    int _orientation;
    UIStatusBarCorners *_topCorners;
    UIStatusBarCorners *_bottomCorners;
    BOOL _cornersHidden;
}

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })statusBarWindowFrame;

- (void)dealloc;
- (void)setTopCornerStyle:(int)arg1 bottomCornerStyle:(int)arg2 animationParameters:(id)arg3;
- (void)setCornersHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)_fadeAnimationStopped:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_rotate;
- (BOOL)_disableViewScaling;
- (BOOL)_isStatusBarWindow;
- (BOOL)_disableGroupOpacity;
- (void)_updateTransformLayerForClassicPresentation;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (int)orientation;
- (void)setOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
