/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

@class NSString, NSArray;

@interface XPCDecoder : NSCoder  {
    void *_encoding;
    void *_currentObject;
    struct __CFDictionary { } *_decodedObjects;
    struct __CFSet { } *_requestedDecodedObjects;
    NSArray *_allowedClasses;
    NSString *_errorDescription;
}

@property(copy) NSString * errorDescription;
@property(retain) NSArray * allowedClasses;

+ (id)rootObjectForEncoding:(void*)arg1 allowedClasses:(id)arg2;
+ (id)rootObjectForEncoding:(void*)arg1 allowedClasses:(id)arg2 errorDescription:(id)arg3;
+ (id)rootObjectForEncoding:(void*)arg1;

- (void)setAllowedClasses:(id)arg1;
- (id)allowedClasses;
- (void)dealloc;
- (void)_verifyCurrentObject;
- (void)setErrorDescription:(id)arg1;
- (BOOL)_classIsAllowed:(Class)arg1;
- (id)errorDescription;
- (id)initWithEncoding:(void*)arg1;
- (int)versionForClassName:(id)arg1;
- (id)decodeObject;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned int*)arg2;
- (int)decodeIntegerForKey:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;

@end
