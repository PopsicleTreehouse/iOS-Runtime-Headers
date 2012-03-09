/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class UIView;

@interface AFUISnippetManagedContentView : UIView  {
    UIView *_managedContentView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _managedContentInsets;
}

@property struct UIEdgeInsets { float top; float left; float bottom; float right; } managedContentInsets;
@property(retain) UIView * managedContentView;


- (void)dealloc;
- (id)managedContentView;
- (void)setManagedContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })managedContentInsets;
- (void)setManagedContentView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
