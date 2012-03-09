/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSObject<MFDeviceDriver>, NSAffineTransform;

@interface MFTransform : NSObject <NSCopying> {
    NSAffineTransform *m_world;
    struct CGPoint { 
        float x; 
        float y; 
    } m_windowOrg;
    struct CGPoint { 
        float x; 
        float y; 
    } m_windowExt;
    struct CGPoint { 
        float x; 
        float y; 
    } m_viewportOrg;
    struct CGPoint { 
        float x; 
        float y; 
    } m_viewportExt;
    NSAffineTransform *m_combinedTransform;
    int m_mapMode;
    NSObject<MFDeviceDriver> *m_deviceDriver;
}


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)isUpsideDown;
- (struct CGPoint { float x1; float x2; })DPtoLP:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })LPtoDP:(struct CGPoint { float x1; float x2; })arg1;
- (int)updateTransform;
- (id)getWorldMatrix;
- (void)setWorldMatrix:(id)arg1;
- (struct CGPoint { float x1; float x2; })getWindowOrg;
- (void)setWindowOrg:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })getWindowExtent;
- (void)setWindowExt:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })getViewportOrg;
- (void)setViewportOrg:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })getViewportExtent;
- (void)setViewportExt:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTransformMatrix:(id)arg1;
- (int)getMapMode;
- (int)offsetWindowOrg:(int)arg1 :(int)arg2;
- (int)offsetViewportOrg:(int)arg1 :(int)arg2;
- (id)initWithDriver:(id)arg1;
- (id)getTransformMatrix;
- (int)setWindowExt:(int)arg1 :(int)arg2;
- (int)setWindowOrg:(int)arg1 :(int)arg2;
- (int)scaleWindowExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)setWorldTransform:(const struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1;
- (int)modifyWorldTransform:(const struct { float x1; float x2; float x3; float x4; float x5; float x6; }*)arg1 :(int)arg2;
- (int)setViewportExt:(int)arg1 :(int)arg2;
- (int)setViewportOrg:(int)arg1 :(int)arg2;
- (int)scaleViewportExt:(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4;
- (int)setMapMode:(int)arg1;

@end
