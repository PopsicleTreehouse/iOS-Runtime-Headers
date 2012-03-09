/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIPageCurlState, UIView, NSMutableArray, NSNumber;

@interface _UIPageCurl : NSObject  {
    int _spineLocation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _contentRect;
    UIView *_contentView;
    _UIPageCurlState *_manualPageCurlState;
    NSMutableArray *_pendingStateQueue;
    NSMutableArray *_activeStateQueue;
    NSMutableArray *_orderedCompletedStates;
    double _delayBetweenSuccessiveAnimations;
    float _pageDiagonalAngle;
    float _pageDiagonalLength;
    float _manualPageCurlMaxDAngle;
}

@property(getter=_isManualPageCurlInProgress,readonly) BOOL _manualPageCurlInProgress;
@property(readonly) NSNumber * _wrappedManualPageCurlDirection;
@property(setter=_setManualPageCurlMaxDAngle:) float _manualPageCurlMaxDAngle;
@property(readonly) int _spineLocation;


- (void)dealloc;
- (void)_setManualPageCurlMaxDAngle:(float)arg1;
- (float)_manualPageCurlMaxDAngle;
- (void)_cancelManualCurlAtLocation:(struct CGPoint { float x1; float x2; })arg1 withSuggestedVelocity:(float)arg2;
- (void)_completeManualCurlAtLocation:(struct CGPoint { float x1; float x2; })arg1 withSuggestedVelocity:(float)arg2;
- (void)_updateManualCurlToLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_enqueueCurlOfType:(int)arg1 fromLocation:(struct CGPoint { float x1; float x2; })arg2 inDirection:(int)arg3 withView:(id)arg4 revealingView:(id)arg5 completion:(id)arg6;
- (BOOL)_isPreviousCurlCompatibleWithCurlOfType:(int)arg1 inDirection:(int)arg2;
- (id)_wrappedManualPageCurlDirection;
- (id)initWithSpineLocation:(int)arg1 andContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 inContentView:(id)arg3;
- (void)_cleanupState:(id)arg1;
- (void)_endManualCurlAtLocation:(struct CGPoint { float x1; float x2; })arg1 withSuggestedVelocity:(float)arg2 shouldComplete:(BOOL)arg3;
- (float)_durationForManualCurlEndAnimationWithSuggestedVelocity:(float)arg1 shouldComplete:(BOOL)arg2;
- (void)_forceCleanupState:(id)arg1 finished:(BOOL)arg2 completed:(BOOL)arg3;
- (void)_updateCurlFromState:(id)arg1 withTime:(float)arg2 radius:(float)arg3 angle:(float)arg4 addingAnimations:(id)arg5;
- (id)_newAnimationForState:(id)arg1 withKeyPath:(id)arg2 duration:(float)arg3 fromValue:(id)arg4;
- (void)_updatedInputsFromState:(id)arg1 forLocation:(struct CGPoint { float x1; float x2; })arg2 time:(float*)arg3 radius:(float*)arg4 angle:(float*)arg5;
- (void)_beginCurlWithState:(id)arg1;
- (struct CGPoint { float x1; float x2; })_referenceLocationForInitialLocation:(struct CGPoint { float x1; float x2; })arg1 direction:(int)arg2;
- (int)_validatedPageCurlTypeForPageCurlType:(int)arg1 inDirection:(int)arg2;
- (id)_animationKeyPaths;
- (float)_inputTimeForProgress:(float)arg1 distanceToTravel:(float)arg2 radius:(float*)arg3 minRadius:(float)arg4 angle:(float)arg5 dAngle:(float)arg6 touchLocation:(struct CGPoint { float x1; float x2; })arg7 state:(id)arg8;
- (void)_fromValue:(float*)arg1 toValue:(float*)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (float)_baseAngleOffsetForState:(id)arg1;
- (float)_distanceToTravelWithCurrentSpineLocation;
- (id)_newCurlFilter;
- (BOOL)_populateFromValue:(float*)arg1 toValue:(float*)arg2 fromState:(id)arg3 forAnimationWithKeyPath:(id)arg4;
- (BOOL)_isManualPageCurlInProgress;
- (void)_pageCurlAnimationDidStop:(id)arg1 withState:(id)arg2;
- (int)_spineLocation;
- (void)_ensureCurlFilterOnLayer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_pageViewFrame:(BOOL)arg1;

@end
