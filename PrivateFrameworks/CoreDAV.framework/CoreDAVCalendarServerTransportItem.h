/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVLeafItem, CoreDAVItemWithHrefChildItem;

@interface CoreDAVCalendarServerTransportItem : CoreDAVItem  {
    CoreDAVLeafItem *_apsBundleID;
    CoreDAVLeafItem *_courierServer;
    CoreDAVItemWithHrefChildItem *_subscriptionURL;
    CoreDAVItemWithHrefChildItem *_tokenURL;
    CoreDAVLeafItem *_apsEnv;
    CoreDAVLeafItem *_refreshInterval;
    CoreDAVLeafItem *_xmppServer;
    CoreDAVLeafItem *_xmppURI;
}

@property(retain) CoreDAVLeafItem * apsBundleID;
@property(retain) CoreDAVLeafItem * courierServer;
@property(retain) CoreDAVItemWithHrefChildItem * subscriptionURL;
@property(retain) CoreDAVItemWithHrefChildItem * tokenURL;
@property(retain) CoreDAVLeafItem * apsEnv;
@property(retain) CoreDAVLeafItem * refreshInterval;
@property(retain) CoreDAVLeafItem * xmppServer;
@property(retain) CoreDAVLeafItem * xmppURI;


- (id)description;
- (id)init;
- (void)dealloc;
- (void)setXmppURI:(id)arg1;
- (void)setXmppServer:(id)arg1;
- (void)setRefreshInterval:(id)arg1;
- (void)setApsEnv:(id)arg1;
- (void)setCourierServer:(id)arg1;
- (void)setApsBundleID:(id)arg1;
- (void)setTokenURL:(id)arg1;
- (void)setSubscriptionURL:(id)arg1;
- (id)copyParseRules;
- (id)xmppURI;
- (id)xmppServer;
- (id)refreshInterval;
- (id)apsEnv;
- (id)courierServer;
- (id)apsBundleID;
- (id)tokenURL;
- (id)subscriptionURL;

@end
