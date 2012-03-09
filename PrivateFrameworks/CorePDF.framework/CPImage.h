/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPImage : CPGraphicObject  {
    struct CPPDFImage { struct CPPDFObject { 
            struct CGRect { 
                struct CGPoint { 
                    float x; 
                    float y; 
                } origin; 
                struct CGSize { 
                    float width; 
                    float height; 
                } size; 
            } bounds; 
            unsigned int clipIndex; 
            unsigned int insertionOrder; 
        } x1; unsigned int x2; struct CGPDFStream {} *x3; int x4; struct CGImage {} *x5; struct CGAffineTransform { 
            float a; 
            float b; 
            float c; 
            float d; 
            float tx; 
            float ty; 
        } x6; struct CGPDFDictionary {} *x7; float x8; struct CGColor {} *x9; } *imageData;
    BOOL renderedBoundsComputed;
}


- (void)recomputeRenderedBounds;
- (void)accept:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })renderedBounds;
- (long)zOrder;
- (id)initWithPDFImage:(struct CPPDFImage { struct CPPDFObject { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned int x2; struct CGPDFStream {} *x3; int x4; struct CGImage {} *x5; struct CGAffineTransform { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; float x_6_1_5; float x_6_1_6; } x6; struct CGPDFDictionary {} *x7; float x8; struct CGColor {} *x9; }*)arg1;
- (BOOL)isVisible;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CPPDFImage { struct CPPDFObject { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned int x2; struct CGPDFStream {} *x3; int x4; struct CGImage {} *x5; struct CGAffineTransform { float x_6_1_1; float x_6_1_2; float x_6_1_3; float x_6_1_4; float x_6_1_5; float x_6_1_6; } x6; struct CGPDFDictionary {} *x7; float x8; struct CGColor {} *x9; }*)imageData;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
