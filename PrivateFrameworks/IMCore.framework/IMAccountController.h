/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface IMAccountController : NSObject  {
    NSMutableArray *_accounts;
    NSMutableDictionary *_accountMap;
    BOOL _isReadOnly;
}

@property(readonly) id mostLoggedInAccount;
@property(readonly) id aimAccount;
@property(readonly) id jabberAccount;
@property(readonly) int numberOfAccounts;
@property(readonly) NSArray * accounts;
@property(readonly) NSArray * activeAccounts;
@property(readonly) NSArray * connectedAccounts;
@property(readonly) NSMutableArray * _accounts;
@property(readonly) id bestAccountForStatus;

+ (id)sharedInstance;
+ (id)bestAccountFromAccounts:(id)arg1;

- (id)accounts;
- (id)activeAccounts;
- (BOOL)deleteAccount:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)jabberAccount;
- (id)aimAccount;
- (id)mostLoggedInAccount;
- (id)anyConnectedAccountForService:(id)arg1;
- (id)anyActiveAccountForService:(id)arg1;
- (id)anyAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)anyActiveAccountForService:(id)arg1 withLogin:(id)arg2;
- (id)anyConnectedAccountForService:(id)arg1 withLogin:(id)arg2;
- (BOOL)accountConnected:(id)arg1;
- (BOOL)accountConnecting:(id)arg1;
- (BOOL)activateAndHandleReconnectAccount:(id)arg1;
- (BOOL)activateAccount:(id)arg1 force:(BOOL)arg2;
- (BOOL)addAccount:(id)arg1 atIndex:(int)arg2;
- (BOOL)canDeleteAccount:(id)arg1;
- (id)connectedAccountsWithCapability:(unsigned long long)arg1;
- (id)_accounts;
- (id)accountAtIndex:(int)arg1;
- (BOOL)canActivateAccount:(id)arg1;
- (id)connectedAccountsForService:(id)arg1;
- (BOOL)activateAndHandleReconnectAccounts:(id)arg1;
- (BOOL)activateAccount:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3;
- (BOOL)activateAccounts:(id)arg1 force:(BOOL)arg2 locally:(BOOL)arg3;
- (BOOL)canActivateAccounts:(id)arg1;
- (BOOL)deactivateAccounts:(id)arg1 withDisable:(BOOL)arg2;
- (BOOL)addAccount:(id)arg1 atIndex:(int)arg2 locally:(BOOL)arg3;
- (int)numberOfAccounts;
- (id)accountsWithCapability:(unsigned long long)arg1;
- (BOOL)accountActive:(id)arg1;
- (void)_activeAccountChanged:(id)arg1;
- (BOOL)deactivateAccount:(id)arg1 withDisable:(BOOL)arg2;
- (BOOL)deleteAccount:(id)arg1 locally:(BOOL)arg2;
- (BOOL)addAccount:(id)arg1 locally:(BOOL)arg2;
- (BOOL)activateAccount:(id)arg1 locally:(BOOL)arg2;
- (id)connectedAccounts;
- (id)bestAccountForStatus;
- (void)autoLogin;
- (BOOL)activateAccounts:(id)arg1;
- (BOOL)deactivateAccounts:(id)arg1;
- (id)accountsForService:(id)arg1;
- (BOOL)activateAccount:(id)arg1;
- (BOOL)deactivateAccount:(id)arg1;
- (id)activeAccountsForService:(id)arg1;
- (id)anyAccountForService:(id)arg1 login:(id)arg2 guid:(id)arg3;
- (id)anyAccountForService:(id)arg1;
- (BOOL)readOnly;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)setReadOnly:(BOOL)arg1;
- (BOOL)addAccount:(id)arg1;
- (id)accountForUniqueID:(id)arg1;

@end
