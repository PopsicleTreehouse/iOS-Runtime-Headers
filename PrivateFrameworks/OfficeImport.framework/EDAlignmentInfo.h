/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {
    int mHorizontalAlignment;
    int mVerticalAlignment;
    int mIndent;
    int mTextRotation;
    boolmTextWrapped;
    boolmHorizontalAlignOverridden;
    boolmVerticalAlignOverridden;
    boolmIndentOverridden;
    boolmTextWrappedOveridden;
    boolmDoNotModify;
}

+ (id)alignmentInfo;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (bool)isHorizontalAlignOverridden;
- (int)horizontalAlignment;
- (void)setHorizontalAlignment:(int)arg1;
- (bool)isVerticalAlignOverridden;
- (int)verticalAlignment;
- (void)setVerticalAlignment:(int)arg1;
- (bool)isIndentOverridden;
- (int)indent;
- (bool)isTextWrappedOverridden;
- (bool)isTextWrapped;
- (void)setTextWrapped:(bool)arg1;
- (int)textRotation;
- (void)setTextRotation:(int)arg1;
- (void)setDoNotModify:(bool)arg1;
- (BOOL)isEqualToAlignmentInfo:(id)arg1;
- (void)setIndent:(int)arg1;

@end
