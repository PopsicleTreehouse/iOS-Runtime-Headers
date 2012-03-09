/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UITextField, UIColor, UILabel, UITableView, UILongPressGestureRecognizer, UIButton, UIView, _UITableViewCellOldEditingData, SUGridView, NSString, UIImageView, NSTimer;

@interface UITableViewCell : UIView <NSCoding, UIGestureRecognizerDelegate> {
    UITableView *_tableView;
    id _layoutManager;
    id _target;
    SEL _editAction;
    SEL _accessoryAction;
    id _oldEditingData;
    id _editingData;
    float _rightMargin;
    int _indentationLevel;
    float _indentationWidth;
    NSString *_reuseIdentifier;
    UIView *_contentView;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIView *_backgroundView;
    UIView *_selectedBackgroundView;
    UIView *_multipleSelectionBackgroundView;
    UIView *_selectedOverlayView;
    float _selectionFadeDuration;
    UIColor *_backgroundColor;
    UIColor *_separatorColor;
    UIColor *_topShadowColor;
    UIColor *_bottomShadowColor;
    UIColor *_sectionBorderColor;
    UIView *_floatingSeparatorView;
    UIView *_topShadowAnimationView;
    UIView *_bottomShadowAnimationView;
    struct __CFDictionary { } *_unhighlightedStates;
    id _selectionSegueTemplate;
    struct { 
        unsigned int showingDeleteConfirmation : 1; 
        unsigned int separatorStyle : 3; 
        unsigned int selectionStyle : 3; 
        unsigned int selectionFadeFraction : 11; 
        unsigned int editing : 1; 
        unsigned int editingStyle : 3; 
        unsigned int accessoryType : 3; 
        unsigned int editingAccessoryType : 3; 
        unsigned int showsAccessoryWhenEditing : 1; 
        unsigned int showsReorderControl : 1; 
        unsigned int showDisclosure : 1; 
        unsigned int showTopSeparator : 1; 
        unsigned int hideTopSeparatorDuringReordering : 1; 
        unsigned int disclosureClickable : 1; 
        unsigned int disclosureStyle : 1; 
        unsigned int showingRemoveControl : 1; 
        unsigned int sectionLocation : 3; 
        unsigned int tableViewStyle : 1; 
        unsigned int shouldIndentWhileEditing : 1; 
        unsigned int fontSet : 1; 
        unsigned int usingDefaultSelectedBackgroundView : 1; 
        unsigned int wasSwiped : 1; 
        unsigned int highlighted : 1; 
        unsigned int separatorDirty : 1; 
        unsigned int drawn : 1; 
        unsigned int drawingDisabled : 1; 
        unsigned int style : 12; 
        unsigned int showingMenu : 1; 
        unsigned int clipsContents : 1; 
        unsigned int animatingSelection : 1; 
        unsigned int backgroundColorSet : 1; 
        unsigned int needsSetup : 1; 
        unsigned int dontDrawTopShadow : 1; 
        unsigned int usingMultiselectbackgroundView : 1; 
        unsigned int layoutLoopCounter : 2; 
    } _tableCellFlags;
    UIButton *_accessoryView;
    UIButton *_editingAccessoryView;
    UIView *_customAccessoryView;
    UIView *_customEditingAccessoryView;
    UIView *_separatorView;
    UIView *_topSeparatorView;
    UIView *_topShadowView;
    UITextField *_editableTextField;
    double _lastSelectionTime;
    NSTimer *_deselectTimer;
    float _textFieldOffset;
    SEL _returnAction;
    UIColor *_selectionTintColor;
    UIColor *_accessoryTintColor;
    UIImage *_reorderControlImage;
    UILongPressGestureRecognizer *_menuGesture;
}

@property(readonly) SUGridView * gridView;
@property(readonly) UITextField * editableTextField;
@property(setter=setTextFieldOffset:) float textFieldOffset;
@property BOOL wasSwiped;
@property(getter=_needsSetup,setter=_setNeedsSetup:) BOOL needsSetup;
@property(getter=_drawsTopShadow,setter=_setDrawsTopShadow:) BOOL drawsTopShadow;
@property(retain) _UITableViewCellOldEditingData * oldEditingData;
@property(readonly) UIImageView * imageView;
@property(readonly) UILabel * textLabel;
@property(readonly) UILabel * detailTextLabel;
@property(readonly) UIView * contentView;
@property(retain) UIView * backgroundView;
@property(retain) UIView * selectedBackgroundView;
@property(retain) UIView * multipleSelectionBackgroundView;
@property(readonly) NSString * reuseIdentifier;
@property int selectionStyle;
@property(getter=isSelected) BOOL selected;
@property(getter=isHighlighted) BOOL highlighted;
@property(readonly) int editingStyle;
@property BOOL showsReorderControl;
@property BOOL shouldIndentWhileEditing;
@property int accessoryType;
@property(retain) UIView * accessoryView;
@property int editingAccessoryType;
@property(retain) UIView * editingAccessoryView;
@property int indentationLevel;
@property float indentationWidth;
@property(getter=isEditing) BOOL editing;
@property(readonly) BOOL showingDeleteConfirmation;


- (void)setTarget:(id)arg1;
- (id)target;
- (id)init;
- (void)dealloc;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (SEL)returnAction;
- (BOOL)_hasEditingAccessoryView;
- (BOOL)_hasAccessoryView;
- (id)_titleForDeleteConfirmationButton;
- (id)_topShadowView:(BOOL)arg1;
- (id)_backgroundView:(BOOL)arg1;
- (id)_customEditingAccessoryView:(BOOL)arg1;
- (id)_customAccessoryView:(BOOL)arg1;
- (BOOL)_isReorderable;
- (void)deleteConfirmationControlWasCancelled:(id)arg1;
- (void)deleteConfirmationControlWasClicked:(id)arg1;
- (void)editControlWasClicked:(id)arg1;
- (void)_animateInnerShadowForInsertion:(BOOL)arg1 withRowAnimation:(int)arg2;
- (void)_animateFloatingSeparatorForInsertion:(BOOL)arg1 withRowAnimation:(int)arg2;
- (void)_drawSeparatorInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setReorderControlImage:(id)arg1;
- (id)_imageView:(BOOL)arg1;
- (id)_editableTextField:(BOOL)arg1;
- (id)_detailTextLabel:(BOOL)arg1;
- (id)editableTextField;
- (id)_defaultAccessoryView;
- (id)_reorderControlImage;
- (SEL)_accessoryAction;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForState:(unsigned int)arg1;
- (SEL)accessoryAction;
- (void)setAccessoryAction:(SEL)arg1;
- (SEL)editAction;
- (void)setEditAction:(SEL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)clipsContents;
- (void)setClipsContents:(BOOL)arg1;
- (void)setIndentationWidth:(float)arg1;
- (BOOL)hidesAccessoryWhenEditing;
- (void)setHidesAccessoryWhenEditing:(BOOL)arg1;
- (id)editingAccessoryView;
- (void)setEditingAccessoryView:(id)arg1;
- (int)editingAccessoryType;
- (void)setEditingAccessoryType:(int)arg1;
- (id)_accessoryTintColor;
- (void)_setAccessoryTintColor:(id)arg1;
- (void)setShouldIndentWhileEditing:(BOOL)arg1;
- (void)setShowsReorderControl:(BOOL)arg1;
- (void)setEditingStyle:(int)arg1;
- (void)setEditingStyle:(int)arg1;
- (id)selectedOverlayView;
- (void)_setUnhighlightedBackgroundColor:(id)arg1 forSubview:(id)arg2;
- (void)_clearOpaqueViewState:(id)arg1;
- (id)bottomShadowColor;
- (void)setTableBackgroundColor:(id)arg1;
- (BOOL)_backgroundColorSet;
- (id)_contentBackgroundColor;
- (id)selectedBackgroundView;
- (void)setMultipleSelectionBackgroundView:(id)arg1;
- (id)multipleSelectionBackgroundView;
- (void)setSelectedBackgroundView:(id)arg1;
- (void)setSelectedImage:(id)arg1;
- (id)selectedTextColor;
- (void)setSelectedTextColor:(id)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)setSelectionSegueTemplate:(id)arg1;
- (void)setSectionLocation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)indentationWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_delegateConfirmationRect;
- (float)_editingButtonOffset;
- (void)willTransitionToState:(unsigned int)arg1;
- (BOOL)wasSwiped;
- (id)_editingAccessoryView:(BOOL)arg1;
- (id)_accessoryView:(BOOL)arg1;
- (void)_syncAccessoryViewsIfNecessary;
- (void)_delayedDeselect;
- (id)editingData:(BOOL)arg1;
- (void)showSelectedBackgroundView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_cancelInternalPerformRequests;
- (void)_deselectAnimationFinished;
- (void)_setSelectionStyle:(int)arg1 selectionTintColor:(id)arg2;
- (void)removeEditingData;
- (void)setSelectedBackgroundView:(id)arg1 animated:(BOOL)arg2;
- (void)selectedBackgroundViewChange:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_setupSelectedBackgroundView;
- (void)_setFont:(id)arg1 layout:(BOOL)arg2;
- (id)_textLabel:(BOOL)arg1;
- (void)_didCreateContentView;
- (void)_setupMenuGesture;
- (void)_drawContentInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 selected:(BOOL)arg2;
- (void)_setupTableViewCellCommon;
- (void)setSelectionFadeDuration:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 reuseIdentifier:(id)arg2;
- (void)_setDrawsTopSeparatorDuringReordering:(BOOL)arg1;
- (void)_resetSelectionTimer;
- (void)_updateTopShadowView:(BOOL)arg1;
- (void)_updateContentClip;
- (void)_longPressGestureRecognized:(id)arg1;
- (void)_editingTransitionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (struct CGSize { float x1; float x2; })_imageInsetSize;
- (struct CGSize { float x1; float x2; })_textInsetSize;
- (id)_imageView;
- (id)_editableTextField;
- (id)_detailTextLabel;
- (void)_showReorderControl;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (void)_removeRemoveControl;
- (id)_createRemoveControlForStyle:(int)arg1;
- (id)_reorderingSeparatorView;
- (void)_createReorderControlIfNeeded;
- (void)_updateSeparatorContent;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (void)_topShadowDidFadeOut;
- (float)selectionFadeDuration;
- (id)topShadowColor;
- (id)_selectedBackgroundView:(BOOL)arg1;
- (BOOL)_drawsTopShadow;
- (int)sectionLocation;
- (int)tableViewStyle;
- (void)_menuDismissed:(id)arg1;
- (void)didTransitionToState:(unsigned int)arg1;
- (id)_currentAccessoryView:(BOOL)arg1;
- (id)_reorderingControl;
- (BOOL)_isCurrentlyConsideredHighlighted;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2;
- (id)_disclosurePressedImage:(BOOL)arg1;
- (id)_disclosureImage:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessoryRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_tintedDisclosureImagePressed:(BOOL)arg1;
- (void)_releaseReorderingControl;
- (void)setOldEditingData:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })reorderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)oldEditingData;
- (id)_multiselectBackgroundColor;
- (id)selectionTintColor;
- (int)selectionStyle;
- (void)setSelectionTintColor:(id)arg1;
- (id)_tableView;
- (void)setAccessoryView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPlaceHolderValue:(id)arg1;
- (void)setReturnAction:(SEL)arg1;
- (void)setTextFieldOffset:(float)arg1;
- (float)textFieldOffset;
- (void)removeControl:(id)arg1 wasCanceledForTarget:(id)arg2;
- (void)setShowingDeleteConfirmation:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })backgroundRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })removeControl:(id)arg1 endFrameForTarget:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })removeControl:(id)arg1 startFrameForTarget:(id)arg2;
- (BOOL)_isHighlighted;
- (id)imageView;
- (void)setLayoutManager:(id)arg1;
- (id)selectedImage;
- (id)accessoryView;
- (id)_textLabel;
- (id)textLabel;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (id)textColor;
- (void)textFieldDidBecomeFirstResponder:(id)arg1;
- (int)textAlignment;
- (int)indentationLevel;
- (void)insertControl:(id)arg1 shouldInsertWithTarget:(id)arg2;
- (void)removeControl:(id)arg1 willRemoveTarget:(id)arg2;
- (void)_uiRemoveControlMinusButtonHideAnimationDone:(id)arg1;
- (void)_grabberReleased:(id)arg1;
- (void)_grabberDragged:(id)arg1 yDelta:(float)arg2;
- (void)_grabberBeganReorder:(id)arg1;
- (void)setSelectionStyle:(int)arg1;
- (float)selectionPercent;
- (BOOL)isAtLeastHalfSelected;
- (void)_willBeDeleted;
- (void)_layoutSubviewsAnimated:(BOOL)arg1;
- (void)removeControlWillHideRemoveConfirmation:(id)arg1;
- (void)_setGrabberHidden:(BOOL)arg1;
- (void)_releaseRemoveControl;
- (void)_finishedFadingGrabber:(id)arg1 finished:(BOOL)arg2;
- (id)_removeControl;
- (float)_backgroundInset;
- (void)setSelected:(BOOL)arg1;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (BOOL)showsReorderControl;
- (BOOL)showingDeleteConfirmation;
- (BOOL)shouldIndentWhileEditing;
- (void)_setShowingDeleteConfirmation:(BOOL)arg1;
- (void)setWasSwiped:(BOOL)arg1;
- (void)_setShowsReorderControl:(BOOL)arg1;
- (void)_setShouldIndentWhileEditing:(BOOL)arg1;
- (void)_setEditingStyle:(int)arg1;
- (void)_setAccessoryAction:(SEL)arg1;
- (void)_setTarget:(id)arg1;
- (id)_target;
- (void)setAccessoryType:(int)arg1;
- (void)setTextAlignment:(int)arg1;
- (id)detailTextLabel;
- (void)_setReordering:(BOOL)arg1;
- (void)_setOpaque:(BOOL)arg1 forSubview:(id)arg2;
- (void)_saveOpaqueViewState:(id)arg1;
- (BOOL)isHighlighted;
- (void)_setDrawsTopSeparator:(BOOL)arg1;
- (BOOL)_drawsTopSeparatorDuringReordering;
- (void)setEditing:(BOOL)arg1;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (id)backgroundView;
- (int)separatorStyle;
- (void)_setMultiselecting:(BOOL)arg1;
- (unsigned int)currentStateMask;
- (void)setIndentationLevel:(int)arg1;
- (void)_setNeedsSetup:(BOOL)arg1;
- (void)_setTableView:(id)arg1;
- (void)_startToEditTextField;
- (id)layoutManager;
- (void)setReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)_updateAndCacheBackgroundColorForHighlightIgnoringSelection:(BOOL)arg1;
- (void)_setTableBackgroundCGColor:(struct CGColor { }*)arg1 withSystemColorName:(id)arg2;
- (void)_updateHighlightColors;
- (void)setBottomShadowColor:(id)arg1;
- (void)setTopShadowColor:(id)arg1;
- (BOOL)isSelected;
- (id)selectionSegueTemplate;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (int)editingStyle;
- (BOOL)drawingEnabled;
- (void)setSeparatorColor:(id)arg1;
- (id)tableBackgroundColor;
- (void)setBackgroundView:(id)arg1;
- (id)sectionBorderColor;
- (void)_removeInnerShadow;
- (void)_removeFloatingSeparator;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isEditing;
- (BOOL)_needsSetup;
- (id)reuseIdentifier;
- (void)setTableViewStyle:(int)arg1;
- (int)accessoryType;
- (void)setSeparatorStyle:(int)arg1;
- (void)_setDrawsTopShadow:(BOOL)arg1;
- (void)setSectionBorderColor:(id)arg1;
- (id)separatorColor;
- (void)_multiselectColorChanged;
- (void)setHighlighted:(BOOL)arg1;
- (int)style;
- (id)_defaultFont;
- (id)image;
- (id)_scriptingInfo;
- (void)_descendent:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_descendent:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (BOOL)_canDrawContent;
- (id)contentView;
- (id)backgroundColor;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setLineBreakMode:(int)arg1;
- (int)lineBreakMode;
- (id)font;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)text;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setContentAlpha:(float)arg1;
- (void)setEditingBySwiping:(BOOL)arg1 animated:(BOOL)arg2;
- (id)gridView;
- (id)accessibilityTableViewCellText;
- (void)_setDisclosureStateUsingDefault:(id)arg1 librarySelector:(SEL)arg2;
- (void)setDisclosureStateUsingDefault:(id)arg1 librarySelector:(SEL)arg2;

@end
