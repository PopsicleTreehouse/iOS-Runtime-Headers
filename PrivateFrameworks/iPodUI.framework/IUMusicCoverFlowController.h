/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSTimer, UIImage, MPMediaQuery, MPImageCacheRequest, IUMusicCoverFlowPlayIndicator, UIButton, MPImageCache, MPMediaItem, IUMusicCoverFlowView, UIView, IUNowPlayingAlbumBackViewController, IUMusicPropertiesView;

@interface IUMusicCoverFlowController : NSObject  {
    IUMusicCoverFlowView *_coverFlowView;
    UIView *_view;
    id _delegate;
    id _transitionDelegate;
    id _volumeHUDContext;
    MPMediaQuery *_query;
    MPMediaItem *_suffixMediaItem;
    IUMusicPropertiesView *_propertiesView;
    IUNowPlayingAlbumBackViewController *_backsideViewController;
    UIView *_flipView;
    UIButton *_infoButton;
    IUMusicCoverFlowPlayIndicator *_playIndicator;
    unsigned int _albumIndexOfCurrentSong;
    unsigned long _currentSongUID;
    int _state;
    unsigned int _indexForLayerArt;
    unsigned int _scheduledDelayedRequest : 1;
    int _defaultThreadPriority;
    unsigned int _retainedCachedData : 1;
    NSTimer *_benchmarkHeartbeatTimer;
    unsigned int _benchmarkEnabled : 1;
    unsigned int _initialAlbumArtCoverFlowIndex;
    UIImage *_largeInitialAlbumArtImage;
    MPImageCacheRequest *_largeInitialAlbumArtRequest;
    MPImageCache *_largeImageCache;
    UIImage *_mediumInitialAlbumArtImage;
    MPImageCacheRequest *_mediumInitialAlbumArtRequest;
    MPImageCache *_mediumImageCache;
}

+ (id)_placeholderImageForMediaType:(int)arg1;
+ (void)prefetchCount;
+ (void)stopAndReleaseResources;
+ (unsigned int)_placeholderIndexForMediaType:(int)arg1;
+ (void)_prefetch:(id)arg1;
+ (id)flipImage;
+ (id)_placeholderVideoImage;
+ (id)_placeholderPodcastImage;
+ (id)_placeholderMusicImage;
+ (id)_placeholderAudioBookImage;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)flipSelectedCover;
- (BOOL)isTransitioning;
- (BOOL)isEnabled;
- (id)view;
- (int)state;
- (void)tearDown;
- (id)query;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)transitionIsPending;
- (void)prepareForPendingTransition;
- (id)transitionDelegate;
- (BOOL)isFlipping;
- (void)_setBenchmarkHeartbeatTimer:(id)arg1;
- (void)_songChanged:(id)arg1;
- (void)_registerForMusicNotifications;
- (void)togglePlayPause;
- (void)_pushVolumeHUDContext;
- (void)_switchToDefaultPriority;
- (id)_stringValueForProperty:(id)arg1 ofEntityAtIndex:(unsigned int)arg2 placeholder:(id)arg3;
- (void)setSuspended:(BOOL)arg1 eventsOnly:(BOOL)arg2;
- (void)_finishedRotationOnlyTransition;
- (void)_finishedTransitionFromCoverFlow;
- (void)_finishedTransitionToCoverFlow;
- (void)_updateCoverFlowProperties;
- (void)_insertFlippedAlbumExitControl;
- (id)_updatePropertiesOfBacksideViewWithCoverIndex:(unsigned int)arg1;
- (void)_buildCoverFlowBackside;
- (void)_coverFlowRequestImageAtIndex:(unsigned int)arg1 quality:(unsigned int)arg2 preloadOnly:(BOOL)arg3;
- (id)_imageCacheForCoverFlowQualityType:(unsigned int)arg1;
- (BOOL)_transitionToCoverFlow:(BOOL)arg1 rotating:(BOOL)arg2 deviceOrientation:(int)arg3 flipView:(id)arg4;
- (void)_requestInitialAlbumArt:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialAlbumArtSubRectInPixelSpace;
- (id)initialAlbumArt;
- (id)_initialArtworkImage;
- (void)updateCurrentSongAlbumArtIfAppropriate;
- (void)_cancelInitialAlbumArtRequest:(id*)arg1;
- (void)_switchToTransitionPriority;
- (BOOL)_buildCoverFlow:(int)arg1;
- (unsigned int)_currentSongIndexInCoverFlowQuery:(BOOL)arg1;
- (void)_unregisterForMusicNotifications;
- (void)_flushArtworkCachesAfterShortDelay;
- (void)_removeFlippedAlbumExitControl;
- (void)_startHeartbeat;
- (void)_setImageCacheLoadingSuspended:(BOOL)arg1;
- (void)_stopHeartbeat;
- (void)_cancelInitialAlbumArtRequestAndReleaseArt;
- (void)_popVolumeHUDContext;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_suspendNotification:(id)arg1;
- (int)displayedDeviceOrientation;
- (void)coverFlowView:(id)arg1 transitionDidEnd:(unsigned int)arg2;
- (void)coverFlowView:(id)arg1 selectionDidChange:(unsigned int)arg2;
- (void)coverFlowViewFlipDidEnd:(id)arg1;
- (id)coverFlowView:(id)arg1 requestFlipLayerAtIndex:(unsigned int)arg2;
- (void)coverFlowView:(id)arg1 requestImageAtIndex:(unsigned int)arg2 quality:(unsigned int)arg3;
- (BOOL)coverFlowView:(id)arg1 prefetch:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (BOOL)coverFlowView:(id)arg1 shouldIgnoreImage:(id)arg2 withType:(unsigned int)arg3;
- (BOOL)_displayIsFlipped;
- (void)coverFlowView:(id)arg1 getPlaceholderIndicesForCovers:(unsigned int*)arg2;
- (id)coverFlowView:(id)arg1 placeholderImageAtPlaceholderIndex:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })placeholderImageSubRectForCoverFlowView:(id)arg1;
- (int)numberOfPlaceholdersInCoverFlowView:(id)arg1;
- (int)numberOfItemsInCoverFlowView:(id)arg1;
- (void)transitionFromCoverFlow:(BOOL)arg1 rotating:(BOOL)arg2 statusBarStyle:(int)arg3 statusBarHidden:(BOOL)arg4;
- (BOOL)transitionToCoverFlow:(BOOL)arg1 rotating:(BOOL)arg2 deviceOrientation:(int)arg3 flipView:(id)arg4;
- (void)setTransitionDelegate:(id)arg1;
- (void)removeMeAsTransitionDelegate:(id)arg1;

@end
