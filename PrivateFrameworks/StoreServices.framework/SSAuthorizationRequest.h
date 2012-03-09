/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString, <SSAuthorizationRequestDelegate>;

@interface SSAuthorizationRequest : SSRequest <SSCoding> {
    NSNumber *_accountIdentifier;
    NSString *_keybagPath;
    id _token;
}

@property(readonly) NSNumber * accountIdentifier;
@property(readonly) id authorizationToken;
@property(copy) NSString * keybagPath;
@property <SSAuthorizationRequestDelegate> * delegate;


- (id)init;
- (void)dealloc;
- (void)setKeybagPath:(id)arg1;
- (id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2;
- (id)authorizationToken;
- (id)accountIdentifier;
- (id)keybagPath;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)handleFinishResponse:(id)arg1 error:(id*)arg2;
- (void*)copyXPCEncoding;
- (id)initWithXPCEncoding:(void*)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;

@end
