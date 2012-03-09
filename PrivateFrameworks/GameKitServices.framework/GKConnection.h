/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKConnection : NSObject  {
}

@property id eventDelegate;
@property id awdMetricsCallback;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)externalAddressForSelfConnectionData:(id)arg1;
+ (BOOL)isRelayEnabled;
+ (id)externalAddressForCDXSelfConnectionData:(id)arg1;

- (void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;
- (id)initWithParticipantID:(id)arg1 withOptions:(id)arg2;
- (BOOL)convertPeerID:(id)arg1 toParticipantID:(id*)arg2;
- (BOOL)convertParticipantID:(id)arg1 toPeerID:(id*)arg2;
- (void)getLocalConnectionDataWithCompletionHandler:(id)arg1;
- (void)connect;
- (id)initWithParticipantID:(id)arg1;
- (void)preRelease;
- (struct OpaqueGCKSession { }*)gckSession;
- (void)setEventDelegate:(id)arg1;
- (id)eventDelegate;
- (void)setAwdMetricsCallback:(id)arg1;
- (id)awdMetricsCallback;
- (unsigned int)gckPID;
- (id)networkStatisticsDictionaryForGCKStats:(void*)arg1;
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;
- (void)cancelConnectParticipant:(id)arg1;
- (id)networkStatistics;

@end
