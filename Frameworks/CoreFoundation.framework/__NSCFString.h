/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFString : NSMutableString  {
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)substringWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withString:(id)arg2;
- (void)appendFormat:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (void)appendString:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (id)retain;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (void)setString:(id)arg1;
- (unsigned int)length;
- (const char *)UTF8String;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)appendCharacters:(const unsigned short*)arg1 length:(unsigned int)arg2;
- (BOOL)_isCString;
- (unsigned int)smallestEncoding;
- (unsigned int)fastestEncoding;
- (id)_newSubstringWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 zone:(struct _NSZone { }*)arg2;
- (const char *)_fastCStringContents:(BOOL)arg1;
- (const unsigned short*)_fastCharacterContents;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)isNSString__;
- (unsigned int)cStringLength;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)getLineStart:(unsigned int*)arg1 end:(unsigned int*)arg2 contentsEnd:(unsigned int*)arg3 forRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)finalize;
- (Class)classForCoder;
- (void)insertString:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)getCString:(char *)arg1 maxLength:(unsigned int)arg2 encoding:(unsigned int)arg3;
- (unsigned int)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (const char *)cString;
- (BOOL)hasSuffix:(id)arg1;
- (BOOL)hasPrefix:(id)arg1;
- (void)deleteCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (const char *)cStringUsingEncoding:(unsigned int)arg1;

@end
