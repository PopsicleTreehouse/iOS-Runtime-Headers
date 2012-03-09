/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIPopoverController;

@interface CKPopoverManager : NSObject  {
    UIPopoverController *_popoverController;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _presenter;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;

    BOOL _dismissingPopoverForRotation;
}

@property(retain) UIPopoverController * popoverController;
@property(copy) id handler;
@property(copy) id presenter;

+ (id)sharedInstance;

- (void)dealloc;
- (void)setHandler:(id)arg1;
- (void)setPresenter:(id)arg1;
- (id)presenter;
- (id)handler;
- (void)willStartRotating;
- (void)didFinishRotating;
- (void)dismissCurrentPopover;
- (void)showPopover:(id)arg1 withPresenter:(id)arg2 withHandler:(id)arg3;
- (void)setPopoverController:(id)arg1;
- (id)popoverController;
- (void)popoverControllerDidDismissPopover:(id)arg1;

@end
