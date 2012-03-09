/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoStreamsHelper : NSObject  {
    BOOL _appHasPolledOnceThisForegroundSession;
}

+ (BOOL)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg1;
+ (BOOL)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2;
+ (id)publishBreadcrumbsPath;
+ (id)photoStreamAccount;
+ (BOOL)photoStreamsEnabled;
+ (id)sharedPhotoStreamsHelper;

- (id)init;
- (void)dealloc;
- (void)resetServerState;
- (id)derivedAssetForMasterAsset:(id)arg1;
- (int)friendsLimit;
- (int)imageLimitForFriendStream;
- (int)imageLimitForOwnStream;
- (id)photoStreamAlbumTitleForPersonID:(id)arg1;
- (id)_photoStreamAlbumNameWithFirstName:(id)arg1 lastName:(id)arg2 email:(id)arg3;
- (void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2;
- (void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (BOOL)removeBreadcrumbsForHashString:(id)arg1;
- (id)psHashForData:(id)arg1;
- (id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(BOOL)arg3;
- (struct CGSize { float x1; float x2; })_derivedAssetSizeForMasterSizeWidth:(float)arg1 height:(float)arg2;
- (id)temporaryPathForRecentlyUploadedAsset:(id)arg1;
- (float)derivedAssetDimensionLimit;
- (id)psHashAsString:(id)arg1;
- (int)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2;
- (BOOL)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3;
- (id)imageLimitsByAssetType;
- (void)_appDidEnterBackground:(id)arg1;
- (BOOL)shouldUploadVideos;
- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2;
- (void)resetMstreamdStateForPersonID:(id)arg1;
- (void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2;
- (void)pollForNewSubscriptionContent;
- (id)photoStreamsPublishStreamID;
- (BOOL)shouldPublishScreenShots;
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;
- (void)resume_mstreamd:(id)arg1;
- (id)pause_mstreamd;
- (BOOL)enqueueAssetForPSPublishing:(id)arg1 assetHash:(id)arg2 fullPath:(id)arg3 fileSize:(id)arg4 type:(id)arg5 reenqueueCount:(id)arg6;
- (void)initiateDeletionOfPhotoStreamAssets:(id)arg1;

@end
