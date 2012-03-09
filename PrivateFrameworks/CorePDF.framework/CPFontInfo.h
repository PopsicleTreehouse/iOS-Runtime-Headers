/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPFontInfo : NSObject <CPDisposable> {
    struct __CFData { } *fontData;
    char *dataPtr;
    unsigned int offset;
    unsigned int fontDataLength;
    BOOL valid;
}


- (void)dealloc;
- (id)initWithFontData:(struct __CFData { }*)arg1;
- (BOOL)getDescriptor:(struct { float x1; float x2; unsigned int x3; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_4_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_4_1_2; } x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; }*)arg1;
- (struct __CFData { }*)createKernData;
- (unsigned char)readByte;
- (unsigned int)readUnsignedLong;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })readRect;
- (int)readLong;
- (int)kernUnitsPerEm;
- (void)finalize;
- (void)dispose;
- (float)readFloat;

@end
