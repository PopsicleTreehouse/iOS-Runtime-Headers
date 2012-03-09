/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetInspector, NSMutableArray, AVAssetCache, NSURL;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader  {
    AVAssetInspector *_assetInspector;
    AVAssetCache *_assetCache;
    BOOL _shouldMatchDataInCacheByURLPathComponentOnly;
    BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;
    NSURL *_downloadDestinationURL;
    struct OpaqueFigFormatReader { } *_formatReader;
    struct OpaqueFigSimpleMutex { } *_loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    int _status;
    long _basicInspectionFailureCode;
    NSURL *_URL;
}

@property(readonly) NSURL * URL;
@property(readonly) AVAssetCache * assetCache;
@property(readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly) NSURL * downloadDestinationURL;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (BOOL)_providesAccurateTiming;
- (struct OpaqueFigSimpleMutex { }*)_loadingMutex;
- (id)_loadValuesWhileMutexLockedForKeys:(id)arg1;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (BOOL)_updateStatusWhileMutexLocked:(int)arg1 figErrorCode:(long)arg2;
- (BOOL)_inspectionRequiresAFormatReader;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1;
- (int)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1;
- (void)_setStatus:(int)arg1 figErrorCode:(long)arg2;
- (int)_status;
- (id)downloadDestinationURL;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (id)assetCache;
- (id)chapterGroupInfo;
- (id)assetInspector;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (BOOL)isComposable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (BOOL)hasProtectedContent;
- (void)_serverHasDied;
- (id)lyrics;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (BOOL)_isStreaming;
- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (int)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1;
- (void)finalize;
- (id)URL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (BOOL)isReadable;

@end
