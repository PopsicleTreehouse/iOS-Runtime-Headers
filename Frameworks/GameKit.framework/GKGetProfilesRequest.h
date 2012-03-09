/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;

@interface GKGetProfilesRequest : GKDataRequest  {
    NSArray *_playerIDs;
    unsigned int _profilePieces;
}

@property(retain) NSArray * playerIDs;
@property unsigned int profilePieces;


- (void)dealloc;
- (unsigned int)profilePieces;
- (void)setProfilePieces:(unsigned int)arg1;
- (id)playerIDs;
- (void)setPlayerIDs:(id)arg1;
- (id)key;
- (id)request;

@end
