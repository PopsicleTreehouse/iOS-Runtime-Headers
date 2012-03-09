/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSAffineTransform;

@interface MFCocoaDeviceDriver : NSObject <MFDeviceDriver> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_canvas;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_viewBox;
    NSAffineTransform *m_viewBoxTransform;
    NSAffineTransform *m_worldToDeviceTransform;
    NSAffineTransform *m_combinedTransform;
}

+ (int)getROP:(id)arg1;

- (void)dealloc;
- (void)setTransform:(id)arg1;
- (id)initWithCanvas:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)textOut:(id)arg1 :(int*)arg2 :(int*)arg3 :(id)arg4;
- (int)arc:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;
- (int)arcTo:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;
- (int)angleArc:(id)arg1 :(int)arg2 :(int)arg3 :(unsigned long)arg4 :(double)arg5 :(double)arg6;
- (int)pie:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;
- (int)chord:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;
- (int)polyPolyline:(id)arg1 :(struct CGPoint { float x1; float x2; }*)arg2 :(int*)arg3 :(int)arg4;
- (int)polygon:(id)arg1 :(struct CGPoint { float x1; float x2; }*)arg2 :(int)arg3;
- (int)polyPolygon:(id)arg1 :(struct CGPoint { float x1; float x2; }*)arg2 :(int*)arg3 :(int)arg4;
- (int)lineTo:(id)arg1 :(double)arg2 :(double)arg3;
- (int)roundRect:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(double)arg6 :(double)arg7;
- (int)ellipse:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;
- (int)bezierTo:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7;
- (int)bezier:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9;
- (int)activateTransform:(id)arg1;
- (int)removeClip;
- (int)patBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(unsigned long)arg6;
- (int)maskBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(id)arg9 :(int)arg10 :(int)arg11 :(unsigned long)arg12 :(struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg13 :(unsigned long)arg14;
- (int)plgBlt:(id)arg1 :(struct CGPoint { float x1; float x2; }*)arg2 :(id)arg3 :(int)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(id)arg8 :(int)arg9 :(int)arg10 :(struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg11 :(unsigned long)arg12;
- (id)createHatchBrush:(id)arg1 :(int)arg2;
- (id)createPatternBrush:(id)arg1 usePaletteForBilevel:(BOOL)arg2;
- (id)createSolidBrush:(id)arg1;
- (id)createNullBrush;
- (id)createPen;
- (id)createPen:(int)arg1 :(long)arg2 :(id)arg3 :(double*)arg4;
- (id)createFont:(int)arg1;
- (id)createFont:(long)arg1 :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15;
- (id)createFontIndirectW:(long)arg1 :(long)arg2 :(long)arg3 :(long)arg4 :(long)arg5 :(bool)arg6 :(bool)arg7 :(bool)arg8 :(int)arg9 :(int)arg10 :(unsigned char)arg11 :(int)arg12 :(int)arg13 :(int)arg14 :(id)arg15 :(id)arg16 :(id)arg17 :(unsigned int)arg18 :(unsigned int)arg19 :(unsigned int)arg20 :(unsigned int)arg21 :(unsigned int)arg22;
- (id)createPath;
- (id)createRegionWithRects:(id)arg1 :(id)arg2;
- (id)createRegionWithPath:(id)arg1;
- (id)createDIBitmap:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(int)arg4;
- (id)createDIBitmap:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(const char *)arg4 :(unsigned int)arg5 :(int)arg6;
- (id)createBitmap:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned int)arg7;
- (int)extTextOut:(id)arg1 :(int*)arg2 :(int*)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int*)arg10 :(int)arg11;
- (void)drawBezierPath:(id)arg1 dc:(id)arg2 fill:(BOOL)arg3 stroke:(BOOL)arg4;
- (int)polyline:(id)arg1 :(struct CGPoint { float x1; float x2; }*)arg2 :(int)arg3;
- (int)rectangle:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5;
- (void)concatTransforms;
- (void)updateViewBoxTransform;
- (int)stretchBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(int)arg10 :(unsigned long)arg11 :(struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg12 :(unsigned long)arg13;
- (int)bitBlt:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(id)arg6 :(int)arg7 :(int)arg8 :(unsigned long)arg9 :(struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg10 :(unsigned long)arg11;
- (int)setViewBox:(double)arg1 :(double)arg2 :(double)arg3 :(double)arg4;
- (int)excludeClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)intersectClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)setMetaRgn;

@end
