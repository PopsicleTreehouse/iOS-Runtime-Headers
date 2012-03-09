/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSMutableDictionary, NSMutableString, NSMutableArray, ABVCardValueSetter, NSString, NSData, ABVCardLexer;

@interface ABVCardParser : NSObject  {
    ABVCardValueSetter *_valueSetter;
    void *_source;
    ABVCardLexer *_lexer;
    NSData *_data;
    unsigned int _defaultEncoding;
    BOOL _hasImportErrors;
    BOOL _30vCard;
    NSString *_first;
    NSString *_last;
    NSString *_org;
    NSString *_formattedName;
    NSMutableArray *_emails;
    NSMutableArray *_dates;
    NSMutableArray *_phones;
    NSMutableArray *_addresses;
    NSMutableArray *_aims;
    NSMutableArray *_jabbers;
    NSMutableArray *_msns;
    NSMutableArray *_yahoos;
    NSMutableArray *_icqs;
    NSMutableArray *_untypedIMs;
    NSMutableArray *_instantMessengers;
    NSMutableArray *_socialProfiles;
    NSMutableArray *_relatedNames;
    NSMutableArray *_urls;
    NSMutableString *_notes;
    NSMutableString *_otherNotes;
    NSMutableDictionary *_extensions;
    NSString *_uid;
    NSData *_imageData;
    NSString *_imageURI;
    int _cropRectX;
    int _cropRectY;
    int _cropRectWidth;
    int _cropRectHeight;
    NSData *_cropRectChecksum;
    NSMutableArray *_itemParameters;
    NSString *_grouping;
    unsigned int _encoding;
    BOOL _quotedPrintable;
    BOOL _base64;
}

@property void* source;

+ (struct __CFArray { }*)supportedProperties;

- (void)dealloc;
- (BOOL)hasImportErrors;
- (BOOL)_setIntValueOrNoteIfNull:(int)arg1 forProperty:(int)arg2;
- (BOOL)_setDataValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (id)defaultADRLabel;
- (void)cleanUpCardState;
- (id)defaultLabel;
- (void)setLocalRecordHasAdditionalProperties:(BOOL)arg1;
- (int)_addIMHandles:(id)arg1 toService:(struct __CFString { }*)arg2 multiValue:(void*)arg3 uniquenessCheckingMultiValue:(void*)arg4;
- (int)_addIMPPProfiles:(id)arg1 multiValue:(void*)arg2 uniquenessCheckingMultiValue:(void*)arg3;
- (void)noteLackOfValueForProperty:(unsigned int)arg1;
- (void)addMultiValues:(id)arg1 toProperty:(unsigned int)arg2 valueComparator:(id)arg3;
- (BOOL)_setStringValueOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2;
- (id)_genericLabel;
- (id)parseSingleValue;
- (id)genericLabel;
- (id)phoneLabel;
- (id)_socialProfileService;
- (id)_socialProfileUsername;
- (id)_socialProfileUserId;
- (id)parseInstantMessengerProfile:(id)arg1;
- (id)dateFromISO8601String:(id)arg1;
- (BOOL)parseUID;
- (BOOL)parseTEL;
- (BOOL)parseADR;
- (BOOL)parseORG;
- (id)parseURL;
- (id)defaultURLLabel;
- (BOOL)parseADD;
- (BOOL)parseEMAIL;
- (BOOL)addIMValueTo:(id)arg1;
- (BOOL)parsePhoto:(id)arg1;
- (BOOL)parseN;
- (BOOL)parseVERSION;
- (BOOL)parseABUID;
- (BOOL)parseABExtensionType:(id)arg1;
- (BOOL)parseBDAY;
- (BOOL)parseIMPP;
- (BOOL)parseNICKNAME;
- (BOOL)parseABDATE;
- (void)parseABOrder;
- (void)parseABPhoto;
- (void)parseABShowAs;
- (BOOL)parseABMaiden;
- (BOOL)parseSocialProfiles;
- (BOOL)parseABReleatedNames;
- (BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2;
- (BOOL)importToValueSetter:(id)arg1;
- (BOOL)parseItem;
- (BOOL)_setMultiValuesOrNoteIfNull:(id)arg1 forProperty:(unsigned int)arg2 valueComparator:(id)arg3;
- (void)addAddressMultiValues;
- (void)addSocialProfileMultiValues;
- (void)addInstantMessageMultiValues;
- (void)noteLackOfValueForImageData;
- (BOOL)importToPerson:(void*)arg1 foundProperties:(const struct __CFArray {}**)arg2;
- (void*)copyNextPersonWithLength:(int*)arg1 foundProperties:(const struct __CFArray {}**)arg2;
- (struct __CFArray { }*)peopleAndProperties:(const struct __CFArray {}**)arg1;
- (id)_valueSetter;
- (id)sortedPeopleAndProperties:(const struct __CFArray {}**)arg1;
- (void)setSource:(void*)arg1;
- (void*)source;
- (void)finalize;
- (id)initWithData:(id)arg1;

@end
