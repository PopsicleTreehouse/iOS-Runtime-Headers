/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UICompletionTablePrivate;

@interface UICompletionTable : UIView <UITableViewDelegate, UITableViewDataSource> {
    UICompletionTablePrivate *_private;
}

@property id delegate;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } scrollIndicatorInsets;

+ (id)_cellFont;
+ (id)_shadowImage;

- (void)dealloc;
- (void)setTopStrokeColor:(id)arg1;
- (id)_completionForRow:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })scrollIndicatorInsets;
- (void)setScrollIndicatorInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (id)delegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
