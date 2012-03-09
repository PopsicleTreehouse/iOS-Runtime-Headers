/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString, ABItemLabelPicker, ABPropertyGroup;

@interface ABLabelPickerViewController : ABPickerViewController  {
    NSArray *_additionalLabels;
    NSString *_selectedLabel;
    void *_addressBook;
    ABPropertyGroup *_propertyGroup;
    int _itemIndex;
    ABItemLabelPicker *_labelPicker;
    BOOL _didCreateNewLabel;
}

@property BOOL didCreateNewLabel;
@property(retain) NSString * selectedLabel;


- (void)dealloc;
- (id)initWithAddressBook:(void*)arg1 propertyGroup:(id)arg2 itemIndex:(int)arg3 additionalLabels:(id)arg4;
- (float)ab_heightToFitForViewInPopoverView;
- (struct CGSize { float x1; float x2; })fullScreenContentSize;
- (id)labelPicker;
- (BOOL)didCreateNewLabel;
- (id)selectedLabel;
- (void)setSelectedLabel:(id)arg1;
- (void)itemLabelPicker:(id)arg1 endedWithSelectionConfirmed:(BOOL)arg2 animate:(BOOL)arg3;
- (void)setDidCreateNewLabel:(BOOL)arg1;
- (BOOL)itemLabelPickerShouldDismissKeyboard:(id)arg1;
- (void)itemLabelPickerDidChangeSelection:(id)arg1;
- (void)itemLabelPicker:(id)arg1 deletedCustomLabel:(id)arg2;
- (void)itemLabelPickerDeletedLastCustomLabel:(id)arg1;
- (void)setStyleProvider:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (BOOL)_allowsAutorotation;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDelegate:(id)arg1;

@end
