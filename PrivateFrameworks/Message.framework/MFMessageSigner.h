/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError, NSString, NSArray;

@interface MFMessageSigner : NSObject  {
    int _status;
    struct __SecTrust { } *_trust;
    NSString *_sender;
    NSString *_uncommentedSender;
}

@property(readonly) int action;
@property(readonly) NSArray * certificates;
@property(readonly) MFError * error;
@property(readonly) NSString * sender;


- (id)initWithSender:(id)arg1 trust:(struct __SecTrust { }*)arg2 verification:(int)arg3;
- (struct __SecTrust { }*)copyTrust;
- (void)addTrustException;
- (void)removeTrustException;
- (BOOL)hasTrustException;
- (id)certificates;
- (int)action;
- (void)dealloc;
- (id)error;
- (id)sender;

@end
