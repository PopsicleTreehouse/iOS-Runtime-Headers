/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MPMediaItem, IUNowPlayingObserver, MPAVController;

@interface IUMusicPlayerServerDelegate : NSObject <MPMusicPlayerControllerServerDelegate> {
    MPMediaItem *_firstItem;
    IUNowPlayingObserver *_nowPlayingObserver;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _repeatChangeHandler;

    MPAVController *_repeatChangeHandlerPlayer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shuffleChangeHandler;

    MPAVController *_shuffleChangeHandlerPlayer;
    int _shuffleMode;
}


- (id)init;
- (void)dealloc;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithGeniusMixPlaylist:(id)arg2;
- (void)musicPlayerServer:(id)arg1 prepareQueueWithQuery:(id)arg2;
- (void)musicPlayerServer:(id)arg1 setShuffleMode:(int)arg2;
- (void)musicPlayerServer:(id)arg1 setFirstItem:(id)arg2;
- (id)playerForMusicPlayerServer:(id)arg1 usingApplicationSpecificQueue:(BOOL)arg2;
- (void)musicPlayerServer:(id)arg1 registerForRepeatModeChangesWithChangeHandler:(id)arg2;
- (void)musicPlayerServer:(id)arg1 registerForShuffleModeChangesWithChangeHandler:(id)arg2;
- (BOOL)isNowPlayingItemFromGeniusMixForMusicPlayerServer:(id)arg1;
- (unsigned int)unshuffledIndexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
- (unsigned int)indexOfNowPlayingItemForMusicPlayerServer:(id)arg1;
- (int)playbackSpeedForMusicPlayerServer:(id)arg1;
- (void)musicPlayerServer:(id)arg1 setPlaybackSpeed:(int)arg2;
- (id)currentMediaQueryForMusicPlayerServer:(id)arg1;
- (id)nowPlayingItemForMusicPlayerServer:(id)arg1;
- (void)musicPlayerServer:(id)arg1 setNowPlayingItem:(id)arg2;
- (void)_appDefaultsChangedNotification:(id)arg1;

@end
