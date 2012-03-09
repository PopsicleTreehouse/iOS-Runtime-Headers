/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDParagraph, WMParagraphMapper, OIXMLElement;

@interface WMParagraphMapper : CMMapper  {
    WDParagraph *wdParagraph;
    WMParagraphMapper *mCurrentMapper;
    OIXMLElement *mActiveNode;
    BOOL mIsDeleted;
}

+ (void)mapPlaceholderAt:(id)arg1 rect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withState:(id)arg3;

- (void)dealloc;
- (id)initWithBlock:(id)arg1 parent:(id)arg2;
- (BOOL)isTextFrame;
- (BOOL)containsOfficeArt;
- (void)mapParagraphBodyWithState:(id)arg1;
- (BOOL)isCollapsable:(id)arg1;
- (id)runAtIndex:(int)arg1;
- (void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3;
- (id)activeNode;
- (void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
