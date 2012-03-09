/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSAccount, NSDictionary;

@interface SSAuthenticateResponse : NSObject <SSCoding> {
    SSAccount *_authenticatedAccount;
    NSDictionary *_responseDictionary;
    int _responseType;
}

@property(retain) SSAccount * authenticatedAccount;
@property int authenticateResponseType;
@property(copy) NSDictionary * responseDictionary;


- (void)dealloc;
- (void)setResponseDictionary:(id)arg1;
- (id)responseDictionary;
- (void)setAuthenticateResponseType:(int)arg1;
- (int)authenticateResponseType;
- (void)setAuthenticatedAccount:(id)arg1;
- (id)authenticatedAccount;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;

@end
