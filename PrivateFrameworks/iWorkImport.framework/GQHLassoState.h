/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQHXML;

@interface GQHLassoState : GQHState  {
    GQHXML *mNavigation;
    int mSheetCount;
    int mTableCount;
    struct __CFString { } *mCssUri;
    struct __CFString { } *mCurrentSheetFilename;
    struct __CFString { } *mCurrentSheetUri;
    struct CGPoint { 
        float x; 
        float y; 
    } mMaxCanvasPoint;
    unsigned int mCurrentDrawableZOrder;
    unsigned int mZOrderedDrawableCount;
    struct __CFDictionary { } *mDrawableUidToCssZOrderClassMap;
    struct __CFArray { } *mSheetCssUriList;
    struct __CFString { } *mSheetCssFilename;
    struct __CFString { } *mSheetOneCss;
    struct __CFString { } *mSheetOneLastCSS;
    char *mFirstWorkspaceName;
    boolmIsProgressiveMode;
}


- (void)dealloc;
- (id)initWithState:(id)arg1;
- (struct __CFString { }*)makeInlineStyle:(struct __CFString { }*)arg1;
- (void)addCachedStyle:(struct __CFString { }*)arg1;
- (void)writeAnchorInNavigationPage:(char *)arg1;
- (void)beginNewSheet:(const char *)arg1 processorState:(id)arg2;
- (int)endSheet;
- (struct CGPoint { float x1; float x2; })maxCanvasPoint;
- (BOOL)inProgressiveMode;
- (void)writeIndexPageWithDocumentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)writeNavigationPage:(id)arg1;
- (struct __CFString { }*)cssZOrderClassForDrawableUid:(const char *)arg1;
- (unsigned int)currentDrawableZOrder;
- (void)addStyle:(struct __CFString { }*)arg1 className:(struct __CFString { }*)arg2 srcStyle:(id)arg3;
- (BOOL)finishMainHtml;
- (BOOL)drawablesNeedCssZOrdering;
- (void)addedDrawableWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
