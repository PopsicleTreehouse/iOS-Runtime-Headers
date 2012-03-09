/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData, NSDictionary;

@interface MRMediaRemoteState : NSObject  {
    BOOL _canBeNowPlayingApp;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _commandHandlerBlock;

    BOOL _includeVideoRoutes;
    BOOL _isOverrideApp;
    int _notifyLaunchedToken;
    NSData *_nowPlayingArtworkData;
    NSDictionary *_nowPlayingInfo;
    unsigned int _routeDiscoveryCount;
}

@property(retain) NSDictionary * nowPlayingInfo;
@property(retain) NSData * nowPlayingArtworkData;
@property BOOL isOverrideApp;
@property BOOL includeVideoRoutes;
@property(copy) id commandHandlerBlock;
@property BOOL canBeNowPlayingApp;


- (id)init;
- (void)dealloc;
- (id)nowPlayingInfo;
- (void)setNowPlayingInfo:(id)arg1;
- (BOOL)includeVideoRoutes;
- (void)setCanBeNowPlayingApp:(BOOL)arg1;
- (void)setCommandHandlerBlock:(id)arg1;
- (BOOL)isOverrideApp;
- (void)setIsOverrideApp:(BOOL)arg1;
- (id)nowPlayingArtworkData;
- (void)setNowPlayingArtworkData:(id)arg1;
- (void)beginRouteDiscovery;
- (void)endRouteDiscovery;
- (void)setIncludeVideoRoutes:(BOOL)arg1;
- (id)commandHandlerBlock;
- (void)_avSystemControllerServerConnectionDiedNotification:(id)arg1;
- (BOOL)canBeNowPlayingApp;

@end
