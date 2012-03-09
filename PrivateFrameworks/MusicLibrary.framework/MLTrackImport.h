/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableDictionary, MLContentRating, MLMovieProperties, NSDictionary, NSString, NSData, NSArray;

@interface MLTrackImport : NSObject <NSCopying> {
    NSData *_artworkData;
    NSString *_assetFilePath;
    NSArray *_chapters;
    NSMutableDictionary *_properties;
    BOOL _shouldAddToPurchasedPlaylist;
    BOOL _shouldDeleteExistingArtwork;
    BOOL _assignArtworkCacheIDFromAlbum;
}

@property(copy) NSData * artworkData;
@property BOOL shouldDeleteExistingArtwork;
@property(copy) NSString * assetFilePath;
@property(copy) NSArray * chapters;
@property(copy) MLContentRating * contentRating;
@property unsigned long mediaType;
@property(copy) MLMovieProperties * movieProperties;
@property BOOL shouldAddToPurchasedPlaylist;
@property BOOL assignArtworkCacheIDFromAlbum;
@property(readonly) NSDictionary * entityProperties;

+ (void)initialize;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)setChapters:(id)arg1;
- (id)chapters;
- (void)setMediaType:(unsigned long)arg1;
- (unsigned long)mediaType;
- (void)setContentRating:(id)arg1;
- (id)contentRating;
- (void)setShouldDeleteExistingArtwork:(BOOL)arg1;
- (BOOL)shouldDeleteExistingArtwork;
- (void)setShouldAddToPurchasedPlaylist:(BOOL)arg1;
- (BOOL)shouldAddToPurchasedPlaylist;
- (void)setAssignArtworkCacheIDFromAlbum:(BOOL)arg1;
- (BOOL)assignArtworkCacheIDFromAlbum;
- (void)setAssetFilePath:(id)arg1;
- (id)assetFilePath;
- (void)setArtworkData:(id)arg1;
- (id)artworkData;
- (void)normalizeEntityProperties;
- (id)copyEntityProperties;
- (void)setMovieProperties:(id)arg1;
- (id)movieProperties;
- (id)entityProperties;
- (id)valueForEntityProperty:(id)arg1;
- (void)_addSortStrings;
- (void)setValue:(id)arg1 forEntityProperty:(id)arg2;

@end
