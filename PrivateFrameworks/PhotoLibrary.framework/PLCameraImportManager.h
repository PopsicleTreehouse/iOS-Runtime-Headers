/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class ICDeviceBrowser, NSMutableArray;

@interface PLCameraImportManager : NSObject <ICDeviceBrowserDelegate> {
    ICDeviceBrowser *_deviceBrowser;
    NSMutableArray *_importers;
    NSMutableArray *_importersToEject;
    BOOL _wantsToStopListening;
    id _stopListeningCallbackTarget;
    SEL _stopListeningCallbackSelector;
}

@property(retain) NSMutableArray * importers;

+ (id)sharedCameraImportManager;

- (id)init;
- (void)dealloc;
- (void)setImporters:(id)arg1;
- (void)ejectCameras;
- (void)stopListeningWithCallbackTarget:(id)arg1 selector:(SEL)arg2;
- (void)stopListening;
- (unsigned int)startListening;
- (id)importerForDevice:(id)arg1 withDelegate:(id)arg2;
- (void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(BOOL)arg3;
- (void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(BOOL)arg3;
- (id)importerMatchingDevice:(id)arg1;
- (void)_cameraImporterDidFinishImporting:(id)arg1;
- (void)removeImporter:(id)arg1;
- (id)importers;
- (void)_stopListening;
- (void)addImporter:(id)arg1;

@end
