/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSBezierPathStub;

@interface MFCocoaRegion : MFRegion  {
    NSBezierPathStub *m_path;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_bounds;
}


- (void)dealloc;
- (int)setClip:(id)arg1 :(int)arg2;
- (int)fill:(id)arg1 :(id)arg2;
- (int)frame:(id)arg1 :(id)arg2;
- (int)invert:(id)arg1;
- (id)initWithRects:(id)arg1 :(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 :(id)arg3;
- (id)initWithPath:(id)arg1 :(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;

@end
