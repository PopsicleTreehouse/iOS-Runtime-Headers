/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask  {
    NSSet *_searchTypes;
    NSSet *_searchStrings;
    CalDAVPrincipalSearchPropertySet *_serverSupportSet;
    void *_searchContext;
}

@property void* searchContext;
@property(retain) CalDAVPrincipalSearchPropertySet * serverSupportSet;
@property(retain) NSSet * searchStrings;
@property(retain) NSSet * searchTypes;

+ (id)_propertiesToFindForServerSupportSet:(id)arg1;

- (id)extraAttributes;
- (void)dealloc;
- (id)searchItems;
- (void)setSearchContext:(void*)arg1;
- (id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4;
- (void*)searchContext;
- (void)setSearchTypes:(id)arg1;
- (void)setSearchStrings:(id)arg1;
- (void)setServerSupportSet:(id)arg1;
- (id)searchTypes;
- (id)serverSupportSet;
- (id)searchStrings;

@end
