/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKImageData;

@interface CKCompressibleImageMediaObject : CKMediaObject  {
    CKImageData *_imageData;
}

+ (id)previewDataMIMEType;
+ (struct CGSize { float x1; float x2; })transcodeMaxSize;
+ (id)mimeTypesToFileExtensions;

- (void)dealloc;
- (id)_newTranscodedMediaObjectWithMaxByteLength:(int)arg1 forceJPEG:(BOOL)arg2;
- (id)_newTranscodedMediaObjectWithMaxByteLength:(int)arg1;
- (id)_orientationStringForImageOrientation:(int)arg1;
- (BOOL)shouldTranscodeForMMS;
- (id)newTranscodingForMMSWithMaxByteLength:(int)arg1;
- (void)logMediaDiagnotics;
- (BOOL)shouldGeneratePreviewInBackground;
- (Class)balloonPreviewClassWithPreviewData:(id)arg1;
- (float)balloonHeightWithPreviewData:(id)arg1;
- (id)newPreview:(int)arg1 highlight:(BOOL)arg2;
- (void)copyToPasteboard:(id)arg1;
- (void)configureBalloon:(id)arg1 withPreviewData:(id)arg2;
- (id)imageData;
- (int)mediaType;

@end
