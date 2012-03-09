/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSNumber, <ISStoreURLOperationDelegate>;

@interface ISStoreURLOperation : ISURLOperation  {
    NSNumber *_authenticatedDSID;
    BOOL _canSendGUIDParameter;
    BOOL _needsAuthentication;
    BOOL _needsURLBag;
    BOOL _urlKnownToBeTrusted;
    BOOL _useUserSpecificURLBag;
}

@property <ISStoreURLOperationDelegate> * delegate;
@property BOOL canSendGUIDParameter;
@property BOOL needsURLBag;
@property BOOL urlKnownToBeTrusted;
@property BOOL needsAuthentication;
@property BOOL useUserSpecificURLBag;
@property(retain) NSNumber * authenticatedDSID;

+ (id)propertyListOperationWithURLBagKey:(id)arg1;
+ (id)_restrictionsHeaderValue;
+ (void)_addITunesStoreHeadersToRequest:(id)arg1 withBagContext:(id)arg2;
+ (id)itemPingOperationWithIdentifier:(unsigned long long)arg1 urlBagKey:(id)arg2;
+ (void)addITunesStoreHeadersToRequest:(id)arg1;
+ (void)handleITunesStoreResponseHeaders:(id)arg1;
+ (id)pingOperationWithUrl:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)setUseUserSpecificURLBag:(BOOL)arg1;
- (void)setCanSendGUIDParameter:(BOOL)arg1;
- (void)_addStandardQueryParametersForURL:(id)arg1;
- (id)_urlFromURLBagForRequestProperties:(id)arg1 inBagContext:(id)arg2;
- (BOOL)needsURLBag;
- (BOOL)useUserSpecificURLBag;
- (BOOL)canSendGUIDParameter;
- (BOOL)urlKnownToBeTrusted;
- (void)_runURLOperation;
- (BOOL)_authenticateReturningError:(id*)arg1;
- (id)_storeFrontIdentifier;
- (id)_account;
- (id)_copyURLBagContext;
- (BOOL)_canSendTokenToURL:(id)arg1;
- (void)setUrlKnownToBeTrusted:(BOOL)arg1;
- (void)setNeedsURLBag:(BOOL)arg1;
- (BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (id)newRequestWithURL:(id)arg1;
- (id)_copyAuthenticationContext;
- (void)run;
- (void)setAuthenticatedDSID:(id)arg1;
- (id)authenticatedDSID;
- (void)setNeedsAuthentication:(BOOL)arg1;
- (BOOL)needsAuthentication;
- (id)authenticatedAccountDSID;
- (void)handleResponse:(id)arg1;

@end
