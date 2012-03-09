/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, UILabel;

@interface CKSimpleBalloonView : CKBalloonView  {
    NSString *_text;
    UILabel *_textLabel;
    UILabel *_subjectLabel;
}

@property(retain) UILabel * subjectLabel;
@property(retain) UILabel * textLabel;

+ (BOOL)needsSingleTapGestureRecognizer;
+ (struct CGSize { float x1; float x2; })balloonSizeConstrainedToWidth:(float)arg1 text:(id)arg2 subject:(id)arg3 textBalloonSize:(struct CGSize { float x1; float x2; }*)arg4 subjectBalloonSize:(struct CGSize { float x1; float x2; }*)arg5;
+ (float)heightForText:(id)arg1 width:(float)arg2 includeBuffers:(BOOL)arg3;
+ (BOOL)showsSubject;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsetsForBalloonOrientation:(int)arg1;

- (id)subject;
- (void)setSubject:(id)arg1;
- (void)dealloc;
- (float)tightenedWidth;
- (void)setComposition:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setSubjectLabel:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 delegate:(id)arg2;
- (void)updateFontSize;
- (void)updateTextShadowColor;
- (id)subjectLabel;
- (void)updateLabels;
- (void)setMessagePart:(id)arg1;
- (id)textLabel;
- (void)prepareForReuse;
- (id)text;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
