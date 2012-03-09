/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLock;

@interface GEOCache : NSCache  {
    NSLock *_hotseatLock;
    void *_hotseatCache;
    unsigned long long _hotseatTouch;
    unsigned int _minCapacity;
    BOOL _caresAboutEvictions;
}

@property(readonly) unsigned int minCapacity;


- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned int)arg3;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (unsigned int)minCapacity;
- (id)_addHotseatValue:(id)arg1 forKey:(id)arg2;
- (void)_enteredBackground:(id)arg1;
- (id)initWithMinCapacity:(unsigned int)arg1;
- (void)willEvictObject:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setDelegate:(id)arg1;

@end
