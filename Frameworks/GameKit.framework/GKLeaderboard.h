/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, NSString, GKScore, NSObject<GKLeaderboardDelegate>;

@interface GKLeaderboard : NSObject  {
    int _timeScope;
    int _playerScope;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    NSString *_category;
    NSString *_title;
    NSArray *_scores;
    NSArray *_playerIDs;
    unsigned int _maxRange;
    GKScore *_localPlayerScore;
    int _loadingCount;
    int _sequenceNumber;
    NSObject<GKLeaderboardDelegate> *_weakDelegate;
}

@property int timeScope;
@property int playerScope;
@property(retain) NSString * category;
@property(retain) NSString * title;
@property struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property(retain) NSArray * scores;
@property unsigned int maxRange;
@property(retain) GKScore * localPlayerScore;
@property(getter=isLoading,readonly) BOOL loading;
@property NSObject<GKLeaderboardDelegate> * delegate;
@property(retain) NSArray * playerIDs;
@property int loadingCount;
@property int sequenceNumber;

+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadCategoriesWithCompletionHandler:(id)arg1;
+ (void)loadCategoriesForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadCategoriesForGame:(id)arg1 withCompletionHandler:(id)arg2;

- (id)description;
- (id)init;
- (void)dealloc;
- (void)setLoadingCount:(int)arg1;
- (int)loadingCount;
- (id)localPlayerScore;
- (unsigned int)maxRange;
- (void)loadScoresWithCompletionHandler:(id)arg1;
- (id)initWithPlayerIDs:(id)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)setLocalPlayerScore:(id)arg1;
- (void)setScores:(id)arg1;
- (void)setMaxRange:(unsigned int)arg1;
- (id)scores;
- (int)sequenceNumber;
- (void)decrementLoadingCountAtomically;
- (id)playerIDs;
- (void)incrementLoadingCountAtomically;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(id)arg2;
- (id)category;
- (int)playerScope;
- (int)timeScope;
- (void)setPlayerIDs:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setPlayerScope:(int)arg1;
- (void)setTimeScope:(int)arg1;
- (void)setCategory:(id)arg1;
- (BOOL)isLoading;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)title;
- (id)delegate;
- (void)setTitle:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
