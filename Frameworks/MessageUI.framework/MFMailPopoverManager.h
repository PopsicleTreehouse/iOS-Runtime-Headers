/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSArray, UIActionSheet, MFPopoverController, UIBarButtonItem, UIView, NSMutableArray;

@interface MFMailPopoverManager : NSObject <UIActionSheetDelegate> {
    id _delegate;
    id _actionSheetDelegate;
    NSArray *_explicitPassthroughViews;
    UIActionSheet *_actionSheet;
    MFPopoverController *_popoverController;
    UIBarButtonItem *_currentBarButtonItem;
    UIView *_currentView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _currentRect;
    NSMutableArray *_passThroughContexts;
    NSMutableArray *_passThroughProviders;
    unsigned int _currentArrowDirections;
    double _popoverDismissalEnd;
    BOOL _popoverBeingHiddenDuringRotation;
    BOOL _isHandlingActionSheetClick;
    BOOL _popoverDismissalIsDelayed;
    BOOL _popoverDismissalShouldBeAnimated;
}

@property BOOL rasterizePopoverLayer;
@property BOOL preventFastMode;
@property(readonly) UIView * popoverView;
@property BOOL popoverBeingHiddenDuringRotation;
@property unsigned int currentArrowDirections;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } currentRect;
@property(retain) UIView * currentView;
@property(retain) UIBarButtonItem * currentBarButtonItem;
@property(retain) MFPopoverController * popoverController;
@property(retain) UIActionSheet * actionSheet;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;

- (BOOL)respondsToSelector:(SEL)arg1;
- (unsigned int)retainCount;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)init;
- (void)dealloc;
- (id)actionSheet;
- (void)setActionSheet:(id)arg1;
- (id)currentView;
- (void)presentPopover:(id)arg1 fromView:(id)arg2 animated:(BOOL)arg3;
- (void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 withDelegate:(id)arg3 animated:(BOOL)arg4;
- (void)dismissPopoverAfterDelay:(double)arg1 animated:(BOOL)arg2;
- (BOOL)popoverDismissalIsDelayed;
- (double)delayUntilPopoverFinishesDismissing;
- (void)addPassthroughViewProvider:(id)arg1;
- (void)removePassthroughViewProvider:(id)arg1;
- (void)beginModalPassthroughContext;
- (void)endModalPassthroughContext;
- (void)addPassthroughView:(id)arg1;
- (void)removePassthroughView:(id)arg1;
- (BOOL)allowRotation;
- (BOOL)rasterizePopoverLayer;
- (void)setRasterizePopoverLayer:(BOOL)arg1;
- (BOOL)preventFastMode;
- (void)setPreventFastMode:(BOOL)arg1;
- (BOOL)popoverShowing;
- (BOOL)_isEquivalentToCurrentPopover:(id)arg1;
- (void)_cleanupCurrentPopover;
- (void)setCurrentBarButtonItem:(id)arg1;
- (void)_willPresentPopover:(id)arg1;
- (id)_allPassthroughViewsWithViews:(id)arg1;
- (void)setCurrentView:(id)arg1;
- (void)setCurrentArrowDirections:(unsigned int)arg1;
- (id)currentBarButtonItem;
- (unsigned int)currentArrowDirections;
- (void)setCurrentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })currentRect;
- (void)_dismissPopoverNow;
- (void)_popoverDismissalDidFinish;
- (id)_currentPassthroughProviders;
- (BOOL)_delegateSupportsRotation;
- (void)setPopoverBeingHiddenDuringRotation:(BOOL)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(BOOL)arg2;
- (void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 animated:(BOOL)arg3;
- (void)presentPopover:(id)arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inView:(id)arg3 direction:(unsigned int)arg4 allowInteractionWithViews:(id)arg5 withDelegate:(id)arg6 animated:(BOOL)arg7;
- (BOOL)popoverBeingHiddenDuringRotation;
- (void)setPopoverController:(id)arg1;
- (id)popoverController;
- (void)didRotate;
- (void)willRotate;
- (id)popoverView;
- (void)forwardInvocation:(id)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)didPresentActionSheet:(id)arg1;
- (void)willPresentActionSheet:(id)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)popover;

@end
