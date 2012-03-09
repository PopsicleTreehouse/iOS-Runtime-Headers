/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@class UIAlertView, NSArray, NSString, PSSpecifier, DAAccount, NSMutableDictionary;

@interface DASettingsAccountController : AccountSettingsUIDetailController <AccountSettingsUIIdentityPickerControllerDelegate, DAValidityCheckConsumer, DAAutoDiscoveryConsumer, UIActionSheetDelegate, UIAlertViewDelegate> {
    BOOL _accountNeedsAdd;
    int _purposeInLife;
    BOOL _setupComplete;
    DAAccount *_account;
    NSString *_chosenType;
    NSString *_placeHolder;
    id _confirmUnvalidatedAlertOrSheet;
    id _confirmDeleteAccountAlertOrSheet;
    UIAlertView *_sslFailureView;
    BOOL _attemptedAutodiscovery;
    BOOL _attemptedValidation;
    BOOL _validating;
    BOOL _validatedSuccessfully;
    BOOL _confirmedUnvalidatedAccount;
    BOOL _haveRegisteredForAccountsChanged;
    BOOL _needsSave;
    NSMutableDictionary *_smimeAccountProperties;
    PSSpecifier *_selectedIdentitySpecifier;
    NSArray *_identitySpecifiers;
}

@property BOOL needsSave;
@property BOOL attemptedValidation;


- (id)account;
- (void)dealloc;
- (void)_accountsChanged:(id)arg1;
- (void)confirmDeleteAccount:(id)arg1;
- (void)didConfirmDeleteAccount:(BOOL)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (id)accountSpecifiers;
- (id)specifiers;
- (void)setAttemptedValidation:(BOOL)arg1;
- (BOOL)attemptedValidation;
- (void)setNeedsSave:(BOOL)arg1;
- (BOOL)needsSave;
- (id)localizedDisablingAccountString;
- (id)localizedEnablingAccountString;
- (id)localizedEnterAccountInfoString;
- (id)lastGroupSpecifierInSpecifiers:(id)arg1;
- (int)indexOfCurrentlyEditingCell;
- (void)showProgress;
- (id)accountBooleanPropertyWithSpecifier:(id)arg1;
- (void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)showSSLFailureView;
- (void)showIdenticalAccountFailureView;
- (void)_updateCell:(id)arg1 forState:(BOOL)arg2;
- (void)_setAccountSMIMEIdentityWithSpecifier:(id)arg1;
- (BOOL)_specifierHasAccountSMIMEIdentity:(id)arg1;
- (id)currentlyEditingCell;
- (id)localizedValidationFailureTitleString;
- (id)localizedAccountSetupTitleString;
- (void)_doPostSaveActions;
- (void)reloadAccountOnSpecifier;
- (void)_setSMIMEAccountPropertiesOnAccount;
- (void)_dismissAndUpdateParent;
- (id)localizedAccountTitleString;
- (id)_defaultAccountDescription;
- (BOOL)_beginAccountAutodiscovery;
- (void)_saveAccountDismissWhenDone:(BOOL)arg1;
- (void)_confirmSaveUnvalidatedAccount;
- (BOOL)dismissesAfterInitialSetup;
- (BOOL)transitionsAfterInitialSetup;
- (BOOL)autodiscoverAccount;
- (id)localizedConfirmSaveUnvalidatedAccountMessageString;
- (id)localizedConfirmSaveUnvalidatedAccountTitleString;
- (void)_deleteAccount;
- (void)hideProgressWithPrompt:(id)arg1 showButtons:(BOOL)arg2;
- (void)_beginAccountValidation;
- (void)didConfirmTryWithoutSSL:(BOOL)arg1;
- (void)didConfirmSaveUnvalidatedAccount:(BOOL)arg1;
- (BOOL)_smimeEnabled;
- (void)_setSMIMEIdentity:(struct __SecIdentity { }*)arg1 forKey:(id)arg2;
- (struct __SecIdentity { }*)_smimeIdentityForKey:(id)arg1;
- (void)_setSMIMEEnabled:(id)arg1 withSpecifier:(id)arg2;
- (void)_removeAdditionalSMIMESpecifiersAnimated:(BOOL)arg1;
- (void)_insertAdditionalSMIMESpecifiers;
- (id)_smimeEncryptSpecifier;
- (id)_smimeSigningSpecifier;
- (id)_smimeAccountPropertyWithSpecifier:(id)arg1;
- (void)_setSMIMEAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)_handleTrustFromIdentity:(struct __SecIdentity { }*)arg1 handler:(id)arg2;
- (id)_persistentRefForIdentity:(struct __SecIdentity { }*)arg1;
- (void)_setSMIMEAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)_smimeAccountPropertyForKey:(id)arg1;
- (id)_smimeSpecifiers;
- (id)autodiscoverySpecifiers;
- (id)newDefaultAccount;
- (id)accountFromSpecifier;
- (void)reloadAccount;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)account:(id)arg1 wasAutoDiscovered:(BOOL)arg2 error:(id)arg3;
- (void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3;
- (void)updateDoneButton;
- (void)doneButtonClicked:(id)arg1;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)finishedAccountSetup;
- (BOOL)isPropertyEnabledForIdentityPickerController:(id)arg1;
- (struct __SecIdentity { }*)selectedIdentityForIdentityPickerController:(id)arg1;
- (void)identityPickerController:(id)arg1 setPropertyEnabled:(BOOL)arg2 withIdentity:(struct __SecIdentity { }*)arg3;
- (id)localizedSwitchNameForIdentityPickerController:(id)arg1;
- (id)copyIdentitiesForIdentityPickerController:(id)arg1;
- (struct __SecTrust { }*)copyTrustForIdentityPickerController:(id)arg1 identity:(struct __SecIdentity { }*)arg2;
- (id)emailAddressesForIdentityPickerController:(id)arg1;
- (BOOL)allowEditingForIdentityPickerController:(id)arg1;
- (void)propertyValueChanged:(id)arg1;
- (BOOL)validateAccount;
- (BOOL)haveEnoughValues;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (id)accountPropertyWithSpecifier:(id)arg1;
- (BOOL)isRunningFromMobileMailApp;

@end
