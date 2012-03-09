/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSKnownKeysMappingStrategy : NSObject <NSCoding, NSFastEnumeration> {
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)length;
- (const id*)keys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForKeys:(id)arg1;
- (unsigned int)fastIndexForKnownKey:(id)arg1;
- (id)initForKeys:(const id*)arg1 count:(unsigned int)arg2;
- (unsigned int)indexForKey:(id)arg1;

@end
