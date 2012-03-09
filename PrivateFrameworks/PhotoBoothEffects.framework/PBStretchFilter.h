/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface PBStretchFilter : PBFilter  {
    struct CGPoint { 
        float x; 
        float y; 
    } inputPoint;
}

@property struct CGPoint { float x1; float x2; } inputPoint;


- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned long)kernelArgCount;
- (void)setupKernelArguments:(id)arg1 mirrored:(BOOL)arg2;
- (int (*)())kernelWrapper;
- (void)renderWithContext:(id)arg1 inputSize:(struct CGSize { float x1; float x2; })arg2 outputRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 mirrored:(BOOL)arg4;
- (id)_lookupTableNames;
- (id)_glesUniforms;
- (const char *)_fragmentShaderSource;
- (struct CGPoint { float x1; float x2; })inputPoint;
- (void)setDefaults;

@end
