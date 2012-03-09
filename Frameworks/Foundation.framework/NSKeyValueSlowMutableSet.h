/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableSet : NSKeyValueMutableSet  {
    NSKeyValueGetter *_valueGetter;
    NSKeyValueSetter *_valueSetter;
    BOOL _treatNilValuesLikeEmptySets;
    BOOL _padding[3];
}

+ (struct { unsigned int x1; id x2[4]; }*)_proxyNonGCPoolPointer;

- (id)_createMutableSetValueWithSelector:(SEL)arg1;
- (id)_setValueWithSelector:(SEL)arg1;
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (unsigned int)count;
- (void)addObject:(id)arg1;
- (void)setSet:(id)arg1;
- (id)member:(id)arg1;
- (void)unionSet:(id)arg1;
- (id)objectEnumerator;
- (void)minusSet:(id)arg1;
- (void)intersectSet:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;

@end
