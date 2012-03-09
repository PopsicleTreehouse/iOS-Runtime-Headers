/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class IMServiceImpl, FTRegConnectionHandler;

@interface CNFInternalAccountListViewController : PSListController  {
    IMServiceImpl *_service;
    FTRegConnectionHandler *_connectionHandler;
}

@property(retain) IMServiceImpl * service;


- (void)setService:(id)arg1;
- (void)dealloc;
- (id)accountNameForSpecifier:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_stopListeningForNotifications;
- (void)_startListeningForNotifications;
- (void)_handleAccountNotification:(id)arg1;
- (id)initWithServiceType:(int)arg1;
- (void)accountTappedWithSpecifier:(id)arg1;
- (id)specifiers;
- (BOOL)canBeShownFromSuspendedState;
- (void)_handleDaemonConnected:(id)arg1;
- (id)service;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end
