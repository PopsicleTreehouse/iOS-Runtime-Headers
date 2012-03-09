/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton, UIPrintPanelViewController;

@interface UIPrintPanelTableViewController : UITableViewController  {
    UIPrintPanelViewController *_printPanelViewController;
    UIButton *_printButton;
    int _rangeRow;
    int _copiesRow;
    int _duplexRow;
    int _paperRow;
    BOOL _contactingPrinter;
}


- (void)dealloc;
- (void)_setupPrintButtons;
- (void)updatePageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)updateDuplex:(id)arg1;
- (void)updateCopies:(id)arg1;
- (void)showContacting;
- (void)_update:(BOOL)arg1;
- (void)setShowContactingPrinter:(BOOL)arg1;
- (void)clearPrintPanelViewController;
- (void)showCancelButton;
- (id)initWithPrintPanelViewController:(id)arg1;
- (void)_updateSize;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end
