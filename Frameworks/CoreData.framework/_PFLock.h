/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFLock : NSObject <NSLocking> {
    int _cd_rc;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    struct _opaque_pthread_t { long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[596]; } *_owner;
    unsigned int _count;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (void)unlock;
- (void)lock;
- (BOOL)tryLock;

@end
