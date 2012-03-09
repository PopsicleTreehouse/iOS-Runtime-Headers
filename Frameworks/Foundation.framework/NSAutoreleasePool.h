/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAutoreleasePool : NSObject  {
    void *_token;
    void *_reserved3;
    void *_reserved2;
    void *_reserved;
}

+ (void)resetTotalAutoreleasedObjects;
+ (unsigned int)totalAutoreleasedObjects;
+ (void)setPoolCountHighWaterResolution:(unsigned int)arg1;
+ (unsigned int)poolCountHighWaterResolution;
+ (void)setPoolCountHighWaterMark:(unsigned int)arg1;
+ (unsigned int)poolCountHighWaterMark;
+ (void)enableFreedObjectCheck:(BOOL)arg1;
+ (void)enableRelease:(BOOL)arg1;
+ (BOOL)autoreleasePoolExists;
+ (unsigned int)topAutoreleasePoolCount;
+ (unsigned int)autoreleasedObjectCount;
+ (void)releaseAllPools;
+ (void)showPools;
+ (void)addObject:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned int)retainCount;
- (id)retain;
- (id)initWithCapacity:(unsigned int)arg1;
- (void)addObject:(id)arg1;
- (oneway void)release;
- (id)autorelease;
- (id)init;
- (void)dealloc;
- (void)drain;

@end
