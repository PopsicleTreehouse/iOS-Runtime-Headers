/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController;

@interface MPSystemNowPlayingController : NSObject  {
    BOOL _hasSeenAnyItem;
    MPAVController *_player;
    struct dispatch_queue_s { } *_serialQueue;
}

@property MPAVController * player;


- (id)init;
- (void)dealloc;
- (void)postProgressUpdateForItem:(id)arg1;
- (void)postNowPlayingInfoForItem:(id)arg1;
- (unsigned int)_chapterIndexForItem:(id)arg1 atTime:(double)arg2;
- (int)_MRShuffleModeForMPShuffleType:(unsigned int)arg1;
- (int)_MRRepeatModeForMPRepeatType:(unsigned int)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;

@end
