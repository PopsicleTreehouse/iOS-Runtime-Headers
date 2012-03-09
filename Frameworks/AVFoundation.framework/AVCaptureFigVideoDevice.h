/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSDictionary;

@interface AVCaptureFigVideoDevice : AVCaptureDevice <MCProfileConnectionObserver> {
    NSDictionary *_deviceProperties;
    int _focusMode;
    struct CGPoint { 
        float x; 
        float y; 
    } _focusPointOfInterest;
    int _focusInFlightCount;
    BOOL _adjustingFocus;
    int _exposureMode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _exposureDuration;
    float _exposureGain;
    BOOL _manualExposureSupportEnabled;
    float _autoExposureBias;
    struct CGPoint { 
        float x; 
        float y; 
    } _exposurePointOfInterest;
    BOOL _adjustingExposure;
    int _wbMode;
    float _whiteBalanceTemperature;
    BOOL _adjustingWB;
    BOOL _automaticallyAdjustsImageControlMode;
    int _imageControlMode;
    int _flashMode;
    BOOL _flashActive;
    BOOL _flashAvailable;
    int _torchMode;
    float _torchLevel;
    BOOL _torchAvailable;
    BOOL _isConnected;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _faceRectangle;
    int _faceRectangleAngle;
    BOOL _faceDetectionMetadataEnabled;
    struct dispatch_queue_s { } *_torchAppsSerialQueue;
    struct dispatch_source_s { } *_torchAppsKillTimer;
    struct OpaqueFigRecorder { } *_recorderForTorchApps;
    float _saturation;
    float _contrast;
    AVWeakReference *_weakReference;
}

+ (BOOL)_cameraAccessIsEnabled;
+ (id)_devices;
+ (void)initialize;

- (id)init;
- (void)dealloc;
- (BOOL)isFaceDetectionDebugMetadataReportingEnabled;
- (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)arg1;
- (int)faceRectangleAngle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangle;
- (BOOL)isAdjustingFocus;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (BOOL)_setContrast:(float)arg1;
- (BOOL)_setSaturation:(float)arg1;
- (BOOL)isFaceDetectionSupported;
- (struct dispatch_source_s { }*)_createTorchAppsKillTimer;
- (struct OpaqueFigRecorder { }*)_createFigRecorderForTorchApps;
- (void)_teardownTorchAppsKillTimer;
- (void)_setFlashActive:(BOOL)arg1;
- (BOOL)_setFloatValue:(float)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (float)_floatValueForRecorderProperty:(struct __CFString { }*)arg1;
- (void)_setAdjustingWhiteBalance:(BOOL)arg1;
- (void)_setAdjustingExposure:(BOOL)arg1;
- (void)_setAdjustingFocus:(BOOL)arg1;
- (void)_applyPendingPropertiesToRecorder;
- (void)_updateFlashAndTorchAvailability;
- (void)_updateImageControlMode;
- (BOOL)_setImageControlMode:(int)arg1;
- (BOOL)_setFaceDetectionDebugMetadataReportingEnabled:(BOOL)arg1;
- (BOOL)_setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (BOOL)_subjectAreaChangeMonitoringEnabled;
- (BOOL)_setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (int)_torchMode;
- (BOOL)_setTorchMode:(int)arg1;
- (int)_flashMode;
- (BOOL)_setFlashMode:(int)arg1;
- (int)_whiteBalanceMode;
- (BOOL)_setWhiteBalanceMode:(int)arg1;
- (BOOL)_setWhiteBalanceTemperature:(float)arg1;
- (BOOL)_setExposureWithMode:(int)arg1 pointOfInterest:(id)arg2;
- (BOOL)_setAutoExposureBias:(float)arg1;
- (BOOL)_setFocusWithMode:(int)arg1 pointOfInterest:(id)arg2;
- (void)_restoreColorProperties;
- (void)_teardownFigRecorderForTorchApps;
- (id)devicePropertiesDictionary;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (BOOL)doesHandleNotification:(id)arg1;
- (void)setSaturation:(float)arg1;
- (float)saturation;
- (void)setImageControlMode:(int)arg1;
- (int)imageControlMode;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (BOOL)automaticallyAdjustsImageControlMode;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (BOOL)isAdjustingWhiteBalance;
- (void)setWhiteBalanceTemperature:(float)arg1;
- (float)whiteBalanceTemperature;
- (void)setWhiteBalanceMode:(int)arg1;
- (int)whiteBalanceMode;
- (BOOL)isAdjustingExposure;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (void)setAutoExposureBias:(float)arg1;
- (float)autoExposureBias;
- (void)setManualExposureSupportEnabled:(BOOL)arg1;
- (BOOL)isManualExposureSupportEnabled;
- (void)setExposureGain:(float)arg1;
- (float)exposureGain;
- (void)setExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (void)setExposureMode:(int)arg1;
- (int)exposureMode;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (void)setFocusMode:(int)arg1;
- (int)focusMode;
- (void)setTorchMode:(int)arg1;
- (int)torchMode;
- (BOOL)isTorchAvailable;
- (float)torchLevel;
- (BOOL)hasTorch;
- (void)setFlashMode:(int)arg1;
- (int)flashMode;
- (BOOL)isFlashActive;
- (BOOL)isFlashAvailable;
- (BOOL)hasFlash;
- (BOOL)isInUseByAnotherApplication;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)_sessionDidStart;
- (void)_sessionWillStart;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (id)modelID;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (BOOL)isExposurePointOfInterestSupported;
- (BOOL)isExposureModeSupported:(int)arg1;
- (BOOL)isFocusPointOfInterestSupported;
- (BOOL)isFocusModeSupported:(int)arg1;
- (BOOL)isTorchModeSupported:(int)arg1;
- (BOOL)isFlashModeSupported:(int)arg1;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id*)arg1;
- (BOOL)isConnected;
- (BOOL)hasMediaType:(id)arg1;
- (BOOL)_faceDetectionDrivenImageProcessingEnabled;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (void)setSession:(id)arg1;
- (id)uniqueID;
- (id)initWithProperties:(id)arg1;
- (id)localizedName;
- (int)position;
- (void)setContrast:(float)arg1;
- (float)contrast;

@end
