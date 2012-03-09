/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPChunk : CPObject  {
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
    BOOL shrinksWithChildren;
    BOOL dirtyBounds;
    unsigned int position;
    long insertionOrder;
}

+ (float)chooseReferenceFontSizeFrom:(float)arg1 and:(float)arg2;

- (void)setChildren:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)accept:(id)arg1;
- (float)opticalLeading;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })adjustToPointBoundary:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)describeBounds;
- (float)clusterGapTo:(id)arg1;
- (float)referenceAdvanceWidth;
- (void)setInsertionOrder:(long)arg1;
- (int)compareAnchorY:(id)arg1;
- (int)compareAnchorX:(id)arg1;
- (int)compareAnchorYDescending:(id)arg1;
- (int)compareX:(id)arg1;
- (int)compareInsertionOrder:(id)arg1;
- (int)compareZ:(id)arg1;
- (int)compareZDescending:(id)arg1;
- (int)compareXBounds:(id)arg1;
- (int)compareLinearBounds:(id)arg1;
- (int)compareY:(id)arg1;
- (int)compareYBounds:(id)arg1;
- (int)compareYDescending:(id)arg1;
- (int)compareYDescendingX:(id)arg1;
- (int)compareChunkPosition:(id)arg1;
- (int)clusterLevelHint;
- (void)orderedInsert:(id)arg1 usingSelector:(SEL)arg2;
- (BOOL)overlapsHorizontallyWith:(id)arg1;
- (BOOL)overlapsVerticallyWith:(id)arg1;
- (BOOL)geometricallyContains:(id)arg1;
- (BOOL)boundsEqualsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 accuracy:(float)arg2;
- (BOOL)shrinksWithChildren;
- (void)setShrinksWithChildren:(BOOL)arg1;
- (BOOL)intersectsChild:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)translateObjectYBy:(float)arg1;
- (void)setChunkPosition:(unsigned int)arg1;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (void)resizeWith:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addChildrenOf:(id)arg1;
- (void)fitBoundsToChildren;
- (id)takeChildren;
- (id)takeChildrenAmong:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })renderedBounds;
- (float)absoluteGapTo:(id)arg1;
- (float)advanceDeltaAfterSpace;
- (struct CGSize { float x1; float x2; })advance;
- (long)insertionOrder;
- (unsigned int)chunkPosition;
- (int)compareTopDescending:(id)arg1;
- (void)setAnchor:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })anchor;
- (void)removeAll;
- (float)fontSize;
- (void)sortUsingSelector:(SEL)arg1;
- (float)center;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)add:(id)arg1;
- (void)remove:(id)arg1;
- (float)bottom;
- (float)left;
- (float)right;
- (float)top;
- (float)rotationAngle;

@end
