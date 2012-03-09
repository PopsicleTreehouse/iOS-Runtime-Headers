/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary  {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (id)initWithCapacity:(unsigned int)arg1;
+ (id)alloc;
+ (id)init;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
+ (id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned int)arg3;
+ (id)initWithDictionary:(id)arg1;
+ (id)initWithCoder:(id)arg1;
+ (id)initForKeys:(id)arg1;
+ (id)initWithSearchStrategy:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;

- (unsigned int)count;
- (unsigned int)retainCount;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)objectForKey:(id)arg1;
- (id)retain;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getKeys:(id*)arg1;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (void)getObjects:(id*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)keyEnumerator;
- (Class)classForCoder;
- (id)objectEnumerator;
- (const id*)values;
- (id)allValues;
- (void)setValues:(id*)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)allKeys;
- (void)removeObjectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)valueAtIndex:(unsigned int)arg1;
- (void)_recount;
- (unsigned int)_countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3 forKeys:(BOOL)arg4;
- (void)setValue:(id)arg1 atIndex:(unsigned int)arg2;
- (unsigned int)_valueCountByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (const id)mapping;
- (void)_setValues:(id*)arg1 retain:(BOOL)arg2;
- (const id*)knownKeyValuesPointer;

@end
