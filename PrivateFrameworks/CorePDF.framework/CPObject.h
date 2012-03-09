/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPPage, CPObject, NSMutableArray, CPDocument;

@interface CPObject : NSObject <NSCopying> {
    CPObject *parent;
    NSMutableArray *children;
    CPDocument *document;
    CPPage *page;
    long zOrder;
}


- (unsigned int)indexOf:(id)arg1;
- (unsigned int)count;
- (BOOL)isEqual:(id)arg1;
- (void)performSelector:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (unsigned int)countOfClass:(Class)arg1;
- (id)lastSibling;
- (id)firstSibling;
- (void)removeLastChild;
- (void)promoteChildren;
- (void)childrenOfClass:(Class)arg1 into:(id)arg2;
- (id)childrenOfClass:(Class)arg1;
- (id)childrenNotOfClass:(Class)arg1;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 last:(BOOL)arg4;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (void)mapSafely:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (void)map:(SEL)arg1 target:(id)arg2;
- (void)map:(SEL)arg1 target:(id)arg2 last:(BOOL)arg3;
- (id)descendantsOfClass:(Class)arg1;
- (id)shallowDescendantsOfClass:(Class)arg1;
- (void)disposeDescendants;
- (id)copyWithoutChildren;
- (id)ancestorOfClass:(Class)arg1;
- (id)descendantsOfClass:(Class)arg1 deep:(BOOL)arg2;
- (void)descendantsOfClass:(Class)arg1 to:(id)arg2;
- (id)descendantsOfClass:(Class)arg1 omitTraversing:(Class)arg2;
- (id)firstDescendantOfClass:(Class)arg1;
- (id)lastDescendantOfClass:(Class)arg1;
- (unsigned int)countOfFirstDescendantsOfClass:(Class)arg1;
- (void)setZOrder:(long)arg1;
- (void)clearCachedInfo;
- (id)firstDescendantsOfClass:(Class)arg1;
- (void)accept:(id)arg1;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (void)recomputeZOrder;
- (void)updateZOrder:(long)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addChildrenOf:(id)arg1;
- (id)takeChildren;
- (id)takeChildrenAmong:(id)arg1;
- (long)zOrder;
- (void)removeFirstChild;
- (void)remove;
- (void)setPage:(id)arg1;
- (id)page;
- (id)document;
- (void)removeAll;
- (id)previousSibling;
- (id)lastChild;
- (id)nextSibling;
- (id)firstChild;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (id)children;
- (void)add:(id)arg1;
- (void)remove:(id)arg1;
- (int)depth;
- (void)setDocument:(id)arg1;
- (void)addChildren:(id)arg1;
- (id)childAtIndex:(unsigned int)arg1;
- (id)parent;
- (void)setParent:(id)arg1;

@end
