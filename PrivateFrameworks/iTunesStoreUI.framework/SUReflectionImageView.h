/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImageView, SUReflectionView;

@interface SUReflectionImageView : UIView  {
    float _reflectionHeight;
    float _spacing;
    float _reflectionAlpha;
    BOOL _useImageSize;
    unsigned int _nonSquareImage : 1;
    UIImageView *_imageView;
    SUReflectionView *_reflection;
}

@property float reflectionSpacing;
@property BOOL nonSquareImage;


- (id)init;
- (void)dealloc;
- (void)setImage:(id)arg1;
- (void)setReflectionSpacing:(float)arg1;
- (float)reflectionSpacing;
- (void)setUseImageSize:(BOOL)arg1;
- (void)setReflectionVisible:(BOOL)arg1;
- (void)setReflectionAlphaWhenVisible:(float)arg1;
- (void)setNonSquareImage:(BOOL)arg1;
- (BOOL)nonSquareImage;
- (id)initWithReflectionHeight:(float)arg1 spacing:(float)arg2;

@end
