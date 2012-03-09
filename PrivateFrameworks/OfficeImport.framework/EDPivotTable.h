/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, NSString, EDReference, EDResources;

@interface EDPivotTable : NSObject  {
    EDResources *mResources;
    boolmShowLastColumn;
    boolmShowRowHeaders;
    boolmShowColumnHeaders;
    boolmShowRowStripes;
    boolmShowColumnStripes;
    boolmApplyNumberFormats;
    boolmApplyBorderFormats;
    boolmApplyFontFormats;
    boolmApplyPatternFormats;
    boolmApplyAlignmentFormats;
    boolmApplyWidthHeightFormats;
    boolmUseAutoFormatting;
    boolmColGrandTotals;
    boolmRowGrandTotals;
    boolmCustomListSort;
    boolmCompactData;
    boolmCompact;
    boolmDataCaption;
    boolmDataOnRows;
    boolmDisableFieldList;
    boolmMergeItem;
    boolmMultipleFieldFilters;
    boolmOutline;
    boolmOutlineData;
    boolmPageOverThenDown;
    boolmShowCalcMbrs;
    boolmShowDataDropDown;
    boolmShowDropZones;
    boolmShowEmptyCol;
    boolmShowEmptyRow;
    boolmShowHeaders;
    boolmShowMemberPropertyTips;
    boolmShowMissing;
    boolmShowMultipleLabel;
    boolmSubtotalHiddenItems;
    NSString *mName;
    NSString *mStyleName;
    NSString *mColumnHeaderCaption;
    NSString *mRowHeaderCaption;
    NSString *mPageStyleName;
    EDReference *mPivotTableRange;
    unsigned int mStyleIndex;
    int mFirstHeaderRow;
    int mFirstDataRow;
    int mFirstDataColumn;
    unsigned int mRowPageCount;
    unsigned int mColumnPageCount;
    unsigned int mPageWrap;
    unsigned int mAutoFormatId;
    unsigned int mDataPosition;
    EDCollection *mRowFields;
    EDCollection *mColumnFields;
    EDCollection *mRowItems;
    EDCollection *mColumnItems;
    EDCollection *mPivotFields;
    EDCollection *mDataFields;
    EDCollection *mConditionalFields;
    EDCollection *mPivotAreas;
    EDCollection *mPageFields;
}

+ (id)pivotTableWithResources:(id)arg1;

- (void)setName:(id)arg1;
- (void)dealloc;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)name;
- (bool)compact;
- (void)setCompact:(bool)arg1;
- (bool)outline;
- (void)setOutline:(bool)arg1;
- (id)columnHeaderCaption;
- (void)setColumnHeaderCaption:(id)arg1;
- (id)rowHeaderCaption;
- (void)setRowHeaderCaption:(id)arg1;
- (id)pageStyleName;
- (void)setPageStyleName:(id)arg1;
- (id)styleName;
- (void)setStyleName:(id)arg1;
- (void)setPivotTableRange:(id)arg1;
- (unsigned int)rowPageCount;
- (void)setRowPageCount:(unsigned int)arg1;
- (unsigned int)columnPageCount;
- (void)setColumnPageCount:(unsigned int)arg1;
- (void)setFirstHeaderRow:(int)arg1;
- (void)setFirstDataRow:(int)arg1;
- (void)setFirstDataColumn:(int)arg1;
- (unsigned int)pageWrap;
- (void)setPageWrap:(unsigned int)arg1;
- (unsigned int)autoFormatId;
- (void)setAutoFormatId:(unsigned int)arg1;
- (unsigned int)dataPosition;
- (void)setDataPosition:(unsigned int)arg1;
- (void)setShowLastColumn:(bool)arg1;
- (void)setShowRowStripes:(bool)arg1;
- (void)setShowColumnStripes:(bool)arg1;
- (void)setShowRowHeaders:(bool)arg1;
- (void)setShowColumnHeaders:(bool)arg1;
- (bool)applyNumberFormats;
- (void)setApplyNumberFormats:(bool)arg1;
- (bool)applyBorderFormats;
- (void)setApplyBorderFormats:(bool)arg1;
- (bool)applyFontFormats;
- (void)setApplyFontFormats:(bool)arg1;
- (bool)applyPatternFormats;
- (void)setApplyPatternFormats:(bool)arg1;
- (bool)applyAlignmentFormats;
- (void)setApplyAlignmentFormats:(bool)arg1;
- (bool)applyWidthHeightFormats;
- (void)setApplyWidthHeightFormats:(bool)arg1;
- (bool)colGrandTotals;
- (void)setColGrandTotals:(bool)arg1;
- (bool)useAutoFormatting;
- (void)setUseAutoFormatting:(bool)arg1;
- (bool)rowGrandTotals;
- (void)setRowGrandTotals:(bool)arg1;
- (bool)customListSort;
- (void)setCustomListSort:(bool)arg1;
- (bool)compactData;
- (void)setCompactData:(bool)arg1;
- (bool)dataCaption;
- (void)setDataCaption:(bool)arg1;
- (bool)dataOnRows;
- (void)setDataOnRows:(bool)arg1;
- (bool)disableFieldList;
- (void)setDisableFieldList:(bool)arg1;
- (bool)mergeItem;
- (void)setMergeItem:(bool)arg1;
- (bool)multipleFieldFilters;
- (void)setMultipleFieldFilters:(bool)arg1;
- (bool)outlineData;
- (void)setOutlineData:(bool)arg1;
- (bool)pageOverThenDown;
- (void)setPageOverThenDown:(bool)arg1;
- (bool)showCalcMbrs;
- (void)setShowCalcMbrs:(bool)arg1;
- (bool)showDataDropDown;
- (void)setShowDataDropDown:(bool)arg1;
- (bool)showDropZones;
- (void)setShowDropZones:(bool)arg1;
- (bool)showEmptyCol;
- (void)setShowEmptyCol:(bool)arg1;
- (bool)showEmptyRow;
- (void)setShowEmptyRow:(bool)arg1;
- (bool)showHeaders;
- (void)setShowHeaders:(bool)arg1;
- (bool)showMemberPropertyTips;
- (void)setShowMemberPropertyTips:(bool)arg1;
- (bool)showMissing;
- (void)setShowMissing:(bool)arg1;
- (bool)showMultipleLabel;
- (void)setShowMultipleLabel:(bool)arg1;
- (bool)subtotalHiddenItems;
- (void)setSubtotalHiddenItems:(bool)arg1;
- (id)pivotFields;
- (id)dataFields;
- (id)conditionalFormats;
- (id)pivotAreas;
- (void)setStyleIndex:(unsigned int)arg1;
- (bool)showLastColumn;
- (unsigned int)styleIndex;
- (id)initWithResources:(id)arg1;
- (bool)showColumnHeaders;
- (bool)showRowStripes;
- (bool)showRowHeaders;
- (bool)showColumnStripes;
- (id)rowItems;
- (id)columnItems;
- (id)pivotTableRange;
- (int)firstHeaderRow;
- (int)firstDataRow;
- (int)firstDataColumn;
- (id)rowFields;
- (id)columnFields;
- (id)pageFields;

@end
