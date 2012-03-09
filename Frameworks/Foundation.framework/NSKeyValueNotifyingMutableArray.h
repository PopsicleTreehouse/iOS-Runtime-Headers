/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableArray;

@interface NSKeyValueNotifyingMutableArray : NSKeyValueMutableArray  {
    NSMutableArray *_mutableArray;
}

+ (id)_proxyShare;
+ (struct { unsigned int x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)addObject:(id)arg1;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeLastObject;

@end
