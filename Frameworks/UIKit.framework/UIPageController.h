/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPageControl, UIView, <UIPageControllerDelegate>, UIScrollView, UIViewController, NSMutableArray;

@interface UIPageController : UIViewController  {
    NSMutableArray *_viewControllers;
    UIView *_wrapperViews[3];
    int _notificationState[3];
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    <UIPageControllerDelegate> *_delegate;
    int _pageSpacing;
    int _visibleIndex;
    int _pageCount;
    struct { 
        unsigned int delegateViewControllerAtIndex : 1; 
        unsigned int delegateWillBeginPaging : 1; 
        unsigned int delegateDidEndPaging : 1; 
        unsigned int displaysPageControl : 1; 
        unsigned int wraps : 1; 
    } _pageControllerFlags;
}

@property <UIPageControllerDelegate> * delegate;
@property float pageSpacing;
@property BOOL displaysPageControl;
@property(readonly) UIViewController * visibleViewController;
@property int pageCount;
@property int visibleIndex;
@property BOOL wraps;


- (void)dealloc;
- (id)_pageControllerScrollView;
- (int)indexOfViewController:(id)arg1;
- (void)setDisplaysPageControl:(BOOL)arg1;
- (BOOL)displaysPageControl;
- (void)setWraps:(BOOL)arg1;
- (BOOL)wraps;
- (void)setPageCount:(int)arg1;
- (BOOL)_hasVisibleViewController;
- (BOOL)_needToLoadVisible;
- (float)pageSpacing;
- (void)setPageSpacing:(float)arg1;
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)arg1;
- (void)_pageChanged:(id)arg1;
- (void)setVisibleIndex:(int)arg1 animated:(BOOL)arg2;
- (BOOL)_needToLoadNext;
- (BOOL)_needToLoadPrevious;
- (void)reloadViewControllerAtIndex:(int)arg1;
- (void)setVisibleIndex:(int)arg1;
- (void)setVisibleIndex:(int)arg1 preservingLoadedViewControllers:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_setPreviousViewControllerNotificationState:(int)arg1;
- (void)_setVisibleViewControllerNotificationState:(int)arg1;
- (void)_setNextViewControllerNotificationState:(int)arg1;
- (BOOL)_hasNextViewController;
- (BOOL)_hasPreviousViewController;
- (void)_notifyNextViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_notifyPreviousViewController:(int)arg1 animated:(BOOL)arg2;
- (int)_nextViewControllerNotificationState;
- (int)_visibleViewControllerNotificationState;
- (int)_previousViewControllerNotificationState;
- (void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(BOOL)arg4;
- (id)_nextViewController;
- (id)_previousViewController;
- (id)_loadNextViewController;
- (id)_loadVisibleViewControllerAndNotify:(BOOL)arg1;
- (id)_loadPreviousViewController;
- (void)_setNextViewController:(id)arg1;
- (void)_notifyVisibleViewController:(int)arg1 animated:(BOOL)arg2;
- (void)_setVisibleViewController:(id)arg1;
- (void)_setPreviousViewController:(id)arg1;
- (id)_visibleViewController;
- (void)_replaceViewControllerAtIndex:(int)arg1 withViewController:(id)arg2;
- (void)_adjustScrollViewContentInsets;
- (BOOL)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(int)arg2;
- (void)_createPageControl;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_scrollViewFrame;
- (int)visibleIndex;
- (void)_scrollViewDidEndPaging;
- (void)_scrollViewWillBeginPaging;
- (void)_scrollViewDidScroll:(id)arg1 forceUpdate:(BOOL)arg2;
- (void)_scrollView:(id)arg1 boundsDidChangeToSize:(struct CGSize { float x1; float x2; })arg2;
- (int)pageCount;
- (id)_scrollView;
- (id)visibleViewController;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_shouldUseOnePartRotation;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
