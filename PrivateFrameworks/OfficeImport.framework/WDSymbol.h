/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDFont, WDCharacterProperties;

@interface WDSymbol : WDRun  {
    WDCharacterProperties *mProperties;
    WDFont *mFont;
    unsigned short mCharacter;
}


- (void)dealloc;
- (id)properties;
- (id)font;
- (void)setFont:(id)arg1;
- (unsigned short)character;
- (void)clearProperties;
- (void)setCharacter:(unsigned short)arg1;
- (id)initWithParagraph:(id)arg1;
- (int)runType;

@end
