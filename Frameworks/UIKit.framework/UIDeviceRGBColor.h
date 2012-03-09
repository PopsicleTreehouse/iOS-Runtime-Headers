/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDeviceRGBColor : UIColor  {
    float redComponent;
    float greenComponent;
    float blueComponent;
    float alphaComponent;
    struct CGColor { } *cachedColor;
}


- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (BOOL)getHue:(float*)arg1 saturation:(float*)arg2 brightness:(float*)arg3 alpha:(float*)arg4;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (struct CGColor { }*)_createCGColorWithAlpha:(float)arg1;
- (float)alphaComponent;
- (void)setStroke;
- (void)setFill;
- (id)colorSpaceName;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)colorWithAlphaComponent:(float)arg1;
- (struct CGColor { }*)CGColor;
- (BOOL)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (void)set;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;

@end
