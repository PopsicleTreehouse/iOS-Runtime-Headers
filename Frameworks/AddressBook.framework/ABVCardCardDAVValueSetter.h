/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter  {
    BOOL _recordIsGroup;
    BOOL _importingToExistingGroup;
}

@property BOOL recordIsGroup;

+ (struct __CFDictionary { }*)_personToGroupPropertyMap;
+ (int)groupPropertyForPersonProperty:(int)arg1;

- (BOOL)recordIsGroup;
- (BOOL)propertyIsValidForPerson:(unsigned int)arg1;
- (BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (void)setRecordIsGroup:(BOOL)arg1;
- (id)initWithPerson:(void*)arg1 removeExistingProperties:(BOOL)arg2;
- (id)initWithGroup:(void*)arg1 removeExistingProperties:(BOOL)arg2;
- (void*)copyParsedRecordWithSource:(void*)arg1 outRecordType:(unsigned int*)arg2;
- (void)_drainExistingProperties;
- (BOOL)setValue:(void*)arg1 forProperty:(unsigned int)arg2;
- (void*)valueForProperty:(unsigned int)arg1;
- (id)imageData;

@end
