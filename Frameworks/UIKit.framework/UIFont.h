/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIFont : NSObject  {
}

@property(readonly) NSString * familyName;
@property(readonly) NSString * fontName;
@property(readonly) float pointSize;
@property(readonly) float ascender;
@property(readonly) float descender;
@property(readonly) float capHeight;
@property(readonly) float xHeight;
@property(readonly) float lineHeight;

+ (float)systemFontSize;
+ (float)smallSystemFontSize;
+ (float)buttonFontSize;
+ (float)labelFontSize;
+ (id)_boldItalicSystemFontOfSize:(float)arg1;
+ (id)italicSystemFontOfSize:(float)arg1;
+ (id)fontNamesForFamilyName:(id)arg1;
+ (id)familyNames;
+ (id)fontWithMarkupDescription:(id)arg1;
+ (id)__newDummy;
+ (id)fontWithName:(id)arg1 size:(float)arg2;
+ (id)_systemFontsOfSize:(float)arg1 traits:(int)arg2;
+ (id)systemFontOfSize:(float)arg1 traits:(int)arg2;
+ (id)fontWithName:(id)arg1 size:(float)arg2 traits:(int)arg3;
+ (id)fontWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
+ (id)systemFontOfSize:(float)arg1;
+ (id)boldSystemFontOfSize:(float)arg1;

- (id)description;
- (BOOL)isFixedPitch;
- (float)xHeight;
- (Class)classForCoder;
- (id)initWithName:(id)arg1 size:(float)arg2;
- (id)_alternateSystemFonts;
- (id)familyNameForCSSFontFamilyValue;
- (id)initWithFamilyName:(id)arg1 traits:(int)arg2 size:(float)arg3;
- (BOOL)isSystemFont;
- (id)initWithMarkupDescription:(id)arg1;
- (float)descender;
- (id)markupDescription;
- (int)traits;
- (id)fontName;
- (id)familyName;
- (float)leading;
- (float)lineHeight;
- (float)capHeight;
- (id)fontWithSize:(float)arg1;
- (float)pointSize;
- (float)ascender;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct __CTFont { }*)_gkCTFont;

@end
