/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKLeaderboard, GKGame;

@interface GKGetLeaderboardDataRequest : GKDataRequest  {
    GKGame *_game;
    GKLeaderboard *_leaderboard;
}

@property(retain) GKGame * game;
@property(retain) GKLeaderboard * leaderboard;


- (void)dealloc;
- (id)leaderboard;
- (id)_playerScope:(int)arg1;
- (id)_timeScope:(int)arg1;
- (Class)responseClass;
- (id)game;
- (void)setLeaderboard:(id)arg1;
- (void)setGame:(id)arg1;
- (id)key;
- (id)request;

@end
