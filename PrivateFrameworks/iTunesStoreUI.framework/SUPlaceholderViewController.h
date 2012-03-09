/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SULoadingView, SUGradient;

@interface SUPlaceholderViewController : SUViewController  {
    SUGradient *_backgroundGradient;
    SUGradient *_defaultBackgroundGradient;
    BOOL _hideLoadingView;
    SULoadingView *_loadingView;
    BOOL _shouldShowLoadingView;
}

@property(copy) SUGradient * backgroundGradient;
@property(copy) SUGradient * defaultBackgroundGradient;
@property(readonly) SULoadingView * loadingView;
@property BOOL shouldShowLoadingView;


- (id)init;
- (void)dealloc;
- (void)setLoading:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldShowLoadingView;
- (id)defaultBackgroundGradient;
- (void)setShouldShowLoadingView:(BOOL)arg1;
- (void)setDefaultBackgroundGradient:(id)arg1;
- (id)_newURLBagBackgroundGradient;
- (void)_reloadBackgroundGradient;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)setBackgroundGradient:(id)arg1;
- (void)parentViewControllerHierarchyDidChange;
- (id)loadingView;
- (id)backgroundGradient;
- (id)copyArchivableContext;

@end
