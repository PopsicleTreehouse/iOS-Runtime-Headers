/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView<UIAutoscrollContainer>, NSTimer;

@interface UIAutoscroll : NSObject  {
    id m_target;
    struct CGPoint { 
        float x; 
        float y; 
    } m_point;
    UIView<UIAutoscrollContainer> *m_scrollContainer;
    int m_directions;
    double m_repeatInterval;
    NSTimer *m_timer;
    int m_count;
    BOOL m_active;
}

@property(retain) id target;
@property(retain) UIView<UIAutoscrollContainer> * scrollContainer;
@property struct CGPoint { float x1; float x2; } point;
@property int directions;
@property double repeatInterval;
@property int count;
@property BOOL active;


- (void)setTarget:(id)arg1;
- (int)count;
- (id)target;
- (void)dealloc;
- (BOOL)active;
- (void)setDirections:(int)arg1;
- (void)setPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setScrollContainer:(id)arg1;
- (double)repeatInterval;
- (id)scrollContainer;
- (void)timerFired:(id)arg1;
- (struct CGPoint { float x1; float x2; })point;
- (int)directions;
- (BOOL)startAutoscroll:(id)arg1 scrollContainer:(id)arg2 point:(struct CGPoint { float x1; float x2; })arg3 directions:(int)arg4 repeatInterval:(double)arg5;
- (void)setActive:(BOOL)arg1;
- (void)setCount:(int)arg1;
- (void)setRepeatInterval:(double)arg1;
- (void)invalidate;

@end
