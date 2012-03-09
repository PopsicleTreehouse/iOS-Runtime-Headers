/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class DeviceLocalAccount, AccountSettingsUISyncDataController, UIView, NSString, UIProgressHUD, NSMutableDictionary, NSArray;

@interface AccountSettingsUISyncController : AccountSettingsUIDetailController <UIActionSheetDelegate> {
    id _account;
    NSString *_accountIdentifier;
    id _syncActionsAccount;
    DeviceLocalAccount *_deviceLocalAccount;
    BOOL _shouldSaveDeviceLocalAccount;
    AccountSettingsUISyncDataController *_syncDataController;
    BOOL _isFirstSetup;
    BOOL _isUpdateSetup;
    UIView *_confirmEnableSyncSheet;
    UIView *_reallyConfirmEnableSyncSheet;
    UIView *_reallyConfirmKeepLocalDataSheet;
    NSArray *_dataclassesToEnable;
    BOOL _didFinishFirstSetup;
    NSMutableDictionary *_syncSaveOperationsByDataclass;
    BOOL _isSavingSyncSettingsInBackground;
    UIProgressHUD *_hud;
    NSString *_hudText;
    BOOL _displayingHUD;
    UIView *_confirmDisableSyncSheet;
    BOOL _showsDeleteAccountButton;
    UIView *_confirmDeleteAccountSheet;
    BOOL _didDeleteAccount;
    BOOL _mergedDataOnAccountDelete;
    BOOL _creatingTheAccounts;
    BOOL _forceMailSetup;
    NSArray *_preEnabledDataclasses;
    BOOL _accountHasSeparateRemindersDataclass;
}

@property(retain) id account;
@property BOOL showsDeleteAccountButton;
@property BOOL didDeleteAccount;
@property BOOL didFinishFirstSetup;
@property(getter=isUpdateSetup) BOOL updateSetup;
@property(getter=isFirstSetup) BOOL firstSetup;
@property(copy) id accountIdentifier;
@property(retain) NSArray * preEnabledDataclasses;

+ (BOOL)_doesSyncedDataExistForDataclass:(id)arg1;
+ (BOOL)shouldPresentAsModalSheet;

- (void)setAccount:(id)arg1;
- (void)deleteAccount;
- (BOOL)isEnabledForDataclass:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(id)arg2;
- (id)displayedAccountTypeString;
- (id)displayedShortAccountTypeString;
- (id)account;
- (id)init;
- (void)dealloc;
- (void)setSwitchForDataclass:(id)arg1 to:(id)arg2;
- (BOOL)mergedDataOnAccountDelete;
- (BOOL)syncSaveOperationsHasDataclass:(id)arg1;
- (void)saveSyncSettings;
- (id)otherSetupSpecifiers;
- (BOOL)showingModalProgress;
- (BOOL)_carrierBundleSaysHideFindMyiPhone;
- (void)preconditionMetToEnableDataclass:(id)arg1;
- (void)preconditionNotMetToEnableDataclass:(id)arg1;
- (void)preconditionMetToDisableDataclass:(id)arg1;
- (BOOL)didFinishFirstSetup;
- (void)setDataclassEnabled:(id)arg1 specifier:(id)arg2;
- (id)_navigationTitle;
- (void)_hideHUD;
- (id)accountInfoUsername:(id)arg1;
- (BOOL)accountInfoSpecifierEnabled;
- (void)confirmDeleteAccount:(id)arg1;
- (id)_localizationKeyForDataclass:(id)arg1 withSuffix:(id)arg2;
- (id)isDataclassEnabled:(id)arg1;
- (id)iconForDataclass:(id)arg1;
- (id)firstSetupInitialSettings;
- (id)_accountInfoSpecifier;
- (id)specifiersForDataclasses:(id)arg1;
- (id)deleteButtonSpecifier;
- (BOOL)showsDeleteAccountButton;
- (void)beginSaveSyncSettings;
- (void)_showModalProgress;
- (void)_showModalProgressWithText:(id)arg1 afterDelay:(double)arg2;
- (void)_hideModalProgressAfterDelay:(double)arg1;
- (id)_modalProgressTextForDataclass:(id)arg1 enabled:(BOOL)arg2;
- (void)showModalProgressWithText:(id)arg1;
- (void)_backgroundSaveSyncSettings:(id)arg1;
- (void)_commitSyncSettings:(id)arg1 forAccount:(id)arg2;
- (void)_mainThreadFinishedSaveSyncSettings;
- (id)_sanitizeSyncSettingsDictionary:(id)arg1 forAccount:(id)arg2;
- (void)didSaveSyncSettings:(id)arg1 forAccount:(id)arg2;
- (void)setDidFinishFirstSetup:(BOOL)arg1;
- (void)_reallyFinishedFirstSetup;
- (void)didFinishSavingSyncSettingsInBackground;
- (void)didConfirmDeleteAccount:(id)arg1;
- (void)didConfirmEnableSyncSettings:(id)arg1;
- (void)didReallyConfirmEnableSyncSettings:(id)arg1;
- (void)didConfirmDisableSyncSettings:(id)arg1;
- (void)didReallyConfirmKeepLocalData:(id)arg1;
- (id)userActionsToEnableDataclass:(id)arg1;
- (id)userActionsToDisableDataclass:(id)arg1;
- (void)_enableDataclass:(id)arg1;
- (void)_disableDataclass:(id)arg1;
- (BOOL)preconditionNeedsToBeMetToEnableDataclass:(id)arg1;
- (void)ensurePreconditionIsMetToEnableDataclass:(id)arg1;
- (BOOL)shouldAskForUserConfirmationToEnableDataclass:(id)arg1;
- (void)confirmStartSyncingDataclass:(id)arg1;
- (void)syncDataclass:(id)arg1 withAction:(id)arg2;
- (id)_aggregateDictionaryKeyForDataclass:(id)arg1 enabled:(BOOL)arg2;
- (BOOL)preconditionNeedsToBeMetToDisableDataclass:(id)arg1;
- (void)ensurePreconditionIsMetToDisableDataclass:(id)arg1;
- (BOOL)shouldAskForUserConfirmationToDisableDataclass:(id)arg1;
- (void)confirmStopSyncingData:(id)arg1;
- (void)removeActionForSyncDataclass:(id)arg1;
- (id)titleStyleTextForDataclass:(id)arg1;
- (id)localizedTextForDataclasses:(id)arg1 willBeUsedAtBeginningOfSentence:(BOOL)arg2;
- (id)titleForAccountSettingsAction:(id)arg1;
- (id)confirmationTitleForDataclassToEnable:(id)arg1;
- (id)confirmationTextForDataclassToEnable:(id)arg1 userCanKeepCurrentData:(BOOL)arg2 localDataExists:(BOOL)arg3;
- (id)confirmationTextForDataclassToReallyEnable:(id)arg1;
- (id)confirmationTitleForDataclassToReallyEnable:(id)arg1;
- (void)reallyConfirmStartSyncingWithText:(id)arg1 title:(id)arg2 dataclass:(id)arg3;
- (id)confirmationTextForDataclassToReallyKeepLocalData:(id)arg1;
- (id)confirmationTitleForDataclassToReallyKeepLocalData:(id)arg1;
- (void)reallyConfirmKeepLocalDataWithText:(id)arg1 title:(id)arg2 dataclass:(id)arg3;
- (id)shortTitleForAccountSettingsAction:(id)arg1;
- (id)confirmationTitleForDataclassToDisable:(id)arg1;
- (id)confirmationTextForDataclassToDisable:(id)arg1 userCanKeepCurrentData:(BOOL)arg2;
- (void)didConfirmSaveSyncSettings:(BOOL)arg1;
- (id)syncableDataclasses:(id)arg1;
- (id)localizedTextForDataclasses:(id)arg1 willBeUsedAtBeginningOfSentence:(BOOL)arg2 includeMailDataclass:(BOOL)arg3;
- (BOOL)hasSyncDataclassesEnabled;
- (id)deleteActionsWithSyncDataclassesEnabled:(BOOL)arg1;
- (id)titleForAccountDeleteAction:(id)arg1 hasSyncDataclassesEnabled:(BOOL)arg2 supportsMerge:(BOOL)arg3;
- (id)_dataclassesTextForDeleteConfirmationIncludingMail:(BOOL)arg1;
- (void)deleteAccountAndData:(id)arg1;
- (void)setDidDeleteAccount:(BOOL)arg1;
- (void)_backgroundDeleteAccountData:(id)arg1;
- (BOOL)didDeleteAccount;
- (void)updateLocalStoresAfterRemovingAccountInformation;
- (void)_mainThreadFinishedDeleteAccountDataWithSuccess:(id)arg1;
- (void)hideModalProgress;
- (void)didFinishDeletingAccountInBackground;
- (void)setFirstSetup:(BOOL)arg1;
- (void)setUpdateSetup:(BOOL)arg1;
- (void)forceMailSetup;
- (void)setPreEnabledDataclasses:(id)arg1;
- (id)preEnabledDataclasses;
- (void)cancelButtonClicked:(id)arg1;
- (id)specifiers;
- (id)_viewForSheet;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (id)accountIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (id)newAccount;
- (void)doneButtonClicked:(id)arg1;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)otherSpecifiers;
- (Class)accountInfoControllerClass;
- (BOOL)backgroundDeleteAccountData;
- (BOOL)shouldInitiallyEnableDataclass:(id)arg1;
- (void)setShowsDeleteAccountButton:(BOOL)arg1;
- (void)saveSyncSettings:(id)arg1 forAccount:(id)arg2;
- (BOOL)isFirstSetup;
- (void)cancelAccountsCreation;
- (BOOL)isUpdateSetup;
- (void)createAccounts;

@end
