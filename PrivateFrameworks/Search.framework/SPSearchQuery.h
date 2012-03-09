/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSString, NSArray;

@interface SPSearchQuery : NSObject <NSCopying> {
    unsigned int _queryID;
    NSString *_searchString;
    BOOL _cancelled;
    BOOL _finished;
    char *_domainVector;
    int _domainCount;
    double _creationTime;
    double _cancellationTime;
}

@property(readonly) NSString * searchString;
@property(readonly) BOOL cancelled;
@property(readonly) NSArray * searchDomains;
@property(readonly) double creationTime;
@property(readonly) double cancellationTime;


- (id)initWithSearchString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 forSearchDomains:(id)arg2;
- (id)searchString;
- (BOOL)cancelled;
- (double)cancellationTime;
- (double)creationTime;
- (int)domainsVectorCount;
- (char *)domainsVector;
- (id)initWithSearchString:(id)arg1 andDomainsVector:(char *)arg2 vectorCount:(int)arg3;
- (id)searchDomains;

@end
