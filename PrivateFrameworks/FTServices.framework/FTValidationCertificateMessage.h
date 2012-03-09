/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData;

@interface FTValidationCertificateMessage : FTMessage <NSCopying> {
    NSData *_responseCertificateData;
    NSData *_pushToken;
}

@property(copy) NSData * responseCertificateData;
@property(copy) NSData * pushToken;


- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (void)setResponseCertificateData:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (int)responseCommand;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsCompressedBody;
- (id)requiredKeys;
- (BOOL)wantsBinaryPush;
- (int)command;
- (void)setPushToken:(id)arg1;
- (id)pushToken;
- (id)bagKey;
- (id)responseCertificateData;

@end
