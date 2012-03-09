/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSArray;

@interface SUAggregateDataSource : SUTableDataSource  {
    NSMutableArray *_headerViews;
    NSMutableArray *_sources;
    int _tableViewStyle;
}

@property int tableViewStyle;
@property(readonly) NSArray * sources;


- (void)dealloc;
- (id)sources;
- (int)tableViewStyle;
- (void)setTableViewStyle:(int)arg1;
- (int)numberOfSections;
- (int)numberOfRowsInSection:(int)arg1;
- (void)reloadData;
- (id)indexPathForRowIndex:(unsigned int)arg1 inSectionIndex:(unsigned int)arg2;
- (void)addDataSource:(id)arg1 withHeaderView:(id)arg2;
- (id)dataSourceForIndexPath:(id)arg1;
- (int)_localIndexForSectionIndex:(int)arg1;
- (int)numberOfColumnsInSection:(int)arg1;
- (void)reloadCellContexts;
- (BOOL)canSelectIndexPath:(id)arg1;
- (float)cellHeightForIndexPath:(id)arg1;
- (id)headerViewForSection:(int)arg1;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (BOOL)canDoubleTapIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (BOOL)deleteIndexPath:(id)arg1;
- (void)setCellReuseSource:(id)arg1;

@end
