/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSString, NSData, NSDate, NSDictionary, NSMutableDictionary;

@interface MBProperties : NSObject  {
    NSMutableDictionary *_plist;
    BOOL _protect;
    BOOL _protected;
}

@property double systemDomainsVersion;
@property(retain) NSData * keybagData;
@property(retain) NSDate * date;
@property double version;
@property(getter=wasPasscodeSet) BOOL passcodeSet;
@property(getter=isEncrypted) BOOL encrypted;
@property(readonly) NSDictionary * applications;
@property(retain) NSDictionary * lockdownKeys;
@property(readonly) NSString * deviceID;
@property(readonly) NSString * serialNumber;
@property(readonly) NSString * deviceName;
@property(readonly) NSString * productType;
@property(readonly) NSString * buildVersion;
@property(readonly) BOOL hasCorruptSQLiteDBs;
@property(getter=isProtected) BOOL protected;
@property(readonly) id propertyList;

+ (id)properties;
+ (id)propertiesWithFile:(id)arg1 error:(id*)arg2;

- (id)propertyList;
- (id)description;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)setEncrypted:(BOOL)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)_dataForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
- (id)deviceName;
- (id)deviceID;
- (BOOL)isProtected;
- (double)version;
- (id)buildVersion;
- (BOOL)_boolForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setDate:(id)arg1;
- (id)date;
- (void)setVersion:(double)arg1;
- (BOOL)isEncrypted;
- (id)applications;
- (id)productType;
- (BOOL)writeToFile:(id)arg1 error:(id*)arg2;
- (id)serialNumber;
- (id)keybagData;
- (void)setKeybagData:(id)arg1;
- (void)setPasscodeSet:(BOOL)arg1;
- (void)setLockdownKeys:(id)arg1;
- (BOOL)hasCorruptSQLiteDBs;
- (id)appWithBundleID:(id)arg1;
- (void)addAppsFromArray:(id)arg1;
- (void)setProtected:(BOOL)arg1;
- (id)initWithFile:(id)arg1 error:(id*)arg2;
- (double)systemDomainsVersion;
- (void)setSystemDomainsVersion:(double)arg1;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_setData:(id)arg1 forKey:(id)arg2;
- (void)_setDictionary:(id)arg1 forKey:(id)arg2;
- (id)lockdownKeys;
- (id)_stringForLockdownKey:(id)arg1;
- (void)addApp:(id)arg1;
- (BOOL)wasPasscodeSet;

@end
