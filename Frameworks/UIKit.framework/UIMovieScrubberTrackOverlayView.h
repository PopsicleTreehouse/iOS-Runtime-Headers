/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView;

@interface UIMovieScrubberTrackOverlayView : UIView  {
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _startValue;
    double _endValue;
    UIView *_leftFillView;
    UIView *_rightFillView;
    UIView *_innerShadowView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _leftFillFrame;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _rightFillFrame;
    unsigned int _editingHandle;
    unsigned int _editing : 1;
    unsigned int _zoomed : 1;
}


- (void)_updateRightFill;
- (void)_updateLeftFill;
- (void)_clampValueAndLayout;
- (void)setIsZoomed:(BOOL)arg1;
- (void)setEndValue:(double)arg1;
- (void)setEditingHandle:(int)arg1;
- (void)setStartValue:(double)arg1;
- (void)animateFillFramesAway;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (void)setValue:(double)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
