/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CADisplayMode, NSString, NSArray;

@interface CADisplay : NSObject  {
    void *_impl;
}

@property(readonly) NSArray * availableModes;
@property(retain) CADisplayMode * currentMode;
@property(readonly) CADisplayMode * preferredMode;
@property(copy) NSString * colorMode;
@property BOOL allowsVirtualModes;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } bounds;
@property(readonly) NSString * name;
@property(readonly) NSString * deviceName;
@property(readonly) unsigned int displayId;
@property(readonly) NSString * uniqueId;
@property(getter=isSupported,readonly) BOOL supported;
@property(readonly) int tag;
@property(getter=isExternal,readonly) BOOL external;
@property(readonly) double refreshRate;
@property(getter=isOverscanned,readonly) BOOL overscanned;
@property(copy) NSString * overscanAdjustment;
@property(readonly) float overscanAmount;
@property(getter=isCloned,readonly) BOOL cloned;
@property(getter=isCloningSupported,readonly) BOOL cloningSupported;

+ (id)mainDisplay;
+ (id)TVOutDisplay;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)displays;

- (id)uniqueId;
- (id)description;
- (BOOL)isExternal;
- (id)deviceName;
- (unsigned int)displayId;
- (id)colorMode;
- (void)setColorMode:(id)arg1;
- (BOOL)allowsVirtualModes;
- (void)setAllowsVirtualModes:(BOOL)arg1;
- (BOOL)isCloned;
- (id)_initWithDisplay:(struct Display { int (**x1)(); id x2; struct __CFString {} *x3; struct __CFString {} *x4; unsigned int x5; struct __CFString {} *x6; struct ModeSet { unsigned int x_7_1_1; unsigned int x_7_1_2[1]; } x7; int x8; int x9; int x10; struct Bounds { int x_11_1_1; int x_11_1_2; int x_11_1_3; int x_11_1_4; } x11; unsigned int x12; unsigned int x13; float x14; int x15; boolx16; boolx17; boolx18; boolx19; boolx20; boolx21; unsigned int x22; double x23; boolx24; }*)arg1;
- (void)_invalidate;
- (BOOL)isSupported;
- (void)setCurrentMode:(id)arg1;
- (id)preferredMode;
- (BOOL)isCloningSupported;
- (double)refreshRate;
- (float)overscanAmount;
- (void)setOverscanAdjustment:(id)arg1;
- (id)overscanAdjustment;
- (BOOL)isOverscanned;
- (id)availableModes;
- (void)update;
- (id)currentMode;
- (id)name;
- (int)tag;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;

@end
