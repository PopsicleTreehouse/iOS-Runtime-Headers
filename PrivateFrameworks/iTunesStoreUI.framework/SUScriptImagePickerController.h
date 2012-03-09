/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptFunction, WebScriptObject, NSString;

@interface SUScriptImagePickerController : SUScriptNavigationController  {
    SUScriptFunction *_cancelFunction;
    SUScriptFunction *_pickedMediaFunction;
}

@property(retain) WebScriptObject * cancelFunction;
@property(copy) id mediaTypes;
@property(retain) WebScriptObject * pickedMediaFunction;
@property(copy) id sourceType;
@property(readonly) id cameraDeviceFront;
@property(readonly) id cameraDeviceRear;
@property(readonly) id captureModePhoto;
@property(readonly) id captureModeVideo;
@property(readonly) id flashModeAuto;
@property(readonly) id flashModeOff;
@property(readonly) id flashModeOn;
@property(readonly) NSString * propertyAllowsEditing;
@property(readonly) NSString * propertyAllowsVideoEditing;
@property(readonly) NSString * propertyCaptureMaximumDuration;
@property(readonly) NSString * propertyFlashMode;
@property(readonly) NSString * propertyVideoQuality;
@property(readonly) NSString * propertyVideoMaximumDuration;
@property(readonly) NSString * propertyViewImageBeforeSelecting;
@property(readonly) id quality640x480;
@property(readonly) id qualityHigh;
@property(readonly) id qualityLow;
@property(readonly) id qualityMedium;
@property(readonly) id sourceTypeCamera;
@property(readonly) id sourceTypePhotoLibrary;
@property(readonly) id sourceTypeSavedPhotosAlbum;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (void)dealloc;
- (id)mediaTypes;
- (void)setMediaTypes:(id)arg1;
- (void)setSourceType:(id)arg1;
- (id)isFlashAvailableForCameraDevice:(id)arg1;
- (id)availableCaptureModesForCameraDevice:(id)arg1;
- (id)isCameraDeviceAvailable:(id)arg1;
- (id)availableMediaTypesForSourceType:(id)arg1;
- (id)isSourceTypeAvailable:(id)arg1;
- (id)sourceType;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)attributeKeys;
- (BOOL)_sendDidPickWithInfo:(id)arg1;
- (BOOL)_sendCancel;
- (id)sourceTypeSavedPhotosAlbum;
- (id)sourceTypePhotoLibrary;
- (id)sourceTypeCamera;
- (id)qualityMedium;
- (id)qualityLow;
- (id)qualityHigh;
- (id)quality640x480;
- (id)propertyViewImageBeforeSelecting;
- (id)propertyVideoMaximumDuration;
- (id)propertyVideoQuality;
- (id)propertyFlashMode;
- (id)propertyCaptureMaximumDuration;
- (id)propertyAllowsVideoEditing;
- (id)propertyAllowsEditing;
- (id)flashModeOn;
- (id)flashModeOff;
- (id)flashModeAuto;
- (id)captureModeVideo;
- (id)captureModePhoto;
- (id)cameraDeviceRear;
- (id)cameraDeviceFront;
- (void)setPickedMediaFunction:(id)arg1;
- (void)setCancelFunction:(id)arg1;
- (id)pickedMediaFunction;
- (id)cancelFunction;
- (id)_imagePickerController;
- (id)newNativeViewController;
- (void)setNativeViewController:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;

@end
