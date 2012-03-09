/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class CLLocation, NSArray, CLPlacemarkInternal, CLRegion, NSDictionary, NSString;

@interface CLPlacemark : NSObject <NSCopying, NSCoding> {
    CLPlacemarkInternal *_internal;
}

@property(readonly) CLLocation * location;
@property(readonly) CLRegion * region;
@property(readonly) NSDictionary * addressDictionary;
@property(readonly) NSString * name;
@property(readonly) NSString * thoroughfare;
@property(readonly) NSString * subThoroughfare;
@property(readonly) NSString * locality;
@property(readonly) NSString * subLocality;
@property(readonly) NSString * administrativeArea;
@property(readonly) NSString * subAdministrativeArea;
@property(readonly) NSString * postalCode;
@property(readonly) NSString * ISOcountryCode;
@property(readonly) NSString * country;
@property(readonly) NSString * inlandWater;
@property(readonly) NSString * ocean;
@property(readonly) NSArray * areasOfInterest;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)country;
- (id)location;
- (id)name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)region;
- (id)ocean;
- (id)inlandWater;
- (id)fullThoroughfare;
- (id)ISOcountryCode;
- (id)postalCode;
- (id)subAdministrativeArea;
- (id)administrativeArea;
- (id)subLocality;
- (id)locality;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)formattedAddressLines;
- (id)initWithPlacemark:(id)arg1;
- (id)areasOfInterest;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 region:(id)arg3 areasOfInterest:(id)arg4;
- (id)addressDictionary;

@end
