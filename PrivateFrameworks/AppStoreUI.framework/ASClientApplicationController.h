/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class ISOperation, SSDownloadManager;

@interface ASClientApplicationController : SUClientApplicationController  {
    SSDownloadManager *_downloadManager;
    ISOperation *_geniusStatisticsOperation;
    int _libraryURLType;
}


- (id)init;
- (void)dealloc;
- (BOOL)_cancelDownloadingIconOnHomeScreenWithDisplayID:(id)arg1;
- (BOOL)_cancelDownloadingIconOnHomeScreenWithDownload:(id)arg1;
- (BOOL)_cancelDownloadingIconOnHomeScreenWithPurchase:(id)arg1;
- (void)_showAccessoryLookupForURL:(id)arg1;
- (id)_startDownloadManager;
- (void)_stopDownloadManager;
- (void)_cancelGeniusStatisticsOperation;
- (BOOL)displayClientURL:(id)arg1;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (BOOL)wasLaunchedFromLibrary;
- (void)returnToLibrary;
- (id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1;
- (BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
- (BOOL)reportAProblemForItemIdentifier:(unsigned long long)arg1;
- (id)tabBarController:(id)arg1 viewControllerForContext:(id)arg2;
- (id)tabBarController:(id)arg1 rootViewControllerForSection:(id)arg2;
- (void)becomeActive;
- (void)resignActive;

@end
