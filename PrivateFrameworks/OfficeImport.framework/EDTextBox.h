/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDAlignmentInfo, EDProtection, EDString;

@interface EDTextBox : NSObject  {
    EDString *mText;
    EDAlignmentInfo *mAlignmentInfo;
    EDProtection *mProtection;
}

+ (id)textBox;

- (void)dealloc;
- (id)text;
- (void)setText:(id)arg1;
- (void)setAlignmentInfo:(id)arg1;
- (id)protection;
- (void)setProtection:(id)arg1;
- (id)alignmentInfo;

@end
