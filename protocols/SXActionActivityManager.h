/* Generated by RuntimeBrowser.
 */

@protocol SXActionActivityManager <NSObject>

@required

- (<SXActionActivityGroup> *)activityGroupForAction:(SXAction *)arg1;
- (<SXActionPreviewActivity> *)previewActivityForAction:(SXAction *)arg1;
- (void)registerActionActivityProvider:(id <SXActionActivityProvider>)arg1 actionType:(Class)arg2;

@end
