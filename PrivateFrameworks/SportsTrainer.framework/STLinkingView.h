/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@class UIButton, UIView, <STLinkingViewDelegate>, UILabel, NSString;

@interface STLinkingView : UIView  {
    <STLinkingViewDelegate> *_delegate;
    int _linkingType;
    UIView *_pulseView;
    BOOL _animating;
    BOOL _animateLayout;
    BOOL _bordered;
    UIButton *_rescanButton;
    UIButton *_cancelButton;
    UIButton *_linkNewButton;
    UIButton *_doneButton;
    UIButton *_unlinkButton;
    UILabel *_instructionLabel;
    UILabel *_fgsnLabel;
}

@property int linkingType;
@property(copy) NSString * serialNumber;
@property <STLinkingViewDelegate> * delegate;
@property BOOL bordered;


- (void)dealloc;
- (int)linkingType;
- (void)setLinkingType:(int)arg1;
- (void)setLinkingType:(int)arg1 animated:(BOOL)arg2;
- (void)_linkNewRemote;
- (void)_unlinkRemote;
- (void)_linkNewEmped;
- (void)_done;
- (void)_rescanForEmped;
- (void)_rescanForRemote;
- (void)_receiverHideAnimationDidStop;
- (void)_sensorHideAnimationDidStop;
- (void)setSerialNumber:(id)arg1;
- (void)_stopAnimation;
- (id)_newButton;
- (void)willMoveToSuperview:(id)arg1;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBordered:(BOOL)arg1;
- (BOOL)bordered;
- (id)serialNumber;
- (void)_startAnimation;

@end
