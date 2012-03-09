/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSArray;

@interface CAKeyframeAnimation : CAPropertyAnimation  {
}

@property(copy) NSArray * values;
@property struct CGPath { }* path;
@property(copy) NSArray * keyTimes;
@property(copy) NSArray * timingFunctions;
@property(copy) NSString * calculationMode;
@property(copy) NSArray * tensionValues;
@property(copy) NSArray * continuityValues;
@property(copy) NSArray * biasValues;
@property(copy) NSString * rotationMode;


- (void)setTensionValues:(id)arg1;
- (void)setContinuityValues:(id)arg1;
- (void)setBiasValues:(id)arg1;
- (void)setRotationMode:(id)arg1;
- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; unsigned int x7; unsigned int x8; }*)_copyRenderAnimationForLayer:(id)arg1;
- (id)calculationMode;
- (id)tensionValues;
- (id)continuityValues;
- (id)biasValues;
- (id)rotationMode;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (void)CA_prepareRenderValue;
- (void)setTimingFunctions:(id)arg1;
- (void)setPath:(struct CGPath { }*)arg1;
- (id)keyTimes;
- (void)setKeyTimes:(id)arg1;
- (id)values;
- (void)setCalculationMode:(id)arg1;
- (void)setValues:(id)arg1;
- (struct CGPath { }*)path;
- (id)timingFunctions;

@end
