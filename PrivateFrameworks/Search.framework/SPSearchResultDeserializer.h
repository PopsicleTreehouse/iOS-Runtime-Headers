/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class SPSearchResult, CPSearchMatcher, NSString, NSArray;

@interface SPSearchResultDeserializer : PBDataReader  {
    unsigned int _byteVector;
    NSArray *_resultOffsetVector;
    BOOL _munmapAtDealloc;
    unsigned int _resultCount;
    unsigned int _domain;
    NSString *_displayIdentifier;
    NSString *_category;
    CPSearchMatcher *_matcher;
    CPSearchMatcher *_diacriticMatcher;
    SPSearchResult *_sortA;
    SPSearchResult *_sortB;
}

@property(readonly) unsigned int resultCount;
@property(readonly) unsigned int domain;
@property(readonly) NSString * displayIdentifier;
@property(readonly) NSString * category;
@property(readonly) CPSearchMatcher * matcher;
@property(readonly) CPSearchMatcher * diacriticMatcher;
@property(readonly) SPSearchResult * sortA;
@property(readonly) SPSearchResult * sortB;


- (unsigned int)resultCount;
- (void)dealloc;
- (int)read:(const char *)arg1 maxLength:(unsigned int)arg2;
- (id)category;
- (BOOL)deserializeResultAtIndex:(unsigned int)arg1 toCursor:(id)arg2;
- (unsigned int)domain;
- (id)displayIdentifier;
- (id)readBytes:(unsigned int)arg1;
- (id)sortB;
- (id)initWithSerializer:(id)arg1;
- (void)sortResultsUsingQueryString:(id)arg1;
- (id)initWithMallocRegion:(unsigned int)arg1 length:(unsigned int)arg2;
- (id)initWithMappedRegion:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)_prepareForRandomAccess;
- (id)sortA;
- (id)diacriticMatcher;
- (id)matcher;
- (BOOL)readResultIntoCursor:(id)arg1;

@end
