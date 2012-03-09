/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLMoviePlayerControllerDelegate>, NSMutableArray;

@interface PLMoviePlayerController : UIMoviePlayerController  {
    NSMutableArray *_delegateStack;
    <PLMoviePlayerControllerDelegate> *_playerDelegate;
}

+ (void)reset;
+ (id)sharedMoviePlayerController;
+ (void)setVideoIsRemaking:(BOOL)arg1;
+ (void)setMovieWillBecomeReady:(BOOL)arg1;
+ (BOOL)movieWillBecomeReady;

- (void)dealloc;
- (void)setMovieWithPath:(id)arg1;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1 options:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)_updateCurrentDelegate;
- (void)removeNextDelegate:(id)arg1;
- (void)addNextDelegate:(id)arg1;

@end
