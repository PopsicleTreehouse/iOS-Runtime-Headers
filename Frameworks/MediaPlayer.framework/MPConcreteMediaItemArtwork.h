/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaLibrary;

@interface MPConcreteMediaItemArtwork : MPMediaItemArtwork <NSCoding> {
    unsigned long long _itemPersistentID;
    MPMediaLibrary *_library;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
}


- (void)dealloc;
- (id)albumImageWithFormat:(int)arg1;
- (id)albumImageWithFormat:(int)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3;
- (id)albumImageWithFormat:(int)arg1 artworkCacheID:(id)arg2;
- (id)_initWithItem:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageCropRect;
- (id)albumImageDataWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)albumImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)coverFlowImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)hasArtworkAvailable;
- (id)imageDataWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 atPlaybackTime:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;

@end
