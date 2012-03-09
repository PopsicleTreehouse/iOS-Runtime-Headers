/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSArray, CPSearchMatcher, NSString;

@interface SPTopHitIndexer : SPContentIndexer  {
    CPSearchMatcher *_matcher;
    NSString *_queryString;
    NSArray *_searchDomains;
}

+ (void)preheat;
+ (id)indexerForTopHits;

- (id)init;
- (void)dealloc;
- (void)beginSearch:(id)arg1 domains:(id)arg2;
- (void)setTopHit:(id)arg1 domain:(unsigned int)arg2 queryString:(id)arg3;
- (id)_fetchAndCleanQueryResults:(id)arg1;
- (id)_getDisplayIdentifierForDomain:(unsigned int)arg1;
- (void*)_copyRecordForExternalID:(id)arg1 displayIdentifier:(id)arg2 category:(id)arg3;
- (void*)_copyExternalRecordForIdentifier:(id)arg1 domain:(unsigned int)arg2;
- (void)_setTopHitWithApplication:(id)arg1 queryString:(id)arg2;
- (void)_setTopHitWithLocalRecord:(void*)arg1 content:(id)arg2 stringIdentifier:(id)arg3 domain:(unsigned int)arg4 query:(id)arg5;
- (void*)_copyRecordForApplication:(id)arg1;
- (float)_calculateMovingAverageWithLastTime:(double)arg1 andLastAverage:(float)arg2;
- (BOOL)nextSearchResults:(id*)arg1;
- (void)removeIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1 forRecordDictionary:(id)arg2;
- (BOOL)_openOrCreateStore;

@end
