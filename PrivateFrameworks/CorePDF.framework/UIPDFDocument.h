/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class UIPDFPageImageCache, NSString, UIPDFPage;

@interface UIPDFDocument : NSObject  {
    struct CGPDFDocument { } *_cgDocument;
    UIPDFPage **_pageArray;
    unsigned int _numberOfPages;
    float _cachedWidth;
    NSString *_documentName;
    UIPDFPageImageCache *_pageImageCache;
    unsigned int _imageCacheCount;
    unsigned int _imageCacheLookAhead;
    int _lock;
    int _imageCacheLock;
}

@property(retain) UIPDFPageImageCache * pageImageCache;
@property(readonly) unsigned int numberOfPages;

+ (id)documentNamed:(id)arg1;

- (void)dealloc;
- (float)sumWidth;
- (float)sumHeight;
- (id)pageImageCache;
- (void)setPageImageCache:(id)arg1;
- (struct CGPDFDocument { }*)copyCGPDFDocument;
- (void)_clearCachedState;
- (void)setCGPDFDocument:(struct CGPDFDocument { }*)arg1;
- (void)setImageCacheCount:(unsigned int)arg1 lookAhead:(unsigned int)arg2;
- (void)purgePagesBefore:(unsigned int)arg1;
- (id)initWithCGPDFDocument:(struct CGPDFDocument { }*)arg1;
- (id)pageAtIndex:(unsigned int)arg1;
- (id)initWithURL:(id)arg1;
- (unsigned int)numberOfPages;
- (float)maxHeight;
- (float)maxWidth;

@end
