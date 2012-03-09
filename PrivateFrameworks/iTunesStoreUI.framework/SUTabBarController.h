/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSString, UIViewController, NSMutableArray, <SUTabBarControllerDelegate>;

@interface SUTabBarController : UITabBarController <SUOverlayBackgroundDelegate> {
    NSString *_moreListTitle;
    NSMutableArray *_overlayBackgroundViewControllers;
    UIViewController *_preTransientSelectedViewController;
    int _reloadingUnderneathTransientControllerCount;
    NSArray *_sections;
}

@property <SUTabBarControllerDelegate> * delegate;
@property(retain) NSString * moreListTitle;
@property(retain) NSArray * sections;
@property(retain) NSString * selectedIdentifier;

+ (Class)_moreNavigationControllerClass;

- (id)init;
- (void)dealloc;
- (id)sections;
- (void)setSections:(id)arg1;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(BOOL)arg3;
- (void)_setSelectedViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (id)selectedViewController;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (id)moreListTitle;
- (void)_fixupTabBarSelection;
- (id)viewControllerForSectionType:(int)arg1;
- (unsigned int)indexOfViewControllerWithSectionType:(int)arg1;
- (void)dismissOverlayBackgroundViewController;
- (void)cancelTransientViewController:(id)arg1;
- (id)_sectionForViewController:(id)arg1;
- (void)setTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (void)setMoreListTitle:(id)arg1;
- (void)selectSectionOfType:(int)arg1;
- (BOOL)saveToDefaults;
- (void)resetToSystemDefaults;
- (void)pushTransientViewController:(id)arg1 onSectionWithIdentifier:(id)arg2;
- (BOOL)loadFromDefaults;
- (void)scriptOverlayBackgroundDidDismiss:(id)arg1;
- (void)_endReloadingUnderneathTransientViewController;
- (void)_beginReloadingUnderneathTransientViewController;
- (id)_archivedContextsForViewController:(id)arg1;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (id)_viewControllerForContext:(id)arg1;
- (id)_rootViewControllerForSection:(id)arg1;
- (id)_sectionForIdentifier:(id)arg1;
- (id)viewControllerForSectionIdentifier:(id)arg1;
- (void)_transitionSafeHandlePartnerChange:(id)arg1;
- (void)_transitionSafeHandleLocationChange:(id)arg1;
- (void)_reloadViewControllersFromSections:(id)arg1 animated:(BOOL)arg2;
- (void)_fixupViewControllers;
- (BOOL)_isReloadingUnderneathTransientViewController;
- (id)overlayBackgroundViewController;
- (id)selectedIdentifier;
- (void)_applyMoreListTitle;
- (void)setSelectedIdentifier:(id)arg1;
- (BOOL)_saveTransientNavigationPathToDefaults;
- (BOOL)_saveNavigationPathToDefaults;
- (BOOL)saveOrderingToDefaults;
- (void)selectDefaultSection;
- (void)resetUserDefaults;
- (void)_moveTransientViewController:(id)arg1 toSectionWithIdentifier:(id)arg2 asRoot:(BOOL)arg3;
- (void)_restoreArchivedTransientContexts:(id)arg1;
- (void)_restoreOverlayContexts:(id)arg1;
- (void)_restoreArchivedContexts:(id)arg1;
- (void)setSectionOrdering:(id)arg1;
- (void)_partnerChanged:(id)arg1;
- (void)_locationChanged:(id)arg1;

@end
