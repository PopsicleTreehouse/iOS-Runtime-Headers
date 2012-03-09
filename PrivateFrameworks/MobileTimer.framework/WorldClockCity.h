/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class ALCity, NSString, NSDictionary, NSNumber, NSURL;

@interface WorldClockCity : NSObject  {
    ALCity *_alCity;
    NSString *_timeZone;
    NSString *_name;
    NSString *_countryName;
    NSString *_countryCode;
    NSString *_unlocalizedName;
    NSString *_unlocalizedCountryName;
}

@property(readonly) NSDictionary * properties;
@property(readonly) NSNumber * alCityId;
@property(readonly) NSString * timeZone;
@property(readonly) NSString * name;
@property(readonly) NSString * countryName;
@property(readonly) NSString * unlocalizedCityName;
@property(readonly) NSString * unlocalizedCountryName;
@property(readonly) NSString * countryCode;
@property(readonly) NSURL * idUrl;

+ (BOOL)isWorldClockCityProperties:(id)arg1;

- (id)countryCode;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (void)dealloc;
- (id)countryName;
- (id)unlocalizedCountryName;
- (id)initWithALCityIdentifier:(int)arg1;
- (id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6;
- (id)initWithALCity:(id)arg1;
- (id)idUrl;
- (id)properties;
- (id)initWithProperties:(id)arg1;
- (id)timeZone;
- (id)name;
- (id)alCityId;
- (id)unlocalizedCityName;

@end
