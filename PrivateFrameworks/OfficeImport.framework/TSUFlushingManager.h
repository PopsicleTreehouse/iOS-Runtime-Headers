/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUPointerKeyDictionary, <TSUFlushable>, TSUMemoryWatcher, NSThread, NSCondition, TSURetainedPointerKeyDictionary;

@interface TSUFlushingManager : NSObject  {
    TSURetainedPointerKeyDictionary *_objects;
    struct set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerFlushingOrderLess,std::allocator<TSUFlushableObjectInfo*> > { struct _Rb_tree<TSUFlushableObjectInfo*,TSUFlushableObjectInfo*,std::_Identity<TSUFlushableObjectInfo*>,TSUFlushableObjectInfoPointerFlushingOrderLess,std::allocator<TSUFlushableObjectInfo*> > { 
            struct _Rb_tree_impl<TSUFlushableObjectInfoPointerFlushingOrderLess,false> { 
                struct TSUFlushableObjectInfoPointerFlushingOrderLess { } _M_key_compare; 
                struct _Rb_tree_node_base { 
                    int _M_color; 
                    struct _Rb_tree_node_base {} *_M_parent; 
                    struct _Rb_tree_node_base {} *_M_left; 
                    struct _Rb_tree_node_base {} *_M_right; 
                } _M_header; 
                unsigned int _M_node_count; 
            } _M_impl; 
        } x1; } *_sortedObjects;
    struct set<TSUFlushableObjectInfo*,TSUFlushableObjectInfoPointerTimeStampLess,std::allocator<TSUFlushableObjectInfo*> > { struct _Rb_tree<TSUFlushableObjectInfo*,TSUFlushableObjectInfo*,std::_Identity<TSUFlushableObjectInfo*>,TSUFlushableObjectInfoPointerTimeStampLess,std::allocator<TSUFlushableObjectInfo*> > { 
            struct _Rb_tree_impl<TSUFlushableObjectInfoPointerTimeStampLess,false> { 
                struct TSUFlushableObjectInfoPointerTimeStampLess { } _M_key_compare; 
                struct _Rb_tree_node_base { 
                    int _M_color; 
                    struct _Rb_tree_node_base {} *_M_parent; 
                    struct _Rb_tree_node_base {} *_M_left; 
                    struct _Rb_tree_node_base {} *_M_right; 
                } _M_header; 
                unsigned int _M_node_count; 
            } _M_impl; 
        } x1; } *_sortedNewObjects;
    TSUPointerKeyDictionary *_inactiveObjects;
    unsigned int _clock;
    BOOL _alwaysFlushing;
    BOOL _stopFlushing;
    BOOL _stopFlushingWhenQueueEmpty;
    BOOL _isFlushing;
    <TSUFlushable> *_flushingObject;
    BOOL _isWaitingForFlush;
    NSCondition *_cond;
    NSCondition *_isFlushingCond;
    TSUMemoryWatcher *_memoryWatcher;
    NSThread *_bgThread;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;
+ (id)_singletonAlloc;

- (unsigned int)retainCount;
- (id)retain;
- (void)addObject:(id)arg1;
- (void)release;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)autorelease;
- (id)init;
- (void)dealloc;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)removeObject:(id)arg1;
- (void)protectObject:(id)arg1;
- (void)stopProtectingObject:(id)arg1;
- (void)doneWithObject:(id)arg1;
- (void)unsafeToFlush:(id)arg1;
- (void)safeToFlush:(id)arg1 wasAccessed:(BOOL)arg2;
- (void)memoryLevelIncreased:(int)arg1 was:(int)arg2;
- (void)memoryLevelDecreased:(int)arg1 was:(int)arg2;
- (BOOL)controlsActiveObject:(id)arg1;
- (BOOL)controlsInactiveObject:(id)arg1;
- (void)_startFlushingObjects;
- (void)_stopFlushingObjects;
- (void)advanceClock;
- (void)_didUseObject:(id)arg1;
- (struct TSUFlushableObjectInfo { id x1; int x2; int x3; int x4; unsigned int x5[2]; }*)eraseInfoForObject:(id)arg1;
- (void)insertObjectInfo:(struct TSUFlushableObjectInfo { id x1; int x2; int x3; int x4; unsigned int x5[2]; }*)arg1;
- (void)_flushAllEligible;
- (void)_backgroundThread:(id)arg1;
- (BOOL)isNewObject:(struct TSUFlushableObjectInfo { id x1; int x2; int x3; int x4; unsigned int x5[2]; }*)arg1;
- (void)transferNewObjects;

@end
