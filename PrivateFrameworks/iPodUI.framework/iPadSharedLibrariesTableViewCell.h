/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSArray, NSMutableArray, CALayer;

@interface iPadSharedLibrariesTableViewCell : UITableViewCell  {
    NSMutableArray *_selectableImageViews;
    CALayer *_dimmerLayer;
    int _selectedViewIndex;
}

@property(readonly) NSArray * selectableImageViews;
@property(readonly) int selectedViewIndex;


- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (int)selectedViewIndex;
- (id)selectableImageViews;
- (void)updateConnectionProgress:(float)arg1 forLibraryAtIndex:(unsigned int)arg2;
- (void)clearSelectableImageViews;
- (void)addSelectableImageView:(id)arg1;
- (void)_updateSelectedImage;

@end
