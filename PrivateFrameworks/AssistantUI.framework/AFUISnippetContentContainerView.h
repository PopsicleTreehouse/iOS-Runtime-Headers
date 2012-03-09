/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class AFUIPerforatedBackgroundView, UIButton, UIView;

@interface AFUISnippetContentContainerView : UIView <AFUISnippetPaperViewDelegate> {
    UIView *_userContent;
    UIView *_backgroundView;
    AFUIPerforatedBackgroundView *_perforatedBackground;
    UIButton *_disclosureButton;
    BOOL _perforated;
    BOOL _backgroundNeedsRegeneration;
    BOOL _backgroundIsPaper;
}

@property(retain) UIButton * disclosureButton;
@property(retain) UIView * backgroundView;
@property BOOL perforatedEdges;
@property(retain) UIView * userContent;


- (void)dealloc;
- (void)paperViewPropertyChanged:(id)arg1;
- (void)_regeneratePerforatedBackground;
- (void)setUserContent:(id)arg1;
- (id)userContent;
- (void)setPerforatedEdges:(BOOL)arg1;
- (BOOL)perforatedEdges;
- (id)disclosureButton;
- (void)setDisclosureButton:(id)arg1;
- (void)setUserContentAnimated:(id)arg1 animation:(id)arg2 completion:(id)arg3;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
