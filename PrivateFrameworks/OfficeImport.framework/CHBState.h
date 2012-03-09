/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CHDChart, <CHAutoStyling>;

@interface CHBState : NSObject  {
    CHDChart *mChart;
    struct __CFArray { } *mXlChartDataSeriesCollection;
    int mXlSeriesCount;
    int mXlCurrentSeriesIndex;
    <CHAutoStyling> *mAutoStyling;
    boolmHasPrimaryMixedArea;
    boolmHasPrimaryMixedColumn;
    boolmHasPrimaryMixedLine;
    boolmHasSecondaryMixedArea;
    boolmHasSecondaryMixedColumn;
    boolmHasSecondaryMixedLine;
}


- (id)init;
- (void)dealloc;
- (struct XlChartDataSeries { int (**x1)(); struct XlChartSeries {} *x2; unsigned short x3; unsigned short x4; unsigned short x5; struct ChVector<XlChartSeriesFormat*> { struct XlChartSeriesFormat {} **x_6_1_1; struct XlChartSeriesFormat {} **x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned int x_6_1_5; } x6; struct ChVector<XlChartSeriesFormat*> { struct XlChartSeriesFormat {} **x_7_1_1; struct XlChartSeriesFormat {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; struct ChVector<XlChartCustomLabelText*> { struct XlChartCustomLabelText {} **x_8_1_1; struct XlChartCustomLabelText {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; struct ChVector<long unsigned int> { unsigned long *x_9_1_1; unsigned long *x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; } x9; struct ChVector<long int> { long *x_10_1_1; long *x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; unsigned int x_10_1_5; } x10; struct XlChartLinkedData {} *x11; struct XlChartLinkedData {} *x12; struct XlChartLinkedData {} *x13; struct XlChartLinkedData {} *x14; struct ChVector<XlChartCustomLegend*> { struct XlChartCustomLegend {} **x_15_1_1; struct XlChartCustomLegend {} **x_15_1_2; unsigned int x_15_1_3; unsigned int x_15_1_4; unsigned int x_15_1_5; } x15; }*)xlCurrentChartDataSeries;
- (int)xlCurrentChartDataSeriesIndex;
- (void)setHasPrimaryMixedArea:(bool)arg1;
- (void)setHasPrimaryMixedColumn:(bool)arg1;
- (void)setHasPrimaryMixedLine:(bool)arg1;
- (void)setHasSecondaryMixedArea:(bool)arg1;
- (void)setHasSecondaryMixedColumn:(bool)arg1;
- (bool)hasSecondaryMixedLine;
- (void)setHasSecondaryMixedLine:(bool)arg1;
- (unsigned int)chartGroupIndexForType:(int)arg1 isForPrimary:(bool)arg2;
- (bool)hasPrimaryMixedArea;
- (bool)hasSecondaryMixedArea;
- (bool)hasPrimaryMixedColumn;
- (bool)hasSecondaryMixedColumn;
- (bool)hasPrimaryMixedLine;
- (void)deleteXlChartDataSeriesCollection;
- (int)xlSeriesCount;
- (struct XlChartDataSeries { int (**x1)(); struct XlChartSeries {} *x2; unsigned short x3; unsigned short x4; unsigned short x5; struct ChVector<XlChartSeriesFormat*> { struct XlChartSeriesFormat {} **x_6_1_1; struct XlChartSeriesFormat {} **x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned int x_6_1_5; } x6; struct ChVector<XlChartSeriesFormat*> { struct XlChartSeriesFormat {} **x_7_1_1; struct XlChartSeriesFormat {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; struct ChVector<XlChartCustomLabelText*> { struct XlChartCustomLabelText {} **x_8_1_1; struct XlChartCustomLabelText {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; struct ChVector<long unsigned int> { unsigned long *x_9_1_1; unsigned long *x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; } x9; struct ChVector<long int> { long *x_10_1_1; long *x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; unsigned int x_10_1_5; } x10; struct XlChartLinkedData {} *x11; struct XlChartLinkedData {} *x12; struct XlChartLinkedData {} *x13; struct XlChartLinkedData {} *x14; struct ChVector<XlChartCustomLegend*> { struct XlChartCustomLegend {} **x_15_1_1; struct XlChartCustomLegend {} **x_15_1_2; unsigned int x_15_1_3; unsigned int x_15_1_4; unsigned int x_15_1_5; } x15; }*)xlChartDataSeriesAtIndex:(int)arg1;
- (void)setXlCurrentSeriesIndex:(int)arg1;
- (void)readAndCacheXlChartDataSeries;
- (id)autoStyling;
- (id)chart;
- (void)setChart:(id)arg1;
- (id)workbook;
- (id)resources;

@end
