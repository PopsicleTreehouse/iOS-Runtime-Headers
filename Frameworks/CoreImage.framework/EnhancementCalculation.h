/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class EnhancementHistogram;

@interface EnhancementCalculation : NSObject  {
    struct { 
        float i; 
        float q; 
    } originalFaceColor;
    EnhancementHistogram *lumHist;
    EnhancementHistogram *rgbSumHist;
    EnhancementHistogram *satHist;
    EnhancementHistogram *borderHist;
    float exposureValue;
    float maxShadow;
    float minShadow;
    float exposureValueAtZeroShadow;
    float curvePercent;
    BOOL faceInputSet;
    float percentFaceChange;
}

@property(readonly) struct { float x1; float x2; } originalFaceColor;
@property(readonly) EnhancementHistogram * lumHist;
@property(readonly) EnhancementHistogram * rgbSumHist;
@property(readonly) EnhancementHistogram * satHist;
@property(readonly) EnhancementHistogram * borderHist;

+ (float)bestWarmthForI:(float)arg1 q:(float)arg2 percentChange:(float*)arg3;

- (id)init;
- (void)dealloc;
- (id)shadow;
- (id)borderHist;
- (id)satHist;
- (id)rgbSumHist;
- (id)lumHist;
- (void)printHistogramsDownsampledTo:(unsigned int)arg1;
- (void)printHistogram:(id)arg1 downsampledTo:(unsigned int)arg2;
- (void)setShadowsMin:(float)arg1 max:(float)arg2 zeroExposure:(float)arg3;
- (void)setExposureValue:(float)arg1;
- (void)setupFaceColor:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;
- (void)setCurvePercent:(float)arg1;
- (void)printAnalysis;
- (void)downSampleHistogram:(id)arg1 to:(unsigned int)arg2 storeIn:(float*)arg3;
- (int)putShadowsAnalysisInto:(float*)arg1;
- (id)rawShadow;
- (void)setFaceColorFromChromaI:(float)arg1 andChromaQ:(float)arg2;
- (void)setSaturationHistogram:(id)arg1;
- (void)setBorderHistogram:(id)arg1;
- (void)setLuminanceHistogram:(id)arg1;
- (void)setRGBSumHistogram:(id)arg1;
- (struct CGPoint { float x1; float x2; })curvePointAtIndex:(unsigned long)arg1;
- (unsigned long)curveCount;
- (id)vibrance;
- (struct { float x1; float x2; })originalFaceColor;
- (id)faceBalanceStrength;
- (id)faceBalanceWarmth;

@end
