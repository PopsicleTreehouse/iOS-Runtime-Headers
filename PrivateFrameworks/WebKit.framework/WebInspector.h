/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebInspectorFrontend, WebView;

@interface WebInspector : NSObject  {
    WebView *_webView;
    WebInspectorFrontend *_frontend;
}

+ (id)webInspector;

- (void)dealloc;
- (void)close:(id)arg1;
- (void)setWebFrame:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)webViewClosed;
- (void)showConsole:(id)arg1;
- (void)showTimeline:(id)arg1;
- (void)toggleDebuggingJavaScript:(id)arg1;
- (void)toggleProfilingJavaScript:(id)arg1;
- (BOOL)isJavaScriptProfilingEnabled;
- (void)setJavaScriptProfilingEnabled:(BOOL)arg1;
- (BOOL)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:(BOOL)arg1;
- (void)attach:(id)arg1;
- (void)evaluateInFrontend:(id)arg1 callId:(long)arg2 script:(id)arg3;
- (void)setFrontend:(id)arg1;
- (BOOL)isDebuggingJavaScript;
- (void)stopDebuggingJavaScript:(id)arg1;
- (void)startDebuggingJavaScript:(id)arg1;
- (BOOL)isProfilingJavaScript;
- (void)stopProfilingJavaScript:(id)arg1;
- (void)startProfilingJavaScript:(id)arg1;
- (void)detach:(id)arg1;
- (id)initWithWebView:(id)arg1;
- (void)show:(id)arg1;

@end
