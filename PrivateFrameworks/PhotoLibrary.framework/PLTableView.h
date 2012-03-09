/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CAFilter;

@interface PLTableView : UITableView  {
    CAFilter *_blurFilter;
    unsigned int _shouldBlur : 1;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id scrollingEndedCompletion;

}

@property(getter=isScrolling,readonly) BOOL scrolling;
@property(getter=isBlurFilterEnabled) BOOL blurFilterEnabled;
@property(copy) id scrollingEndedCompletion;


- (void)dealloc;
- (BOOL)isScrolling;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1 animated:(BOOL)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (BOOL)isBlurFilterEnabled;
- (void)_removeBlurFilter;
- (void)_setBlurFilterEnabled:(BOOL)arg1;
- (void)setBlurFilterEnabled:(BOOL)arg1;
- (void)setScrollingEndedCompletion:(id)arg1;
- (id)scrollingEndedCompletion;

@end
