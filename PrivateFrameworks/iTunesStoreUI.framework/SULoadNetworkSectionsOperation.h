/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUSectionsResponse, ISStoreURLOperation, NSString;

@interface SULoadNetworkSectionsOperation : ISOperation  {
    ISStoreURLOperation *_baseOperation;
    NSString *_expectedVersionString;
    SUSectionsResponse *_sectionsResponse;
}

@property(retain) ISStoreURLOperation * baseOperation;
@property(retain) NSString * expectedVersionString;
@property(readonly) SUSectionsResponse * sectionsResponse;


- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)run;
- (id)baseOperation;
- (id)_copyLoadedItemImage:(id)arg1 returningError:(id*)arg2;
- (id)_itemImageForSection:(id)arg1 imageKind:(id)arg2;
- (BOOL)_loadArtworkForSections:(id)arg1 returningError:(id*)arg2;
- (id)expectedVersionString;
- (void)setBaseOperation:(id)arg1;
- (id)sectionsResponse;
- (void)setExpectedVersionString:(id)arg1;
- (void)_setSectionsResponse:(id)arg1;

@end
