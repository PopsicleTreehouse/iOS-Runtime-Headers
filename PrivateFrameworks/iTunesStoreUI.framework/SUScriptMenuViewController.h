/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, WebScriptObject, SUScriptFunction, NSNumber;

@interface SUScriptMenuViewController : SUScriptViewController  {
    SUScriptFunction *_action;
}

@property(retain) WebScriptObject * action;
@property(retain) id items;
@property(retain) NSNumber * selectedIndex;
@property(retain) NSString * title;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (id)action;
- (void)dealloc;
- (void)setSelectedIndex:(id)arg1;
- (id)selectedIndex;
- (void)setItems:(id)arg1;
- (id)items;
- (id)title;
- (void)setAction:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)attributeKeys;
- (id)itemWithTitle:(id)arg1 userInfo:(id)arg2;
- (void)_setSelectedIndex:(int)arg1;
- (void)_setItems:(id)arg1;
- (void)_setAction:(id)arg1;
- (id)_copyItems;
- (id)_copyAction;
- (int)_selectedIndex;
- (id)_viewController;
- (id)newNativeViewController;
- (id)_copyTitle;
- (void)_setTitle:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;

@end
