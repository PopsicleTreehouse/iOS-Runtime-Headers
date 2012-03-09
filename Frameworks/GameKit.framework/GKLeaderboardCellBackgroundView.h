/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;

@interface GKLeaderboardCellBackgroundView : GKCellBackgroundView  {
    NSArray *_leaderboardCellStyles;
    NSArray *_leaderboardBorderStyles;
    NSArray *_rankWidths;
}

@property(retain) NSArray * leaderboardCellStyles;
@property(retain) NSArray * leaderboardBorderStyles;
@property(retain) NSArray * rankWidths;

+ (id)selectedCellBackgroundWithTheme:(id)arg1 tableViewStyle:(int)arg2;
+ (id)cellBackgroundWithTheme:(id)arg1 tableViewStyle:(int)arg2;

- (void)dealloc;
- (void)drawFillInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forLeaderboardStyle:(int)arg2 cellIndex:(int)arg3;
- (float)rankWidthForCellIndex:(int)arg1;
- (id)rankWidths;
- (id)leaderboardBorderStyles;
- (void)setRankWidths:(id)arg1;
- (void)setLeaderboardBorderStyles:(id)arg1;
- (void)setLeaderboardCellStyles:(id)arg1;
- (id)leaderboardCellStyles;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fillRectForCell:(unsigned int)arg1;
- (void)drawFillInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPath { }*)fillPathForCell:(unsigned int)arg1;
- (void)updateContentStretchForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
