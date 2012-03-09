/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class UIActivityIndicatorView, UINavigationItem, UILabel;

@interface CNFRegNavigationBarTitleView : UIView  {
    UINavigationItem *_item;
    UILabel *_titleLabel;
    UIActivityIndicatorView *_activityIndicator;
}

@property UINavigationItem * item;


- (void)dealloc;
- (void)_updateTitleLabel;
- (id)item;
- (id)_currentTextColorForBarStyle:(int)arg1;
- (id)_currentTextShadowColorForBarStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })_currentTextShadowOffsetForBarStyle:(int)arg1;
- (BOOL)_useSilverLookForBarStyle:(int)arg1;
- (id)_defaultFont;
- (id)initWithNavigationItem:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setItem:(id)arg1;

@end
