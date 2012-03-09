/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSDictionary;

@interface AVVideoOutputSettings : AVOutputSettings  {
}

@property(readonly) int width;
@property(readonly) int height;
@property(readonly) NSDictionary * pixelTransferProperties;
@property(readonly) BOOL dimensionsAreBoundingBox;
@property(readonly) NSDictionary * videoSettingsDictionary;

+ (id)_validValuesForScalingMode;
+ (id)videoOutputSettingsWithVideoSettingsDictionary:(id)arg1;
+ (id)defaultVideoOutputSettings;
+ (id)registeredOutputSettingsClasses;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;

- (BOOL)dimensionsAreBoundingBox;
- (id)initWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2;
- (BOOL)validateUsingOutputSettingsValidator:(id)arg1 reason:(id*)arg2;
- (id)videoSettingsDictionary;
- (id)pixelTransferProperties;
- (id)compatibleMediaTypes;
- (int)height;
- (int)width;

@end
