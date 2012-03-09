/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSBundle, NSCache, NSData, NSMutableDictionary;

@interface GKImageAtlas : NSObject  {
    NSData *_data;
    NSCache *_imageCache;
    NSMutableDictionary *_imageLookup;
    NSBundle *_bundle;
}

@property(retain) NSData * data;
@property(retain) NSCache * imageCache;
@property(retain) NSMutableDictionary * imageLookup;
@property(retain) NSBundle * bundle;

+ (id)imageAtlasWithName:(id)arg1;
+ (id)imageAtlasWithName:(id)arg1 inBundle:(id)arg2;

- (void)dealloc;
- (id)imageLookup;
- (struct GKImageAtlasImageInfo { unsigned int x1; long long x2; unsigned int x3; unsigned int x4; float x5; unsigned char x6; BOOL x7; })infoForImageNamed:(id)arg1;
- (id)imageNames;
- (id)imageCache;
- (void)setImageLookup:(id)arg1;
- (void)setImageCache:(id)arg1;
- (id)initWithPath:(id)arg1 inBundle:(id)arg2;
- (void)processHeader;
- (id)initWithName:(id)arg1 inBundle:(id)arg2;
- (void)clearCache;
- (void)setBundle:(id)arg1;
- (id)bundle;
- (id)data;
- (id)imageNamed:(id)arg1;
- (void)setData:(id)arg1;

@end
