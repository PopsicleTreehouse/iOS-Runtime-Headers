/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGameRecord;

@interface GKAchievementCompareHeaderDataSourceSection : NSObject <GKTableSection> {
    GKGameRecord *_gameRecord;
}

@property(retain) GKGameRecord * gameRecord;
@property(getter=isLoading) BOOL loading;


- (void)dealloc;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)sectionRowCountInTableView:(id)arg1;
- (id)gameRecord;
- (void)setGameRecord:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end
