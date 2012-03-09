/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADOrientedBounds : NSObject  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
    float mRotation;
    unsigned int mFlipX : 1;
    unsigned int mFlipY : 1;
    int mModeX;
    int mModeY;
}

+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)orientedBoundsWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4;
+ (BOOL)directionCloserToVerticalThanToHorizontal:(float)arg1;

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (void)setRotation:(float)arg1;
- (float)rotation;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (BOOL)isEqualToOrientedBounds:(id)arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 rotation:(float)arg2 flipX:(BOOL)arg3 flipY:(BOOL)arg4;
- (int)xMode;
- (int)yMode;
- (BOOL)flipX;
- (void)setFlipX:(BOOL)arg1;
- (BOOL)flipY;
- (void)setFlipY:(BOOL)arg1;
- (void)setXMode:(int)arg1;
- (void)setYMode:(int)arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setOrientedBounds:(id)arg1;

@end
