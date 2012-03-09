/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptColor : SUScriptObject  {
    struct CGColor { } *_color;
}

@property(readonly) float red;
@property(readonly) float green;
@property(readonly) float blue;
@property(readonly) float alpha;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;

- (void)dealloc;
- (float)blue;
- (float)green;
- (float)red;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (float)alpha;
- (id)stringRepresentation;
- (id)attributeKeys;
- (void)setWhite:(float)arg1 alpha:(float)arg2;
- (void)setRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (void)_ntsSetColor:(struct CGColor { }*)arg1;
- (struct CGColor { }*)copyCGColor;
- (id)initWithStyleString:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;

@end
