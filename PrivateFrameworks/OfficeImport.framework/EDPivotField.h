/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection;

@interface EDPivotField : NSObject  {
    int mAxis;
    boolmCompact;
    boolmDataField;
    boolmShowDefaultSubTotal;
    boolmInsertBlankRow;
    boolmOutlineItems;
    boolmShowAllItems;
    boolmSubtotalTop;
    unsigned int mNumFmtId;
    EDCollection *mPivotFieldItems;
}

+ (id)pivotField;

- (id)init;
- (void)dealloc;
- (int)axis;
- (void)setAxis:(int)arg1;
- (bool)compact;
- (void)setCompact:(bool)arg1;
- (bool)dataField;
- (void)setDataField:(bool)arg1;
- (bool)showDefaultSubTotal;
- (void)setShowDefaultSubTotal:(bool)arg1;
- (bool)insertBlankRow;
- (void)setInsertBlankRow:(bool)arg1;
- (bool)outlineItems;
- (void)setOutlineItems:(bool)arg1;
- (bool)showAllItems;
- (void)setShowAllItems:(bool)arg1;
- (bool)subtotalTop;
- (void)setSubtotalTop:(bool)arg1;
- (id)pivotFieldItems;
- (unsigned int)numFmtId;
- (void)setNumFmtId:(unsigned int)arg1;

@end
