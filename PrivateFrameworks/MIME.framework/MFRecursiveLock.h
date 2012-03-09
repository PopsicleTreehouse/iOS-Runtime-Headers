/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (BOOL)lockBeforeDate:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)isLockedByMe;
- (void)unlock;
- (void)lock;
- (BOOL)tryLock;

@end
