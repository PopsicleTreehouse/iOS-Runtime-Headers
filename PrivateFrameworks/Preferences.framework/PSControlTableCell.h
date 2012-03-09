/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIActivityIndicatorView, NSArray, UIControl, NSDictionary, UIView;

@interface PSControlTableCell : PSTableCell  {
    UIControl *_control;
    UIActivityIndicatorView *_activityIndicator;
    NSArray *_values;
    NSDictionary *_titleDict;
    UIView *_disabledView;
}


- (void)dealloc;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (BOOL)canReload;
- (id)valueLabel;
- (id)control;
- (void)setControl:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setValues:(id)arg1 titleDictionary:(id)arg2;
- (void)controlChanged:(id)arg1;
- (void)setCellEnabled:(BOOL)arg1;

@end
