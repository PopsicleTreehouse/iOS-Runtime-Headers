/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, GKConnection, NSMutableArray, GKSession, <GKMatchDelegate>, NSMutableDictionary, NSData;

@interface GKMatch : NSObject <GKSessionDelegate, GKSessionPrivateDelegate> {
    <GKMatchDelegate> *_delegate;
    GKSession *_session;
    GKConnection *_connection;
    unsigned int _expectedPlayerCount;
    NSMutableDictionary *_playerEventQueues;
    NSMutableArray *_reinvitedPlayers;
    NSData *_selfBlob;
    unsigned char _version;
    <GKMatchDelegate> *_inviteDelegate;
    unsigned int _packetSequenceNumber;
    NSMutableDictionary *_playerPushTokens;
    NSMutableArray *_opponentIDs;
}

@property(readonly) NSArray * playerIDs;
@property <GKMatchDelegate> * delegate;
@property(readonly) unsigned int expectedPlayerCount;
@property(retain) GKSession * session;
@property(retain) GKConnection * connection;
@property(retain) NSMutableDictionary * playerEventQueues;
@property(retain) NSMutableArray * reinvitedPlayers;
@property(retain) NSData * selfBlob;
@property unsigned char version;
@property <GKMatchDelegate> * inviteDelegate;
@property unsigned int packetSequenceNumber;
@property(retain) NSMutableDictionary * playerPushTokens;
@property(retain) NSMutableArray * opponentIDs;


- (id)init;
- (void)dealloc;
- (id)opponentIDs;
- (id)inviteDelegate;
- (void)setReinvitedPlayers:(id)arg1;
- (id)reinvitedPlayers;
- (void)setPlayerEventQueues:(id)arg1;
- (id)playerEventQueues;
- (unsigned int)expectedPlayerCount;
- (void)session:(id)arg1 updateRelay:(id)arg2 forPeer:(id)arg3;
- (void)session:(id)arg1 initiateRelay:(id)arg2 forPeer:(id)arg3;
- (void)receiveData:(id)arg1 fromPeer:(id)arg2 inSession:(id)arg3 context:(void*)arg4;
- (id)voiceChatWithName:(id)arg1;
- (BOOL)sendDataToAllPlayers:(id)arg1 withDataMode:(int)arg2 error:(id*)arg3;
- (BOOL)sendData:(id)arg1 toPlayers:(id)arg2 withDataMode:(int)arg3 error:(id*)arg4;
- (void)requestRelayUpdateForPlayer:(id)arg1;
- (void)updateRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayInfoFromCallback:(id)arg1 forPlayer:(id)arg2;
- (void)requestRelayInitForPlayer:(id)arg1;
- (void)initRelayInfoFromServerResponse:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayResponse:(id)arg1 playerID:(id)arg2;
- (BOOL)connected:(id)arg1;
- (void)updateRelayConnectionForPlayer:(id)arg1;
- (void)updateRelayInfo:(id)arg1 forPlayer:(id)arg2;
- (void)initRelayConnectionForPlayer:(id)arg1;
- (void)initRelayInfoFromPush:(id)arg1 forPlayer:(id)arg2;
- (BOOL)shouldStartRelay:(id)arg1;
- (id)dataFromBase64String:(id)arg1;
- (void)queueData:(id)arg1 forPlayer:(id)arg2;
- (void)sendData:(id)arg1 fromPlayer:(id)arg2;
- (void)deferStateCallbackForPlayer:(id)arg1 state:(int)arg2;
- (void)conditionallyReinvitePlayer:(id)arg1 sessionToken:(id)arg2;
- (void)conditionallyRelaunchPlayer:(id)arg1;
- (id)allIDs;
- (void)sendVersionData:(unsigned char)arg1 toPeer:(id)arg2;
- (id)playerFromPeer:(id)arg1;
- (void)reinviteeDeclinedNotification:(id)arg1;
- (void)reinviteeAcceptedNotification:(id)arg1;
- (void)updateStateForPlayer:(id)arg1 state:(int)arg2;
- (id)peerFromPlayer:(id)arg1;
- (id)packet:(unsigned char)arg1 data:(id)arg2;
- (void)setPacketSequenceNumber:(unsigned int)arg1;
- (unsigned int)packetSequenceNumber;
- (id)session;
- (id)selfBlob;
- (void)sendVersionData:(unsigned char)arg1;
- (void)setSelfBlob:(id)arg1;
- (void)setSession:(id)arg1;
- (void)relayPushNotification:(id)arg1;
- (void)setOpponentIDs:(id)arg1;
- (void)setPlayerPushTokens:(id)arg1;
- (void)sendQueuedPacketsForPlayer:(id)arg1;
- (void)sendStateCallbackForPlayer:(id)arg1 state:(int)arg2;
- (void)inviteeComboMatched:(int)arg1;
- (void)preLoadInviter:(id)arg1 sessionToken:(id)arg2;
- (void)acceptRelayResponse:(id)arg1 playerID:(id)arg2;
- (id)playerPushTokens;
- (void)setInviteDelegate:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 connectionWithPeerFailed:(id)arg2 withError:(id)arg3;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3;
- (void)getLocalConnectionDataWithCompletionHandler:(id)arg1;
- (void)preemptRelay:(id)arg1;
- (void)relayPush:(id)arg1;
- (void)connectToPeersWithDictionaries:(id)arg1 version:(unsigned char)arg2 sessionToken:(id)arg3 cdxTicket:(id)arg4;
- (BOOL)sendInviteData:(id)arg1 error:(id*)arg2;
- (id)playerIDs;
- (void)setConnection:(id)arg1;
- (id)connection;
- (unsigned char)version;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)disconnect;
- (void)setVersion:(unsigned char)arg1;

@end
