/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@class GLKEffectPropertyTransform;

@interface GLKEffectPropertyLight : GLKEffectProperty  {
    unsigned char _enabled;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    } _position;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    } _ambientColor;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    } _diffuseColor;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    } _specularColor;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    } _spotDirection;
    float _spotExponent;
    float _spotCutoff;
    float _constantAttenuation;
    float _linearAttenuation;
    float _quadraticAttenuation;
    GLKEffectPropertyTransform *_transform;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    } _positionEye;
    union _GLKVector4 { 
        struct { 
            float x; 
            float y; 
            float z; 
            float w; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
            float a; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
            float q; 
        } ; 
        float v[4]; 
    } _white;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    } _normalizedSpotDirectionEye;
    float _spotCutoffDegrees;
    unsigned long long *_effectDirtyUniforms;
    unsigned char _positionEyeStale;
    int _positionEyeLoc;
    int _ambientLoc;
    int _diffuseLoc;
    int _specularLoc;
    int _normalizedSpotDirectionEyeLoc;
    int _spotExponentLoc;
    int _spotCutoffLoc;
    int _constantAttenuationLoc;
    int _linearAttenuationLoc;
    int _quadraticAttenuationLoc;
    int _normalizeLoc;
    int _ambientTermLoc;
    int _lightIndex;
    int _lightingType;
    unsigned char _firstLight;
    unsigned char _useConstantColor;
}

@property unsigned char enabled;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } position;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } ambientColor;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } diffuseColor;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } specularColor;
@property union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; } spotDirection;
@property float spotExponent;
@property float spotCutoff;
@property float constantAttenuation;
@property float linearAttenuation;
@property float quadraticAttenuation;
@property(retain) GLKEffectPropertyTransform * transform;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } positionEye;
@property union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; } normalizedSpotDirectionEye;
@property float spotCutoffDegrees;
@property union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; } white;
@property int positionEyeLoc;
@property int ambientLoc;
@property int diffuseLoc;
@property int specularLoc;
@property int normalizedSpotDirectionEyeLoc;
@property int spotExponentLoc;
@property int spotCutoffLoc;
@property int constantAttenuationLoc;
@property int linearAttenuationLoc;
@property int quadraticAttenuationLoc;
@property int normalizeLoc;
@property int ambientTermLoc;
@property int lightIndex;
@property unsigned long long* effectDirtyUniforms;
@property int lightingType;
@property unsigned char positionEyeStale;
@property(readonly) unsigned char isSpot;
@property(readonly) unsigned char isAttenuated;
@property unsigned char firstLight;
@property unsigned char useConstantColor;

+ (id)effectPropertyWithAttrib:(int)arg1;
+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (void)dealloc;
- (void)bind;
- (unsigned char)enabled;
- (void)setEnabled:(unsigned char)arg1;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })position;
- (void)setTransform:(id)arg1;
- (id)transform;
- (void)setPosition:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })white;
- (void)setFirstLight:(unsigned char)arg1;
- (unsigned char)firstLight;
- (int)lightIndex;
- (void)setAmbientTermLoc:(int)arg1;
- (void)setNormalizeLoc:(int)arg1;
- (int)normalizeLoc;
- (void)setQuadraticAttenuationLoc:(int)arg1;
- (int)quadraticAttenuationLoc;
- (void)setLinearAttenuationLoc:(int)arg1;
- (int)linearAttenuationLoc;
- (void)setConstantAttenuationLoc:(int)arg1;
- (int)constantAttenuationLoc;
- (void)setSpotCutoffLoc:(int)arg1;
- (int)spotCutoffLoc;
- (void)setSpotExponentLoc:(int)arg1;
- (int)spotExponentLoc;
- (void)setNormalizedSpotDirectionEyeLoc:(int)arg1;
- (int)normalizedSpotDirectionEyeLoc;
- (void)setSpecularLoc:(int)arg1;
- (int)specularLoc;
- (void)setDiffuseLoc:(int)arg1;
- (int)diffuseLoc;
- (void)setAmbientLoc:(int)arg1;
- (int)ambientLoc;
- (void)setPositionEyeLoc:(int)arg1;
- (int)positionEyeLoc;
- (void)setPositionEyeStale:(unsigned char)arg1;
- (unsigned char)positionEyeStale;
- (unsigned long long*)effectDirtyUniforms;
- (void)setSpotCutoffDegrees:(float)arg1;
- (float)spotCutoffDegrees;
- (float)spotExponent;
- (void)setNormalizedSpotDirectionEye:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg1;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })normalizedSpotDirectionEye;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })spotDirection;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })specularColor;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })diffuseColor;
- (void)setPositionEye:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })positionEye;
- (void)setNormalize:(unsigned char)arg1;
- (float)quadraticAttenuation;
- (float)linearAttenuation;
- (float)constantAttenuation;
- (unsigned char)isAttenuated;
- (unsigned char)isSpot;
- (void)enabledMask;
- (void)directionalLightMask;
- (void)positionalLightMask;
- (void)attenuateMask;
- (void)spotMask;
- (void)setSpotCutoff:(float)arg1;
- (void)setSpotExponent:(float)arg1;
- (void)setQuadraticAttenuation:(float)arg1;
- (void)setLinearAttenuation:(float)arg1;
- (void)setConstantAttenuation:(float)arg1;
- (void)setSpotDirection:(union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })arg1;
- (void)setSpecularColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setDiffuseColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setAmbientColor:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (void)setGLDefaults;
- (void)setMasks;
- (void)setWhite:(union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })arg1;
- (char **)fshMaskStr;
- (char **)vshMaskStr;
- (unsigned int)fshMaskCt;
- (unsigned int)vshMaskCt;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)fshMasks;
- (struct GLKBigInt_s { unsigned long long x1; unsigned long long x2; }*)vshMasks;
- (float)spotCutoff;
- (int)ambientTermLoc;
- (union _GLKVector4 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; float x4[4]; })ambientColor;
- (void)initializeMasks;
- (void)setShaderBindings;
- (bool)includeShaderTextForRootNode:(id)arg1;
- (void)setLightIndex:(int)arg1;
- (void)setEffectDirtyUniforms:(unsigned long long*)arg1;
- (void)dirtyAllUniforms;
- (unsigned char)useConstantColor;
- (int)lightingType;
- (void)setUseConstantColor:(unsigned char)arg1;
- (void)setLightingType:(int)arg1;
- (id)initWithTransform:(id)arg1 lightingType:(int)arg2 firstLight:(unsigned char)arg3 useConstantColor:(unsigned char)arg4;

@end
