/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMagnetometerData : CMLogItem  {
    id _internal;
}

@property(readonly) struct { double x1; double x2; double x3; } magneticField;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMagneticField:(struct { float x1; float x2; float x3; })arg1 andTimestamp:(double)arg2;
- (struct { double x1; double x2; double x3; })magneticField;

@end
