/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString;

@interface IUSongsDataSource : IUMediaQueriesDataSource  {
    BOOL _showAlbumConfigured;
    BOOL _showAlbum;
    BOOL _showDurationConfigured;
    BOOL _showDuration;
    int _interfaceOrientation;
    NSString *_syncProgressString;
    int _syncAssetTotalToken;
    BOOL _syncAssetTotalTokenIsValid;
    int _syncCurrentAssetNumberToken;
    BOOL _syncCurrentAssetNumberTokenIsValid;
    unsigned int _syncAssetTotal;
    unsigned int _syncCurrentAssetNumber;
}

@property BOOL showAlbum;
@property BOOL showDuration;
@property int interfaceOrientation;

+ (Class)cellConfigurationClassForAlbumSongs;
+ (id)queryItemPropertiesToFetch;
+ (int)mediaEntityType;
+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;

- (id)init;
- (void)dealloc;
- (void)setShowDuration:(BOOL)arg1;
- (void)setInterfaceOrientation:(int)arg1;
- (int)interfaceOrientation;
- (Class)cellConfigurationClass;
- (void)_updateSyncProgressString;
- (Class)songCellConfigurationGlobalContextClass;
- (int)_containingParentEntityType;
- (id)countStringFormat;
- (void)createGlobalContexts;
- (unsigned int)requiredEntityCountForSections;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (BOOL)allowsDownloadingAllEntities;
- (BOOL)allowsDeletion;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (BOOL)showDuration;
- (void)setShowAlbum:(BOOL)arg1;
- (BOOL)showAlbum;

@end
