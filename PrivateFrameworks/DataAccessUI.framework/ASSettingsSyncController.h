/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@interface ASSettingsSyncController : AccountSettingsUISyncController <UIModalViewDelegate> {
    BOOL _haveRegisteredForAccountsChanged;
    BOOL _isHotmailAccount;
}


- (void)setAccount:(id)arg1;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (void)dealloc;
- (void)_accountsChanged:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (id)specifiers;
- (void)_foldersToPushChanged;
- (id)numFoldersToPushString:(id)arg1;
- (id)accountIntegerPropertyWithSpecifier:(id)arg1;
- (void)setAccountIntegerProperty:(id)arg1 withSpecifier:(id)arg2;
- (id)_navTitle;
- (void)_reloadFoldersToPushSpecifier;
- (id)_foldersToPushSpecifierAccount;
- (id)_accountFromManager;
- (id)_accountInSpecifier;
- (void)reloadAccountOnSpecifier;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)_folderHierarchyChanged;
- (id)otherSpecifiers;
- (Class)accountInfoControllerClass;
- (BOOL)backgroundDeleteAccountData;
- (void)saveSyncSettings:(id)arg1 forAccount:(id)arg2;

@end
