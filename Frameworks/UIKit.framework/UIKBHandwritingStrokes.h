/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingStrokes : NSObject <NSCopying> {
    struct KBStrokeList { struct COWQueue<writing_point16_t> { unsigned int x_1_1_1; unsigned int x_1_1_2; struct SharedElements {} *x_1_1_3; } x1; struct COWQueue<int> { unsigned int x_2_1_1; unsigned int x_2_1_2; struct SharedElements {} *x_2_1_3; } x2; int x3; } *_strokes;
}


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (const struct KBStrokeList { struct COWQueue<writing_point16_t> { unsigned int x_1_1_1; unsigned int x_1_1_2; struct SharedElements {} *x_1_1_3; } x1; struct COWQueue<int> { unsigned int x_2_1_1; unsigned int x_2_1_2; struct SharedElements {} *x_2_1_3; } x2; int x3; }*)strokes;
- (id)initWithStrokes:(struct KBStrokeList { struct COWQueue<writing_point16_t> { unsigned int x_1_1_1; unsigned int x_1_1_2; struct SharedElements {} *x_1_1_3; } x1; struct COWQueue<int> { unsigned int x_2_1_1; unsigned int x_2_1_2; struct SharedElements {} *x_2_1_3; } x2; int x3; }*)arg1;

@end
