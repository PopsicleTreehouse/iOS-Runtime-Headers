/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, GKGameRecord, NSArray;

@interface GKAchievementCompareViewSectionDataSource : GKAchievementSectionDataSource  {
    GKGameRecord *_friendRecord;
    NSArray *_friendAchievements;
    UIImage *_compositeCheckMark;
}

@property(retain) GKGameRecord * friendRecord;
@property(retain) NSArray * friendAchievements;
@property(retain) UIImage * compositeCheckMark;


- (void)dealloc;
- (int)sectionContentRowCountInTableView:(id)arg1;
- (int)columnCountInTableView:(id)arg1;
- (void)setCompositeCheckMark:(id)arg1;
- (id)compositeCheckMark;
- (id)friendRecord;
- (id)friendAchievements;
- (void)setFriendAchievements:(id)arg1;
- (void)setFriendRecord:(id)arg1;
- (id)sectionHeaderViewInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateStatusWithError:(id)arg1;
- (int)sectionItemCountInTableView:(id)arg1;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (id)title;

@end
