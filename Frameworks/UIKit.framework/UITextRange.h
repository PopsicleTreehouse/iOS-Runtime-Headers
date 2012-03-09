/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextPosition;

@interface UITextRange : NSObject  {
}

@property(getter=_isCaret,readonly) BOOL isCaret;
@property(getter=_isRanged,readonly) BOOL isRanged;
@property(getter=isEmpty,readonly) BOOL empty;
@property(readonly) UITextPosition * start;
@property(readonly) UITextPosition * end;


- (BOOL)_isCaret;
- (BOOL)_isRanged;
- (id)end;
- (id)start;
- (BOOL)isEmpty;

@end
