/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewDataSource, UITableView;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    int _tableViewStyle;
    id _keyboardSupport;
    id _staticDataSource;
    struct { 
        unsigned int clearsSelectionOnViewWillAppear : 1; 
    } _tableViewControllerFlags;
}

@property(getter=_staticDataSource,setter=_setStaticDataSource:,retain) UITableViewDataSource * staticDataSource;
@property(retain) UITableView * tableView;
@property BOOL clearsSelectionOnViewWillAppear;


- (BOOL)respondsToSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;
- (void)_setStaticDataSource:(id)arg1;
- (id)_staticDataSource;
- (void)setClearsSelectionOnViewWillAppear:(BOOL)arg1;
- (BOOL)clearsSelectionOnViewWillAppear;
- (id)_existingTableView;
- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (id)tableView;
- (id)initWithStyle:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (int)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_gkTableView:(id)arg1 buttonCellWithTitle:(id)arg2 theme:(id)arg3;

@end
