/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLLoadRequestKey;

@interface PLImageCacheList : NSObject  {
    struct dispatch_queue_s { } *_isolation;
    unsigned int _length;
    unsigned int _lastFailLocation;
    id *_keys;
    unsigned int *_keyHashes;
    id *_images;
    PLLoadRequestKey *_dummy[1];
}

+ (id)newImageCacheList;

- (id)init;
- (void)dealloc;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1;
- (void)removeImageForKey:(id)arg1;
- (id)_init;

@end
