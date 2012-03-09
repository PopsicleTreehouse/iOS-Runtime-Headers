/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOGeocodeRequest : GEOPlaceSearchRequest  {
    unsigned short _provider;
    NSString *_logRequestToFile;
    NSString *_logResponseToFile;
}

@property unsigned short provider;
@property(retain) NSString * logRequestToFile;
@property(retain) NSString * logResponseToFile;


- (void)setProvider:(unsigned short)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (void)dealloc;
- (id)logResponseToFile;
- (id)logRequestToFile;
- (unsigned short)provider;
- (void)setLogResponseToFile:(id)arg1;
- (void)setLogRequestToFile:(id)arg1;
- (id)initForwardGeocodeWithAddressString:(id)arg1;
- (id)initForwardGeocodeWithAddressDictionary:(id)arg1;
- (id)initReverseGeocodeWithCoordinate:(struct { double x1; double x2; })arg1;

@end
