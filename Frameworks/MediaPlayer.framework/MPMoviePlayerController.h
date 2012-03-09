/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {
    void *_internal;
}

@property(copy) NSURL * contentURL;
@property(readonly) UIView * view;
@property(readonly) UIView * backgroundView;
@property(readonly) int playbackState;
@property(readonly) int loadState;
@property int controlStyle;
@property int repeatMode;
@property BOOL shouldAutoplay;
@property BOOL useApplicationAudioSession;
@property(getter=isFullscreen) BOOL fullscreen;
@property int scalingMode;
@property(readonly) BOOL isPreparedToPlay;
@property double currentPlaybackTime;
@property float currentPlaybackRate;

+ (void)allInstancesResignActive;

- (id)init;
- (void)dealloc;
- (void)_resignActive;
- (void)setCurrentPlaybackRate:(float)arg1;
- (float)currentPlaybackRate;
- (void)setCurrentPlaybackTime:(double)arg1;
- (double)endPlaybackTime;
- (double)initialPlaybackTime;
- (void)setMovieSourceType:(int)arg1;
- (BOOL)isPreparedToPlay;
- (BOOL)allowsAirPlay;
- (void)setScalingMode:(int)arg1;
- (int)scalingMode;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1;
- (BOOL)isFullscreen;
- (BOOL)useApplicationAudioSession;
- (void)setShouldAutoplay:(BOOL)arg1;
- (BOOL)shouldAutoplay;
- (void)setControlStyle:(int)arg1;
- (int)controlStyle;
- (int)loadState;
- (id)contentURL;
- (id)initWithContentURL:(id)arg1;
- (BOOL)isAirPlayVideoActive;
- (void)prepareToPlay;
- (void)pause;
- (void)stop;
- (void)forwardInvocation:(id)arg1;
- (id)backgroundView;
- (id)view;
- (id)methodSignatureForSelector:(SEL)arg1;
- (double)duration;
- (void)play;
- (int)movieSourceType;
- (int)movieMediaTypes;
- (void)setAllowsAirPlay:(BOOL)arg1;
- (void)setContentURL:(id)arg1;
- (void)setEndPlaybackTime:(double)arg1;
- (void)setInitialPlaybackTime:(double)arg1;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (double)playableDuration;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)skipToPreviousItem;
- (void)skipToNextItem;
- (void)skipToBeginning;
- (void)setRepeatMode:(int)arg1;
- (double)currentPlaybackTime;
- (void)endSeeking;
- (int)repeatMode;
- (int)playbackState;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;

@end
