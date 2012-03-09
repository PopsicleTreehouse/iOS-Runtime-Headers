/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSObject<MBManagerDelegate>;

@interface MBManager : NSObject  {
    id _delegate;
}

@property NSObject<MBManagerDelegate> * delegate;


- (void)cancel;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)setLogLevel:(int)arg1;
- (id)_init;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)restoreState;
- (BOOL)setupBackupWithPasscode:(id)arg1 error:(id*)arg2;
- (BOOL)isBackupEnabled;
- (void)setBackupEnabled:(BOOL)arg1;
- (void)syncBackupEnabled;
- (id)backupState;
- (id)backupList;
- (id)getBackupListWithError:(id*)arg1;
- (id)getBackupListWithFiltering:(BOOL)arg1 error:(id*)arg2;
- (void)startBackup;
- (BOOL)startBackupWithError:(id*)arg1;
- (BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2;
- (id)restoreFilesForDomain:(id)arg1 error:(id*)arg2;
- (id)dateOfNextScheduledBackup;
- (void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2;
- (BOOL)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)restoreFileWithPath:(id)arg1 error:(id*)arg2;
- (void)restoreFileWithPath:(id)arg1;
- (BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 error:(id*)arg3;
- (BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2;
- (void)finishRestore;
- (void)cancelRestore;
- (BOOL)deleteBackupUDID:(id)arg1 error:(id*)arg2;
- (BOOL)startScanWithError:(id*)arg1;
- (unsigned long long)nextBackupSize;
- (id)domainInfoForName:(id)arg1;
- (id)domainInfoList;
- (BOOL)removeDomainName:(id)arg1 error:(id*)arg2;
- (BOOL)isBackupEnabledForDomainName:(id)arg1;
- (void)setBackupEnabled:(BOOL)arg1 forDomainName:(id)arg2;
- (id)restoreInfo;
- (int)getLogLevel;
- (void)setAllowiTunesBackup:(BOOL)arg1;
- (BOOL)allowiTunesBackup;
- (void)rebootDevice;

@end
