/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UINavigationButton, UIImageView, UILabel, NSString, UIImage;

@interface PLLibraryBannerView : UIView  {
    int _bannerStyle;
    UIImageView *_bannerImageView;
    UILabel *_bannerLabel;
    UINavigationButton *_selectionButton;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bannerImageViewInitialFrame;
    NSString *_labelText;
    UIImage *_mainThumbnail;
    BOOL _multipleAssets;
    int _selectionButtonType;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _selectionButtonAction;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animationCompletion;

}

@property(readonly) int bannerStyle;
@property(copy) NSString * labelText;
@property int selectionButtonType;
@property(copy) id selectionButtonAction;


- (void)dealloc;
- (id)labelText;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setSelectionButtonAction:(id)arg1;
- (int)selectionButtonType;
- (int)bannerStyle;
- (void)animateThumbnailToStackViewCell:(id)arg1 inRootView:(id)arg2 completion:(id)arg3;
- (void)setSelectionButtonType:(int)arg1;
- (id)selectionButtonAction;
- (void)_plainAnimateThumbnailToView:(id)arg1 orCell:(id)arg2 inRootView:(id)arg3 wideJump:(BOOL)arg4 completion:(id)arg5;
- (void)_fancyAnimateThumbnailToCell:(id)arg1 completion:(id)arg2;
- (void)_selectionButtonTapped:(id)arg1;
- (void)animateThumbnailToCell:(id)arg1 completion:(id)arg2;
- (void)updateDisplayForAssets:(id)arg1;
- (id)initWithBannerStyle:(int)arg1;
- (void)setLabelText:(id)arg1;

@end
