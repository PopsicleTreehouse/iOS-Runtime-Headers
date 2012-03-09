/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKVoiceChatClient>;

@interface GKVoiceChatService : NSObject  {
    id _voiceChatService;
}

@property <GKVoiceChatClient> * client;
@property(getter=isMicrophoneMuted) BOOL microphoneMuted;
@property float remoteParticipantVolume;
@property(getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property(getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(readonly) float outputMeterLevel;
@property(readonly) float inputMeterLevel;

+ (BOOL)isVoIPAllowed;
+ (id)defaultVoiceChatService;
+ (void)initialize;

- (void)dealloc;
- (void)setRemoteParticipantVolume:(float)arg1;
- (float)remoteParticipantVolume;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)denyCallID:(int)arg1;
- (BOOL)acceptCallID:(int)arg1 error:(id*)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2;
- (void)setClient:(id)arg1;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)isOutputMeteringEnabled;
- (void)setOutputMeteringEnabled:(BOOL)arg1;
- (BOOL)isInputMeteringEnabled;
- (void)setInputMeteringEnabled:(BOOL)arg1;
- (float)outputMeterLevel;
- (float)inputMeterLevel;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (BOOL)isMicrophoneMuted;
- (id)client;

@end
