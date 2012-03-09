/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup  {
    NSSet *_addressBookHomes;
    NSSet *_directoryGatewayURLs;
}

@property(readonly) NSSet * addressBookHomes;
@property(readonly) NSSet * directoryGatewayURLs;


- (id)description;
- (void)dealloc;
- (id)directoryGatewayURLs;
- (id)addressBookHomes;
- (id)directoryGatewayURL;
- (id)homeSet;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)_copyAccountPropertiesPropFindElements;

@end
