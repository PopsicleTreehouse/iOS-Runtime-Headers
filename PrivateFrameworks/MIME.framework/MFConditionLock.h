/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject> {
    NSString *_name;
    id _delegate;
}

+ (void)initialize;

- (id)initWithName:(id)arg1 condition:(int)arg2 andDelegate:(id)arg3;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (void)unlockWithCondition:(int)arg1;
- (BOOL)lockWhenCondition:(int)arg1 beforeDate:(id)arg2;
- (BOOL)lockBeforeDate:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)isLockedByMe;
- (void)unlock;

@end
