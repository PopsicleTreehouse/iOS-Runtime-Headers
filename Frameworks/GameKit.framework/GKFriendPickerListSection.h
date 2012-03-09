/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSMutableDictionary, NSArray;

@interface GKFriendPickerListSection : GKTableSection  {
    NSArray *_friends;
    NSMutableDictionary *_ranks;
    int _maxPlayers;
    int _numSelected;
}

@property(retain) NSArray * friends;
@property(retain) NSMutableDictionary * ranks;
@property int maxPlayers;
@property int numSelected;


- (id)init;
- (void)dealloc;
- (int)tableView:(id)arg1 indexOfItemForPlayerID:(id)arg2;
- (int)sectionItemCountInTableView:(id)arg1;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (float)sectionFooterHeightInTableView:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (id)tableView:(id)arg1 willSelectIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2;
- (int)numSelected;
- (void)setNumSelected:(int)arg1;
- (void)filterWithSearchText:(id)arg1;
- (id)ranks;
- (void)setRanks:(id)arg1;
- (id)friends;
- (void)setFriends:(id)arg1;
- (int)maxPlayers;
- (void)setMaxPlayers:(int)arg1;

@end
