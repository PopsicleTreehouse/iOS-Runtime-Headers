/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImage, NSString, WebScriptObject, SUScriptCanvasContext;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem> {
    id _action;
    SUScriptCanvasContext *_canvas;
    BOOL _shouldPerformDefaultAction;
    WebScriptObject *_target;
}

@property(retain) UIImage * image;
@property BOOL shouldPerformDefaultAction;
@property(retain) id action;
@property(retain) SUScriptCanvasContext * canvas;
@property BOOL enabled;
@property BOOL loading;
@property(retain) NSString * subtitle;
@property(retain) NSString * style;
@property(retain) NSString * title;
@property(retain) WebScriptObject * target;

+ (void)initialize;
+ (id)webScriptNameForKey:(const char *)arg1;

- (void)setTarget:(id)arg1;
- (id)action;
- (id)target;
- (id)init;
- (void)dealloc;
- (BOOL)loading;
- (void)setLoading:(BOOL)arg1;
- (void)_setStyle:(id)arg1;
- (BOOL)enabled;
- (void)_setEnabled:(BOOL)arg1;
- (BOOL)_isEnabled;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)style;
- (id)image;
- (void)setStyle:(id)arg1;
- (id)title;
- (void)setAction:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (id)attributeKeys;
- (void)setShouldPerformDefaultAction:(BOOL)arg1;
- (BOOL)shouldPerformDefaultAction;
- (id)_systemItemString;
- (void)setCanvas:(id)arg1;
- (id)canvas;
- (void)setNativeButton:(id)arg1;
- (void)performActionWithArguments:(id)arg1;
- (id)_nativeButton;
- (id)_copyTitle;
- (id)_copySubtitle;
- (id)_copyStyle;
- (void)_setTitle:(id)arg1;
- (void)_setSubtitle:(id)arg1;
- (void)_setLoading:(BOOL)arg1;
- (BOOL)_isLoading;
- (id)nativeButtonOfType:(int)arg1;
- (id)_boxedNativeButton;
- (id)initWithSystemItemString:(id)arg1;
- (id)_initSUScriptButton;
- (id)buttonItem;
- (id)_className;
- (id)scriptAttributeKeys;

@end
