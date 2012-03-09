/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSLock, PLFixedSizeLRUCache;

@interface PLWStackedImageCache : NSObject  {
    PLFixedSizeLRUCache *_stackedImagesCache;
    PLFixedSizeLRUCache *_stackedImageOptionsCache;
    NSLock *_lock;
}

+ (id)sharedInstance;
+ (id)_bakedStackedImageFilenameForWithKey:(id)arg1;
+ (void)preheatStackedImageWithKey:(id)arg1;
+ (id)absolutePathToCachedStackedImagesDirectory;
+ (id)_pathToBakedCachedStackedImageWithKey:(id)arg1;
+ (id)absolutePathToCachesDirectory;

- (id)init;
- (void)dealloc;
- (BOOL)KVOChange:(id)arg1 affectsStackedImageForAlbum:(struct NSObject { Class x1; }*)arg2;
- (void)invalidateAll;
- (void)prefetchStackedImagesWithKeys:(id)arg1;
- (void)setInMemoryStackedImage:(id)arg1 forKey:(id)arg2 options:(id)arg3;
- (BOOL)_createBaseDirectoryForStackedImagesCache;
- (void)removeEntryForKey:(id)arg1;
- (void)setStackedImage:(id)arg1 forKey:(id)arg2 options:(id)arg3;
- (id)stackedImageWithKey:(id)arg1 options:(id*)arg2;
- (void)invalidateEntryForKey:(id)arg1;

@end
