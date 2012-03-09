/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class TPLCDTextView, TPLCDSubImageView, UIView;

@interface TPLCDView : TPLCDBar  {
    UIView *_contentView;
    TPLCDTextView *_textView;
    TPLCDTextView *_secondLineTextView;
    TPLCDTextView *_labelView;
    TPLCDSubImageView *_imageView;
    unsigned int _layoutAsLabelled : 1;
}

+ (float)labelFontSize;
+ (float)textFontSize;

- (void)dealloc;
- (void)setSubImage:(id)arg1;
- (id)initWithDefaultSizeForOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)text;
- (void)setShadowColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)setContentsAlpha:(float)arg1;
- (id)secondLineText;
- (void)blinkLabel;
- (id)subImage;
- (void)setLayoutAsLabelled:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullSizedContentViewFrame;
- (void)_resetContentViewFrame;
- (void)setSecondLineText:(id)arg1;
- (float)_textVInset;
- (float)_labelVInset;
- (BOOL)shouldCenterContentView;
- (BOOL)showImageViewOnLeftSide;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text1Frame;
- (BOOL)shouldCenterText;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageViewFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_text2Frame;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)setLabel:(id)arg1 animate:(BOOL)arg2;

@end
