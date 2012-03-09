/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSError, <CoreDAVAccountInfoProvider>, NSDictionary, NSString, NSURL, NSData, NSSet;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider> {
    NSString *_scheme;
    NSString *_host;
    NSString *_serverRoot;
    int _port;
    NSString *_user;
    NSString *_password;
    NSData *_identityPersist;
    NSURL *_principalURL;
    NSString *_accountID;
    NSDictionary *_serverHeaders;
    NSSet *_serverComplianceClasses;
    NSString *_userAgentHeader;
    BOOL _shouldFailAllTasks;
    BOOL _started;
    BOOL _success;
    NSError *_error;
    <CoreDAVAccountInfoProvider> *_backingAccountInfoProvider;
}

@property(retain) NSString * host;
@property(retain) NSString * serverRoot;
@property(retain) NSString * password;
@property(retain) NSString * user;
@property int port;
@property(retain) NSData * identityPersist;
@property(retain) NSString * scheme;
@property(retain) NSURL * principalURL;
@property(retain) NSString * accountID;
@property(retain) NSDictionary * serverHeaders;
@property(retain) NSSet * serverComplianceClasses;
@property(retain) NSString * userAgentHeader;
@property BOOL shouldFailAllTasks;
@property BOOL started;
@property BOOL success;
@property(retain) NSError * error;
@property(retain) <CoreDAVAccountInfoProvider> * backingAccountInfoProvider;


- (void)setHost:(id)arg1;
- (id)accountID;
- (void)setPort:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)principalURL;
- (void)setError:(id)arg1;
- (void)setPassword:(id)arg1;
- (id)error;
- (void)setServerComplianceClasses:(id)arg1;
- (void)setServerHeaders:(id)arg1;
- (void)setStarted:(BOOL)arg1;
- (BOOL)started;
- (id)backingAccountInfoProvider;
- (void)setPrincipalURL:(id)arg1;
- (void)setIdentityPersist:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1;
- (BOOL)shouldTurnModalOnBadPassword;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)arg1;
- (BOOL)shouldUseOpportunisticSockets;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)arg1;
- (BOOL)shouldHandleHTTPCookiesForURL:(id)arg1;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1 withConnection:(id)arg2;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1;
- (BOOL)shouldRetryUnauthorizedConnection:(id)arg1;
- (BOOL)handleCertificateError:(id)arg1;
- (BOOL)handleTrustChallenge:(id)arg1 withConnection:(id)arg2;
- (id)serverComplianceClasses;
- (id)serverHeaders;
- (void)setBackingAccountInfoProvider:(id)arg1;
- (void)setAccountID:(id)arg1;
- (void)setUserAgentHeader:(id)arg1;
- (id)userAgentHeader;
- (void)setUser:(id)arg1;
- (void)setServerRoot:(id)arg1;
- (id)serverRoot;
- (id)additionalHeaderValues;
- (int)port;
- (id)user;
- (id)password;
- (id)url;
- (id)host;
- (id)scheme;
- (void)setScheme:(id)arg1;
- (BOOL)success;
- (void)setSuccess:(BOOL)arg1;
- (BOOL)handleTrustChallenge:(id)arg1;
- (BOOL)shouldFailAllTasks;
- (struct __CFURLStorageSession { }*)copyStorageSession;
- (id)identityPersist;
- (void)setShouldFailAllTasks:(BOOL)arg1;

@end
