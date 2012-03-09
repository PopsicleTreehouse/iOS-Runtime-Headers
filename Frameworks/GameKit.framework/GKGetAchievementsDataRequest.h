/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPlayer, GKGame;

@interface GKGetAchievementsDataRequest : GKDataRequest  {
    GKGame *_game;
    GKPlayer *_player;
}

@property(retain) GKGame * game;
@property(retain) GKPlayer * player;


- (void)dealloc;
- (id)player;
- (id)game;
- (void)setPlayer:(id)arg1;
- (void)setGame:(id)arg1;
- (id)key;
- (id)request;

@end
