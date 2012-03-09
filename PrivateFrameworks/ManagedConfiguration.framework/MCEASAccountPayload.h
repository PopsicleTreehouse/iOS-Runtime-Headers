/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString, NSData;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_emailAddress;
    BOOL _useSSL;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSData *_embeddedCertificate;
    NSString *_embeddedCertificateName;
    NSString *_embeddedCertificatePassword;
    NSString *_certificateUUID;
    NSString *_accountPersistentUUID;
    NSData *_certificatePersistentID;
}

@property(readonly) BOOL hasCertificate;
@property(retain) NSData * certificatePersistentID;
@property(copy) NSString * accountPersistentUUID;
@property(readonly) NSString * certificateUUID;
@property(copy) NSString * embeddedCertificatePassword;
@property(readonly) NSString * embeddedCertificateName;
@property(readonly) NSData * embeddedCertificate;
@property(readonly) NSNumber * mailNumberOfPastDaysToSync;
@property(readonly) BOOL useSSL;
@property(copy) NSString * emailAddress;
@property(copy) NSString * password;
@property(copy) NSString * username;
@property(readonly) NSString * hostname;
@property(readonly) NSString * accountDescription;

+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (id)accountDescription;
- (id)emailAddress;
- (id)mailNumberOfPastDaysToSync;
- (id)description;
- (void)dealloc;
- (BOOL)hasCertificate;
- (id)embeddedCertificatePassword;
- (void)setEmbeddedCertificatePassword:(id)arg1;
- (id)embeddedCertificateName;
- (id)embeddedCertificate;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)certificateUUID;
- (void)setCertificatePersistentID:(id)arg1;
- (id)certificatePersistentID;
- (id)subtitle1Label;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)subtitle1Description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;
- (void)setEmailAddress:(id)arg1;
- (id)password;
- (id)title;
- (id)hostname;
- (id)accountPersistentUUID;
- (BOOL)useSSL;

@end
