/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject, NSKeyValueProperty, NSPointerArray;

@interface NSKeyValueObservance : NSWeakCallback  {
    int _retainCountMinusOne;
    NSObject *_observer;
    NSKeyValueProperty *_property;
    unsigned int _options;
    void *_context;
    NSObject *_originalObservable;
    unsigned int _cachedUnrotatedHashComponent;
    BOOL _cachedIsShareable;
    NSPointerArray *_observationInfos;
}


- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4 originalObservable:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (id)description;
- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;

@end
