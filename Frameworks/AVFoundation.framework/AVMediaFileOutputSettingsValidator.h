/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaFileType;

@interface AVMediaFileOutputSettingsValidator : NSObject <AVOutputSettingsValidation> {
    AVMediaFileType *_fileType;
}

@property(readonly) AVMediaFileType * fileType;

+ (id)mediaFileOutputSettingsValidatorForFileType:(id)arg1;
+ (void)initialize;

- (id)init;
- (void)dealloc;
- (BOOL)validateVideoOutputSettings:(id)arg1 reason:(id*)arg2;
- (BOOL)validateAudioOutputSettings:(id)arg1 reason:(id*)arg2;
- (id)initWithFileType:(id)arg1;
- (id)fileType;

@end
