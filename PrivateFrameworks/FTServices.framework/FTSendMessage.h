/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSData, NSArray;

@interface FTSendMessage : FTFaceTimeMessage <NSCopying> {
    NSArray *_peers;
    NSNumber *_reason;
    NSData *_selfPushToken;
}

@property(copy) NSArray * peers;
@property(copy) NSNumber * reason;
@property(copy) NSData * selfPushToken;


- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setSelfPushToken:(id)arg1;
- (id)selfPushToken;
- (id)requiredKeys;
- (void)setReason:(id)arg1;
- (id)peers;
- (void)setPeers:(id)arg1;
- (id)bagKey;
- (id)reason;

@end
