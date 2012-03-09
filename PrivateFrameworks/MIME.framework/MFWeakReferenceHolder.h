/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class <NSObject>, MFWeakSet, NSLock;

@interface MFWeakReferenceHolder : NSObject  {
    <NSObject> *_reference;
    NSLock *_lock;
    MFWeakSet *_observers;
}

+ (id)weakReferenceWithObject:(id)arg1 referenceObserver:(id)arg2;
+ (id)weakReferenceWithObject:(id)arg1;

- (void)removeReferenceObserver:(id)arg1;
- (id)retainedReference;
- (id)init;
- (void)dealloc;
- (void)_override_release;
- (id)_initWithObject:(id)arg1;
- (void)_addObserver:(id)arg1;

@end
