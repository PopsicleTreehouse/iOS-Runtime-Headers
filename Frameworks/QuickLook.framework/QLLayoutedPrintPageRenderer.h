/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableArray, UIWebPaginationInfo;

@interface QLLayoutedPrintPageRenderer : QLPrintPageRenderer  {
    NSMutableArray *_nodes;
    UIWebPaginationInfo *_paginationInfo;
}


- (void)dealloc;
- (void)drawContentForPageAtIndex:(int)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (int)numberOfPages;
- (id)_currentNodes;
- (id)_htmlPageXPath;

@end
