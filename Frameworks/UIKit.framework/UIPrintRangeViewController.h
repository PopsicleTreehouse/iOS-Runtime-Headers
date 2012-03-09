/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPrintPanelViewController, UILabel, UITableView, UIPrintRangePickerView;

@interface UIPrintRangeViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIPrintPanelViewController *_printPanelViewController;
    int _pageCount;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _pageRange;
    UIPrintRangePickerView *_fromPicker;
    UIPrintRangePickerView *_toPicker;
    UILabel *_toLabel;
    UITableView *_tableView;
    float _pickerWidth;
}


- (void)dealloc;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;

@end
