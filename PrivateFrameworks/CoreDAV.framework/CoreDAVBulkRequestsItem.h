/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVLeafItem, NSDictionary;

@interface CoreDAVBulkRequestsItem : CoreDAVItem {
    CoreDAVLeafItem *_maxResourcesItem;
    CoreDAVLeafItem *_maxSizeItem;
}

@property(readonly) NSDictionary * dictRepresentation;
@property(retain) CoreDAVLeafItem * maxResourcesItem;
@property(retain) CoreDAVLeafItem * maxSizeItem;

- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)dictRepresentation;
- (id)init;
- (id)maxResourcesItem;
- (id)maxSizeItem;
- (void)setMaxResourcesItem:(id)arg1;
- (void)setMaxSizeItem:(id)arg1;

@end