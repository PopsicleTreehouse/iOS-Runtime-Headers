/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UIWebView;

@interface WebContainerView : UIView  {
    UIWebView *_webView;
    BOOL _highlighted;
    BOOL _reallyHighlighted;
}

@property(getter=isHighlighted) BOOL highlighted;
@property(retain) UIWebView * webView;


- (void)dealloc;
- (void)setWebView:(id)arg1;
- (id)webView;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (void)_setHighlightedNow;

@end
