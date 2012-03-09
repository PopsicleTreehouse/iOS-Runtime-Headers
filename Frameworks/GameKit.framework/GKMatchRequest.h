/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;

@interface GKMatchRequest : NSObject  {
    unsigned int _minPlayers;
    unsigned int _maxPlayers;
    unsigned int _playerGroup;
    unsigned int _playerAttributes;
    BOOL _attributesSet;
    NSArray *_playersToInvite;
}

@property unsigned int minPlayers;
@property unsigned int maxPlayers;
@property unsigned int playerGroup;
@property unsigned int playerAttributes;
@property(retain) NSArray * playersToInvite;
@property BOOL attributesSet;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)playersToInvite;
- (BOOL)attributesSet;
- (unsigned int)playerAttributes;
- (unsigned int)playerGroup;
- (unsigned int)maxPlayers;
- (unsigned int)minPlayers;
- (BOOL)isTurnBasedValid;
- (BOOL)isValidForHosted:(BOOL)arg1;
- (void)setPlayersToInvite:(id)arg1;
- (void)setAttributesSet:(BOOL)arg1;
- (void)setPlayerAttributes:(unsigned int)arg1;
- (void)setMaxPlayers:(unsigned int)arg1;
- (void)setMinPlayers:(unsigned int)arg1;
- (void)setPlayerGroup:(unsigned int)arg1;

@end
