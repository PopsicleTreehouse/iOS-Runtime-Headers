/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class UIImageView, <RCMicViewDelegate>;

@interface RCMicView : UIView  {
    <RCMicViewDelegate> *_delegate;
    UIImageView *_whiteGlowView;
    UIImageView *_micView;
}

@property <RCMicViewDelegate> * delegate;


- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
