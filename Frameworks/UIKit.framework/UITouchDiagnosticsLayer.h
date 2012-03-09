/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIBezierPath;

@interface UITouchDiagnosticsLayer : UIView  {
    struct __CFArray { } *_eventQueue;
    UIBezierPath *_hitRectsPath;
    UIBezierPath *_customHitRectsPath;
    UIBezierPath *_chargesPath;
    BOOL _trackTouchEvents;
    BOOL _displayTouchEvents;
    BOOL _displayHitRects;
    BOOL _displayChargeMap;
}


- (void)dealloc;
- (void)diagnoseEvent:(struct __GSEvent { }*)arg1;
- (void)drawChargeMap;
- (void)_addLayerHitRects:(id)arg1 toPath:(id)arg2 customPath:(id)arg3;
- (BOOL)layerRespondsToEvents:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (void)refreshHitRects;
- (void)setDisplayChargeMap:(BOOL)arg1;
- (void)setDisplayTouchEvents:(BOOL)arg1;
- (void)setDisplayHitRects:(BOOL)arg1;
- (void)setTrackTouchEvents:(BOOL)arg1;
- (void)tearDown;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
