/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, CoreDAVItem, CoreDAVHrefItem;

@interface CoreDAVPrincipalItem : CoreDAVItem  {
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_all;
    CoreDAVItemWithNoChildren *_authenticated;
    CoreDAVItemWithNoChildren *_unauthenticated;
    CoreDAVItem *_property;
    CoreDAVItemWithNoChildren *_selfItem;
}

@property(retain) CoreDAVHrefItem * href;
@property(retain) CoreDAVItemWithNoChildren * all;
@property(retain) CoreDAVItemWithNoChildren * authenticated;
@property(retain) CoreDAVItemWithNoChildren * unauthenticated;
@property(retain) CoreDAVItem * property;
@property(retain) CoreDAVItemWithNoChildren * selfItem;


- (id)description;
- (id)init;
- (void)dealloc;
- (void)setAuthenticated:(id)arg1;
- (id)initTypeIsSelf;
- (id)initTypeIsUnauthenticated;
- (id)initTypeIsAuthenticated;
- (id)initTypeIsProperty:(id)arg1;
- (id)initTypeIsHREFWithURL:(id)arg1;
- (id)initTypeIsAll;
- (id)selfItem;
- (id)authenticated;
- (id)all;
- (void)setSelfItem:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (void)setAll:(id)arg1;
- (id)hashString;
- (id)copyParseRules;
- (id)unauthenticated;
- (void)write:(id)arg1;
- (void)setHref:(id)arg1;
- (id)href;
- (void)setProperty:(id)arg1;
- (id)property;

@end
