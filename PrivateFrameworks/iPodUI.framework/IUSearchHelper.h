/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class UISearchDisplayController, UITableView, UISearchBar, IUSearchDataSource, IUTableViewController, IUSearchResultListViewController, NSString, <IUSearchHelperDelegate>;

@interface IUSearchHelper : NSObject <UISearchBarDelegate, UISearchDisplayDelegate, IUSearchResultListViewControllerDelegate> {
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    UITableView *_searchResultsTableView;
    <IUSearchHelperDelegate> *_delegate;
    IUSearchDataSource *_searchDataSource;
    IUSearchResultListViewController *_searchResultListViewController;
    IUTableViewController *_tableViewController;
    BOOL _searchBarHidesAlone;
}

@property(readonly) UISearchDisplayController * searchDisplayController;
@property(readonly) IUSearchResultListViewController * searchResultListViewController;
@property(copy) NSString * searchString;
@property BOOL searchBarHidesAlone;
@property(readonly) float heightForTableHeaderViewHiding;
@property <IUSearchHelperDelegate> * delegate;


- (void)dealloc;
- (id)searchString;
- (void)setSearchString:(id)arg1;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(int)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)initWithTableViewController:(id)arg1;
- (id)searchDisplayController;
- (float)heightForTableHeaderViewHiding;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)searchBarHidesAlone;
- (void)_searchDataSourceNoResultsChangedNotification:(id)arg1;
- (id)searchResultListViewController;
- (void)setSearchBarHidesAlone:(BOOL)arg1;
- (void)searchResultListViewController:(id)arg1 didSelectContext:(id)arg2;

@end
