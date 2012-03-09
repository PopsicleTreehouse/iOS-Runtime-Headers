/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKCellBackgroundView, UIImageView, UITextView;

@interface GKComposeMessageView : UIView  {
    UIImageView *_backgroundView;
    GKCellBackgroundView *_outlineView;
    UITextView *_textView;
}

@property(retain) UIImageView * backgroundView;
@property(retain) GKCellBackgroundView * outlineView;
@property(retain) UITextView * textView;


- (void)dealloc;
- (void)setOutlineView:(id)arg1;
- (id)outlineView;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
