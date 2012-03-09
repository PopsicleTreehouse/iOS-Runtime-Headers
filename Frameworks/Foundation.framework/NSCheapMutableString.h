/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCheapMutableString : NSMutableString  {
    union { 
        unsigned short *fat; 
        char *thin; 
    } contents;
    struct { 
        unsigned int isFat : 1; 
        unsigned int freeWhenDone : 1; 
        unsigned int refs : 30; 
    } flags;
    unsigned int numCharacters;
    void *_reserved;
}


- (void)setContentsNoCopy:(void*)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3 isUnicode:(BOOL)arg4;
- (const char *)lossyCString;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (void)dealloc;
- (unsigned int)fastestEncoding;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)cStringLength;
- (void)finalize;
- (const char *)cString;
- (BOOL)getBytes:(void*)arg1 maxLength:(unsigned int)arg2 usedLength:(unsigned int*)arg3 encoding:(unsigned int)arg4 options:(unsigned int)arg5 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6 remainingRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg7;

@end
