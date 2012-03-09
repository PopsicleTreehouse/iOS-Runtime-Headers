/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UISwitch, NSString, UILabel;

@interface PLCameraSettingsGroupView : UIView  {
    int type;
    NSString *title;
    BOOL shouldCenterTitle;
    UILabel *titleLabel;
    UISwitch *accessorySwitch;
}

@property int type;
@property(copy) NSString * title;
@property BOOL shouldCenterTitle;
@property(retain) UILabel * titleLabel;
@property(retain) UISwitch * accessorySwitch;


- (void)dealloc;
- (void)setTitleLabel:(id)arg1;
- (int)type;
- (id)title;
- (void)setType:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldCenterTitle;
- (id)accessorySwitch;
- (void)setShouldCenterTitle:(BOOL)arg1;
- (void)setAccessorySwitch:(id)arg1;

@end
