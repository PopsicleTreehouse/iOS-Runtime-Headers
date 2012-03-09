/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUDataRepresentation<SFUZipArchiveDataRepresentation>, SFUCryptoKey, NSString, NSData, NSMutableDictionary;

@interface SFUZipArchive : NSObject  {
    NSMutableDictionary *mEntries;
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;
    NSData *mPassphraseVerifier;
    NSString *mPassphraseHint;
    SFUCryptoKey *mCryptoKey;
    NSData *mEncryptedDocumentUuid;
}

+ (BOOL)isZipArchiveAtPath:(id)arg1;

- (void)dealloc;
- (id)entryWithName:(id)arg1 dataLength:(long long)arg2;
- (id)passphraseVerifier;
- (id)passphraseHint;
- (id)encryptedDocumentUuid;
- (void)readEntries;
- (void)collapseCommonRootDirectory;
- (void)setCryptoKey:(id)arg1;
- (struct SFUZipEndOfCentralDirectory { unsigned int x1; long long x2; long long x3; })readEndOfCentralDirectoryFromInputStream:(id)arg1;
- (id)readFilenameFromBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (void)readExtraFieldFromBuffer:(const char *)arg1 size:(unsigned long)arg2 entry:(id)arg3;
- (id)allEntryNames;
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2;
- (struct SFUZipEndOfCentralDirectory { unsigned int x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2;
- (struct SFUZipEndOfCentralDirectory { unsigned int x1; long long x2; long long x3; })readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2;
- (BOOL)isEncrypted;
- (id)initWithPath:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (id)initWithData:(id)arg1 collapseCommonRootDirectory:(BOOL)arg2;
- (id)entryWithName:(id)arg1;

@end
