/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableData;

@interface MFBitmap : NSObject  {
    int m_width;
    int m_height;
    unsigned int m_bitsPerPixel;
    int m_compression;
    BOOL m_isOS2;
    unsigned int m_infoHeaderSize;
    unsigned int m_paletteSize;
    NSMutableData *m_bmpData;
}


- (id)init;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)initWithDIBitmap:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(int)arg4;
- (id)initWithDIBitmap:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(const char *)arg4 :(unsigned int)arg5 :(int)arg6;
- (id)initWithBitmap:(id)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(int)arg5 :(const char *)arg6 :(unsigned int)arg7;
- (void)setMonoPalette:(id)arg1;
- (void)writePaletteEntry:(id)arg1 :(int)arg2;
- (void)setNull;
- (BOOL)parseHeader:(const char *)arg1 :(unsigned int)arg2;
- (void)appendDIBPalette:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(int)arg4;
- (BOOL)processDIBHeader:(id)arg1 :(const char *)arg2 :(unsigned int)arg3 :(int)arg4;
- (void)writeFileHeader;
- (void)writeInfoHeader;

@end
