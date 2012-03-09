/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKLocalImageSource : GKImageSource  {
    struct CGSize { 
        float width; 
        float height; 
    } _imageSize;
}

@property struct CGSize { float x1; float x2; } imageSize;


- (void)loadImageForIdentifier:(id)arg1 imageBrush:(id)arg2 withCompletionHandler:(id)arg3;
- (id)renderedImageWithImage:(id)arg1 imageBrush:(id)arg2 returnContext:(id*)arg3;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })imageSize;

@end
