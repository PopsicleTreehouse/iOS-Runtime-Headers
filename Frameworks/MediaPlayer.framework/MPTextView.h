/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableString, UIProgressIndicator, UIImageView, MPWebDocumentView, UIView, UIImage, NSString, UIScrollView, UITextLabel;

@interface MPTextView : MPSwipableView  {
    UIImage *_albumArtwork;
    NSString *_rawText;
    NSMutableString *_text;
    UIImageView *_background;
    UIImageView *_faderView;
    MPWebDocumentView *_webView;
    UIView *_headerView;
    UIScrollView *_scrollView;
    UITextLabel *_loadingLabel;
    UIProgressIndicator *_loadingIndicator;
    BOOL _scrollIndicatorFlashDisabled;
    BOOL _needsLayout;
}

@property(retain) UIImage * artwork;
@property(retain) UIView * headerView;


- (void)dealloc;
- (id)artwork;
- (struct CGImage { }*)_newFaderImageBackgroundWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)newWebView;
- (void)_addTextUI;
- (void)_removeTextUI;
- (void)_createTextUIIfNeeded;
- (void)_updateLoadingUIForWillLoad:(BOOL)arg1;
- (void)_removeLoadingUI;
- (struct CGImage { }*)_newFaderImage:(BOOL)arg1;
- (void)_updateFaderImage:(BOOL)arg1;
- (void)setScrollIndicatorFlashDisabled:(BOOL)arg1;
- (void)_addLoadingUI;
- (void)setText:(id)arg1 willLoad:(BOOL)arg2;
- (void)noteDidSnapshot;
- (void)noteWillSnapshot;
- (void)setArtwork:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (id)headerView;
- (BOOL)hasText;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)webViewWidth;
- (void)webViewDidFinishLoading:(id)arg1;

@end
