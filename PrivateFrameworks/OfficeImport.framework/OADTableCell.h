/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBody, OADTableCellProperties;

@interface OADTableCell : NSObject  {
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    int mTopRow;
    int mLeftColumn;
}


- (void)setProperties:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)properties;
- (int)rowSpan;
- (void)setRowSpan:(int)arg1;
- (int)spanAlongDir:(int)arg1;
- (void)setGridSpan:(int)arg1;
- (void)setHorzMerge:(BOOL)arg1;
- (void)setVertMerge:(BOOL)arg1;
- (BOOL)merge:(int)arg1;
- (int)topRow;
- (void)setTopRow:(int)arg1;
- (int)leftColumn;
- (void)setLeftColumn:(int)arg1;
- (int)gridSpan;
- (BOOL)vertMerge;
- (BOOL)horzMerge;
- (void)setTextBody:(id)arg1;
- (id)textBody;

@end
