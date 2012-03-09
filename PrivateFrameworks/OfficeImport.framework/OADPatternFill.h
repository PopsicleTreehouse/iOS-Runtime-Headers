/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADPattern, OADColor;

@interface OADPatternFill : OADFill  {
    OADColor *mFgColor;
    BOOL mIsFgColorOverridden;
    OADColor *mBgColor;
    BOOL mIsBgColorOverridden;
    OADPattern *mPattern;
    BOOL mIsPatternOverridden;
}

+ (id)defaultProperties;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setColor:(id)arg1;
- (id)pattern;
- (void)setPattern:(id)arg1;
- (id)fgColor;
- (void)setFgColor:(id)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (id)namedImageDataWithBlipCollection:(id)arg1;
- (BOOL)isFgColorOverridden;
- (BOOL)isBgColorOverridden;
- (BOOL)isPatternOverridden;
- (void)setStyleColor:(id)arg1;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;

@end
