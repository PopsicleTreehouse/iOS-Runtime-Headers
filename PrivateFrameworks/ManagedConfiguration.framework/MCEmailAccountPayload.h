/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSNumber, NSString;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase  {
    NSString *_emailAccountDescription;
    NSString *_emailAccountName;
    NSString *_emailAccountType;
    NSString *_emailAddress;
    NSString *_incomingMailServerAuthentication;
    NSString *_incomingMailServerHostname;
    NSNumber *_incomingMailServerPortNumber;
    BOOL _incomingMailServerUseSSL;
    NSString *_incomingMailServerUsername;
    NSString *_incomingMailServerIMAPPathPrefix;
    NSString *_incomingPassword;
    NSString *_outgoingPassword;
    BOOL _outgoingPasswordSameAsIncomingPassword;
    NSString *_outgoingMailServerAuthentication;
    NSString *_outgoingMailServerHostname;
    NSNumber *_outgoingMailServerPortNumber;
    BOOL _outgoingMailServerUseSSL;
    NSString *_outgoingMailServerUsername;
}

@property(readonly) NSString * outgoingMailServerUsername;
@property(readonly) BOOL outgoingMailServerUseSSL;
@property(readonly) NSNumber * outgoingMailServerPortNumber;
@property(readonly) NSString * outgoingMailServerHostname;
@property(readonly) NSString * outgoingMailServerAuthentication;
@property(readonly) BOOL outgoingPasswordSameAsIncomingPassword;
@property(readonly) NSString * outgoingPassword;
@property(readonly) NSString * incomingPassword;
@property(readonly) NSString * incomingMailServerIMAPPathPrefix;
@property(readonly) NSString * incomingMailServerUsername;
@property(readonly) BOOL incomingMailServerUseSSL;
@property(readonly) NSNumber * incomingMailServerPortNumber;
@property(readonly) NSString * incomingMailServerHostname;
@property(readonly) NSString * incomingMailServerAuthentication;
@property(readonly) NSString * emailAddress;
@property(readonly) NSString * emailAccountType;
@property(readonly) NSString * emailAccountName;
@property(readonly) NSString * emailAccountDescription;

+ (id)profileNameFromAccountTag:(id)arg1;
+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (id)emailAddress;
- (id)description;
- (void)dealloc;
- (id)outgoingMailServerUsername;
- (BOOL)outgoingMailServerUseSSL;
- (id)outgoingMailServerPortNumber;
- (id)outgoingMailServerHostname;
- (id)outgoingMailServerAuthentication;
- (BOOL)outgoingPasswordSameAsIncomingPassword;
- (id)outgoingPassword;
- (id)incomingPassword;
- (id)incomingMailServerIMAPPathPrefix;
- (id)incomingMailServerUsername;
- (BOOL)incomingMailServerUseSSL;
- (id)incomingMailServerPortNumber;
- (id)incomingMailServerAuthentication;
- (id)emailAccountName;
- (id)emailAccountDescription;
- (id)emailAccountType;
- (id)incomingMailServerHostname;
- (id)subtitle1Label;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)subtitle1Description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;
- (id)title;

@end
