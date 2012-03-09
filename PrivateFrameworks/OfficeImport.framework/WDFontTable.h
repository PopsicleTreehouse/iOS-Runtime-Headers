/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class SFUNoCopyDictionary, NSMutableArray;

@interface WDFontTable : NSObject  {
    SFUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}


- (int)count;
- (id)init;
- (void)dealloc;
- (void)clear;
- (id)fontWithName:(id)arg1;
- (id)fontWithName:(id)arg1 create:(BOOL)arg2;
- (id)createFontWithName:(id)arg1;
- (id)fonts;

@end
