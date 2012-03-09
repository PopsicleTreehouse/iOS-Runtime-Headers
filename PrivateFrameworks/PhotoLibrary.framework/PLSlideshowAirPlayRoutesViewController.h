/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UITableView, NSArray, UIView;

@interface PLSlideshowAirPlayRoutesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UIView *_containerView;
    UITableView *_table;
    NSArray *_airPlayServices;
    unsigned int _selectedServiceIndex;
}

@property unsigned int selectedServiceIndex;


- (void)dealloc;
- (void)loadView;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopoverView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setSelectedServiceIndex:(unsigned int)arg1;
- (unsigned int)selectedServiceIndex;
- (id)initWithAirPlayServices:(id)arg1 selectedServiceIndex:(unsigned int)arg2;

@end
