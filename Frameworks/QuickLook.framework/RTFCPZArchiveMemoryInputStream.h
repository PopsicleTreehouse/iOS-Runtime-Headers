/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSData;

@interface RTFCPZArchiveMemoryInputStream : NSObject <RTFCPZArchiveInputStream> {
    NSData *mData;
    char *mBytes;
    long long mSize;
}


- (void)dealloc;
- (id)initWithData:(id)arg1;
- (long long)size;
- (void)readFromOffset:(long long)arg1 size:(unsigned long)arg2 buffer:(char *)arg3;
- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3 readSize:(unsigned int*)arg4;

@end
