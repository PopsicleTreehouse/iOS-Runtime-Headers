/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, NSMutableDictionary, NSLock;

@interface PLBakedVideoFilesCacheCreator : NSObject <PLPhotoBakedThumbnailsDelegate, PLCachedFilesManagerPlugin> {
    BOOL _cancelPostProcessing;
    NSLock *_cancellationLock;
    NSMutableDictionary *_optionsDictionary;
    PLPhotoLibrary *photoLibrary;
}

@property(retain) PLPhotoLibrary * photoLibrary;


- (void)cancel;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (BOOL)recreateCachedFilesIfNecessary;
- (void)createBakedThumbnailsForVideo:(id)arg1;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)_addBakedThumbnailsForVideo:(id)arg1 toCollection:(id)arg2 sourceFormat:(int)arg3 bakedFormats:(id)arg4;
- (void)_createNewVideoCachedFiles;
- (void)_garbageCollectCachedFiles;
- (void)_removeOldAlbumVideosBakedThumbnails;
- (id)_pathToVideosMetadataFile;
- (void)setPhotoLibrary:(id)arg1;
- (id)photoLibrary;

@end
