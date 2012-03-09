/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLITChapterTOC : MLChapterTOC  {
    unsigned int _totalTimeInMS;
    struct ChapterData { } *_chapterDataRef;
    unsigned int *_picCookieIndexMap;
    unsigned int *_urlCookieIndexMap;
    unsigned int *_nameCookieIndexMap;
}

+ (void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)arg1 usingBlock:(id)arg2;
+ (unsigned int**)_chapterDataCookieIndexMapForProperty:(int)arg1 ofChapterTOC:(id)arg2;
+ (id)imageCacheKeyForTrackWithPID:(long long)arg1 startTimeMS:(unsigned int)arg2;

- (void)dealloc;
- (id)imageDataForArtworkFormatID:(unsigned int)arg1 chapterIndex:(unsigned int)arg2 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; int x_1_1_5; int x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg3;
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlPropertyOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)countOfChapters;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)countOfGroupsForProperty:(int)arg1;
- (id)urlTitleTrimmingCharacterSet;
- (id)getImageWithArtworkFormatID:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2 chapterIndex:(unsigned int)arg3 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; int x_1_1_5; int x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg4;
- (unsigned int)totalTimeInMS;
- (unsigned int*)_cachedCookieIndexMapForProperty:(int)arg1 createIfNecessary:(BOOL)arg2;
- (struct ChapterData { }*)chapterDataRef;
- (id)bestImageDataForSize:(struct CGSize { float x1; float x2; })arg1 chapterIndex:(unsigned int)arg2 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; int x_1_1_5; int x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg3;
- (id)titlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (id)imageDataForArtworkFormatID:(unsigned int)arg1 size:(struct CGSize { float x1; float x2; })arg2 artworkChapterIndex:(unsigned int)arg3 artworkInstanceInfo:(struct MLArtworkInstanceInfo { struct MLArtworkFormatSpec { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; int x_1_1_5; int x_1_1_6; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; }*)arg4;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg1 groupingProperty:(int)arg2;
- (id)initWithChapterDataRef:(struct ChapterData { }*)arg1 totalTimeInMS:(unsigned int)arg2;

@end
