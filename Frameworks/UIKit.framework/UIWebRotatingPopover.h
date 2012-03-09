/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPopoverController, DOMNode;

@interface UIWebRotatingPopover : NSObject <UIPopoverControllerDelegate> {
    BOOL _isRotating;
    DOMNode *_node;
    UIPopoverController *_popoverController;
}

@property(retain) DOMNode * _node;
@property(retain) UIPopoverController * _popoverController;


- (void)dealloc;
- (id)_node;
- (id)initWithDOMNode:(id)arg1;
- (void)presentPopover;
- (void)accessoryDone;
- (void)set_popoverController:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)set_node:(id)arg1;
- (id)_popoverController;
- (void)popoverControllerDidDismissPopover:(id)arg1;

@end
