/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIModalView;

@interface UISystemAlertRequest : NSObject <UIModalViewDelegate> {
    int _alertID;
    UIModalView *_sheet;
    id _target;
    SEL _action;
}


- (void)dealloc;
- (void)alertSheet:(id)arg1 buttonClicked:(int)arg2;
- (id)initWithAlertID:(int)arg1 sheet:(id)arg2 target:(id)arg3 action:(SEL)arg4;

@end
