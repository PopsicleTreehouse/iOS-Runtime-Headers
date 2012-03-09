/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@class NSArray, NoteContext, AccountsManager;

@interface AccountUtilities : NSObject  {
    AccountsManager *_accountsManager;
    NSArray *_syncableAccounts;
    NoteContext *_noteContext;
}

+ (id)sharedAccountUtilities;

- (id)init;
- (void)dealloc;
- (void)accountsChanged;
- (id)accountsManager;
- (void).cxx_destruct;
- (id)syncAccountIdForDisplayAccountId:(id)arg1;
- (id)allDisplayAccounts;
- (id)allSyncableAccounts;
- (BOOL)isDeviceLocalAccount:(id)arg1;
- (BOOL)localNotesExist;
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1;

@end
