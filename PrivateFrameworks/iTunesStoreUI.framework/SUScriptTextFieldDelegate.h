/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSHashTable;

@interface SUScriptTextFieldDelegate : NSObject <SUScriptTextFieldDelegate> {
    NSHashTable *_delegates;
}

@property(readonly) int numberOfTextFieldDelegates;


- (BOOL)respondsToSelector:(SEL)arg1;
- (id)init;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeTextFieldDelegate:(id)arg1;
- (int)numberOfTextFieldDelegates;
- (void)addTextFieldDelegate:(id)arg1;

@end
