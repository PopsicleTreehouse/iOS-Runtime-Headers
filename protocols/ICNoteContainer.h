/* Generated by RuntimeBrowser.
 */

@protocol ICNoteContainer <ICNoteVisibilityTesting>

@required

- (NSString *)accountName;
- (bool)canBeSharedViaICloud;
- (bool)isDeleted;
- (ICAccount *)noteContainerAccount;
- (bool)noteIsVisible:(ICNote *)arg1;
- (<ICNoteVisibilityTesting> *)noteVisibilityTestingForSearchingAccount;
- (NSPredicate *)predicateForPinnedNotes;
- (NSPredicate *)predicateForVisibleNotes;
- (bool)supportsEditingNotes;
- (NSString *)titleForNavigationBar;
- (NSString *)titleForTableViewCell;
- (NSArray *)visibleNotes;
- (unsigned long long)visibleNotesCount;

@end