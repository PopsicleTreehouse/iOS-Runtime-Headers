/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKExpandingTextCell;

@interface EKReminderInlineEditItem : EKReminderEditItem <EKExpandingTextViewDelegate> {
    EKExpandingTextCell *_cell;
}


- (id)init;
- (void)dealloc;
- (void)textViewDidChangeContentHeight:(id)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(int)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (void)_keyboardDidShow:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (BOOL)isInline;

@end
