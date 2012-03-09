/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, SAWeatherCondition;

@interface SAWeatherForecast : AceObject <SAAceSerializable> {
}

@property(retain) NSNumber * chanceOfPrecipitation;
@property(retain) SAWeatherCondition * condition;
@property(retain) NSNumber * isUserRequested;
@property(retain) NSNumber * timeIndex;

+ (id)forecast;
+ (id)forecastWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setCondition:(id)arg1;
- (id)condition;
- (id)chanceOfPrecipitation;
- (void)setChanceOfPrecipitation:(id)arg1;
- (id)isUserRequested;
- (void)setIsUserRequested:(id)arg1;
- (id)timeIndex;
- (void)setTimeIndex:(id)arg1;
- (id)encodedClassName;

@end
