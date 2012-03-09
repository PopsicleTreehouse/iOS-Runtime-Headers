/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSCache : NSObject  {
    id _delegate;
    void *_private[5];
    void *_reserved;
}


- (void)setName:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1;
- (unsigned int)countLimit;
- (void)setCountLimit:(unsigned int)arg1;
- (unsigned int)totalCostLimit;
- (void)setTotalCostLimit:(unsigned int)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned int)arg3;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)finalize;
- (id)name;
- (void)removeObjectForKey:(id)arg1;
- (id)delegate;
- (void)removeAllObjects;
- (void)setDelegate:(id)arg1;

@end
