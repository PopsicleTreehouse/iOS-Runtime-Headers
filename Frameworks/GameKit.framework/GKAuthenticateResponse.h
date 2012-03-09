/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary, NSString, GKGameInternal;

@interface GKAuthenticateResponse : GKResponse  {
    NSString *_accountName;
    NSString *_playerID;
    NSString *_authToken;
    GKGameInternal *_game;
    NSDictionary *_alertDictionary;
    BOOL _sandboxed;
    BOOL _loginDisabled;
    BOOL _shouldUsePipelining;
    unsigned int _maxPlayersP2P;
    unsigned int _maxPlayersHosted;
    unsigned int _maxPlayersTurnBased;
}

@property(retain) NSString * accountName;
@property(retain) NSString * playerID;
@property(retain) NSString * authToken;
@property(retain) GKGameInternal * game;
@property(retain) NSDictionary * alertDictionary;
@property BOOL sandboxed;
@property BOOL loginDisabled;
@property BOOL shouldUsePipelining;
@property unsigned int maxPlayersP2P;
@property unsigned int maxPlayersHosted;
@property unsigned int maxPlayersTurnBased;

+ (id)codedPropertyKeys;

- (id)description;
- (void)dealloc;
- (void)setShouldUsePipelining:(BOOL)arg1;
- (void)setMaxPlayersTurnBased:(unsigned int)arg1;
- (void)setMaxPlayersHosted:(unsigned int)arg1;
- (void)setMaxPlayersP2P:(unsigned int)arg1;
- (BOOL)shouldUsePipelining;
- (BOOL)sandboxed;
- (void)setAlertDictionary:(id)arg1;
- (void)setLoginDisabled:(BOOL)arg1;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (void)setAuthToken:(id)arg1;
- (id)authToken;
- (BOOL)loginDisabled;
- (id)alertDictionary;
- (void)setSandboxed:(BOOL)arg1;
- (id)game;
- (unsigned int)maxPlayersTurnBased;
- (unsigned int)maxPlayersP2P;
- (unsigned int)maxPlayersHosted;
- (id)playerID;
- (void)setPlayerID:(id)arg1;
- (void)setGame:(id)arg1;

@end
