/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOStructuredAddress : PBCodable  {
    NSString *_country;
    NSString *_countryCode;
    NSString *_administrativeArea;
    NSString *_administrativeAreaCode;
    NSString *_subAdministrativeArea;
    NSString *_locality;
    NSString *_postCode;
    NSString *_subLocality;
    NSString *_premises;
    NSString *_thoroughfare;
    NSString *_subThoroughfare;
    NSString *_fullThoroughfare;
    NSString *_postCodeExtension;
    NSMutableArray *_areaOfInterests;
    NSString *_inlandWater;
    NSString *_ocean;
    NSMutableArray *_dependentLocalitys;
    struct { 
        long long *list; 
        unsigned int count; 
        unsigned int size; 
    } _geoIds;
}

@property(readonly) BOOL hasCountry;
@property(retain) NSString * country;
@property(readonly) BOOL hasCountryCode;
@property(retain) NSString * countryCode;
@property(readonly) BOOL hasAdministrativeArea;
@property(retain) NSString * administrativeArea;
@property(readonly) BOOL hasAdministrativeAreaCode;
@property(retain) NSString * administrativeAreaCode;
@property(readonly) BOOL hasSubAdministrativeArea;
@property(retain) NSString * subAdministrativeArea;
@property(readonly) BOOL hasLocality;
@property(retain) NSString * locality;
@property(readonly) BOOL hasPostCode;
@property(retain) NSString * postCode;
@property(readonly) BOOL hasSubLocality;
@property(retain) NSString * subLocality;
@property(readonly) BOOL hasPremises;
@property(retain) NSString * premises;
@property(readonly) BOOL hasThoroughfare;
@property(retain) NSString * thoroughfare;
@property(readonly) BOOL hasSubThoroughfare;
@property(retain) NSString * subThoroughfare;
@property(readonly) BOOL hasFullThoroughfare;
@property(retain) NSString * fullThoroughfare;
@property(readonly) BOOL hasPostCodeExtension;
@property(retain) NSString * postCodeExtension;
@property(retain) NSMutableArray * areaOfInterests;
@property(readonly) BOOL hasInlandWater;
@property(retain) NSString * inlandWater;
@property(readonly) BOOL hasOcean;
@property(retain) NSString * ocean;
@property(retain) NSMutableArray * dependentLocalitys;
@property(readonly) unsigned int geoIdsCount;
@property(readonly) long long* geoIds;


- (void)setCountryCode:(id)arg1;
- (id)countryCode;
- (id)description;
- (void)dealloc;
- (id)dependentLocalitys;
- (id)administrativeAreaCode;
- (void)setGeoIds:(long long*)arg1 count:(unsigned int)arg2;
- (long long)geoIdAtIndex:(unsigned int)arg1;
- (void)addGeoId:(long long)arg1;
- (void)clearGeoIds;
- (long long*)geoIds;
- (unsigned int)geoIdsCount;
- (id)dependentLocalityAtIndex:(unsigned int)arg1;
- (unsigned int)dependentLocalitysCount;
- (id)areaOfInterestAtIndex:(unsigned int)arg1;
- (unsigned int)areaOfInterestsCount;
- (BOOL)hasAdministrativeAreaCode;
- (void)addDependentLocality:(id)arg1;
- (void)addAreaOfInterest:(id)arg1;
- (void)setDependentLocalitys:(id)arg1;
- (void)setPostCodeExtension:(id)arg1;
- (void)setAdministrativeAreaCode:(id)arg1;
- (void)setOcean:(id)arg1;
- (void)setInlandWater:(id)arg1;
- (void)setAreaOfInterests:(id)arg1;
- (void)setPremises:(id)arg1;
- (BOOL)hasInlandWater;
- (BOOL)hasOcean;
- (id)postCodeExtension;
- (BOOL)hasPostCodeExtension;
- (id)postCode;
- (BOOL)hasPostCode;
- (BOOL)hasSubThoroughfare;
- (BOOL)hasFullThoroughfare;
- (id)premises;
- (BOOL)hasPremises;
- (BOOL)hasSubLocality;
- (BOOL)hasSubAdministrativeArea;
- (BOOL)hasAdministrativeArea;
- (BOOL)hasCountry;
- (id)country;
- (void)setCountry:(id)arg1;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasCountryCode;
- (void)writeTo:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (void)setPostCode:(id)arg1;
- (void)setAdministrativeArea:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (void)setFullThoroughfare:(id)arg1;
- (BOOL)hasLocality;
- (BOOL)hasThoroughfare;
- (void)setLocality:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (id)ocean;
- (id)inlandWater;
- (id)fullThoroughfare;
- (id)subAdministrativeArea;
- (id)administrativeArea;
- (id)subLocality;
- (id)locality;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)areaOfInterests;

@end
