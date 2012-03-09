/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIImage, MPMediaEntity, MPImageCacheRequest;

@interface IUMediaEntityCellConfiguration : IUArrayCellConfiguration  {
    MPImageCacheRequest *_artworkImageRequest;
    UIImage *_artwork;
    MPMediaEntity *_entity;
    BOOL _isGenius;
}

@property BOOL isGenius;
@property(retain) UIImage * artwork;
@property(readonly) MPMediaEntity * entity;
@property(readonly) struct CGSize { float x1; float x2; } artworkSize;
@property(readonly) BOOL displaysArtworkFromReprentativeItem;


- (id)description;
- (void)dealloc;
- (id)artwork;
- (void)setArtwork:(id)arg1;
- (void)setArtworkImageRequest:(id)arg1 artworkLoadCompletionHandler:(id)arg2;
- (id)mediaItem;
- (void)reloadData;
- (struct CGSize { float x1; float x2; })artworkSize;
- (void)reloadStrings;
- (void)reloadImages;
- (BOOL)isGenius;
- (BOOL)displaysArtworkFromReprentativeItem;
- (void)setIsGenius:(BOOL)arg1;
- (id)downloadableAsset;
- (id)newImageRequestWithMediaEntity:(id)arg1;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (id)entity;

@end
