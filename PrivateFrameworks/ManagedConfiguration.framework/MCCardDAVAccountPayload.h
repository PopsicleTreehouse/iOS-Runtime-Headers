/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;

@interface MCCardDAVAccountPayload : MCPayload  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_principalURL;
    BOOL _useSSL;
    int _port;
    NSString *_accountPersistentUUID;
}

@property(copy) NSString * accountPersistentUUID;
@property(readonly) int port;
@property(readonly) BOOL useSSL;
@property(readonly) NSString * principalURL;
@property(copy) NSString * password;
@property(copy) NSString * username;
@property(readonly) NSString * hostname;
@property(readonly) NSString * accountDescription;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (id)accountDescription;
- (id)description;
- (void)dealloc;
- (id)principalURL;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)subtitle1Label;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)subtitle1Description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (int)port;
- (id)password;
- (id)title;
- (id)hostname;
- (id)accountPersistentUUID;
- (BOOL)useSSL;

@end
