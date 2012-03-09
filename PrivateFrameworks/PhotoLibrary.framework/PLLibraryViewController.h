/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITableView, <PLLibraryViewControllerDelegate>, UIActionSheet, PLSyncProgressView, PLLibraryView, PLEmptyAlbumView, PLPhotosPickerSession, PLLibraryBannerView;

@interface PLLibraryViewController : PLAbstractLibraryViewController <UIActionSheetDelegate, PLLibraryTableViewCellEditingDelegate, UITableViewDataSource, UITableViewDelegate, PLPhotosPickerSessionParticipant> {
    PLLibraryView *_tableView;
    PLEmptyAlbumView *_emptyLibraryView;
    PLSyncProgressView *_syncProgressView;
    PLLibraryBannerView *_bannerView;
    UIActionSheet *_deleteAlbumActionSheet;
    <PLLibraryViewControllerDelegate> *_delegate;
    unsigned int _renamingAlbumIndex;
    PLPhotosPickerSession *_currentPickerSession;
    struct { 
        unsigned int delegateDeterminesAccessoryType : 1; 
        unsigned int delegateDeterminesEnabledRows : 1; 
        unsigned int adjustedForKeyboard : 1; 
        unsigned int endEditingAfterKeyboardDismiss : 1; 
        unsigned int reserved : 28; 
    } _lvcFlags;
}

@property(readonly) UITableView * tableView;
@property <PLLibraryViewControllerDelegate> * delegate;
@property(readonly) BOOL allowsEditingAlbums;
@property(retain) PLPhotosPickerSession * currentPickerSession;


- (id)init;
- (void)dealloc;
- (void)_keyboardDidHide:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)tableView;
- (id)contentScrollView;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)delegate;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setDelegate:(id)arg1;
- (void)navigateToRevealAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2;
- (void)setSyncProgressVisible:(BOOL)arg1;
- (id)syncProgressView;
- (BOOL)updateInterfaceForDeletedAlbumIndexes:(id)arg1 addedIndexes:(id)arg2 changedIndexes:(id)arg3 needsFullReload:(BOOL)arg4;
- (void)updateInterfaceForHasContentChange;
- (void)scrollToAlbumAtIndex:(unsigned int)arg1 animated:(BOOL)arg2 select:(BOOL)arg3;
- (void)setHiddenAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2;
- (void)animateBannerThumbnailToAlbum:(struct NSObject { Class x1; }*)arg1 completion:(id)arg2;
- (void)hideBannerView;
- (void)showBannerViewWithAssets:(id)arg1;
- (void)setCurrentPickerSession:(id)arg1;
- (id)currentPickerSession;
- (id)tableOffsetKey;
- (BOOL)_shouldShowAlbumList;
- (BOOL)allowsEditingAlbums;
- (void)updateNavigationItemButtons;
- (void)_presentActionSheet:(id)arg1;
- (void)navigateToAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (BOOL)isEnabledRowForAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)loadCurrentConfiguration:(id)arg1;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)tableViewCell:(id)arg1 didChangeTextToText:(id)arg2;
- (void)tableViewCellDidBeginEditingText:(id)arg1;

@end
