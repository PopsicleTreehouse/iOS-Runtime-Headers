/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class CPSearchMatcher;

@interface ALCityManager : NSObject  {
    struct sqlite3 { } *_db;
    struct sqlite3 { } *_localizedDb;
    CPSearchMatcher *_citySearchMatcher;
}

@property(readonly) CPSearchMatcher * citySearchMatcher;

+ (struct __CFArray { }*)legacyCityForCity:(id)arg1;
+ (id)newCitiesByIdentifierMap:(id)arg1;
+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (id)defaultCitiesForLocaleCode:(id)arg1;
- (id)citySearchMatcher;
- (id)citiesMatchingName:(id)arg1 localized:(BOOL)arg2;
- (id)citiesMatchingQualifier:(id)arg1;
- (id)citiesWithIdentifiers:(id)arg1;
- (void)localizeCities:(id)arg1;
- (id)cityForClassicIdentifier:(id)arg1;
- (id)defaultCitiesForLocaleCode:(id)arg1 options:(int)arg2;
- (id)bestCityForLegacyCity:(struct __CFArray { }*)arg1;
- (id)citiesWithTimeZone:(id)arg1;
- (id)defaultCityForTimeZone:(id)arg1;
- (id)citiesMatchingName:(id)arg1;
- (id)localeWithCode:(id)arg1;

@end
