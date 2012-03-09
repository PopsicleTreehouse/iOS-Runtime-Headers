/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPFontKerning : NSObject <CPDisposable> {
    struct __CFData { } *kernTable;
    char *dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary { } *kernDictionary;
    BOOL override;
    BOOL valid;
}


- (void)dealloc;
- (id)initWithCGFont:(struct CGFont { }*)arg1;
- (short)readShort;
- (struct __CFDictionary { }*)createKernTable;
- (id)initWithKernData:(struct __CFData { }*)arg1;
- (void)doKerningPair;
- (void)doSubtableFormat0;
- (void)doSubtableFormat1;
- (void)doSubtableFormat2;
- (void)doSubtableFormat3;
- (void)doOTSubtable;
- (void)doTTSubtable;
- (void)doTable;
- (unsigned char)readByte;
- (unsigned int)readUnsignedLong;
- (unsigned short)readUnsignedShort;
- (void)finalize;
- (void)dispose;

@end
