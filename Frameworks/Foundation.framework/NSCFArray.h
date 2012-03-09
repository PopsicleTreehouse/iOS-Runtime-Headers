/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSCFArray : NSMutableArray  {
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (unsigned int)count;
- (id)objectAtIndex:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)retain;
- (void)addObject:(id)arg1;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)replaceObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withObjects:(id*)arg2 count:(unsigned int)arg3;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)finalize;
- (Class)classForCoder;
- (void)removeObjectsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)exchangeObjectAtIndex:(unsigned int)arg1 withObjectAtIndex:(unsigned int)arg2;
- (void)sortUsingFunction:(int (*)())arg1 context:(void*)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)removeLastObject;
- (void)removeAllObjects;

@end
