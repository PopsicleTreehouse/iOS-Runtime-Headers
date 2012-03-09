/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UILabel;

@interface GKMatchmakerNavView : UIView  {
    UILabel *_titleLabel;
    UILabel *_playersLabel;
    BOOL _inMiniBar;
}

@property(retain) UILabel * titleLabel;
@property(retain) UILabel * playersLabel;
@property BOOL inMiniBar;


- (void)dealloc;
- (BOOL)inMiniBar;
- (void)setPlayersLabel:(id)arg1;
- (void)setInMiniBar:(BOOL)arg1;
- (id)playersLabel;
- (void)setPlayerRangeText:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)layout;
- (void)updateForMiniBarState:(BOOL)arg1;
- (id)titleLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
