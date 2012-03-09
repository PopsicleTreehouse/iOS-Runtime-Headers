/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDReference, EDString;

@interface EDHyperlink : NSObject  {
    EDString *mPath;
    EDString *mDosPath;
    EDString *mDescriptionText;
    EDString *mTextMark;
    EDString *mToolTip;
    EDReference *mReference;
    int mType;
}

+ (id)hyperlink;

- (void)dealloc;
- (void)setPath:(id)arg1;
- (int)type;
- (id)path;
- (void)setType:(int)arg1;
- (id)dosPath;
- (void)setDosPath:(id)arg1;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (id)textMark;
- (void)setTextMark:(id)arg1;
- (id)toolTip;
- (void)setToolTip:(id)arg1;
- (id)reference;
- (void)setReference:(id)arg1;

@end
