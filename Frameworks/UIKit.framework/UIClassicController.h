/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UIZoomViewController, UIWindow, UIStatusBarViewController;

@interface UIClassicController : NSObject  {
    UIWindow *_window;
    UIImageView *_imageView;
    UIStatusBarViewController *_statusBarViewController;
    UIZoomViewController *_zoomViewController;
    BOOL _masksToWindowBounds;
    BOOL _hidesClassicChrome;
    BOOL _hidesStatusBarFiller;
}

@property(getter=isZoomed) BOOL zoomed;
@property BOOL masksToWindowBounds;
@property BOOL drawsClassicChrome;
@property BOOL drawsStatusBarFiller;

+ (id)sharedClassicController;

- (void)dealloc;
- (void)setDrawsStatusBarFiller:(BOOL)arg1;
- (BOOL)drawsStatusBarFiller;
- (void)setMasksToWindowBounds:(BOOL)arg1;
- (void)setMasksToWindowBounds:(BOOL)arg1;
- (void)setDrawsClassicChrome:(BOOL)arg1;
- (BOOL)drawsClassicChrome;
- (void)setZoomed:(BOOL)arg1;
- (BOOL)isZoomed;
- (void)_finishZoom:(BOOL)arg1;
- (void)_setupWindow;
- (BOOL)_shouldHideStatusBar;
- (void)_classicChangeStatusBarOrientationFinished:(id)arg1 finished:(BOOL)arg2 context:(void*)arg3;
- (void)_updateImageView:(id)arg1 orientation:(int)arg2;
- (void)_classicChangeStatusBarOrientation:(id)arg1;
- (void)setZoomed:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_chromeImageWithOrientation:(int)arg1;
- (BOOL)isClassicControlWindow:(id)arg1;
- (BOOL)masksToWindowBounds;
- (id)_window;
- (void)setStatusBarOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setStatusBarStyle:(int)arg1 animationParameters:(id)arg2;
- (void)_initializeStatusBarOrientation;

@end
