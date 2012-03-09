/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIButton, NSString;

@interface PLAlbumSelectionControlsView : UIView  {
    int _controlsMode;
    UIButton *_rightButton;
    UIButton *_bgButton;
    id _buttonTarget;
    NSString *_buttonAction;
}

@property int controlsMode;


- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)handleButtonAction:(id)arg1;
- (void)setControlsMode:(int)arg1;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (int)controlsMode;

@end
