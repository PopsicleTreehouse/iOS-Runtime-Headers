/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery  {
    NSString *_searchBase;
    NSString *_searchScope;
}

@property(retain) NSString * searchBase;
@property(retain) NSString * searchScope;

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

- (void)dealloc;
- (id)searchBase;
- (void)setSearchBase:(id)arg1;
- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)searchScope;
- (void)setSearchScope:(id)arg1;

@end
