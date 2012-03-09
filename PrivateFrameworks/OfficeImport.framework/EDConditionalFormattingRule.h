/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString, NSMutableArray, EDResources;

@interface EDConditionalFormattingRule : NSObject  {
    EDResources *mResources;
    int mType;
    int mOperator;
    NSMutableArray *mFormulas;
    unsigned int mDifferentialStyleIndex;
    boolmStopIfTrue;
    int mPriority;
    boolmAboveAverage;
    boolmBottom;
    boolmEqualAverage;
    boolmPercent;
    unsigned int mRank;
    int mStdDev;
    NSString *mText;
    int mTimePeriod;
}

+ (id)conditionalFormattingRuleWithResources:(id)arg1;

- (void)dealloc;
- (void)setRank:(unsigned int)arg1;
- (unsigned int)rank;
- (int)priority;
- (int)type;
- (void)setType:(int)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (bool)bottom;
- (void)setBottom:(bool)arg1;
- (unsigned int)differentialStyleIndex;
- (void)setDifferentialStyleIndex:(unsigned int)arg1;
- (int)operatorEnum;
- (void)setOperatorEnum:(int)arg1;
- (id)formulaAtIndex:(unsigned int)arg1;
- (void)addFormula:(id)arg1 worksheet:(id)arg2;
- (bool)stopIfTrue;
- (void)setStopIfTrue:(bool)arg1;
- (void)setPriority:(int)arg1;
- (bool)aboveAverage;
- (void)setAboveAverage:(bool)arg1;
- (bool)equalAverage;
- (void)setEqualAverage:(bool)arg1;
- (void)setPercent:(bool)arg1;
- (int)stdDev;
- (void)setStdDev:(int)arg1;
- (int)timePeriod;
- (void)setTimePeriod:(int)arg1;
- (unsigned int)formulaCount;
- (int)compareToOtherRuleUsingPriority:(id)arg1;
- (id)differentialStyle;
- (id)initWithResources:(id)arg1;
- (void)setDifferentialStyle:(id)arg1;
- (bool)percent;

@end
