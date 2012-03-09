/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKUITheme, UIImage;

@interface GKImageCellContents : UIView <GKTableViewCellContents> {
    GKUITheme *_theme;
    UIImage *_image;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageInsets;
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
    id _representedObject;
}

@property(retain) GKUITheme * theme;
@property(retain) UIImage * image;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } imageInsets;
@property struct CGSize { float x1; float x2; } imageSize;
@property(retain) id representedObject;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } confirmationButtonRect;


- (void)dealloc;
- (void)loadIconForGame:(id)arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (float)preferredHeightForOrientation:(int)arg1;
- (id)theme;
- (void)setTheme:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)prepareForReuse;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)image;
- (void)setImage:(id)arg1;

@end
