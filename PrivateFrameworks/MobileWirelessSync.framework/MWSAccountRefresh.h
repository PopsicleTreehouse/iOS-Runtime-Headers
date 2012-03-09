/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileWirelessSync.framework/MobileWirelessSync
 */

@class NSSet, NSString;

@interface MWSAccountRefresh : NSObject <AccountRefreshProtocol> {
    NSString *_username;
    NSString *_accountId;
    NSSet *_subscribedCalendarIds;
}

+ (id)accountToRefreshForBasicAccount:(id)arg1;

- (id)init;
- (void)dealloc;
- (BOOL)refreshContainerListForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (id)defaultContainerIdentifierForDataclass:(id)arg1;
- (id)_initWithBasicAccount:(id)arg1;
- (id)_username;
- (BOOL)refreshContainersForDataclass:(id)arg1 isUserRequested:(BOOL)arg2;
- (BOOL)refreshContainerWithIdentifier:(id)arg1 forDataclass:(id)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)_hasSubscribedCalendarWithIdentifier:(id)arg1;
- (BOOL)_refreshSubscribedCalendarWithIdentifier:(id)arg1;
- (BOOL)_refreshDataclass:(id)arg1;
- (BOOL)_hasSubscribedCalendars;
- (BOOL)_refreshSubscribedCalendars;
- (BOOL)_isConfiguredSyncAccount;
- (struct __CFString { }*)_mwsDataclassNameForDataclass:(id)arg1;

@end
