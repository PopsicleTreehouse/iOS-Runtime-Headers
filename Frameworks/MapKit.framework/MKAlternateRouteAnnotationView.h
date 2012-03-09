/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, UIImageView, UILabel;

@interface MKAlternateRouteAnnotationView : MKAnnotationView <MKCountdownTimerObserver> {
    UIImageView *_imageView;
    UILabel *_label;
    int _orientation;
    BOOL _routeSelected;
    float _stretch;
}

@property(readonly) float significantArea;
@property(readonly) UILabel * label;
@property(retain) NSString * title;
@property int orientation;

+ (id)_imageForType:(int)arg1 routeSelected:(BOOL)arg2;
+ (unsigned int)_selectedZIndex;
+ (unsigned int)_zIndex;

- (void)dealloc;
- (void)setOrientation:(int)arg1;
- (id)label;
- (id)image;
- (id)title;
- (int)orientation;
- (void)setTitle:(id)arg1;
- (void)setImage:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForAlternateOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bubbleFrameForType:(int)arg1;
- (void)_layoutLabel;
- (void)_updateAnchorPoint;
- (void)_updateCalloutOffset;
- (id)initWithRoute:(id)arg1;
- (float)significantArea;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })significantFrameForOrientation:(int)arg1;
- (void)setRouteSelected:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantFrame;
- (void)updateCountdowns;
- (unsigned int)_orientationCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;

@end
