/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, GKScore, NSAttributedString;

@interface GKLeaderboardCellContents : GKPlayerCellContentView  {
    GKScore *_score;
    NSAttributedString *_displayName;
    unsigned int _totalScores;
    float _rankWidth;
    int _disclosureStyle;
    NSString *_placeholderString;
}

@property(retain) GKScore * score;
@property(retain) NSAttributedString * displayName;
@property(retain) NSString * placeholderString;
@property unsigned int totalScores;
@property(readonly) float contentsMargin;
@property(readonly) float rankAvailableWidth;
@property float rankWidth;
@property int disclosureStyle;


- (id)init;
- (void)dealloc;
- (void)setRankWidth:(float)arg1;
- (float)rankWidth;
- (void)setTotalScores:(unsigned int)arg1;
- (unsigned int)totalScores;
- (BOOL)shouldShowPhoto;
- (void)setPlaceholderString:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (float)fontSizeForRank;
- (id)placeholderString;
- (int)digits;
- (float)rankAvailableWidth;
- (void)updateLines;
- (void)setScore:(id)arg1;
- (id)score;
- (id)displayName;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)disclosureStyle;
- (void)setDisclosureStyle:(int)arg1;
- (void)prepareForReuse;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
