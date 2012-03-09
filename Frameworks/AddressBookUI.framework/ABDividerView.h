/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIColor, ABSteadfastLineView;

@interface ABDividerView : UIView  {
    BOOL _isVertical;
    UIColor *_defaultColor;
    UIColor *_shadowColor;
    ABSteadfastLineView *_line;
    ABSteadfastLineView *_shadowLine;
    BOOL _disappearsOnHighlight;
}

@property BOOL disappearsOnHighlight;
@property(retain) UIColor * shadowColor;
@property(retain) UIColor * defaultColor;
@property(getter=isVertical) BOOL vertical;


- (void)dealloc;
- (BOOL)disappearsOnHighlight;
- (void)setDisappearsOnHighlight:(BOOL)arg1;
- (void)setDefaultColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)defaultColor;
- (void)setVertical:(BOOL)arg1;
- (BOOL)isVertical;

@end
