/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKTableSectionHeaderBackgroundButton : NSObject <GKTableSection> {
    Class _contentViewClass;
    SEL _action;
    NSString *_statusText;
}

@property Class contentViewClass;
@property SEL action;
@property(retain) NSString * statusText;
@property(readonly) BOOL isHidden;
@property(getter=isLoading) BOOL loading;


- (SEL)action;
- (void)dealloc;
- (void)setStatusText:(id)arg1;
- (void)setContentViewClass:(Class)arg1;
- (id)statusText;
- (Class)contentViewClass;
- (void)tableView:(id)arg1 didSelectIndexPath:(id)arg2;
- (id)sectionHeaderViewInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)sectionRowCountInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (BOOL)allowsSelection;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setAction:(SEL)arg1;
- (BOOL)isHidden;

@end
