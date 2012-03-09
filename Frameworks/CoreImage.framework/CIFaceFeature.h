/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceFeature : CIFeature  {
}

@property(readonly) BOOL hasLeftEyePosition;
@property(readonly) struct CGPoint { float x1; float x2; } leftEyePosition;
@property(readonly) BOOL hasRightEyePosition;
@property(readonly) struct CGPoint { float x1; float x2; } rightEyePosition;
@property(readonly) BOOL hasMouthPosition;
@property(readonly) struct CGPoint { float x1; float x2; } mouthPosition;


- (id)type;
- (struct CGPoint { float x1; float x2; })mouthPosition;
- (BOOL)hasMouthPosition;
- (struct CGPoint { float x1; float x2; })rightEyePosition;
- (BOOL)hasRightEyePosition;
- (struct CGPoint { float x1; float x2; })leftEyePosition;
- (BOOL)hasLeftEyePosition;

@end
