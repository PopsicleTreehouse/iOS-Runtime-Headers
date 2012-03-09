/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUFileDataRepresentation;

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {
    SFUFileDataRepresentation *mFileRepresentation;
    int mFd;
}


- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)path;
- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (BOOL)isEncrypted;
- (BOOL)isReadable;
- (BOOL)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (long long)dataLength;

@end
