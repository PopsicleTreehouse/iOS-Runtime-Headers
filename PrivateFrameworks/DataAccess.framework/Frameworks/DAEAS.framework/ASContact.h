/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSDate, NSString, NSArray;

@interface ASContact : ASChangedCollectionLeaf <DADataElement> {
    void *_abRecord;
    NSDate *_anniversary;
    NSString *_assistantName;
    NSString *_assistantTelephoneNumber;
    NSDate *_birthday;
    NSString *_body;
    int _bodySize;
    BOOL _bodyTruncated;
    NSString *_business2TelephoneNumber;
    NSString *_businessAddressCity;
    NSString *_businessAddressCountry;
    NSString *_businessAddressPostalCode;
    NSString *_businessAddressState;
    NSString *_businessAddressStreet;
    NSString *_businessFaxNumber;
    NSString *_businessTelephoneNumber;
    NSString *_carTelephoneNumber;
    NSArray *_categories;
    NSArray *_children;
    NSString *_companyName;
    NSString *_department;
    NSString *_email1Address;
    NSString *_email2Address;
    NSString *_email3Address;
    NSString *_fileAs;
    NSString *_firstName;
    NSString *_home2TelephoneNumber;
    NSString *_homeAddressCity;
    NSString *_homeAddressCountry;
    NSString *_homeAddressPostalCode;
    NSString *_homeAddressState;
    NSString *_homeAddressStreet;
    NSString *_homeFaxNumber;
    NSString *_homeTelephoneNumber;
    NSString *_jobTitle;
    NSString *_lastName;
    NSString *_middleName;
    NSString *_mobileTelephoneNumber;
    NSString *_officeLocation;
    NSString *_otherAddressCity;
    NSString *_otherAddressCountry;
    NSString *_otherAddressPostalCode;
    NSString *_otherAddressState;
    NSString *_otherAddressStreet;
    NSString *_pagerNumber;
    NSString *_picture;
    NSString *_radioTelephoneNumber;
    NSString *_spouse;
    NSString *_suffix;
    NSString *_title;
    NSString *_webpage;
    NSString *_yomiCompanyName;
    NSString *_yomiFirstName;
    NSString *_yomiLastName;
    NSString *_customerID;
    NSString *_governmentID;
    NSString *_im1Address;
    NSString *_im2Address;
    NSString *_im3Address;
    NSString *_managerName;
    NSString *_companyMainPhone;
    NSString *_accountName;
    NSString *_nickName;
    NSString *_mms;
    int _fileAsAutoConstruction;
}

@property(retain) NSDate * anniversary;
@property(retain) NSString * assistantName;
@property(retain) NSString * assistantTelephoneNumber;
@property(retain) NSDate * birthday;
@property(retain) NSString * body;
@property int bodySize;
@property BOOL bodyTruncated;
@property(retain) NSString * business2TelephoneNumber;
@property(retain) NSString * businessAddressCity;
@property(retain) NSString * businessAddressCountry;
@property(retain) NSString * businessAddressPostalCode;
@property(retain) NSString * businessAddressState;
@property(retain) NSString * businessAddressStreet;
@property(retain) NSString * businessFaxNumber;
@property(retain) NSString * businessTelephoneNumber;
@property(retain) NSString * carTelephoneNumber;
@property(retain) NSArray * categories;
@property(retain) NSArray * children;
@property(retain) NSString * companyName;
@property(retain) NSString * department;
@property(retain) NSString * email1Address;
@property(retain) NSString * email2Address;
@property(retain) NSString * email3Address;
@property(retain) NSString * fileAs;
@property(retain) NSString * firstName;
@property(retain) NSString * home2TelephoneNumber;
@property(retain) NSString * homeAddressCity;
@property(retain) NSString * homeAddressCountry;
@property(retain) NSString * homeAddressPostalCode;
@property(retain) NSString * homeAddressState;
@property(retain) NSString * homeAddressStreet;
@property(retain) NSString * homeTelephoneNumber;
@property(retain) NSString * homeFaxNumber;
@property(retain) NSString * jobTitle;
@property(retain) NSString * lastName;
@property(retain) NSString * middleName;
@property(retain) NSString * mobileTelephoneNumber;
@property(retain) NSString * officeLocation;
@property(retain) NSString * otherAddressCity;
@property(retain) NSString * otherAddressCountry;
@property(retain) NSString * otherAddressPostalCode;
@property(retain) NSString * otherAddressState;
@property(retain) NSString * otherAddressStreet;
@property(retain) NSString * pagerNumber;
@property(retain) NSString * picture;
@property(retain) NSString * radioTelephoneNumber;
@property(retain) NSString * spouse;
@property(retain) NSString * suffix;
@property(retain) NSString * title;
@property(retain) NSString * webpage;
@property(retain) NSString * yomiCompanyName;
@property(retain) NSString * yomiFirstName;
@property(retain) NSString * yomiLastName;
@property(retain) NSString * customerID;
@property(retain) NSString * governmentID;
@property(retain) NSString * im1Address;
@property(retain) NSString * im2Address;
@property(retain) NSString * im3Address;
@property(retain) NSString * managerName;
@property(retain) NSString * companyMainPhone;
@property(retain) NSString * accountName;
@property(retain) NSString * nickName;
@property(retain) NSString * mms;

+ (id)contactWithABRecord:(void*)arg1 serverID:(id)arg2;
+ (void)_setSystemTimeZoneForUnitTests:(id)arg1;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;

- (int)bodySize;
- (void)setChildren:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setCategories:(id)arg1;
- (id)categories;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (id)lastName;
- (id)firstName;
- (id)body;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)children;
- (void)setBody:(id)arg1;
- (id)suffix;
- (void)setSuffix:(id)arg1;
- (void)setBodyTruncatedNumber:(id)arg1;
- (void)setBodySizeNumber:(id)arg1;
- (BOOL)deleteFromAddressBook;
- (BOOL)saveServerIDToContact;
- (BOOL)loadABRecord;
- (BOOL)saveToAddressBookWithExistingRecord:(void*)arg1 inSource:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 storeExternalRep:(BOOL)arg5;
- (void)_detectFileAsAutoConstruction;
- (void)setEmailFromAppData:(int)arg1 setter:(SEL)arg2;
- (void)setBodySize:(int)arg1;
- (id)mms;
- (id)governmentID;
- (id)customerID;
- (id)officeLocation;
- (id)yomiCompanyName;
- (BOOL)_saveExternalRepToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2 storeExternalRep:(BOOL)arg3;
- (BOOL)_saveIMsToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_saveURLsToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_saveEmailsToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_saveStreetAddressesToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_savePhoneNumbersToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_saveRelatedNamesToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2;
- (BOOL)_saveDatesToAddressBookWithExistingRecord:(void*)arg1 shouldMergeProperties:(BOOL)arg2;
- (id)picture;
- (id)yomiLastName;
- (id)yomiFirstName;
- (id)nickName;
- (id)middleName;
- (id)jobTitle;
- (id)fileAs;
- (id)department;
- (id)companyName;
- (id)birthday;
- (id)im3Address;
- (id)im2Address;
- (id)im1Address;
- (id)webpage;
- (id)email3Address;
- (id)email2Address;
- (id)email1Address;
- (id)otherAddressStreet;
- (id)otherAddressState;
- (id)otherAddressPostalCode;
- (id)otherAddressCountry;
- (id)otherAddressCity;
- (id)homeAddressStreet;
- (id)homeAddressState;
- (id)homeAddressPostalCode;
- (id)homeAddressCountry;
- (id)homeAddressCity;
- (id)businessAddressStreet;
- (id)businessAddressState;
- (id)businessAddressPostalCode;
- (id)businessAddressCountry;
- (id)businessAddressCity;
- (id)companyMainPhone;
- (id)radioTelephoneNumber;
- (id)carTelephoneNumber;
- (id)assistantTelephoneNumber;
- (id)pagerNumber;
- (id)mobileTelephoneNumber;
- (id)homeFaxNumber;
- (id)home2TelephoneNumber;
- (id)homeTelephoneNumber;
- (id)businessFaxNumber;
- (id)business2TelephoneNumber;
- (id)businessTelephoneNumber;
- (id)spouse;
- (id)managerName;
- (id)assistantName;
- (id)_transformedDateForABFramework:(id)arg1;
- (id)anniversary;
- (id)initWithABRecord:(void*)arg1 serverID:(id)arg2;
- (void)setABRecord:(void*)arg1;
- (void)_loadAttributesFromABRecord:(void*)arg1;
- (void)_reconstructFileAsField;
- (BOOL)_setExternalRepWithExistingRecord:(void*)arg1;
- (BOOL)_setIMsWithExistingRecord:(void*)arg1;
- (BOOL)_setURLsWithExistingRecord:(void*)arg1;
- (BOOL)_setEmailsWithExistingRecord:(void*)arg1;
- (BOOL)_setStreetAddressesWithExistingRecord:(void*)arg1;
- (BOOL)_setPhoneNumbersWithExistingRecord:(void*)arg1;
- (BOOL)_setRelatedNamesWithExistingRecord:(void*)arg1;
- (BOOL)_setDatesWithExistingRecord:(void*)arg1;
- (void)_setImageOnContactFromPerson:(void*)arg1;
- (void)setYomiLastName:(id)arg1;
- (void)setYomiFirstName:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setJobTitle:(id)arg1;
- (void)setDepartment:(id)arg1;
- (void)setCompanyName:(id)arg1;
- (void)setBirthday:(id)arg1;
- (void)setFileAs:(id)arg1;
- (void)setMms:(id)arg1;
- (void)setGovernmentID:(id)arg1;
- (void)setCustomerID:(id)arg1;
- (void)setYomiCompanyName:(id)arg1;
- (void)setOfficeLocation:(id)arg1;
- (void)setIm3Address:(id)arg1;
- (void)setIm2Address:(id)arg1;
- (void)setIm1Address:(id)arg1;
- (void)setWebpage:(id)arg1;
- (void)setEmail3Address:(id)arg1;
- (void)setEmail2Address:(id)arg1;
- (void)setEmail1Address:(id)arg1;
- (void)setOtherAddressStreet:(id)arg1;
- (void)setOtherAddressState:(id)arg1;
- (void)setOtherAddressPostalCode:(id)arg1;
- (void)setOtherAddressCountry:(id)arg1;
- (void)setOtherAddressCity:(id)arg1;
- (void)setHomeAddressStreet:(id)arg1;
- (void)setHomeAddressState:(id)arg1;
- (void)setHomeAddressPostalCode:(id)arg1;
- (void)setHomeAddressCountry:(id)arg1;
- (void)setHomeAddressCity:(id)arg1;
- (void)setBusinessAddressStreet:(id)arg1;
- (void)setBusinessAddressState:(id)arg1;
- (void)setBusinessAddressPostalCode:(id)arg1;
- (void)setBusinessAddressCountry:(id)arg1;
- (void)setBusinessAddressCity:(id)arg1;
- (void)setCompanyMainPhone:(id)arg1;
- (void)setRadioTelephoneNumber:(id)arg1;
- (void)setCarTelephoneNumber:(id)arg1;
- (void)setAssistantTelephoneNumber:(id)arg1;
- (void)setPagerNumber:(id)arg1;
- (void)setMobileTelephoneNumber:(id)arg1;
- (void)setHomeFaxNumber:(id)arg1;
- (void)setBusinessFaxNumber:(id)arg1;
- (void)setBusiness2TelephoneNumber:(id)arg1;
- (void)setBusinessTelephoneNumber:(id)arg1;
- (void)setHome2TelephoneNumber:(id)arg1;
- (void)setHomeTelephoneNumber:(id)arg1;
- (void)setSpouse:(id)arg1;
- (void)setManagerName:(id)arg1;
- (void)setAssistantName:(id)arg1;
- (void)setAnniversary:(id)arg1;
- (id)_transformedDateForActiveSync:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)setBodyTruncated:(BOOL)arg1;
- (BOOL)bodyTruncated;
- (void)loadClientIDs;
- (int)dataclass;
- (BOOL)deleteFromContainer:(void*)arg1;
- (BOOL)saveServerIDToExistingItem;
- (BOOL)loadLocalItemWithAccount:(id)arg1;
- (void)setLocalItem:(void*)arg1;
- (BOOL)saveAfterMapWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5;
- (BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5;
- (void)appendActiveSyncDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (void)postProcessApplicationData;
- (id)asParseRules;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;

@end
