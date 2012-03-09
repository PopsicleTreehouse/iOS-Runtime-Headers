/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaPlaylist;

@interface IUOnTheGoDataSource : IUSongsDataSource  {
    MPMediaPlaylist *_playlist;
}

@property(readonly) MPMediaPlaylist * playlist;


- (void)dealloc;
- (id)playlist;
- (float)rowHeight;
- (BOOL)canDeleteIndex:(unsigned int)arg1;
- (BOOL)moveIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (BOOL)deleteIndexesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)entitiesForQuery:(id)arg1;
- (id)deleteConfirmationAlertViewForIndex:(unsigned int)arg1;
- (id)deleteConfirmationSheetForIndex:(unsigned int)arg1;
- (BOOL)allowsRearrange;
- (void)_mutateQueriesEntitiesAtIndex:(unsigned int)arg1 withBlock:(id)arg2;
- (void)setQueries:(id)arg1;
- (BOOL)allowsDeletion;
- (BOOL)hasActionRowsEvenWhenNoOtherRowsExist;

@end
