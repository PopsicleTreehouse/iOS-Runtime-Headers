/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableSet, SUWebView, NSLock;

@interface SUWebViewDelegate : NSObject  {
    NSLock *_lock;
    NSMutableSet *_mediaURLs;
    int _modalAlertClickedIndex;
    id _originalFrameLoadDelegate;
    id _originalPolicyDelegate;
    id _originalResourceLoadDelegate;
    id _originalUIDelegate;
    int _usingNetworkCount;
    SUWebView *_webView;
}

@property SUWebView * webView;
@property(retain) id originalFrameLoadDelegate;
@property(retain) id originalPolicyDelegate;
@property(retain) id originalResourceLoadDelegate;
@property(retain) id originalUIDelegate;


- (BOOL)respondsToSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (BOOL)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)initWithWebView:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)forwardInvocation:(id)arg1;
- (id)webView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)originalUIDelegate;
- (id)originalResourceLoadDelegate;
- (id)originalPolicyDelegate;
- (id)originalFrameLoadDelegate;
- (id)_newAlertWithMessage:(id)arg1;
- (BOOL)webView:(id)arg1 shouldLoadMediaURL:(id)arg2 inFrame:(id)arg3;
- (id)_userIdentifier;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (void)setOriginalUIDelegate:(id)arg1;
- (void)setOriginalResourceLoadDelegate:(id)arg1;
- (void)setOriginalPolicyDelegate:(id)arg1;
- (void)setOriginalFrameLoadDelegate:(id)arg1;
- (void)endUsingNetwork;
- (void)beginUsingNetwork;
- (void)cancelUsingNetwork;
- (void)clearWeakReferences;

@end
