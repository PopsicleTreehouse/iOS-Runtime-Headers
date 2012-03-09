/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUMessageTextContentViewDelegate>;

@interface SUMessageTextContentView : UITextContentView <DOMEventListener> {
}

@property <SUMessageTextContentViewDelegate> * delegate;


- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 webView:(id)arg2;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)handleEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_hasImages;
- (void)_collapseIfNecessary;
- (void)_sendDidChangeSize;
- (void)_initSUMessageTextContentView;
- (void)setMarginEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)insertHTMLString:(id)arg1;
- (void)_sendDidChange;

@end
