/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSArray, MCProfile, NSString;

@interface MCPayload : NSObject  {
    MCProfile *_profile;
    NSString *_type;
    NSString *_payloadDescription;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_organization;
    NSString *_UUID;
    int _version;
    NSString *_persistentResourceID;
}

@property(readonly) NSString * friendlyName;
@property(readonly) NSArray * installationWarnings;
@property(retain) NSString * persistentResourceID;
@property(readonly) int version;
@property(readonly) NSString * UUID;
@property(readonly) NSString * organization;
@property(readonly) NSString * identifier;
@property(retain) NSString * displayName;
@property(readonly) NSString * payloadDescription;
@property(readonly) NSString * type;
@property(readonly) MCProfile * profile;

+ (id)badFieldValueErrorWithField:(id)arg1;
+ (id)wrapperPayloadDictionary;
+ (id)payloadFromDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)payloadsFromArray:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
+ (id)typeStrings;
+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;

- (id)description;
- (void)dealloc;
- (id)subtitle1Label;
- (id)subtitle2Label;
- (id)subtitle2Description;
- (id)persistentResourceID;
- (void)setPersistentResourceID:(id)arg1;
- (void)setPersistentResourceID:(id)arg1;
- (id)payloadDescription;
- (id)subtitle1Description;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (id)organization;
- (id)friendlyName;
- (id)installationWarnings;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)stubDictionary;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (int)version;
- (id)type;
- (id)identifier;
- (id)title;
- (id)profile;
- (id)UUID;

@end
