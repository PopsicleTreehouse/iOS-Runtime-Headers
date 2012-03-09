/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSMutableDictionary, <UINavigationControllerDelegate><UIVideoEditorControllerDelegate>;

@interface UIVideoEditorController : UINavigationController  {
    int _previousStatusBarStyle;
    NSMutableDictionary *_properties;
    struct { 
        unsigned int visible : 1; 
        unsigned int isCleaningUp : 1; 
        unsigned int didRevertStatusBar : 1; 
    } _flags;
}

@property <UINavigationControllerDelegate><UIVideoEditorControllerDelegate> * delegate;
@property(copy) NSString * videoPath;
@property double videoMaximumDuration;
@property unsigned int videoQuality;

+ (BOOL)canEditVideoAtPath:(id)arg1;

- (id)init;
- (void)setVideoPath:(id)arg1;
- (id)videoPath;
- (void)editVideoViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)editVideoViewController:(id)arg1 didTrimVideoWithOptions:(id)arg2;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)_setupControllers;
- (BOOL)_didRevertStatusBar;
- (void)_setProperties:(id)arg1;
- (void)setVideoQuality:(unsigned int)arg1;
- (unsigned int)videoQuality;
- (void)setVideoMaximumDuration:(double)arg1;
- (double)videoMaximumDuration;
- (void)_autoDismiss;
- (id)_createInitialController;
- (void)_removeAllChildren;
- (void)_initializeProperties;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (id)_valueForProperty:(id)arg1;
- (id)_properties;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillUnload;

@end
