/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation  {
}

@property(copy) NSString * keyPath;
@property(getter=isAdditive) BOOL additive;
@property(getter=isCumulative) BOOL cumulative;
@property(retain) CAValueFunction * valueFunction;

+ (id)animationWithKeyPath:(id)arg1;

- (void)setCumulative:(BOOL)arg1;
- (BOOL)additive;
- (BOOL)cumulative;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; unsigned int x7; unsigned int x8; }*)arg1 layer:(id)arg2;
- (BOOL)isCumulative;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (id)keyPath;
- (void)setValueFunction:(id)arg1;
- (BOOL)isAdditive;
- (void)setAdditive:(BOOL)arg1;
- (id)valueFunction;

@end
