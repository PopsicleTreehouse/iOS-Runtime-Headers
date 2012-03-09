/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADColorTransform : NSObject <NSCopying> {
    int mType;
}

+ (id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2;
+ (float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2;
+ (id)applyHSLTransform:(id)arg1 toColor:(id)arg2;
+ (id)applyRGBTransform:(id)arg1 toColor:(id)arg2;
+ (id)applyTransforms:(id)arg1 toColor:(id)arg2;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)type;
- (id)initWithType:(int)arg1;

@end
