/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKMediaObject, NSData;

@interface CKMediaPreviewGenerator : NSOperation  {
    BOOL _generateComposePreview;
    int _orientation;
    CKMediaObject *_mediaObject;
    id _delegate;
    NSData *_previewResult;
    NSData *_composePreviewResult;
}

@property(readonly) NSData * composePreviewResult;
@property(readonly) NSData * previewResult;
@property id delegate;
@property(retain) CKMediaObject * mediaObject;
@property BOOL generateComposePreview;
@property int orientation;


- (void)main;
- (void)dealloc;
- (BOOL)generateComposePreview;
- (void)setGenerateComposePreview:(BOOL)arg1;
- (void)setMediaObject:(id)arg1;
- (id)composePreviewResult;
- (id)previewResult;
- (void)setOrientation:(int)arg1;
- (int)orientation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)mediaObject;

@end
