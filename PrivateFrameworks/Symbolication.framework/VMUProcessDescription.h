/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, NSString, NSDictionary, NSMutableArray, NSCalendarDate;

@interface VMUProcessDescription : NSObject  {
    unsigned int _task;
    int _pid;
    struct _CSTypeRef { 
        unsigned int _opaque_1; 
        unsigned int _opaque_2; 
    } _symbolicator;
    NSString *_processName;
    BOOL _processNameNeedsCorrection;
    NSString *_executablePath;
    BOOL _executablePathNeedsCorrection;
    unsigned long long _executableLoadAddress;
    int _cpuType;
    BOOL _isNative;
    BOOL _is64Bit;
    NSDictionary *_lsApplicationInformation;
    NSMutableArray *_binaryImages;
    NSArray *_sortedBinaryImages;
    NSDictionary *_binaryImageHints;
    NSArray *_unreadableBinaryImagePaths;
    BOOL _binaryImagePostProcessingComplete;
    NSDictionary *_buildVersionDictionary;
    NSDictionary *_osVersionDictionary;
    NSString *_parentProcessName;
    NSString *_parentExecutablePath;
    int _ppid;
    NSCalendarDate *_date;
    NSString *_internalError;
}


- (BOOL)isTranslated;
- (id)processIdentifier;
- (id)description;
- (void)dealloc;
- (int)pid;
- (id)_sanitizeVersion:(id)arg1;
- (BOOL)isAppleApplication;
- (id)binaryImageDictionaryForAddress:(unsigned long long)arg1;
- (id)binaryImagesDescriptionForBacktraces:(id)arg1;
- (void)_extractBinaryImageInfoFromSymbolOwner:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1;
- (id)_readDataFromMemory:(id)arg1 atAddress:(unsigned long long)arg2 size:(unsigned long)arg3;
- (double)_extractDyldInfoFromSymbolOwner:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1 withNonContiguousMemory:(id)arg2;
- (id)_extractInfoPlistFromSymbolOwner:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1 withNonContiguousMemory:(id)arg2;
- (id)binaryImages;
- (id)processVersionDictionary;
- (id)_bundleLock;
- (id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2;
- (id)_binaryImagesDescriptionForRanges:(id)arg1;
- (id)_buildVersionDictionary;
- (id)_osVersionDictionary;
- (id)_buildInfoDescription;
- (id)processVersion;
- (id)_cpuTypeDescription;
- (id)parentProcessName;
- (id)_systemVersionDescription;
- (id)processDescriptionHeader;
- (id)dateAndVersionDescription;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2;
- (id)binaryImagesDescription;
- (unsigned int)task;
- (int)cpuType;
- (id)displayName;
- (id)processName;
- (id)executablePath;
- (id)bundleIdentifier;
- (id)date;

@end
