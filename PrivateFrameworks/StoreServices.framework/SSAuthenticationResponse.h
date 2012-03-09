/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, NSDictionary, NSNumber, NSHTTPURLResponse;

@interface SSAuthenticationResponse : NSObject  {
    NSDictionary *_responseDictionary;
    int _urlBagType;
    NSHTTPURLResponse *_urlResponse;
}

@property int URLBagType;
@property(readonly) NSDictionary * responseDictionary;
@property(readonly) NSHTTPURLResponse * URLResponse;
@property(readonly) NSString * accountName;
@property(readonly) int accountKind;
@property(readonly) NSNumber * accountUniqueIdentifier;
@property(readonly) NSString * creditsString;
@property(readonly) int availableServiceTypes;
@property(readonly) int enabledServiceTypes;
@property(readonly) NSString * storeFrontIdentifier;
@property(readonly) NSString * token;
@property(readonly) NSNumber * failureType;
@property(readonly) int responseType;
@property(readonly) NSString * userMessage;


- (void)dealloc;
- (id)storeFrontIdentifier;
- (id)accountName;
- (id)responseDictionary;
- (int)responseType;
- (int)enabledServiceTypes;
- (int)accountKind;
- (void)setURLBagType:(int)arg1;
- (id)creditsString;
- (id)userMessage;
- (int)_responseTypeForStatusValue:(int)arg1;
- (id)_statusValue;
- (int)_responseTypeForFailureType:(int)arg1;
- (id)accountUniqueIdentifier;
- (id)failureType;
- (id)newAccount;
- (id)initWithURLResponse:(id)arg1 dictionary:(id)arg2;
- (int)URLBagType;
- (int)availableServiceTypes;
- (id)URLResponse;
- (id)token;

@end
