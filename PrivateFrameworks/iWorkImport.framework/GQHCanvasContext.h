/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDAffineGeometry, NSMutableString;

@interface GQHCanvasContext : NSObject <GQHContext> {
    GQDAffineGeometry *mGeometry;
    NSMutableString *mFunctionName;
    BOOL mHasFill;
    BOOL mHasStroke;
    struct __CFString { } *mBezierStr;
}


- (void)dealloc;
- (void)translate:(struct CGSize { float x1; float x2; })arg1 state:(id)arg2;
- (float)strokeWidthWithGraphicStyle:(id)arg1;
- (struct GQHPathEndPointInfo { BOOL x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; struct CGPoint { float x_5_1_1; float x_5_1_2; } x5; int x6; })endPointInfoForPath:(struct CGPath { }*)arg1;
- (void)addPathForLineEndStyle:(int)arg1 graphicStyle:(id)arg2 atPoint:(struct CGPoint { float x1; float x2; })arg3 neighboringCP:(struct CGPoint { float x1; float x2; })arg4 filledPath:(struct CGPath {}**)arg5 strokedPath:(struct CGPath {}**)arg6;
- (void)prepareContext:(id)arg1;
- (void)mapStyle:(id)arg1 state:(id)arg2;
- (void)setCGPath:(struct CGPath { }*)arg1 state:(id)arg2;
- (void)mapLineEndFillStyle:(id)arg1 state:(id)arg2;
- (void)mapLineEndStrokeStyle:(id)arg1 state:(id)arg2;
- (void)teardownContext:(id)arg1;
- (void)setContextOpacity:(float)arg1 state:(id)arg2;
- (void)mapFill:(id)arg1 state:(id)arg2;
- (void)mapStroke:(id)arg1 state:(id)arg2;
- (void)setFillColor:(id)arg1 state:(id)arg2;
- (void)setGradient:(id)arg1 state:(id)arg2;
- (void)setImageFill:(struct __CFURL { }*)arg1 srcSize:(struct CGSize { float x1; float x2; })arg2 mode:(int)arg3 state:(id)arg4;
- (void)setStrokeColor:(id)arg1 width:(float)arg2 state:(id)arg3;
- (id)strokeColorWithGraphicStyle:(id)arg1;
- (void)createShapeWithId:(struct __CFString { }*)arg1 path:(id)arg2 geometry:(id)arg3 graphicStyle:(id)arg4 isFloating:(BOOL)arg5 state:(id)arg6;
- (void)setBezierPath:(char *)arg1 state:(id)arg2;
- (void)addScriptTagToHtml:(id)arg1 state:(id)arg2;
- (void)createMaskedImageWithId:(struct __CFString { }*)arg1 path:(id)arg2 geometry:(id)arg3 cropGeometry:(id)arg4 imageBinary:(id)arg5 graphicStyle:(id)arg6 isFloating:(BOOL)arg7 state:(id)arg8;

@end
