/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString, EDPageSetup, EDHeaderFooter, SFUPointerKeyDictionary, NSMutableArray, EDProcessors, EDWorkbook, ESDContainer, EDWarnings, EDColorReference;

@interface EDSheet : OCDDelayedNode  {
    EDWorkbook *mWorkbook;
    EDString *mName;
    boolmHidden;
    boolmDisplayFormulas;
    boolmDisplayGridlines;
    boolmIsDialogSheet;
    EDColorReference *mDefaultGridlineColorReference;
    EDHeaderFooter *mHeaderFooter;
    EDPageSetup *mPageSetup;
    NSMutableArray *mDrawables;
    SFUPointerKeyDictionary *mTextBoxMap;
    SFUPointerKeyDictionary *mCommentMap;
    EDProcessors *mProcessors;
    EDWarnings *mWarnings;
    ESDContainer *mEscherDrawing;
}

@property bool isDialogSheet;

+ (id)sheetWithWorkbook:(id)arg1;

- (void)setName:(id)arg1;
- (void)dealloc;
- (id)name;
- (void)setHidden:(bool)arg1;
- (bool)isHidden;
- (void)reduceMemoryIfPossible;
- (id)escherDrawing;
- (void)setEscherDrawing:(id)arg1;
- (id)defaultGridlineColorReference;
- (id)drawableEnumerator;
- (void)doneWithNonRowContent;
- (void)setDisplayFormulas:(bool)arg1;
- (bool)isDisplayGridlines;
- (void)setDisplayGridlines:(bool)arg1;
- (id)defaultGridlineColor;
- (void)setDefaultGridlineColor:(id)arg1;
- (void)setHeaderFooter:(id)arg1;
- (void)setPageSetup:(id)arg1;
- (unsigned int)drawableCount;
- (id)drawableAtIndex:(unsigned int)arg1;
- (void)removeDrawableAtIndex:(unsigned int)arg1;
- (id)edTextBoxForShape:(id)arg1;
- (void)setEDTextBox:(id)arg1 forShape:(id)arg2;
- (id)edCommentForShape:(id)arg1;
- (void)setEDComment:(id)arg1 forShape:(id)arg2;
- (void)applyProcessors;
- (id)warnings;
- (bool)isDialogSheet;
- (void)setIsDialogSheet:(bool)arg1;
- (void)setup;
- (void)setDefaultGridlineColorReference:(id)arg1;
- (id)initWithWorkbook:(id)arg1;
- (id)pageSetup;
- (id)headerFooter;
- (id)workbook;
- (id)processors;
- (bool)isDisplayFormulas;
- (void)addDrawable:(id)arg1;
- (void)teardown;
- (id)drawables;

@end
