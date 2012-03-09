/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, UITextRange, NSDictionary, UIView<UITextSelectingContent>, <UITextFieldDelegate>, NSString, UITextFieldBackgroundView, UIPopoverController, UITextInteractionAssistant, UIViewController, UITextSelectionView, UILabel, UITextFieldAtomBackgroundView, UITextPosition, UITextInputTraits, <UITextInputDelegate>, UIButton, UIResponder<UITextSelection>, UIFont, <UITextInputTokenizer>, UIImage, UIColor, UITextFieldBorderView, UIView, UITextFieldLabel;

@interface UITextField : UIControl <UITextSelectingContainer, UIPopoverControllerDelegate, UITextInput, NSCoding> {
    NSString *_text;
    UIColor *_textColor;
    int _borderStyle;
    float _minimumFontSize;
    id _delegate;
    UIImage *_background;
    UIImage *_disabledBackground;
    int _clearButtonMode;
    UIView *_leftView;
    int _leftViewMode;
    UIView *_rightView;
    int _rightViewMode;
    UITextInputTraits *_traits;
    UITextInputTraits *_nonAtomTraits;
    float _fullFontSize;
    float _paddingLeft;
    float _paddingTop;
    float _paddingRight;
    float _paddingBottom;
    NSString *_textFont;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _selectionRange;
    int _scrollXOffset;
    int _scrollYOffset;
    int _suffixWidth;
    float _progress;
    NSString *_style;
    double _mouseDownTime;
    UIButton *_clearButton;
    struct CGSize { 
        float width; 
        float height; 
    } _clearButtonOffset;
    struct CGSize { 
        float width; 
        float height; 
    } _leftViewOffset;
    struct CGSize { 
        float width; 
        float height; 
    } _rightViewOffset;
    UITextFieldBorderView *_backgroundView;
    UITextFieldBorderView *_disabledBackgroundView;
    UITextFieldBackgroundView *_systemBackgroundView;
    UITextFieldLabel *_textLabel;
    UITextFieldLabel *_placeholderLabel;
    UITextFieldLabel *_suffixLabel;
    UITextFieldLabel *_prefixLabel;
    UIImageView *_iconView;
    UILabel *_label;
    float _labelOffset;
    UITextInteractionAssistant *_interactionAssistant;
    UITextSelectionView *_selectionView;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UITextFieldAtomBackgroundView *_atomBackgroundView;
    UIPopoverController *_definitionPopoverController;
    UIViewController *_definitionModalViewController;
    UIColor *_shadowColor;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowOffset;
    float _shadowBlur;
    struct { 
        unsigned int secureTextChanged : 1; 
        unsigned int guard : 1; 
        unsigned int delegateRespondsToHandleKeyDown : 1; 
        unsigned int verticallyCenterText : 1; 
        unsigned int isAnimating : 4; 
        unsigned int inactiveHasDimAppearance : 1; 
        unsigned int becomesFirstResponderOnClearButtonTap : 1; 
        unsigned int clearsOnBeginEditing : 1; 
        unsigned int clearsPlaceholderOnBeginEditing : 1; 
        unsigned int adjustsFontSizeToFitWidth : 1; 
        unsigned int fieldEditorAttached : 1; 
        unsigned int canBecomeFirstResponder : 1; 
        unsigned int shouldSuppressShouldBeginEditing : 1; 
        unsigned int inResignFirstResponder : 1; 
        unsigned int undoDisabled : 1; 
        unsigned int contentsRTL : 1; 
        unsigned int explicitAlignment : 1; 
        unsigned int implementsCustomDrawing : 1; 
        unsigned int needsClearing : 1; 
    } _textFieldFlags;
}

@property(copy) NSString * text;
@property(retain) UIColor * textColor;
@property(retain) UIFont * font;
@property int textAlignment;
@property int borderStyle;
@property(copy) NSString * placeholder;
@property BOOL clearsOnBeginEditing;
@property BOOL adjustsFontSizeToFitWidth;
@property float minimumFontSize;
@property <UITextFieldDelegate> * delegate;
@property(retain) UIImage * background;
@property(retain) UIImage * disabledBackground;
@property(getter=isEditing,readonly) BOOL editing;
@property int clearButtonMode;
@property(retain) UIView * leftView;
@property int leftViewMode;
@property(retain) UIView * rightView;
@property int rightViewMode;
@property(retain) UIView * inputView;
@property(retain) UIView * inputAccessoryView;
@property int autocapitalizationType;
@property int autocorrectionType;
@property int spellCheckingType;
@property int keyboardType;
@property int keyboardAppearance;
@property int returnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange * selectedTextRange;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UITextPosition * endOfDocument;
@property <UITextInputDelegate> * inputDelegate;
@property(readonly) <UITextInputTokenizer> * tokenizer;
@property(readonly) UIView * textInputView;
@property int selectionAffinity;
@property(getter=isEditable,readonly) BOOL editable;
@property int selectionGranularity;
@property(readonly) UITextSelectionView * selectionView;
@property(readonly) UITextInteractionAssistant * interactionAssistant;
@property(readonly) UIView<UITextSelectingContent> * content;
@property(readonly) UIResponder<UITextSelection> * textDocument;


- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (id)inputView;
- (id)rightView;
- (id)leftView;
- (id)disabledBackground;
- (id)background;
- (id)_findWebViewWordBoundaryFromPosition:(id)arg1;
- (BOOL)_isDisplayingReferenceLibraryViewController;
- (BOOL)caretBlinks;
- (BOOL)selectionVisible;
- (void)setSelectionVisible:(BOOL)arg1;
- (void)setDrawsAsAtom:(BOOL)arg1;
- (void)setClearButtonOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setUndoEnabled:(BOOL)arg1;
- (void)setTextCentersVertically:(BOOL)arg1;
- (void)setTextCentersHorizontally:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (id)textLabel;
- (void)setLabelOffset:(float)arg1;
- (void)setBecomesFirstResponderOnClearButtonTap:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })clearButtonOffset;
- (void)clearText;
- (void)_resetSelectionUI;
- (void)_clearSelectionUI;
- (void)setInactiveHasDimAppearance:(BOOL)arg1;
- (void)setTextFont:(id)arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingBottom:(float)arg1;
- (void)setPaddingTop:(float)arg1;
- (void)setPaddingLeft:(float)arg1;
- (void)setPaddingTop:(float)arg1 paddingLeft:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRect;
- (void)setClearButtonStyle:(int)arg1;
- (void)setTextAutorresizesToFit:(BOOL)arg1;
- (void)setAutoresizesTextToFit:(BOOL)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (id)supportedPasteboardTypesForCurrentSelection;
- (BOOL)fieldEditor:(id)arg1 shouldReplaceWithText:(id)arg2;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)fieldEditorDidChangeSelection:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })fieldEditor:(id)arg1 willChangeSelectionFromCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 toCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)selectAllFromFieldEditor:(id)arg1;
- (void)fieldEditorDidChange:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)willDetachFieldEditor:(id)arg1;
- (void)attachFieldEditor:(id)arg1;
- (void)willAttachFieldEditor:(id)arg1;
- (void)setRightViewMode:(int)arg1;
- (void)setRightView:(id)arg1;
- (void)setLeftViewMode:(int)arg1;
- (void)setLeftView:(id)arg1;
- (void)setDisabledBackground:(id)arg1;
- (void)setBackground:(id)arg1;
- (void)setClearsPlaceholderOnBeginEditing:(BOOL)arg1;
- (void)setClearsOnBeginEditing:(BOOL)arg1;
- (void)_setPrefix:(id)arg1;
- (void)_setSuffix:(id)arg1 withColor:(id)arg2;
- (void)setPlaceholder:(id)arg1;
- (id)searchText;
- (id)_textLabelView;
- (id)_placeholderLabel;
- (id)_placeholderView;
- (void)_setSystemBackgroundViewActive:(BOOL)arg1;
- (BOOL)_fieldEditorAttached;
- (void)_setRightViewOffset:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_rightViewOffset;
- (void)_setLeftViewOffset:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })_leftViewOffset;
- (struct CGPoint { float x1; float x2; })_scrollOffset;
- (id)actualFont;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustedCaretRectForCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_clearButton;
- (void)_becomeFirstResponderAndMakeVisible;
- (BOOL)_requiresKeyboardResetOnReload;
- (id)_keyboardResponder;
- (void)setAnimating:(BOOL)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)isEditable;
- (id)textDocument;
- (id)content;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (id)rectsForRange:(id)arg1;
- (void)setSelectionGranularity:(int)arg1;
- (int)selectionGranularity;
- (void)setSelectionAffinity:(int)arg1;
- (int)selectionAffinity;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)tokenizer;
- (void)setInputDelegate:(id)arg1;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)endOfDocument;
- (id)beginningOfDocument;
- (void)unmarkText;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedTextStyle:(id)arg1;
- (id)markedTextStyle;
- (id)markedTextRange;
- (void)setSelectedTextRange:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (BOOL)hasText;
- (id)metadataDictionariesForDictationResults;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForDictationResultPlaceholder:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (id)insertDictationResultPlaceholder;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (void)_define:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)copy:(id)arg1;
- (id)supportedPasteboardTypes;
- (void)paste:(id)arg1;
- (void)replace:(id)arg1;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)cut:(id)arg1;
- (id)inputDelegate;
- (id)selectedText;
- (struct CGPoint { float x1; float x2; })constrainedPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)offsetInMarkedTextForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textInRange:(id)arg1;
- (id)selectedTextRange;
- (id)selectionRectsForRange:(id)arg1;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint { float x1; float x2; })arg1;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (BOOL)isUndoEnabled;
- (BOOL)hasSelection;
- (unsigned int)characterOffsetAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)layoutTilesNow;
- (id)_fieldEditor;
- (void)setSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)canResignFirstResponder;
- (float)paddingBottom;
- (float)paddingRight;
- (float)paddingTop;
- (float)paddingLeft;
- (BOOL)_implementsCustomDrawing;
- (void)drawBorder:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clearButtonRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setClearButtonMode:(int)arg1;
- (id)_dictationInterpretations;
- (void)selectAll;
- (BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
- (id)customOverlayContainer;
- (void)keyboardInputChangedSelection:(id)arg1;
- (BOOL)keyboardInputChanged:(id)arg1;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (void)_endedEditing;
- (BOOL)clearsOnBeginEditing;
- (void)drawPrefixInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawSuffixInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawPlaceholderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forEditing:(BOOL)arg2;
- (id)inputAccessoryView;
- (id)textColor;
- (id)_placeholderColor;
- (Class)_systemBackgroundViewClass;
- (void)setShadowBlur:(float)arg1;
- (void)_updateTextColor;
- (BOOL)drawsAsAtom;
- (BOOL)hasMarkedText;
- (id)_text;
- (void)_updateTextLabel;
- (void)forwardInvocation:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })borderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_clearBackgroundViews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_suffixFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_prefixFrame;
- (BOOL)clearsPlaceholderOnBeginEditing;
- (void)_updateBackgroundViews;
- (void)_updateButtons;
- (void)_updateAutosizeStyleIfNeeded;
- (void)_updateAtomBackground;
- (void)_updateLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForLabel:(id)arg1 inTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })placeholderRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)borderStyle;
- (BOOL)_isShowingPrefix;
- (BOOL)_isShowingPlaceholder;
- (float)shadowBlur;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })iconRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_textRectExcludingButtonsForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)rightViewMode;
- (int)leftViewMode;
- (BOOL)_showsClearButtonWhenEmpty;
- (BOOL)_showsClearButtonWhenNonEmpty:(BOOL)arg1;
- (int)clearButtonMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_atomBackgroundViewFrame;
- (BOOL)_showsAtomBackground;
- (BOOL)_hasContent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editingRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFont:(id)arg1 fullFontSize:(float)arg2;
- (id)textInputTraits;
- (BOOL)adjustsFontSizeToFitWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rightViewRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_showsRightView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })leftViewRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_showsLeftView;
- (BOOL)_showsClearButton:(BOOL)arg1;
- (id)clearButton;
- (id)_clearButtonImageForState:(unsigned int)arg1;
- (void)_clearButtonClicked:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })clearButtonRect;
- (float)_marginTopForText:(id)arg1;
- (id)_createCSSStyleDeclarationForWebView:(id)arg1;
- (id)webView;
- (id)_copyFont:(id)arg1 newSize:(float)arg2 maxSize:(float)arg3;
- (struct CGSize { float x1; float x2; })_fontMetrics:(id)arg1;
- (float)actualMinimumFontSize;
- (struct CGSize { float x1; float x2; })_textSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })editRect;
- (void)_resignFirstResponder;
- (void)_setImplicitAlignment;
- (void)_removeDefinitionController;
- (id)interactionAssistant;
- (void)_becomeFirstResponder;
- (BOOL)_shouldEndEditing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setCaretBlinks:(BOOL)arg1;
- (id)selectionView;
- (void)_sizeChanged:(BOOL)arg1;
- (void)_setNeedsStyleRecalc;
- (void)_clearStyle;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (id)placeholder;
- (void)setBorderStyle:(int)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (id)createPlaceholderLabelWithFont:(id)arg1 andTextAlignment:(int)arg2;
- (int)textAlignment;
- (id)createTextLabelWithTextColor:(id)arg1;
- (void)setAtomStyle:(int)arg1;
- (int)atomStyle;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forLabel:(id)arg2;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void)setIcon:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (BOOL)isEditing;
- (void)setContentVerticalAlignment:(int)arg1;
- (void)setProgress:(float)arg1;
- (id)_style;
- (id)_scriptingInfo;
- (BOOL)canBecomeFirstResponder;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)_canDrawContent;
- (void)_encodeBackgroundColorWithCoder:(id)arg1;
- (void)_windowBecameKey;
- (id)backgroundColor;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setMinimumFontSize:(float)arg1;
- (float)minimumFontSize;
- (id)font;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)undoManager;
- (id)text;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isReallyFirstResponder;
- (void)configureFromScriptTextField:(id)arg1;

@end
