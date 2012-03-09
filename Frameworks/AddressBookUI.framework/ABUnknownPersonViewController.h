/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABUnknownPersonViewControllerDelegate>, NSString, UIView;

@interface ABUnknownPersonViewController : UIViewController  {
    id _helper;
    <ABUnknownPersonViewControllerDelegate> *_unknownPersonViewDelegate;
    id _reserved;
}

@property void* addressBook;
@property void* displayedPerson;
@property(copy) NSString * alternateName;
@property(copy) NSString * message;
@property BOOL allowsActions;
@property BOOL allowsAddingToAddressBook;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsConferencing;
@property(retain) UIView * personHeaderView;
@property BOOL shouldAlignPersonHeaderViewToImage;
@property(copy) NSString * attribution;
@property(readonly) BOOL canShareContact;
@property BOOL isLocation;
@property BOOL allowsSharing;
@property BOOL savesNewContactOnSuspend;
@property <ABUnknownPersonViewControllerDelegate> * unknownPersonViewDelegate;

+ (id)defaultLabelsForProperty:(int)arg1 person:(void*)arg2 addressBook:(void*)arg3;

- (id)init;
- (void)dealloc;
- (void)setCustomAppearanceProvider:(id)arg1;
- (void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (id)newActionButton;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(int)arg5 ordering:(int)arg6;
- (void)setActionShouldPickHighlightedItem:(BOOL)arg1;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 localizableTitle:(id)arg3 property:(int)arg4 withActionGrouping:(int)arg5 ordering:(int)arg6;
- (void)presentAddToContactsSheet;
- (void)presentShareContactSheet;
- (void)presentNewContactViewControllerForAddToContacts;
- (void)presentPeoplePickerNavigationControllerForMergeToContact;
- (BOOL)personViewControllerHelper:(id)arg1 shouldContinueAfterSelectingPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (void)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)tellHelperToShow:(BOOL)arg1 actionWithSelector:(SEL)arg2 target:(id)arg3 localizableTitle:(id)arg4 property:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (void)setAlternateName:(id)arg1;
- (BOOL)allowsAddingToAddressBook;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (BOOL)allowsSendingTextMessage;
- (void)setStringValue:(id)arg1 forProperty:(int)arg2;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)reloadImageData;
- (BOOL)canShareContact;
- (BOOL)isLocation;
- (void)setIsLocation:(BOOL)arg1;
- (id)_vCards;
- (id)_vCardTable;
- (id)_forwarder;
- (id)unknownPersonViewDelegate;
- (id)_unmergedRecords;
- (id)_vCardProperties;
- (id)_findMatchingCardsForRecord:(void*)arg1;
- (void)_showUnmergedContactsAlert;
- (id)_alertSheet;
- (void)_createNewContacts;
- (void)_addToExistingContacts;
- (id)_unmergedAlertSheet;
- (void)_addUnmergedRecords;
- (id)_viewControllerForCardAtIndex:(int)arg1;
- (void)_showCardViewerForIndex:(int)arg1;
- (void)_unselectTable;
- (void)setCustomHeaderView:(id)arg1;
- (id)customHeaderView;
- (void)setCustomFooterView:(id)arg1;
- (id)customFooterView;
- (void)setAttribution:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3;
- (BOOL)allowsSharing;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (id)messageDetail;
- (id)messageDetailFont;
- (void)setMessageDetailFont:(id)arg1;
- (id)customMessageView;
- (void)setCustomMessageView:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (id)personHeaderView;
- (void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1;
- (BOOL)shouldAlignPersonHeaderViewToImage;
- (id)attribution;
- (void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (BOOL)shareMessageBodyIsHTML;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (id)shareMessageBody;
- (void)setShareMessageBody:(id)arg1;
- (id)shareMessageSubject;
- (void)setShareMessageSubject:(id)arg1;
- (id)shareLocationURL;
- (void)setShareLocationURL:(id)arg1;
- (id)shareLocationSnapshotImage;
- (void)setShareLocationSnapshotImage:(id)arg1;
- (id)willTweetLocationCallback;
- (void)setWillTweetLocationCallback:(id)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (id)helper;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3;
- (BOOL)savesNewContactOnSuspend;
- (float)ab_heightToFitForViewInPopoverView;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (BOOL)allowsActions;
- (BOOL)allowsConferencing;
- (int)abViewControllerType;
- (void*)displayedPerson;
- (void)setStyleProvider:(id)arg1;
- (id)styleProvider;
- (void)setDisplayedProperties:(id)arg1;
- (void)updateNavigationButtons;
- (void)setAddressBook:(void*)arg1;
- (void*)addressBook;
- (id)messageFont;
- (id)initWithVCardData:(id)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setPrimaryProperty:(int)arg1;
- (void)setUnknownPersonViewDelegate:(id)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (id)alternateName;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (id)initWithStyle:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_allowsAutorotation;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)applicationDidResume;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)displayedProperties;
- (id)_mf_initWithEmailAddress:(id)arg1;

@end
