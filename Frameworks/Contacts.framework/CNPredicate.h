/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPredicate : NSPredicate <CNDonatedContactsPredicate, NSCopying> {
    bool  _augmentMainStoreResults;
    NSPredicate * _cn_predicate;
    NSArray * _mainStoreContactIdentifiers;
}

@property (nonatomic) bool augmentMainStoreResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *mainStoreContactIdentifiers;
@property (readonly) Class superclass;

+ (id)_convertSuggestions:(id)arg1 withSortOrder:(long long)arg2 mutableObjects:(bool)arg3;

- (void).cxx_destruct;
- (void)_convertContactMatches:(id)arg1 withService:(id)arg2 intoSuggestions:(id)arg3;
- (bool)augmentMainStoreResults;
- (id)cn_predicate;
- (id)contactsFromDonationStore:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)evaluateWithObject:(id)arg1;
- (bool)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)mainStoreContactIdentifiers;
- (void)mainStoreDidFetchContacts:(id)arg1 unifiedFetch:(bool)arg2;
- (id)predicateFormat;
- (void)setAugmentMainStoreResults:(bool)arg1;
- (void)setMainStoreContactIdentifiers:(id)arg1;
- (id)shortDebugDescription;
- (id)suggestedContactsWithSortOrder:(long long)arg1 keysToFetch:(id)arg2 mutableObjects:(bool)arg3 service:(id)arg4 error:(id*)arg5;

@end