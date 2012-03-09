/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class UIImage;

@interface QLThumbnailOperation : NSOperation  {
    int _index;
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    UIImage *_image;
}

@property(retain) UIImage * image;
@property struct CGSize { float width; float height; } size;
@property int index;


- (id)init;
- (void)dealloc;
- (int)index;
- (id)image;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setImage:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setIndex:(int)arg1;

@end
