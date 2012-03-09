/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UIAlertView, NSIndexPath;

@interface IUVideoEpisodesViewController : IUVideoPartListViewController <UIAlertViewDelegate> {
    UIAlertView *_deleteConfirmAlertView;
    NSIndexPath *_expandedIndexPath;
    float _expandedRowHeight;
}

@property(retain) NSIndexPath * expandedIndexPath;


- (id)init;
- (void)dealloc;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)title;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (unsigned int)trackToPlayInDataSource:(id)arg1;
- (void)_moreButtonPressedForCell:(id)arg1;
- (void)_destroyDeleteConfirmAlertView;
- (void)_deleteEpisodeAtIndex:(int)arg1;
- (id)expandedIndexPath;
- (void)cancelMoreButtonExpansion;
- (void)setExpandedIndexPath:(id)arg1;
- (void)_cancelDeleteConfirmAlertView:(BOOL)arg1;
- (void)startPlaybackFromIndexPath:(id)arg1;
- (id)mediaItemAtIndexPath:(id)arg1;
- (id)indexPathForRowOfContentPosition;
- (Class)tableViewCellClass;
- (id)indexPathForMediaItem:(id)arg1 atTime:(double)arg2;
- (void)_rentalDataDidLoadNotification:(id)arg1;

@end
