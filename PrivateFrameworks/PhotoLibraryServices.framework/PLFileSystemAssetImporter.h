/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSMutableSet, NSMutableIndexSet, NSMutableDictionary;

@interface PLFileSystemAssetImporter : NSObject  {
    PLPhotoLibrary *_photoLibrary;
    NSMutableIndexSet *_thumbIndexes;
    BOOL _hasProcessedAnyAssets;
    NSMutableSet *_existingUUIDs;
    NSMutableDictionary *_existingUUIDsByPath;
}

@property(retain) NSMutableSet * existingUUIDs;
@property(retain) NSMutableDictionary * existingUUIDsByPath;


- (void)dealloc;
- (id)existingUUIDsByPath;
- (id)existingUUIDs;
- (unsigned int)nextThumbnailIndex;
- (id)addAssetWithURLs:(id)arg1 usingThumbnailsInformation:(id)arg2 force:(BOOL)arg3;
- (void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2;
- (void)createThumbnailForVideoAsset:(id)arg1;
- (BOOL)setupPhotoAsset:(id)arg1 withURL:(id)arg2 thumbnailsInformation:(id)arg3 allowedToResetThumbnails:(BOOL)arg4;
- (id)_addAssetWithURL:(id)arg1;
- (id)assetURLisDuplicate:(id)arg1;
- (id)addAssetWithURLs:(id)arg1 usingThumbnailsInformation:(id)arg2;
- (void)setExistingUUIDsByPath:(id)arg1;
- (void)setExistingUUIDs:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;

@end
