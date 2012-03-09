/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKOverlayContainerViewDelegate>, NSMutableSet, NSArray, NSMutableArray, NSMapTable;

@interface MKOverlayContainerView : UIView  {
    NSMutableSet *_overlaySet;
    NSMutableArray *_overlays;
    NSMapTable *_overlayToView;
    NSMutableArray *_views;
    NSMutableArray *_viewClusters;
    <MKOverlayContainerViewDelegate> *_delegate;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _mapTransform;
}

@property <MKOverlayContainerViewDelegate> * delegate;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } mapTransform;
@property(readonly) NSArray * overlays;


- (void)dealloc;
- (void)setDrawingEnabled:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)swapViewsWithOverlay:(id)arg1 andOverlay:(id)arg2;
- (void)_addInternalOverlay:(id)arg1 withView:(id)arg2;
- (void)visibleRectChanged;
- (void)_coalesceAdjacentClusters;
- (id)_considerAddingOverlayView:(id)arg1 inAddRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_removeOverlayView:(id)arg1 forOverlay:(id)arg2 coalesce:(BOOL)arg3;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithFractionOfVisible:(double)arg1;
- (void)_configureAndAddView:(id)arg1 forOverlay:(id)arg2;
- (void)_insertOverlayView:(id)arg1 forOverlay:(id)arg2 atIndex:(int)arg3;
- (int)_viewIndexForOverlayView:(id)arg1;
- (id)overlays;
- (id)viewForOverlay:(id)arg1;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned int)arg1 withOverlayAtIndex:(unsigned int)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })mapTransform;
- (void)setMapTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setLevelCrossFade:(BOOL)arg1;
- (void)addAndRemoveOverlayViews;

@end
