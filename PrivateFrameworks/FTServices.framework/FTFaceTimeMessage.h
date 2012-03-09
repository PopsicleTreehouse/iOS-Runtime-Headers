/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData;

@interface FTFaceTimeMessage : FTIDSMessage <NSCopying> {
    NSData *_sessionToken;
}

@property(copy) NSData * sessionToken;


- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isValidMessage;
- (id)requiredKeys;
- (void)setSessionToken:(id)arg1;
- (id)sessionToken;

@end
