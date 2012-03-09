/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIViewController, NSString;

@interface UIViewControllerAction : NSObject  {
    UIViewController *_viewController;
    NSString *_name;
    BOOL _animated;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

}

@property UIViewController * viewController;
@property(retain) NSString * name;
@property BOOL animated;
@property(copy) id completion;


- (void)setName:(id)arg1;
- (void)dealloc;
- (BOOL)animated;
- (id)viewController;
- (id)initWithViewController:(id)arg1 name:(id)arg2 animated:(BOOL)arg3;
- (void)setAnimated:(BOOL)arg1;
- (void)setViewController:(id)arg1;
- (void)setCompletion:(id)arg1;
- (id)completion;
- (id)name;

@end
