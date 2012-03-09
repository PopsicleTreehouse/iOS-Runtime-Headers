/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptOperationDelegate, SUScriptSectionsController, SUScriptProtocol, SUScriptApplication, SUWebImagePool, NSString, SUScriptViewController, SUScriptMediaLibrary, SUScriptDevice, SUScriptNotificationObserver, SUScriptWindowContext, <SUScriptInterfaceDelegate>, WebScriptObject, NSNumber, NSMutableDictionary, SUScriptNavigationBar, SUScriptPurchaseManager, SUScriptAccount, SUScriptWindow, SUScriptAddressBook, SUScriptAccountManager, NSArray, NSURL;

@interface SUScriptInterface : SUScriptObject  {
    SUScriptAccountManager *_accountManager;
    <SUScriptInterfaceDelegate> *_delegate;
    NSMutableDictionary *_downloadQueues;
    NSURL *_mainFrameURL;
    SUScriptMediaLibrary *_mediaLibrary;
    SUScriptNotificationObserver *_notificationObserver;
    SUScriptPurchaseManager *_purchaseManager;
    SUScriptOperationDelegate *_scriptOperationDelegate;
    BOOL _sourceIsTrusted;
    SUScriptWindowContext *_scriptWindowContext;
    id _threadSafeDelegate;
    SUWebImagePool *_webImagePool;
    WebScriptObject *_windowScriptObject;
}

@property(readonly) SUScriptPurchaseManager * purchaseManager;
@property(readonly) NSString * actionTypeReturnToLibrary;
@property(readonly) SUScriptAddressBook * addressBook;
@property(readonly) SUScriptDevice * device;
@property(readonly) SUScriptApplication * application;
@property(readonly) SUScriptMediaLibrary * mediaLibrary;
@property(readonly) SUScriptWindow * window;
@property(readonly) SUScriptProtocol * protocol;
@property(readonly) SUScriptSectionsController * sectionsController;
@property(readonly) SUScriptViewController * viewController;
@property(readonly) NSArray * accounts;
@property(retain) SUScriptAccount * primaryAccount;
@property(retain) SUScriptAccount * primaryLockerAccount;
@property(readonly) NSArray * installedSoftwareApplications;
@property(retain) SUScriptWindowContext * scriptWindowContext;
@property <SUScriptInterfaceDelegate> * delegate;
@property(readonly) <SUScriptInterfaceDelegate> * threadSafeDelegate;
@property(retain) NSURL * mainFrameURL;
@property BOOL sourceIsTrusted;
@property(copy) NSString * cookie;
@property(readonly) id globalRootObject;
@property(readonly) id loggingEnabled;
@property(readonly) SUScriptNavigationBar * navigationBar;
@property(readonly) NSNumber * orientation;
@property(readonly) id screenReaderRunning;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)accounts;
- (void)log:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)addressBook;
- (id)accountName;
- (id)protocol;
- (id)systemVersion;
- (void)goBack;
- (void)setOrientation:(id)arg1;
- (BOOL)isRunningTest;
- (BOOL)launchedToTest;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void)setNavigationBar:(id)arg1;
- (id)navigationBar;
- (id)parentViewController;
- (void)openURL:(id)arg1;
- (void)startedTest:(id)arg1;
- (id)orientation;
- (void)setWindow:(id)arg1;
- (void)finishedTest:(id)arg1 extraResults:(id)arg2;
- (id)delegate;
- (id)window;
- (void)setDelegate:(id)arg1;
- (id)attributeKeys;
- (id)cookie;
- (void)setCookie:(id)arg1;
- (void)_showMediaPlayerForMediaItem:(id)arg1;
- (id)purchaseManager;
- (id)actionTypeReturnToLibrary;
- (void)setDevice:(id)arg1;
- (id)application;
- (void)addPurchaseWithInfo:(id)arg1;
- (void)addExternalDownloads:(id)arg1;
- (void)setMediaLibrary:(id)arg1;
- (id)mediaLibrary;
- (void)setSectionsController:(id)arg1;
- (id)sectionsController;
- (void)_gotoStoreURL:(id)arg1 withAuthentication:(BOOL)arg2 forceAuthentication:(BOOL)arg3;
- (void)_enterAccountFlowWithURL:(id)arg1;
- (id)_copyScriptViewControllerForParentViewController;
- (void)setPrimaryLockerAccount:(id)arg1;
- (void)setPrimaryAccount:(id)arg1;
- (void)setAccounts:(id)arg1;
- (id)primaryLockerAccount;
- (id)primaryAccount;
- (id)systemItemUndo;
- (id)systemItemTrash;
- (id)systemItemStop;
- (id)systemItemSearch;
- (id)systemItemRewind;
- (id)systemItemReplay;
- (id)systemItemRefresh;
- (id)systemItemRedo;
- (id)systemItemPlay;
- (id)systemItemPause;
- (id)systemItemPageCurl;
- (id)systemItemOrganize;
- (id)systemItemFlexibleSpace;
- (id)systemItemFixedSpace;
- (id)systemItemFastForward;
- (id)systemItemEdit;
- (id)systemItemDone;
- (id)systemItemCompose;
- (id)systemItemCancel;
- (id)systemItemCamera;
- (id)systemItemBookmarks;
- (id)systemItemAdd;
- (id)systemItemAction;
- (id)installedSoftwareApplications;
- (void)setProtocol:(id)arg1;
- (void)setMainFrameURL:(id)arg1;
- (struct OpaqueJSContext { }*)_copyJavaScriptContext;
- (void)setLoggingEnabled:(id)arg1;
- (void)setGlobalRootObject:(id)arg1;
- (id)screenReaderRunning;
- (id)loggingEnabled;
- (id)globalRootObject;
- (id)_className;
- (BOOL)sourceIsTrusted;
- (void)setWindowScriptObject:(id)arg1;
- (void)setSourceIsTrusted:(BOOL)arg1;
- (void)setScriptWindowContext:(id)arg1;
- (id)scriptWindowContext;
- (id)imagePool;
- (struct OpaqueJSContext { }*)copyJavaScriptContext;
- (id)softwareApplicationWithAdamID:(id)arg1;
- (void)signOutPrimaryAccount;
- (id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5;
- (void)showMediaPreviewWithURLString:(id)arg1;
- (void)showMediaPreviewWithURLString:(id)arg1;
- (void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8;
- (BOOL)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4;
- (void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3;
- (BOOL)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2;
- (void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2;
- (void)sendPostOfType:(id)arg1 withOptions:(id)arg2;
- (void)selectTrackListItemWithIdentifier:(id)arg1;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)retryAllRestoreDownloads;
- (void)reportAProblemForIdentifier:(id)arg1;
- (void)reloadFooterSection:(id)arg1 withURL:(id)arg2;
- (void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3;
- (void)redeemCode:(id)arg1;
- (void)pingURL:(id)arg1;
- (void)performPurchaseAnimationForIdentifier:(id)arg1;
- (id)makeWindow;
- (id)makeVolumeViewController;
- (id)makeURLRequestWithURLs:(id)arg1 timeoutInterval:(id)arg2;
- (id)makeTextFieldWithStyle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 width:(id)arg4;
- (id)makeStorePageWithURLs:(id)arg1;
- (id)makeSplitViewController;
- (id)makeSegmentedControl;
- (id)makeScriptImagePickerController;
- (id)makeScriptActionWithType:(id)arg1;
- (id)makeReviewWithAdamID:(id)arg1;
- (id)makeReportAProblemViewControllerWithAdamID:(id)arg1;
- (id)makeRadialGradientWithX0:(float)arg1 y0:(float)arg2 r0:(float)arg3 x1:(float)arg4 y1:(float)arg5 r1:(float)arg6;
- (id)makePopOverWithViewController:(id)arg1;
- (id)makeNumberFormatterWithStyle:(id)arg1;
- (id)makeNavigationControllerWithRootViewController:(id)arg1;
- (id)makeMessageEntryViewController;
- (id)makeMessage;
- (id)makeMenuViewController;
- (id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)arg1;
- (id)makeMediaPlayerItemWithProperties:(id)arg1;
- (id)makeLinearGradientWithX0:(float)arg1 y0:(float)arg2 x1:(float)arg3 y1:(float)arg4;
- (id)makeDocumentInteractionController;
- (id)makeDialog;
- (id)makeDateFormatter;
- (id)makeComposeReviewViewControllerWithReview:(id)arg1;
- (id)makeColorWithWhite:(id)arg1 alpha:(id)arg2;
- (id)makeColorWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4;
- (id)makeColorWithHue:(id)arg1 saturation:(id)arg2 brightness:(id)arg3 alpha:(id)arg4;
- (id)makeCanvasWithWidth:(id)arg1 height:(id)arg2;
- (id)makeButtonWithTitle:(id)arg1 action:(id)arg2;
- (id)makeButtonWithSystemItemString:(id)arg1 action:(id)arg2;
- (id)makeAccountPageWithURLs:(id)arg1;
- (id)makeAccount;
- (BOOL)isExplicitContentDisabled;
- (BOOL)haveAccount;
- (void)handleTrackListWithPropertyListString:(id)arg1;
- (void)handleRootObjectWithPropertyListString:(id)arg1;
- (void)handleProtocolPropertyListString:(id)arg1;
- (void)handleDialogPropertyListString:(id)arg1;
- (void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(BOOL)arg3 forceAuthentication:(BOOL)arg4;
- (void)gotoStoreURL:(id)arg1;
- (id)getDownloadQueueWithQueueType:(id)arg1;
- (void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2;
- (void)dismissWindowsWithOptions:(id)arg1;
- (void)dismissSheet;
- (int)dialogDisplayCountForKey:(id)arg1;
- (void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (BOOL)canSendEmail;
- (void)authenticateForAccount:(id)arg1 withOptions:(id)arg2;
- (BOOL)arePodcastsDisabled;
- (void)addPurchaseWithInfo:(id)arg1 options:(id)arg2;
- (void)addExternalDownloadsFromManifestURL:(id)arg1;
- (void)addExternalDownloads:(id)arg1 options:(id)arg2;
- (id)accountForDSID:(id)arg1;
- (void)accessibilityPostLayoutChange;
- (id)scriptAttributeKeys;
- (id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4;
- (id)hardwareType;
- (id)diskSpaceAvailable;
- (id)activeNetworkType;
- (BOOL)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(BOOL)arg2;
- (id)device;
- (id)accountDSID;
- (id)_copyOrientation;
- (id)_copyGlobalRootObject;
- (id)mainFrameURL;
- (void)_accessibilityPostLayoutChange;
- (id)threadSafeDelegate;
- (void)deallocMediaLibrary;
- (void)deallocDownloadQueue;
- (void)deallocAuthentication;
- (void)_globalEventNotification:(id)arg1;
- (void)initAuthentication;
- (void)_finishedTest:(id)arg1 extraResults:(id)arg2;
- (void)_startedTest:(id)arg1;
- (BOOL)_isRunningTest;
- (BOOL)_launchedToTest;

@end
